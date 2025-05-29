// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BAILIANMODELONCHIP20240816_H_
#define ALIBABACLOUD_BAILIANMODELONCHIP20240816_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_BailianModelOnChip20240816 {
class CreateChannelSignRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelName{};
  shared_ptr<string> contact{};
  shared_ptr<string> description{};
  shared_ptr<string> phone{};
  shared_ptr<string> remark{};

  CreateChannelSignRequest() {}

  explicit CreateChannelSignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelName) {
      res["channelName"] = boost::any(*channelName);
    }
    if (contact) {
      res["contact"] = boost::any(*contact);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channelName") != m.end() && !m["channelName"].empty()) {
      channelName = make_shared<string>(boost::any_cast<string>(m["channelName"]));
    }
    if (m.find("contact") != m.end() && !m["contact"].empty()) {
      contact = make_shared<string>(boost::any_cast<string>(m["contact"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
  }


  virtual ~CreateChannelSignRequest() = default;
};
class CreateChannelSignResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> channelName{};
  shared_ptr<string> contact{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> phone{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};

  CreateChannelSignResponseBodyData() {}

  explicit CreateChannelSignResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelName) {
      res["channelName"] = boost::any(*channelName);
    }
    if (contact) {
      res["contact"] = boost::any(*contact);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (modifyTime) {
      res["modifyTime"] = boost::any(*modifyTime);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channelName") != m.end() && !m["channelName"].empty()) {
      channelName = make_shared<string>(boost::any_cast<string>(m["channelName"]));
    }
    if (m.find("contact") != m.end() && !m["contact"].empty()) {
      contact = make_shared<string>(boost::any_cast<string>(m["contact"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("modifyTime") != m.end() && !m["modifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["modifyTime"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~CreateChannelSignResponseBodyData() = default;
};
class CreateChannelSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateChannelSignResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  CreateChannelSignResponseBody() {}

  explicit CreateChannelSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateChannelSignResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateChannelSignResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~CreateChannelSignResponseBody() = default;
};
class CreateChannelSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateChannelSignResponseBody> body{};

  CreateChannelSignResponse() {}

  explicit CreateChannelSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        CreateChannelSignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateChannelSignResponseBody>(model1);
      }
    }
  }


  virtual ~CreateChannelSignResponse() = default;
};
class CreateProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> euid{};
  shared_ptr<string> productName{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userId{};

  CreateProductRequest() {}

  explicit CreateProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (euid) {
      res["euid"] = boost::any(*euid);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("euid") != m.end() && !m["euid"].empty()) {
      euid = make_shared<string>(boost::any_cast<string>(m["euid"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~CreateProductRequest() = default;
};
class CreateProductResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> apiKey{};
  shared_ptr<string> description{};
  shared_ptr<string> productKey{};
  shared_ptr<string> productName{};
  shared_ptr<string> productSecret{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userId{};

  CreateProductResponseBodyData() {}

  explicit CreateProductResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKey) {
      res["apiKey"] = boost::any(*apiKey);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productSecret) {
      res["productSecret"] = boost::any(*productSecret);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiKey") != m.end() && !m["apiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["apiKey"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productSecret") != m.end() && !m["productSecret"].empty()) {
      productSecret = make_shared<string>(boost::any_cast<string>(m["productSecret"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~CreateProductResponseBodyData() = default;
};
class CreateProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateProductResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  CreateProductResponseBody() {}

  explicit CreateProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateProductResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateProductResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~CreateProductResponseBody() = default;
};
class CreateProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProductResponseBody> body{};

  CreateProductResponse() {}

  explicit CreateProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        CreateProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProductResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProductResponse() = default;
};
class DeleteProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> productKey{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userId{};

  DeleteProductRequest() {}

  explicit DeleteProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~DeleteProductRequest() = default;
};
class DeleteProductResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> productKey{};
  shared_ptr<string> productName{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userId{};

  DeleteProductResponseBodyData() {}

  explicit DeleteProductResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~DeleteProductResponseBodyData() = default;
};
class DeleteProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeleteProductResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DeleteProductResponseBody() {}

  explicit DeleteProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        DeleteProductResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DeleteProductResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~DeleteProductResponseBody() = default;
};
class DeleteProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProductResponseBody> body{};

  DeleteProductResponse() {}

  explicit DeleteProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        DeleteProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProductResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProductResponse() = default;
};
class DeviceRegisterRequest : public Darabonba::Model {
public:
  shared_ptr<string> nonce{};
  shared_ptr<string> productKey{};
  shared_ptr<string> requestTime{};
  shared_ptr<string> signature{};

  DeviceRegisterRequest() {}

  explicit DeviceRegisterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nonce) {
      res["nonce"] = boost::any(*nonce);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (requestTime) {
      res["requestTime"] = boost::any(*requestTime);
    }
    if (signature) {
      res["signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nonce") != m.end() && !m["nonce"].empty()) {
      nonce = make_shared<string>(boost::any_cast<string>(m["nonce"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("requestTime") != m.end() && !m["requestTime"].empty()) {
      requestTime = make_shared<string>(boost::any_cast<string>(m["requestTime"]));
    }
    if (m.find("signature") != m.end() && !m["signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["signature"]));
    }
  }


  virtual ~DeviceRegisterRequest() = default;
};
class DeviceRegisterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> nonce{};
  shared_ptr<string> productKey{};
  shared_ptr<string> responseTime{};
  shared_ptr<string> signature{};

  DeviceRegisterResponseBodyData() {}

  explicit DeviceRegisterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (nonce) {
      res["nonce"] = boost::any(*nonce);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (responseTime) {
      res["responseTime"] = boost::any(*responseTime);
    }
    if (signature) {
      res["signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("nonce") != m.end() && !m["nonce"].empty()) {
      nonce = make_shared<string>(boost::any_cast<string>(m["nonce"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("responseTime") != m.end() && !m["responseTime"].empty()) {
      responseTime = make_shared<string>(boost::any_cast<string>(m["responseTime"]));
    }
    if (m.find("signature") != m.end() && !m["signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["signature"]));
    }
  }


  virtual ~DeviceRegisterResponseBodyData() = default;
};
class DeviceRegisterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeviceRegisterResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeviceRegisterResponseBody() {}

  explicit DeviceRegisterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        DeviceRegisterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DeviceRegisterResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeviceRegisterResponseBody() = default;
};
class DeviceRegisterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeviceRegisterResponseBody> body{};

  DeviceRegisterResponse() {}

  explicit DeviceRegisterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        DeviceRegisterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeviceRegisterResponseBody>(model1);
      }
    }
  }


  virtual ~DeviceRegisterResponse() = default;
};
class GetChannelSignResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> channelName{};
  shared_ptr<string> contact{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> phone{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};

  GetChannelSignResponseBodyData() {}

  explicit GetChannelSignResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelName) {
      res["channelName"] = boost::any(*channelName);
    }
    if (contact) {
      res["contact"] = boost::any(*contact);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (modifyTime) {
      res["modifyTime"] = boost::any(*modifyTime);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channelName") != m.end() && !m["channelName"].empty()) {
      channelName = make_shared<string>(boost::any_cast<string>(m["channelName"]));
    }
    if (m.find("contact") != m.end() && !m["contact"].empty()) {
      contact = make_shared<string>(boost::any_cast<string>(m["contact"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("modifyTime") != m.end() && !m["modifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["modifyTime"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetChannelSignResponseBodyData() = default;
};
class GetChannelSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetChannelSignResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  GetChannelSignResponseBody() {}

  explicit GetChannelSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetChannelSignResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetChannelSignResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~GetChannelSignResponseBody() = default;
};
class GetChannelSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChannelSignResponseBody> body{};

  GetChannelSignResponse() {}

  explicit GetChannelSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        GetChannelSignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChannelSignResponseBody>(model1);
      }
    }
  }


  virtual ~GetChannelSignResponse() = default;
};
class GetQuotaInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> recordId{};

  GetQuotaInfoRequest() {}

  explicit GetQuotaInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["recordId"] = boost::any(*recordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("recordId") != m.end() && !m["recordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["recordId"]));
    }
  }


  virtual ~GetQuotaInfoRequest() = default;
};
class GetQuotaInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> activeLicenseCount{};
  shared_ptr<long> duration{};
  shared_ptr<long> durationType{};
  shared_ptr<long> licenseCount{};
  shared_ptr<long> maxQps{};
  shared_ptr<string> productKey{};
  shared_ptr<long> purchaseModel{};
  shared_ptr<string> tenantId{};
  shared_ptr<long> tokenNumber{};
  shared_ptr<string> userId{};

  GetQuotaInfoResponseBodyData() {}

  explicit GetQuotaInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeLicenseCount) {
      res["activeLicenseCount"] = boost::any(*activeLicenseCount);
    }
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (durationType) {
      res["durationType"] = boost::any(*durationType);
    }
    if (licenseCount) {
      res["licenseCount"] = boost::any(*licenseCount);
    }
    if (maxQps) {
      res["maxQps"] = boost::any(*maxQps);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (purchaseModel) {
      res["purchaseModel"] = boost::any(*purchaseModel);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (tokenNumber) {
      res["tokenNumber"] = boost::any(*tokenNumber);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("activeLicenseCount") != m.end() && !m["activeLicenseCount"].empty()) {
      activeLicenseCount = make_shared<long>(boost::any_cast<long>(m["activeLicenseCount"]));
    }
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["duration"]));
    }
    if (m.find("durationType") != m.end() && !m["durationType"].empty()) {
      durationType = make_shared<long>(boost::any_cast<long>(m["durationType"]));
    }
    if (m.find("licenseCount") != m.end() && !m["licenseCount"].empty()) {
      licenseCount = make_shared<long>(boost::any_cast<long>(m["licenseCount"]));
    }
    if (m.find("maxQps") != m.end() && !m["maxQps"].empty()) {
      maxQps = make_shared<long>(boost::any_cast<long>(m["maxQps"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("purchaseModel") != m.end() && !m["purchaseModel"].empty()) {
      purchaseModel = make_shared<long>(boost::any_cast<long>(m["purchaseModel"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("tokenNumber") != m.end() && !m["tokenNumber"].empty()) {
      tokenNumber = make_shared<long>(boost::any_cast<long>(m["tokenNumber"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~GetQuotaInfoResponseBodyData() = default;
};
class GetQuotaInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetQuotaInfoResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  GetQuotaInfoResponseBody() {}

  explicit GetQuotaInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetQuotaInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetQuotaInfoResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~GetQuotaInfoResponseBody() = default;
};
class GetQuotaInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuotaInfoResponseBody> body{};

  GetQuotaInfoResponse() {}

  explicit GetQuotaInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        GetQuotaInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuotaInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuotaInfoResponse() = default;
};
class GetTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> nonce{};
  shared_ptr<string> productKey{};
  shared_ptr<string> requestTime{};
  shared_ptr<string> signature{};
  shared_ptr<string> tokenKey{};
  shared_ptr<string> tokenType{};

  GetTokenRequest() {}

  explicit GetTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (nonce) {
      res["nonce"] = boost::any(*nonce);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (requestTime) {
      res["requestTime"] = boost::any(*requestTime);
    }
    if (signature) {
      res["signature"] = boost::any(*signature);
    }
    if (tokenKey) {
      res["tokenKey"] = boost::any(*tokenKey);
    }
    if (tokenType) {
      res["tokenType"] = boost::any(*tokenType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("nonce") != m.end() && !m["nonce"].empty()) {
      nonce = make_shared<string>(boost::any_cast<string>(m["nonce"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("requestTime") != m.end() && !m["requestTime"].empty()) {
      requestTime = make_shared<string>(boost::any_cast<string>(m["requestTime"]));
    }
    if (m.find("signature") != m.end() && !m["signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["signature"]));
    }
    if (m.find("tokenKey") != m.end() && !m["tokenKey"].empty()) {
      tokenKey = make_shared<string>(boost::any_cast<string>(m["tokenKey"]));
    }
    if (m.find("tokenType") != m.end() && !m["tokenType"].empty()) {
      tokenType = make_shared<string>(boost::any_cast<string>(m["tokenType"]));
    }
  }


  virtual ~GetTokenRequest() = default;
};
class GetTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> nonce{};
  shared_ptr<string> productKey{};
  shared_ptr<string> requestIp{};
  shared_ptr<string> responseTime{};
  shared_ptr<string> signature{};

  GetTokenResponseBodyData() {}

  explicit GetTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (nonce) {
      res["nonce"] = boost::any(*nonce);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (requestIp) {
      res["requestIp"] = boost::any(*requestIp);
    }
    if (responseTime) {
      res["responseTime"] = boost::any(*responseTime);
    }
    if (signature) {
      res["signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("nonce") != m.end() && !m["nonce"].empty()) {
      nonce = make_shared<string>(boost::any_cast<string>(m["nonce"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("requestIp") != m.end() && !m["requestIp"].empty()) {
      requestIp = make_shared<string>(boost::any_cast<string>(m["requestIp"]));
    }
    if (m.find("responseTime") != m.end() && !m["responseTime"].empty()) {
      responseTime = make_shared<string>(boost::any_cast<string>(m["responseTime"]));
    }
    if (m.find("signature") != m.end() && !m["signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["signature"]));
    }
  }


  virtual ~GetTokenResponseBodyData() = default;
};
class GetTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetTokenResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  GetTokenResponseBody() {}

  explicit GetTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetTokenResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~GetTokenResponseBody() = default;
};
class GetTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTokenResponseBody> body{};

  GetTokenResponse() {}

  explicit GetTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        GetTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetTokenResponse() = default;
};
class HalfLLMAppCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, string>> bizParam{};
  shared_ptr<string> deviceName{};
  shared_ptr<vector<string>> modelTypeList{};
  shared_ptr<string> productKey{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> text{};

  HalfLLMAppCallRequest() {}

  explicit HalfLLMAppCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (bizParam) {
      res["bizParam"] = boost::any(*bizParam);
    }
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (modelTypeList) {
      res["modelTypeList"] = boost::any(*modelTypeList);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("bizParam") != m.end() && !m["bizParam"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["bizParam"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizParam = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("modelTypeList") != m.end() && !m["modelTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["modelTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["modelTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      modelTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~HalfLLMAppCallRequest() = default;
};
class HalfLLMAppCallShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> bizParamShrink{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> modelTypeListShrink{};
  shared_ptr<string> productKey{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> text{};

  HalfLLMAppCallShrinkRequest() {}

  explicit HalfLLMAppCallShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (bizParamShrink) {
      res["bizParam"] = boost::any(*bizParamShrink);
    }
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (modelTypeListShrink) {
      res["modelTypeList"] = boost::any(*modelTypeListShrink);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("bizParam") != m.end() && !m["bizParam"].empty()) {
      bizParamShrink = make_shared<string>(boost::any_cast<string>(m["bizParam"]));
    }
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("modelTypeList") != m.end() && !m["modelTypeList"].empty()) {
      modelTypeListShrink = make_shared<string>(boost::any_cast<string>(m["modelTypeList"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~HalfLLMAppCallShrinkRequest() = default;
};
class HalfLLMAppCallResponseBodyDataOutputChoicesMessage : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};

  HalfLLMAppCallResponseBodyDataOutputChoicesMessage() {}

  explicit HalfLLMAppCallResponseBodyDataOutputChoicesMessage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~HalfLLMAppCallResponseBodyDataOutputChoicesMessage() = default;
};
class HalfLLMAppCallResponseBodyDataOutputChoices : public Darabonba::Model {
public:
  shared_ptr<string> finishReason{};
  shared_ptr<HalfLLMAppCallResponseBodyDataOutputChoicesMessage> message{};

  HalfLLMAppCallResponseBodyDataOutputChoices() {}

  explicit HalfLLMAppCallResponseBodyDataOutputChoices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishReason) {
      res["finishReason"] = boost::any(*finishReason);
    }
    if (message) {
      res["message"] = message ? boost::any(message->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishReason") != m.end() && !m["finishReason"].empty()) {
      finishReason = make_shared<string>(boost::any_cast<string>(m["finishReason"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      if (typeid(map<string, boost::any>) == m["message"].type()) {
        HalfLLMAppCallResponseBodyDataOutputChoicesMessage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["message"]));
        message = make_shared<HalfLLMAppCallResponseBodyDataOutputChoicesMessage>(model1);
      }
    }
  }


  virtual ~HalfLLMAppCallResponseBodyDataOutputChoices() = default;
};
class HalfLLMAppCallResponseBodyDataOutput : public Darabonba::Model {
public:
  shared_ptr<vector<HalfLLMAppCallResponseBodyDataOutputChoices>> choices{};

  HalfLLMAppCallResponseBodyDataOutput() {}

  explicit HalfLLMAppCallResponseBodyDataOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (choices) {
      vector<boost::any> temp1;
      for(auto item1:*choices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["choices"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("choices") != m.end() && !m["choices"].empty()) {
      if (typeid(vector<boost::any>) == m["choices"].type()) {
        vector<HalfLLMAppCallResponseBodyDataOutputChoices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["choices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HalfLLMAppCallResponseBodyDataOutputChoices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        choices = make_shared<vector<HalfLLMAppCallResponseBodyDataOutputChoices>>(expect1);
      }
    }
  }


  virtual ~HalfLLMAppCallResponseBodyDataOutput() = default;
};
class HalfLLMAppCallResponseBodyDataRt : public Darabonba::Model {
public:
  shared_ptr<long> firstRt{};
  shared_ptr<long> totalRt{};

  HalfLLMAppCallResponseBodyDataRt() {}

  explicit HalfLLMAppCallResponseBodyDataRt(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firstRt) {
      res["firstRt"] = boost::any(*firstRt);
    }
    if (totalRt) {
      res["totalRt"] = boost::any(*totalRt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("firstRt") != m.end() && !m["firstRt"].empty()) {
      firstRt = make_shared<long>(boost::any_cast<long>(m["firstRt"]));
    }
    if (m.find("totalRt") != m.end() && !m["totalRt"].empty()) {
      totalRt = make_shared<long>(boost::any_cast<long>(m["totalRt"]));
    }
  }


  virtual ~HalfLLMAppCallResponseBodyDataRt() = default;
};
class HalfLLMAppCallResponseBodyDataUsages : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};

  HalfLLMAppCallResponseBodyDataUsages() {}

  explicit HalfLLMAppCallResponseBodyDataUsages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
  }


  virtual ~HalfLLMAppCallResponseBodyDataUsages() = default;
};
class HalfLLMAppCallResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<HalfLLMAppCallResponseBodyDataOutput> output{};
  shared_ptr<string> requestId{};
  shared_ptr<HalfLLMAppCallResponseBodyDataRt> rt{};
  shared_ptr<string> sessionId{};
  shared_ptr<HalfLLMAppCallResponseBodyDataUsages> usages{};

  HalfLLMAppCallResponseBodyData() {}

  explicit HalfLLMAppCallResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (rt) {
      res["rt"] = rt ? boost::any(rt->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (usages) {
      res["usages"] = usages ? boost::any(usages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        HalfLLMAppCallResponseBodyDataOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<HalfLLMAppCallResponseBodyDataOutput>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("rt") != m.end() && !m["rt"].empty()) {
      if (typeid(map<string, boost::any>) == m["rt"].type()) {
        HalfLLMAppCallResponseBodyDataRt model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["rt"]));
        rt = make_shared<HalfLLMAppCallResponseBodyDataRt>(model1);
      }
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("usages") != m.end() && !m["usages"].empty()) {
      if (typeid(map<string, boost::any>) == m["usages"].type()) {
        HalfLLMAppCallResponseBodyDataUsages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usages"]));
        usages = make_shared<HalfLLMAppCallResponseBodyDataUsages>(model1);
      }
    }
  }


  virtual ~HalfLLMAppCallResponseBodyData() = default;
};
class HalfLLMAppCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<HalfLLMAppCallResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  HalfLLMAppCallResponseBody() {}

  explicit HalfLLMAppCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        HalfLLMAppCallResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<HalfLLMAppCallResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~HalfLLMAppCallResponseBody() = default;
};
class HalfLLMAppCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HalfLLMAppCallResponseBody> body{};

  HalfLLMAppCallResponse() {}

  explicit HalfLLMAppCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        HalfLLMAppCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HalfLLMAppCallResponseBody>(model1);
      }
    }
  }


  virtual ~HalfLLMAppCallResponse() = default;
};
class HalfLLMChatRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<bool> enableSearch{};
  shared_ptr<string> inputText{};
  shared_ptr<string> model{};
  shared_ptr<string> productKey{};
  shared_ptr<string> prompt{};
  shared_ptr<string> sessionId{};
  shared_ptr<bool> stream{};
  shared_ptr<string> tenantId{};

  HalfLLMChatRequest() {}

  explicit HalfLLMChatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (enableSearch) {
      res["enableSearch"] = boost::any(*enableSearch);
    }
    if (inputText) {
      res["inputText"] = boost::any(*inputText);
    }
    if (model) {
      res["model"] = boost::any(*model);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (prompt) {
      res["prompt"] = boost::any(*prompt);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("enableSearch") != m.end() && !m["enableSearch"].empty()) {
      enableSearch = make_shared<bool>(boost::any_cast<bool>(m["enableSearch"]));
    }
    if (m.find("inputText") != m.end() && !m["inputText"].empty()) {
      inputText = make_shared<string>(boost::any_cast<string>(m["inputText"]));
    }
    if (m.find("model") != m.end() && !m["model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["model"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("prompt") != m.end() && !m["prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["prompt"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~HalfLLMChatRequest() = default;
};
class HalfLLMChatResponseBodyDataOutputChoicesMessage : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};

  HalfLLMChatResponseBodyDataOutputChoicesMessage() {}

  explicit HalfLLMChatResponseBodyDataOutputChoicesMessage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~HalfLLMChatResponseBodyDataOutputChoicesMessage() = default;
};
class HalfLLMChatResponseBodyDataOutputChoices : public Darabonba::Model {
public:
  shared_ptr<string> finishReason{};
  shared_ptr<HalfLLMChatResponseBodyDataOutputChoicesMessage> message{};

  HalfLLMChatResponseBodyDataOutputChoices() {}

  explicit HalfLLMChatResponseBodyDataOutputChoices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishReason) {
      res["finishReason"] = boost::any(*finishReason);
    }
    if (message) {
      res["message"] = message ? boost::any(message->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishReason") != m.end() && !m["finishReason"].empty()) {
      finishReason = make_shared<string>(boost::any_cast<string>(m["finishReason"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      if (typeid(map<string, boost::any>) == m["message"].type()) {
        HalfLLMChatResponseBodyDataOutputChoicesMessage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["message"]));
        message = make_shared<HalfLLMChatResponseBodyDataOutputChoicesMessage>(model1);
      }
    }
  }


  virtual ~HalfLLMChatResponseBodyDataOutputChoices() = default;
};
class HalfLLMChatResponseBodyDataOutput : public Darabonba::Model {
public:
  shared_ptr<vector<HalfLLMChatResponseBodyDataOutputChoices>> choices{};

  HalfLLMChatResponseBodyDataOutput() {}

  explicit HalfLLMChatResponseBodyDataOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (choices) {
      vector<boost::any> temp1;
      for(auto item1:*choices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["choices"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("choices") != m.end() && !m["choices"].empty()) {
      if (typeid(vector<boost::any>) == m["choices"].type()) {
        vector<HalfLLMChatResponseBodyDataOutputChoices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["choices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HalfLLMChatResponseBodyDataOutputChoices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        choices = make_shared<vector<HalfLLMChatResponseBodyDataOutputChoices>>(expect1);
      }
    }
  }


  virtual ~HalfLLMChatResponseBodyDataOutput() = default;
};
class HalfLLMChatResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<HalfLLMChatResponseBodyDataOutput> output{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};

  HalfLLMChatResponseBodyData() {}

  explicit HalfLLMChatResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        HalfLLMChatResponseBodyDataOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<HalfLLMChatResponseBodyDataOutput>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
  }


  virtual ~HalfLLMChatResponseBodyData() = default;
};
class HalfLLMChatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<HalfLLMChatResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  HalfLLMChatResponseBody() {}

  explicit HalfLLMChatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        HalfLLMChatResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<HalfLLMChatResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~HalfLLMChatResponseBody() = default;
};
class HalfLLMChatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HalfLLMChatResponseBody> body{};

  HalfLLMChatResponse() {}

  explicit HalfLLMChatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        HalfLLMChatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HalfLLMChatResponseBody>(model1);
      }
    }
  }


  virtual ~HalfLLMChatResponse() = default;
};
class HalfLLMImageChatRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<bool> enableSearch{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> inputText{};
  shared_ptr<string> model{};
  shared_ptr<string> productKey{};
  shared_ptr<string> prompt{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> tenantId{};

  HalfLLMImageChatRequest() {}

  explicit HalfLLMImageChatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (enableSearch) {
      res["enableSearch"] = boost::any(*enableSearch);
    }
    if (imageUrl) {
      res["imageUrl"] = boost::any(*imageUrl);
    }
    if (inputText) {
      res["inputText"] = boost::any(*inputText);
    }
    if (model) {
      res["model"] = boost::any(*model);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (prompt) {
      res["prompt"] = boost::any(*prompt);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("enableSearch") != m.end() && !m["enableSearch"].empty()) {
      enableSearch = make_shared<bool>(boost::any_cast<bool>(m["enableSearch"]));
    }
    if (m.find("imageUrl") != m.end() && !m["imageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["imageUrl"]));
    }
    if (m.find("inputText") != m.end() && !m["inputText"].empty()) {
      inputText = make_shared<string>(boost::any_cast<string>(m["inputText"]));
    }
    if (m.find("model") != m.end() && !m["model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["model"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("prompt") != m.end() && !m["prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["prompt"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~HalfLLMImageChatRequest() = default;
};
class HalfLLMImageChatResponseBodyDataOutputChoicesMessage : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};

  HalfLLMImageChatResponseBodyDataOutputChoicesMessage() {}

  explicit HalfLLMImageChatResponseBodyDataOutputChoicesMessage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~HalfLLMImageChatResponseBodyDataOutputChoicesMessage() = default;
};
class HalfLLMImageChatResponseBodyDataOutputChoices : public Darabonba::Model {
public:
  shared_ptr<string> finishReason{};
  shared_ptr<HalfLLMImageChatResponseBodyDataOutputChoicesMessage> message{};

  HalfLLMImageChatResponseBodyDataOutputChoices() {}

  explicit HalfLLMImageChatResponseBodyDataOutputChoices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishReason) {
      res["finishReason"] = boost::any(*finishReason);
    }
    if (message) {
      res["message"] = message ? boost::any(message->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishReason") != m.end() && !m["finishReason"].empty()) {
      finishReason = make_shared<string>(boost::any_cast<string>(m["finishReason"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      if (typeid(map<string, boost::any>) == m["message"].type()) {
        HalfLLMImageChatResponseBodyDataOutputChoicesMessage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["message"]));
        message = make_shared<HalfLLMImageChatResponseBodyDataOutputChoicesMessage>(model1);
      }
    }
  }


  virtual ~HalfLLMImageChatResponseBodyDataOutputChoices() = default;
};
class HalfLLMImageChatResponseBodyDataOutput : public Darabonba::Model {
public:
  shared_ptr<vector<HalfLLMImageChatResponseBodyDataOutputChoices>> choices{};

  HalfLLMImageChatResponseBodyDataOutput() {}

  explicit HalfLLMImageChatResponseBodyDataOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (choices) {
      vector<boost::any> temp1;
      for(auto item1:*choices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["choices"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("choices") != m.end() && !m["choices"].empty()) {
      if (typeid(vector<boost::any>) == m["choices"].type()) {
        vector<HalfLLMImageChatResponseBodyDataOutputChoices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["choices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HalfLLMImageChatResponseBodyDataOutputChoices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        choices = make_shared<vector<HalfLLMImageChatResponseBodyDataOutputChoices>>(expect1);
      }
    }
  }


  virtual ~HalfLLMImageChatResponseBodyDataOutput() = default;
};
class HalfLLMImageChatResponseBodyDataRt : public Darabonba::Model {
public:
  shared_ptr<long> firstRt{};
  shared_ptr<long> totalRt{};

  HalfLLMImageChatResponseBodyDataRt() {}

  explicit HalfLLMImageChatResponseBodyDataRt(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firstRt) {
      res["firstRt"] = boost::any(*firstRt);
    }
    if (totalRt) {
      res["totalRt"] = boost::any(*totalRt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("firstRt") != m.end() && !m["firstRt"].empty()) {
      firstRt = make_shared<long>(boost::any_cast<long>(m["firstRt"]));
    }
    if (m.find("totalRt") != m.end() && !m["totalRt"].empty()) {
      totalRt = make_shared<long>(boost::any_cast<long>(m["totalRt"]));
    }
  }


  virtual ~HalfLLMImageChatResponseBodyDataRt() = default;
};
class HalfLLMImageChatResponseBodyDataUsages : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};

  HalfLLMImageChatResponseBodyDataUsages() {}

  explicit HalfLLMImageChatResponseBodyDataUsages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
  }


  virtual ~HalfLLMImageChatResponseBodyDataUsages() = default;
};
class HalfLLMImageChatResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<HalfLLMImageChatResponseBodyDataOutput> output{};
  shared_ptr<string> requestId{};
  shared_ptr<HalfLLMImageChatResponseBodyDataRt> rt{};
  shared_ptr<string> sessionId{};
  shared_ptr<HalfLLMImageChatResponseBodyDataUsages> usages{};

  HalfLLMImageChatResponseBodyData() {}

  explicit HalfLLMImageChatResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (rt) {
      res["rt"] = rt ? boost::any(rt->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (usages) {
      res["usages"] = usages ? boost::any(usages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        HalfLLMImageChatResponseBodyDataOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<HalfLLMImageChatResponseBodyDataOutput>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("rt") != m.end() && !m["rt"].empty()) {
      if (typeid(map<string, boost::any>) == m["rt"].type()) {
        HalfLLMImageChatResponseBodyDataRt model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["rt"]));
        rt = make_shared<HalfLLMImageChatResponseBodyDataRt>(model1);
      }
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("usages") != m.end() && !m["usages"].empty()) {
      if (typeid(map<string, boost::any>) == m["usages"].type()) {
        HalfLLMImageChatResponseBodyDataUsages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usages"]));
        usages = make_shared<HalfLLMImageChatResponseBodyDataUsages>(model1);
      }
    }
  }


  virtual ~HalfLLMImageChatResponseBodyData() = default;
};
class HalfLLMImageChatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<HalfLLMImageChatResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  HalfLLMImageChatResponseBody() {}

  explicit HalfLLMImageChatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        HalfLLMImageChatResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<HalfLLMImageChatResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~HalfLLMImageChatResponseBody() = default;
};
class HalfLLMImageChatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HalfLLMImageChatResponseBody> body{};

  HalfLLMImageChatResponse() {}

  explicit HalfLLMImageChatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        HalfLLMImageChatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HalfLLMImageChatResponseBody>(model1);
      }
    }
  }


  virtual ~HalfLLMImageChatResponse() = default;
};
class HalfLLMImageOcrRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> model{};
  shared_ptr<string> productKey{};
  shared_ptr<string> tenantId{};

  HalfLLMImageOcrRequest() {}

  explicit HalfLLMImageOcrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (imageUrl) {
      res["imageUrl"] = boost::any(*imageUrl);
    }
    if (model) {
      res["model"] = boost::any(*model);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("imageUrl") != m.end() && !m["imageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["imageUrl"]));
    }
    if (m.find("model") != m.end() && !m["model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["model"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~HalfLLMImageOcrRequest() = default;
};
class HalfLLMImageOcrResponseBodyDataOutputChoicesMessage : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};

  HalfLLMImageOcrResponseBodyDataOutputChoicesMessage() {}

  explicit HalfLLMImageOcrResponseBodyDataOutputChoicesMessage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~HalfLLMImageOcrResponseBodyDataOutputChoicesMessage() = default;
};
class HalfLLMImageOcrResponseBodyDataOutputChoices : public Darabonba::Model {
public:
  shared_ptr<string> finishReason{};
  shared_ptr<HalfLLMImageOcrResponseBodyDataOutputChoicesMessage> message{};

  HalfLLMImageOcrResponseBodyDataOutputChoices() {}

  explicit HalfLLMImageOcrResponseBodyDataOutputChoices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishReason) {
      res["finishReason"] = boost::any(*finishReason);
    }
    if (message) {
      res["message"] = message ? boost::any(message->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishReason") != m.end() && !m["finishReason"].empty()) {
      finishReason = make_shared<string>(boost::any_cast<string>(m["finishReason"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      if (typeid(map<string, boost::any>) == m["message"].type()) {
        HalfLLMImageOcrResponseBodyDataOutputChoicesMessage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["message"]));
        message = make_shared<HalfLLMImageOcrResponseBodyDataOutputChoicesMessage>(model1);
      }
    }
  }


  virtual ~HalfLLMImageOcrResponseBodyDataOutputChoices() = default;
};
class HalfLLMImageOcrResponseBodyDataOutput : public Darabonba::Model {
public:
  shared_ptr<vector<HalfLLMImageOcrResponseBodyDataOutputChoices>> choices{};

  HalfLLMImageOcrResponseBodyDataOutput() {}

  explicit HalfLLMImageOcrResponseBodyDataOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (choices) {
      vector<boost::any> temp1;
      for(auto item1:*choices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["choices"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("choices") != m.end() && !m["choices"].empty()) {
      if (typeid(vector<boost::any>) == m["choices"].type()) {
        vector<HalfLLMImageOcrResponseBodyDataOutputChoices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["choices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HalfLLMImageOcrResponseBodyDataOutputChoices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        choices = make_shared<vector<HalfLLMImageOcrResponseBodyDataOutputChoices>>(expect1);
      }
    }
  }


  virtual ~HalfLLMImageOcrResponseBodyDataOutput() = default;
};
class HalfLLMImageOcrResponseBodyDataRt : public Darabonba::Model {
public:
  shared_ptr<long> firstRt{};
  shared_ptr<long> totalRt{};

  HalfLLMImageOcrResponseBodyDataRt() {}

  explicit HalfLLMImageOcrResponseBodyDataRt(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firstRt) {
      res["firstRt"] = boost::any(*firstRt);
    }
    if (totalRt) {
      res["totalRt"] = boost::any(*totalRt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("firstRt") != m.end() && !m["firstRt"].empty()) {
      firstRt = make_shared<long>(boost::any_cast<long>(m["firstRt"]));
    }
    if (m.find("totalRt") != m.end() && !m["totalRt"].empty()) {
      totalRt = make_shared<long>(boost::any_cast<long>(m["totalRt"]));
    }
  }


  virtual ~HalfLLMImageOcrResponseBodyDataRt() = default;
};
class HalfLLMImageOcrResponseBodyDataUsages : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};

  HalfLLMImageOcrResponseBodyDataUsages() {}

  explicit HalfLLMImageOcrResponseBodyDataUsages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
  }


  virtual ~HalfLLMImageOcrResponseBodyDataUsages() = default;
};
class HalfLLMImageOcrResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<HalfLLMImageOcrResponseBodyDataOutput> output{};
  shared_ptr<string> requestId{};
  shared_ptr<HalfLLMImageOcrResponseBodyDataRt> rt{};
  shared_ptr<string> sessionId{};
  shared_ptr<HalfLLMImageOcrResponseBodyDataUsages> usages{};

  HalfLLMImageOcrResponseBodyData() {}

  explicit HalfLLMImageOcrResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (rt) {
      res["rt"] = rt ? boost::any(rt->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (usages) {
      res["usages"] = usages ? boost::any(usages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        HalfLLMImageOcrResponseBodyDataOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<HalfLLMImageOcrResponseBodyDataOutput>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("rt") != m.end() && !m["rt"].empty()) {
      if (typeid(map<string, boost::any>) == m["rt"].type()) {
        HalfLLMImageOcrResponseBodyDataRt model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["rt"]));
        rt = make_shared<HalfLLMImageOcrResponseBodyDataRt>(model1);
      }
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("usages") != m.end() && !m["usages"].empty()) {
      if (typeid(map<string, boost::any>) == m["usages"].type()) {
        HalfLLMImageOcrResponseBodyDataUsages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usages"]));
        usages = make_shared<HalfLLMImageOcrResponseBodyDataUsages>(model1);
      }
    }
  }


  virtual ~HalfLLMImageOcrResponseBodyData() = default;
};
class HalfLLMImageOcrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<HalfLLMImageOcrResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  HalfLLMImageOcrResponseBody() {}

  explicit HalfLLMImageOcrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        HalfLLMImageOcrResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<HalfLLMImageOcrResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~HalfLLMImageOcrResponseBody() = default;
};
class HalfLLMImageOcrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HalfLLMImageOcrResponseBody> body{};

  HalfLLMImageOcrResponse() {}

  explicit HalfLLMImageOcrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        HalfLLMImageOcrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HalfLLMImageOcrResponseBody>(model1);
      }
    }
  }


  virtual ~HalfLLMImageOcrResponse() = default;
};
class HalfLLMTTSChatRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<bool> enableSearch{};
  shared_ptr<string> format{};
  shared_ptr<string> model{};
  shared_ptr<long> pitchRate{};
  shared_ptr<string> productKey{};
  shared_ptr<string> prompt{};
  shared_ptr<long> sampleRate{};
  shared_ptr<string> sessionId{};
  shared_ptr<long> speechRate{};
  shared_ptr<bool> stream{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> text{};
  shared_ptr<string> url{};
  shared_ptr<string> voice{};
  shared_ptr<long> volume{};

  HalfLLMTTSChatRequest() {}

  explicit HalfLLMTTSChatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (enableSearch) {
      res["enableSearch"] = boost::any(*enableSearch);
    }
    if (format) {
      res["format"] = boost::any(*format);
    }
    if (model) {
      res["model"] = boost::any(*model);
    }
    if (pitchRate) {
      res["pitchRate"] = boost::any(*pitchRate);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (prompt) {
      res["prompt"] = boost::any(*prompt);
    }
    if (sampleRate) {
      res["sampleRate"] = boost::any(*sampleRate);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (speechRate) {
      res["speechRate"] = boost::any(*speechRate);
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    if (voice) {
      res["voice"] = boost::any(*voice);
    }
    if (volume) {
      res["volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("enableSearch") != m.end() && !m["enableSearch"].empty()) {
      enableSearch = make_shared<bool>(boost::any_cast<bool>(m["enableSearch"]));
    }
    if (m.find("format") != m.end() && !m["format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["format"]));
    }
    if (m.find("model") != m.end() && !m["model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["model"]));
    }
    if (m.find("pitchRate") != m.end() && !m["pitchRate"].empty()) {
      pitchRate = make_shared<long>(boost::any_cast<long>(m["pitchRate"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("prompt") != m.end() && !m["prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["prompt"]));
    }
    if (m.find("sampleRate") != m.end() && !m["sampleRate"].empty()) {
      sampleRate = make_shared<long>(boost::any_cast<long>(m["sampleRate"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("speechRate") != m.end() && !m["speechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["speechRate"]));
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
    if (m.find("voice") != m.end() && !m["voice"].empty()) {
      voice = make_shared<string>(boost::any_cast<string>(m["voice"]));
    }
    if (m.find("volume") != m.end() && !m["volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["volume"]));
    }
  }


  virtual ~HalfLLMTTSChatRequest() = default;
};
class HalfLLMTTSChatResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<uint8_t>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> text{};

  HalfLLMTTSChatResponseBodyData() {}

  explicit HalfLLMTTSChatResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["data"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~HalfLLMTTSChatResponseBodyData() = default;
};
class HalfLLMTTSChatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<HalfLLMTTSChatResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  HalfLLMTTSChatResponseBody() {}

  explicit HalfLLMTTSChatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        HalfLLMTTSChatResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<HalfLLMTTSChatResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~HalfLLMTTSChatResponseBody() = default;
};
class HalfLLMTTSChatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HalfLLMTTSChatResponseBody> body{};

  HalfLLMTTSChatResponse() {}

  explicit HalfLLMTTSChatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        HalfLLMTTSChatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HalfLLMTTSChatResponseBody>(model1);
      }
    }
  }


  virtual ~HalfLLMTTSChatResponse() = default;
};
class QueryDevicePageRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<long> disableStatus{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productKey{};
  shared_ptr<string> productName{};
  shared_ptr<long> status{};

  QueryDevicePageRequest() {}

  explicit QueryDevicePageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (disableStatus) {
      res["disableStatus"] = boost::any(*disableStatus);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("disableStatus") != m.end() && !m["disableStatus"].empty()) {
      disableStatus = make_shared<long>(boost::any_cast<long>(m["disableStatus"]));
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~QueryDevicePageRequest() = default;
};
class QueryDevicePageResponseBodyDataData : public Darabonba::Model {
public:
  shared_ptr<string> activeTime{};
  shared_ptr<string> aliyunUid{};
  shared_ptr<string> batchNo{};
  shared_ptr<string> deviceName{};
  shared_ptr<long> disableStatus{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModify{};
  shared_ptr<long> id{};
  shared_ptr<string> productKey{};
  shared_ptr<string> productName{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<string> tenantId{};

  QueryDevicePageResponseBodyDataData() {}

  explicit QueryDevicePageResponseBodyDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeTime) {
      res["activeTime"] = boost::any(*activeTime);
    }
    if (aliyunUid) {
      res["aliyunUid"] = boost::any(*aliyunUid);
    }
    if (batchNo) {
      res["batchNo"] = boost::any(*batchNo);
    }
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (disableStatus) {
      res["disableStatus"] = boost::any(*disableStatus);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModify) {
      res["gmtModify"] = boost::any(*gmtModify);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("activeTime") != m.end() && !m["activeTime"].empty()) {
      activeTime = make_shared<string>(boost::any_cast<string>(m["activeTime"]));
    }
    if (m.find("aliyunUid") != m.end() && !m["aliyunUid"].empty()) {
      aliyunUid = make_shared<string>(boost::any_cast<string>(m["aliyunUid"]));
    }
    if (m.find("batchNo") != m.end() && !m["batchNo"].empty()) {
      batchNo = make_shared<string>(boost::any_cast<string>(m["batchNo"]));
    }
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("disableStatus") != m.end() && !m["disableStatus"].empty()) {
      disableStatus = make_shared<long>(boost::any_cast<long>(m["disableStatus"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModify") != m.end() && !m["gmtModify"].empty()) {
      gmtModify = make_shared<string>(boost::any_cast<string>(m["gmtModify"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~QueryDevicePageResponseBodyDataData() = default;
};
class QueryDevicePageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDevicePageResponseBodyDataData>> data{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryDevicePageResponseBodyData() {}

  explicit QueryDevicePageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<QueryDevicePageResponseBodyDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDevicePageResponseBodyDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryDevicePageResponseBodyDataData>>(expect1);
      }
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~QueryDevicePageResponseBodyData() = default;
};
class QueryDevicePageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryDevicePageResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  QueryDevicePageResponseBody() {}

  explicit QueryDevicePageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        QueryDevicePageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryDevicePageResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~QueryDevicePageResponseBody() = default;
};
class QueryDevicePageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDevicePageResponseBody> body{};

  QueryDevicePageResponse() {}

  explicit QueryDevicePageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        QueryDevicePageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDevicePageResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDevicePageResponse() = default;
};
class QueryProductPageRequest : public Darabonba::Model {
public:
  shared_ptr<vector<uint8_t>> modelType{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productName{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userId{};

  QueryProductPageRequest() {}

  explicit QueryProductPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelType) {
      res["modelType"] = boost::any(*modelType);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("modelType") != m.end() && !m["modelType"].empty()) {
      modelType = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["modelType"]));
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~QueryProductPageRequest() = default;
};
class QueryProductPageResponseBodyDataData : public Darabonba::Model {
public:
  shared_ptr<long> activeLicenseCount{};
  shared_ptr<string> apiKey{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> licenseCount{};
  shared_ptr<long> maxQps{};
  shared_ptr<string> productKey{};
  shared_ptr<string> productName{};
  shared_ptr<string> productSecret{};
  shared_ptr<string> tenantId{};
  shared_ptr<long> tokenCount{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> usedToken{};
  shared_ptr<string> userId{};

  QueryProductPageResponseBodyDataData() {}

  explicit QueryProductPageResponseBodyDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeLicenseCount) {
      res["activeLicenseCount"] = boost::any(*activeLicenseCount);
    }
    if (apiKey) {
      res["apiKey"] = boost::any(*apiKey);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (licenseCount) {
      res["licenseCount"] = boost::any(*licenseCount);
    }
    if (maxQps) {
      res["maxQps"] = boost::any(*maxQps);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productSecret) {
      res["productSecret"] = boost::any(*productSecret);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (tokenCount) {
      res["tokenCount"] = boost::any(*tokenCount);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (usedToken) {
      res["usedToken"] = boost::any(*usedToken);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("activeLicenseCount") != m.end() && !m["activeLicenseCount"].empty()) {
      activeLicenseCount = make_shared<long>(boost::any_cast<long>(m["activeLicenseCount"]));
    }
    if (m.find("apiKey") != m.end() && !m["apiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["apiKey"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("licenseCount") != m.end() && !m["licenseCount"].empty()) {
      licenseCount = make_shared<long>(boost::any_cast<long>(m["licenseCount"]));
    }
    if (m.find("maxQps") != m.end() && !m["maxQps"].empty()) {
      maxQps = make_shared<long>(boost::any_cast<long>(m["maxQps"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productSecret") != m.end() && !m["productSecret"].empty()) {
      productSecret = make_shared<string>(boost::any_cast<string>(m["productSecret"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("tokenCount") != m.end() && !m["tokenCount"].empty()) {
      tokenCount = make_shared<long>(boost::any_cast<long>(m["tokenCount"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("usedToken") != m.end() && !m["usedToken"].empty()) {
      usedToken = make_shared<long>(boost::any_cast<long>(m["usedToken"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~QueryProductPageResponseBodyDataData() = default;
};
class QueryProductPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryProductPageResponseBodyDataData>> data{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryProductPageResponseBodyData() {}

  explicit QueryProductPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<QueryProductPageResponseBodyDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryProductPageResponseBodyDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryProductPageResponseBodyDataData>>(expect1);
      }
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~QueryProductPageResponseBodyData() = default;
};
class QueryProductPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryProductPageResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  QueryProductPageResponseBody() {}

  explicit QueryProductPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        QueryProductPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryProductPageResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~QueryProductPageResponseBody() = default;
};
class QueryProductPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryProductPageResponseBody> body{};

  QueryProductPageResponse() {}

  explicit QueryProductPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        QueryProductPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryProductPageResponseBody>(model1);
      }
    }
  }


  virtual ~QueryProductPageResponse() = default;
};
class QueryProductQuotaPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productKey{};
  shared_ptr<string> productName{};
  shared_ptr<string> purchaseTimeEnd{};
  shared_ptr<string> purchaseTimeStart{};
  shared_ptr<long> purchaseType{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userId{};

  QueryProductQuotaPageRequest() {}

  explicit QueryProductQuotaPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (purchaseTimeEnd) {
      res["purchaseTimeEnd"] = boost::any(*purchaseTimeEnd);
    }
    if (purchaseTimeStart) {
      res["purchaseTimeStart"] = boost::any(*purchaseTimeStart);
    }
    if (purchaseType) {
      res["purchaseType"] = boost::any(*purchaseType);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("purchaseTimeEnd") != m.end() && !m["purchaseTimeEnd"].empty()) {
      purchaseTimeEnd = make_shared<string>(boost::any_cast<string>(m["purchaseTimeEnd"]));
    }
    if (m.find("purchaseTimeStart") != m.end() && !m["purchaseTimeStart"].empty()) {
      purchaseTimeStart = make_shared<string>(boost::any_cast<string>(m["purchaseTimeStart"]));
    }
    if (m.find("purchaseType") != m.end() && !m["purchaseType"].empty()) {
      purchaseType = make_shared<long>(boost::any_cast<long>(m["purchaseType"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~QueryProductQuotaPageRequest() = default;
};
class QueryProductQuotaPageResponseBodyDataData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> duration{};
  shared_ptr<long> durationType{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> id{};
  shared_ptr<long> ifUnsubscribe{};
  shared_ptr<long> ifUsed{};
  shared_ptr<long> licenseCount{};
  shared_ptr<long> maxQps{};
  shared_ptr<string> orderId{};
  shared_ptr<string> productKey{};
  shared_ptr<string> productName{};
  shared_ptr<long> purchaseModel{};
  shared_ptr<long> purchaseType{};
  shared_ptr<double> settlementFee{};
  shared_ptr<string> tenantId{};
  shared_ptr<long> tokenNumber{};
  shared_ptr<double> unitPrice{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};

  QueryProductQuotaPageResponseBodyDataData() {}

  explicit QueryProductQuotaPageResponseBodyDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (durationType) {
      res["durationType"] = boost::any(*durationType);
    }
    if (expireTime) {
      res["expireTime"] = boost::any(*expireTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (ifUnsubscribe) {
      res["ifUnsubscribe"] = boost::any(*ifUnsubscribe);
    }
    if (ifUsed) {
      res["ifUsed"] = boost::any(*ifUsed);
    }
    if (licenseCount) {
      res["licenseCount"] = boost::any(*licenseCount);
    }
    if (maxQps) {
      res["maxQps"] = boost::any(*maxQps);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (purchaseModel) {
      res["purchaseModel"] = boost::any(*purchaseModel);
    }
    if (purchaseType) {
      res["purchaseType"] = boost::any(*purchaseType);
    }
    if (settlementFee) {
      res["settlementFee"] = boost::any(*settlementFee);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (tokenNumber) {
      res["tokenNumber"] = boost::any(*tokenNumber);
    }
    if (unitPrice) {
      res["unitPrice"] = boost::any(*unitPrice);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["duration"]));
    }
    if (m.find("durationType") != m.end() && !m["durationType"].empty()) {
      durationType = make_shared<long>(boost::any_cast<long>(m["durationType"]));
    }
    if (m.find("expireTime") != m.end() && !m["expireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["expireTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("ifUnsubscribe") != m.end() && !m["ifUnsubscribe"].empty()) {
      ifUnsubscribe = make_shared<long>(boost::any_cast<long>(m["ifUnsubscribe"]));
    }
    if (m.find("ifUsed") != m.end() && !m["ifUsed"].empty()) {
      ifUsed = make_shared<long>(boost::any_cast<long>(m["ifUsed"]));
    }
    if (m.find("licenseCount") != m.end() && !m["licenseCount"].empty()) {
      licenseCount = make_shared<long>(boost::any_cast<long>(m["licenseCount"]));
    }
    if (m.find("maxQps") != m.end() && !m["maxQps"].empty()) {
      maxQps = make_shared<long>(boost::any_cast<long>(m["maxQps"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("purchaseModel") != m.end() && !m["purchaseModel"].empty()) {
      purchaseModel = make_shared<long>(boost::any_cast<long>(m["purchaseModel"]));
    }
    if (m.find("purchaseType") != m.end() && !m["purchaseType"].empty()) {
      purchaseType = make_shared<long>(boost::any_cast<long>(m["purchaseType"]));
    }
    if (m.find("settlementFee") != m.end() && !m["settlementFee"].empty()) {
      settlementFee = make_shared<double>(boost::any_cast<double>(m["settlementFee"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("tokenNumber") != m.end() && !m["tokenNumber"].empty()) {
      tokenNumber = make_shared<long>(boost::any_cast<long>(m["tokenNumber"]));
    }
    if (m.find("unitPrice") != m.end() && !m["unitPrice"].empty()) {
      unitPrice = make_shared<double>(boost::any_cast<double>(m["unitPrice"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~QueryProductQuotaPageResponseBodyDataData() = default;
};
class QueryProductQuotaPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryProductQuotaPageResponseBodyDataData>> data{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryProductQuotaPageResponseBodyData() {}

  explicit QueryProductQuotaPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<QueryProductQuotaPageResponseBodyDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryProductQuotaPageResponseBodyDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryProductQuotaPageResponseBodyDataData>>(expect1);
      }
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~QueryProductQuotaPageResponseBodyData() = default;
};
class QueryProductQuotaPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryProductQuotaPageResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  QueryProductQuotaPageResponseBody() {}

  explicit QueryProductQuotaPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        QueryProductQuotaPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryProductQuotaPageResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~QueryProductQuotaPageResponseBody() = default;
};
class QueryProductQuotaPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryProductQuotaPageResponseBody> body{};

  QueryProductQuotaPageResponse() {}

  explicit QueryProductQuotaPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        QueryProductQuotaPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryProductQuotaPageResponseBody>(model1);
      }
    }
  }


  virtual ~QueryProductQuotaPageResponse() = default;
};
class QueryTokenUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> productKey{};
  shared_ptr<string> startDate{};
  shared_ptr<string> tenantId{};

  QueryTokenUsageRequest() {}

  explicit QueryTokenUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["endDate"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["startDate"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~QueryTokenUsageRequest() = default;
};
class QueryTokenUsageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> apiKey{};
  shared_ptr<long> inputToken{};
  shared_ptr<long> outputToken{};
  shared_ptr<string> productKey{};
  shared_ptr<string> productName{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> usageTime{};

  QueryTokenUsageResponseBodyData() {}

  explicit QueryTokenUsageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKey) {
      res["apiKey"] = boost::any(*apiKey);
    }
    if (inputToken) {
      res["inputToken"] = boost::any(*inputToken);
    }
    if (outputToken) {
      res["outputToken"] = boost::any(*outputToken);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (usageTime) {
      res["usageTime"] = boost::any(*usageTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiKey") != m.end() && !m["apiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["apiKey"]));
    }
    if (m.find("inputToken") != m.end() && !m["inputToken"].empty()) {
      inputToken = make_shared<long>(boost::any_cast<long>(m["inputToken"]));
    }
    if (m.find("outputToken") != m.end() && !m["outputToken"].empty()) {
      outputToken = make_shared<long>(boost::any_cast<long>(m["outputToken"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("usageTime") != m.end() && !m["usageTime"].empty()) {
      usageTime = make_shared<string>(boost::any_cast<string>(m["usageTime"]));
    }
  }


  virtual ~QueryTokenUsageResponseBodyData() = default;
};
class QueryTokenUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<QueryTokenUsageResponseBodyData>> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  QueryTokenUsageResponseBody() {}

  explicit QueryTokenUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<QueryTokenUsageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTokenUsageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryTokenUsageResponseBodyData>>(expect1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~QueryTokenUsageResponseBody() = default;
};
class QueryTokenUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTokenUsageResponseBody> body{};

  QueryTokenUsageResponse() {}

  explicit QueryTokenUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        QueryTokenUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTokenUsageResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTokenUsageResponse() = default;
};
class RevokeChannelSignResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> channelName{};
  shared_ptr<string> contact{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> phone{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};

  RevokeChannelSignResponseBodyData() {}

  explicit RevokeChannelSignResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelName) {
      res["channelName"] = boost::any(*channelName);
    }
    if (contact) {
      res["contact"] = boost::any(*contact);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (modifyTime) {
      res["modifyTime"] = boost::any(*modifyTime);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channelName") != m.end() && !m["channelName"].empty()) {
      channelName = make_shared<string>(boost::any_cast<string>(m["channelName"]));
    }
    if (m.find("contact") != m.end() && !m["contact"].empty()) {
      contact = make_shared<string>(boost::any_cast<string>(m["contact"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("modifyTime") != m.end() && !m["modifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["modifyTime"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~RevokeChannelSignResponseBodyData() = default;
};
class RevokeChannelSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RevokeChannelSignResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  RevokeChannelSignResponseBody() {}

  explicit RevokeChannelSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RevokeChannelSignResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RevokeChannelSignResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~RevokeChannelSignResponseBody() = default;
};
class RevokeChannelSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RevokeChannelSignResponseBody> body{};

  RevokeChannelSignResponse() {}

  explicit RevokeChannelSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        RevokeChannelSignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeChannelSignResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeChannelSignResponse() = default;
};
class UpdateDeviceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> productKey{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};

  UpdateDeviceStatusRequest() {}

  explicit UpdateDeviceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~UpdateDeviceStatusRequest() = default;
};
class UpdateDeviceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  UpdateDeviceStatusResponseBody() {}

  explicit UpdateDeviceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~UpdateDeviceStatusResponseBody() = default;
};
class UpdateDeviceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDeviceStatusResponseBody> body{};

  UpdateDeviceStatusResponse() {}

  explicit UpdateDeviceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        UpdateDeviceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDeviceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDeviceStatusResponse() = default;
};
class UpdateImageQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<long> durationType{};
  shared_ptr<long> imageCount{};
  shared_ptr<long> licenseCount{};
  shared_ptr<long> packageType{};
  shared_ptr<string> productKey{};
  shared_ptr<long> purchaseType{};
  shared_ptr<long> recordId{};
  shared_ptr<double> settlementAmount{};
  shared_ptr<string> tenantId{};
  shared_ptr<double> unitPrice{};
  shared_ptr<string> userId{};

  UpdateImageQuotaRequest() {}

  explicit UpdateImageQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (durationType) {
      res["durationType"] = boost::any(*durationType);
    }
    if (imageCount) {
      res["imageCount"] = boost::any(*imageCount);
    }
    if (licenseCount) {
      res["licenseCount"] = boost::any(*licenseCount);
    }
    if (packageType) {
      res["packageType"] = boost::any(*packageType);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (purchaseType) {
      res["purchaseType"] = boost::any(*purchaseType);
    }
    if (recordId) {
      res["recordId"] = boost::any(*recordId);
    }
    if (settlementAmount) {
      res["settlementAmount"] = boost::any(*settlementAmount);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (unitPrice) {
      res["unitPrice"] = boost::any(*unitPrice);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["duration"]));
    }
    if (m.find("durationType") != m.end() && !m["durationType"].empty()) {
      durationType = make_shared<long>(boost::any_cast<long>(m["durationType"]));
    }
    if (m.find("imageCount") != m.end() && !m["imageCount"].empty()) {
      imageCount = make_shared<long>(boost::any_cast<long>(m["imageCount"]));
    }
    if (m.find("licenseCount") != m.end() && !m["licenseCount"].empty()) {
      licenseCount = make_shared<long>(boost::any_cast<long>(m["licenseCount"]));
    }
    if (m.find("packageType") != m.end() && !m["packageType"].empty()) {
      packageType = make_shared<long>(boost::any_cast<long>(m["packageType"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("purchaseType") != m.end() && !m["purchaseType"].empty()) {
      purchaseType = make_shared<long>(boost::any_cast<long>(m["purchaseType"]));
    }
    if (m.find("recordId") != m.end() && !m["recordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["recordId"]));
    }
    if (m.find("settlementAmount") != m.end() && !m["settlementAmount"].empty()) {
      settlementAmount = make_shared<double>(boost::any_cast<double>(m["settlementAmount"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("unitPrice") != m.end() && !m["unitPrice"].empty()) {
      unitPrice = make_shared<double>(boost::any_cast<double>(m["unitPrice"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~UpdateImageQuotaRequest() = default;
};
class UpdateImageQuotaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> productKey{};
  shared_ptr<string> productName{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userId{};

  UpdateImageQuotaResponseBodyData() {}

  explicit UpdateImageQuotaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~UpdateImageQuotaResponseBodyData() = default;
};
class UpdateImageQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateImageQuotaResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  UpdateImageQuotaResponseBody() {}

  explicit UpdateImageQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        UpdateImageQuotaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<UpdateImageQuotaResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~UpdateImageQuotaResponseBody() = default;
};
class UpdateImageQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateImageQuotaResponseBody> body{};

  UpdateImageQuotaResponse() {}

  explicit UpdateImageQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        UpdateImageQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateImageQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateImageQuotaResponse() = default;
};
class UpdateQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<long> durationType{};
  shared_ptr<long> licenseCount{};
  shared_ptr<long> maxQps{};
  shared_ptr<long> packageType{};
  shared_ptr<string> productKey{};
  shared_ptr<long> purchaseType{};
  shared_ptr<long> recordId{};
  shared_ptr<double> settlementAmount{};
  shared_ptr<string> tenantId{};
  shared_ptr<long> tokenNumber{};
  shared_ptr<double> unitPrice{};
  shared_ptr<string> userId{};

  UpdateQuotaRequest() {}

  explicit UpdateQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (durationType) {
      res["durationType"] = boost::any(*durationType);
    }
    if (licenseCount) {
      res["licenseCount"] = boost::any(*licenseCount);
    }
    if (maxQps) {
      res["maxQps"] = boost::any(*maxQps);
    }
    if (packageType) {
      res["packageType"] = boost::any(*packageType);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (purchaseType) {
      res["purchaseType"] = boost::any(*purchaseType);
    }
    if (recordId) {
      res["recordId"] = boost::any(*recordId);
    }
    if (settlementAmount) {
      res["settlementAmount"] = boost::any(*settlementAmount);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (tokenNumber) {
      res["tokenNumber"] = boost::any(*tokenNumber);
    }
    if (unitPrice) {
      res["unitPrice"] = boost::any(*unitPrice);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["duration"]));
    }
    if (m.find("durationType") != m.end() && !m["durationType"].empty()) {
      durationType = make_shared<long>(boost::any_cast<long>(m["durationType"]));
    }
    if (m.find("licenseCount") != m.end() && !m["licenseCount"].empty()) {
      licenseCount = make_shared<long>(boost::any_cast<long>(m["licenseCount"]));
    }
    if (m.find("maxQps") != m.end() && !m["maxQps"].empty()) {
      maxQps = make_shared<long>(boost::any_cast<long>(m["maxQps"]));
    }
    if (m.find("packageType") != m.end() && !m["packageType"].empty()) {
      packageType = make_shared<long>(boost::any_cast<long>(m["packageType"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("purchaseType") != m.end() && !m["purchaseType"].empty()) {
      purchaseType = make_shared<long>(boost::any_cast<long>(m["purchaseType"]));
    }
    if (m.find("recordId") != m.end() && !m["recordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["recordId"]));
    }
    if (m.find("settlementAmount") != m.end() && !m["settlementAmount"].empty()) {
      settlementAmount = make_shared<double>(boost::any_cast<double>(m["settlementAmount"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("tokenNumber") != m.end() && !m["tokenNumber"].empty()) {
      tokenNumber = make_shared<long>(boost::any_cast<long>(m["tokenNumber"]));
    }
    if (m.find("unitPrice") != m.end() && !m["unitPrice"].empty()) {
      unitPrice = make_shared<double>(boost::any_cast<double>(m["unitPrice"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~UpdateQuotaRequest() = default;
};
class UpdateQuotaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> productKey{};
  shared_ptr<string> productName{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userId{};

  UpdateQuotaResponseBodyData() {}

  explicit UpdateQuotaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (productKey) {
      res["productKey"] = boost::any(*productKey);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
    if (m.find("productKey") != m.end() && !m["productKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["productKey"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~UpdateQuotaResponseBodyData() = default;
};
class UpdateQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateQuotaResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  UpdateQuotaResponseBody() {}

  explicit UpdateQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        UpdateQuotaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<UpdateQuotaResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~UpdateQuotaResponseBody() = default;
};
class UpdateQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateQuotaResponseBody> body{};

  UpdateQuotaResponse() {}

  explicit UpdateQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        UpdateQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateQuotaResponse() = default;
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
  CreateChannelSignResponse createChannelSignWithOptions(shared_ptr<CreateChannelSignRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChannelSignResponse createChannelSign(shared_ptr<CreateChannelSignRequest> request);
  CreateProductResponse createProductWithOptions(shared_ptr<CreateProductRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProductResponse createProduct(shared_ptr<CreateProductRequest> request);
  DeleteProductResponse deleteProductWithOptions(shared_ptr<DeleteProductRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProductResponse deleteProduct(shared_ptr<DeleteProductRequest> request);
  DeviceRegisterResponse deviceRegisterWithOptions(shared_ptr<DeviceRegisterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeviceRegisterResponse deviceRegister(shared_ptr<DeviceRegisterRequest> request);
  GetChannelSignResponse getChannelSignWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChannelSignResponse getChannelSign();
  GetQuotaInfoResponse getQuotaInfoWithOptions(shared_ptr<GetQuotaInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuotaInfoResponse getQuotaInfo(shared_ptr<GetQuotaInfoRequest> request);
  GetTokenResponse getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTokenResponse getToken(shared_ptr<GetTokenRequest> request);
  HalfLLMAppCallResponse halfLLMAppCallWithOptions(shared_ptr<HalfLLMAppCallRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HalfLLMAppCallResponse halfLLMAppCall(shared_ptr<HalfLLMAppCallRequest> request);
  HalfLLMChatResponse halfLLMChatWithOptions(shared_ptr<HalfLLMChatRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HalfLLMChatResponse halfLLMChat(shared_ptr<HalfLLMChatRequest> request);
  HalfLLMImageChatResponse halfLLMImageChatWithOptions(shared_ptr<HalfLLMImageChatRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HalfLLMImageChatResponse halfLLMImageChat(shared_ptr<HalfLLMImageChatRequest> request);
  HalfLLMImageOcrResponse halfLLMImageOcrWithOptions(shared_ptr<HalfLLMImageOcrRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HalfLLMImageOcrResponse halfLLMImageOcr(shared_ptr<HalfLLMImageOcrRequest> request);
  HalfLLMTTSChatResponse halfLLMTTSChatWithOptions(shared_ptr<HalfLLMTTSChatRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HalfLLMTTSChatResponse halfLLMTTSChat(shared_ptr<HalfLLMTTSChatRequest> request);
  QueryDevicePageResponse queryDevicePageWithOptions(shared_ptr<QueryDevicePageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDevicePageResponse queryDevicePage(shared_ptr<QueryDevicePageRequest> request);
  QueryProductPageResponse queryProductPageWithOptions(shared_ptr<QueryProductPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryProductPageResponse queryProductPage(shared_ptr<QueryProductPageRequest> request);
  QueryProductQuotaPageResponse queryProductQuotaPageWithOptions(shared_ptr<QueryProductQuotaPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryProductQuotaPageResponse queryProductQuotaPage(shared_ptr<QueryProductQuotaPageRequest> request);
  QueryTokenUsageResponse queryTokenUsageWithOptions(shared_ptr<QueryTokenUsageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTokenUsageResponse queryTokenUsage(shared_ptr<QueryTokenUsageRequest> request);
  RevokeChannelSignResponse revokeChannelSignWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeChannelSignResponse revokeChannelSign();
  UpdateDeviceStatusResponse updateDeviceStatusWithOptions(shared_ptr<UpdateDeviceStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDeviceStatusResponse updateDeviceStatus(shared_ptr<UpdateDeviceStatusRequest> request);
  UpdateImageQuotaResponse updateImageQuotaWithOptions(shared_ptr<UpdateImageQuotaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateImageQuotaResponse updateImageQuota(shared_ptr<UpdateImageQuotaRequest> request);
  UpdateQuotaResponse updateQuotaWithOptions(shared_ptr<UpdateQuotaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateQuotaResponse updateQuota(shared_ptr<UpdateQuotaRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_BailianModelOnChip20240816

#endif
