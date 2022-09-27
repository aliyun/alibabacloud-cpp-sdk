// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MSCOPENSUBSCRIPTION20210713_H_
#define ALIBABACLOUD_MSCOPENSUBSCRIPTION20210713_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_MscOpenSubscription20210713 {
class CreateContactRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> contactName{};
  shared_ptr<string> email{};
  shared_ptr<string> locale{};
  shared_ptr<string> mobile{};
  shared_ptr<string> position{};

  CreateContactRequest() {}

  explicit CreateContactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["Position"]));
    }
  }


  virtual ~CreateContactRequest() = default;
};
class CreateContactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> contactId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateContactResponseBody() {}

  explicit CreateContactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateContactResponseBody() = default;
};
class CreateContactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateContactResponseBody> body{};

  CreateContactResponse() {}

  explicit CreateContactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateContactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateContactResponseBody>(model1);
      }
    }
  }


  virtual ~CreateContactResponse() = default;
};
class CreateSubscriptionItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> itemName{};
  shared_ptr<string> locale{};

  CreateSubscriptionItemRequest() {}

  explicit CreateSubscriptionItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
  }


  virtual ~CreateSubscriptionItemRequest() = default;
};
class CreateSubscriptionItemResponseBodySubscriptionItem : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<vector<long>> contactIds{};
  shared_ptr<string> description{};
  shared_ptr<long> emailStatus{};
  shared_ptr<long> itemId{};
  shared_ptr<string> itemName{};
  shared_ptr<long> pmsgStatus{};
  shared_ptr<long> smsStatus{};
  shared_ptr<long> ttsStatus{};
  shared_ptr<vector<long>> webhookIds{};
  shared_ptr<long> webhookStatus{};

  CreateSubscriptionItemResponseBodySubscriptionItem() {}

  explicit CreateSubscriptionItemResponseBodySubscriptionItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (contactIds) {
      res["ContactIds"] = boost::any(*contactIds);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (emailStatus) {
      res["EmailStatus"] = boost::any(*emailStatus);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (pmsgStatus) {
      res["PmsgStatus"] = boost::any(*pmsgStatus);
    }
    if (smsStatus) {
      res["SmsStatus"] = boost::any(*smsStatus);
    }
    if (ttsStatus) {
      res["TtsStatus"] = boost::any(*ttsStatus);
    }
    if (webhookIds) {
      res["WebhookIds"] = boost::any(*webhookIds);
    }
    if (webhookStatus) {
      res["WebhookStatus"] = boost::any(*webhookStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("ContactIds") != m.end() && !m["ContactIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ContactIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ContactIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      contactIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EmailStatus") != m.end() && !m["EmailStatus"].empty()) {
      emailStatus = make_shared<long>(boost::any_cast<long>(m["EmailStatus"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("PmsgStatus") != m.end() && !m["PmsgStatus"].empty()) {
      pmsgStatus = make_shared<long>(boost::any_cast<long>(m["PmsgStatus"]));
    }
    if (m.find("SmsStatus") != m.end() && !m["SmsStatus"].empty()) {
      smsStatus = make_shared<long>(boost::any_cast<long>(m["SmsStatus"]));
    }
    if (m.find("TtsStatus") != m.end() && !m["TtsStatus"].empty()) {
      ttsStatus = make_shared<long>(boost::any_cast<long>(m["TtsStatus"]));
    }
    if (m.find("WebhookIds") != m.end() && !m["WebhookIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["WebhookIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WebhookIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      webhookIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("WebhookStatus") != m.end() && !m["WebhookStatus"].empty()) {
      webhookStatus = make_shared<long>(boost::any_cast<long>(m["WebhookStatus"]));
    }
  }


  virtual ~CreateSubscriptionItemResponseBodySubscriptionItem() = default;
};
class CreateSubscriptionItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateSubscriptionItemResponseBodySubscriptionItem> subscriptionItem{};
  shared_ptr<bool> success{};

  CreateSubscriptionItemResponseBody() {}

  explicit CreateSubscriptionItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subscriptionItem) {
      res["SubscriptionItem"] = subscriptionItem ? boost::any(subscriptionItem->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubscriptionItem") != m.end() && !m["SubscriptionItem"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubscriptionItem"].type()) {
        CreateSubscriptionItemResponseBodySubscriptionItem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubscriptionItem"]));
        subscriptionItem = make_shared<CreateSubscriptionItemResponseBodySubscriptionItem>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateSubscriptionItemResponseBody() = default;
};
class CreateSubscriptionItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSubscriptionItemResponseBody> body{};

  CreateSubscriptionItemResponse() {}

  explicit CreateSubscriptionItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSubscriptionItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSubscriptionItemResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSubscriptionItemResponse() = default;
};
class CreateWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> locale{};
  shared_ptr<string> serverUrl{};
  shared_ptr<string> webhookName{};

  CreateWebhookRequest() {}

  explicit CreateWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (serverUrl) {
      res["ServerUrl"] = boost::any(*serverUrl);
    }
    if (webhookName) {
      res["WebhookName"] = boost::any(*webhookName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("ServerUrl") != m.end() && !m["ServerUrl"].empty()) {
      serverUrl = make_shared<string>(boost::any_cast<string>(m["ServerUrl"]));
    }
    if (m.find("WebhookName") != m.end() && !m["WebhookName"].empty()) {
      webhookName = make_shared<string>(boost::any_cast<string>(m["WebhookName"]));
    }
  }


  virtual ~CreateWebhookRequest() = default;
};
class CreateWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> webhookId{};

  CreateWebhookResponseBody() {}

  explicit CreateWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (webhookId) {
      res["WebhookId"] = boost::any(*webhookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("WebhookId") != m.end() && !m["WebhookId"].empty()) {
      webhookId = make_shared<long>(boost::any_cast<long>(m["WebhookId"]));
    }
  }


  virtual ~CreateWebhookResponseBody() = default;
};
class CreateWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWebhookResponseBody> body{};

  CreateWebhookResponse() {}

  explicit CreateWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWebhookResponse() = default;
};
class DeleteContactRequest : public Darabonba::Model {
public:
  shared_ptr<long> contactId{};
  shared_ptr<string> locale{};

  DeleteContactRequest() {}

  explicit DeleteContactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
  }


  virtual ~DeleteContactRequest() = default;
};
class DeleteContactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  DeleteContactResponseBody() {}

  explicit DeleteContactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteContactResponseBody() = default;
};
class DeleteContactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteContactResponseBody> body{};

  DeleteContactResponse() {}

  explicit DeleteContactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteContactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteContactResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteContactResponse() = default;
};
class DeleteWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> locale{};
  shared_ptr<long> webhookId{};

  DeleteWebhookRequest() {}

  explicit DeleteWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (webhookId) {
      res["WebhookId"] = boost::any(*webhookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("WebhookId") != m.end() && !m["WebhookId"].empty()) {
      webhookId = make_shared<long>(boost::any_cast<long>(m["WebhookId"]));
    }
  }


  virtual ~DeleteWebhookRequest() = default;
};
class DeleteWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  DeleteWebhookResponseBody() {}

  explicit DeleteWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteWebhookResponseBody() = default;
};
class DeleteWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWebhookResponseBody> body{};

  DeleteWebhookResponse() {}

  explicit DeleteWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWebhookResponse() = default;
};
class GetContactRequest : public Darabonba::Model {
public:
  shared_ptr<long> contactId{};
  shared_ptr<string> locale{};

  GetContactRequest() {}

  explicit GetContactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
  }


  virtual ~GetContactRequest() = default;
};
class GetContactResponseBodyContact : public Darabonba::Model {
public:
  shared_ptr<long> accountUid{};
  shared_ptr<long> contactId{};
  shared_ptr<string> contactName{};
  shared_ptr<string> email{};
  shared_ptr<bool> isAccount{};
  shared_ptr<bool> isObsolete{};
  shared_ptr<bool> isVerifiedEmail{};
  shared_ptr<bool> isVerifiedMobile{};
  shared_ptr<long> lastEmailVerificationTimeStamp{};
  shared_ptr<long> lastMobileVerificationTimeStamp{};
  shared_ptr<string> mobile{};
  shared_ptr<string> position{};

  GetContactResponseBodyContact() {}

  explicit GetContactResponseBodyContact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountUid) {
      res["AccountUid"] = boost::any(*accountUid);
    }
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (isAccount) {
      res["IsAccount"] = boost::any(*isAccount);
    }
    if (isObsolete) {
      res["IsObsolete"] = boost::any(*isObsolete);
    }
    if (isVerifiedEmail) {
      res["IsVerifiedEmail"] = boost::any(*isVerifiedEmail);
    }
    if (isVerifiedMobile) {
      res["IsVerifiedMobile"] = boost::any(*isVerifiedMobile);
    }
    if (lastEmailVerificationTimeStamp) {
      res["LastEmailVerificationTimeStamp"] = boost::any(*lastEmailVerificationTimeStamp);
    }
    if (lastMobileVerificationTimeStamp) {
      res["LastMobileVerificationTimeStamp"] = boost::any(*lastMobileVerificationTimeStamp);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountUid") != m.end() && !m["AccountUid"].empty()) {
      accountUid = make_shared<long>(boost::any_cast<long>(m["AccountUid"]));
    }
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("IsAccount") != m.end() && !m["IsAccount"].empty()) {
      isAccount = make_shared<bool>(boost::any_cast<bool>(m["IsAccount"]));
    }
    if (m.find("IsObsolete") != m.end() && !m["IsObsolete"].empty()) {
      isObsolete = make_shared<bool>(boost::any_cast<bool>(m["IsObsolete"]));
    }
    if (m.find("IsVerifiedEmail") != m.end() && !m["IsVerifiedEmail"].empty()) {
      isVerifiedEmail = make_shared<bool>(boost::any_cast<bool>(m["IsVerifiedEmail"]));
    }
    if (m.find("IsVerifiedMobile") != m.end() && !m["IsVerifiedMobile"].empty()) {
      isVerifiedMobile = make_shared<bool>(boost::any_cast<bool>(m["IsVerifiedMobile"]));
    }
    if (m.find("LastEmailVerificationTimeStamp") != m.end() && !m["LastEmailVerificationTimeStamp"].empty()) {
      lastEmailVerificationTimeStamp = make_shared<long>(boost::any_cast<long>(m["LastEmailVerificationTimeStamp"]));
    }
    if (m.find("LastMobileVerificationTimeStamp") != m.end() && !m["LastMobileVerificationTimeStamp"].empty()) {
      lastMobileVerificationTimeStamp = make_shared<long>(boost::any_cast<long>(m["LastMobileVerificationTimeStamp"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["Position"]));
    }
  }


  virtual ~GetContactResponseBodyContact() = default;
};
class GetContactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetContactResponseBodyContact> contact{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetContactResponseBody() {}

  explicit GetContactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (contact) {
      res["Contact"] = contact ? boost::any(contact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Contact") != m.end() && !m["Contact"].empty()) {
      if (typeid(map<string, boost::any>) == m["Contact"].type()) {
        GetContactResponseBodyContact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Contact"]));
        contact = make_shared<GetContactResponseBodyContact>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetContactResponseBody() = default;
};
class GetContactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetContactResponseBody> body{};

  GetContactResponse() {}

  explicit GetContactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetContactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetContactResponseBody>(model1);
      }
    }
  }


  virtual ~GetContactResponse() = default;
};
class GetSubscriptionItemRequest : public Darabonba::Model {
public:
  shared_ptr<long> itemId{};
  shared_ptr<string> locale{};

  GetSubscriptionItemRequest() {}

  explicit GetSubscriptionItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
  }


  virtual ~GetSubscriptionItemRequest() = default;
};
class GetSubscriptionItemResponseBodySubscriptionItem : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<vector<long>> contactIds{};
  shared_ptr<string> description{};
  shared_ptr<long> emailStatus{};
  shared_ptr<long> itemId{};
  shared_ptr<string> itemName{};
  shared_ptr<long> pmsgStatus{};
  shared_ptr<long> smsStatus{};
  shared_ptr<long> ttsStatus{};
  shared_ptr<vector<long>> webhookIds{};
  shared_ptr<long> webhookStatus{};

  GetSubscriptionItemResponseBodySubscriptionItem() {}

  explicit GetSubscriptionItemResponseBodySubscriptionItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (contactIds) {
      res["ContactIds"] = boost::any(*contactIds);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (emailStatus) {
      res["EmailStatus"] = boost::any(*emailStatus);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (pmsgStatus) {
      res["PmsgStatus"] = boost::any(*pmsgStatus);
    }
    if (smsStatus) {
      res["SmsStatus"] = boost::any(*smsStatus);
    }
    if (ttsStatus) {
      res["TtsStatus"] = boost::any(*ttsStatus);
    }
    if (webhookIds) {
      res["WebhookIds"] = boost::any(*webhookIds);
    }
    if (webhookStatus) {
      res["WebhookStatus"] = boost::any(*webhookStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("ContactIds") != m.end() && !m["ContactIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ContactIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ContactIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      contactIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EmailStatus") != m.end() && !m["EmailStatus"].empty()) {
      emailStatus = make_shared<long>(boost::any_cast<long>(m["EmailStatus"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("PmsgStatus") != m.end() && !m["PmsgStatus"].empty()) {
      pmsgStatus = make_shared<long>(boost::any_cast<long>(m["PmsgStatus"]));
    }
    if (m.find("SmsStatus") != m.end() && !m["SmsStatus"].empty()) {
      smsStatus = make_shared<long>(boost::any_cast<long>(m["SmsStatus"]));
    }
    if (m.find("TtsStatus") != m.end() && !m["TtsStatus"].empty()) {
      ttsStatus = make_shared<long>(boost::any_cast<long>(m["TtsStatus"]));
    }
    if (m.find("WebhookIds") != m.end() && !m["WebhookIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["WebhookIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WebhookIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      webhookIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("WebhookStatus") != m.end() && !m["WebhookStatus"].empty()) {
      webhookStatus = make_shared<long>(boost::any_cast<long>(m["WebhookStatus"]));
    }
  }


  virtual ~GetSubscriptionItemResponseBodySubscriptionItem() = default;
};
class GetSubscriptionItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetSubscriptionItemResponseBodySubscriptionItem> subscriptionItem{};
  shared_ptr<bool> success{};

  GetSubscriptionItemResponseBody() {}

  explicit GetSubscriptionItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subscriptionItem) {
      res["SubscriptionItem"] = subscriptionItem ? boost::any(subscriptionItem->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubscriptionItem") != m.end() && !m["SubscriptionItem"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubscriptionItem"].type()) {
        GetSubscriptionItemResponseBodySubscriptionItem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubscriptionItem"]));
        subscriptionItem = make_shared<GetSubscriptionItemResponseBodySubscriptionItem>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetSubscriptionItemResponseBody() = default;
};
class GetSubscriptionItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSubscriptionItemResponseBody> body{};

  GetSubscriptionItemResponse() {}

  explicit GetSubscriptionItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSubscriptionItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSubscriptionItemResponseBody>(model1);
      }
    }
  }


  virtual ~GetSubscriptionItemResponse() = default;
};
class GetSubscriptionItemDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> itemId{};
  shared_ptr<string> locale{};

  GetSubscriptionItemDetailRequest() {}

  explicit GetSubscriptionItemDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
  }


  virtual ~GetSubscriptionItemDetailRequest() = default;
};
class GetSubscriptionItemDetailResponseBodySubscriptionItemDetailContacts : public Darabonba::Model {
public:
  shared_ptr<long> accountUID{};
  shared_ptr<long> contactId{};
  shared_ptr<string> email{};
  shared_ptr<bool> isAccount{};
  shared_ptr<bool> isObsolete{};
  shared_ptr<bool> isVerifiedEmail{};
  shared_ptr<bool> isVerifiedMobile{};
  shared_ptr<long> lastEmailVerificationTimeStamp{};
  shared_ptr<long> lastMobileVerificationTimeStamp{};
  shared_ptr<string> mobile{};
  shared_ptr<string> name{};
  shared_ptr<string> position{};

  GetSubscriptionItemDetailResponseBodySubscriptionItemDetailContacts() {}

  explicit GetSubscriptionItemDetailResponseBodySubscriptionItemDetailContacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountUID) {
      res["AccountUID"] = boost::any(*accountUID);
    }
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (isAccount) {
      res["IsAccount"] = boost::any(*isAccount);
    }
    if (isObsolete) {
      res["IsObsolete"] = boost::any(*isObsolete);
    }
    if (isVerifiedEmail) {
      res["IsVerifiedEmail"] = boost::any(*isVerifiedEmail);
    }
    if (isVerifiedMobile) {
      res["IsVerifiedMobile"] = boost::any(*isVerifiedMobile);
    }
    if (lastEmailVerificationTimeStamp) {
      res["LastEmailVerificationTimeStamp"] = boost::any(*lastEmailVerificationTimeStamp);
    }
    if (lastMobileVerificationTimeStamp) {
      res["LastMobileVerificationTimeStamp"] = boost::any(*lastMobileVerificationTimeStamp);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountUID") != m.end() && !m["AccountUID"].empty()) {
      accountUID = make_shared<long>(boost::any_cast<long>(m["AccountUID"]));
    }
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("IsAccount") != m.end() && !m["IsAccount"].empty()) {
      isAccount = make_shared<bool>(boost::any_cast<bool>(m["IsAccount"]));
    }
    if (m.find("IsObsolete") != m.end() && !m["IsObsolete"].empty()) {
      isObsolete = make_shared<bool>(boost::any_cast<bool>(m["IsObsolete"]));
    }
    if (m.find("IsVerifiedEmail") != m.end() && !m["IsVerifiedEmail"].empty()) {
      isVerifiedEmail = make_shared<bool>(boost::any_cast<bool>(m["IsVerifiedEmail"]));
    }
    if (m.find("IsVerifiedMobile") != m.end() && !m["IsVerifiedMobile"].empty()) {
      isVerifiedMobile = make_shared<bool>(boost::any_cast<bool>(m["IsVerifiedMobile"]));
    }
    if (m.find("LastEmailVerificationTimeStamp") != m.end() && !m["LastEmailVerificationTimeStamp"].empty()) {
      lastEmailVerificationTimeStamp = make_shared<long>(boost::any_cast<long>(m["LastEmailVerificationTimeStamp"]));
    }
    if (m.find("LastMobileVerificationTimeStamp") != m.end() && !m["LastMobileVerificationTimeStamp"].empty()) {
      lastMobileVerificationTimeStamp = make_shared<long>(boost::any_cast<long>(m["LastMobileVerificationTimeStamp"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["Position"]));
    }
  }


  virtual ~GetSubscriptionItemDetailResponseBodySubscriptionItemDetailContacts() = default;
};
class GetSubscriptionItemDetailResponseBodySubscriptionItemDetailWebhooks : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> serverUrl{};
  shared_ptr<long> webhookId{};

  GetSubscriptionItemDetailResponseBodySubscriptionItemDetailWebhooks() {}

  explicit GetSubscriptionItemDetailResponseBodySubscriptionItemDetailWebhooks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (serverUrl) {
      res["ServerUrl"] = boost::any(*serverUrl);
    }
    if (webhookId) {
      res["WebhookId"] = boost::any(*webhookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ServerUrl") != m.end() && !m["ServerUrl"].empty()) {
      serverUrl = make_shared<string>(boost::any_cast<string>(m["ServerUrl"]));
    }
    if (m.find("WebhookId") != m.end() && !m["WebhookId"].empty()) {
      webhookId = make_shared<long>(boost::any_cast<long>(m["WebhookId"]));
    }
  }


  virtual ~GetSubscriptionItemDetailResponseBodySubscriptionItemDetailWebhooks() = default;
};
class GetSubscriptionItemDetailResponseBodySubscriptionItemDetail : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<vector<GetSubscriptionItemDetailResponseBodySubscriptionItemDetailContacts>> contacts{};
  shared_ptr<string> description{};
  shared_ptr<long> emailStatus{};
  shared_ptr<long> itemId{};
  shared_ptr<string> itemName{};
  shared_ptr<long> pmsgStatus{};
  shared_ptr<string> regionId{};
  shared_ptr<long> smsStatus{};
  shared_ptr<long> ttsStatus{};
  shared_ptr<long> webhookStatus{};
  shared_ptr<vector<GetSubscriptionItemDetailResponseBodySubscriptionItemDetailWebhooks>> webhooks{};

  GetSubscriptionItemDetailResponseBodySubscriptionItemDetail() {}

  explicit GetSubscriptionItemDetailResponseBodySubscriptionItemDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (contacts) {
      vector<boost::any> temp1;
      for(auto item1:*contacts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Contacts"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (emailStatus) {
      res["EmailStatus"] = boost::any(*emailStatus);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (pmsgStatus) {
      res["PmsgStatus"] = boost::any(*pmsgStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (smsStatus) {
      res["SmsStatus"] = boost::any(*smsStatus);
    }
    if (ttsStatus) {
      res["TtsStatus"] = boost::any(*ttsStatus);
    }
    if (webhookStatus) {
      res["WebhookStatus"] = boost::any(*webhookStatus);
    }
    if (webhooks) {
      vector<boost::any> temp1;
      for(auto item1:*webhooks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Webhooks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("Contacts") != m.end() && !m["Contacts"].empty()) {
      if (typeid(vector<boost::any>) == m["Contacts"].type()) {
        vector<GetSubscriptionItemDetailResponseBodySubscriptionItemDetailContacts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Contacts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSubscriptionItemDetailResponseBodySubscriptionItemDetailContacts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contacts = make_shared<vector<GetSubscriptionItemDetailResponseBodySubscriptionItemDetailContacts>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EmailStatus") != m.end() && !m["EmailStatus"].empty()) {
      emailStatus = make_shared<long>(boost::any_cast<long>(m["EmailStatus"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("PmsgStatus") != m.end() && !m["PmsgStatus"].empty()) {
      pmsgStatus = make_shared<long>(boost::any_cast<long>(m["PmsgStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SmsStatus") != m.end() && !m["SmsStatus"].empty()) {
      smsStatus = make_shared<long>(boost::any_cast<long>(m["SmsStatus"]));
    }
    if (m.find("TtsStatus") != m.end() && !m["TtsStatus"].empty()) {
      ttsStatus = make_shared<long>(boost::any_cast<long>(m["TtsStatus"]));
    }
    if (m.find("WebhookStatus") != m.end() && !m["WebhookStatus"].empty()) {
      webhookStatus = make_shared<long>(boost::any_cast<long>(m["WebhookStatus"]));
    }
    if (m.find("Webhooks") != m.end() && !m["Webhooks"].empty()) {
      if (typeid(vector<boost::any>) == m["Webhooks"].type()) {
        vector<GetSubscriptionItemDetailResponseBodySubscriptionItemDetailWebhooks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Webhooks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSubscriptionItemDetailResponseBodySubscriptionItemDetailWebhooks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        webhooks = make_shared<vector<GetSubscriptionItemDetailResponseBodySubscriptionItemDetailWebhooks>>(expect1);
      }
    }
  }


  virtual ~GetSubscriptionItemDetailResponseBodySubscriptionItemDetail() = default;
};
class GetSubscriptionItemDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetSubscriptionItemDetailResponseBodySubscriptionItemDetail> subscriptionItemDetail{};
  shared_ptr<bool> success{};

  GetSubscriptionItemDetailResponseBody() {}

  explicit GetSubscriptionItemDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subscriptionItemDetail) {
      res["SubscriptionItemDetail"] = subscriptionItemDetail ? boost::any(subscriptionItemDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubscriptionItemDetail") != m.end() && !m["SubscriptionItemDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubscriptionItemDetail"].type()) {
        GetSubscriptionItemDetailResponseBodySubscriptionItemDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubscriptionItemDetail"]));
        subscriptionItemDetail = make_shared<GetSubscriptionItemDetailResponseBodySubscriptionItemDetail>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetSubscriptionItemDetailResponseBody() = default;
};
class GetSubscriptionItemDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSubscriptionItemDetailResponseBody> body{};

  GetSubscriptionItemDetailResponse() {}

  explicit GetSubscriptionItemDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSubscriptionItemDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSubscriptionItemDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetSubscriptionItemDetailResponse() = default;
};
class GetWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> locale{};
  shared_ptr<long> webhookId{};

  GetWebhookRequest() {}

  explicit GetWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (webhookId) {
      res["WebhookId"] = boost::any(*webhookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("WebhookId") != m.end() && !m["WebhookId"].empty()) {
      webhookId = make_shared<long>(boost::any_cast<long>(m["WebhookId"]));
    }
  }


  virtual ~GetWebhookRequest() = default;
};
class GetWebhookResponseBodyWebhook : public Darabonba::Model {
public:
  shared_ptr<string> serverUrl{};
  shared_ptr<long> webhookId{};
  shared_ptr<string> webhookName{};

  GetWebhookResponseBodyWebhook() {}

  explicit GetWebhookResponseBodyWebhook(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverUrl) {
      res["ServerUrl"] = boost::any(*serverUrl);
    }
    if (webhookId) {
      res["WebhookId"] = boost::any(*webhookId);
    }
    if (webhookName) {
      res["WebhookName"] = boost::any(*webhookName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerUrl") != m.end() && !m["ServerUrl"].empty()) {
      serverUrl = make_shared<string>(boost::any_cast<string>(m["ServerUrl"]));
    }
    if (m.find("WebhookId") != m.end() && !m["WebhookId"].empty()) {
      webhookId = make_shared<long>(boost::any_cast<long>(m["WebhookId"]));
    }
    if (m.find("WebhookName") != m.end() && !m["WebhookName"].empty()) {
      webhookName = make_shared<string>(boost::any_cast<string>(m["WebhookName"]));
    }
  }


  virtual ~GetWebhookResponseBodyWebhook() = default;
};
class GetWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetWebhookResponseBodyWebhook> webhook{};

  GetWebhookResponseBody() {}

  explicit GetWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (webhook) {
      res["Webhook"] = webhook ? boost::any(webhook->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Webhook") != m.end() && !m["Webhook"].empty()) {
      if (typeid(map<string, boost::any>) == m["Webhook"].type()) {
        GetWebhookResponseBodyWebhook model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Webhook"]));
        webhook = make_shared<GetWebhookResponseBodyWebhook>(model1);
      }
    }
  }


  virtual ~GetWebhookResponseBody() = default;
};
class GetWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWebhookResponseBody> body{};

  GetWebhookResponse() {}

  explicit GetWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~GetWebhookResponse() = default;
};
class ListContactsRequest : public Darabonba::Model {
public:
  shared_ptr<long> contactId{};
  shared_ptr<string> filter{};
  shared_ptr<string> locale{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListContactsRequest() {}

  explicit ListContactsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListContactsRequest() = default;
};
class ListContactsResponseBodyContacts : public Darabonba::Model {
public:
  shared_ptr<long> accountUid{};
  shared_ptr<long> contactId{};
  shared_ptr<string> contactName{};
  shared_ptr<string> email{};
  shared_ptr<bool> isAccount{};
  shared_ptr<bool> isObsolete{};
  shared_ptr<bool> isVerifiedEmail{};
  shared_ptr<bool> isVerifiedMobile{};
  shared_ptr<long> lastEmailVerificationTimeStamp{};
  shared_ptr<long> lastMobileVerificationTimeStamp{};
  shared_ptr<string> mobile{};
  shared_ptr<string> position{};

  ListContactsResponseBodyContacts() {}

  explicit ListContactsResponseBodyContacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountUid) {
      res["AccountUid"] = boost::any(*accountUid);
    }
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (isAccount) {
      res["IsAccount"] = boost::any(*isAccount);
    }
    if (isObsolete) {
      res["IsObsolete"] = boost::any(*isObsolete);
    }
    if (isVerifiedEmail) {
      res["IsVerifiedEmail"] = boost::any(*isVerifiedEmail);
    }
    if (isVerifiedMobile) {
      res["IsVerifiedMobile"] = boost::any(*isVerifiedMobile);
    }
    if (lastEmailVerificationTimeStamp) {
      res["LastEmailVerificationTimeStamp"] = boost::any(*lastEmailVerificationTimeStamp);
    }
    if (lastMobileVerificationTimeStamp) {
      res["LastMobileVerificationTimeStamp"] = boost::any(*lastMobileVerificationTimeStamp);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountUid") != m.end() && !m["AccountUid"].empty()) {
      accountUid = make_shared<long>(boost::any_cast<long>(m["AccountUid"]));
    }
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("IsAccount") != m.end() && !m["IsAccount"].empty()) {
      isAccount = make_shared<bool>(boost::any_cast<bool>(m["IsAccount"]));
    }
    if (m.find("IsObsolete") != m.end() && !m["IsObsolete"].empty()) {
      isObsolete = make_shared<bool>(boost::any_cast<bool>(m["IsObsolete"]));
    }
    if (m.find("IsVerifiedEmail") != m.end() && !m["IsVerifiedEmail"].empty()) {
      isVerifiedEmail = make_shared<bool>(boost::any_cast<bool>(m["IsVerifiedEmail"]));
    }
    if (m.find("IsVerifiedMobile") != m.end() && !m["IsVerifiedMobile"].empty()) {
      isVerifiedMobile = make_shared<bool>(boost::any_cast<bool>(m["IsVerifiedMobile"]));
    }
    if (m.find("LastEmailVerificationTimeStamp") != m.end() && !m["LastEmailVerificationTimeStamp"].empty()) {
      lastEmailVerificationTimeStamp = make_shared<long>(boost::any_cast<long>(m["LastEmailVerificationTimeStamp"]));
    }
    if (m.find("LastMobileVerificationTimeStamp") != m.end() && !m["LastMobileVerificationTimeStamp"].empty()) {
      lastMobileVerificationTimeStamp = make_shared<long>(boost::any_cast<long>(m["LastMobileVerificationTimeStamp"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["Position"]));
    }
  }


  virtual ~ListContactsResponseBodyContacts() = default;
};
class ListContactsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListContactsResponseBodyContacts>> contacts{};
  shared_ptr<string> message{};
  shared_ptr<long> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListContactsResponseBody() {}

  explicit ListContactsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (contacts) {
      vector<boost::any> temp1;
      for(auto item1:*contacts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Contacts"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Contacts") != m.end() && !m["Contacts"].empty()) {
      if (typeid(vector<boost::any>) == m["Contacts"].type()) {
        vector<ListContactsResponseBodyContacts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Contacts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListContactsResponseBodyContacts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contacts = make_shared<vector<ListContactsResponseBodyContacts>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<long>(boost::any_cast<long>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListContactsResponseBody() = default;
};
class ListContactsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListContactsResponseBody> body{};

  ListContactsResponse() {}

  explicit ListContactsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListContactsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListContactsResponseBody>(model1);
      }
    }
  }


  virtual ~ListContactsResponse() = default;
};
class ListSubscriptionItemGroupDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> locale{};

  ListSubscriptionItemGroupDetailsRequest() {}

  explicit ListSubscriptionItemGroupDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
  }


  virtual ~ListSubscriptionItemGroupDetailsRequest() = default;
};
class ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsContacts : public Darabonba::Model {
public:
  shared_ptr<long> accountUID{};
  shared_ptr<long> contactId{};
  shared_ptr<string> email{};
  shared_ptr<bool> isAccount{};
  shared_ptr<bool> isObsolete{};
  shared_ptr<bool> isVerifiedEmail{};
  shared_ptr<bool> isVerifiedMobile{};
  shared_ptr<long> lastEmailVerificationTimeStamp{};
  shared_ptr<long> lastMobileVerificationTimeStamp{};
  shared_ptr<string> mobile{};
  shared_ptr<string> name{};
  shared_ptr<string> position{};

  ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsContacts() {}

  explicit ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsContacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountUID) {
      res["AccountUID"] = boost::any(*accountUID);
    }
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (isAccount) {
      res["IsAccount"] = boost::any(*isAccount);
    }
    if (isObsolete) {
      res["IsObsolete"] = boost::any(*isObsolete);
    }
    if (isVerifiedEmail) {
      res["IsVerifiedEmail"] = boost::any(*isVerifiedEmail);
    }
    if (isVerifiedMobile) {
      res["IsVerifiedMobile"] = boost::any(*isVerifiedMobile);
    }
    if (lastEmailVerificationTimeStamp) {
      res["LastEmailVerificationTimeStamp"] = boost::any(*lastEmailVerificationTimeStamp);
    }
    if (lastMobileVerificationTimeStamp) {
      res["LastMobileVerificationTimeStamp"] = boost::any(*lastMobileVerificationTimeStamp);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountUID") != m.end() && !m["AccountUID"].empty()) {
      accountUID = make_shared<long>(boost::any_cast<long>(m["AccountUID"]));
    }
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("IsAccount") != m.end() && !m["IsAccount"].empty()) {
      isAccount = make_shared<bool>(boost::any_cast<bool>(m["IsAccount"]));
    }
    if (m.find("IsObsolete") != m.end() && !m["IsObsolete"].empty()) {
      isObsolete = make_shared<bool>(boost::any_cast<bool>(m["IsObsolete"]));
    }
    if (m.find("IsVerifiedEmail") != m.end() && !m["IsVerifiedEmail"].empty()) {
      isVerifiedEmail = make_shared<bool>(boost::any_cast<bool>(m["IsVerifiedEmail"]));
    }
    if (m.find("IsVerifiedMobile") != m.end() && !m["IsVerifiedMobile"].empty()) {
      isVerifiedMobile = make_shared<bool>(boost::any_cast<bool>(m["IsVerifiedMobile"]));
    }
    if (m.find("LastEmailVerificationTimeStamp") != m.end() && !m["LastEmailVerificationTimeStamp"].empty()) {
      lastEmailVerificationTimeStamp = make_shared<long>(boost::any_cast<long>(m["LastEmailVerificationTimeStamp"]));
    }
    if (m.find("LastMobileVerificationTimeStamp") != m.end() && !m["LastMobileVerificationTimeStamp"].empty()) {
      lastMobileVerificationTimeStamp = make_shared<long>(boost::any_cast<long>(m["LastMobileVerificationTimeStamp"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["Position"]));
    }
  }


  virtual ~ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsContacts() = default;
};
class ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsWebhooks : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> serverUrl{};
  shared_ptr<long> webhookId{};

  ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsWebhooks() {}

  explicit ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsWebhooks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (serverUrl) {
      res["ServerUrl"] = boost::any(*serverUrl);
    }
    if (webhookId) {
      res["WebhookId"] = boost::any(*webhookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ServerUrl") != m.end() && !m["ServerUrl"].empty()) {
      serverUrl = make_shared<string>(boost::any_cast<string>(m["ServerUrl"]));
    }
    if (m.find("WebhookId") != m.end() && !m["WebhookId"].empty()) {
      webhookId = make_shared<long>(boost::any_cast<long>(m["WebhookId"]));
    }
  }


  virtual ~ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsWebhooks() = default;
};
class ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetails : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<vector<ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsContacts>> contacts{};
  shared_ptr<string> description{};
  shared_ptr<long> emailStatus{};
  shared_ptr<long> itemId{};
  shared_ptr<string> itemName{};
  shared_ptr<long> pmsgStatus{};
  shared_ptr<string> regionId{};
  shared_ptr<long> smsStatus{};
  shared_ptr<long> ttsStatus{};
  shared_ptr<long> webhookStatus{};
  shared_ptr<vector<ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsWebhooks>> webhooks{};

  ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetails() {}

  explicit ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (contacts) {
      vector<boost::any> temp1;
      for(auto item1:*contacts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Contacts"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (emailStatus) {
      res["EmailStatus"] = boost::any(*emailStatus);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (pmsgStatus) {
      res["PmsgStatus"] = boost::any(*pmsgStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (smsStatus) {
      res["SmsStatus"] = boost::any(*smsStatus);
    }
    if (ttsStatus) {
      res["TtsStatus"] = boost::any(*ttsStatus);
    }
    if (webhookStatus) {
      res["WebhookStatus"] = boost::any(*webhookStatus);
    }
    if (webhooks) {
      vector<boost::any> temp1;
      for(auto item1:*webhooks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Webhooks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("Contacts") != m.end() && !m["Contacts"].empty()) {
      if (typeid(vector<boost::any>) == m["Contacts"].type()) {
        vector<ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsContacts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Contacts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsContacts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contacts = make_shared<vector<ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsContacts>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EmailStatus") != m.end() && !m["EmailStatus"].empty()) {
      emailStatus = make_shared<long>(boost::any_cast<long>(m["EmailStatus"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("PmsgStatus") != m.end() && !m["PmsgStatus"].empty()) {
      pmsgStatus = make_shared<long>(boost::any_cast<long>(m["PmsgStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SmsStatus") != m.end() && !m["SmsStatus"].empty()) {
      smsStatus = make_shared<long>(boost::any_cast<long>(m["SmsStatus"]));
    }
    if (m.find("TtsStatus") != m.end() && !m["TtsStatus"].empty()) {
      ttsStatus = make_shared<long>(boost::any_cast<long>(m["TtsStatus"]));
    }
    if (m.find("WebhookStatus") != m.end() && !m["WebhookStatus"].empty()) {
      webhookStatus = make_shared<long>(boost::any_cast<long>(m["WebhookStatus"]));
    }
    if (m.find("Webhooks") != m.end() && !m["Webhooks"].empty()) {
      if (typeid(vector<boost::any>) == m["Webhooks"].type()) {
        vector<ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsWebhooks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Webhooks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsWebhooks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        webhooks = make_shared<vector<ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetailsWebhooks>>(expect1);
      }
    }
  }


  virtual ~ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetails() = default;
};
class ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetails : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetails>> itemDetails{};
  shared_ptr<long> itemGroupId{};
  shared_ptr<string> itemGroupName{};

  ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetails() {}

  explicit ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (itemDetails) {
      vector<boost::any> temp1;
      for(auto item1:*itemDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ItemDetails"] = boost::any(temp1);
    }
    if (itemGroupId) {
      res["ItemGroupId"] = boost::any(*itemGroupId);
    }
    if (itemGroupName) {
      res["ItemGroupName"] = boost::any(*itemGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ItemDetails") != m.end() && !m["ItemDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["ItemDetails"].type()) {
        vector<ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ItemDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itemDetails = make_shared<vector<ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetailsItemDetails>>(expect1);
      }
    }
    if (m.find("ItemGroupId") != m.end() && !m["ItemGroupId"].empty()) {
      itemGroupId = make_shared<long>(boost::any_cast<long>(m["ItemGroupId"]));
    }
    if (m.find("ItemGroupName") != m.end() && !m["ItemGroupName"].empty()) {
      itemGroupName = make_shared<string>(boost::any_cast<string>(m["ItemGroupName"]));
    }
  }


  virtual ~ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetails() = default;
};
class ListSubscriptionItemGroupDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetails>> subscriptionItemGroupDetails{};
  shared_ptr<bool> success{};

  ListSubscriptionItemGroupDetailsResponseBody() {}

  explicit ListSubscriptionItemGroupDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subscriptionItemGroupDetails) {
      vector<boost::any> temp1;
      for(auto item1:*subscriptionItemGroupDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubscriptionItemGroupDetails"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubscriptionItemGroupDetails") != m.end() && !m["SubscriptionItemGroupDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["SubscriptionItemGroupDetails"].type()) {
        vector<ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubscriptionItemGroupDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subscriptionItemGroupDetails = make_shared<vector<ListSubscriptionItemGroupDetailsResponseBodySubscriptionItemGroupDetails>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListSubscriptionItemGroupDetailsResponseBody() = default;
};
class ListSubscriptionItemGroupDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSubscriptionItemGroupDetailsResponseBody> body{};

  ListSubscriptionItemGroupDetailsResponse() {}

  explicit ListSubscriptionItemGroupDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSubscriptionItemGroupDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSubscriptionItemGroupDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSubscriptionItemGroupDetailsResponse() = default;
};
class ListSubscriptionItemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<long> itemId{};
  shared_ptr<string> locale{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListSubscriptionItemsRequest() {}

  explicit ListSubscriptionItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListSubscriptionItemsRequest() = default;
};
class ListSubscriptionItemsResponseBodySubscriptionItems : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<vector<long>> contactIds{};
  shared_ptr<string> description{};
  shared_ptr<long> emailStatus{};
  shared_ptr<long> itemId{};
  shared_ptr<string> itemName{};
  shared_ptr<long> pmsgStatus{};
  shared_ptr<long> smsStatus{};
  shared_ptr<long> ttsStatus{};
  shared_ptr<vector<long>> webhookIds{};
  shared_ptr<long> webhookStatus{};

  ListSubscriptionItemsResponseBodySubscriptionItems() {}

  explicit ListSubscriptionItemsResponseBodySubscriptionItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (contactIds) {
      res["ContactIds"] = boost::any(*contactIds);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (emailStatus) {
      res["EmailStatus"] = boost::any(*emailStatus);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (pmsgStatus) {
      res["PmsgStatus"] = boost::any(*pmsgStatus);
    }
    if (smsStatus) {
      res["SmsStatus"] = boost::any(*smsStatus);
    }
    if (ttsStatus) {
      res["TtsStatus"] = boost::any(*ttsStatus);
    }
    if (webhookIds) {
      res["WebhookIds"] = boost::any(*webhookIds);
    }
    if (webhookStatus) {
      res["WebhookStatus"] = boost::any(*webhookStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("ContactIds") != m.end() && !m["ContactIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ContactIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ContactIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      contactIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EmailStatus") != m.end() && !m["EmailStatus"].empty()) {
      emailStatus = make_shared<long>(boost::any_cast<long>(m["EmailStatus"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("PmsgStatus") != m.end() && !m["PmsgStatus"].empty()) {
      pmsgStatus = make_shared<long>(boost::any_cast<long>(m["PmsgStatus"]));
    }
    if (m.find("SmsStatus") != m.end() && !m["SmsStatus"].empty()) {
      smsStatus = make_shared<long>(boost::any_cast<long>(m["SmsStatus"]));
    }
    if (m.find("TtsStatus") != m.end() && !m["TtsStatus"].empty()) {
      ttsStatus = make_shared<long>(boost::any_cast<long>(m["TtsStatus"]));
    }
    if (m.find("WebhookIds") != m.end() && !m["WebhookIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["WebhookIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WebhookIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      webhookIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("WebhookStatus") != m.end() && !m["WebhookStatus"].empty()) {
      webhookStatus = make_shared<long>(boost::any_cast<long>(m["WebhookStatus"]));
    }
  }


  virtual ~ListSubscriptionItemsResponseBodySubscriptionItems() = default;
};
class ListSubscriptionItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSubscriptionItemsResponseBodySubscriptionItems>> subscriptionItems{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListSubscriptionItemsResponseBody() {}

  explicit ListSubscriptionItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subscriptionItems) {
      vector<boost::any> temp1;
      for(auto item1:*subscriptionItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubscriptionItems"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<long>(boost::any_cast<long>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubscriptionItems") != m.end() && !m["SubscriptionItems"].empty()) {
      if (typeid(vector<boost::any>) == m["SubscriptionItems"].type()) {
        vector<ListSubscriptionItemsResponseBodySubscriptionItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubscriptionItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubscriptionItemsResponseBodySubscriptionItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subscriptionItems = make_shared<vector<ListSubscriptionItemsResponseBodySubscriptionItems>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSubscriptionItemsResponseBody() = default;
};
class ListSubscriptionItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSubscriptionItemsResponseBody> body{};

  ListSubscriptionItemsResponse() {}

  explicit ListSubscriptionItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSubscriptionItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSubscriptionItemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSubscriptionItemsResponse() = default;
};
class ListWebhooksRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<string> locale{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> webhookId{};

  ListWebhooksRequest() {}

  explicit ListWebhooksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (webhookId) {
      res["WebhookId"] = boost::any(*webhookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("WebhookId") != m.end() && !m["WebhookId"].empty()) {
      webhookId = make_shared<long>(boost::any_cast<long>(m["WebhookId"]));
    }
  }


  virtual ~ListWebhooksRequest() = default;
};
class ListWebhooksResponseBodyWebhooks : public Darabonba::Model {
public:
  shared_ptr<string> serverUrl{};
  shared_ptr<long> webhookId{};
  shared_ptr<string> webhookName{};

  ListWebhooksResponseBodyWebhooks() {}

  explicit ListWebhooksResponseBodyWebhooks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverUrl) {
      res["ServerUrl"] = boost::any(*serverUrl);
    }
    if (webhookId) {
      res["WebhookId"] = boost::any(*webhookId);
    }
    if (webhookName) {
      res["WebhookName"] = boost::any(*webhookName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerUrl") != m.end() && !m["ServerUrl"].empty()) {
      serverUrl = make_shared<string>(boost::any_cast<string>(m["ServerUrl"]));
    }
    if (m.find("WebhookId") != m.end() && !m["WebhookId"].empty()) {
      webhookId = make_shared<long>(boost::any_cast<long>(m["WebhookId"]));
    }
    if (m.find("WebhookName") != m.end() && !m["WebhookName"].empty()) {
      webhookName = make_shared<string>(boost::any_cast<string>(m["WebhookName"]));
    }
  }


  virtual ~ListWebhooksResponseBodyWebhooks() = default;
};
class ListWebhooksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListWebhooksResponseBodyWebhooks>> webhooks{};

  ListWebhooksResponseBody() {}

  explicit ListWebhooksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (webhooks) {
      vector<boost::any> temp1;
      for(auto item1:*webhooks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Webhooks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<long>(boost::any_cast<long>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Webhooks") != m.end() && !m["Webhooks"].empty()) {
      if (typeid(vector<boost::any>) == m["Webhooks"].type()) {
        vector<ListWebhooksResponseBodyWebhooks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Webhooks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWebhooksResponseBodyWebhooks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        webhooks = make_shared<vector<ListWebhooksResponseBodyWebhooks>>(expect1);
      }
    }
  }


  virtual ~ListWebhooksResponseBody() = default;
};
class ListWebhooksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWebhooksResponseBody> body{};

  ListWebhooksResponse() {}

  explicit ListWebhooksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListWebhooksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWebhooksResponseBody>(model1);
      }
    }
  }


  virtual ~ListWebhooksResponse() = default;
};
class SendVerificationMessageRequest : public Darabonba::Model {
public:
  shared_ptr<long> contactId{};
  shared_ptr<string> locale{};
  shared_ptr<long> type{};

  SendVerificationMessageRequest() {}

  explicit SendVerificationMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~SendVerificationMessageRequest() = default;
};
class SendVerificationMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> result{};
  shared_ptr<bool> success{};

  SendVerificationMessageResponseBody() {}

  explicit SendVerificationMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SendVerificationMessageResponseBody() = default;
};
class SendVerificationMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendVerificationMessageResponseBody> body{};

  SendVerificationMessageResponse() {}

  explicit SendVerificationMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SendVerificationMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendVerificationMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendVerificationMessageResponse() = default;
};
class UpdateContactRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<long> contactId{};
  shared_ptr<string> contactName{};
  shared_ptr<string> email{};
  shared_ptr<string> locale{};
  shared_ptr<string> mobile{};

  UpdateContactRequest() {}

  explicit UpdateContactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
  }


  virtual ~UpdateContactRequest() = default;
};
class UpdateContactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  UpdateContactResponseBody() {}

  explicit UpdateContactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateContactResponseBody() = default;
};
class UpdateContactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateContactResponseBody> body{};

  UpdateContactResponse() {}

  explicit UpdateContactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateContactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateContactResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateContactResponse() = default;
};
class UpdateSubscriptionItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<vector<long>> contactIds{};
  shared_ptr<long> emailStatus{};
  shared_ptr<long> itemId{};
  shared_ptr<string> locale{};
  shared_ptr<long> pmsgStatus{};
  shared_ptr<string> regionId{};
  shared_ptr<long> smsStatus{};
  shared_ptr<long> ttsStatus{};
  shared_ptr<vector<long>> webhookIds{};
  shared_ptr<long> webhookStatus{};

  UpdateSubscriptionItemRequest() {}

  explicit UpdateSubscriptionItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (contactIds) {
      res["ContactIds"] = boost::any(*contactIds);
    }
    if (emailStatus) {
      res["EmailStatus"] = boost::any(*emailStatus);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (pmsgStatus) {
      res["PmsgStatus"] = boost::any(*pmsgStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (smsStatus) {
      res["SmsStatus"] = boost::any(*smsStatus);
    }
    if (ttsStatus) {
      res["TtsStatus"] = boost::any(*ttsStatus);
    }
    if (webhookIds) {
      res["WebhookIds"] = boost::any(*webhookIds);
    }
    if (webhookStatus) {
      res["WebhookStatus"] = boost::any(*webhookStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ContactIds") != m.end() && !m["ContactIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ContactIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ContactIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      contactIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EmailStatus") != m.end() && !m["EmailStatus"].empty()) {
      emailStatus = make_shared<long>(boost::any_cast<long>(m["EmailStatus"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("PmsgStatus") != m.end() && !m["PmsgStatus"].empty()) {
      pmsgStatus = make_shared<long>(boost::any_cast<long>(m["PmsgStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SmsStatus") != m.end() && !m["SmsStatus"].empty()) {
      smsStatus = make_shared<long>(boost::any_cast<long>(m["SmsStatus"]));
    }
    if (m.find("TtsStatus") != m.end() && !m["TtsStatus"].empty()) {
      ttsStatus = make_shared<long>(boost::any_cast<long>(m["TtsStatus"]));
    }
    if (m.find("WebhookIds") != m.end() && !m["WebhookIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["WebhookIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WebhookIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      webhookIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("WebhookStatus") != m.end() && !m["WebhookStatus"].empty()) {
      webhookStatus = make_shared<long>(boost::any_cast<long>(m["WebhookStatus"]));
    }
  }


  virtual ~UpdateSubscriptionItemRequest() = default;
};
class UpdateSubscriptionItemShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> contactIdsShrink{};
  shared_ptr<long> emailStatus{};
  shared_ptr<long> itemId{};
  shared_ptr<string> locale{};
  shared_ptr<long> pmsgStatus{};
  shared_ptr<string> regionId{};
  shared_ptr<long> smsStatus{};
  shared_ptr<long> ttsStatus{};
  shared_ptr<string> webhookIdsShrink{};
  shared_ptr<long> webhookStatus{};

  UpdateSubscriptionItemShrinkRequest() {}

  explicit UpdateSubscriptionItemShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (contactIdsShrink) {
      res["ContactIds"] = boost::any(*contactIdsShrink);
    }
    if (emailStatus) {
      res["EmailStatus"] = boost::any(*emailStatus);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (pmsgStatus) {
      res["PmsgStatus"] = boost::any(*pmsgStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (smsStatus) {
      res["SmsStatus"] = boost::any(*smsStatus);
    }
    if (ttsStatus) {
      res["TtsStatus"] = boost::any(*ttsStatus);
    }
    if (webhookIdsShrink) {
      res["WebhookIds"] = boost::any(*webhookIdsShrink);
    }
    if (webhookStatus) {
      res["WebhookStatus"] = boost::any(*webhookStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ContactIds") != m.end() && !m["ContactIds"].empty()) {
      contactIdsShrink = make_shared<string>(boost::any_cast<string>(m["ContactIds"]));
    }
    if (m.find("EmailStatus") != m.end() && !m["EmailStatus"].empty()) {
      emailStatus = make_shared<long>(boost::any_cast<long>(m["EmailStatus"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("PmsgStatus") != m.end() && !m["PmsgStatus"].empty()) {
      pmsgStatus = make_shared<long>(boost::any_cast<long>(m["PmsgStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SmsStatus") != m.end() && !m["SmsStatus"].empty()) {
      smsStatus = make_shared<long>(boost::any_cast<long>(m["SmsStatus"]));
    }
    if (m.find("TtsStatus") != m.end() && !m["TtsStatus"].empty()) {
      ttsStatus = make_shared<long>(boost::any_cast<long>(m["TtsStatus"]));
    }
    if (m.find("WebhookIds") != m.end() && !m["WebhookIds"].empty()) {
      webhookIdsShrink = make_shared<string>(boost::any_cast<string>(m["WebhookIds"]));
    }
    if (m.find("WebhookStatus") != m.end() && !m["WebhookStatus"].empty()) {
      webhookStatus = make_shared<long>(boost::any_cast<long>(m["WebhookStatus"]));
    }
  }


  virtual ~UpdateSubscriptionItemShrinkRequest() = default;
};
class UpdateSubscriptionItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  UpdateSubscriptionItemResponseBody() {}

  explicit UpdateSubscriptionItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateSubscriptionItemResponseBody() = default;
};
class UpdateSubscriptionItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSubscriptionItemResponseBody> body{};

  UpdateSubscriptionItemResponse() {}

  explicit UpdateSubscriptionItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSubscriptionItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSubscriptionItemResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSubscriptionItemResponse() = default;
};
class UpdateWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> locale{};
  shared_ptr<string> serverUrl{};
  shared_ptr<long> webhookId{};
  shared_ptr<string> webhookName{};

  UpdateWebhookRequest() {}

  explicit UpdateWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (serverUrl) {
      res["ServerUrl"] = boost::any(*serverUrl);
    }
    if (webhookId) {
      res["WebhookId"] = boost::any(*webhookId);
    }
    if (webhookName) {
      res["WebhookName"] = boost::any(*webhookName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("ServerUrl") != m.end() && !m["ServerUrl"].empty()) {
      serverUrl = make_shared<string>(boost::any_cast<string>(m["ServerUrl"]));
    }
    if (m.find("WebhookId") != m.end() && !m["WebhookId"].empty()) {
      webhookId = make_shared<long>(boost::any_cast<long>(m["WebhookId"]));
    }
    if (m.find("WebhookName") != m.end() && !m["WebhookName"].empty()) {
      webhookName = make_shared<string>(boost::any_cast<string>(m["WebhookName"]));
    }
  }


  virtual ~UpdateWebhookRequest() = default;
};
class UpdateWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  UpdateWebhookResponseBody() {}

  explicit UpdateWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateWebhookResponseBody() = default;
};
class UpdateWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWebhookResponseBody> body{};

  UpdateWebhookResponse() {}

  explicit UpdateWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWebhookResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  CreateContactResponse createContactWithOptions(shared_ptr<CreateContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateContactResponse createContact(shared_ptr<CreateContactRequest> request);
  CreateSubscriptionItemResponse createSubscriptionItemWithOptions(shared_ptr<CreateSubscriptionItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSubscriptionItemResponse createSubscriptionItem(shared_ptr<CreateSubscriptionItemRequest> request);
  CreateWebhookResponse createWebhookWithOptions(shared_ptr<CreateWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWebhookResponse createWebhook(shared_ptr<CreateWebhookRequest> request);
  DeleteContactResponse deleteContactWithOptions(shared_ptr<DeleteContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteContactResponse deleteContact(shared_ptr<DeleteContactRequest> request);
  DeleteWebhookResponse deleteWebhookWithOptions(shared_ptr<DeleteWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWebhookResponse deleteWebhook(shared_ptr<DeleteWebhookRequest> request);
  GetContactResponse getContactWithOptions(shared_ptr<GetContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetContactResponse getContact(shared_ptr<GetContactRequest> request);
  GetSubscriptionItemResponse getSubscriptionItemWithOptions(shared_ptr<GetSubscriptionItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSubscriptionItemResponse getSubscriptionItem(shared_ptr<GetSubscriptionItemRequest> request);
  GetSubscriptionItemDetailResponse getSubscriptionItemDetailWithOptions(shared_ptr<GetSubscriptionItemDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSubscriptionItemDetailResponse getSubscriptionItemDetail(shared_ptr<GetSubscriptionItemDetailRequest> request);
  GetWebhookResponse getWebhookWithOptions(shared_ptr<GetWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWebhookResponse getWebhook(shared_ptr<GetWebhookRequest> request);
  ListContactsResponse listContactsWithOptions(shared_ptr<ListContactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListContactsResponse listContacts(shared_ptr<ListContactsRequest> request);
  ListSubscriptionItemGroupDetailsResponse listSubscriptionItemGroupDetailsWithOptions(shared_ptr<ListSubscriptionItemGroupDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSubscriptionItemGroupDetailsResponse listSubscriptionItemGroupDetails(shared_ptr<ListSubscriptionItemGroupDetailsRequest> request);
  ListSubscriptionItemsResponse listSubscriptionItemsWithOptions(shared_ptr<ListSubscriptionItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSubscriptionItemsResponse listSubscriptionItems(shared_ptr<ListSubscriptionItemsRequest> request);
  ListWebhooksResponse listWebhooksWithOptions(shared_ptr<ListWebhooksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWebhooksResponse listWebhooks(shared_ptr<ListWebhooksRequest> request);
  SendVerificationMessageResponse sendVerificationMessageWithOptions(shared_ptr<SendVerificationMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendVerificationMessageResponse sendVerificationMessage(shared_ptr<SendVerificationMessageRequest> request);
  UpdateContactResponse updateContactWithOptions(shared_ptr<UpdateContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateContactResponse updateContact(shared_ptr<UpdateContactRequest> request);
  UpdateSubscriptionItemResponse updateSubscriptionItemWithOptions(shared_ptr<UpdateSubscriptionItemRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSubscriptionItemResponse updateSubscriptionItem(shared_ptr<UpdateSubscriptionItemRequest> request);
  UpdateWebhookResponse updateWebhookWithOptions(shared_ptr<UpdateWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWebhookResponse updateWebhook(shared_ptr<UpdateWebhookRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_MscOpenSubscription20210713

#endif
