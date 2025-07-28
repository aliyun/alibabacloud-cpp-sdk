// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_YUNJIAN20211217_H_
#define ALIBABACLOUD_YUNJIAN20211217_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Yunjian20211217 {
class CreateDemandPlanHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> yunUserId{};

  CreateDemandPlanHeaders() {}

  explicit CreateDemandPlanHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (yunUserId) {
      res["Yun-User-Id"] = boost::any(*yunUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Yun-User-Id") != m.end() && !m["Yun-User-Id"].empty()) {
      yunUserId = make_shared<string>(boost::any_cast<string>(m["Yun-User-Id"]));
    }
  }


  virtual ~CreateDemandPlanHeaders() = default;
};
class CreateDemandPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> period{};
  shared_ptr<string> source{};
  shared_ptr<long> targetCid{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  CreateDemandPlanRequest() {}

  explicit CreateDemandPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (period) {
      res["period"] = boost::any(*period);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (targetCid) {
      res["targetCid"] = boost::any(*targetCid);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("period") != m.end() && !m["period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["period"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("targetCid") != m.end() && !m["targetCid"].empty()) {
      targetCid = make_shared<long>(boost::any_cast<long>(m["targetCid"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~CreateDemandPlanRequest() = default;
};
class CreateDemandPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CreateDemandPlanResponseBody() {}

  explicit CreateDemandPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CreateDemandPlanResponseBody() = default;
};
class CreateDemandPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDemandPlanResponseBody> body{};

  CreateDemandPlanResponse() {}

  explicit CreateDemandPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDemandPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDemandPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDemandPlanResponse() = default;
};
class CreateDemandPlanV2Headers : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> yunUserId{};

  CreateDemandPlanV2Headers() {}

  explicit CreateDemandPlanV2Headers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (yunUserId) {
      res["Yun-User-Id"] = boost::any(*yunUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Yun-User-Id") != m.end() && !m["Yun-User-Id"].empty()) {
      yunUserId = make_shared<string>(boost::any_cast<string>(m["Yun-User-Id"]));
    }
  }


  virtual ~CreateDemandPlanV2Headers() = default;
};
class CreateDemandPlanV2Request : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> productType{};
  shared_ptr<long> targetCid{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  CreateDemandPlanV2Request() {}

  explicit CreateDemandPlanV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    if (targetCid) {
      res["targetCid"] = boost::any(*targetCid);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["productType"]));
    }
    if (m.find("targetCid") != m.end() && !m["targetCid"].empty()) {
      targetCid = make_shared<long>(boost::any_cast<long>(m["targetCid"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~CreateDemandPlanV2Request() = default;
};
class CreateDemandPlanV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CreateDemandPlanV2ResponseBody() {}

  explicit CreateDemandPlanV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CreateDemandPlanV2ResponseBody() = default;
};
class CreateDemandPlanV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDemandPlanV2ResponseBody> body{};

  CreateDemandPlanV2Response() {}

  explicit CreateDemandPlanV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDemandPlanV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDemandPlanV2ResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDemandPlanV2Response() = default;
};
class DeleteUrgentDemandItemHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> yunUserId{};

  DeleteUrgentDemandItemHeaders() {}

  explicit DeleteUrgentDemandItemHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (yunUserId) {
      res["Yun-User-Id"] = boost::any(*yunUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Yun-User-Id") != m.end() && !m["Yun-User-Id"].empty()) {
      yunUserId = make_shared<string>(boost::any_cast<string>(m["Yun-User-Id"]));
    }
  }


  virtual ~DeleteUrgentDemandItemHeaders() = default;
};
class DeleteUrgentDemandItemRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> modifier{};

  DeleteUrgentDemandItemRequest() {}

  explicit DeleteUrgentDemandItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
  }


  virtual ~DeleteUrgentDemandItemRequest() = default;
};
class DeleteUrgentDemandItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DeleteUrgentDemandItemResponseBody() {}

  explicit DeleteUrgentDemandItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~DeleteUrgentDemandItemResponseBody() = default;
};
class DeleteUrgentDemandItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUrgentDemandItemResponseBody> body{};

  DeleteUrgentDemandItemResponse() {}

  explicit DeleteUrgentDemandItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUrgentDemandItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUrgentDemandItemResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUrgentDemandItemResponse() = default;
};
class DeleteUrgentDemandPlanHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> yunUserId{};

  DeleteUrgentDemandPlanHeaders() {}

  explicit DeleteUrgentDemandPlanHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (yunUserId) {
      res["Yun-User-Id"] = boost::any(*yunUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Yun-User-Id") != m.end() && !m["Yun-User-Id"].empty()) {
      yunUserId = make_shared<string>(boost::any_cast<string>(m["Yun-User-Id"]));
    }
  }


  virtual ~DeleteUrgentDemandPlanHeaders() = default;
};
class DeleteUrgentDemandPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> modifier{};

  DeleteUrgentDemandPlanRequest() {}

  explicit DeleteUrgentDemandPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
  }


  virtual ~DeleteUrgentDemandPlanRequest() = default;
};
class DeleteUrgentDemandPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DeleteUrgentDemandPlanResponseBody() {}

  explicit DeleteUrgentDemandPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~DeleteUrgentDemandPlanResponseBody() = default;
};
class DeleteUrgentDemandPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUrgentDemandPlanResponseBody> body{};

  DeleteUrgentDemandPlanResponse() {}

  explicit DeleteUrgentDemandPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUrgentDemandPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUrgentDemandPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUrgentDemandPlanResponse() = default;
};
class DeliveryItemDetailSynHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> yunUserId{};

  DeliveryItemDetailSynHeaders() {}

  explicit DeliveryItemDetailSynHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (yunUserId) {
      res["Yun-User-Id"] = boost::any(*yunUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Yun-User-Id") != m.end() && !m["Yun-User-Id"].empty()) {
      yunUserId = make_shared<string>(boost::any_cast<string>(m["Yun-User-Id"]));
    }
  }


  virtual ~DeliveryItemDetailSynHeaders() = default;
};
class DeliveryItemDetailSynRequestDeliveryItemDetailDTOS : public Darabonba::Model {
public:
  shared_ptr<string> actualSupplyTime{};
  shared_ptr<long> amount{};
  shared_ptr<string> comment{};
  shared_ptr<long> deliveredAmount{};
  shared_ptr<string> deliveryItemId{};
  shared_ptr<string> deliveryPlanId{};
  shared_ptr<string> lastSupplyTime{};
  shared_ptr<string> status{};
  shared_ptr<string> subDemandSupplyPerformerName{};
  shared_ptr<string> subDemandSupplyPerformerUid{};
  shared_ptr<string> subDemandSupplyPmName{};
  shared_ptr<string> subDemandSupplyPmUid{};
  shared_ptr<long> subOrderId{};
  shared_ptr<string> supplyStatus{};
  shared_ptr<long> totalOrderId{};

  DeliveryItemDetailSynRequestDeliveryItemDetailDTOS() {}

  explicit DeliveryItemDetailSynRequestDeliveryItemDetailDTOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualSupplyTime) {
      res["actualSupplyTime"] = boost::any(*actualSupplyTime);
    }
    if (amount) {
      res["amount"] = boost::any(*amount);
    }
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (deliveredAmount) {
      res["deliveredAmount"] = boost::any(*deliveredAmount);
    }
    if (deliveryItemId) {
      res["deliveryItemId"] = boost::any(*deliveryItemId);
    }
    if (deliveryPlanId) {
      res["deliveryPlanId"] = boost::any(*deliveryPlanId);
    }
    if (lastSupplyTime) {
      res["lastSupplyTime"] = boost::any(*lastSupplyTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subDemandSupplyPerformerName) {
      res["subDemandSupplyPerformerName"] = boost::any(*subDemandSupplyPerformerName);
    }
    if (subDemandSupplyPerformerUid) {
      res["subDemandSupplyPerformerUid"] = boost::any(*subDemandSupplyPerformerUid);
    }
    if (subDemandSupplyPmName) {
      res["subDemandSupplyPmName"] = boost::any(*subDemandSupplyPmName);
    }
    if (subDemandSupplyPmUid) {
      res["subDemandSupplyPmUid"] = boost::any(*subDemandSupplyPmUid);
    }
    if (subOrderId) {
      res["subOrderId"] = boost::any(*subOrderId);
    }
    if (supplyStatus) {
      res["supplyStatus"] = boost::any(*supplyStatus);
    }
    if (totalOrderId) {
      res["totalOrderId"] = boost::any(*totalOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actualSupplyTime") != m.end() && !m["actualSupplyTime"].empty()) {
      actualSupplyTime = make_shared<string>(boost::any_cast<string>(m["actualSupplyTime"]));
    }
    if (m.find("amount") != m.end() && !m["amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["amount"]));
    }
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("deliveredAmount") != m.end() && !m["deliveredAmount"].empty()) {
      deliveredAmount = make_shared<long>(boost::any_cast<long>(m["deliveredAmount"]));
    }
    if (m.find("deliveryItemId") != m.end() && !m["deliveryItemId"].empty()) {
      deliveryItemId = make_shared<string>(boost::any_cast<string>(m["deliveryItemId"]));
    }
    if (m.find("deliveryPlanId") != m.end() && !m["deliveryPlanId"].empty()) {
      deliveryPlanId = make_shared<string>(boost::any_cast<string>(m["deliveryPlanId"]));
    }
    if (m.find("lastSupplyTime") != m.end() && !m["lastSupplyTime"].empty()) {
      lastSupplyTime = make_shared<string>(boost::any_cast<string>(m["lastSupplyTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subDemandSupplyPerformerName") != m.end() && !m["subDemandSupplyPerformerName"].empty()) {
      subDemandSupplyPerformerName = make_shared<string>(boost::any_cast<string>(m["subDemandSupplyPerformerName"]));
    }
    if (m.find("subDemandSupplyPerformerUid") != m.end() && !m["subDemandSupplyPerformerUid"].empty()) {
      subDemandSupplyPerformerUid = make_shared<string>(boost::any_cast<string>(m["subDemandSupplyPerformerUid"]));
    }
    if (m.find("subDemandSupplyPmName") != m.end() && !m["subDemandSupplyPmName"].empty()) {
      subDemandSupplyPmName = make_shared<string>(boost::any_cast<string>(m["subDemandSupplyPmName"]));
    }
    if (m.find("subDemandSupplyPmUid") != m.end() && !m["subDemandSupplyPmUid"].empty()) {
      subDemandSupplyPmUid = make_shared<string>(boost::any_cast<string>(m["subDemandSupplyPmUid"]));
    }
    if (m.find("subOrderId") != m.end() && !m["subOrderId"].empty()) {
      subOrderId = make_shared<long>(boost::any_cast<long>(m["subOrderId"]));
    }
    if (m.find("supplyStatus") != m.end() && !m["supplyStatus"].empty()) {
      supplyStatus = make_shared<string>(boost::any_cast<string>(m["supplyStatus"]));
    }
    if (m.find("totalOrderId") != m.end() && !m["totalOrderId"].empty()) {
      totalOrderId = make_shared<long>(boost::any_cast<long>(m["totalOrderId"]));
    }
  }


  virtual ~DeliveryItemDetailSynRequestDeliveryItemDetailDTOS() = default;
};
class DeliveryItemDetailSynRequest : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<vector<DeliveryItemDetailSynRequestDeliveryItemDetailDTOS>> deliveryItemDetailDTOS{};
  shared_ptr<string> deliveryItemId{};
  shared_ptr<string> deliveryPlanId{};

  DeliveryItemDetailSynRequest() {}

  explicit DeliveryItemDetailSynRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["channel"] = boost::any(*channel);
    }
    if (deliveryItemDetailDTOS) {
      vector<boost::any> temp1;
      for(auto item1:*deliveryItemDetailDTOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["deliveryItemDetailDTOS"] = boost::any(temp1);
    }
    if (deliveryItemId) {
      res["deliveryItemId"] = boost::any(*deliveryItemId);
    }
    if (deliveryPlanId) {
      res["deliveryPlanId"] = boost::any(*deliveryPlanId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channel") != m.end() && !m["channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["channel"]));
    }
    if (m.find("deliveryItemDetailDTOS") != m.end() && !m["deliveryItemDetailDTOS"].empty()) {
      if (typeid(vector<boost::any>) == m["deliveryItemDetailDTOS"].type()) {
        vector<DeliveryItemDetailSynRequestDeliveryItemDetailDTOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["deliveryItemDetailDTOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeliveryItemDetailSynRequestDeliveryItemDetailDTOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deliveryItemDetailDTOS = make_shared<vector<DeliveryItemDetailSynRequestDeliveryItemDetailDTOS>>(expect1);
      }
    }
    if (m.find("deliveryItemId") != m.end() && !m["deliveryItemId"].empty()) {
      deliveryItemId = make_shared<string>(boost::any_cast<string>(m["deliveryItemId"]));
    }
    if (m.find("deliveryPlanId") != m.end() && !m["deliveryPlanId"].empty()) {
      deliveryPlanId = make_shared<string>(boost::any_cast<string>(m["deliveryPlanId"]));
    }
  }


  virtual ~DeliveryItemDetailSynRequest() = default;
};
class DeliveryItemDetailSynResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DeliveryItemDetailSynResponseBody() {}

  explicit DeliveryItemDetailSynResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~DeliveryItemDetailSynResponseBody() = default;
};
class DeliveryItemDetailSynResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeliveryItemDetailSynResponseBody> body{};

  DeliveryItemDetailSynResponse() {}

  explicit DeliveryItemDetailSynResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeliveryItemDetailSynResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeliveryItemDetailSynResponseBody>(model1);
      }
    }
  }


  virtual ~DeliveryItemDetailSynResponse() = default;
};
class GetUrgentDemandItemListHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> yunUserId{};

  GetUrgentDemandItemListHeaders() {}

  explicit GetUrgentDemandItemListHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (yunUserId) {
      res["Yun-User-Id"] = boost::any(*yunUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Yun-User-Id") != m.end() && !m["Yun-User-Id"].empty()) {
      yunUserId = make_shared<string>(boost::any_cast<string>(m["Yun-User-Id"]));
    }
  }


  virtual ~GetUrgentDemandItemListHeaders() = default;
};
class GetUrgentDemandItemListRequest : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> commodityTypeCode{};
  shared_ptr<long> current{};
  shared_ptr<long> planId{};
  shared_ptr<string> region{};
  shared_ptr<long> size{};
  shared_ptr<string> zone{};

  GetUrgentDemandItemListRequest() {}

  explicit GetUrgentDemandItemListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (commodityTypeCode) {
      res["commodityTypeCode"] = boost::any(*commodityTypeCode);
    }
    if (current) {
      res["current"] = boost::any(*current);
    }
    if (planId) {
      res["planId"] = boost::any(*planId);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (zone) {
      res["zone"] = boost::any(*zone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("commodityTypeCode") != m.end() && !m["commodityTypeCode"].empty()) {
      commodityTypeCode = make_shared<string>(boost::any_cast<string>(m["commodityTypeCode"]));
    }
    if (m.find("current") != m.end() && !m["current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["current"]));
    }
    if (m.find("planId") != m.end() && !m["planId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["planId"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("zone") != m.end() && !m["zone"].empty()) {
      zone = make_shared<string>(boost::any_cast<string>(m["zone"]));
    }
  }


  virtual ~GetUrgentDemandItemListRequest() = default;
};
class GetUrgentDemandItemListResponseBodyDataRecordsUrgentDemandEbsRequest : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<long> commodityNum{};
  shared_ptr<string> commodityTypeCode{};
  shared_ptr<long> dataDiskSize{};
  shared_ptr<long> itemId{};
  shared_ptr<long> performanceLevel{};

  GetUrgentDemandItemListResponseBodyDataRecordsUrgentDemandEbsRequest() {}

  explicit GetUrgentDemandItemListResponseBodyDataRecordsUrgentDemandEbsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (commodityNum) {
      res["commodityNum"] = boost::any(*commodityNum);
    }
    if (commodityTypeCode) {
      res["commodityTypeCode"] = boost::any(*commodityTypeCode);
    }
    if (dataDiskSize) {
      res["dataDiskSize"] = boost::any(*dataDiskSize);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (performanceLevel) {
      res["performanceLevel"] = boost::any(*performanceLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("commodityNum") != m.end() && !m["commodityNum"].empty()) {
      commodityNum = make_shared<long>(boost::any_cast<long>(m["commodityNum"]));
    }
    if (m.find("commodityTypeCode") != m.end() && !m["commodityTypeCode"].empty()) {
      commodityTypeCode = make_shared<string>(boost::any_cast<string>(m["commodityTypeCode"]));
    }
    if (m.find("dataDiskSize") != m.end() && !m["dataDiskSize"].empty()) {
      dataDiskSize = make_shared<long>(boost::any_cast<long>(m["dataDiskSize"]));
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["itemId"]));
    }
    if (m.find("performanceLevel") != m.end() && !m["performanceLevel"].empty()) {
      performanceLevel = make_shared<long>(boost::any_cast<long>(m["performanceLevel"]));
    }
  }


  virtual ~GetUrgentDemandItemListResponseBodyDataRecordsUrgentDemandEbsRequest() = default;
};
class GetUrgentDemandItemListResponseBodyDataRecordsUrgentDemandEcsRequest : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<long> commodityNum{};
  shared_ptr<string> commodityTypeCode{};
  shared_ptr<long> itemId{};
  shared_ptr<long> vcpuCount{};

  GetUrgentDemandItemListResponseBodyDataRecordsUrgentDemandEcsRequest() {}

  explicit GetUrgentDemandItemListResponseBodyDataRecordsUrgentDemandEcsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (commodityNum) {
      res["commodityNum"] = boost::any(*commodityNum);
    }
    if (commodityTypeCode) {
      res["commodityTypeCode"] = boost::any(*commodityTypeCode);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (vcpuCount) {
      res["vcpuCount"] = boost::any(*vcpuCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("commodityNum") != m.end() && !m["commodityNum"].empty()) {
      commodityNum = make_shared<long>(boost::any_cast<long>(m["commodityNum"]));
    }
    if (m.find("commodityTypeCode") != m.end() && !m["commodityTypeCode"].empty()) {
      commodityTypeCode = make_shared<string>(boost::any_cast<string>(m["commodityTypeCode"]));
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["itemId"]));
    }
    if (m.find("vcpuCount") != m.end() && !m["vcpuCount"].empty()) {
      vcpuCount = make_shared<long>(boost::any_cast<long>(m["vcpuCount"]));
    }
  }


  virtual ~GetUrgentDemandItemListResponseBodyDataRecordsUrgentDemandEcsRequest() = default;
};
class GetUrgentDemandItemListResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> zone{};
  shared_ptr<string> accountId{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> commodityNum{};
  shared_ptr<string> commodityTypeCode{};
  shared_ptr<string> creator{};
  shared_ptr<string> creatorName{};
  shared_ptr<string> effectTime{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> modifier{};
  shared_ptr<string> modifierName{};
  shared_ptr<string> networkType{};
  shared_ptr<long> payDuration{};
  shared_ptr<string> payDurationUnit{};
  shared_ptr<string> payType{};
  shared_ptr<long> planId{};
  shared_ptr<string> region{};
  shared_ptr<GetUrgentDemandItemListResponseBodyDataRecordsUrgentDemandEbsRequest> urgentDemandEbsRequest{};
  shared_ptr<GetUrgentDemandItemListResponseBodyDataRecordsUrgentDemandEcsRequest> urgentDemandEcsRequest{};

  GetUrgentDemandItemListResponseBodyDataRecords() {}

  explicit GetUrgentDemandItemListResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zone) {
      res["Zone"] = boost::any(*zone);
    }
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (commodityNum) {
      res["commodityNum"] = boost::any(*commodityNum);
    }
    if (commodityTypeCode) {
      res["commodityTypeCode"] = boost::any(*commodityTypeCode);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (creatorName) {
      res["creatorName"] = boost::any(*creatorName);
    }
    if (effectTime) {
      res["effectTime"] = boost::any(*effectTime);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (modifierName) {
      res["modifierName"] = boost::any(*modifierName);
    }
    if (networkType) {
      res["networkType"] = boost::any(*networkType);
    }
    if (payDuration) {
      res["payDuration"] = boost::any(*payDuration);
    }
    if (payDurationUnit) {
      res["payDurationUnit"] = boost::any(*payDurationUnit);
    }
    if (payType) {
      res["payType"] = boost::any(*payType);
    }
    if (planId) {
      res["planId"] = boost::any(*planId);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (urgentDemandEbsRequest) {
      res["urgentDemandEbsRequest"] = urgentDemandEbsRequest ? boost::any(urgentDemandEbsRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (urgentDemandEcsRequest) {
      res["urgentDemandEcsRequest"] = urgentDemandEcsRequest ? boost::any(urgentDemandEcsRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      zone = make_shared<string>(boost::any_cast<string>(m["Zone"]));
    }
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("commodityNum") != m.end() && !m["commodityNum"].empty()) {
      commodityNum = make_shared<long>(boost::any_cast<long>(m["commodityNum"]));
    }
    if (m.find("commodityTypeCode") != m.end() && !m["commodityTypeCode"].empty()) {
      commodityTypeCode = make_shared<string>(boost::any_cast<string>(m["commodityTypeCode"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("creatorName") != m.end() && !m["creatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["creatorName"]));
    }
    if (m.find("effectTime") != m.end() && !m["effectTime"].empty()) {
      effectTime = make_shared<string>(boost::any_cast<string>(m["effectTime"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("modifierName") != m.end() && !m["modifierName"].empty()) {
      modifierName = make_shared<string>(boost::any_cast<string>(m["modifierName"]));
    }
    if (m.find("networkType") != m.end() && !m["networkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["networkType"]));
    }
    if (m.find("payDuration") != m.end() && !m["payDuration"].empty()) {
      payDuration = make_shared<long>(boost::any_cast<long>(m["payDuration"]));
    }
    if (m.find("payDurationUnit") != m.end() && !m["payDurationUnit"].empty()) {
      payDurationUnit = make_shared<string>(boost::any_cast<string>(m["payDurationUnit"]));
    }
    if (m.find("payType") != m.end() && !m["payType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["payType"]));
    }
    if (m.find("planId") != m.end() && !m["planId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["planId"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("urgentDemandEbsRequest") != m.end() && !m["urgentDemandEbsRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["urgentDemandEbsRequest"].type()) {
        GetUrgentDemandItemListResponseBodyDataRecordsUrgentDemandEbsRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["urgentDemandEbsRequest"]));
        urgentDemandEbsRequest = make_shared<GetUrgentDemandItemListResponseBodyDataRecordsUrgentDemandEbsRequest>(model1);
      }
    }
    if (m.find("urgentDemandEcsRequest") != m.end() && !m["urgentDemandEcsRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["urgentDemandEcsRequest"].type()) {
        GetUrgentDemandItemListResponseBodyDataRecordsUrgentDemandEcsRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["urgentDemandEcsRequest"]));
        urgentDemandEcsRequest = make_shared<GetUrgentDemandItemListResponseBodyDataRecordsUrgentDemandEcsRequest>(model1);
      }
    }
  }


  virtual ~GetUrgentDemandItemListResponseBodyDataRecords() = default;
};
class GetUrgentDemandItemListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<long> pages{};
  shared_ptr<vector<GetUrgentDemandItemListResponseBodyDataRecords>> records{};
  shared_ptr<long> size{};
  shared_ptr<long> total{};

  GetUrgentDemandItemListResponseBodyData() {}

  explicit GetUrgentDemandItemListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["current"] = boost::any(*current);
    }
    if (pages) {
      res["pages"] = boost::any(*pages);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("current") != m.end() && !m["current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["current"]));
    }
    if (m.find("pages") != m.end() && !m["pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["pages"]));
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<GetUrgentDemandItemListResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUrgentDemandItemListResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetUrgentDemandItemListResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~GetUrgentDemandItemListResponseBodyData() = default;
};
class GetUrgentDemandItemListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetUrgentDemandItemListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  GetUrgentDemandItemListResponseBody() {}

  explicit GetUrgentDemandItemListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetUrgentDemandItemListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetUrgentDemandItemListResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~GetUrgentDemandItemListResponseBody() = default;
};
class GetUrgentDemandItemListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUrgentDemandItemListResponseBody> body{};

  GetUrgentDemandItemListResponse() {}

  explicit GetUrgentDemandItemListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUrgentDemandItemListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUrgentDemandItemListResponseBody>(model1);
      }
    }
  }


  virtual ~GetUrgentDemandItemListResponse() = default;
};
class GetUrgentDemandPlanDetailHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> yunUserId{};

  GetUrgentDemandPlanDetailHeaders() {}

  explicit GetUrgentDemandPlanDetailHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (yunUserId) {
      res["Yun-User-Id"] = boost::any(*yunUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Yun-User-Id") != m.end() && !m["Yun-User-Id"].empty()) {
      yunUserId = make_shared<string>(boost::any_cast<string>(m["Yun-User-Id"]));
    }
  }


  virtual ~GetUrgentDemandPlanDetailHeaders() = default;
};
class GetUrgentDemandPlanDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};

  GetUrgentDemandPlanDetailRequest() {}

  explicit GetUrgentDemandPlanDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["planId"] = boost::any(*planId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("planId") != m.end() && !m["planId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["planId"]));
    }
  }


  virtual ~GetUrgentDemandPlanDetailRequest() = default;
};
class GetUrgentDemandPlanDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountDept{};
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> approvalUrl{};
  shared_ptr<map<string, boost::any>> bpmSubstate{};
  shared_ptr<vector<string>> commodityTypeCodeList{};
  shared_ptr<string> creator{};
  shared_ptr<string> creatorName{};
  shared_ptr<string> description{};
  shared_ptr<string> detailType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> modifier{};
  shared_ptr<string> modifierName{};
  shared_ptr<long> planId{};
  shared_ptr<string> planName{};
  shared_ptr<long> status{};
  shared_ptr<string> yunzhiProductName{};

  GetUrgentDemandPlanDetailResponseBodyData() {}

  explicit GetUrgentDemandPlanDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDept) {
      res["accountDept"] = boost::any(*accountDept);
    }
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["accountName"] = boost::any(*accountName);
    }
    if (approvalUrl) {
      res["approvalUrl"] = boost::any(*approvalUrl);
    }
    if (bpmSubstate) {
      res["bpmSubstate"] = boost::any(*bpmSubstate);
    }
    if (commodityTypeCodeList) {
      res["commodityTypeCodeList"] = boost::any(*commodityTypeCodeList);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (creatorName) {
      res["creatorName"] = boost::any(*creatorName);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (detailType) {
      res["detailType"] = boost::any(*detailType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (modifierName) {
      res["modifierName"] = boost::any(*modifierName);
    }
    if (planId) {
      res["planId"] = boost::any(*planId);
    }
    if (planName) {
      res["planName"] = boost::any(*planName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (yunzhiProductName) {
      res["yunzhiProductName"] = boost::any(*yunzhiProductName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountDept") != m.end() && !m["accountDept"].empty()) {
      accountDept = make_shared<string>(boost::any_cast<string>(m["accountDept"]));
    }
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("accountName") != m.end() && !m["accountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["accountName"]));
    }
    if (m.find("approvalUrl") != m.end() && !m["approvalUrl"].empty()) {
      approvalUrl = make_shared<string>(boost::any_cast<string>(m["approvalUrl"]));
    }
    if (m.find("bpmSubstate") != m.end() && !m["bpmSubstate"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["bpmSubstate"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bpmSubstate = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("commodityTypeCodeList") != m.end() && !m["commodityTypeCodeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["commodityTypeCodeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["commodityTypeCodeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      commodityTypeCodeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("creatorName") != m.end() && !m["creatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["creatorName"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("detailType") != m.end() && !m["detailType"].empty()) {
      detailType = make_shared<string>(boost::any_cast<string>(m["detailType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("modifierName") != m.end() && !m["modifierName"].empty()) {
      modifierName = make_shared<string>(boost::any_cast<string>(m["modifierName"]));
    }
    if (m.find("planId") != m.end() && !m["planId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["planId"]));
    }
    if (m.find("planName") != m.end() && !m["planName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["planName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("yunzhiProductName") != m.end() && !m["yunzhiProductName"].empty()) {
      yunzhiProductName = make_shared<string>(boost::any_cast<string>(m["yunzhiProductName"]));
    }
  }


  virtual ~GetUrgentDemandPlanDetailResponseBodyData() = default;
};
class GetUrgentDemandPlanDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetUrgentDemandPlanDetailResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  GetUrgentDemandPlanDetailResponseBody() {}

  explicit GetUrgentDemandPlanDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetUrgentDemandPlanDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetUrgentDemandPlanDetailResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~GetUrgentDemandPlanDetailResponseBody() = default;
};
class GetUrgentDemandPlanDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUrgentDemandPlanDetailResponseBody> body{};

  GetUrgentDemandPlanDetailResponse() {}

  explicit GetUrgentDemandPlanDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUrgentDemandPlanDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUrgentDemandPlanDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetUrgentDemandPlanDetailResponse() = default;
};
class GetUrgentDemandPlanListHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> yunUserId{};

  GetUrgentDemandPlanListHeaders() {}

  explicit GetUrgentDemandPlanListHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (yunUserId) {
      res["Yun-User-Id"] = boost::any(*yunUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Yun-User-Id") != m.end() && !m["Yun-User-Id"].empty()) {
      yunUserId = make_shared<string>(boost::any_cast<string>(m["Yun-User-Id"]));
    }
  }


  virtual ~GetUrgentDemandPlanListHeaders() = default;
};
class GetUrgentDemandPlanListRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<string> period{};
  shared_ptr<long> planType{};
  shared_ptr<long> size{};
  shared_ptr<string> userId{};

  GetUrgentDemandPlanListRequest() {}

  explicit GetUrgentDemandPlanListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["current"] = boost::any(*current);
    }
    if (period) {
      res["period"] = boost::any(*period);
    }
    if (planType) {
      res["planType"] = boost::any(*planType);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("current") != m.end() && !m["current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["current"]));
    }
    if (m.find("period") != m.end() && !m["period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["period"]));
    }
    if (m.find("planType") != m.end() && !m["planType"].empty()) {
      planType = make_shared<long>(boost::any_cast<long>(m["planType"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~GetUrgentDemandPlanListRequest() = default;
};
class GetUrgentDemandPlanListResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountType{};
  shared_ptr<string> approvalUrl{};
  shared_ptr<string> creator{};
  shared_ptr<string> creatorName{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> modifier{};
  shared_ptr<string> modifierName{};
  shared_ptr<long> planId{};
  shared_ptr<string> planName{};
  shared_ptr<long> status{};

  GetUrgentDemandPlanListResponseBodyDataRecords() {}

  explicit GetUrgentDemandPlanListResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["accountName"] = boost::any(*accountName);
    }
    if (accountType) {
      res["accountType"] = boost::any(*accountType);
    }
    if (approvalUrl) {
      res["approvalUrl"] = boost::any(*approvalUrl);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (creatorName) {
      res["creatorName"] = boost::any(*creatorName);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (modifierName) {
      res["modifierName"] = boost::any(*modifierName);
    }
    if (planId) {
      res["planId"] = boost::any(*planId);
    }
    if (planName) {
      res["planName"] = boost::any(*planName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("accountName") != m.end() && !m["accountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["accountName"]));
    }
    if (m.find("accountType") != m.end() && !m["accountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["accountType"]));
    }
    if (m.find("approvalUrl") != m.end() && !m["approvalUrl"].empty()) {
      approvalUrl = make_shared<string>(boost::any_cast<string>(m["approvalUrl"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("creatorName") != m.end() && !m["creatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["creatorName"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("modifierName") != m.end() && !m["modifierName"].empty()) {
      modifierName = make_shared<string>(boost::any_cast<string>(m["modifierName"]));
    }
    if (m.find("planId") != m.end() && !m["planId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["planId"]));
    }
    if (m.find("planName") != m.end() && !m["planName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["planName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~GetUrgentDemandPlanListResponseBodyDataRecords() = default;
};
class GetUrgentDemandPlanListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<long> pages{};
  shared_ptr<vector<GetUrgentDemandPlanListResponseBodyDataRecords>> records{};
  shared_ptr<long> size{};
  shared_ptr<long> total{};

  GetUrgentDemandPlanListResponseBodyData() {}

  explicit GetUrgentDemandPlanListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["current"] = boost::any(*current);
    }
    if (pages) {
      res["pages"] = boost::any(*pages);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("current") != m.end() && !m["current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["current"]));
    }
    if (m.find("pages") != m.end() && !m["pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["pages"]));
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<GetUrgentDemandPlanListResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUrgentDemandPlanListResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetUrgentDemandPlanListResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~GetUrgentDemandPlanListResponseBodyData() = default;
};
class GetUrgentDemandPlanListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetUrgentDemandPlanListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  GetUrgentDemandPlanListResponseBody() {}

  explicit GetUrgentDemandPlanListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetUrgentDemandPlanListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetUrgentDemandPlanListResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~GetUrgentDemandPlanListResponseBody() = default;
};
class GetUrgentDemandPlanListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUrgentDemandPlanListResponseBody> body{};

  GetUrgentDemandPlanListResponse() {}

  explicit GetUrgentDemandPlanListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUrgentDemandPlanListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUrgentDemandPlanListResponseBody>(model1);
      }
    }
  }


  virtual ~GetUrgentDemandPlanListResponse() = default;
};
class PageDemandPlanWithDemandInfoHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> yunUserId{};

  PageDemandPlanWithDemandInfoHeaders() {}

  explicit PageDemandPlanWithDemandInfoHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (yunUserId) {
      res["Yun-User-Id"] = boost::any(*yunUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Yun-User-Id") != m.end() && !m["Yun-User-Id"].empty()) {
      yunUserId = make_shared<string>(boost::any_cast<string>(m["Yun-User-Id"]));
    }
  }


  virtual ~PageDemandPlanWithDemandInfoHeaders() = default;
};
class PageDemandPlanWithDemandInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> approvalStatus{};
  shared_ptr<string> createTimeEnd{};
  shared_ptr<string> createTimeStart{};
  shared_ptr<string> creatorStaffId{};
  shared_ptr<string> demandDeliveryStatus{};
  shared_ptr<vector<long>> demandId{};
  shared_ptr<vector<long>> demandPlanId{};
  shared_ptr<string> demandPlanStatus{};
  shared_ptr<string> operator_{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> roCode{};

  PageDemandPlanWithDemandInfoRequest() {}

  explicit PageDemandPlanWithDemandInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalStatus) {
      res["approvalStatus"] = boost::any(*approvalStatus);
    }
    if (createTimeEnd) {
      res["createTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (createTimeStart) {
      res["createTimeStart"] = boost::any(*createTimeStart);
    }
    if (creatorStaffId) {
      res["creatorStaffId"] = boost::any(*creatorStaffId);
    }
    if (demandDeliveryStatus) {
      res["demandDeliveryStatus"] = boost::any(*demandDeliveryStatus);
    }
    if (demandId) {
      res["demandId"] = boost::any(*demandId);
    }
    if (demandPlanId) {
      res["demandPlanId"] = boost::any(*demandPlanId);
    }
    if (demandPlanStatus) {
      res["demandPlanStatus"] = boost::any(*demandPlanStatus);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (roCode) {
      res["roCode"] = boost::any(*roCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("approvalStatus") != m.end() && !m["approvalStatus"].empty()) {
      approvalStatus = make_shared<string>(boost::any_cast<string>(m["approvalStatus"]));
    }
    if (m.find("createTimeEnd") != m.end() && !m["createTimeEnd"].empty()) {
      createTimeEnd = make_shared<string>(boost::any_cast<string>(m["createTimeEnd"]));
    }
    if (m.find("createTimeStart") != m.end() && !m["createTimeStart"].empty()) {
      createTimeStart = make_shared<string>(boost::any_cast<string>(m["createTimeStart"]));
    }
    if (m.find("creatorStaffId") != m.end() && !m["creatorStaffId"].empty()) {
      creatorStaffId = make_shared<string>(boost::any_cast<string>(m["creatorStaffId"]));
    }
    if (m.find("demandDeliveryStatus") != m.end() && !m["demandDeliveryStatus"].empty()) {
      demandDeliveryStatus = make_shared<string>(boost::any_cast<string>(m["demandDeliveryStatus"]));
    }
    if (m.find("demandId") != m.end() && !m["demandId"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["demandId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["demandId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      demandId = make_shared<vector<long>>(toVec1);
    }
    if (m.find("demandPlanId") != m.end() && !m["demandPlanId"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["demandPlanId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["demandPlanId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      demandPlanId = make_shared<vector<long>>(toVec1);
    }
    if (m.find("demandPlanStatus") != m.end() && !m["demandPlanStatus"].empty()) {
      demandPlanStatus = make_shared<string>(boost::any_cast<string>(m["demandPlanStatus"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("roCode") != m.end() && !m["roCode"].empty()) {
      roCode = make_shared<string>(boost::any_cast<string>(m["roCode"]));
    }
  }


  virtual ~PageDemandPlanWithDemandInfoRequest() = default;
};
class PageDemandPlanWithDemandInfoResponseBodyDataData : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> approvalNodeStatus{};
  shared_ptr<string> approvalStatus{};
  shared_ptr<string> creator{};
  shared_ptr<string> deliveryPlanId{};
  shared_ptr<string> deliveryStatus{};
  shared_ptr<string> demandDesc{};
  shared_ptr<long> demandId{};
  shared_ptr<string> demandName{};
  shared_ptr<double> demandPlanId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> modifier{};
  shared_ptr<string> requirementObjectCode{};
  shared_ptr<long> uid{};

  PageDemandPlanWithDemandInfoResponseBodyDataData() {}

  explicit PageDemandPlanWithDemandInfoResponseBodyDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["accountName"] = boost::any(*accountName);
    }
    if (approvalNodeStatus) {
      res["approvalNodeStatus"] = boost::any(*approvalNodeStatus);
    }
    if (approvalStatus) {
      res["approvalStatus"] = boost::any(*approvalStatus);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (deliveryPlanId) {
      res["deliveryPlanId"] = boost::any(*deliveryPlanId);
    }
    if (deliveryStatus) {
      res["deliveryStatus"] = boost::any(*deliveryStatus);
    }
    if (demandDesc) {
      res["demandDesc"] = boost::any(*demandDesc);
    }
    if (demandId) {
      res["demandId"] = boost::any(*demandId);
    }
    if (demandName) {
      res["demandName"] = boost::any(*demandName);
    }
    if (demandPlanId) {
      res["demandPlanId"] = boost::any(*demandPlanId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (requirementObjectCode) {
      res["requirementObjectCode"] = boost::any(*requirementObjectCode);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("accountName") != m.end() && !m["accountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["accountName"]));
    }
    if (m.find("approvalNodeStatus") != m.end() && !m["approvalNodeStatus"].empty()) {
      approvalNodeStatus = make_shared<string>(boost::any_cast<string>(m["approvalNodeStatus"]));
    }
    if (m.find("approvalStatus") != m.end() && !m["approvalStatus"].empty()) {
      approvalStatus = make_shared<string>(boost::any_cast<string>(m["approvalStatus"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("deliveryPlanId") != m.end() && !m["deliveryPlanId"].empty()) {
      deliveryPlanId = make_shared<string>(boost::any_cast<string>(m["deliveryPlanId"]));
    }
    if (m.find("deliveryStatus") != m.end() && !m["deliveryStatus"].empty()) {
      deliveryStatus = make_shared<string>(boost::any_cast<string>(m["deliveryStatus"]));
    }
    if (m.find("demandDesc") != m.end() && !m["demandDesc"].empty()) {
      demandDesc = make_shared<string>(boost::any_cast<string>(m["demandDesc"]));
    }
    if (m.find("demandId") != m.end() && !m["demandId"].empty()) {
      demandId = make_shared<long>(boost::any_cast<long>(m["demandId"]));
    }
    if (m.find("demandName") != m.end() && !m["demandName"].empty()) {
      demandName = make_shared<string>(boost::any_cast<string>(m["demandName"]));
    }
    if (m.find("demandPlanId") != m.end() && !m["demandPlanId"].empty()) {
      demandPlanId = make_shared<double>(boost::any_cast<double>(m["demandPlanId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("requirementObjectCode") != m.end() && !m["requirementObjectCode"].empty()) {
      requirementObjectCode = make_shared<string>(boost::any_cast<string>(m["requirementObjectCode"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["uid"]));
    }
  }


  virtual ~PageDemandPlanWithDemandInfoResponseBodyDataData() = default;
};
class PageDemandPlanWithDemandInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<PageDemandPlanWithDemandInfoResponseBodyDataData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  PageDemandPlanWithDemandInfoResponseBodyData() {}

  explicit PageDemandPlanWithDemandInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
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
        vector<PageDemandPlanWithDemandInfoResponseBodyDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PageDemandPlanWithDemandInfoResponseBodyDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PageDemandPlanWithDemandInfoResponseBodyDataData>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~PageDemandPlanWithDemandInfoResponseBodyData() = default;
};
class PageDemandPlanWithDemandInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<PageDemandPlanWithDemandInfoResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> traceId{};

  PageDemandPlanWithDemandInfoResponseBody() {}

  explicit PageDemandPlanWithDemandInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        PageDemandPlanWithDemandInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<PageDemandPlanWithDemandInfoResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~PageDemandPlanWithDemandInfoResponseBody() = default;
};
class PageDemandPlanWithDemandInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PageDemandPlanWithDemandInfoResponseBody> body{};

  PageDemandPlanWithDemandInfoResponse() {}

  explicit PageDemandPlanWithDemandInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PageDemandPlanWithDemandInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PageDemandPlanWithDemandInfoResponseBody>(model1);
      }
    }
  }


  virtual ~PageDemandPlanWithDemandInfoResponse() = default;
};
class PushResourcePlanHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> yunUserId{};

  PushResourcePlanHeaders() {}

  explicit PushResourcePlanHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (yunUserId) {
      res["Yun-User-Id"] = boost::any(*yunUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Yun-User-Id") != m.end() && !m["Yun-User-Id"].empty()) {
      yunUserId = make_shared<string>(boost::any_cast<string>(m["Yun-User-Id"]));
    }
  }


  virtual ~PushResourcePlanHeaders() = default;
};
class PushResourcePlanRequestMethodListDataList : public Darabonba::Model {
public:
  shared_ptr<string> classZone{};
  shared_ptr<string> convertHostType{};
  shared_ptr<string> logicZone{};
  shared_ptr<string> netArch{};
  shared_ptr<string> nic{};
  shared_ptr<string> product3{};
  shared_ptr<string> safeZone{};
  shared_ptr<string> scenario{};
  shared_ptr<long> supplyAmount{};
  shared_ptr<string> supplyDate{};
  shared_ptr<long> supplyType{};
  shared_ptr<long> supplyVmAmount{};

  PushResourcePlanRequestMethodListDataList() {}

  explicit PushResourcePlanRequestMethodListDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classZone) {
      res["classZone"] = boost::any(*classZone);
    }
    if (convertHostType) {
      res["convertHostType"] = boost::any(*convertHostType);
    }
    if (logicZone) {
      res["logicZone"] = boost::any(*logicZone);
    }
    if (netArch) {
      res["netArch"] = boost::any(*netArch);
    }
    if (nic) {
      res["nic"] = boost::any(*nic);
    }
    if (product3) {
      res["product3"] = boost::any(*product3);
    }
    if (safeZone) {
      res["safeZone"] = boost::any(*safeZone);
    }
    if (scenario) {
      res["scenario"] = boost::any(*scenario);
    }
    if (supplyAmount) {
      res["supplyAmount"] = boost::any(*supplyAmount);
    }
    if (supplyDate) {
      res["supplyDate"] = boost::any(*supplyDate);
    }
    if (supplyType) {
      res["supplyType"] = boost::any(*supplyType);
    }
    if (supplyVmAmount) {
      res["supplyVmAmount"] = boost::any(*supplyVmAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("classZone") != m.end() && !m["classZone"].empty()) {
      classZone = make_shared<string>(boost::any_cast<string>(m["classZone"]));
    }
    if (m.find("convertHostType") != m.end() && !m["convertHostType"].empty()) {
      convertHostType = make_shared<string>(boost::any_cast<string>(m["convertHostType"]));
    }
    if (m.find("logicZone") != m.end() && !m["logicZone"].empty()) {
      logicZone = make_shared<string>(boost::any_cast<string>(m["logicZone"]));
    }
    if (m.find("netArch") != m.end() && !m["netArch"].empty()) {
      netArch = make_shared<string>(boost::any_cast<string>(m["netArch"]));
    }
    if (m.find("nic") != m.end() && !m["nic"].empty()) {
      nic = make_shared<string>(boost::any_cast<string>(m["nic"]));
    }
    if (m.find("product3") != m.end() && !m["product3"].empty()) {
      product3 = make_shared<string>(boost::any_cast<string>(m["product3"]));
    }
    if (m.find("safeZone") != m.end() && !m["safeZone"].empty()) {
      safeZone = make_shared<string>(boost::any_cast<string>(m["safeZone"]));
    }
    if (m.find("scenario") != m.end() && !m["scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["scenario"]));
    }
    if (m.find("supplyAmount") != m.end() && !m["supplyAmount"].empty()) {
      supplyAmount = make_shared<long>(boost::any_cast<long>(m["supplyAmount"]));
    }
    if (m.find("supplyDate") != m.end() && !m["supplyDate"].empty()) {
      supplyDate = make_shared<string>(boost::any_cast<string>(m["supplyDate"]));
    }
    if (m.find("supplyType") != m.end() && !m["supplyType"].empty()) {
      supplyType = make_shared<long>(boost::any_cast<long>(m["supplyType"]));
    }
    if (m.find("supplyVmAmount") != m.end() && !m["supplyVmAmount"].empty()) {
      supplyVmAmount = make_shared<long>(boost::any_cast<long>(m["supplyVmAmount"]));
    }
  }


  virtual ~PushResourcePlanRequestMethodListDataList() = default;
};
class PushResourcePlanRequestMethodList : public Darabonba::Model {
public:
  shared_ptr<string> azone{};
  shared_ptr<long> bufferCnt{};
  shared_ptr<string> cluster{};
  shared_ptr<string> comment{};
  shared_ptr<long> convertHostCnt{};
  shared_ptr<string> convertHostType{};
  shared_ptr<vector<PushResourcePlanRequestMethodListDataList>> dataList{};
  shared_ptr<long> denamdCount{};
  shared_ptr<long> gapCnt{};
  shared_ptr<string> promiseDate{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceMethodId{};
  shared_ptr<string> roomCode{};

  PushResourcePlanRequestMethodList() {}

  explicit PushResourcePlanRequestMethodList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (azone) {
      res["azone"] = boost::any(*azone);
    }
    if (bufferCnt) {
      res["bufferCnt"] = boost::any(*bufferCnt);
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (convertHostCnt) {
      res["convertHostCnt"] = boost::any(*convertHostCnt);
    }
    if (convertHostType) {
      res["convertHostType"] = boost::any(*convertHostType);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dataList"] = boost::any(temp1);
    }
    if (denamdCount) {
      res["denamdCount"] = boost::any(*denamdCount);
    }
    if (gapCnt) {
      res["gapCnt"] = boost::any(*gapCnt);
    }
    if (promiseDate) {
      res["promiseDate"] = boost::any(*promiseDate);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (resourceMethodId) {
      res["resourceMethodId"] = boost::any(*resourceMethodId);
    }
    if (roomCode) {
      res["roomCode"] = boost::any(*roomCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("azone") != m.end() && !m["azone"].empty()) {
      azone = make_shared<string>(boost::any_cast<string>(m["azone"]));
    }
    if (m.find("bufferCnt") != m.end() && !m["bufferCnt"].empty()) {
      bufferCnt = make_shared<long>(boost::any_cast<long>(m["bufferCnt"]));
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("convertHostCnt") != m.end() && !m["convertHostCnt"].empty()) {
      convertHostCnt = make_shared<long>(boost::any_cast<long>(m["convertHostCnt"]));
    }
    if (m.find("convertHostType") != m.end() && !m["convertHostType"].empty()) {
      convertHostType = make_shared<string>(boost::any_cast<string>(m["convertHostType"]));
    }
    if (m.find("dataList") != m.end() && !m["dataList"].empty()) {
      if (typeid(vector<boost::any>) == m["dataList"].type()) {
        vector<PushResourcePlanRequestMethodListDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PushResourcePlanRequestMethodListDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<PushResourcePlanRequestMethodListDataList>>(expect1);
      }
    }
    if (m.find("denamdCount") != m.end() && !m["denamdCount"].empty()) {
      denamdCount = make_shared<long>(boost::any_cast<long>(m["denamdCount"]));
    }
    if (m.find("gapCnt") != m.end() && !m["gapCnt"].empty()) {
      gapCnt = make_shared<long>(boost::any_cast<long>(m["gapCnt"]));
    }
    if (m.find("promiseDate") != m.end() && !m["promiseDate"].empty()) {
      promiseDate = make_shared<string>(boost::any_cast<string>(m["promiseDate"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("resourceMethodId") != m.end() && !m["resourceMethodId"].empty()) {
      resourceMethodId = make_shared<long>(boost::any_cast<long>(m["resourceMethodId"]));
    }
    if (m.find("roomCode") != m.end() && !m["roomCode"].empty()) {
      roomCode = make_shared<string>(boost::any_cast<string>(m["roomCode"]));
    }
  }


  virtual ~PushResourcePlanRequestMethodList() = default;
};
class PushResourcePlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> bufferCnt{};
  shared_ptr<long> demandCount{};
  shared_ptr<string> demandId{};
  shared_ptr<vector<PushResourcePlanRequestMethodList>> methodList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> requireCnt{};
  shared_ptr<string> subDemandId{};

  PushResourcePlanRequest() {}

  explicit PushResourcePlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bufferCnt) {
      res["bufferCnt"] = boost::any(*bufferCnt);
    }
    if (demandCount) {
      res["demandCount"] = boost::any(*demandCount);
    }
    if (demandId) {
      res["demandId"] = boost::any(*demandId);
    }
    if (methodList) {
      vector<boost::any> temp1;
      for(auto item1:*methodList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["methodList"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (requireCnt) {
      res["requireCnt"] = boost::any(*requireCnt);
    }
    if (subDemandId) {
      res["subDemandId"] = boost::any(*subDemandId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bufferCnt") != m.end() && !m["bufferCnt"].empty()) {
      bufferCnt = make_shared<long>(boost::any_cast<long>(m["bufferCnt"]));
    }
    if (m.find("demandCount") != m.end() && !m["demandCount"].empty()) {
      demandCount = make_shared<long>(boost::any_cast<long>(m["demandCount"]));
    }
    if (m.find("demandId") != m.end() && !m["demandId"].empty()) {
      demandId = make_shared<string>(boost::any_cast<string>(m["demandId"]));
    }
    if (m.find("methodList") != m.end() && !m["methodList"].empty()) {
      if (typeid(vector<boost::any>) == m["methodList"].type()) {
        vector<PushResourcePlanRequestMethodList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["methodList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PushResourcePlanRequestMethodList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        methodList = make_shared<vector<PushResourcePlanRequestMethodList>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("requireCnt") != m.end() && !m["requireCnt"].empty()) {
      requireCnt = make_shared<long>(boost::any_cast<long>(m["requireCnt"]));
    }
    if (m.find("subDemandId") != m.end() && !m["subDemandId"].empty()) {
      subDemandId = make_shared<string>(boost::any_cast<string>(m["subDemandId"]));
    }
  }


  virtual ~PushResourcePlanRequest() = default;
};
class PushResourcePlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  PushResourcePlanResponseBody() {}

  explicit PushResourcePlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~PushResourcePlanResponseBody() = default;
};
class PushResourcePlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushResourcePlanResponseBody> body{};

  PushResourcePlanResponse() {}

  explicit PushResourcePlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushResourcePlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushResourcePlanResponseBody>(model1);
      }
    }
  }


  virtual ~PushResourcePlanResponse() = default;
};
class QueryDeliveredSupplyItemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> commodityTypeCode{};

  QueryDeliveredSupplyItemsRequest() {}

  explicit QueryDeliveredSupplyItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (commodityTypeCode) {
      res["commodityTypeCode"] = boost::any(*commodityTypeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("commodityTypeCode") != m.end() && !m["commodityTypeCode"].empty()) {
      commodityTypeCode = make_shared<string>(boost::any_cast<string>(m["commodityTypeCode"]));
    }
  }


  virtual ~QueryDeliveredSupplyItemsRequest() = default;
};
class QueryDeliveredSupplyItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> commodityTypeCode{};
  shared_ptr<long> demandPlanId{};
  shared_ptr<string> planTitle{};
  shared_ptr<string> region{};
  shared_ptr<string> zone{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> demandCount{};
  shared_ptr<long> deliveredAmount{};
  shared_ptr<long> openCount{};

  QueryDeliveredSupplyItemsResponseBody() {}

  explicit QueryDeliveredSupplyItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (commodityTypeCode) {
      res["commodityTypeCode"] = boost::any(*commodityTypeCode);
    }
    if (demandPlanId) {
      res["demandPlanId"] = boost::any(*demandPlanId);
    }
    if (planTitle) {
      res["planTitle"] = boost::any(*planTitle);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (zone) {
      res["zone"] = boost::any(*zone);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (demandCount) {
      res["demandCount"] = boost::any(*demandCount);
    }
    if (deliveredAmount) {
      res["deliveredAmount"] = boost::any(*deliveredAmount);
    }
    if (openCount) {
      res["openCount"] = boost::any(*openCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("commodityTypeCode") != m.end() && !m["commodityTypeCode"].empty()) {
      commodityTypeCode = make_shared<string>(boost::any_cast<string>(m["commodityTypeCode"]));
    }
    if (m.find("demandPlanId") != m.end() && !m["demandPlanId"].empty()) {
      demandPlanId = make_shared<long>(boost::any_cast<long>(m["demandPlanId"]));
    }
    if (m.find("planTitle") != m.end() && !m["planTitle"].empty()) {
      planTitle = make_shared<string>(boost::any_cast<string>(m["planTitle"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("zone") != m.end() && !m["zone"].empty()) {
      zone = make_shared<string>(boost::any_cast<string>(m["zone"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("demandCount") != m.end() && !m["demandCount"].empty()) {
      demandCount = make_shared<long>(boost::any_cast<long>(m["demandCount"]));
    }
    if (m.find("deliveredAmount") != m.end() && !m["deliveredAmount"].empty()) {
      deliveredAmount = make_shared<long>(boost::any_cast<long>(m["deliveredAmount"]));
    }
    if (m.find("openCount") != m.end() && !m["openCount"].empty()) {
      openCount = make_shared<long>(boost::any_cast<long>(m["openCount"]));
    }
  }


  virtual ~QueryDeliveredSupplyItemsResponseBody() = default;
};
class QueryDeliveredSupplyItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<QueryDeliveredSupplyItemsResponseBody>> body{};

  QueryDeliveredSupplyItemsResponse() {}

  explicit QueryDeliveredSupplyItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<QueryDeliveredSupplyItemsResponseBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDeliveredSupplyItemsResponseBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<QueryDeliveredSupplyItemsResponseBody>>(expect1);
      }
    }
  }


  virtual ~QueryDeliveredSupplyItemsResponse() = default;
};
class QueryPeriodBudgetBillRequest : public Darabonba::Model {
public:
  shared_ptr<string> objectIds{};
  shared_ptr<string> objectType{};
  shared_ptr<string> period{};

  QueryPeriodBudgetBillRequest() {}

  explicit QueryPeriodBudgetBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectIds) {
      res["objectIds"] = boost::any(*objectIds);
    }
    if (objectType) {
      res["objectType"] = boost::any(*objectType);
    }
    if (period) {
      res["period"] = boost::any(*period);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("objectIds") != m.end() && !m["objectIds"].empty()) {
      objectIds = make_shared<string>(boost::any_cast<string>(m["objectIds"]));
    }
    if (m.find("objectType") != m.end() && !m["objectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["objectType"]));
    }
    if (m.find("period") != m.end() && !m["period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["period"]));
    }
  }


  virtual ~QueryPeriodBudgetBillRequest() = default;
};
class QueryPeriodBudgetBillResponseBodyPeriodBudgetBillDTOS : public Darabonba::Model {
public:
  shared_ptr<double> bill{};
  shared_ptr<double> budget{};
  shared_ptr<double> lastYearBill{};
  shared_ptr<string> month{};

  QueryPeriodBudgetBillResponseBodyPeriodBudgetBillDTOS() {}

  explicit QueryPeriodBudgetBillResponseBodyPeriodBudgetBillDTOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bill) {
      res["bill"] = boost::any(*bill);
    }
    if (budget) {
      res["budget"] = boost::any(*budget);
    }
    if (lastYearBill) {
      res["lastYearBill"] = boost::any(*lastYearBill);
    }
    if (month) {
      res["month"] = boost::any(*month);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bill") != m.end() && !m["bill"].empty()) {
      bill = make_shared<double>(boost::any_cast<double>(m["bill"]));
    }
    if (m.find("budget") != m.end() && !m["budget"].empty()) {
      budget = make_shared<double>(boost::any_cast<double>(m["budget"]));
    }
    if (m.find("lastYearBill") != m.end() && !m["lastYearBill"].empty()) {
      lastYearBill = make_shared<double>(boost::any_cast<double>(m["lastYearBill"]));
    }
    if (m.find("month") != m.end() && !m["month"].empty()) {
      month = make_shared<string>(boost::any_cast<string>(m["month"]));
    }
  }


  virtual ~QueryPeriodBudgetBillResponseBodyPeriodBudgetBillDTOS() = default;
};
class QueryPeriodBudgetBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryPeriodBudgetBillResponseBodyPeriodBudgetBillDTOS>> periodBudgetBillDTOS{};

  QueryPeriodBudgetBillResponseBody() {}

  explicit QueryPeriodBudgetBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (periodBudgetBillDTOS) {
      vector<boost::any> temp1;
      for(auto item1:*periodBudgetBillDTOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["periodBudgetBillDTOS"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("periodBudgetBillDTOS") != m.end() && !m["periodBudgetBillDTOS"].empty()) {
      if (typeid(vector<boost::any>) == m["periodBudgetBillDTOS"].type()) {
        vector<QueryPeriodBudgetBillResponseBodyPeriodBudgetBillDTOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["periodBudgetBillDTOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPeriodBudgetBillResponseBodyPeriodBudgetBillDTOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        periodBudgetBillDTOS = make_shared<vector<QueryPeriodBudgetBillResponseBodyPeriodBudgetBillDTOS>>(expect1);
      }
    }
  }


  virtual ~QueryPeriodBudgetBillResponseBody() = default;
};
class QueryPeriodBudgetBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPeriodBudgetBillResponseBody> body{};

  QueryPeriodBudgetBillResponse() {}

  explicit QueryPeriodBudgetBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPeriodBudgetBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPeriodBudgetBillResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPeriodBudgetBillResponse() = default;
};
class SaveUrgentDemandItemHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> yunUserId{};

  SaveUrgentDemandItemHeaders() {}

  explicit SaveUrgentDemandItemHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (yunUserId) {
      res["Yun-User-Id"] = boost::any(*yunUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Yun-User-Id") != m.end() && !m["Yun-User-Id"].empty()) {
      yunUserId = make_shared<string>(boost::any_cast<string>(m["Yun-User-Id"]));
    }
  }


  virtual ~SaveUrgentDemandItemHeaders() = default;
};
class SaveUrgentDemandItemRequestUrgentDemandEbsRequest : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<long> commodityNum{};
  shared_ptr<string> commodityTypeCode{};
  shared_ptr<long> itemId{};
  shared_ptr<long> performanceLevel{};

  SaveUrgentDemandItemRequestUrgentDemandEbsRequest() {}

  explicit SaveUrgentDemandItemRequestUrgentDemandEbsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (commodityNum) {
      res["commodityNum"] = boost::any(*commodityNum);
    }
    if (commodityTypeCode) {
      res["commodityTypeCode"] = boost::any(*commodityTypeCode);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (performanceLevel) {
      res["performanceLevel"] = boost::any(*performanceLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("commodityNum") != m.end() && !m["commodityNum"].empty()) {
      commodityNum = make_shared<long>(boost::any_cast<long>(m["commodityNum"]));
    }
    if (m.find("commodityTypeCode") != m.end() && !m["commodityTypeCode"].empty()) {
      commodityTypeCode = make_shared<string>(boost::any_cast<string>(m["commodityTypeCode"]));
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["itemId"]));
    }
    if (m.find("performanceLevel") != m.end() && !m["performanceLevel"].empty()) {
      performanceLevel = make_shared<long>(boost::any_cast<long>(m["performanceLevel"]));
    }
  }


  virtual ~SaveUrgentDemandItemRequestUrgentDemandEbsRequest() = default;
};
class SaveUrgentDemandItemRequestUrgentDemandEcsRequest : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<long> commodityNum{};
  shared_ptr<string> commodityTypeCode{};
  shared_ptr<long> itemId{};
  shared_ptr<long> vCpuCount{};

  SaveUrgentDemandItemRequestUrgentDemandEcsRequest() {}

  explicit SaveUrgentDemandItemRequestUrgentDemandEcsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (commodityNum) {
      res["commodityNum"] = boost::any(*commodityNum);
    }
    if (commodityTypeCode) {
      res["commodityTypeCode"] = boost::any(*commodityTypeCode);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (vCpuCount) {
      res["vCpuCount"] = boost::any(*vCpuCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("commodityNum") != m.end() && !m["commodityNum"].empty()) {
      commodityNum = make_shared<long>(boost::any_cast<long>(m["commodityNum"]));
    }
    if (m.find("commodityTypeCode") != m.end() && !m["commodityTypeCode"].empty()) {
      commodityTypeCode = make_shared<string>(boost::any_cast<string>(m["commodityTypeCode"]));
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["itemId"]));
    }
    if (m.find("vCpuCount") != m.end() && !m["vCpuCount"].empty()) {
      vCpuCount = make_shared<long>(boost::any_cast<long>(m["vCpuCount"]));
    }
  }


  virtual ~SaveUrgentDemandItemRequestUrgentDemandEcsRequest() = default;
};
class SaveUrgentDemandItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> creator{};
  shared_ptr<string> effectTime{};
  shared_ptr<string> modifier{};
  shared_ptr<string> networkType{};
  shared_ptr<string> payDuration{};
  shared_ptr<string> payDurationUnit{};
  shared_ptr<string> payType{};
  shared_ptr<long> planId{};
  shared_ptr<string> region{};
  shared_ptr<SaveUrgentDemandItemRequestUrgentDemandEbsRequest> urgentDemandEbsRequest{};
  shared_ptr<SaveUrgentDemandItemRequestUrgentDemandEcsRequest> urgentDemandEcsRequest{};
  shared_ptr<string> zone{};

  SaveUrgentDemandItemRequest() {}

  explicit SaveUrgentDemandItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (effectTime) {
      res["effectTime"] = boost::any(*effectTime);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (networkType) {
      res["networkType"] = boost::any(*networkType);
    }
    if (payDuration) {
      res["payDuration"] = boost::any(*payDuration);
    }
    if (payDurationUnit) {
      res["payDurationUnit"] = boost::any(*payDurationUnit);
    }
    if (payType) {
      res["payType"] = boost::any(*payType);
    }
    if (planId) {
      res["planId"] = boost::any(*planId);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (urgentDemandEbsRequest) {
      res["urgentDemandEbsRequest"] = urgentDemandEbsRequest ? boost::any(urgentDemandEbsRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (urgentDemandEcsRequest) {
      res["urgentDemandEcsRequest"] = urgentDemandEcsRequest ? boost::any(urgentDemandEcsRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zone) {
      res["zone"] = boost::any(*zone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("effectTime") != m.end() && !m["effectTime"].empty()) {
      effectTime = make_shared<string>(boost::any_cast<string>(m["effectTime"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("networkType") != m.end() && !m["networkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["networkType"]));
    }
    if (m.find("payDuration") != m.end() && !m["payDuration"].empty()) {
      payDuration = make_shared<string>(boost::any_cast<string>(m["payDuration"]));
    }
    if (m.find("payDurationUnit") != m.end() && !m["payDurationUnit"].empty()) {
      payDurationUnit = make_shared<string>(boost::any_cast<string>(m["payDurationUnit"]));
    }
    if (m.find("payType") != m.end() && !m["payType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["payType"]));
    }
    if (m.find("planId") != m.end() && !m["planId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["planId"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("urgentDemandEbsRequest") != m.end() && !m["urgentDemandEbsRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["urgentDemandEbsRequest"].type()) {
        SaveUrgentDemandItemRequestUrgentDemandEbsRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["urgentDemandEbsRequest"]));
        urgentDemandEbsRequest = make_shared<SaveUrgentDemandItemRequestUrgentDemandEbsRequest>(model1);
      }
    }
    if (m.find("urgentDemandEcsRequest") != m.end() && !m["urgentDemandEcsRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["urgentDemandEcsRequest"].type()) {
        SaveUrgentDemandItemRequestUrgentDemandEcsRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["urgentDemandEcsRequest"]));
        urgentDemandEcsRequest = make_shared<SaveUrgentDemandItemRequestUrgentDemandEcsRequest>(model1);
      }
    }
    if (m.find("zone") != m.end() && !m["zone"].empty()) {
      zone = make_shared<string>(boost::any_cast<string>(m["zone"]));
    }
  }


  virtual ~SaveUrgentDemandItemRequest() = default;
};
class SaveUrgentDemandItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<long>> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  SaveUrgentDemandItemResponseBody() {}

  explicit SaveUrgentDemandItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      data = make_shared<vector<long>>(toVec1);
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~SaveUrgentDemandItemResponseBody() = default;
};
class SaveUrgentDemandItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveUrgentDemandItemResponseBody> body{};

  SaveUrgentDemandItemResponse() {}

  explicit SaveUrgentDemandItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveUrgentDemandItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveUrgentDemandItemResponseBody>(model1);
      }
    }
  }


  virtual ~SaveUrgentDemandItemResponse() = default;
};
class SubmitUrgentDemandPlanHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> yunUserId{};

  SubmitUrgentDemandPlanHeaders() {}

  explicit SubmitUrgentDemandPlanHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (yunUserId) {
      res["Yun-User-Id"] = boost::any(*yunUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Yun-User-Id") != m.end() && !m["Yun-User-Id"].empty()) {
      yunUserId = make_shared<string>(boost::any_cast<string>(m["Yun-User-Id"]));
    }
  }


  virtual ~SubmitUrgentDemandPlanHeaders() = default;
};
class SubmitUrgentDemandPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};
  shared_ptr<string> userId{};

  SubmitUrgentDemandPlanRequest() {}

  explicit SubmitUrgentDemandPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["planId"] = boost::any(*planId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("planId") != m.end() && !m["planId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["planId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~SubmitUrgentDemandPlanRequest() = default;
};
class SubmitUrgentDemandPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  SubmitUrgentDemandPlanResponseBody() {}

  explicit SubmitUrgentDemandPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~SubmitUrgentDemandPlanResponseBody() = default;
};
class SubmitUrgentDemandPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitUrgentDemandPlanResponseBody> body{};

  SubmitUrgentDemandPlanResponse() {}

  explicit SubmitUrgentDemandPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitUrgentDemandPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitUrgentDemandPlanResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitUrgentDemandPlanResponse() = default;
};
class AcceptFulfillmentDecisionRequest : public Darabonba::Model {
public:
  shared_ptr<string> decisionConclusion{};
  shared_ptr<string> decisionType{};
  shared_ptr<string> orderId{};

  AcceptFulfillmentDecisionRequest() {}

  explicit AcceptFulfillmentDecisionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (decisionConclusion) {
      res["DecisionConclusion"] = boost::any(*decisionConclusion);
    }
    if (decisionType) {
      res["DecisionType"] = boost::any(*decisionType);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DecisionConclusion") != m.end() && !m["DecisionConclusion"].empty()) {
      decisionConclusion = make_shared<string>(boost::any_cast<string>(m["DecisionConclusion"]));
    }
    if (m.find("DecisionType") != m.end() && !m["DecisionType"].empty()) {
      decisionType = make_shared<string>(boost::any_cast<string>(m["DecisionType"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~AcceptFulfillmentDecisionRequest() = default;
};
class AcceptFulfillmentDecisionResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  AcceptFulfillmentDecisionResponseBody() {}

  explicit AcceptFulfillmentDecisionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AcceptFulfillmentDecisionResponseBody() = default;
};
class AcceptFulfillmentDecisionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AcceptFulfillmentDecisionResponseBody> body{};

  AcceptFulfillmentDecisionResponse() {}

  explicit AcceptFulfillmentDecisionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AcceptFulfillmentDecisionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AcceptFulfillmentDecisionResponseBody>(model1);
      }
    }
  }


  virtual ~AcceptFulfillmentDecisionResponse() = default;
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
  CreateDemandPlanResponse createDemandPlanWithOptions(shared_ptr<CreateDemandPlanRequest> request, shared_ptr<CreateDemandPlanHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDemandPlanResponse createDemandPlan(shared_ptr<CreateDemandPlanRequest> request);
  CreateDemandPlanV2Response createDemandPlanV2WithOptions(shared_ptr<CreateDemandPlanV2Request> request, shared_ptr<CreateDemandPlanV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDemandPlanV2Response createDemandPlanV2(shared_ptr<CreateDemandPlanV2Request> request);
  DeleteUrgentDemandItemResponse deleteUrgentDemandItemWithOptions(shared_ptr<DeleteUrgentDemandItemRequest> request, shared_ptr<DeleteUrgentDemandItemHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUrgentDemandItemResponse deleteUrgentDemandItem(shared_ptr<DeleteUrgentDemandItemRequest> request);
  DeleteUrgentDemandPlanResponse deleteUrgentDemandPlanWithOptions(shared_ptr<DeleteUrgentDemandPlanRequest> request, shared_ptr<DeleteUrgentDemandPlanHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUrgentDemandPlanResponse deleteUrgentDemandPlan(shared_ptr<DeleteUrgentDemandPlanRequest> request);
  DeliveryItemDetailSynResponse deliveryItemDetailSynWithOptions(shared_ptr<DeliveryItemDetailSynRequest> request, shared_ptr<DeliveryItemDetailSynHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeliveryItemDetailSynResponse deliveryItemDetailSyn(shared_ptr<DeliveryItemDetailSynRequest> request);
  GetUrgentDemandItemListResponse getUrgentDemandItemListWithOptions(shared_ptr<GetUrgentDemandItemListRequest> request, shared_ptr<GetUrgentDemandItemListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUrgentDemandItemListResponse getUrgentDemandItemList(shared_ptr<GetUrgentDemandItemListRequest> request);
  GetUrgentDemandPlanDetailResponse getUrgentDemandPlanDetailWithOptions(shared_ptr<GetUrgentDemandPlanDetailRequest> request, shared_ptr<GetUrgentDemandPlanDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUrgentDemandPlanDetailResponse getUrgentDemandPlanDetail(shared_ptr<GetUrgentDemandPlanDetailRequest> request);
  GetUrgentDemandPlanListResponse getUrgentDemandPlanListWithOptions(shared_ptr<GetUrgentDemandPlanListRequest> request, shared_ptr<GetUrgentDemandPlanListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUrgentDemandPlanListResponse getUrgentDemandPlanList(shared_ptr<GetUrgentDemandPlanListRequest> request);
  PageDemandPlanWithDemandInfoResponse pageDemandPlanWithDemandInfoWithOptions(shared_ptr<PageDemandPlanWithDemandInfoRequest> request, shared_ptr<PageDemandPlanWithDemandInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PageDemandPlanWithDemandInfoResponse pageDemandPlanWithDemandInfo(shared_ptr<PageDemandPlanWithDemandInfoRequest> request);
  PushResourcePlanResponse pushResourcePlanWithOptions(shared_ptr<PushResourcePlanRequest> request, shared_ptr<PushResourcePlanHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushResourcePlanResponse pushResourcePlan(shared_ptr<PushResourcePlanRequest> request);
  QueryDeliveredSupplyItemsResponse queryDeliveredSupplyItemsWithOptions(shared_ptr<QueryDeliveredSupplyItemsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDeliveredSupplyItemsResponse queryDeliveredSupplyItems(shared_ptr<QueryDeliveredSupplyItemsRequest> request);
  QueryPeriodBudgetBillResponse queryPeriodBudgetBillWithOptions(shared_ptr<QueryPeriodBudgetBillRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPeriodBudgetBillResponse queryPeriodBudgetBill(shared_ptr<QueryPeriodBudgetBillRequest> request);
  SaveUrgentDemandItemResponse saveUrgentDemandItemWithOptions(shared_ptr<SaveUrgentDemandItemRequest> request, shared_ptr<SaveUrgentDemandItemHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveUrgentDemandItemResponse saveUrgentDemandItem(shared_ptr<SaveUrgentDemandItemRequest> request);
  SubmitUrgentDemandPlanResponse submitUrgentDemandPlanWithOptions(shared_ptr<SubmitUrgentDemandPlanRequest> request, shared_ptr<SubmitUrgentDemandPlanHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitUrgentDemandPlanResponse submitUrgentDemandPlan(shared_ptr<SubmitUrgentDemandPlanRequest> request);
  AcceptFulfillmentDecisionResponse acceptFulfillmentDecisionWithOptions(shared_ptr<AcceptFulfillmentDecisionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AcceptFulfillmentDecisionResponse acceptFulfillmentDecision(shared_ptr<AcceptFulfillmentDecisionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Yunjian20211217

#endif
