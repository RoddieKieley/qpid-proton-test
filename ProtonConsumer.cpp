#include <proton/connection.hpp>
#include <proton/connection_options.hpp>
#include <proton/container.hpp>
#include <proton/delivery.hpp>
#include <proton/link.hpp>
#include <proton/message.hpp>
#include <proton/message_id.hpp>
#include <proton/messaging_handler.hpp>
#include <proton/value.hpp>

#include <iostream>
#include <map>

#include "fake_cpp11.hpp"
#include "ProtonConsumer.h"

// constructor
//ProtonConsumer::ProtonConsumer(const std::string &s) :
//    url(s) {};

// destructor
//ProtonConsumer::~ProtonConsumer() {}
//
//void ProtonConsumer::on_container_start(proton::container &c) {
//  proton::connection_options co;
//  receiver = c.open_receiver(url, co);
//}
//
//void ProtonConsumer::on_message(proton::delivery &d, proton::message &msg) {
//}
//
//void ProtonConsumer::on_container_stop(proton::container &c) {}