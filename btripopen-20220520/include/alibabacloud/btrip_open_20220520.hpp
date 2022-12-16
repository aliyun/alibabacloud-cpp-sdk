// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BTRIPOPEN20220520_H_
#define ALIBABACLOUD_BTRIPOPEN20220520_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_BtripOpen20220520 {
class AccessTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> appSecret{};

  AccessTokenRequest() {}

  explicit AccessTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["app_key"] = boost::any(*appKey);
    }
    if (appSecret) {
      res["app_secret"] = boost::any(*appSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("app_key") != m.end() && !m["app_key"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["app_key"]));
    }
    if (m.find("app_secret") != m.end() && !m["app_secret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["app_secret"]));
    }
  }


  virtual ~AccessTokenRequest() = default;
};
class AccessTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> expire{};
  shared_ptr<string> token{};

  AccessTokenResponseBodyData() {}

  explicit AccessTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expire) {
      res["expire"] = boost::any(*expire);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("expire") != m.end() && !m["expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["expire"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~AccessTokenResponseBodyData() = default;
};
class AccessTokenResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> expire{};
  shared_ptr<long> start{};
  shared_ptr<string> token{};

  AccessTokenResponseBodyModule() {}

  explicit AccessTokenResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expire) {
      res["expire"] = boost::any(*expire);
    }
    if (start) {
      res["start"] = boost::any(*start);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("expire") != m.end() && !m["expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["expire"]));
    }
    if (m.find("start") != m.end() && !m["start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["start"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~AccessTokenResponseBodyModule() = default;
};
class AccessTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<AccessTokenResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<AccessTokenResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<string> traceId{};

  AccessTokenResponseBody() {}

  explicit AccessTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        AccessTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<AccessTokenResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        AccessTokenResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<AccessTokenResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~AccessTokenResponseBody() = default;
};
class AccessTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AccessTokenResponseBody> body{};

  AccessTokenResponse() {}

  explicit AccessTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AccessTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AccessTokenResponseBody>(model1);
      }
    }
  }


  virtual ~AccessTokenResponse() = default;
};
class AddressGetHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  AddressGetHeaders() {}

  explicit AddressGetHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~AddressGetHeaders() = default;
};
class AddressGetRequest : public Darabonba::Model {
public:
  shared_ptr<long> actionType{};
  shared_ptr<string> itineraryId{};
  shared_ptr<string> phone{};
  shared_ptr<long> type{};
  shared_ptr<string> userId{};

  AddressGetRequest() {}

  explicit AddressGetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["action_type"] = boost::any(*actionType);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("action_type") != m.end() && !m["action_type"].empty()) {
      actionType = make_shared<long>(boost::any_cast<long>(m["action_type"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~AddressGetRequest() = default;
};
class AddressGetResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  AddressGetResponseBodyModule() {}

  explicit AddressGetResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~AddressGetResponseBodyModule() = default;
};
class AddressGetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<AddressGetResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  AddressGetResponseBody() {}

  explicit AddressGetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        AddressGetResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<AddressGetResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~AddressGetResponseBody() = default;
};
class AddressGetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddressGetResponseBody> body{};

  AddressGetResponse() {}

  explicit AddressGetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddressGetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddressGetResponseBody>(model1);
      }
    }
  }


  virtual ~AddressGetResponse() = default;
};
class AirportSearchHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  AirportSearchHeaders() {}

  explicit AirportSearchHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~AirportSearchHeaders() = default;
};
class AirportSearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> type{};

  AirportSearchRequest() {}

  explicit AirportSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~AirportSearchRequest() = default;
};
class AirportSearchResponseBodyModuleCities : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> distance{};
  shared_ptr<string> name{};
  shared_ptr<string> travelName{};

  AirportSearchResponseBodyModuleCities() {}

  explicit AirportSearchResponseBodyModuleCities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (distance) {
      res["distance"] = boost::any(*distance);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (travelName) {
      res["travel_name"] = boost::any(*travelName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("distance") != m.end() && !m["distance"].empty()) {
      distance = make_shared<long>(boost::any_cast<long>(m["distance"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("travel_name") != m.end() && !m["travel_name"].empty()) {
      travelName = make_shared<string>(boost::any_cast<string>(m["travel_name"]));
    }
  }


  virtual ~AirportSearchResponseBodyModuleCities() = default;
};
class AirportSearchResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<vector<AirportSearchResponseBodyModuleCities>> cities{};
  shared_ptr<bool> nearby{};

  AirportSearchResponseBodyModule() {}

  explicit AirportSearchResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cities) {
      vector<boost::any> temp1;
      for(auto item1:*cities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["cities"] = boost::any(temp1);
    }
    if (nearby) {
      res["nearby"] = boost::any(*nearby);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cities") != m.end() && !m["cities"].empty()) {
      if (typeid(vector<boost::any>) == m["cities"].type()) {
        vector<AirportSearchResponseBodyModuleCities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["cities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AirportSearchResponseBodyModuleCities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cities = make_shared<vector<AirportSearchResponseBodyModuleCities>>(expect1);
      }
    }
    if (m.find("nearby") != m.end() && !m["nearby"].empty()) {
      nearby = make_shared<bool>(boost::any_cast<bool>(m["nearby"]));
    }
  }


  virtual ~AirportSearchResponseBodyModule() = default;
};
class AirportSearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<AirportSearchResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  AirportSearchResponseBody() {}

  explicit AirportSearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        AirportSearchResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<AirportSearchResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~AirportSearchResponseBody() = default;
};
class AirportSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AirportSearchResponseBody> body{};

  AirportSearchResponse() {}

  explicit AirportSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AirportSearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AirportSearchResponseBody>(model1);
      }
    }
  }


  virtual ~AirportSearchResponse() = default;
};
class AllBaseCityInfoQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripAccessToken{};

  AllBaseCityInfoQueryHeaders() {}

  explicit AllBaseCityInfoQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripAccessToken) {
      res["x-acs-btrip-access-token"] = boost::any(*xAcsBtripAccessToken);
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
    if (m.find("x-acs-btrip-access-token") != m.end() && !m["x-acs-btrip-access-token"].empty()) {
      xAcsBtripAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-access-token"]));
    }
  }


  virtual ~AllBaseCityInfoQueryHeaders() = default;
};
class AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList : public Darabonba::Model {
public:
  shared_ptr<string> adcode{};
  shared_ptr<string> cityCode{};
  shared_ptr<string> cityLevel{};
  shared_ptr<string> cityName{};
  shared_ptr<string> cnNameTree{};
  shared_ptr<long> id{};
  shared_ptr<vector<string>> otherNameList{};

  AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList() {}

  explicit AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adcode) {
      res["adcode"] = boost::any(*adcode);
    }
    if (cityCode) {
      res["city_code"] = boost::any(*cityCode);
    }
    if (cityLevel) {
      res["city_level"] = boost::any(*cityLevel);
    }
    if (cityName) {
      res["city_name"] = boost::any(*cityName);
    }
    if (cnNameTree) {
      res["cn_name_tree"] = boost::any(*cnNameTree);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (otherNameList) {
      res["other_name_list"] = boost::any(*otherNameList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("adcode") != m.end() && !m["adcode"].empty()) {
      adcode = make_shared<string>(boost::any_cast<string>(m["adcode"]));
    }
    if (m.find("city_code") != m.end() && !m["city_code"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["city_code"]));
    }
    if (m.find("city_level") != m.end() && !m["city_level"].empty()) {
      cityLevel = make_shared<string>(boost::any_cast<string>(m["city_level"]));
    }
    if (m.find("city_name") != m.end() && !m["city_name"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["city_name"]));
    }
    if (m.find("cn_name_tree") != m.end() && !m["cn_name_tree"].empty()) {
      cnNameTree = make_shared<string>(boost::any_cast<string>(m["cn_name_tree"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("other_name_list") != m.end() && !m["other_name_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["other_name_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["other_name_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      otherNameList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList() = default;
};
class AllBaseCityInfoQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<vector<AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList>> allCityBaseInfoList{};

  AllBaseCityInfoQueryResponseBodyModule() {}

  explicit AllBaseCityInfoQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allCityBaseInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*allCityBaseInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["all_city_base_info_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("all_city_base_info_list") != m.end() && !m["all_city_base_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["all_city_base_info_list"].type()) {
        vector<AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["all_city_base_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        allCityBaseInfoList = make_shared<vector<AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList>>(expect1);
      }
    }
  }


  virtual ~AllBaseCityInfoQueryResponseBodyModule() = default;
};
class AllBaseCityInfoQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<AllBaseCityInfoQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  AllBaseCityInfoQueryResponseBody() {}

  explicit AllBaseCityInfoQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        AllBaseCityInfoQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<AllBaseCityInfoQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~AllBaseCityInfoQueryResponseBody() = default;
};
class AllBaseCityInfoQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AllBaseCityInfoQueryResponseBody> body{};

  AllBaseCityInfoQueryResponse() {}

  explicit AllBaseCityInfoQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AllBaseCityInfoQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllBaseCityInfoQueryResponseBody>(model1);
      }
    }
  }


  virtual ~AllBaseCityInfoQueryResponse() = default;
};
class ApplyAddHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  ApplyAddHeaders() {}

  explicit ApplyAddHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~ApplyAddHeaders() = default;
};
class ApplyAddRequestExternalTravelerList : public Darabonba::Model {
public:
  shared_ptr<string> userName{};

  ApplyAddRequestExternalTravelerList() {}

  explicit ApplyAddRequestExternalTravelerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~ApplyAddRequestExternalTravelerList() = default;
};
class ApplyAddRequestExternalTravelerStandardHotelCitys : public Darabonba::Model {
public:
  shared_ptr<string> cityCode{};
  shared_ptr<string> cityName{};
  shared_ptr<long> fee{};

  ApplyAddRequestExternalTravelerStandardHotelCitys() {}

  explicit ApplyAddRequestExternalTravelerStandardHotelCitys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityCode) {
      res["city_code"] = boost::any(*cityCode);
    }
    if (cityName) {
      res["city_name"] = boost::any(*cityName);
    }
    if (fee) {
      res["fee"] = boost::any(*fee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("city_code") != m.end() && !m["city_code"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["city_code"]));
    }
    if (m.find("city_name") != m.end() && !m["city_name"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["city_name"]));
    }
    if (m.find("fee") != m.end() && !m["fee"].empty()) {
      fee = make_shared<long>(boost::any_cast<long>(m["fee"]));
    }
  }


  virtual ~ApplyAddRequestExternalTravelerStandardHotelCitys() = default;
};
class ApplyAddRequestExternalTravelerStandard : public Darabonba::Model {
public:
  shared_ptr<long> businessDiscount{};
  shared_ptr<long> economyDiscount{};
  shared_ptr<long> firstDiscount{};
  shared_ptr<string> flightCabins{};
  shared_ptr<vector<ApplyAddRequestExternalTravelerStandardHotelCitys>> hotelCitys{};
  shared_ptr<long> premiumEconomyDiscount{};
  shared_ptr<long> reserveType{};
  shared_ptr<string> trainSeats{};

  ApplyAddRequestExternalTravelerStandard() {}

  explicit ApplyAddRequestExternalTravelerStandard(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessDiscount) {
      res["business_discount"] = boost::any(*businessDiscount);
    }
    if (economyDiscount) {
      res["economy_discount"] = boost::any(*economyDiscount);
    }
    if (firstDiscount) {
      res["first_discount"] = boost::any(*firstDiscount);
    }
    if (flightCabins) {
      res["flight_cabins"] = boost::any(*flightCabins);
    }
    if (hotelCitys) {
      vector<boost::any> temp1;
      for(auto item1:*hotelCitys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hotel_citys"] = boost::any(temp1);
    }
    if (premiumEconomyDiscount) {
      res["premium_economy_discount"] = boost::any(*premiumEconomyDiscount);
    }
    if (reserveType) {
      res["reserve_type"] = boost::any(*reserveType);
    }
    if (trainSeats) {
      res["train_seats"] = boost::any(*trainSeats);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("business_discount") != m.end() && !m["business_discount"].empty()) {
      businessDiscount = make_shared<long>(boost::any_cast<long>(m["business_discount"]));
    }
    if (m.find("economy_discount") != m.end() && !m["economy_discount"].empty()) {
      economyDiscount = make_shared<long>(boost::any_cast<long>(m["economy_discount"]));
    }
    if (m.find("first_discount") != m.end() && !m["first_discount"].empty()) {
      firstDiscount = make_shared<long>(boost::any_cast<long>(m["first_discount"]));
    }
    if (m.find("flight_cabins") != m.end() && !m["flight_cabins"].empty()) {
      flightCabins = make_shared<string>(boost::any_cast<string>(m["flight_cabins"]));
    }
    if (m.find("hotel_citys") != m.end() && !m["hotel_citys"].empty()) {
      if (typeid(vector<boost::any>) == m["hotel_citys"].type()) {
        vector<ApplyAddRequestExternalTravelerStandardHotelCitys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hotel_citys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyAddRequestExternalTravelerStandardHotelCitys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hotelCitys = make_shared<vector<ApplyAddRequestExternalTravelerStandardHotelCitys>>(expect1);
      }
    }
    if (m.find("premium_economy_discount") != m.end() && !m["premium_economy_discount"].empty()) {
      premiumEconomyDiscount = make_shared<long>(boost::any_cast<long>(m["premium_economy_discount"]));
    }
    if (m.find("reserve_type") != m.end() && !m["reserve_type"].empty()) {
      reserveType = make_shared<long>(boost::any_cast<long>(m["reserve_type"]));
    }
    if (m.find("train_seats") != m.end() && !m["train_seats"].empty()) {
      trainSeats = make_shared<string>(boost::any_cast<string>(m["train_seats"]));
    }
  }


  virtual ~ApplyAddRequestExternalTravelerStandard() = default;
};
class ApplyAddRequestHotelShare : public Darabonba::Model {
public:
  shared_ptr<string> param{};
  shared_ptr<string> type{};

  ApplyAddRequestHotelShare() {}

  explicit ApplyAddRequestHotelShare(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (param) {
      res["param"] = boost::any(*param);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("param") != m.end() && !m["param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["param"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ApplyAddRequestHotelShare() = default;
};
class ApplyAddRequestItineraryList : public Darabonba::Model {
public:
  shared_ptr<string> arrCity{};
  shared_ptr<string> arrCityCode{};
  shared_ptr<string> arrDate{};
  shared_ptr<long> costCenterId{};
  shared_ptr<string> depCity{};
  shared_ptr<string> depCityCode{};
  shared_ptr<string> depDate{};
  shared_ptr<long> invoiceId{};
  shared_ptr<string> itineraryId{};
  shared_ptr<bool> needHotel{};
  shared_ptr<bool> needTraffic{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectTitle{};
  shared_ptr<string> thirdPartInvoiceId{};
  shared_ptr<string> thirdpartCostCenterId{};
  shared_ptr<long> trafficType{};
  shared_ptr<long> tripWay{};

  ApplyAddRequestItineraryList() {}

  explicit ApplyAddRequestItineraryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrCity) {
      res["arr_city"] = boost::any(*arrCity);
    }
    if (arrCityCode) {
      res["arr_city_code"] = boost::any(*arrCityCode);
    }
    if (arrDate) {
      res["arr_date"] = boost::any(*arrDate);
    }
    if (costCenterId) {
      res["cost_center_id"] = boost::any(*costCenterId);
    }
    if (depCity) {
      res["dep_city"] = boost::any(*depCity);
    }
    if (depCityCode) {
      res["dep_city_code"] = boost::any(*depCityCode);
    }
    if (depDate) {
      res["dep_date"] = boost::any(*depDate);
    }
    if (invoiceId) {
      res["invoice_id"] = boost::any(*invoiceId);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (needHotel) {
      res["need_hotel"] = boost::any(*needHotel);
    }
    if (needTraffic) {
      res["need_traffic"] = boost::any(*needTraffic);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (thirdPartInvoiceId) {
      res["third_part_invoice_id"] = boost::any(*thirdPartInvoiceId);
    }
    if (thirdpartCostCenterId) {
      res["thirdpart_cost_center_id"] = boost::any(*thirdpartCostCenterId);
    }
    if (trafficType) {
      res["traffic_type"] = boost::any(*trafficType);
    }
    if (tripWay) {
      res["trip_way"] = boost::any(*tripWay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_city") != m.end() && !m["arr_city"].empty()) {
      arrCity = make_shared<string>(boost::any_cast<string>(m["arr_city"]));
    }
    if (m.find("arr_city_code") != m.end() && !m["arr_city_code"].empty()) {
      arrCityCode = make_shared<string>(boost::any_cast<string>(m["arr_city_code"]));
    }
    if (m.find("arr_date") != m.end() && !m["arr_date"].empty()) {
      arrDate = make_shared<string>(boost::any_cast<string>(m["arr_date"]));
    }
    if (m.find("cost_center_id") != m.end() && !m["cost_center_id"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["cost_center_id"]));
    }
    if (m.find("dep_city") != m.end() && !m["dep_city"].empty()) {
      depCity = make_shared<string>(boost::any_cast<string>(m["dep_city"]));
    }
    if (m.find("dep_city_code") != m.end() && !m["dep_city_code"].empty()) {
      depCityCode = make_shared<string>(boost::any_cast<string>(m["dep_city_code"]));
    }
    if (m.find("dep_date") != m.end() && !m["dep_date"].empty()) {
      depDate = make_shared<string>(boost::any_cast<string>(m["dep_date"]));
    }
    if (m.find("invoice_id") != m.end() && !m["invoice_id"].empty()) {
      invoiceId = make_shared<long>(boost::any_cast<long>(m["invoice_id"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("need_hotel") != m.end() && !m["need_hotel"].empty()) {
      needHotel = make_shared<bool>(boost::any_cast<bool>(m["need_hotel"]));
    }
    if (m.find("need_traffic") != m.end() && !m["need_traffic"].empty()) {
      needTraffic = make_shared<bool>(boost::any_cast<bool>(m["need_traffic"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("third_part_invoice_id") != m.end() && !m["third_part_invoice_id"].empty()) {
      thirdPartInvoiceId = make_shared<string>(boost::any_cast<string>(m["third_part_invoice_id"]));
    }
    if (m.find("thirdpart_cost_center_id") != m.end() && !m["thirdpart_cost_center_id"].empty()) {
      thirdpartCostCenterId = make_shared<string>(boost::any_cast<string>(m["thirdpart_cost_center_id"]));
    }
    if (m.find("traffic_type") != m.end() && !m["traffic_type"].empty()) {
      trafficType = make_shared<long>(boost::any_cast<long>(m["traffic_type"]));
    }
    if (m.find("trip_way") != m.end() && !m["trip_way"].empty()) {
      tripWay = make_shared<long>(boost::any_cast<long>(m["trip_way"]));
    }
  }


  virtual ~ApplyAddRequestItineraryList() = default;
};
class ApplyAddRequestItinerarySetList : public Darabonba::Model {
public:
  shared_ptr<string> arrDate{};
  shared_ptr<string> cityCodeSet{};
  shared_ptr<string> citySet{};
  shared_ptr<long> costCenterId{};
  shared_ptr<string> depDate{};
  shared_ptr<long> invoiceId{};
  shared_ptr<string> itineraryId{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectTitle{};
  shared_ptr<string> thirdPartInvoiceId{};
  shared_ptr<string> thirdpartCostCenterId{};
  shared_ptr<long> trafficType{};

  ApplyAddRequestItinerarySetList() {}

  explicit ApplyAddRequestItinerarySetList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrDate) {
      res["arr_date"] = boost::any(*arrDate);
    }
    if (cityCodeSet) {
      res["city_code_set"] = boost::any(*cityCodeSet);
    }
    if (citySet) {
      res["city_set"] = boost::any(*citySet);
    }
    if (costCenterId) {
      res["cost_center_id"] = boost::any(*costCenterId);
    }
    if (depDate) {
      res["dep_date"] = boost::any(*depDate);
    }
    if (invoiceId) {
      res["invoice_id"] = boost::any(*invoiceId);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (thirdPartInvoiceId) {
      res["third_part_invoice_id"] = boost::any(*thirdPartInvoiceId);
    }
    if (thirdpartCostCenterId) {
      res["thirdpart_cost_center_id"] = boost::any(*thirdpartCostCenterId);
    }
    if (trafficType) {
      res["traffic_type"] = boost::any(*trafficType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_date") != m.end() && !m["arr_date"].empty()) {
      arrDate = make_shared<string>(boost::any_cast<string>(m["arr_date"]));
    }
    if (m.find("city_code_set") != m.end() && !m["city_code_set"].empty()) {
      cityCodeSet = make_shared<string>(boost::any_cast<string>(m["city_code_set"]));
    }
    if (m.find("city_set") != m.end() && !m["city_set"].empty()) {
      citySet = make_shared<string>(boost::any_cast<string>(m["city_set"]));
    }
    if (m.find("cost_center_id") != m.end() && !m["cost_center_id"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["cost_center_id"]));
    }
    if (m.find("dep_date") != m.end() && !m["dep_date"].empty()) {
      depDate = make_shared<string>(boost::any_cast<string>(m["dep_date"]));
    }
    if (m.find("invoice_id") != m.end() && !m["invoice_id"].empty()) {
      invoiceId = make_shared<long>(boost::any_cast<long>(m["invoice_id"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("third_part_invoice_id") != m.end() && !m["third_part_invoice_id"].empty()) {
      thirdPartInvoiceId = make_shared<string>(boost::any_cast<string>(m["third_part_invoice_id"]));
    }
    if (m.find("thirdpart_cost_center_id") != m.end() && !m["thirdpart_cost_center_id"].empty()) {
      thirdpartCostCenterId = make_shared<string>(boost::any_cast<string>(m["thirdpart_cost_center_id"]));
    }
    if (m.find("traffic_type") != m.end() && !m["traffic_type"].empty()) {
      trafficType = make_shared<long>(boost::any_cast<long>(m["traffic_type"]));
    }
  }


  virtual ~ApplyAddRequestItinerarySetList() = default;
};
class ApplyAddRequestTravelerList : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ApplyAddRequestTravelerList() {}

  explicit ApplyAddRequestTravelerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~ApplyAddRequestTravelerList() = default;
};
class ApplyAddRequestTravelerStandardHotelCitys : public Darabonba::Model {
public:
  shared_ptr<string> cityCode{};
  shared_ptr<string> cityName{};
  shared_ptr<long> fee{};

  ApplyAddRequestTravelerStandardHotelCitys() {}

  explicit ApplyAddRequestTravelerStandardHotelCitys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityCode) {
      res["city_code"] = boost::any(*cityCode);
    }
    if (cityName) {
      res["city_name"] = boost::any(*cityName);
    }
    if (fee) {
      res["fee"] = boost::any(*fee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("city_code") != m.end() && !m["city_code"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["city_code"]));
    }
    if (m.find("city_name") != m.end() && !m["city_name"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["city_name"]));
    }
    if (m.find("fee") != m.end() && !m["fee"].empty()) {
      fee = make_shared<long>(boost::any_cast<long>(m["fee"]));
    }
  }


  virtual ~ApplyAddRequestTravelerStandardHotelCitys() = default;
};
class ApplyAddRequestTravelerStandard : public Darabonba::Model {
public:
  shared_ptr<long> businessDiscount{};
  shared_ptr<long> economyDiscount{};
  shared_ptr<long> firstDiscount{};
  shared_ptr<string> flightCabins{};
  shared_ptr<vector<ApplyAddRequestTravelerStandardHotelCitys>> hotelCitys{};
  shared_ptr<long> premiumEconomyDiscount{};
  shared_ptr<long> reserveType{};
  shared_ptr<string> trainSeats{};
  shared_ptr<string> userId{};

  ApplyAddRequestTravelerStandard() {}

  explicit ApplyAddRequestTravelerStandard(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessDiscount) {
      res["business_discount"] = boost::any(*businessDiscount);
    }
    if (economyDiscount) {
      res["economy_discount"] = boost::any(*economyDiscount);
    }
    if (firstDiscount) {
      res["first_discount"] = boost::any(*firstDiscount);
    }
    if (flightCabins) {
      res["flight_cabins"] = boost::any(*flightCabins);
    }
    if (hotelCitys) {
      vector<boost::any> temp1;
      for(auto item1:*hotelCitys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hotel_citys"] = boost::any(temp1);
    }
    if (premiumEconomyDiscount) {
      res["premium_economy_discount"] = boost::any(*premiumEconomyDiscount);
    }
    if (reserveType) {
      res["reserve_type"] = boost::any(*reserveType);
    }
    if (trainSeats) {
      res["train_seats"] = boost::any(*trainSeats);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("business_discount") != m.end() && !m["business_discount"].empty()) {
      businessDiscount = make_shared<long>(boost::any_cast<long>(m["business_discount"]));
    }
    if (m.find("economy_discount") != m.end() && !m["economy_discount"].empty()) {
      economyDiscount = make_shared<long>(boost::any_cast<long>(m["economy_discount"]));
    }
    if (m.find("first_discount") != m.end() && !m["first_discount"].empty()) {
      firstDiscount = make_shared<long>(boost::any_cast<long>(m["first_discount"]));
    }
    if (m.find("flight_cabins") != m.end() && !m["flight_cabins"].empty()) {
      flightCabins = make_shared<string>(boost::any_cast<string>(m["flight_cabins"]));
    }
    if (m.find("hotel_citys") != m.end() && !m["hotel_citys"].empty()) {
      if (typeid(vector<boost::any>) == m["hotel_citys"].type()) {
        vector<ApplyAddRequestTravelerStandardHotelCitys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hotel_citys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyAddRequestTravelerStandardHotelCitys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hotelCitys = make_shared<vector<ApplyAddRequestTravelerStandardHotelCitys>>(expect1);
      }
    }
    if (m.find("premium_economy_discount") != m.end() && !m["premium_economy_discount"].empty()) {
      premiumEconomyDiscount = make_shared<long>(boost::any_cast<long>(m["premium_economy_discount"]));
    }
    if (m.find("reserve_type") != m.end() && !m["reserve_type"].empty()) {
      reserveType = make_shared<long>(boost::any_cast<long>(m["reserve_type"]));
    }
    if (m.find("train_seats") != m.end() && !m["train_seats"].empty()) {
      trainSeats = make_shared<string>(boost::any_cast<string>(m["train_seats"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~ApplyAddRequestTravelerStandard() = default;
};
class ApplyAddRequest : public Darabonba::Model {
public:
  shared_ptr<long> budget{};
  shared_ptr<long> budgetMerge{};
  shared_ptr<string> corpName{};
  shared_ptr<string> departId{};
  shared_ptr<string> departName{};
  shared_ptr<vector<ApplyAddRequestExternalTravelerList>> externalTravelerList{};
  shared_ptr<ApplyAddRequestExternalTravelerStandard> externalTravelerStandard{};
  shared_ptr<long> flightBudget{};
  shared_ptr<long> hotelBudget{};
  shared_ptr<ApplyAddRequestHotelShare> hotelShare{};
  shared_ptr<string> internationalFlightCabins{};
  shared_ptr<vector<ApplyAddRequestItineraryList>> itineraryList{};
  shared_ptr<long> itineraryRule{};
  shared_ptr<vector<ApplyAddRequestItinerarySetList>> itinerarySetList{};
  shared_ptr<long> limitTraveler{};
  shared_ptr<long> status{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartBusinessId{};
  shared_ptr<string> thirdpartDepartId{};
  shared_ptr<long> togetherBookRule{};
  shared_ptr<long> trainBudget{};
  shared_ptr<vector<ApplyAddRequestTravelerList>> travelerList{};
  shared_ptr<vector<ApplyAddRequestTravelerStandard>> travelerStandard{};
  shared_ptr<string> tripCause{};
  shared_ptr<long> tripDay{};
  shared_ptr<string> tripTitle{};
  shared_ptr<long> type{};
  shared_ptr<string> unionNo{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<long> vehicleBudget{};

  ApplyAddRequest() {}

  explicit ApplyAddRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (budget) {
      res["budget"] = boost::any(*budget);
    }
    if (budgetMerge) {
      res["budget_merge"] = boost::any(*budgetMerge);
    }
    if (corpName) {
      res["corp_name"] = boost::any(*corpName);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (departName) {
      res["depart_name"] = boost::any(*departName);
    }
    if (externalTravelerList) {
      vector<boost::any> temp1;
      for(auto item1:*externalTravelerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["external_traveler_list"] = boost::any(temp1);
    }
    if (externalTravelerStandard) {
      res["external_traveler_standard"] = externalTravelerStandard ? boost::any(externalTravelerStandard->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (flightBudget) {
      res["flight_budget"] = boost::any(*flightBudget);
    }
    if (hotelBudget) {
      res["hotel_budget"] = boost::any(*hotelBudget);
    }
    if (hotelShare) {
      res["hotel_share"] = hotelShare ? boost::any(hotelShare->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (internationalFlightCabins) {
      res["international_flight_cabins"] = boost::any(*internationalFlightCabins);
    }
    if (itineraryList) {
      vector<boost::any> temp1;
      for(auto item1:*itineraryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["itinerary_list"] = boost::any(temp1);
    }
    if (itineraryRule) {
      res["itinerary_rule"] = boost::any(*itineraryRule);
    }
    if (itinerarySetList) {
      vector<boost::any> temp1;
      for(auto item1:*itinerarySetList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["itinerary_set_list"] = boost::any(temp1);
    }
    if (limitTraveler) {
      res["limit_traveler"] = boost::any(*limitTraveler);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartBusinessId) {
      res["thirdpart_business_id"] = boost::any(*thirdpartBusinessId);
    }
    if (thirdpartDepartId) {
      res["thirdpart_depart_id"] = boost::any(*thirdpartDepartId);
    }
    if (togetherBookRule) {
      res["together_book_rule"] = boost::any(*togetherBookRule);
    }
    if (trainBudget) {
      res["train_budget"] = boost::any(*trainBudget);
    }
    if (travelerList) {
      vector<boost::any> temp1;
      for(auto item1:*travelerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["traveler_list"] = boost::any(temp1);
    }
    if (travelerStandard) {
      vector<boost::any> temp1;
      for(auto item1:*travelerStandard){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["traveler_standard"] = boost::any(temp1);
    }
    if (tripCause) {
      res["trip_cause"] = boost::any(*tripCause);
    }
    if (tripDay) {
      res["trip_day"] = boost::any(*tripDay);
    }
    if (tripTitle) {
      res["trip_title"] = boost::any(*tripTitle);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (unionNo) {
      res["union_no"] = boost::any(*unionNo);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    if (vehicleBudget) {
      res["vehicle_budget"] = boost::any(*vehicleBudget);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("budget") != m.end() && !m["budget"].empty()) {
      budget = make_shared<long>(boost::any_cast<long>(m["budget"]));
    }
    if (m.find("budget_merge") != m.end() && !m["budget_merge"].empty()) {
      budgetMerge = make_shared<long>(boost::any_cast<long>(m["budget_merge"]));
    }
    if (m.find("corp_name") != m.end() && !m["corp_name"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["corp_name"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("depart_name") != m.end() && !m["depart_name"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["depart_name"]));
    }
    if (m.find("external_traveler_list") != m.end() && !m["external_traveler_list"].empty()) {
      if (typeid(vector<boost::any>) == m["external_traveler_list"].type()) {
        vector<ApplyAddRequestExternalTravelerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["external_traveler_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyAddRequestExternalTravelerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        externalTravelerList = make_shared<vector<ApplyAddRequestExternalTravelerList>>(expect1);
      }
    }
    if (m.find("external_traveler_standard") != m.end() && !m["external_traveler_standard"].empty()) {
      if (typeid(map<string, boost::any>) == m["external_traveler_standard"].type()) {
        ApplyAddRequestExternalTravelerStandard model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["external_traveler_standard"]));
        externalTravelerStandard = make_shared<ApplyAddRequestExternalTravelerStandard>(model1);
      }
    }
    if (m.find("flight_budget") != m.end() && !m["flight_budget"].empty()) {
      flightBudget = make_shared<long>(boost::any_cast<long>(m["flight_budget"]));
    }
    if (m.find("hotel_budget") != m.end() && !m["hotel_budget"].empty()) {
      hotelBudget = make_shared<long>(boost::any_cast<long>(m["hotel_budget"]));
    }
    if (m.find("hotel_share") != m.end() && !m["hotel_share"].empty()) {
      if (typeid(map<string, boost::any>) == m["hotel_share"].type()) {
        ApplyAddRequestHotelShare model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["hotel_share"]));
        hotelShare = make_shared<ApplyAddRequestHotelShare>(model1);
      }
    }
    if (m.find("international_flight_cabins") != m.end() && !m["international_flight_cabins"].empty()) {
      internationalFlightCabins = make_shared<string>(boost::any_cast<string>(m["international_flight_cabins"]));
    }
    if (m.find("itinerary_list") != m.end() && !m["itinerary_list"].empty()) {
      if (typeid(vector<boost::any>) == m["itinerary_list"].type()) {
        vector<ApplyAddRequestItineraryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["itinerary_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyAddRequestItineraryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itineraryList = make_shared<vector<ApplyAddRequestItineraryList>>(expect1);
      }
    }
    if (m.find("itinerary_rule") != m.end() && !m["itinerary_rule"].empty()) {
      itineraryRule = make_shared<long>(boost::any_cast<long>(m["itinerary_rule"]));
    }
    if (m.find("itinerary_set_list") != m.end() && !m["itinerary_set_list"].empty()) {
      if (typeid(vector<boost::any>) == m["itinerary_set_list"].type()) {
        vector<ApplyAddRequestItinerarySetList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["itinerary_set_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyAddRequestItinerarySetList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itinerarySetList = make_shared<vector<ApplyAddRequestItinerarySetList>>(expect1);
      }
    }
    if (m.find("limit_traveler") != m.end() && !m["limit_traveler"].empty()) {
      limitTraveler = make_shared<long>(boost::any_cast<long>(m["limit_traveler"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_business_id") != m.end() && !m["thirdpart_business_id"].empty()) {
      thirdpartBusinessId = make_shared<string>(boost::any_cast<string>(m["thirdpart_business_id"]));
    }
    if (m.find("thirdpart_depart_id") != m.end() && !m["thirdpart_depart_id"].empty()) {
      thirdpartDepartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_depart_id"]));
    }
    if (m.find("together_book_rule") != m.end() && !m["together_book_rule"].empty()) {
      togetherBookRule = make_shared<long>(boost::any_cast<long>(m["together_book_rule"]));
    }
    if (m.find("train_budget") != m.end() && !m["train_budget"].empty()) {
      trainBudget = make_shared<long>(boost::any_cast<long>(m["train_budget"]));
    }
    if (m.find("traveler_list") != m.end() && !m["traveler_list"].empty()) {
      if (typeid(vector<boost::any>) == m["traveler_list"].type()) {
        vector<ApplyAddRequestTravelerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["traveler_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyAddRequestTravelerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        travelerList = make_shared<vector<ApplyAddRequestTravelerList>>(expect1);
      }
    }
    if (m.find("traveler_standard") != m.end() && !m["traveler_standard"].empty()) {
      if (typeid(vector<boost::any>) == m["traveler_standard"].type()) {
        vector<ApplyAddRequestTravelerStandard> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["traveler_standard"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyAddRequestTravelerStandard model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        travelerStandard = make_shared<vector<ApplyAddRequestTravelerStandard>>(expect1);
      }
    }
    if (m.find("trip_cause") != m.end() && !m["trip_cause"].empty()) {
      tripCause = make_shared<string>(boost::any_cast<string>(m["trip_cause"]));
    }
    if (m.find("trip_day") != m.end() && !m["trip_day"].empty()) {
      tripDay = make_shared<long>(boost::any_cast<long>(m["trip_day"]));
    }
    if (m.find("trip_title") != m.end() && !m["trip_title"].empty()) {
      tripTitle = make_shared<string>(boost::any_cast<string>(m["trip_title"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("union_no") != m.end() && !m["union_no"].empty()) {
      unionNo = make_shared<string>(boost::any_cast<string>(m["union_no"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
    if (m.find("vehicle_budget") != m.end() && !m["vehicle_budget"].empty()) {
      vehicleBudget = make_shared<long>(boost::any_cast<long>(m["vehicle_budget"]));
    }
  }


  virtual ~ApplyAddRequest() = default;
};
class ApplyAddShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> budget{};
  shared_ptr<long> budgetMerge{};
  shared_ptr<string> corpName{};
  shared_ptr<string> departId{};
  shared_ptr<string> departName{};
  shared_ptr<string> externalTravelerListShrink{};
  shared_ptr<string> externalTravelerStandardShrink{};
  shared_ptr<long> flightBudget{};
  shared_ptr<long> hotelBudget{};
  shared_ptr<string> hotelShareShrink{};
  shared_ptr<string> internationalFlightCabins{};
  shared_ptr<string> itineraryListShrink{};
  shared_ptr<long> itineraryRule{};
  shared_ptr<string> itinerarySetListShrink{};
  shared_ptr<long> limitTraveler{};
  shared_ptr<long> status{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartBusinessId{};
  shared_ptr<string> thirdpartDepartId{};
  shared_ptr<long> togetherBookRule{};
  shared_ptr<long> trainBudget{};
  shared_ptr<string> travelerListShrink{};
  shared_ptr<string> travelerStandardShrink{};
  shared_ptr<string> tripCause{};
  shared_ptr<long> tripDay{};
  shared_ptr<string> tripTitle{};
  shared_ptr<long> type{};
  shared_ptr<string> unionNo{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<long> vehicleBudget{};

  ApplyAddShrinkRequest() {}

  explicit ApplyAddShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (budget) {
      res["budget"] = boost::any(*budget);
    }
    if (budgetMerge) {
      res["budget_merge"] = boost::any(*budgetMerge);
    }
    if (corpName) {
      res["corp_name"] = boost::any(*corpName);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (departName) {
      res["depart_name"] = boost::any(*departName);
    }
    if (externalTravelerListShrink) {
      res["external_traveler_list"] = boost::any(*externalTravelerListShrink);
    }
    if (externalTravelerStandardShrink) {
      res["external_traveler_standard"] = boost::any(*externalTravelerStandardShrink);
    }
    if (flightBudget) {
      res["flight_budget"] = boost::any(*flightBudget);
    }
    if (hotelBudget) {
      res["hotel_budget"] = boost::any(*hotelBudget);
    }
    if (hotelShareShrink) {
      res["hotel_share"] = boost::any(*hotelShareShrink);
    }
    if (internationalFlightCabins) {
      res["international_flight_cabins"] = boost::any(*internationalFlightCabins);
    }
    if (itineraryListShrink) {
      res["itinerary_list"] = boost::any(*itineraryListShrink);
    }
    if (itineraryRule) {
      res["itinerary_rule"] = boost::any(*itineraryRule);
    }
    if (itinerarySetListShrink) {
      res["itinerary_set_list"] = boost::any(*itinerarySetListShrink);
    }
    if (limitTraveler) {
      res["limit_traveler"] = boost::any(*limitTraveler);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartBusinessId) {
      res["thirdpart_business_id"] = boost::any(*thirdpartBusinessId);
    }
    if (thirdpartDepartId) {
      res["thirdpart_depart_id"] = boost::any(*thirdpartDepartId);
    }
    if (togetherBookRule) {
      res["together_book_rule"] = boost::any(*togetherBookRule);
    }
    if (trainBudget) {
      res["train_budget"] = boost::any(*trainBudget);
    }
    if (travelerListShrink) {
      res["traveler_list"] = boost::any(*travelerListShrink);
    }
    if (travelerStandardShrink) {
      res["traveler_standard"] = boost::any(*travelerStandardShrink);
    }
    if (tripCause) {
      res["trip_cause"] = boost::any(*tripCause);
    }
    if (tripDay) {
      res["trip_day"] = boost::any(*tripDay);
    }
    if (tripTitle) {
      res["trip_title"] = boost::any(*tripTitle);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (unionNo) {
      res["union_no"] = boost::any(*unionNo);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    if (vehicleBudget) {
      res["vehicle_budget"] = boost::any(*vehicleBudget);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("budget") != m.end() && !m["budget"].empty()) {
      budget = make_shared<long>(boost::any_cast<long>(m["budget"]));
    }
    if (m.find("budget_merge") != m.end() && !m["budget_merge"].empty()) {
      budgetMerge = make_shared<long>(boost::any_cast<long>(m["budget_merge"]));
    }
    if (m.find("corp_name") != m.end() && !m["corp_name"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["corp_name"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("depart_name") != m.end() && !m["depart_name"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["depart_name"]));
    }
    if (m.find("external_traveler_list") != m.end() && !m["external_traveler_list"].empty()) {
      externalTravelerListShrink = make_shared<string>(boost::any_cast<string>(m["external_traveler_list"]));
    }
    if (m.find("external_traveler_standard") != m.end() && !m["external_traveler_standard"].empty()) {
      externalTravelerStandardShrink = make_shared<string>(boost::any_cast<string>(m["external_traveler_standard"]));
    }
    if (m.find("flight_budget") != m.end() && !m["flight_budget"].empty()) {
      flightBudget = make_shared<long>(boost::any_cast<long>(m["flight_budget"]));
    }
    if (m.find("hotel_budget") != m.end() && !m["hotel_budget"].empty()) {
      hotelBudget = make_shared<long>(boost::any_cast<long>(m["hotel_budget"]));
    }
    if (m.find("hotel_share") != m.end() && !m["hotel_share"].empty()) {
      hotelShareShrink = make_shared<string>(boost::any_cast<string>(m["hotel_share"]));
    }
    if (m.find("international_flight_cabins") != m.end() && !m["international_flight_cabins"].empty()) {
      internationalFlightCabins = make_shared<string>(boost::any_cast<string>(m["international_flight_cabins"]));
    }
    if (m.find("itinerary_list") != m.end() && !m["itinerary_list"].empty()) {
      itineraryListShrink = make_shared<string>(boost::any_cast<string>(m["itinerary_list"]));
    }
    if (m.find("itinerary_rule") != m.end() && !m["itinerary_rule"].empty()) {
      itineraryRule = make_shared<long>(boost::any_cast<long>(m["itinerary_rule"]));
    }
    if (m.find("itinerary_set_list") != m.end() && !m["itinerary_set_list"].empty()) {
      itinerarySetListShrink = make_shared<string>(boost::any_cast<string>(m["itinerary_set_list"]));
    }
    if (m.find("limit_traveler") != m.end() && !m["limit_traveler"].empty()) {
      limitTraveler = make_shared<long>(boost::any_cast<long>(m["limit_traveler"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_business_id") != m.end() && !m["thirdpart_business_id"].empty()) {
      thirdpartBusinessId = make_shared<string>(boost::any_cast<string>(m["thirdpart_business_id"]));
    }
    if (m.find("thirdpart_depart_id") != m.end() && !m["thirdpart_depart_id"].empty()) {
      thirdpartDepartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_depart_id"]));
    }
    if (m.find("together_book_rule") != m.end() && !m["together_book_rule"].empty()) {
      togetherBookRule = make_shared<long>(boost::any_cast<long>(m["together_book_rule"]));
    }
    if (m.find("train_budget") != m.end() && !m["train_budget"].empty()) {
      trainBudget = make_shared<long>(boost::any_cast<long>(m["train_budget"]));
    }
    if (m.find("traveler_list") != m.end() && !m["traveler_list"].empty()) {
      travelerListShrink = make_shared<string>(boost::any_cast<string>(m["traveler_list"]));
    }
    if (m.find("traveler_standard") != m.end() && !m["traveler_standard"].empty()) {
      travelerStandardShrink = make_shared<string>(boost::any_cast<string>(m["traveler_standard"]));
    }
    if (m.find("trip_cause") != m.end() && !m["trip_cause"].empty()) {
      tripCause = make_shared<string>(boost::any_cast<string>(m["trip_cause"]));
    }
    if (m.find("trip_day") != m.end() && !m["trip_day"].empty()) {
      tripDay = make_shared<long>(boost::any_cast<long>(m["trip_day"]));
    }
    if (m.find("trip_title") != m.end() && !m["trip_title"].empty()) {
      tripTitle = make_shared<string>(boost::any_cast<string>(m["trip_title"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("union_no") != m.end() && !m["union_no"].empty()) {
      unionNo = make_shared<string>(boost::any_cast<string>(m["union_no"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
    if (m.find("vehicle_budget") != m.end() && !m["vehicle_budget"].empty()) {
      vehicleBudget = make_shared<long>(boost::any_cast<long>(m["vehicle_budget"]));
    }
  }


  virtual ~ApplyAddShrinkRequest() = default;
};
class ApplyAddResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartBusinessId{};

  ApplyAddResponseBodyModule() {}

  explicit ApplyAddResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartBusinessId) {
      res["thirdpart_business_id"] = boost::any(*thirdpartBusinessId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_business_id") != m.end() && !m["thirdpart_business_id"].empty()) {
      thirdpartBusinessId = make_shared<string>(boost::any_cast<string>(m["thirdpart_business_id"]));
    }
  }


  virtual ~ApplyAddResponseBodyModule() = default;
};
class ApplyAddResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<ApplyAddResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ApplyAddResponseBody() {}

  explicit ApplyAddResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        ApplyAddResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<ApplyAddResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~ApplyAddResponseBody() = default;
};
class ApplyAddResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyAddResponseBody> body{};

  ApplyAddResponse() {}

  explicit ApplyAddResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyAddResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyAddResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyAddResponse() = default;
};
class ApplyApproveHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  ApplyApproveHeaders() {}

  explicit ApplyApproveHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~ApplyApproveHeaders() = default;
};
class ApplyApproveRequest : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<string> note{};
  shared_ptr<string> operateTime{};
  shared_ptr<long> status{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ApplyApproveRequest() {}

  explicit ApplyApproveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (note) {
      res["note"] = boost::any(*note);
    }
    if (operateTime) {
      res["operate_time"] = boost::any(*operateTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["apply_id"]));
    }
    if (m.find("note") != m.end() && !m["note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["note"]));
    }
    if (m.find("operate_time") != m.end() && !m["operate_time"].empty()) {
      operateTime = make_shared<string>(boost::any_cast<string>(m["operate_time"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~ApplyApproveRequest() = default;
};
class ApplyApproveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ApplyApproveResponseBody() {}

  explicit ApplyApproveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = boost::any(*module);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["module"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~ApplyApproveResponseBody() = default;
};
class ApplyApproveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyApproveResponseBody> body{};

  ApplyApproveResponse() {}

  explicit ApplyApproveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyApproveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyApproveResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyApproveResponse() = default;
};
class ApplyListQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  ApplyListQueryHeaders() {}

  explicit ApplyListQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~ApplyListQueryHeaders() = default;
};
class ApplyListQueryRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allApply{};
  shared_ptr<string> departId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> gmtModified{};
  shared_ptr<bool> onlyShangLvApply{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<long> type{};
  shared_ptr<string> unionNo{};
  shared_ptr<string> userId{};

  ApplyListQueryRequest() {}

  explicit ApplyListQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allApply) {
      res["all_apply"] = boost::any(*allApply);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (endTime) {
      res["end_time"] = boost::any(*endTime);
    }
    if (gmtModified) {
      res["gmt_modified"] = boost::any(*gmtModified);
    }
    if (onlyShangLvApply) {
      res["only_shang_lv_apply"] = boost::any(*onlyShangLvApply);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["start_time"] = boost::any(*startTime);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (unionNo) {
      res["union_no"] = boost::any(*unionNo);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("all_apply") != m.end() && !m["all_apply"].empty()) {
      allApply = make_shared<bool>(boost::any_cast<bool>(m["all_apply"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("end_time") != m.end() && !m["end_time"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["end_time"]));
    }
    if (m.find("gmt_modified") != m.end() && !m["gmt_modified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmt_modified"]));
    }
    if (m.find("only_shang_lv_apply") != m.end() && !m["only_shang_lv_apply"].empty()) {
      onlyShangLvApply = make_shared<bool>(boost::any_cast<bool>(m["only_shang_lv_apply"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("start_time") != m.end() && !m["start_time"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["start_time"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("union_no") != m.end() && !m["union_no"].empty()) {
      unionNo = make_shared<string>(boost::any_cast<string>(m["union_no"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~ApplyListQueryRequest() = default;
};
class ApplyListQueryResponseBodyModuleListApproverList : public Darabonba::Model {
public:
  shared_ptr<string> note{};
  shared_ptr<string> operateTime{};
  shared_ptr<long> order{};
  shared_ptr<long> status{};
  shared_ptr<string> statusDesc{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ApplyListQueryResponseBodyModuleListApproverList() {}

  explicit ApplyListQueryResponseBodyModuleListApproverList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (note) {
      res["note"] = boost::any(*note);
    }
    if (operateTime) {
      res["operate_time"] = boost::any(*operateTime);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusDesc) {
      res["status_desc"] = boost::any(*statusDesc);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("note") != m.end() && !m["note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["note"]));
    }
    if (m.find("operate_time") != m.end() && !m["operate_time"].empty()) {
      operateTime = make_shared<string>(boost::any_cast<string>(m["operate_time"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("status_desc") != m.end() && !m["status_desc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["status_desc"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~ApplyListQueryResponseBodyModuleListApproverList() = default;
};
class ApplyListQueryResponseBodyModuleListExternalTravelerList : public Darabonba::Model {
public:
  shared_ptr<string> userName{};

  ApplyListQueryResponseBodyModuleListExternalTravelerList() {}

  explicit ApplyListQueryResponseBodyModuleListExternalTravelerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~ApplyListQueryResponseBodyModuleListExternalTravelerList() = default;
};
class ApplyListQueryResponseBodyModuleListItineraryList : public Darabonba::Model {
public:
  shared_ptr<string> arrCity{};
  shared_ptr<string> arrDate{};
  shared_ptr<string> costCenterName{};
  shared_ptr<string> depCity{};
  shared_ptr<string> depDate{};
  shared_ptr<string> invoiceName{};
  shared_ptr<string> itineraryId{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectTitle{};
  shared_ptr<long> trafficType{};
  shared_ptr<long> tripWay{};

  ApplyListQueryResponseBodyModuleListItineraryList() {}

  explicit ApplyListQueryResponseBodyModuleListItineraryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrCity) {
      res["arr_city"] = boost::any(*arrCity);
    }
    if (arrDate) {
      res["arr_date"] = boost::any(*arrDate);
    }
    if (costCenterName) {
      res["cost_center_name"] = boost::any(*costCenterName);
    }
    if (depCity) {
      res["dep_city"] = boost::any(*depCity);
    }
    if (depDate) {
      res["dep_date"] = boost::any(*depDate);
    }
    if (invoiceName) {
      res["invoice_name"] = boost::any(*invoiceName);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (trafficType) {
      res["traffic_type"] = boost::any(*trafficType);
    }
    if (tripWay) {
      res["trip_way"] = boost::any(*tripWay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_city") != m.end() && !m["arr_city"].empty()) {
      arrCity = make_shared<string>(boost::any_cast<string>(m["arr_city"]));
    }
    if (m.find("arr_date") != m.end() && !m["arr_date"].empty()) {
      arrDate = make_shared<string>(boost::any_cast<string>(m["arr_date"]));
    }
    if (m.find("cost_center_name") != m.end() && !m["cost_center_name"].empty()) {
      costCenterName = make_shared<string>(boost::any_cast<string>(m["cost_center_name"]));
    }
    if (m.find("dep_city") != m.end() && !m["dep_city"].empty()) {
      depCity = make_shared<string>(boost::any_cast<string>(m["dep_city"]));
    }
    if (m.find("dep_date") != m.end() && !m["dep_date"].empty()) {
      depDate = make_shared<string>(boost::any_cast<string>(m["dep_date"]));
    }
    if (m.find("invoice_name") != m.end() && !m["invoice_name"].empty()) {
      invoiceName = make_shared<string>(boost::any_cast<string>(m["invoice_name"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("traffic_type") != m.end() && !m["traffic_type"].empty()) {
      trafficType = make_shared<long>(boost::any_cast<long>(m["traffic_type"]));
    }
    if (m.find("trip_way") != m.end() && !m["trip_way"].empty()) {
      tripWay = make_shared<long>(boost::any_cast<long>(m["trip_way"]));
    }
  }


  virtual ~ApplyListQueryResponseBodyModuleListItineraryList() = default;
};
class ApplyListQueryResponseBodyModuleListItinerarySetList : public Darabonba::Model {
public:
  shared_ptr<string> arrDate{};
  shared_ptr<string> cityCodeSet{};
  shared_ptr<string> citySet{};
  shared_ptr<string> costCenterName{};
  shared_ptr<string> depDate{};
  shared_ptr<string> invoiceName{};
  shared_ptr<string> itineraryId{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectTitle{};
  shared_ptr<long> trafficType{};

  ApplyListQueryResponseBodyModuleListItinerarySetList() {}

  explicit ApplyListQueryResponseBodyModuleListItinerarySetList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrDate) {
      res["arr_date"] = boost::any(*arrDate);
    }
    if (cityCodeSet) {
      res["city_code_set"] = boost::any(*cityCodeSet);
    }
    if (citySet) {
      res["city_set"] = boost::any(*citySet);
    }
    if (costCenterName) {
      res["cost_center_name"] = boost::any(*costCenterName);
    }
    if (depDate) {
      res["dep_date"] = boost::any(*depDate);
    }
    if (invoiceName) {
      res["invoice_name"] = boost::any(*invoiceName);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (trafficType) {
      res["traffic_type"] = boost::any(*trafficType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_date") != m.end() && !m["arr_date"].empty()) {
      arrDate = make_shared<string>(boost::any_cast<string>(m["arr_date"]));
    }
    if (m.find("city_code_set") != m.end() && !m["city_code_set"].empty()) {
      cityCodeSet = make_shared<string>(boost::any_cast<string>(m["city_code_set"]));
    }
    if (m.find("city_set") != m.end() && !m["city_set"].empty()) {
      citySet = make_shared<string>(boost::any_cast<string>(m["city_set"]));
    }
    if (m.find("cost_center_name") != m.end() && !m["cost_center_name"].empty()) {
      costCenterName = make_shared<string>(boost::any_cast<string>(m["cost_center_name"]));
    }
    if (m.find("dep_date") != m.end() && !m["dep_date"].empty()) {
      depDate = make_shared<string>(boost::any_cast<string>(m["dep_date"]));
    }
    if (m.find("invoice_name") != m.end() && !m["invoice_name"].empty()) {
      invoiceName = make_shared<string>(boost::any_cast<string>(m["invoice_name"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("traffic_type") != m.end() && !m["traffic_type"].empty()) {
      trafficType = make_shared<long>(boost::any_cast<long>(m["traffic_type"]));
    }
  }


  virtual ~ApplyListQueryResponseBodyModuleListItinerarySetList() = default;
};
class ApplyListQueryResponseBodyModuleListTravelerList : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ApplyListQueryResponseBodyModuleListTravelerList() {}

  explicit ApplyListQueryResponseBodyModuleListTravelerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~ApplyListQueryResponseBodyModuleListTravelerList() = default;
};
class ApplyListQueryResponseBodyModuleList : public Darabonba::Model {
public:
  shared_ptr<string> applyShowId{};
  shared_ptr<vector<ApplyListQueryResponseBodyModuleListApproverList>> approverList{};
  shared_ptr<string> corpId{};
  shared_ptr<string> corpName{};
  shared_ptr<string> departId{};
  shared_ptr<string> departName{};
  shared_ptr<vector<ApplyListQueryResponseBodyModuleListExternalTravelerList>> externalTravelerList{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<vector<ApplyListQueryResponseBodyModuleListItineraryList>> itineraryList{};
  shared_ptr<long> itineraryRule{};
  shared_ptr<vector<ApplyListQueryResponseBodyModuleListItinerarySetList>> itinerarySetList{};
  shared_ptr<long> status{};
  shared_ptr<string> statusDesc{};
  shared_ptr<string> thirdpartBusinessId{};
  shared_ptr<string> thirdpartId{};
  shared_ptr<vector<ApplyListQueryResponseBodyModuleListTravelerList>> travelerList{};
  shared_ptr<string> tripCause{};
  shared_ptr<long> tripDay{};
  shared_ptr<string> tripTitle{};
  shared_ptr<long> type{};
  shared_ptr<string> unionNo{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ApplyListQueryResponseBodyModuleList() {}

  explicit ApplyListQueryResponseBodyModuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyShowId) {
      res["apply_show_id"] = boost::any(*applyShowId);
    }
    if (approverList) {
      vector<boost::any> temp1;
      for(auto item1:*approverList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["approver_list"] = boost::any(temp1);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (corpName) {
      res["corp_name"] = boost::any(*corpName);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (departName) {
      res["depart_name"] = boost::any(*departName);
    }
    if (externalTravelerList) {
      vector<boost::any> temp1;
      for(auto item1:*externalTravelerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["external_traveler_list"] = boost::any(temp1);
    }
    if (flowCode) {
      res["flow_code"] = boost::any(*flowCode);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmt_modified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (itineraryList) {
      vector<boost::any> temp1;
      for(auto item1:*itineraryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["itinerary_list"] = boost::any(temp1);
    }
    if (itineraryRule) {
      res["itinerary_rule"] = boost::any(*itineraryRule);
    }
    if (itinerarySetList) {
      vector<boost::any> temp1;
      for(auto item1:*itinerarySetList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["itinerary_set_list"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusDesc) {
      res["status_desc"] = boost::any(*statusDesc);
    }
    if (thirdpartBusinessId) {
      res["thirdpart_business_id"] = boost::any(*thirdpartBusinessId);
    }
    if (thirdpartId) {
      res["thirdpart_id"] = boost::any(*thirdpartId);
    }
    if (travelerList) {
      vector<boost::any> temp1;
      for(auto item1:*travelerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["traveler_list"] = boost::any(temp1);
    }
    if (tripCause) {
      res["trip_cause"] = boost::any(*tripCause);
    }
    if (tripDay) {
      res["trip_day"] = boost::any(*tripDay);
    }
    if (tripTitle) {
      res["trip_title"] = boost::any(*tripTitle);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (unionNo) {
      res["union_no"] = boost::any(*unionNo);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_show_id") != m.end() && !m["apply_show_id"].empty()) {
      applyShowId = make_shared<string>(boost::any_cast<string>(m["apply_show_id"]));
    }
    if (m.find("approver_list") != m.end() && !m["approver_list"].empty()) {
      if (typeid(vector<boost::any>) == m["approver_list"].type()) {
        vector<ApplyListQueryResponseBodyModuleListApproverList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["approver_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyListQueryResponseBodyModuleListApproverList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        approverList = make_shared<vector<ApplyListQueryResponseBodyModuleListApproverList>>(expect1);
      }
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("corp_name") != m.end() && !m["corp_name"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["corp_name"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("depart_name") != m.end() && !m["depart_name"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["depart_name"]));
    }
    if (m.find("external_traveler_list") != m.end() && !m["external_traveler_list"].empty()) {
      if (typeid(vector<boost::any>) == m["external_traveler_list"].type()) {
        vector<ApplyListQueryResponseBodyModuleListExternalTravelerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["external_traveler_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyListQueryResponseBodyModuleListExternalTravelerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        externalTravelerList = make_shared<vector<ApplyListQueryResponseBodyModuleListExternalTravelerList>>(expect1);
      }
    }
    if (m.find("flow_code") != m.end() && !m["flow_code"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["flow_code"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("gmt_modified") != m.end() && !m["gmt_modified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmt_modified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("itinerary_list") != m.end() && !m["itinerary_list"].empty()) {
      if (typeid(vector<boost::any>) == m["itinerary_list"].type()) {
        vector<ApplyListQueryResponseBodyModuleListItineraryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["itinerary_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyListQueryResponseBodyModuleListItineraryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itineraryList = make_shared<vector<ApplyListQueryResponseBodyModuleListItineraryList>>(expect1);
      }
    }
    if (m.find("itinerary_rule") != m.end() && !m["itinerary_rule"].empty()) {
      itineraryRule = make_shared<long>(boost::any_cast<long>(m["itinerary_rule"]));
    }
    if (m.find("itinerary_set_list") != m.end() && !m["itinerary_set_list"].empty()) {
      if (typeid(vector<boost::any>) == m["itinerary_set_list"].type()) {
        vector<ApplyListQueryResponseBodyModuleListItinerarySetList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["itinerary_set_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyListQueryResponseBodyModuleListItinerarySetList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itinerarySetList = make_shared<vector<ApplyListQueryResponseBodyModuleListItinerarySetList>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("status_desc") != m.end() && !m["status_desc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["status_desc"]));
    }
    if (m.find("thirdpart_business_id") != m.end() && !m["thirdpart_business_id"].empty()) {
      thirdpartBusinessId = make_shared<string>(boost::any_cast<string>(m["thirdpart_business_id"]));
    }
    if (m.find("thirdpart_id") != m.end() && !m["thirdpart_id"].empty()) {
      thirdpartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_id"]));
    }
    if (m.find("traveler_list") != m.end() && !m["traveler_list"].empty()) {
      if (typeid(vector<boost::any>) == m["traveler_list"].type()) {
        vector<ApplyListQueryResponseBodyModuleListTravelerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["traveler_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyListQueryResponseBodyModuleListTravelerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        travelerList = make_shared<vector<ApplyListQueryResponseBodyModuleListTravelerList>>(expect1);
      }
    }
    if (m.find("trip_cause") != m.end() && !m["trip_cause"].empty()) {
      tripCause = make_shared<string>(boost::any_cast<string>(m["trip_cause"]));
    }
    if (m.find("trip_day") != m.end() && !m["trip_day"].empty()) {
      tripDay = make_shared<long>(boost::any_cast<long>(m["trip_day"]));
    }
    if (m.find("trip_title") != m.end() && !m["trip_title"].empty()) {
      tripTitle = make_shared<string>(boost::any_cast<string>(m["trip_title"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("union_no") != m.end() && !m["union_no"].empty()) {
      unionNo = make_shared<string>(boost::any_cast<string>(m["union_no"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~ApplyListQueryResponseBodyModuleList() = default;
};
class ApplyListQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<ApplyListQueryResponseBodyModuleList>> moduleList{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ApplyListQueryResponseBody() {}

  explicit ApplyListQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (moduleList) {
      vector<boost::any> temp1;
      for(auto item1:*moduleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["module_list"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module_list") != m.end() && !m["module_list"].empty()) {
      if (typeid(vector<boost::any>) == m["module_list"].type()) {
        vector<ApplyListQueryResponseBodyModuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["module_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyListQueryResponseBodyModuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleList = make_shared<vector<ApplyListQueryResponseBodyModuleList>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~ApplyListQueryResponseBody() = default;
};
class ApplyListQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyListQueryResponseBody> body{};

  ApplyListQueryResponse() {}

  explicit ApplyListQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyListQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyListQueryResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyListQueryResponse() = default;
};
class ApplyModifyHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  ApplyModifyHeaders() {}

  explicit ApplyModifyHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~ApplyModifyHeaders() = default;
};
class ApplyModifyRequestExternalTravelerList : public Darabonba::Model {
public:
  shared_ptr<string> userName{};

  ApplyModifyRequestExternalTravelerList() {}

  explicit ApplyModifyRequestExternalTravelerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~ApplyModifyRequestExternalTravelerList() = default;
};
class ApplyModifyRequestExternalTravelerStandardHotelCitys : public Darabonba::Model {
public:
  shared_ptr<string> cityCode{};
  shared_ptr<string> cityName{};
  shared_ptr<long> fee{};

  ApplyModifyRequestExternalTravelerStandardHotelCitys() {}

  explicit ApplyModifyRequestExternalTravelerStandardHotelCitys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityCode) {
      res["city_code"] = boost::any(*cityCode);
    }
    if (cityName) {
      res["city_name"] = boost::any(*cityName);
    }
    if (fee) {
      res["fee"] = boost::any(*fee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("city_code") != m.end() && !m["city_code"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["city_code"]));
    }
    if (m.find("city_name") != m.end() && !m["city_name"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["city_name"]));
    }
    if (m.find("fee") != m.end() && !m["fee"].empty()) {
      fee = make_shared<long>(boost::any_cast<long>(m["fee"]));
    }
  }


  virtual ~ApplyModifyRequestExternalTravelerStandardHotelCitys() = default;
};
class ApplyModifyRequestExternalTravelerStandard : public Darabonba::Model {
public:
  shared_ptr<long> businessDiscount{};
  shared_ptr<long> economyDiscount{};
  shared_ptr<long> firstDiscount{};
  shared_ptr<string> flightCabins{};
  shared_ptr<vector<ApplyModifyRequestExternalTravelerStandardHotelCitys>> hotelCitys{};
  shared_ptr<long> premiumEconomyDiscount{};
  shared_ptr<long> reserveType{};
  shared_ptr<string> trainSeats{};

  ApplyModifyRequestExternalTravelerStandard() {}

  explicit ApplyModifyRequestExternalTravelerStandard(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessDiscount) {
      res["business_discount"] = boost::any(*businessDiscount);
    }
    if (economyDiscount) {
      res["economy_discount"] = boost::any(*economyDiscount);
    }
    if (firstDiscount) {
      res["first_discount"] = boost::any(*firstDiscount);
    }
    if (flightCabins) {
      res["flight_cabins"] = boost::any(*flightCabins);
    }
    if (hotelCitys) {
      vector<boost::any> temp1;
      for(auto item1:*hotelCitys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hotel_citys"] = boost::any(temp1);
    }
    if (premiumEconomyDiscount) {
      res["premium_economy_discount"] = boost::any(*premiumEconomyDiscount);
    }
    if (reserveType) {
      res["reserve_type"] = boost::any(*reserveType);
    }
    if (trainSeats) {
      res["train_seats"] = boost::any(*trainSeats);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("business_discount") != m.end() && !m["business_discount"].empty()) {
      businessDiscount = make_shared<long>(boost::any_cast<long>(m["business_discount"]));
    }
    if (m.find("economy_discount") != m.end() && !m["economy_discount"].empty()) {
      economyDiscount = make_shared<long>(boost::any_cast<long>(m["economy_discount"]));
    }
    if (m.find("first_discount") != m.end() && !m["first_discount"].empty()) {
      firstDiscount = make_shared<long>(boost::any_cast<long>(m["first_discount"]));
    }
    if (m.find("flight_cabins") != m.end() && !m["flight_cabins"].empty()) {
      flightCabins = make_shared<string>(boost::any_cast<string>(m["flight_cabins"]));
    }
    if (m.find("hotel_citys") != m.end() && !m["hotel_citys"].empty()) {
      if (typeid(vector<boost::any>) == m["hotel_citys"].type()) {
        vector<ApplyModifyRequestExternalTravelerStandardHotelCitys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hotel_citys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyModifyRequestExternalTravelerStandardHotelCitys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hotelCitys = make_shared<vector<ApplyModifyRequestExternalTravelerStandardHotelCitys>>(expect1);
      }
    }
    if (m.find("premium_economy_discount") != m.end() && !m["premium_economy_discount"].empty()) {
      premiumEconomyDiscount = make_shared<long>(boost::any_cast<long>(m["premium_economy_discount"]));
    }
    if (m.find("reserve_type") != m.end() && !m["reserve_type"].empty()) {
      reserveType = make_shared<long>(boost::any_cast<long>(m["reserve_type"]));
    }
    if (m.find("train_seats") != m.end() && !m["train_seats"].empty()) {
      trainSeats = make_shared<string>(boost::any_cast<string>(m["train_seats"]));
    }
  }


  virtual ~ApplyModifyRequestExternalTravelerStandard() = default;
};
class ApplyModifyRequestHotelShare : public Darabonba::Model {
public:
  shared_ptr<string> param{};
  shared_ptr<string> type{};

  ApplyModifyRequestHotelShare() {}

  explicit ApplyModifyRequestHotelShare(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (param) {
      res["param"] = boost::any(*param);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("param") != m.end() && !m["param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["param"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ApplyModifyRequestHotelShare() = default;
};
class ApplyModifyRequestItineraryList : public Darabonba::Model {
public:
  shared_ptr<string> arrCity{};
  shared_ptr<string> arrCityCode{};
  shared_ptr<string> arrDate{};
  shared_ptr<long> costCenterId{};
  shared_ptr<string> depCity{};
  shared_ptr<string> depCityCode{};
  shared_ptr<string> depDate{};
  shared_ptr<long> invoiceId{};
  shared_ptr<string> itineraryId{};
  shared_ptr<bool> needHotel{};
  shared_ptr<bool> needTraffic{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectTitle{};
  shared_ptr<string> thirdPartInvoiceId{};
  shared_ptr<string> thirdpartCostCenterId{};
  shared_ptr<long> trafficType{};
  shared_ptr<long> tripWay{};

  ApplyModifyRequestItineraryList() {}

  explicit ApplyModifyRequestItineraryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrCity) {
      res["arr_city"] = boost::any(*arrCity);
    }
    if (arrCityCode) {
      res["arr_city_code"] = boost::any(*arrCityCode);
    }
    if (arrDate) {
      res["arr_date"] = boost::any(*arrDate);
    }
    if (costCenterId) {
      res["cost_center_id"] = boost::any(*costCenterId);
    }
    if (depCity) {
      res["dep_city"] = boost::any(*depCity);
    }
    if (depCityCode) {
      res["dep_city_code"] = boost::any(*depCityCode);
    }
    if (depDate) {
      res["dep_date"] = boost::any(*depDate);
    }
    if (invoiceId) {
      res["invoice_id"] = boost::any(*invoiceId);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (needHotel) {
      res["need_hotel"] = boost::any(*needHotel);
    }
    if (needTraffic) {
      res["need_traffic"] = boost::any(*needTraffic);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (thirdPartInvoiceId) {
      res["third_part_invoice_id"] = boost::any(*thirdPartInvoiceId);
    }
    if (thirdpartCostCenterId) {
      res["thirdpart_cost_center_id"] = boost::any(*thirdpartCostCenterId);
    }
    if (trafficType) {
      res["traffic_type"] = boost::any(*trafficType);
    }
    if (tripWay) {
      res["trip_way"] = boost::any(*tripWay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_city") != m.end() && !m["arr_city"].empty()) {
      arrCity = make_shared<string>(boost::any_cast<string>(m["arr_city"]));
    }
    if (m.find("arr_city_code") != m.end() && !m["arr_city_code"].empty()) {
      arrCityCode = make_shared<string>(boost::any_cast<string>(m["arr_city_code"]));
    }
    if (m.find("arr_date") != m.end() && !m["arr_date"].empty()) {
      arrDate = make_shared<string>(boost::any_cast<string>(m["arr_date"]));
    }
    if (m.find("cost_center_id") != m.end() && !m["cost_center_id"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["cost_center_id"]));
    }
    if (m.find("dep_city") != m.end() && !m["dep_city"].empty()) {
      depCity = make_shared<string>(boost::any_cast<string>(m["dep_city"]));
    }
    if (m.find("dep_city_code") != m.end() && !m["dep_city_code"].empty()) {
      depCityCode = make_shared<string>(boost::any_cast<string>(m["dep_city_code"]));
    }
    if (m.find("dep_date") != m.end() && !m["dep_date"].empty()) {
      depDate = make_shared<string>(boost::any_cast<string>(m["dep_date"]));
    }
    if (m.find("invoice_id") != m.end() && !m["invoice_id"].empty()) {
      invoiceId = make_shared<long>(boost::any_cast<long>(m["invoice_id"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("need_hotel") != m.end() && !m["need_hotel"].empty()) {
      needHotel = make_shared<bool>(boost::any_cast<bool>(m["need_hotel"]));
    }
    if (m.find("need_traffic") != m.end() && !m["need_traffic"].empty()) {
      needTraffic = make_shared<bool>(boost::any_cast<bool>(m["need_traffic"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("third_part_invoice_id") != m.end() && !m["third_part_invoice_id"].empty()) {
      thirdPartInvoiceId = make_shared<string>(boost::any_cast<string>(m["third_part_invoice_id"]));
    }
    if (m.find("thirdpart_cost_center_id") != m.end() && !m["thirdpart_cost_center_id"].empty()) {
      thirdpartCostCenterId = make_shared<string>(boost::any_cast<string>(m["thirdpart_cost_center_id"]));
    }
    if (m.find("traffic_type") != m.end() && !m["traffic_type"].empty()) {
      trafficType = make_shared<long>(boost::any_cast<long>(m["traffic_type"]));
    }
    if (m.find("trip_way") != m.end() && !m["trip_way"].empty()) {
      tripWay = make_shared<long>(boost::any_cast<long>(m["trip_way"]));
    }
  }


  virtual ~ApplyModifyRequestItineraryList() = default;
};
class ApplyModifyRequestItinerarySetList : public Darabonba::Model {
public:
  shared_ptr<string> arrDate{};
  shared_ptr<string> cityCodeSet{};
  shared_ptr<string> citySet{};
  shared_ptr<long> costCenterId{};
  shared_ptr<string> depDate{};
  shared_ptr<long> invoiceId{};
  shared_ptr<string> itineraryId{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectTitle{};
  shared_ptr<string> thirdPartInvoiceId{};
  shared_ptr<string> thirdpartCostCenterId{};
  shared_ptr<long> trafficType{};

  ApplyModifyRequestItinerarySetList() {}

  explicit ApplyModifyRequestItinerarySetList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrDate) {
      res["arr_date"] = boost::any(*arrDate);
    }
    if (cityCodeSet) {
      res["city_code_set"] = boost::any(*cityCodeSet);
    }
    if (citySet) {
      res["city_set"] = boost::any(*citySet);
    }
    if (costCenterId) {
      res["cost_center_id"] = boost::any(*costCenterId);
    }
    if (depDate) {
      res["dep_date"] = boost::any(*depDate);
    }
    if (invoiceId) {
      res["invoice_id"] = boost::any(*invoiceId);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (thirdPartInvoiceId) {
      res["third_part_invoice_id"] = boost::any(*thirdPartInvoiceId);
    }
    if (thirdpartCostCenterId) {
      res["thirdpart_cost_center_id"] = boost::any(*thirdpartCostCenterId);
    }
    if (trafficType) {
      res["traffic_type"] = boost::any(*trafficType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_date") != m.end() && !m["arr_date"].empty()) {
      arrDate = make_shared<string>(boost::any_cast<string>(m["arr_date"]));
    }
    if (m.find("city_code_set") != m.end() && !m["city_code_set"].empty()) {
      cityCodeSet = make_shared<string>(boost::any_cast<string>(m["city_code_set"]));
    }
    if (m.find("city_set") != m.end() && !m["city_set"].empty()) {
      citySet = make_shared<string>(boost::any_cast<string>(m["city_set"]));
    }
    if (m.find("cost_center_id") != m.end() && !m["cost_center_id"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["cost_center_id"]));
    }
    if (m.find("dep_date") != m.end() && !m["dep_date"].empty()) {
      depDate = make_shared<string>(boost::any_cast<string>(m["dep_date"]));
    }
    if (m.find("invoice_id") != m.end() && !m["invoice_id"].empty()) {
      invoiceId = make_shared<long>(boost::any_cast<long>(m["invoice_id"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("third_part_invoice_id") != m.end() && !m["third_part_invoice_id"].empty()) {
      thirdPartInvoiceId = make_shared<string>(boost::any_cast<string>(m["third_part_invoice_id"]));
    }
    if (m.find("thirdpart_cost_center_id") != m.end() && !m["thirdpart_cost_center_id"].empty()) {
      thirdpartCostCenterId = make_shared<string>(boost::any_cast<string>(m["thirdpart_cost_center_id"]));
    }
    if (m.find("traffic_type") != m.end() && !m["traffic_type"].empty()) {
      trafficType = make_shared<long>(boost::any_cast<long>(m["traffic_type"]));
    }
  }


  virtual ~ApplyModifyRequestItinerarySetList() = default;
};
class ApplyModifyRequestTravelerList : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ApplyModifyRequestTravelerList() {}

  explicit ApplyModifyRequestTravelerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~ApplyModifyRequestTravelerList() = default;
};
class ApplyModifyRequestTravelerStandardHotelCitys : public Darabonba::Model {
public:
  shared_ptr<string> cityCode{};
  shared_ptr<string> cityName{};
  shared_ptr<long> fee{};

  ApplyModifyRequestTravelerStandardHotelCitys() {}

  explicit ApplyModifyRequestTravelerStandardHotelCitys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityCode) {
      res["city_code"] = boost::any(*cityCode);
    }
    if (cityName) {
      res["city_name"] = boost::any(*cityName);
    }
    if (fee) {
      res["fee"] = boost::any(*fee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("city_code") != m.end() && !m["city_code"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["city_code"]));
    }
    if (m.find("city_name") != m.end() && !m["city_name"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["city_name"]));
    }
    if (m.find("fee") != m.end() && !m["fee"].empty()) {
      fee = make_shared<long>(boost::any_cast<long>(m["fee"]));
    }
  }


  virtual ~ApplyModifyRequestTravelerStandardHotelCitys() = default;
};
class ApplyModifyRequestTravelerStandard : public Darabonba::Model {
public:
  shared_ptr<long> businessDiscount{};
  shared_ptr<long> economyDiscount{};
  shared_ptr<long> firstDiscount{};
  shared_ptr<string> flightCabins{};
  shared_ptr<vector<ApplyModifyRequestTravelerStandardHotelCitys>> hotelCitys{};
  shared_ptr<long> premiumEconomyDiscount{};
  shared_ptr<long> reserveType{};
  shared_ptr<string> trainSeats{};
  shared_ptr<string> userId{};

  ApplyModifyRequestTravelerStandard() {}

  explicit ApplyModifyRequestTravelerStandard(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessDiscount) {
      res["business_discount"] = boost::any(*businessDiscount);
    }
    if (economyDiscount) {
      res["economy_discount"] = boost::any(*economyDiscount);
    }
    if (firstDiscount) {
      res["first_discount"] = boost::any(*firstDiscount);
    }
    if (flightCabins) {
      res["flight_cabins"] = boost::any(*flightCabins);
    }
    if (hotelCitys) {
      vector<boost::any> temp1;
      for(auto item1:*hotelCitys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hotel_citys"] = boost::any(temp1);
    }
    if (premiumEconomyDiscount) {
      res["premium_economy_discount"] = boost::any(*premiumEconomyDiscount);
    }
    if (reserveType) {
      res["reserve_type"] = boost::any(*reserveType);
    }
    if (trainSeats) {
      res["train_seats"] = boost::any(*trainSeats);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("business_discount") != m.end() && !m["business_discount"].empty()) {
      businessDiscount = make_shared<long>(boost::any_cast<long>(m["business_discount"]));
    }
    if (m.find("economy_discount") != m.end() && !m["economy_discount"].empty()) {
      economyDiscount = make_shared<long>(boost::any_cast<long>(m["economy_discount"]));
    }
    if (m.find("first_discount") != m.end() && !m["first_discount"].empty()) {
      firstDiscount = make_shared<long>(boost::any_cast<long>(m["first_discount"]));
    }
    if (m.find("flight_cabins") != m.end() && !m["flight_cabins"].empty()) {
      flightCabins = make_shared<string>(boost::any_cast<string>(m["flight_cabins"]));
    }
    if (m.find("hotel_citys") != m.end() && !m["hotel_citys"].empty()) {
      if (typeid(vector<boost::any>) == m["hotel_citys"].type()) {
        vector<ApplyModifyRequestTravelerStandardHotelCitys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hotel_citys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyModifyRequestTravelerStandardHotelCitys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hotelCitys = make_shared<vector<ApplyModifyRequestTravelerStandardHotelCitys>>(expect1);
      }
    }
    if (m.find("premium_economy_discount") != m.end() && !m["premium_economy_discount"].empty()) {
      premiumEconomyDiscount = make_shared<long>(boost::any_cast<long>(m["premium_economy_discount"]));
    }
    if (m.find("reserve_type") != m.end() && !m["reserve_type"].empty()) {
      reserveType = make_shared<long>(boost::any_cast<long>(m["reserve_type"]));
    }
    if (m.find("train_seats") != m.end() && !m["train_seats"].empty()) {
      trainSeats = make_shared<string>(boost::any_cast<string>(m["train_seats"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~ApplyModifyRequestTravelerStandard() = default;
};
class ApplyModifyRequest : public Darabonba::Model {
public:
  shared_ptr<long> budget{};
  shared_ptr<long> budgetMerge{};
  shared_ptr<string> corpName{};
  shared_ptr<string> departId{};
  shared_ptr<string> departName{};
  shared_ptr<vector<ApplyModifyRequestExternalTravelerList>> externalTravelerList{};
  shared_ptr<ApplyModifyRequestExternalTravelerStandard> externalTravelerStandard{};
  shared_ptr<long> flightBudget{};
  shared_ptr<long> hotelBudget{};
  shared_ptr<ApplyModifyRequestHotelShare> hotelShare{};
  shared_ptr<vector<ApplyModifyRequestItineraryList>> itineraryList{};
  shared_ptr<long> itineraryRule{};
  shared_ptr<vector<ApplyModifyRequestItinerarySetList>> itinerarySetList{};
  shared_ptr<long> limitTraveler{};
  shared_ptr<long> status{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartBusinessId{};
  shared_ptr<string> thirdpartDepartId{};
  shared_ptr<long> togetherBookRule{};
  shared_ptr<long> trainBudget{};
  shared_ptr<vector<ApplyModifyRequestTravelerList>> travelerList{};
  shared_ptr<vector<ApplyModifyRequestTravelerStandard>> travelerStandard{};
  shared_ptr<string> tripCause{};
  shared_ptr<long> tripDay{};
  shared_ptr<string> tripTitle{};
  shared_ptr<string> unionNo{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<long> vehicleBudget{};

  ApplyModifyRequest() {}

  explicit ApplyModifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (budget) {
      res["budget"] = boost::any(*budget);
    }
    if (budgetMerge) {
      res["budget_merge"] = boost::any(*budgetMerge);
    }
    if (corpName) {
      res["corp_name"] = boost::any(*corpName);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (departName) {
      res["depart_name"] = boost::any(*departName);
    }
    if (externalTravelerList) {
      vector<boost::any> temp1;
      for(auto item1:*externalTravelerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["external_traveler_list"] = boost::any(temp1);
    }
    if (externalTravelerStandard) {
      res["external_traveler_standard"] = externalTravelerStandard ? boost::any(externalTravelerStandard->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (flightBudget) {
      res["flight_budget"] = boost::any(*flightBudget);
    }
    if (hotelBudget) {
      res["hotel_budget"] = boost::any(*hotelBudget);
    }
    if (hotelShare) {
      res["hotel_share"] = hotelShare ? boost::any(hotelShare->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (itineraryList) {
      vector<boost::any> temp1;
      for(auto item1:*itineraryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["itinerary_list"] = boost::any(temp1);
    }
    if (itineraryRule) {
      res["itinerary_rule"] = boost::any(*itineraryRule);
    }
    if (itinerarySetList) {
      vector<boost::any> temp1;
      for(auto item1:*itinerarySetList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["itinerary_set_list"] = boost::any(temp1);
    }
    if (limitTraveler) {
      res["limit_traveler"] = boost::any(*limitTraveler);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartBusinessId) {
      res["thirdpart_business_id"] = boost::any(*thirdpartBusinessId);
    }
    if (thirdpartDepartId) {
      res["thirdpart_depart_id"] = boost::any(*thirdpartDepartId);
    }
    if (togetherBookRule) {
      res["together_book_rule"] = boost::any(*togetherBookRule);
    }
    if (trainBudget) {
      res["train_budget"] = boost::any(*trainBudget);
    }
    if (travelerList) {
      vector<boost::any> temp1;
      for(auto item1:*travelerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["traveler_list"] = boost::any(temp1);
    }
    if (travelerStandard) {
      vector<boost::any> temp1;
      for(auto item1:*travelerStandard){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["traveler_standard"] = boost::any(temp1);
    }
    if (tripCause) {
      res["trip_cause"] = boost::any(*tripCause);
    }
    if (tripDay) {
      res["trip_day"] = boost::any(*tripDay);
    }
    if (tripTitle) {
      res["trip_title"] = boost::any(*tripTitle);
    }
    if (unionNo) {
      res["union_no"] = boost::any(*unionNo);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    if (vehicleBudget) {
      res["vehicle_budget"] = boost::any(*vehicleBudget);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("budget") != m.end() && !m["budget"].empty()) {
      budget = make_shared<long>(boost::any_cast<long>(m["budget"]));
    }
    if (m.find("budget_merge") != m.end() && !m["budget_merge"].empty()) {
      budgetMerge = make_shared<long>(boost::any_cast<long>(m["budget_merge"]));
    }
    if (m.find("corp_name") != m.end() && !m["corp_name"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["corp_name"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("depart_name") != m.end() && !m["depart_name"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["depart_name"]));
    }
    if (m.find("external_traveler_list") != m.end() && !m["external_traveler_list"].empty()) {
      if (typeid(vector<boost::any>) == m["external_traveler_list"].type()) {
        vector<ApplyModifyRequestExternalTravelerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["external_traveler_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyModifyRequestExternalTravelerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        externalTravelerList = make_shared<vector<ApplyModifyRequestExternalTravelerList>>(expect1);
      }
    }
    if (m.find("external_traveler_standard") != m.end() && !m["external_traveler_standard"].empty()) {
      if (typeid(map<string, boost::any>) == m["external_traveler_standard"].type()) {
        ApplyModifyRequestExternalTravelerStandard model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["external_traveler_standard"]));
        externalTravelerStandard = make_shared<ApplyModifyRequestExternalTravelerStandard>(model1);
      }
    }
    if (m.find("flight_budget") != m.end() && !m["flight_budget"].empty()) {
      flightBudget = make_shared<long>(boost::any_cast<long>(m["flight_budget"]));
    }
    if (m.find("hotel_budget") != m.end() && !m["hotel_budget"].empty()) {
      hotelBudget = make_shared<long>(boost::any_cast<long>(m["hotel_budget"]));
    }
    if (m.find("hotel_share") != m.end() && !m["hotel_share"].empty()) {
      if (typeid(map<string, boost::any>) == m["hotel_share"].type()) {
        ApplyModifyRequestHotelShare model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["hotel_share"]));
        hotelShare = make_shared<ApplyModifyRequestHotelShare>(model1);
      }
    }
    if (m.find("itinerary_list") != m.end() && !m["itinerary_list"].empty()) {
      if (typeid(vector<boost::any>) == m["itinerary_list"].type()) {
        vector<ApplyModifyRequestItineraryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["itinerary_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyModifyRequestItineraryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itineraryList = make_shared<vector<ApplyModifyRequestItineraryList>>(expect1);
      }
    }
    if (m.find("itinerary_rule") != m.end() && !m["itinerary_rule"].empty()) {
      itineraryRule = make_shared<long>(boost::any_cast<long>(m["itinerary_rule"]));
    }
    if (m.find("itinerary_set_list") != m.end() && !m["itinerary_set_list"].empty()) {
      if (typeid(vector<boost::any>) == m["itinerary_set_list"].type()) {
        vector<ApplyModifyRequestItinerarySetList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["itinerary_set_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyModifyRequestItinerarySetList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itinerarySetList = make_shared<vector<ApplyModifyRequestItinerarySetList>>(expect1);
      }
    }
    if (m.find("limit_traveler") != m.end() && !m["limit_traveler"].empty()) {
      limitTraveler = make_shared<long>(boost::any_cast<long>(m["limit_traveler"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_business_id") != m.end() && !m["thirdpart_business_id"].empty()) {
      thirdpartBusinessId = make_shared<string>(boost::any_cast<string>(m["thirdpart_business_id"]));
    }
    if (m.find("thirdpart_depart_id") != m.end() && !m["thirdpart_depart_id"].empty()) {
      thirdpartDepartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_depart_id"]));
    }
    if (m.find("together_book_rule") != m.end() && !m["together_book_rule"].empty()) {
      togetherBookRule = make_shared<long>(boost::any_cast<long>(m["together_book_rule"]));
    }
    if (m.find("train_budget") != m.end() && !m["train_budget"].empty()) {
      trainBudget = make_shared<long>(boost::any_cast<long>(m["train_budget"]));
    }
    if (m.find("traveler_list") != m.end() && !m["traveler_list"].empty()) {
      if (typeid(vector<boost::any>) == m["traveler_list"].type()) {
        vector<ApplyModifyRequestTravelerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["traveler_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyModifyRequestTravelerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        travelerList = make_shared<vector<ApplyModifyRequestTravelerList>>(expect1);
      }
    }
    if (m.find("traveler_standard") != m.end() && !m["traveler_standard"].empty()) {
      if (typeid(vector<boost::any>) == m["traveler_standard"].type()) {
        vector<ApplyModifyRequestTravelerStandard> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["traveler_standard"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyModifyRequestTravelerStandard model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        travelerStandard = make_shared<vector<ApplyModifyRequestTravelerStandard>>(expect1);
      }
    }
    if (m.find("trip_cause") != m.end() && !m["trip_cause"].empty()) {
      tripCause = make_shared<string>(boost::any_cast<string>(m["trip_cause"]));
    }
    if (m.find("trip_day") != m.end() && !m["trip_day"].empty()) {
      tripDay = make_shared<long>(boost::any_cast<long>(m["trip_day"]));
    }
    if (m.find("trip_title") != m.end() && !m["trip_title"].empty()) {
      tripTitle = make_shared<string>(boost::any_cast<string>(m["trip_title"]));
    }
    if (m.find("union_no") != m.end() && !m["union_no"].empty()) {
      unionNo = make_shared<string>(boost::any_cast<string>(m["union_no"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
    if (m.find("vehicle_budget") != m.end() && !m["vehicle_budget"].empty()) {
      vehicleBudget = make_shared<long>(boost::any_cast<long>(m["vehicle_budget"]));
    }
  }


  virtual ~ApplyModifyRequest() = default;
};
class ApplyModifyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> budget{};
  shared_ptr<long> budgetMerge{};
  shared_ptr<string> corpName{};
  shared_ptr<string> departId{};
  shared_ptr<string> departName{};
  shared_ptr<string> externalTravelerListShrink{};
  shared_ptr<string> externalTravelerStandardShrink{};
  shared_ptr<long> flightBudget{};
  shared_ptr<long> hotelBudget{};
  shared_ptr<string> hotelShareShrink{};
  shared_ptr<string> itineraryListShrink{};
  shared_ptr<long> itineraryRule{};
  shared_ptr<string> itinerarySetListShrink{};
  shared_ptr<long> limitTraveler{};
  shared_ptr<long> status{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartBusinessId{};
  shared_ptr<string> thirdpartDepartId{};
  shared_ptr<long> togetherBookRule{};
  shared_ptr<long> trainBudget{};
  shared_ptr<string> travelerListShrink{};
  shared_ptr<string> travelerStandardShrink{};
  shared_ptr<string> tripCause{};
  shared_ptr<long> tripDay{};
  shared_ptr<string> tripTitle{};
  shared_ptr<string> unionNo{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<long> vehicleBudget{};

  ApplyModifyShrinkRequest() {}

  explicit ApplyModifyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (budget) {
      res["budget"] = boost::any(*budget);
    }
    if (budgetMerge) {
      res["budget_merge"] = boost::any(*budgetMerge);
    }
    if (corpName) {
      res["corp_name"] = boost::any(*corpName);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (departName) {
      res["depart_name"] = boost::any(*departName);
    }
    if (externalTravelerListShrink) {
      res["external_traveler_list"] = boost::any(*externalTravelerListShrink);
    }
    if (externalTravelerStandardShrink) {
      res["external_traveler_standard"] = boost::any(*externalTravelerStandardShrink);
    }
    if (flightBudget) {
      res["flight_budget"] = boost::any(*flightBudget);
    }
    if (hotelBudget) {
      res["hotel_budget"] = boost::any(*hotelBudget);
    }
    if (hotelShareShrink) {
      res["hotel_share"] = boost::any(*hotelShareShrink);
    }
    if (itineraryListShrink) {
      res["itinerary_list"] = boost::any(*itineraryListShrink);
    }
    if (itineraryRule) {
      res["itinerary_rule"] = boost::any(*itineraryRule);
    }
    if (itinerarySetListShrink) {
      res["itinerary_set_list"] = boost::any(*itinerarySetListShrink);
    }
    if (limitTraveler) {
      res["limit_traveler"] = boost::any(*limitTraveler);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartBusinessId) {
      res["thirdpart_business_id"] = boost::any(*thirdpartBusinessId);
    }
    if (thirdpartDepartId) {
      res["thirdpart_depart_id"] = boost::any(*thirdpartDepartId);
    }
    if (togetherBookRule) {
      res["together_book_rule"] = boost::any(*togetherBookRule);
    }
    if (trainBudget) {
      res["train_budget"] = boost::any(*trainBudget);
    }
    if (travelerListShrink) {
      res["traveler_list"] = boost::any(*travelerListShrink);
    }
    if (travelerStandardShrink) {
      res["traveler_standard"] = boost::any(*travelerStandardShrink);
    }
    if (tripCause) {
      res["trip_cause"] = boost::any(*tripCause);
    }
    if (tripDay) {
      res["trip_day"] = boost::any(*tripDay);
    }
    if (tripTitle) {
      res["trip_title"] = boost::any(*tripTitle);
    }
    if (unionNo) {
      res["union_no"] = boost::any(*unionNo);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    if (vehicleBudget) {
      res["vehicle_budget"] = boost::any(*vehicleBudget);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("budget") != m.end() && !m["budget"].empty()) {
      budget = make_shared<long>(boost::any_cast<long>(m["budget"]));
    }
    if (m.find("budget_merge") != m.end() && !m["budget_merge"].empty()) {
      budgetMerge = make_shared<long>(boost::any_cast<long>(m["budget_merge"]));
    }
    if (m.find("corp_name") != m.end() && !m["corp_name"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["corp_name"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("depart_name") != m.end() && !m["depart_name"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["depart_name"]));
    }
    if (m.find("external_traveler_list") != m.end() && !m["external_traveler_list"].empty()) {
      externalTravelerListShrink = make_shared<string>(boost::any_cast<string>(m["external_traveler_list"]));
    }
    if (m.find("external_traveler_standard") != m.end() && !m["external_traveler_standard"].empty()) {
      externalTravelerStandardShrink = make_shared<string>(boost::any_cast<string>(m["external_traveler_standard"]));
    }
    if (m.find("flight_budget") != m.end() && !m["flight_budget"].empty()) {
      flightBudget = make_shared<long>(boost::any_cast<long>(m["flight_budget"]));
    }
    if (m.find("hotel_budget") != m.end() && !m["hotel_budget"].empty()) {
      hotelBudget = make_shared<long>(boost::any_cast<long>(m["hotel_budget"]));
    }
    if (m.find("hotel_share") != m.end() && !m["hotel_share"].empty()) {
      hotelShareShrink = make_shared<string>(boost::any_cast<string>(m["hotel_share"]));
    }
    if (m.find("itinerary_list") != m.end() && !m["itinerary_list"].empty()) {
      itineraryListShrink = make_shared<string>(boost::any_cast<string>(m["itinerary_list"]));
    }
    if (m.find("itinerary_rule") != m.end() && !m["itinerary_rule"].empty()) {
      itineraryRule = make_shared<long>(boost::any_cast<long>(m["itinerary_rule"]));
    }
    if (m.find("itinerary_set_list") != m.end() && !m["itinerary_set_list"].empty()) {
      itinerarySetListShrink = make_shared<string>(boost::any_cast<string>(m["itinerary_set_list"]));
    }
    if (m.find("limit_traveler") != m.end() && !m["limit_traveler"].empty()) {
      limitTraveler = make_shared<long>(boost::any_cast<long>(m["limit_traveler"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_business_id") != m.end() && !m["thirdpart_business_id"].empty()) {
      thirdpartBusinessId = make_shared<string>(boost::any_cast<string>(m["thirdpart_business_id"]));
    }
    if (m.find("thirdpart_depart_id") != m.end() && !m["thirdpart_depart_id"].empty()) {
      thirdpartDepartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_depart_id"]));
    }
    if (m.find("together_book_rule") != m.end() && !m["together_book_rule"].empty()) {
      togetherBookRule = make_shared<long>(boost::any_cast<long>(m["together_book_rule"]));
    }
    if (m.find("train_budget") != m.end() && !m["train_budget"].empty()) {
      trainBudget = make_shared<long>(boost::any_cast<long>(m["train_budget"]));
    }
    if (m.find("traveler_list") != m.end() && !m["traveler_list"].empty()) {
      travelerListShrink = make_shared<string>(boost::any_cast<string>(m["traveler_list"]));
    }
    if (m.find("traveler_standard") != m.end() && !m["traveler_standard"].empty()) {
      travelerStandardShrink = make_shared<string>(boost::any_cast<string>(m["traveler_standard"]));
    }
    if (m.find("trip_cause") != m.end() && !m["trip_cause"].empty()) {
      tripCause = make_shared<string>(boost::any_cast<string>(m["trip_cause"]));
    }
    if (m.find("trip_day") != m.end() && !m["trip_day"].empty()) {
      tripDay = make_shared<long>(boost::any_cast<long>(m["trip_day"]));
    }
    if (m.find("trip_title") != m.end() && !m["trip_title"].empty()) {
      tripTitle = make_shared<string>(boost::any_cast<string>(m["trip_title"]));
    }
    if (m.find("union_no") != m.end() && !m["union_no"].empty()) {
      unionNo = make_shared<string>(boost::any_cast<string>(m["union_no"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
    if (m.find("vehicle_budget") != m.end() && !m["vehicle_budget"].empty()) {
      vehicleBudget = make_shared<long>(boost::any_cast<long>(m["vehicle_budget"]));
    }
  }


  virtual ~ApplyModifyShrinkRequest() = default;
};
class ApplyModifyResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartBusinessId{};

  ApplyModifyResponseBodyModule() {}

  explicit ApplyModifyResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartBusinessId) {
      res["thirdpart_business_id"] = boost::any(*thirdpartBusinessId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_business_id") != m.end() && !m["thirdpart_business_id"].empty()) {
      thirdpartBusinessId = make_shared<string>(boost::any_cast<string>(m["thirdpart_business_id"]));
    }
  }


  virtual ~ApplyModifyResponseBodyModule() = default;
};
class ApplyModifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<ApplyModifyResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ApplyModifyResponseBody() {}

  explicit ApplyModifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        ApplyModifyResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<ApplyModifyResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~ApplyModifyResponseBody() = default;
};
class ApplyModifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyModifyResponseBody> body{};

  ApplyModifyResponse() {}

  explicit ApplyModifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyModifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyModifyResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyModifyResponse() = default;
};
class ApplyQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  ApplyQueryHeaders() {}

  explicit ApplyQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~ApplyQueryHeaders() = default;
};
class ApplyQueryRequest : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};
  shared_ptr<string> applyShowId{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<long> type{};

  ApplyQueryRequest() {}

  explicit ApplyQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (applyShowId) {
      res["apply_show_id"] = boost::any(*applyShowId);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("apply_show_id") != m.end() && !m["apply_show_id"].empty()) {
      applyShowId = make_shared<string>(boost::any_cast<string>(m["apply_show_id"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~ApplyQueryRequest() = default;
};
class ApplyQueryResponseBodyModuleApproverList : public Darabonba::Model {
public:
  shared_ptr<string> note{};
  shared_ptr<string> operateTime{};
  shared_ptr<long> order{};
  shared_ptr<long> status{};
  shared_ptr<string> statusDesc{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ApplyQueryResponseBodyModuleApproverList() {}

  explicit ApplyQueryResponseBodyModuleApproverList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (note) {
      res["note"] = boost::any(*note);
    }
    if (operateTime) {
      res["operate_time"] = boost::any(*operateTime);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusDesc) {
      res["status_desc"] = boost::any(*statusDesc);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("note") != m.end() && !m["note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["note"]));
    }
    if (m.find("operate_time") != m.end() && !m["operate_time"].empty()) {
      operateTime = make_shared<string>(boost::any_cast<string>(m["operate_time"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("status_desc") != m.end() && !m["status_desc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["status_desc"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~ApplyQueryResponseBodyModuleApproverList() = default;
};
class ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys : public Darabonba::Model {
public:
  shared_ptr<string> cityCode{};
  shared_ptr<string> cityName{};
  shared_ptr<long> fee{};

  ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys() {}

  explicit ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityCode) {
      res["city_code"] = boost::any(*cityCode);
    }
    if (cityName) {
      res["city_name"] = boost::any(*cityName);
    }
    if (fee) {
      res["fee"] = boost::any(*fee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("city_code") != m.end() && !m["city_code"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["city_code"]));
    }
    if (m.find("city_name") != m.end() && !m["city_name"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["city_name"]));
    }
    if (m.find("fee") != m.end() && !m["fee"].empty()) {
      fee = make_shared<long>(boost::any_cast<long>(m["fee"]));
    }
  }


  virtual ~ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys() = default;
};
class ApplyQueryResponseBodyModuleExternalTravelerList : public Darabonba::Model {
public:
  shared_ptr<long> businessDiscount{};
  shared_ptr<long> economyDiscount{};
  shared_ptr<long> firstDiscount{};
  shared_ptr<string> flightCabins{};
  shared_ptr<vector<ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys>> hotelCitys{};
  shared_ptr<long> premiumEconomyDiscount{};
  shared_ptr<long> reserveType{};
  shared_ptr<string> trainSeats{};
  shared_ptr<string> userName{};

  ApplyQueryResponseBodyModuleExternalTravelerList() {}

  explicit ApplyQueryResponseBodyModuleExternalTravelerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessDiscount) {
      res["business_discount"] = boost::any(*businessDiscount);
    }
    if (economyDiscount) {
      res["economy_discount"] = boost::any(*economyDiscount);
    }
    if (firstDiscount) {
      res["first_discount"] = boost::any(*firstDiscount);
    }
    if (flightCabins) {
      res["flight_cabins"] = boost::any(*flightCabins);
    }
    if (hotelCitys) {
      vector<boost::any> temp1;
      for(auto item1:*hotelCitys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hotel_citys"] = boost::any(temp1);
    }
    if (premiumEconomyDiscount) {
      res["premium_economy_discount"] = boost::any(*premiumEconomyDiscount);
    }
    if (reserveType) {
      res["reserve_type"] = boost::any(*reserveType);
    }
    if (trainSeats) {
      res["train_seats"] = boost::any(*trainSeats);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("business_discount") != m.end() && !m["business_discount"].empty()) {
      businessDiscount = make_shared<long>(boost::any_cast<long>(m["business_discount"]));
    }
    if (m.find("economy_discount") != m.end() && !m["economy_discount"].empty()) {
      economyDiscount = make_shared<long>(boost::any_cast<long>(m["economy_discount"]));
    }
    if (m.find("first_discount") != m.end() && !m["first_discount"].empty()) {
      firstDiscount = make_shared<long>(boost::any_cast<long>(m["first_discount"]));
    }
    if (m.find("flight_cabins") != m.end() && !m["flight_cabins"].empty()) {
      flightCabins = make_shared<string>(boost::any_cast<string>(m["flight_cabins"]));
    }
    if (m.find("hotel_citys") != m.end() && !m["hotel_citys"].empty()) {
      if (typeid(vector<boost::any>) == m["hotel_citys"].type()) {
        vector<ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hotel_citys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hotelCitys = make_shared<vector<ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys>>(expect1);
      }
    }
    if (m.find("premium_economy_discount") != m.end() && !m["premium_economy_discount"].empty()) {
      premiumEconomyDiscount = make_shared<long>(boost::any_cast<long>(m["premium_economy_discount"]));
    }
    if (m.find("reserve_type") != m.end() && !m["reserve_type"].empty()) {
      reserveType = make_shared<long>(boost::any_cast<long>(m["reserve_type"]));
    }
    if (m.find("train_seats") != m.end() && !m["train_seats"].empty()) {
      trainSeats = make_shared<string>(boost::any_cast<string>(m["train_seats"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~ApplyQueryResponseBodyModuleExternalTravelerList() = default;
};
class ApplyQueryResponseBodyModuleHotelShare : public Darabonba::Model {
public:
  shared_ptr<string> param{};
  shared_ptr<string> type{};

  ApplyQueryResponseBodyModuleHotelShare() {}

  explicit ApplyQueryResponseBodyModuleHotelShare(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (param) {
      res["param"] = boost::any(*param);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("param") != m.end() && !m["param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["param"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ApplyQueryResponseBodyModuleHotelShare() = default;
};
class ApplyQueryResponseBodyModuleItineraryList : public Darabonba::Model {
public:
  shared_ptr<string> arrCity{};
  shared_ptr<string> arrCityCode{};
  shared_ptr<string> arrDate{};
  shared_ptr<string> costCenterName{};
  shared_ptr<string> depCity{};
  shared_ptr<string> depCityCode{};
  shared_ptr<string> depDate{};
  shared_ptr<string> invoiceName{};
  shared_ptr<string> itineraryId{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectTitle{};
  shared_ptr<long> trafficType{};
  shared_ptr<long> tripWay{};

  ApplyQueryResponseBodyModuleItineraryList() {}

  explicit ApplyQueryResponseBodyModuleItineraryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrCity) {
      res["arr_city"] = boost::any(*arrCity);
    }
    if (arrCityCode) {
      res["arr_city_code"] = boost::any(*arrCityCode);
    }
    if (arrDate) {
      res["arr_date"] = boost::any(*arrDate);
    }
    if (costCenterName) {
      res["cost_center_name"] = boost::any(*costCenterName);
    }
    if (depCity) {
      res["dep_city"] = boost::any(*depCity);
    }
    if (depCityCode) {
      res["dep_city_code"] = boost::any(*depCityCode);
    }
    if (depDate) {
      res["dep_date"] = boost::any(*depDate);
    }
    if (invoiceName) {
      res["invoice_name"] = boost::any(*invoiceName);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (trafficType) {
      res["traffic_type"] = boost::any(*trafficType);
    }
    if (tripWay) {
      res["trip_way"] = boost::any(*tripWay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_city") != m.end() && !m["arr_city"].empty()) {
      arrCity = make_shared<string>(boost::any_cast<string>(m["arr_city"]));
    }
    if (m.find("arr_city_code") != m.end() && !m["arr_city_code"].empty()) {
      arrCityCode = make_shared<string>(boost::any_cast<string>(m["arr_city_code"]));
    }
    if (m.find("arr_date") != m.end() && !m["arr_date"].empty()) {
      arrDate = make_shared<string>(boost::any_cast<string>(m["arr_date"]));
    }
    if (m.find("cost_center_name") != m.end() && !m["cost_center_name"].empty()) {
      costCenterName = make_shared<string>(boost::any_cast<string>(m["cost_center_name"]));
    }
    if (m.find("dep_city") != m.end() && !m["dep_city"].empty()) {
      depCity = make_shared<string>(boost::any_cast<string>(m["dep_city"]));
    }
    if (m.find("dep_city_code") != m.end() && !m["dep_city_code"].empty()) {
      depCityCode = make_shared<string>(boost::any_cast<string>(m["dep_city_code"]));
    }
    if (m.find("dep_date") != m.end() && !m["dep_date"].empty()) {
      depDate = make_shared<string>(boost::any_cast<string>(m["dep_date"]));
    }
    if (m.find("invoice_name") != m.end() && !m["invoice_name"].empty()) {
      invoiceName = make_shared<string>(boost::any_cast<string>(m["invoice_name"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("traffic_type") != m.end() && !m["traffic_type"].empty()) {
      trafficType = make_shared<long>(boost::any_cast<long>(m["traffic_type"]));
    }
    if (m.find("trip_way") != m.end() && !m["trip_way"].empty()) {
      tripWay = make_shared<long>(boost::any_cast<long>(m["trip_way"]));
    }
  }


  virtual ~ApplyQueryResponseBodyModuleItineraryList() = default;
};
class ApplyQueryResponseBodyModuleItinerarySetList : public Darabonba::Model {
public:
  shared_ptr<string> arrDate{};
  shared_ptr<string> cityCodeSet{};
  shared_ptr<string> citySet{};
  shared_ptr<string> costCenterName{};
  shared_ptr<string> depDate{};
  shared_ptr<string> invoiceName{};
  shared_ptr<string> itineraryId{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectTitle{};
  shared_ptr<long> trafficType{};

  ApplyQueryResponseBodyModuleItinerarySetList() {}

  explicit ApplyQueryResponseBodyModuleItinerarySetList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrDate) {
      res["arr_date"] = boost::any(*arrDate);
    }
    if (cityCodeSet) {
      res["city_code_set"] = boost::any(*cityCodeSet);
    }
    if (citySet) {
      res["city_set"] = boost::any(*citySet);
    }
    if (costCenterName) {
      res["cost_center_name"] = boost::any(*costCenterName);
    }
    if (depDate) {
      res["dep_date"] = boost::any(*depDate);
    }
    if (invoiceName) {
      res["invoice_name"] = boost::any(*invoiceName);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (trafficType) {
      res["traffic_type"] = boost::any(*trafficType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_date") != m.end() && !m["arr_date"].empty()) {
      arrDate = make_shared<string>(boost::any_cast<string>(m["arr_date"]));
    }
    if (m.find("city_code_set") != m.end() && !m["city_code_set"].empty()) {
      cityCodeSet = make_shared<string>(boost::any_cast<string>(m["city_code_set"]));
    }
    if (m.find("city_set") != m.end() && !m["city_set"].empty()) {
      citySet = make_shared<string>(boost::any_cast<string>(m["city_set"]));
    }
    if (m.find("cost_center_name") != m.end() && !m["cost_center_name"].empty()) {
      costCenterName = make_shared<string>(boost::any_cast<string>(m["cost_center_name"]));
    }
    if (m.find("dep_date") != m.end() && !m["dep_date"].empty()) {
      depDate = make_shared<string>(boost::any_cast<string>(m["dep_date"]));
    }
    if (m.find("invoice_name") != m.end() && !m["invoice_name"].empty()) {
      invoiceName = make_shared<string>(boost::any_cast<string>(m["invoice_name"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("traffic_type") != m.end() && !m["traffic_type"].empty()) {
      trafficType = make_shared<long>(boost::any_cast<long>(m["traffic_type"]));
    }
  }


  virtual ~ApplyQueryResponseBodyModuleItinerarySetList() = default;
};
class ApplyQueryResponseBodyModuleTravelerListHotelCitys : public Darabonba::Model {
public:
  shared_ptr<string> cityCode{};
  shared_ptr<string> cityName{};
  shared_ptr<long> fee{};

  ApplyQueryResponseBodyModuleTravelerListHotelCitys() {}

  explicit ApplyQueryResponseBodyModuleTravelerListHotelCitys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityCode) {
      res["city_code"] = boost::any(*cityCode);
    }
    if (cityName) {
      res["city_name"] = boost::any(*cityName);
    }
    if (fee) {
      res["fee"] = boost::any(*fee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("city_code") != m.end() && !m["city_code"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["city_code"]));
    }
    if (m.find("city_name") != m.end() && !m["city_name"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["city_name"]));
    }
    if (m.find("fee") != m.end() && !m["fee"].empty()) {
      fee = make_shared<long>(boost::any_cast<long>(m["fee"]));
    }
  }


  virtual ~ApplyQueryResponseBodyModuleTravelerListHotelCitys() = default;
};
class ApplyQueryResponseBodyModuleTravelerList : public Darabonba::Model {
public:
  shared_ptr<long> businessDiscount{};
  shared_ptr<long> economyDiscount{};
  shared_ptr<long> firstDiscount{};
  shared_ptr<string> flightCabins{};
  shared_ptr<vector<ApplyQueryResponseBodyModuleTravelerListHotelCitys>> hotelCitys{};
  shared_ptr<long> premiumEconomyDiscount{};
  shared_ptr<long> reserveType{};
  shared_ptr<string> trainSeats{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ApplyQueryResponseBodyModuleTravelerList() {}

  explicit ApplyQueryResponseBodyModuleTravelerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessDiscount) {
      res["business_discount"] = boost::any(*businessDiscount);
    }
    if (economyDiscount) {
      res["economy_discount"] = boost::any(*economyDiscount);
    }
    if (firstDiscount) {
      res["first_discount"] = boost::any(*firstDiscount);
    }
    if (flightCabins) {
      res["flight_cabins"] = boost::any(*flightCabins);
    }
    if (hotelCitys) {
      vector<boost::any> temp1;
      for(auto item1:*hotelCitys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hotel_citys"] = boost::any(temp1);
    }
    if (premiumEconomyDiscount) {
      res["premium_economy_discount"] = boost::any(*premiumEconomyDiscount);
    }
    if (reserveType) {
      res["reserve_type"] = boost::any(*reserveType);
    }
    if (trainSeats) {
      res["train_seats"] = boost::any(*trainSeats);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("business_discount") != m.end() && !m["business_discount"].empty()) {
      businessDiscount = make_shared<long>(boost::any_cast<long>(m["business_discount"]));
    }
    if (m.find("economy_discount") != m.end() && !m["economy_discount"].empty()) {
      economyDiscount = make_shared<long>(boost::any_cast<long>(m["economy_discount"]));
    }
    if (m.find("first_discount") != m.end() && !m["first_discount"].empty()) {
      firstDiscount = make_shared<long>(boost::any_cast<long>(m["first_discount"]));
    }
    if (m.find("flight_cabins") != m.end() && !m["flight_cabins"].empty()) {
      flightCabins = make_shared<string>(boost::any_cast<string>(m["flight_cabins"]));
    }
    if (m.find("hotel_citys") != m.end() && !m["hotel_citys"].empty()) {
      if (typeid(vector<boost::any>) == m["hotel_citys"].type()) {
        vector<ApplyQueryResponseBodyModuleTravelerListHotelCitys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hotel_citys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyQueryResponseBodyModuleTravelerListHotelCitys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hotelCitys = make_shared<vector<ApplyQueryResponseBodyModuleTravelerListHotelCitys>>(expect1);
      }
    }
    if (m.find("premium_economy_discount") != m.end() && !m["premium_economy_discount"].empty()) {
      premiumEconomyDiscount = make_shared<long>(boost::any_cast<long>(m["premium_economy_discount"]));
    }
    if (m.find("reserve_type") != m.end() && !m["reserve_type"].empty()) {
      reserveType = make_shared<long>(boost::any_cast<long>(m["reserve_type"]));
    }
    if (m.find("train_seats") != m.end() && !m["train_seats"].empty()) {
      trainSeats = make_shared<string>(boost::any_cast<string>(m["train_seats"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~ApplyQueryResponseBodyModuleTravelerList() = default;
};
class ApplyQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<string> applyShowId{};
  shared_ptr<vector<ApplyQueryResponseBodyModuleApproverList>> approverList{};
  shared_ptr<long> budget{};
  shared_ptr<long> budgetMerge{};
  shared_ptr<string> corpId{};
  shared_ptr<string> corpName{};
  shared_ptr<string> departId{};
  shared_ptr<string> departName{};
  shared_ptr<vector<ApplyQueryResponseBodyModuleExternalTravelerList>> externalTravelerList{};
  shared_ptr<long> flightBudget{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> hotelBudget{};
  shared_ptr<ApplyQueryResponseBodyModuleHotelShare> hotelShare{};
  shared_ptr<long> id{};
  shared_ptr<vector<ApplyQueryResponseBodyModuleItineraryList>> itineraryList{};
  shared_ptr<long> itineraryRule{};
  shared_ptr<vector<ApplyQueryResponseBodyModuleItinerarySetList>> itinerarySetList{};
  shared_ptr<long> limitTraveler{};
  shared_ptr<long> status{};
  shared_ptr<string> statusDesc{};
  shared_ptr<string> thirdpartBusinessId{};
  shared_ptr<string> thirdpartId{};
  shared_ptr<long> togetherBookRule{};
  shared_ptr<long> trainBudget{};
  shared_ptr<vector<ApplyQueryResponseBodyModuleTravelerList>> travelerList{};
  shared_ptr<string> tripCause{};
  shared_ptr<long> tripDay{};
  shared_ptr<string> tripTitle{};
  shared_ptr<long> type{};
  shared_ptr<string> unionNo{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<long> vehicleBudget{};

  ApplyQueryResponseBodyModule() {}

  explicit ApplyQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyShowId) {
      res["apply_show_id"] = boost::any(*applyShowId);
    }
    if (approverList) {
      vector<boost::any> temp1;
      for(auto item1:*approverList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["approver_list"] = boost::any(temp1);
    }
    if (budget) {
      res["budget"] = boost::any(*budget);
    }
    if (budgetMerge) {
      res["budget_merge"] = boost::any(*budgetMerge);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (corpName) {
      res["corp_name"] = boost::any(*corpName);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (departName) {
      res["depart_name"] = boost::any(*departName);
    }
    if (externalTravelerList) {
      vector<boost::any> temp1;
      for(auto item1:*externalTravelerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["external_traveler_list"] = boost::any(temp1);
    }
    if (flightBudget) {
      res["flight_budget"] = boost::any(*flightBudget);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmt_modified"] = boost::any(*gmtModified);
    }
    if (hotelBudget) {
      res["hotel_budget"] = boost::any(*hotelBudget);
    }
    if (hotelShare) {
      res["hotel_share"] = hotelShare ? boost::any(hotelShare->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (itineraryList) {
      vector<boost::any> temp1;
      for(auto item1:*itineraryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["itinerary_list"] = boost::any(temp1);
    }
    if (itineraryRule) {
      res["itinerary_rule"] = boost::any(*itineraryRule);
    }
    if (itinerarySetList) {
      vector<boost::any> temp1;
      for(auto item1:*itinerarySetList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["itinerary_set_list"] = boost::any(temp1);
    }
    if (limitTraveler) {
      res["limit_traveler"] = boost::any(*limitTraveler);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusDesc) {
      res["status_desc"] = boost::any(*statusDesc);
    }
    if (thirdpartBusinessId) {
      res["thirdpart_business_id"] = boost::any(*thirdpartBusinessId);
    }
    if (thirdpartId) {
      res["thirdpart_id"] = boost::any(*thirdpartId);
    }
    if (togetherBookRule) {
      res["together_book_rule"] = boost::any(*togetherBookRule);
    }
    if (trainBudget) {
      res["train_budget"] = boost::any(*trainBudget);
    }
    if (travelerList) {
      vector<boost::any> temp1;
      for(auto item1:*travelerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["traveler_list"] = boost::any(temp1);
    }
    if (tripCause) {
      res["trip_cause"] = boost::any(*tripCause);
    }
    if (tripDay) {
      res["trip_day"] = boost::any(*tripDay);
    }
    if (tripTitle) {
      res["trip_title"] = boost::any(*tripTitle);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (unionNo) {
      res["union_no"] = boost::any(*unionNo);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    if (vehicleBudget) {
      res["vehicle_budget"] = boost::any(*vehicleBudget);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_show_id") != m.end() && !m["apply_show_id"].empty()) {
      applyShowId = make_shared<string>(boost::any_cast<string>(m["apply_show_id"]));
    }
    if (m.find("approver_list") != m.end() && !m["approver_list"].empty()) {
      if (typeid(vector<boost::any>) == m["approver_list"].type()) {
        vector<ApplyQueryResponseBodyModuleApproverList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["approver_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyQueryResponseBodyModuleApproverList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        approverList = make_shared<vector<ApplyQueryResponseBodyModuleApproverList>>(expect1);
      }
    }
    if (m.find("budget") != m.end() && !m["budget"].empty()) {
      budget = make_shared<long>(boost::any_cast<long>(m["budget"]));
    }
    if (m.find("budget_merge") != m.end() && !m["budget_merge"].empty()) {
      budgetMerge = make_shared<long>(boost::any_cast<long>(m["budget_merge"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("corp_name") != m.end() && !m["corp_name"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["corp_name"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("depart_name") != m.end() && !m["depart_name"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["depart_name"]));
    }
    if (m.find("external_traveler_list") != m.end() && !m["external_traveler_list"].empty()) {
      if (typeid(vector<boost::any>) == m["external_traveler_list"].type()) {
        vector<ApplyQueryResponseBodyModuleExternalTravelerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["external_traveler_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyQueryResponseBodyModuleExternalTravelerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        externalTravelerList = make_shared<vector<ApplyQueryResponseBodyModuleExternalTravelerList>>(expect1);
      }
    }
    if (m.find("flight_budget") != m.end() && !m["flight_budget"].empty()) {
      flightBudget = make_shared<long>(boost::any_cast<long>(m["flight_budget"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("gmt_modified") != m.end() && !m["gmt_modified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmt_modified"]));
    }
    if (m.find("hotel_budget") != m.end() && !m["hotel_budget"].empty()) {
      hotelBudget = make_shared<long>(boost::any_cast<long>(m["hotel_budget"]));
    }
    if (m.find("hotel_share") != m.end() && !m["hotel_share"].empty()) {
      if (typeid(map<string, boost::any>) == m["hotel_share"].type()) {
        ApplyQueryResponseBodyModuleHotelShare model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["hotel_share"]));
        hotelShare = make_shared<ApplyQueryResponseBodyModuleHotelShare>(model1);
      }
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("itinerary_list") != m.end() && !m["itinerary_list"].empty()) {
      if (typeid(vector<boost::any>) == m["itinerary_list"].type()) {
        vector<ApplyQueryResponseBodyModuleItineraryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["itinerary_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyQueryResponseBodyModuleItineraryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itineraryList = make_shared<vector<ApplyQueryResponseBodyModuleItineraryList>>(expect1);
      }
    }
    if (m.find("itinerary_rule") != m.end() && !m["itinerary_rule"].empty()) {
      itineraryRule = make_shared<long>(boost::any_cast<long>(m["itinerary_rule"]));
    }
    if (m.find("itinerary_set_list") != m.end() && !m["itinerary_set_list"].empty()) {
      if (typeid(vector<boost::any>) == m["itinerary_set_list"].type()) {
        vector<ApplyQueryResponseBodyModuleItinerarySetList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["itinerary_set_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyQueryResponseBodyModuleItinerarySetList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itinerarySetList = make_shared<vector<ApplyQueryResponseBodyModuleItinerarySetList>>(expect1);
      }
    }
    if (m.find("limit_traveler") != m.end() && !m["limit_traveler"].empty()) {
      limitTraveler = make_shared<long>(boost::any_cast<long>(m["limit_traveler"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("status_desc") != m.end() && !m["status_desc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["status_desc"]));
    }
    if (m.find("thirdpart_business_id") != m.end() && !m["thirdpart_business_id"].empty()) {
      thirdpartBusinessId = make_shared<string>(boost::any_cast<string>(m["thirdpart_business_id"]));
    }
    if (m.find("thirdpart_id") != m.end() && !m["thirdpart_id"].empty()) {
      thirdpartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_id"]));
    }
    if (m.find("together_book_rule") != m.end() && !m["together_book_rule"].empty()) {
      togetherBookRule = make_shared<long>(boost::any_cast<long>(m["together_book_rule"]));
    }
    if (m.find("train_budget") != m.end() && !m["train_budget"].empty()) {
      trainBudget = make_shared<long>(boost::any_cast<long>(m["train_budget"]));
    }
    if (m.find("traveler_list") != m.end() && !m["traveler_list"].empty()) {
      if (typeid(vector<boost::any>) == m["traveler_list"].type()) {
        vector<ApplyQueryResponseBodyModuleTravelerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["traveler_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyQueryResponseBodyModuleTravelerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        travelerList = make_shared<vector<ApplyQueryResponseBodyModuleTravelerList>>(expect1);
      }
    }
    if (m.find("trip_cause") != m.end() && !m["trip_cause"].empty()) {
      tripCause = make_shared<string>(boost::any_cast<string>(m["trip_cause"]));
    }
    if (m.find("trip_day") != m.end() && !m["trip_day"].empty()) {
      tripDay = make_shared<long>(boost::any_cast<long>(m["trip_day"]));
    }
    if (m.find("trip_title") != m.end() && !m["trip_title"].empty()) {
      tripTitle = make_shared<string>(boost::any_cast<string>(m["trip_title"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("union_no") != m.end() && !m["union_no"].empty()) {
      unionNo = make_shared<string>(boost::any_cast<string>(m["union_no"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
    if (m.find("vehicle_budget") != m.end() && !m["vehicle_budget"].empty()) {
      vehicleBudget = make_shared<long>(boost::any_cast<long>(m["vehicle_budget"]));
    }
  }


  virtual ~ApplyQueryResponseBodyModule() = default;
};
class ApplyQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<ApplyQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ApplyQueryResponseBody() {}

  explicit ApplyQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        ApplyQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<ApplyQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~ApplyQueryResponseBody() = default;
};
class ApplyQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyQueryResponseBody> body{};

  ApplyQueryResponse() {}

  explicit ApplyQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyQueryResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyQueryResponse() = default;
};
class CarApplyAddHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  CarApplyAddHeaders() {}

  explicit CarApplyAddHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~CarApplyAddHeaders() = default;
};
class CarApplyAddRequest : public Darabonba::Model {
public:
  shared_ptr<string> cause{};
  shared_ptr<string> city{};
  shared_ptr<string> date{};
  shared_ptr<string> finishedDate{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectName{};
  shared_ptr<long> status{};
  shared_ptr<string> thirdPartApplyId{};
  shared_ptr<string> thirdPartCostCenterId{};
  shared_ptr<string> thirdPartInvoiceId{};
  shared_ptr<long> timesTotal{};
  shared_ptr<long> timesType{};
  shared_ptr<long> timesUsed{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  CarApplyAddRequest() {}

  explicit CarApplyAddRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cause) {
      res["cause"] = boost::any(*cause);
    }
    if (city) {
      res["city"] = boost::any(*city);
    }
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (finishedDate) {
      res["finished_date"] = boost::any(*finishedDate);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectName) {
      res["project_name"] = boost::any(*projectName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (thirdPartApplyId) {
      res["third_part_apply_id"] = boost::any(*thirdPartApplyId);
    }
    if (thirdPartCostCenterId) {
      res["third_part_cost_center_id"] = boost::any(*thirdPartCostCenterId);
    }
    if (thirdPartInvoiceId) {
      res["third_part_invoice_id"] = boost::any(*thirdPartInvoiceId);
    }
    if (timesTotal) {
      res["times_total"] = boost::any(*timesTotal);
    }
    if (timesType) {
      res["times_type"] = boost::any(*timesType);
    }
    if (timesUsed) {
      res["times_used"] = boost::any(*timesUsed);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cause") != m.end() && !m["cause"].empty()) {
      cause = make_shared<string>(boost::any_cast<string>(m["cause"]));
    }
    if (m.find("city") != m.end() && !m["city"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["city"]));
    }
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("finished_date") != m.end() && !m["finished_date"].empty()) {
      finishedDate = make_shared<string>(boost::any_cast<string>(m["finished_date"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_name") != m.end() && !m["project_name"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["project_name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("third_part_apply_id") != m.end() && !m["third_part_apply_id"].empty()) {
      thirdPartApplyId = make_shared<string>(boost::any_cast<string>(m["third_part_apply_id"]));
    }
    if (m.find("third_part_cost_center_id") != m.end() && !m["third_part_cost_center_id"].empty()) {
      thirdPartCostCenterId = make_shared<string>(boost::any_cast<string>(m["third_part_cost_center_id"]));
    }
    if (m.find("third_part_invoice_id") != m.end() && !m["third_part_invoice_id"].empty()) {
      thirdPartInvoiceId = make_shared<string>(boost::any_cast<string>(m["third_part_invoice_id"]));
    }
    if (m.find("times_total") != m.end() && !m["times_total"].empty()) {
      timesTotal = make_shared<long>(boost::any_cast<long>(m["times_total"]));
    }
    if (m.find("times_type") != m.end() && !m["times_type"].empty()) {
      timesType = make_shared<long>(boost::any_cast<long>(m["times_type"]));
    }
    if (m.find("times_used") != m.end() && !m["times_used"].empty()) {
      timesUsed = make_shared<long>(boost::any_cast<long>(m["times_used"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~CarApplyAddRequest() = default;
};
class CarApplyAddResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CarApplyAddResponseBody() {}

  explicit CarApplyAddResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = boost::any(*module);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      module = make_shared<long>(boost::any_cast<long>(m["module"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CarApplyAddResponseBody() = default;
};
class CarApplyAddResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CarApplyAddResponseBody> body{};

  CarApplyAddResponse() {}

  explicit CarApplyAddResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CarApplyAddResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CarApplyAddResponseBody>(model1);
      }
    }
  }


  virtual ~CarApplyAddResponse() = default;
};
class CarApplyModifyHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  CarApplyModifyHeaders() {}

  explicit CarApplyModifyHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~CarApplyModifyHeaders() = default;
};
class CarApplyModifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> operateTime{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<string> thirdPartApplyId{};
  shared_ptr<string> userId{};

  CarApplyModifyRequest() {}

  explicit CarApplyModifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateTime) {
      res["operate_time"] = boost::any(*operateTime);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (thirdPartApplyId) {
      res["third_part_apply_id"] = boost::any(*thirdPartApplyId);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operate_time") != m.end() && !m["operate_time"].empty()) {
      operateTime = make_shared<string>(boost::any_cast<string>(m["operate_time"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("third_part_apply_id") != m.end() && !m["third_part_apply_id"].empty()) {
      thirdPartApplyId = make_shared<string>(boost::any_cast<string>(m["third_part_apply_id"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~CarApplyModifyRequest() = default;
};
class CarApplyModifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CarApplyModifyResponseBody() {}

  explicit CarApplyModifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = boost::any(*module);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      module = make_shared<bool>(boost::any_cast<bool>(m["module"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CarApplyModifyResponseBody() = default;
};
class CarApplyModifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CarApplyModifyResponseBody> body{};

  CarApplyModifyResponse() {}

  explicit CarApplyModifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CarApplyModifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CarApplyModifyResponseBody>(model1);
      }
    }
  }


  virtual ~CarApplyModifyResponse() = default;
};
class CarApplyQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  CarApplyQueryHeaders() {}

  explicit CarApplyQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~CarApplyQueryHeaders() = default;
};
class CarApplyQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> createdEndAt{};
  shared_ptr<string> createdStartAt{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> thirdPartApplyId{};
  shared_ptr<string> userId{};

  CarApplyQueryRequest() {}

  explicit CarApplyQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdEndAt) {
      res["created_end_at"] = boost::any(*createdEndAt);
    }
    if (createdStartAt) {
      res["created_start_at"] = boost::any(*createdStartAt);
    }
    if (pageNumber) {
      res["page_number"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (thirdPartApplyId) {
      res["third_part_apply_id"] = boost::any(*thirdPartApplyId);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created_end_at") != m.end() && !m["created_end_at"].empty()) {
      createdEndAt = make_shared<string>(boost::any_cast<string>(m["created_end_at"]));
    }
    if (m.find("created_start_at") != m.end() && !m["created_start_at"].empty()) {
      createdStartAt = make_shared<string>(boost::any_cast<string>(m["created_start_at"]));
    }
    if (m.find("page_number") != m.end() && !m["page_number"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["page_number"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("third_part_apply_id") != m.end() && !m["third_part_apply_id"].empty()) {
      thirdPartApplyId = make_shared<string>(boost::any_cast<string>(m["third_part_apply_id"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~CarApplyQueryRequest() = default;
};
class CarApplyQueryResponseBodyApplyListApproverList : public Darabonba::Model {
public:
  shared_ptr<string> note{};
  shared_ptr<string> operateTime{};
  shared_ptr<long> order{};
  shared_ptr<long> status{};
  shared_ptr<string> statusDesc{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  CarApplyQueryResponseBodyApplyListApproverList() {}

  explicit CarApplyQueryResponseBodyApplyListApproverList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (note) {
      res["note"] = boost::any(*note);
    }
    if (operateTime) {
      res["operate_time"] = boost::any(*operateTime);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusDesc) {
      res["status_desc"] = boost::any(*statusDesc);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("note") != m.end() && !m["note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["note"]));
    }
    if (m.find("operate_time") != m.end() && !m["operate_time"].empty()) {
      operateTime = make_shared<string>(boost::any_cast<string>(m["operate_time"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("status_desc") != m.end() && !m["status_desc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["status_desc"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~CarApplyQueryResponseBodyApplyListApproverList() = default;
};
class CarApplyQueryResponseBodyApplyListItineraryList : public Darabonba::Model {
public:
  shared_ptr<string> arrCity{};
  shared_ptr<string> arrCityCode{};
  shared_ptr<string> arrDate{};
  shared_ptr<long> costCenterId{};
  shared_ptr<string> costCenterName{};
  shared_ptr<string> depCity{};
  shared_ptr<string> depCityCode{};
  shared_ptr<string> depDate{};
  shared_ptr<long> invoiceId{};
  shared_ptr<string> invoiceName{};
  shared_ptr<string> itineraryId{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectTitle{};
  shared_ptr<long> trafficType{};

  CarApplyQueryResponseBodyApplyListItineraryList() {}

  explicit CarApplyQueryResponseBodyApplyListItineraryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrCity) {
      res["arr_city"] = boost::any(*arrCity);
    }
    if (arrCityCode) {
      res["arr_city_code"] = boost::any(*arrCityCode);
    }
    if (arrDate) {
      res["arr_date"] = boost::any(*arrDate);
    }
    if (costCenterId) {
      res["cost_center_id"] = boost::any(*costCenterId);
    }
    if (costCenterName) {
      res["cost_center_name"] = boost::any(*costCenterName);
    }
    if (depCity) {
      res["dep_city"] = boost::any(*depCity);
    }
    if (depCityCode) {
      res["dep_city_code"] = boost::any(*depCityCode);
    }
    if (depDate) {
      res["dep_date"] = boost::any(*depDate);
    }
    if (invoiceId) {
      res["invoice_id"] = boost::any(*invoiceId);
    }
    if (invoiceName) {
      res["invoice_name"] = boost::any(*invoiceName);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (trafficType) {
      res["traffic_type"] = boost::any(*trafficType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_city") != m.end() && !m["arr_city"].empty()) {
      arrCity = make_shared<string>(boost::any_cast<string>(m["arr_city"]));
    }
    if (m.find("arr_city_code") != m.end() && !m["arr_city_code"].empty()) {
      arrCityCode = make_shared<string>(boost::any_cast<string>(m["arr_city_code"]));
    }
    if (m.find("arr_date") != m.end() && !m["arr_date"].empty()) {
      arrDate = make_shared<string>(boost::any_cast<string>(m["arr_date"]));
    }
    if (m.find("cost_center_id") != m.end() && !m["cost_center_id"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["cost_center_id"]));
    }
    if (m.find("cost_center_name") != m.end() && !m["cost_center_name"].empty()) {
      costCenterName = make_shared<string>(boost::any_cast<string>(m["cost_center_name"]));
    }
    if (m.find("dep_city") != m.end() && !m["dep_city"].empty()) {
      depCity = make_shared<string>(boost::any_cast<string>(m["dep_city"]));
    }
    if (m.find("dep_city_code") != m.end() && !m["dep_city_code"].empty()) {
      depCityCode = make_shared<string>(boost::any_cast<string>(m["dep_city_code"]));
    }
    if (m.find("dep_date") != m.end() && !m["dep_date"].empty()) {
      depDate = make_shared<string>(boost::any_cast<string>(m["dep_date"]));
    }
    if (m.find("invoice_id") != m.end() && !m["invoice_id"].empty()) {
      invoiceId = make_shared<long>(boost::any_cast<long>(m["invoice_id"]));
    }
    if (m.find("invoice_name") != m.end() && !m["invoice_name"].empty()) {
      invoiceName = make_shared<string>(boost::any_cast<string>(m["invoice_name"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("traffic_type") != m.end() && !m["traffic_type"].empty()) {
      trafficType = make_shared<long>(boost::any_cast<long>(m["traffic_type"]));
    }
  }


  virtual ~CarApplyQueryResponseBodyApplyListItineraryList() = default;
};
class CarApplyQueryResponseBodyApplyList : public Darabonba::Model {
public:
  shared_ptr<vector<CarApplyQueryResponseBodyApplyListApproverList>> approverList{};
  shared_ptr<string> departId{};
  shared_ptr<string> departName{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<vector<CarApplyQueryResponseBodyApplyListItineraryList>> itineraryList{};
  shared_ptr<long> status{};
  shared_ptr<string> statusDesc{};
  shared_ptr<string> thirdpartId{};
  shared_ptr<string> tripCause{};
  shared_ptr<string> tripTitle{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  CarApplyQueryResponseBodyApplyList() {}

  explicit CarApplyQueryResponseBodyApplyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approverList) {
      vector<boost::any> temp1;
      for(auto item1:*approverList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["approver_list"] = boost::any(temp1);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (departName) {
      res["depart_name"] = boost::any(*departName);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmt_modified"] = boost::any(*gmtModified);
    }
    if (itineraryList) {
      vector<boost::any> temp1;
      for(auto item1:*itineraryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["itinerary_list"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusDesc) {
      res["status_desc"] = boost::any(*statusDesc);
    }
    if (thirdpartId) {
      res["thirdpart_id"] = boost::any(*thirdpartId);
    }
    if (tripCause) {
      res["trip_cause"] = boost::any(*tripCause);
    }
    if (tripTitle) {
      res["trip_title"] = boost::any(*tripTitle);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("approver_list") != m.end() && !m["approver_list"].empty()) {
      if (typeid(vector<boost::any>) == m["approver_list"].type()) {
        vector<CarApplyQueryResponseBodyApplyListApproverList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["approver_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarApplyQueryResponseBodyApplyListApproverList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        approverList = make_shared<vector<CarApplyQueryResponseBodyApplyListApproverList>>(expect1);
      }
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("depart_name") != m.end() && !m["depart_name"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["depart_name"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("gmt_modified") != m.end() && !m["gmt_modified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmt_modified"]));
    }
    if (m.find("itinerary_list") != m.end() && !m["itinerary_list"].empty()) {
      if (typeid(vector<boost::any>) == m["itinerary_list"].type()) {
        vector<CarApplyQueryResponseBodyApplyListItineraryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["itinerary_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarApplyQueryResponseBodyApplyListItineraryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itineraryList = make_shared<vector<CarApplyQueryResponseBodyApplyListItineraryList>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("status_desc") != m.end() && !m["status_desc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["status_desc"]));
    }
    if (m.find("thirdpart_id") != m.end() && !m["thirdpart_id"].empty()) {
      thirdpartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_id"]));
    }
    if (m.find("trip_cause") != m.end() && !m["trip_cause"].empty()) {
      tripCause = make_shared<string>(boost::any_cast<string>(m["trip_cause"]));
    }
    if (m.find("trip_title") != m.end() && !m["trip_title"].empty()) {
      tripTitle = make_shared<string>(boost::any_cast<string>(m["trip_title"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~CarApplyQueryResponseBodyApplyList() = default;
};
class CarApplyQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<CarApplyQueryResponseBodyApplyList>> applyList{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};
  shared_ptr<string> traceId{};

  CarApplyQueryResponseBody() {}

  explicit CarApplyQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyList) {
      vector<boost::any> temp1;
      for(auto item1:*applyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["apply_list"] = boost::any(temp1);
    }
    if (code) {
      res["code"] = boost::any(*code);
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
    if (total) {
      res["total"] = boost::any(*total);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_list") != m.end() && !m["apply_list"].empty()) {
      if (typeid(vector<boost::any>) == m["apply_list"].type()) {
        vector<CarApplyQueryResponseBodyApplyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["apply_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarApplyQueryResponseBodyApplyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applyList = make_shared<vector<CarApplyQueryResponseBodyApplyList>>(expect1);
      }
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
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
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CarApplyQueryResponseBody() = default;
};
class CarApplyQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CarApplyQueryResponseBody> body{};

  CarApplyQueryResponse() {}

  explicit CarApplyQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CarApplyQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CarApplyQueryResponseBody>(model1);
      }
    }
  }


  virtual ~CarApplyQueryResponse() = default;
};
class CarBillSettlementQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  CarBillSettlementQueryHeaders() {}

  explicit CarBillSettlementQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~CarBillSettlementQueryHeaders() = default;
};
class CarBillSettlementQueryRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> periodEnd{};
  shared_ptr<string> periodStart{};

  CarBillSettlementQueryRequest() {}

  explicit CarBillSettlementQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["page_no"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (periodEnd) {
      res["period_end"] = boost::any(*periodEnd);
    }
    if (periodStart) {
      res["period_start"] = boost::any(*periodStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page_no") != m.end() && !m["page_no"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["page_no"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("period_end") != m.end() && !m["period_end"].empty()) {
      periodEnd = make_shared<string>(boost::any_cast<string>(m["period_end"]));
    }
    if (m.find("period_start") != m.end() && !m["period_start"].empty()) {
      periodStart = make_shared<string>(boost::any_cast<string>(m["period_start"]));
    }
  }


  virtual ~CarBillSettlementQueryRequest() = default;
};
class CarBillSettlementQueryResponseBodyModuleDataList : public Darabonba::Model {
public:
  shared_ptr<string> alipayTradeNo{};
  shared_ptr<string> applyId{};
  shared_ptr<string> arrCity{};
  shared_ptr<string> arrDate{};
  shared_ptr<string> arrLocation{};
  shared_ptr<string> arrTime{};
  shared_ptr<string> billRecordTime{};
  shared_ptr<string> bookTime{};
  shared_ptr<string> bookerId{};
  shared_ptr<string> bookerJobNo{};
  shared_ptr<string> bookerName{};
  shared_ptr<string> businessCategory{};
  shared_ptr<string> capitalDirection{};
  shared_ptr<string> carLevel{};
  shared_ptr<string> cascadeDepartment{};
  shared_ptr<string> costCenter{};
  shared_ptr<string> costCenterNumber{};
  shared_ptr<double> coupon{};
  shared_ptr<double> couponPrice{};
  shared_ptr<string> department{};
  shared_ptr<string> departmentId{};
  shared_ptr<string> deptCity{};
  shared_ptr<string> deptDate{};
  shared_ptr<string> deptLocation{};
  shared_ptr<string> deptTime{};
  shared_ptr<string> estimateDriveDistance{};
  shared_ptr<double> estimatePrice{};
  shared_ptr<string> feeType{};
  shared_ptr<string> index{};
  shared_ptr<string> invoiceTitle{};
  shared_ptr<string> memo{};
  shared_ptr<string> orderId{};
  shared_ptr<double> orderPrice{};
  shared_ptr<string> overApplyId{};
  shared_ptr<double> personSettleFee{};
  shared_ptr<long> primaryId{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectName{};
  shared_ptr<string> providerName{};
  shared_ptr<string> realDriveDistance{};
  shared_ptr<string> realFromAddr{};
  shared_ptr<string> realToAddr{};
  shared_ptr<string> remark{};
  shared_ptr<double> serviceFee{};
  shared_ptr<double> settlementFee{};
  shared_ptr<double> settlementGrantFee{};
  shared_ptr<string> settlementTime{};
  shared_ptr<string> settlementType{};
  shared_ptr<string> specialOrder{};
  shared_ptr<string> specialReason{};
  shared_ptr<long> status{};
  shared_ptr<string> subOrderId{};
  shared_ptr<string> travelerId{};
  shared_ptr<string> travelerJobNo{};
  shared_ptr<string> travelerName{};
  shared_ptr<string> userConfirmDesc{};
  shared_ptr<long> voucherType{};

  CarBillSettlementQueryResponseBodyModuleDataList() {}

  explicit CarBillSettlementQueryResponseBodyModuleDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alipayTradeNo) {
      res["alipay_trade_no"] = boost::any(*alipayTradeNo);
    }
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (arrCity) {
      res["arr_city"] = boost::any(*arrCity);
    }
    if (arrDate) {
      res["arr_date"] = boost::any(*arrDate);
    }
    if (arrLocation) {
      res["arr_location"] = boost::any(*arrLocation);
    }
    if (arrTime) {
      res["arr_time"] = boost::any(*arrTime);
    }
    if (billRecordTime) {
      res["bill_record_time"] = boost::any(*billRecordTime);
    }
    if (bookTime) {
      res["book_time"] = boost::any(*bookTime);
    }
    if (bookerId) {
      res["booker_id"] = boost::any(*bookerId);
    }
    if (bookerJobNo) {
      res["booker_job_no"] = boost::any(*bookerJobNo);
    }
    if (bookerName) {
      res["booker_name"] = boost::any(*bookerName);
    }
    if (businessCategory) {
      res["business_category"] = boost::any(*businessCategory);
    }
    if (capitalDirection) {
      res["capital_direction"] = boost::any(*capitalDirection);
    }
    if (carLevel) {
      res["car_level"] = boost::any(*carLevel);
    }
    if (cascadeDepartment) {
      res["cascade_department"] = boost::any(*cascadeDepartment);
    }
    if (costCenter) {
      res["cost_center"] = boost::any(*costCenter);
    }
    if (costCenterNumber) {
      res["cost_center_number"] = boost::any(*costCenterNumber);
    }
    if (coupon) {
      res["coupon"] = boost::any(*coupon);
    }
    if (couponPrice) {
      res["coupon_price"] = boost::any(*couponPrice);
    }
    if (department) {
      res["department"] = boost::any(*department);
    }
    if (departmentId) {
      res["department_id"] = boost::any(*departmentId);
    }
    if (deptCity) {
      res["dept_city"] = boost::any(*deptCity);
    }
    if (deptDate) {
      res["dept_date"] = boost::any(*deptDate);
    }
    if (deptLocation) {
      res["dept_location"] = boost::any(*deptLocation);
    }
    if (deptTime) {
      res["dept_time"] = boost::any(*deptTime);
    }
    if (estimateDriveDistance) {
      res["estimate_drive_distance"] = boost::any(*estimateDriveDistance);
    }
    if (estimatePrice) {
      res["estimate_price"] = boost::any(*estimatePrice);
    }
    if (feeType) {
      res["fee_type"] = boost::any(*feeType);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (invoiceTitle) {
      res["invoice_title"] = boost::any(*invoiceTitle);
    }
    if (memo) {
      res["memo"] = boost::any(*memo);
    }
    if (orderId) {
      res["order_id"] = boost::any(*orderId);
    }
    if (orderPrice) {
      res["order_price"] = boost::any(*orderPrice);
    }
    if (overApplyId) {
      res["over_apply_id"] = boost::any(*overApplyId);
    }
    if (personSettleFee) {
      res["person_settle_fee"] = boost::any(*personSettleFee);
    }
    if (primaryId) {
      res["primary_id"] = boost::any(*primaryId);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectName) {
      res["project_name"] = boost::any(*projectName);
    }
    if (providerName) {
      res["provider_name"] = boost::any(*providerName);
    }
    if (realDriveDistance) {
      res["real_drive_distance"] = boost::any(*realDriveDistance);
    }
    if (realFromAddr) {
      res["real_from_addr"] = boost::any(*realFromAddr);
    }
    if (realToAddr) {
      res["real_to_addr"] = boost::any(*realToAddr);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (serviceFee) {
      res["service_fee"] = boost::any(*serviceFee);
    }
    if (settlementFee) {
      res["settlement_fee"] = boost::any(*settlementFee);
    }
    if (settlementGrantFee) {
      res["settlement_grant_fee"] = boost::any(*settlementGrantFee);
    }
    if (settlementTime) {
      res["settlement_time"] = boost::any(*settlementTime);
    }
    if (settlementType) {
      res["settlement_type"] = boost::any(*settlementType);
    }
    if (specialOrder) {
      res["special_order"] = boost::any(*specialOrder);
    }
    if (specialReason) {
      res["special_reason"] = boost::any(*specialReason);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subOrderId) {
      res["sub_order_id"] = boost::any(*subOrderId);
    }
    if (travelerId) {
      res["traveler_id"] = boost::any(*travelerId);
    }
    if (travelerJobNo) {
      res["traveler_job_no"] = boost::any(*travelerJobNo);
    }
    if (travelerName) {
      res["traveler_name"] = boost::any(*travelerName);
    }
    if (userConfirmDesc) {
      res["user_confirm_desc"] = boost::any(*userConfirmDesc);
    }
    if (voucherType) {
      res["voucher_type"] = boost::any(*voucherType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alipay_trade_no") != m.end() && !m["alipay_trade_no"].empty()) {
      alipayTradeNo = make_shared<string>(boost::any_cast<string>(m["alipay_trade_no"]));
    }
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["apply_id"]));
    }
    if (m.find("arr_city") != m.end() && !m["arr_city"].empty()) {
      arrCity = make_shared<string>(boost::any_cast<string>(m["arr_city"]));
    }
    if (m.find("arr_date") != m.end() && !m["arr_date"].empty()) {
      arrDate = make_shared<string>(boost::any_cast<string>(m["arr_date"]));
    }
    if (m.find("arr_location") != m.end() && !m["arr_location"].empty()) {
      arrLocation = make_shared<string>(boost::any_cast<string>(m["arr_location"]));
    }
    if (m.find("arr_time") != m.end() && !m["arr_time"].empty()) {
      arrTime = make_shared<string>(boost::any_cast<string>(m["arr_time"]));
    }
    if (m.find("bill_record_time") != m.end() && !m["bill_record_time"].empty()) {
      billRecordTime = make_shared<string>(boost::any_cast<string>(m["bill_record_time"]));
    }
    if (m.find("book_time") != m.end() && !m["book_time"].empty()) {
      bookTime = make_shared<string>(boost::any_cast<string>(m["book_time"]));
    }
    if (m.find("booker_id") != m.end() && !m["booker_id"].empty()) {
      bookerId = make_shared<string>(boost::any_cast<string>(m["booker_id"]));
    }
    if (m.find("booker_job_no") != m.end() && !m["booker_job_no"].empty()) {
      bookerJobNo = make_shared<string>(boost::any_cast<string>(m["booker_job_no"]));
    }
    if (m.find("booker_name") != m.end() && !m["booker_name"].empty()) {
      bookerName = make_shared<string>(boost::any_cast<string>(m["booker_name"]));
    }
    if (m.find("business_category") != m.end() && !m["business_category"].empty()) {
      businessCategory = make_shared<string>(boost::any_cast<string>(m["business_category"]));
    }
    if (m.find("capital_direction") != m.end() && !m["capital_direction"].empty()) {
      capitalDirection = make_shared<string>(boost::any_cast<string>(m["capital_direction"]));
    }
    if (m.find("car_level") != m.end() && !m["car_level"].empty()) {
      carLevel = make_shared<string>(boost::any_cast<string>(m["car_level"]));
    }
    if (m.find("cascade_department") != m.end() && !m["cascade_department"].empty()) {
      cascadeDepartment = make_shared<string>(boost::any_cast<string>(m["cascade_department"]));
    }
    if (m.find("cost_center") != m.end() && !m["cost_center"].empty()) {
      costCenter = make_shared<string>(boost::any_cast<string>(m["cost_center"]));
    }
    if (m.find("cost_center_number") != m.end() && !m["cost_center_number"].empty()) {
      costCenterNumber = make_shared<string>(boost::any_cast<string>(m["cost_center_number"]));
    }
    if (m.find("coupon") != m.end() && !m["coupon"].empty()) {
      coupon = make_shared<double>(boost::any_cast<double>(m["coupon"]));
    }
    if (m.find("coupon_price") != m.end() && !m["coupon_price"].empty()) {
      couponPrice = make_shared<double>(boost::any_cast<double>(m["coupon_price"]));
    }
    if (m.find("department") != m.end() && !m["department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["department"]));
    }
    if (m.find("department_id") != m.end() && !m["department_id"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["department_id"]));
    }
    if (m.find("dept_city") != m.end() && !m["dept_city"].empty()) {
      deptCity = make_shared<string>(boost::any_cast<string>(m["dept_city"]));
    }
    if (m.find("dept_date") != m.end() && !m["dept_date"].empty()) {
      deptDate = make_shared<string>(boost::any_cast<string>(m["dept_date"]));
    }
    if (m.find("dept_location") != m.end() && !m["dept_location"].empty()) {
      deptLocation = make_shared<string>(boost::any_cast<string>(m["dept_location"]));
    }
    if (m.find("dept_time") != m.end() && !m["dept_time"].empty()) {
      deptTime = make_shared<string>(boost::any_cast<string>(m["dept_time"]));
    }
    if (m.find("estimate_drive_distance") != m.end() && !m["estimate_drive_distance"].empty()) {
      estimateDriveDistance = make_shared<string>(boost::any_cast<string>(m["estimate_drive_distance"]));
    }
    if (m.find("estimate_price") != m.end() && !m["estimate_price"].empty()) {
      estimatePrice = make_shared<double>(boost::any_cast<double>(m["estimate_price"]));
    }
    if (m.find("fee_type") != m.end() && !m["fee_type"].empty()) {
      feeType = make_shared<string>(boost::any_cast<string>(m["fee_type"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["index"]));
    }
    if (m.find("invoice_title") != m.end() && !m["invoice_title"].empty()) {
      invoiceTitle = make_shared<string>(boost::any_cast<string>(m["invoice_title"]));
    }
    if (m.find("memo") != m.end() && !m["memo"].empty()) {
      memo = make_shared<string>(boost::any_cast<string>(m["memo"]));
    }
    if (m.find("order_id") != m.end() && !m["order_id"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["order_id"]));
    }
    if (m.find("order_price") != m.end() && !m["order_price"].empty()) {
      orderPrice = make_shared<double>(boost::any_cast<double>(m["order_price"]));
    }
    if (m.find("over_apply_id") != m.end() && !m["over_apply_id"].empty()) {
      overApplyId = make_shared<string>(boost::any_cast<string>(m["over_apply_id"]));
    }
    if (m.find("person_settle_fee") != m.end() && !m["person_settle_fee"].empty()) {
      personSettleFee = make_shared<double>(boost::any_cast<double>(m["person_settle_fee"]));
    }
    if (m.find("primary_id") != m.end() && !m["primary_id"].empty()) {
      primaryId = make_shared<long>(boost::any_cast<long>(m["primary_id"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_name") != m.end() && !m["project_name"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["project_name"]));
    }
    if (m.find("provider_name") != m.end() && !m["provider_name"].empty()) {
      providerName = make_shared<string>(boost::any_cast<string>(m["provider_name"]));
    }
    if (m.find("real_drive_distance") != m.end() && !m["real_drive_distance"].empty()) {
      realDriveDistance = make_shared<string>(boost::any_cast<string>(m["real_drive_distance"]));
    }
    if (m.find("real_from_addr") != m.end() && !m["real_from_addr"].empty()) {
      realFromAddr = make_shared<string>(boost::any_cast<string>(m["real_from_addr"]));
    }
    if (m.find("real_to_addr") != m.end() && !m["real_to_addr"].empty()) {
      realToAddr = make_shared<string>(boost::any_cast<string>(m["real_to_addr"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("service_fee") != m.end() && !m["service_fee"].empty()) {
      serviceFee = make_shared<double>(boost::any_cast<double>(m["service_fee"]));
    }
    if (m.find("settlement_fee") != m.end() && !m["settlement_fee"].empty()) {
      settlementFee = make_shared<double>(boost::any_cast<double>(m["settlement_fee"]));
    }
    if (m.find("settlement_grant_fee") != m.end() && !m["settlement_grant_fee"].empty()) {
      settlementGrantFee = make_shared<double>(boost::any_cast<double>(m["settlement_grant_fee"]));
    }
    if (m.find("settlement_time") != m.end() && !m["settlement_time"].empty()) {
      settlementTime = make_shared<string>(boost::any_cast<string>(m["settlement_time"]));
    }
    if (m.find("settlement_type") != m.end() && !m["settlement_type"].empty()) {
      settlementType = make_shared<string>(boost::any_cast<string>(m["settlement_type"]));
    }
    if (m.find("special_order") != m.end() && !m["special_order"].empty()) {
      specialOrder = make_shared<string>(boost::any_cast<string>(m["special_order"]));
    }
    if (m.find("special_reason") != m.end() && !m["special_reason"].empty()) {
      specialReason = make_shared<string>(boost::any_cast<string>(m["special_reason"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("sub_order_id") != m.end() && !m["sub_order_id"].empty()) {
      subOrderId = make_shared<string>(boost::any_cast<string>(m["sub_order_id"]));
    }
    if (m.find("traveler_id") != m.end() && !m["traveler_id"].empty()) {
      travelerId = make_shared<string>(boost::any_cast<string>(m["traveler_id"]));
    }
    if (m.find("traveler_job_no") != m.end() && !m["traveler_job_no"].empty()) {
      travelerJobNo = make_shared<string>(boost::any_cast<string>(m["traveler_job_no"]));
    }
    if (m.find("traveler_name") != m.end() && !m["traveler_name"].empty()) {
      travelerName = make_shared<string>(boost::any_cast<string>(m["traveler_name"]));
    }
    if (m.find("user_confirm_desc") != m.end() && !m["user_confirm_desc"].empty()) {
      userConfirmDesc = make_shared<string>(boost::any_cast<string>(m["user_confirm_desc"]));
    }
    if (m.find("voucher_type") != m.end() && !m["voucher_type"].empty()) {
      voucherType = make_shared<long>(boost::any_cast<long>(m["voucher_type"]));
    }
  }


  virtual ~CarBillSettlementQueryResponseBodyModuleDataList() = default;
};
class CarBillSettlementQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> category{};
  shared_ptr<string> corpId{};
  shared_ptr<vector<CarBillSettlementQueryResponseBodyModuleDataList>> dataList{};
  shared_ptr<string> periodEnd{};
  shared_ptr<string> periodStart{};
  shared_ptr<long> totalNum{};

  CarBillSettlementQueryResponseBodyModule() {}

  explicit CarBillSettlementQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data_list"] = boost::any(temp1);
    }
    if (periodEnd) {
      res["period_end"] = boost::any(*periodEnd);
    }
    if (periodStart) {
      res["period_start"] = boost::any(*periodStart);
    }
    if (totalNum) {
      res["total_num"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<long>(boost::any_cast<long>(m["category"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("data_list") != m.end() && !m["data_list"].empty()) {
      if (typeid(vector<boost::any>) == m["data_list"].type()) {
        vector<CarBillSettlementQueryResponseBodyModuleDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarBillSettlementQueryResponseBodyModuleDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<CarBillSettlementQueryResponseBodyModuleDataList>>(expect1);
      }
    }
    if (m.find("period_end") != m.end() && !m["period_end"].empty()) {
      periodEnd = make_shared<string>(boost::any_cast<string>(m["period_end"]));
    }
    if (m.find("period_start") != m.end() && !m["period_start"].empty()) {
      periodStart = make_shared<string>(boost::any_cast<string>(m["period_start"]));
    }
    if (m.find("total_num") != m.end() && !m["total_num"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["total_num"]));
    }
  }


  virtual ~CarBillSettlementQueryResponseBodyModule() = default;
};
class CarBillSettlementQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<CarBillSettlementQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CarBillSettlementQueryResponseBody() {}

  explicit CarBillSettlementQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        CarBillSettlementQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<CarBillSettlementQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CarBillSettlementQueryResponseBody() = default;
};
class CarBillSettlementQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CarBillSettlementQueryResponseBody> body{};

  CarBillSettlementQueryResponse() {}

  explicit CarBillSettlementQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CarBillSettlementQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CarBillSettlementQueryResponseBody>(model1);
      }
    }
  }


  virtual ~CarBillSettlementQueryResponse() = default;
};
class CarOrderListQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  CarOrderListQueryHeaders() {}

  explicit CarOrderListQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~CarOrderListQueryHeaders() = default;
};
class CarOrderListQueryRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allApply{};
  shared_ptr<long> applyId{};
  shared_ptr<string> departId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> updateEndTime{};
  shared_ptr<string> updateStartTime{};
  shared_ptr<string> userId{};

  CarOrderListQueryRequest() {}

  explicit CarOrderListQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allApply) {
      res["all_apply"] = boost::any(*allApply);
    }
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (endTime) {
      res["end_time"] = boost::any(*endTime);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["start_time"] = boost::any(*startTime);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (updateEndTime) {
      res["update_end_time"] = boost::any(*updateEndTime);
    }
    if (updateStartTime) {
      res["update_start_time"] = boost::any(*updateStartTime);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("all_apply") != m.end() && !m["all_apply"].empty()) {
      allApply = make_shared<bool>(boost::any_cast<bool>(m["all_apply"]));
    }
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("end_time") != m.end() && !m["end_time"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["end_time"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("start_time") != m.end() && !m["start_time"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["start_time"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("update_end_time") != m.end() && !m["update_end_time"].empty()) {
      updateEndTime = make_shared<string>(boost::any_cast<string>(m["update_end_time"]));
    }
    if (m.find("update_start_time") != m.end() && !m["update_start_time"].empty()) {
      updateStartTime = make_shared<string>(boost::any_cast<string>(m["update_start_time"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~CarOrderListQueryRequest() = default;
};
class CarOrderListQueryResponseBodyModulePriceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> categoryCode{};
  shared_ptr<long> categoryType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> passengerName{};
  shared_ptr<long> payType{};
  shared_ptr<double> personPrice{};
  shared_ptr<double> price{};
  shared_ptr<string> tradeId{};
  shared_ptr<long> type{};

  CarOrderListQueryResponseBodyModulePriceInfoList() {}

  explicit CarOrderListQueryResponseBodyModulePriceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryCode) {
      res["category_code"] = boost::any(*categoryCode);
    }
    if (categoryType) {
      res["category_type"] = boost::any(*categoryType);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (passengerName) {
      res["passenger_name"] = boost::any(*passengerName);
    }
    if (payType) {
      res["pay_type"] = boost::any(*payType);
    }
    if (personPrice) {
      res["person_price"] = boost::any(*personPrice);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    if (tradeId) {
      res["trade_id"] = boost::any(*tradeId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category_code") != m.end() && !m["category_code"].empty()) {
      categoryCode = make_shared<long>(boost::any_cast<long>(m["category_code"]));
    }
    if (m.find("category_type") != m.end() && !m["category_type"].empty()) {
      categoryType = make_shared<long>(boost::any_cast<long>(m["category_type"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("passenger_name") != m.end() && !m["passenger_name"].empty()) {
      passengerName = make_shared<string>(boost::any_cast<string>(m["passenger_name"]));
    }
    if (m.find("pay_type") != m.end() && !m["pay_type"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["pay_type"]));
    }
    if (m.find("person_price") != m.end() && !m["person_price"].empty()) {
      personPrice = make_shared<double>(boost::any_cast<double>(m["person_price"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["price"]));
    }
    if (m.find("trade_id") != m.end() && !m["trade_id"].empty()) {
      tradeId = make_shared<string>(boost::any_cast<string>(m["trade_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~CarOrderListQueryResponseBodyModulePriceInfoList() = default;
};
class CarOrderListQueryResponseBodyModuleUserAffiliateList : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  CarOrderListQueryResponseBodyModuleUserAffiliateList() {}

  explicit CarOrderListQueryResponseBodyModuleUserAffiliateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~CarOrderListQueryResponseBodyModuleUserAffiliateList() = default;
};
class CarOrderListQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};
  shared_ptr<string> applyShowId{};
  shared_ptr<string> btripTitle{};
  shared_ptr<string> businessCategory{};
  shared_ptr<string> cancelTime{};
  shared_ptr<string> carInfo{};
  shared_ptr<long> carLevel{};
  shared_ptr<string> corpId{};
  shared_ptr<string> corpName{};
  shared_ptr<long> costCenterId{};
  shared_ptr<string> costCenterName{};
  shared_ptr<string> costCenterNumber{};
  shared_ptr<long> deptId{};
  shared_ptr<string> deptName{};
  shared_ptr<string> driverConfirmTime{};
  shared_ptr<double> estimatePrice{};
  shared_ptr<string> fromAddress{};
  shared_ptr<string> fromCityName{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<long> invoiceId{};
  shared_ptr<string> invoiceTitle{};
  shared_ptr<bool> isSpecial{};
  shared_ptr<string> memo{};
  shared_ptr<long> orderStatus{};
  shared_ptr<string> passengerName{};
  shared_ptr<string> payTime{};
  shared_ptr<vector<CarOrderListQueryResponseBodyModulePriceInfoList>> priceInfoList{};
  shared_ptr<string> projectCode{};
  shared_ptr<long> projectId{};
  shared_ptr<string> projectTitle{};
  shared_ptr<long> provider{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> realFromAddress{};
  shared_ptr<string> realFromCityName{};
  shared_ptr<string> realToAddress{};
  shared_ptr<string> realToCityName{};
  shared_ptr<long> serviceType{};
  shared_ptr<vector<string>> specialTypes{};
  shared_ptr<string> takenTime{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartItineraryId{};
  shared_ptr<string> toAddress{};
  shared_ptr<string> toCityName{};
  shared_ptr<double> travelDistance{};
  shared_ptr<vector<CarOrderListQueryResponseBodyModuleUserAffiliateList>> userAffiliateList{};
  shared_ptr<long> userConfirm{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  CarOrderListQueryResponseBodyModule() {}

  explicit CarOrderListQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (applyShowId) {
      res["apply_show_id"] = boost::any(*applyShowId);
    }
    if (btripTitle) {
      res["btrip_title"] = boost::any(*btripTitle);
    }
    if (businessCategory) {
      res["business_category"] = boost::any(*businessCategory);
    }
    if (cancelTime) {
      res["cancel_time"] = boost::any(*cancelTime);
    }
    if (carInfo) {
      res["car_info"] = boost::any(*carInfo);
    }
    if (carLevel) {
      res["car_level"] = boost::any(*carLevel);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (corpName) {
      res["corp_name"] = boost::any(*corpName);
    }
    if (costCenterId) {
      res["cost_center_id"] = boost::any(*costCenterId);
    }
    if (costCenterName) {
      res["cost_center_name"] = boost::any(*costCenterName);
    }
    if (costCenterNumber) {
      res["cost_center_number"] = boost::any(*costCenterNumber);
    }
    if (deptId) {
      res["dept_id"] = boost::any(*deptId);
    }
    if (deptName) {
      res["dept_name"] = boost::any(*deptName);
    }
    if (driverConfirmTime) {
      res["driver_confirm_time"] = boost::any(*driverConfirmTime);
    }
    if (estimatePrice) {
      res["estimate_price"] = boost::any(*estimatePrice);
    }
    if (fromAddress) {
      res["from_address"] = boost::any(*fromAddress);
    }
    if (fromCityName) {
      res["from_city_name"] = boost::any(*fromCityName);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmt_modified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (invoiceId) {
      res["invoice_id"] = boost::any(*invoiceId);
    }
    if (invoiceTitle) {
      res["invoice_title"] = boost::any(*invoiceTitle);
    }
    if (isSpecial) {
      res["is_special"] = boost::any(*isSpecial);
    }
    if (memo) {
      res["memo"] = boost::any(*memo);
    }
    if (orderStatus) {
      res["order_status"] = boost::any(*orderStatus);
    }
    if (passengerName) {
      res["passenger_name"] = boost::any(*passengerName);
    }
    if (payTime) {
      res["pay_time"] = boost::any(*payTime);
    }
    if (priceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*priceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["price_info_list"] = boost::any(temp1);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectId) {
      res["project_id"] = boost::any(*projectId);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    if (publishTime) {
      res["publish_time"] = boost::any(*publishTime);
    }
    if (realFromAddress) {
      res["real_from_address"] = boost::any(*realFromAddress);
    }
    if (realFromCityName) {
      res["real_from_city_name"] = boost::any(*realFromCityName);
    }
    if (realToAddress) {
      res["real_to_address"] = boost::any(*realToAddress);
    }
    if (realToCityName) {
      res["real_to_city_name"] = boost::any(*realToCityName);
    }
    if (serviceType) {
      res["service_type"] = boost::any(*serviceType);
    }
    if (specialTypes) {
      res["special_types"] = boost::any(*specialTypes);
    }
    if (takenTime) {
      res["taken_time"] = boost::any(*takenTime);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartItineraryId) {
      res["thirdpart_itinerary_id"] = boost::any(*thirdpartItineraryId);
    }
    if (toAddress) {
      res["to_address"] = boost::any(*toAddress);
    }
    if (toCityName) {
      res["to_city_name"] = boost::any(*toCityName);
    }
    if (travelDistance) {
      res["travel_distance"] = boost::any(*travelDistance);
    }
    if (userAffiliateList) {
      vector<boost::any> temp1;
      for(auto item1:*userAffiliateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["user_affiliate_list"] = boost::any(temp1);
    }
    if (userConfirm) {
      res["user_confirm"] = boost::any(*userConfirm);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("apply_show_id") != m.end() && !m["apply_show_id"].empty()) {
      applyShowId = make_shared<string>(boost::any_cast<string>(m["apply_show_id"]));
    }
    if (m.find("btrip_title") != m.end() && !m["btrip_title"].empty()) {
      btripTitle = make_shared<string>(boost::any_cast<string>(m["btrip_title"]));
    }
    if (m.find("business_category") != m.end() && !m["business_category"].empty()) {
      businessCategory = make_shared<string>(boost::any_cast<string>(m["business_category"]));
    }
    if (m.find("cancel_time") != m.end() && !m["cancel_time"].empty()) {
      cancelTime = make_shared<string>(boost::any_cast<string>(m["cancel_time"]));
    }
    if (m.find("car_info") != m.end() && !m["car_info"].empty()) {
      carInfo = make_shared<string>(boost::any_cast<string>(m["car_info"]));
    }
    if (m.find("car_level") != m.end() && !m["car_level"].empty()) {
      carLevel = make_shared<long>(boost::any_cast<long>(m["car_level"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("corp_name") != m.end() && !m["corp_name"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["corp_name"]));
    }
    if (m.find("cost_center_id") != m.end() && !m["cost_center_id"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["cost_center_id"]));
    }
    if (m.find("cost_center_name") != m.end() && !m["cost_center_name"].empty()) {
      costCenterName = make_shared<string>(boost::any_cast<string>(m["cost_center_name"]));
    }
    if (m.find("cost_center_number") != m.end() && !m["cost_center_number"].empty()) {
      costCenterNumber = make_shared<string>(boost::any_cast<string>(m["cost_center_number"]));
    }
    if (m.find("dept_id") != m.end() && !m["dept_id"].empty()) {
      deptId = make_shared<long>(boost::any_cast<long>(m["dept_id"]));
    }
    if (m.find("dept_name") != m.end() && !m["dept_name"].empty()) {
      deptName = make_shared<string>(boost::any_cast<string>(m["dept_name"]));
    }
    if (m.find("driver_confirm_time") != m.end() && !m["driver_confirm_time"].empty()) {
      driverConfirmTime = make_shared<string>(boost::any_cast<string>(m["driver_confirm_time"]));
    }
    if (m.find("estimate_price") != m.end() && !m["estimate_price"].empty()) {
      estimatePrice = make_shared<double>(boost::any_cast<double>(m["estimate_price"]));
    }
    if (m.find("from_address") != m.end() && !m["from_address"].empty()) {
      fromAddress = make_shared<string>(boost::any_cast<string>(m["from_address"]));
    }
    if (m.find("from_city_name") != m.end() && !m["from_city_name"].empty()) {
      fromCityName = make_shared<string>(boost::any_cast<string>(m["from_city_name"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("gmt_modified") != m.end() && !m["gmt_modified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmt_modified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("invoice_id") != m.end() && !m["invoice_id"].empty()) {
      invoiceId = make_shared<long>(boost::any_cast<long>(m["invoice_id"]));
    }
    if (m.find("invoice_title") != m.end() && !m["invoice_title"].empty()) {
      invoiceTitle = make_shared<string>(boost::any_cast<string>(m["invoice_title"]));
    }
    if (m.find("is_special") != m.end() && !m["is_special"].empty()) {
      isSpecial = make_shared<bool>(boost::any_cast<bool>(m["is_special"]));
    }
    if (m.find("memo") != m.end() && !m["memo"].empty()) {
      memo = make_shared<string>(boost::any_cast<string>(m["memo"]));
    }
    if (m.find("order_status") != m.end() && !m["order_status"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["order_status"]));
    }
    if (m.find("passenger_name") != m.end() && !m["passenger_name"].empty()) {
      passengerName = make_shared<string>(boost::any_cast<string>(m["passenger_name"]));
    }
    if (m.find("pay_time") != m.end() && !m["pay_time"].empty()) {
      payTime = make_shared<string>(boost::any_cast<string>(m["pay_time"]));
    }
    if (m.find("price_info_list") != m.end() && !m["price_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["price_info_list"].type()) {
        vector<CarOrderListQueryResponseBodyModulePriceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["price_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarOrderListQueryResponseBodyModulePriceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        priceInfoList = make_shared<vector<CarOrderListQueryResponseBodyModulePriceInfoList>>(expect1);
      }
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_id") != m.end() && !m["project_id"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["project_id"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<long>(boost::any_cast<long>(m["provider"]));
    }
    if (m.find("publish_time") != m.end() && !m["publish_time"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["publish_time"]));
    }
    if (m.find("real_from_address") != m.end() && !m["real_from_address"].empty()) {
      realFromAddress = make_shared<string>(boost::any_cast<string>(m["real_from_address"]));
    }
    if (m.find("real_from_city_name") != m.end() && !m["real_from_city_name"].empty()) {
      realFromCityName = make_shared<string>(boost::any_cast<string>(m["real_from_city_name"]));
    }
    if (m.find("real_to_address") != m.end() && !m["real_to_address"].empty()) {
      realToAddress = make_shared<string>(boost::any_cast<string>(m["real_to_address"]));
    }
    if (m.find("real_to_city_name") != m.end() && !m["real_to_city_name"].empty()) {
      realToCityName = make_shared<string>(boost::any_cast<string>(m["real_to_city_name"]));
    }
    if (m.find("service_type") != m.end() && !m["service_type"].empty()) {
      serviceType = make_shared<long>(boost::any_cast<long>(m["service_type"]));
    }
    if (m.find("special_types") != m.end() && !m["special_types"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["special_types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["special_types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      specialTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("taken_time") != m.end() && !m["taken_time"].empty()) {
      takenTime = make_shared<string>(boost::any_cast<string>(m["taken_time"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_itinerary_id") != m.end() && !m["thirdpart_itinerary_id"].empty()) {
      thirdpartItineraryId = make_shared<string>(boost::any_cast<string>(m["thirdpart_itinerary_id"]));
    }
    if (m.find("to_address") != m.end() && !m["to_address"].empty()) {
      toAddress = make_shared<string>(boost::any_cast<string>(m["to_address"]));
    }
    if (m.find("to_city_name") != m.end() && !m["to_city_name"].empty()) {
      toCityName = make_shared<string>(boost::any_cast<string>(m["to_city_name"]));
    }
    if (m.find("travel_distance") != m.end() && !m["travel_distance"].empty()) {
      travelDistance = make_shared<double>(boost::any_cast<double>(m["travel_distance"]));
    }
    if (m.find("user_affiliate_list") != m.end() && !m["user_affiliate_list"].empty()) {
      if (typeid(vector<boost::any>) == m["user_affiliate_list"].type()) {
        vector<CarOrderListQueryResponseBodyModuleUserAffiliateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["user_affiliate_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarOrderListQueryResponseBodyModuleUserAffiliateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userAffiliateList = make_shared<vector<CarOrderListQueryResponseBodyModuleUserAffiliateList>>(expect1);
      }
    }
    if (m.find("user_confirm") != m.end() && !m["user_confirm"].empty()) {
      userConfirm = make_shared<long>(boost::any_cast<long>(m["user_confirm"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~CarOrderListQueryResponseBodyModule() = default;
};
class CarOrderListQueryResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNumber{};

  CarOrderListQueryResponseBodyPageInfo() {}

  explicit CarOrderListQueryResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (totalNumber) {
      res["total_number"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("total_number") != m.end() && !m["total_number"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["total_number"]));
    }
  }


  virtual ~CarOrderListQueryResponseBodyPageInfo() = default;
};
class CarOrderListQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<CarOrderListQueryResponseBodyModule>> module{};
  shared_ptr<CarOrderListQueryResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CarOrderListQueryResponseBody() {}

  explicit CarOrderListQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      vector<boost::any> temp1;
      for(auto item1:*module){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["module"] = boost::any(temp1);
    }
    if (pageInfo) {
      res["page_info"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(vector<boost::any>) == m["module"].type()) {
        vector<CarOrderListQueryResponseBodyModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["module"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarOrderListQueryResponseBodyModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        module = make_shared<vector<CarOrderListQueryResponseBodyModule>>(expect1);
      }
    }
    if (m.find("page_info") != m.end() && !m["page_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["page_info"].type()) {
        CarOrderListQueryResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["page_info"]));
        pageInfo = make_shared<CarOrderListQueryResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CarOrderListQueryResponseBody() = default;
};
class CarOrderListQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CarOrderListQueryResponseBody> body{};

  CarOrderListQueryResponse() {}

  explicit CarOrderListQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CarOrderListQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CarOrderListQueryResponseBody>(model1);
      }
    }
  }


  virtual ~CarOrderListQueryResponse() = default;
};
class CarOrderQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  CarOrderQueryHeaders() {}

  explicit CarOrderQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~CarOrderQueryHeaders() = default;
};
class CarOrderQueryRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<long> subOrderId{};

  CarOrderQueryRequest() {}

  explicit CarOrderQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["order_id"] = boost::any(*orderId);
    }
    if (subOrderId) {
      res["sub_order_id"] = boost::any(*subOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_id") != m.end() && !m["order_id"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["order_id"]));
    }
    if (m.find("sub_order_id") != m.end() && !m["sub_order_id"].empty()) {
      subOrderId = make_shared<long>(boost::any_cast<long>(m["sub_order_id"]));
    }
  }


  virtual ~CarOrderQueryRequest() = default;
};
class CarOrderQueryResponseBodyModuleCarInfo : public Darabonba::Model {
public:
  shared_ptr<string> businessCategory{};
  shared_ptr<long> cancelTime{};
  shared_ptr<string> carInfo{};
  shared_ptr<long> carLevel{};
  shared_ptr<long> driverConfirmTime{};
  shared_ptr<long> estimatePrice{};
  shared_ptr<string> fromAddress{};
  shared_ptr<string> fromCityName{};
  shared_ptr<bool> isSpecial{};
  shared_ptr<string> memo{};
  shared_ptr<long> payTime{};
  shared_ptr<long> publishTime{};
  shared_ptr<string> realFromAddress{};
  shared_ptr<string> realFromCityName{};
  shared_ptr<string> realToAddress{};
  shared_ptr<string> realToCityName{};
  shared_ptr<long> serviceType{};
  shared_ptr<string> specialTypes{};
  shared_ptr<long> takenTime{};
  shared_ptr<string> toAddress{};
  shared_ptr<string> toCityName{};
  shared_ptr<string> travelDistance{};

  CarOrderQueryResponseBodyModuleCarInfo() {}

  explicit CarOrderQueryResponseBodyModuleCarInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessCategory) {
      res["business_category"] = boost::any(*businessCategory);
    }
    if (cancelTime) {
      res["cancel_time"] = boost::any(*cancelTime);
    }
    if (carInfo) {
      res["car_info"] = boost::any(*carInfo);
    }
    if (carLevel) {
      res["car_level"] = boost::any(*carLevel);
    }
    if (driverConfirmTime) {
      res["driver_confirm_time"] = boost::any(*driverConfirmTime);
    }
    if (estimatePrice) {
      res["estimate_price"] = boost::any(*estimatePrice);
    }
    if (fromAddress) {
      res["from_address"] = boost::any(*fromAddress);
    }
    if (fromCityName) {
      res["from_city_name"] = boost::any(*fromCityName);
    }
    if (isSpecial) {
      res["is_special"] = boost::any(*isSpecial);
    }
    if (memo) {
      res["memo"] = boost::any(*memo);
    }
    if (payTime) {
      res["pay_time"] = boost::any(*payTime);
    }
    if (publishTime) {
      res["publish_time"] = boost::any(*publishTime);
    }
    if (realFromAddress) {
      res["real_from_address"] = boost::any(*realFromAddress);
    }
    if (realFromCityName) {
      res["real_from_city_name"] = boost::any(*realFromCityName);
    }
    if (realToAddress) {
      res["real_to_address"] = boost::any(*realToAddress);
    }
    if (realToCityName) {
      res["real_to_city_name"] = boost::any(*realToCityName);
    }
    if (serviceType) {
      res["service_type"] = boost::any(*serviceType);
    }
    if (specialTypes) {
      res["special_types"] = boost::any(*specialTypes);
    }
    if (takenTime) {
      res["taken_time"] = boost::any(*takenTime);
    }
    if (toAddress) {
      res["to_address"] = boost::any(*toAddress);
    }
    if (toCityName) {
      res["to_city_name"] = boost::any(*toCityName);
    }
    if (travelDistance) {
      res["travel_distance"] = boost::any(*travelDistance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("business_category") != m.end() && !m["business_category"].empty()) {
      businessCategory = make_shared<string>(boost::any_cast<string>(m["business_category"]));
    }
    if (m.find("cancel_time") != m.end() && !m["cancel_time"].empty()) {
      cancelTime = make_shared<long>(boost::any_cast<long>(m["cancel_time"]));
    }
    if (m.find("car_info") != m.end() && !m["car_info"].empty()) {
      carInfo = make_shared<string>(boost::any_cast<string>(m["car_info"]));
    }
    if (m.find("car_level") != m.end() && !m["car_level"].empty()) {
      carLevel = make_shared<long>(boost::any_cast<long>(m["car_level"]));
    }
    if (m.find("driver_confirm_time") != m.end() && !m["driver_confirm_time"].empty()) {
      driverConfirmTime = make_shared<long>(boost::any_cast<long>(m["driver_confirm_time"]));
    }
    if (m.find("estimate_price") != m.end() && !m["estimate_price"].empty()) {
      estimatePrice = make_shared<long>(boost::any_cast<long>(m["estimate_price"]));
    }
    if (m.find("from_address") != m.end() && !m["from_address"].empty()) {
      fromAddress = make_shared<string>(boost::any_cast<string>(m["from_address"]));
    }
    if (m.find("from_city_name") != m.end() && !m["from_city_name"].empty()) {
      fromCityName = make_shared<string>(boost::any_cast<string>(m["from_city_name"]));
    }
    if (m.find("is_special") != m.end() && !m["is_special"].empty()) {
      isSpecial = make_shared<bool>(boost::any_cast<bool>(m["is_special"]));
    }
    if (m.find("memo") != m.end() && !m["memo"].empty()) {
      memo = make_shared<string>(boost::any_cast<string>(m["memo"]));
    }
    if (m.find("pay_time") != m.end() && !m["pay_time"].empty()) {
      payTime = make_shared<long>(boost::any_cast<long>(m["pay_time"]));
    }
    if (m.find("publish_time") != m.end() && !m["publish_time"].empty()) {
      publishTime = make_shared<long>(boost::any_cast<long>(m["publish_time"]));
    }
    if (m.find("real_from_address") != m.end() && !m["real_from_address"].empty()) {
      realFromAddress = make_shared<string>(boost::any_cast<string>(m["real_from_address"]));
    }
    if (m.find("real_from_city_name") != m.end() && !m["real_from_city_name"].empty()) {
      realFromCityName = make_shared<string>(boost::any_cast<string>(m["real_from_city_name"]));
    }
    if (m.find("real_to_address") != m.end() && !m["real_to_address"].empty()) {
      realToAddress = make_shared<string>(boost::any_cast<string>(m["real_to_address"]));
    }
    if (m.find("real_to_city_name") != m.end() && !m["real_to_city_name"].empty()) {
      realToCityName = make_shared<string>(boost::any_cast<string>(m["real_to_city_name"]));
    }
    if (m.find("service_type") != m.end() && !m["service_type"].empty()) {
      serviceType = make_shared<long>(boost::any_cast<long>(m["service_type"]));
    }
    if (m.find("special_types") != m.end() && !m["special_types"].empty()) {
      specialTypes = make_shared<string>(boost::any_cast<string>(m["special_types"]));
    }
    if (m.find("taken_time") != m.end() && !m["taken_time"].empty()) {
      takenTime = make_shared<long>(boost::any_cast<long>(m["taken_time"]));
    }
    if (m.find("to_address") != m.end() && !m["to_address"].empty()) {
      toAddress = make_shared<string>(boost::any_cast<string>(m["to_address"]));
    }
    if (m.find("to_city_name") != m.end() && !m["to_city_name"].empty()) {
      toCityName = make_shared<string>(boost::any_cast<string>(m["to_city_name"]));
    }
    if (m.find("travel_distance") != m.end() && !m["travel_distance"].empty()) {
      travelDistance = make_shared<string>(boost::any_cast<string>(m["travel_distance"]));
    }
  }


  virtual ~CarOrderQueryResponseBodyModuleCarInfo() = default;
};
class CarOrderQueryResponseBodyModuleInvoiceInfo : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> title{};

  CarOrderQueryResponseBodyModuleInvoiceInfo() {}

  explicit CarOrderQueryResponseBodyModuleInvoiceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~CarOrderQueryResponseBodyModuleInvoiceInfo() = default;
};
class CarOrderQueryResponseBodyModuleOrderBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<string> btripCause{};
  shared_ptr<string> btripTitle{};
  shared_ptr<string> corpId{};
  shared_ptr<string> corpName{};
  shared_ptr<string> departId{};
  shared_ptr<string> departName{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> itineraryId{};
  shared_ptr<long> orderId{};
  shared_ptr<long> orderStatus{};
  shared_ptr<long> subOrderId{};
  shared_ptr<string> thirdDepartId{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartItineraryId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  CarOrderQueryResponseBodyModuleOrderBaseInfo() {}

  explicit CarOrderQueryResponseBodyModuleOrderBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (btripCause) {
      res["btrip_cause"] = boost::any(*btripCause);
    }
    if (btripTitle) {
      res["btrip_title"] = boost::any(*btripTitle);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (corpName) {
      res["corp_name"] = boost::any(*corpName);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (departName) {
      res["depart_name"] = boost::any(*departName);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmt_modified"] = boost::any(*gmtModified);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (orderId) {
      res["order_id"] = boost::any(*orderId);
    }
    if (orderStatus) {
      res["order_status"] = boost::any(*orderStatus);
    }
    if (subOrderId) {
      res["sub_order_id"] = boost::any(*subOrderId);
    }
    if (thirdDepartId) {
      res["third_depart_id"] = boost::any(*thirdDepartId);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartItineraryId) {
      res["thirdpart_itinerary_id"] = boost::any(*thirdpartItineraryId);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["apply_id"]));
    }
    if (m.find("btrip_cause") != m.end() && !m["btrip_cause"].empty()) {
      btripCause = make_shared<string>(boost::any_cast<string>(m["btrip_cause"]));
    }
    if (m.find("btrip_title") != m.end() && !m["btrip_title"].empty()) {
      btripTitle = make_shared<string>(boost::any_cast<string>(m["btrip_title"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("corp_name") != m.end() && !m["corp_name"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["corp_name"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("depart_name") != m.end() && !m["depart_name"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["depart_name"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmt_create"]));
    }
    if (m.find("gmt_modified") != m.end() && !m["gmt_modified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmt_modified"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("order_id") != m.end() && !m["order_id"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["order_id"]));
    }
    if (m.find("order_status") != m.end() && !m["order_status"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["order_status"]));
    }
    if (m.find("sub_order_id") != m.end() && !m["sub_order_id"].empty()) {
      subOrderId = make_shared<long>(boost::any_cast<long>(m["sub_order_id"]));
    }
    if (m.find("third_depart_id") != m.end() && !m["third_depart_id"].empty()) {
      thirdDepartId = make_shared<string>(boost::any_cast<string>(m["third_depart_id"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_itinerary_id") != m.end() && !m["thirdpart_itinerary_id"].empty()) {
      thirdpartItineraryId = make_shared<string>(boost::any_cast<string>(m["thirdpart_itinerary_id"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~CarOrderQueryResponseBodyModuleOrderBaseInfo() = default;
};
class CarOrderQueryResponseBodyModulePassengerList : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<string> costCenterName{};
  shared_ptr<string> costCenterNumber{};
  shared_ptr<string> projectCode{};
  shared_ptr<long> projectId{};
  shared_ptr<string> projectTitle{};
  shared_ptr<string> thirdpartCostCenterId{};
  shared_ptr<string> thirdpartProjectId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<long> userType{};

  CarOrderQueryResponseBodyModulePassengerList() {}

  explicit CarOrderQueryResponseBodyModulePassengerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["cost_center_id"] = boost::any(*costCenterId);
    }
    if (costCenterName) {
      res["cost_center_name"] = boost::any(*costCenterName);
    }
    if (costCenterNumber) {
      res["cost_center_number"] = boost::any(*costCenterNumber);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectId) {
      res["project_id"] = boost::any(*projectId);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (thirdpartCostCenterId) {
      res["thirdpart_cost_center_id"] = boost::any(*thirdpartCostCenterId);
    }
    if (thirdpartProjectId) {
      res["thirdpart_project_id"] = boost::any(*thirdpartProjectId);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    if (userType) {
      res["user_type"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost_center_id") != m.end() && !m["cost_center_id"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["cost_center_id"]));
    }
    if (m.find("cost_center_name") != m.end() && !m["cost_center_name"].empty()) {
      costCenterName = make_shared<string>(boost::any_cast<string>(m["cost_center_name"]));
    }
    if (m.find("cost_center_number") != m.end() && !m["cost_center_number"].empty()) {
      costCenterNumber = make_shared<string>(boost::any_cast<string>(m["cost_center_number"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_id") != m.end() && !m["project_id"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["project_id"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("thirdpart_cost_center_id") != m.end() && !m["thirdpart_cost_center_id"].empty()) {
      thirdpartCostCenterId = make_shared<string>(boost::any_cast<string>(m["thirdpart_cost_center_id"]));
    }
    if (m.find("thirdpart_project_id") != m.end() && !m["thirdpart_project_id"].empty()) {
      thirdpartProjectId = make_shared<string>(boost::any_cast<string>(m["thirdpart_project_id"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
    if (m.find("user_type") != m.end() && !m["user_type"].empty()) {
      userType = make_shared<long>(boost::any_cast<long>(m["user_type"]));
    }
  }


  virtual ~CarOrderQueryResponseBodyModulePassengerList() = default;
};
class CarOrderQueryResponseBodyModulePriceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> categoryCode{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> payType{};
  shared_ptr<long> personPrice{};
  shared_ptr<long> price{};
  shared_ptr<string> tradeId{};
  shared_ptr<long> type{};

  CarOrderQueryResponseBodyModulePriceInfoList() {}

  explicit CarOrderQueryResponseBodyModulePriceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryCode) {
      res["category_code"] = boost::any(*categoryCode);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (payType) {
      res["pay_type"] = boost::any(*payType);
    }
    if (personPrice) {
      res["person_price"] = boost::any(*personPrice);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    if (tradeId) {
      res["trade_id"] = boost::any(*tradeId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category_code") != m.end() && !m["category_code"].empty()) {
      categoryCode = make_shared<long>(boost::any_cast<long>(m["category_code"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmt_create"]));
    }
    if (m.find("pay_type") != m.end() && !m["pay_type"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["pay_type"]));
    }
    if (m.find("person_price") != m.end() && !m["person_price"].empty()) {
      personPrice = make_shared<long>(boost::any_cast<long>(m["person_price"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["price"]));
    }
    if (m.find("trade_id") != m.end() && !m["trade_id"].empty()) {
      tradeId = make_shared<string>(boost::any_cast<string>(m["trade_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~CarOrderQueryResponseBodyModulePriceInfoList() = default;
};
class CarOrderQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<CarOrderQueryResponseBodyModuleCarInfo> carInfo{};
  shared_ptr<CarOrderQueryResponseBodyModuleInvoiceInfo> invoiceInfo{};
  shared_ptr<CarOrderQueryResponseBodyModuleOrderBaseInfo> orderBaseInfo{};
  shared_ptr<vector<CarOrderQueryResponseBodyModulePassengerList>> passengerList{};
  shared_ptr<vector<CarOrderQueryResponseBodyModulePriceInfoList>> priceInfoList{};

  CarOrderQueryResponseBodyModule() {}

  explicit CarOrderQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carInfo) {
      res["car_info"] = carInfo ? boost::any(carInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (invoiceInfo) {
      res["invoice_info"] = invoiceInfo ? boost::any(invoiceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderBaseInfo) {
      res["order_base_info"] = orderBaseInfo ? boost::any(orderBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (passengerList) {
      vector<boost::any> temp1;
      for(auto item1:*passengerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["passenger_list"] = boost::any(temp1);
    }
    if (priceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*priceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["price_info_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("car_info") != m.end() && !m["car_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["car_info"].type()) {
        CarOrderQueryResponseBodyModuleCarInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["car_info"]));
        carInfo = make_shared<CarOrderQueryResponseBodyModuleCarInfo>(model1);
      }
    }
    if (m.find("invoice_info") != m.end() && !m["invoice_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["invoice_info"].type()) {
        CarOrderQueryResponseBodyModuleInvoiceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["invoice_info"]));
        invoiceInfo = make_shared<CarOrderQueryResponseBodyModuleInvoiceInfo>(model1);
      }
    }
    if (m.find("order_base_info") != m.end() && !m["order_base_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["order_base_info"].type()) {
        CarOrderQueryResponseBodyModuleOrderBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["order_base_info"]));
        orderBaseInfo = make_shared<CarOrderQueryResponseBodyModuleOrderBaseInfo>(model1);
      }
    }
    if (m.find("passenger_list") != m.end() && !m["passenger_list"].empty()) {
      if (typeid(vector<boost::any>) == m["passenger_list"].type()) {
        vector<CarOrderQueryResponseBodyModulePassengerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["passenger_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarOrderQueryResponseBodyModulePassengerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        passengerList = make_shared<vector<CarOrderQueryResponseBodyModulePassengerList>>(expect1);
      }
    }
    if (m.find("price_info_list") != m.end() && !m["price_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["price_info_list"].type()) {
        vector<CarOrderQueryResponseBodyModulePriceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["price_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarOrderQueryResponseBodyModulePriceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        priceInfoList = make_shared<vector<CarOrderQueryResponseBodyModulePriceInfoList>>(expect1);
      }
    }
  }


  virtual ~CarOrderQueryResponseBodyModule() = default;
};
class CarOrderQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<CarOrderQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CarOrderQueryResponseBody() {}

  explicit CarOrderQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        CarOrderQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<CarOrderQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CarOrderQueryResponseBody() = default;
};
class CarOrderQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CarOrderQueryResponseBody> body{};

  CarOrderQueryResponse() {}

  explicit CarOrderQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CarOrderQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CarOrderQueryResponseBody>(model1);
      }
    }
  }


  virtual ~CarOrderQueryResponse() = default;
};
class CitySearchHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  CitySearchHeaders() {}

  explicit CitySearchHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~CitySearchHeaders() = default;
};
class CitySearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};

  CitySearchRequest() {}

  explicit CitySearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
  }


  virtual ~CitySearchRequest() = default;
};
class CitySearchResponseBodyModuleCities : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};
  shared_ptr<long> region{};

  CitySearchResponseBodyModuleCities() {}

  explicit CitySearchResponseBodyModuleCities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<long>(boost::any_cast<long>(m["region"]));
    }
  }


  virtual ~CitySearchResponseBodyModuleCities() = default;
};
class CitySearchResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<vector<CitySearchResponseBodyModuleCities>> cities{};

  CitySearchResponseBodyModule() {}

  explicit CitySearchResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cities) {
      vector<boost::any> temp1;
      for(auto item1:*cities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["cities"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cities") != m.end() && !m["cities"].empty()) {
      if (typeid(vector<boost::any>) == m["cities"].type()) {
        vector<CitySearchResponseBodyModuleCities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["cities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CitySearchResponseBodyModuleCities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cities = make_shared<vector<CitySearchResponseBodyModuleCities>>(expect1);
      }
    }
  }


  virtual ~CitySearchResponseBodyModule() = default;
};
class CitySearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<CitySearchResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CitySearchResponseBody() {}

  explicit CitySearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        CitySearchResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<CitySearchResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CitySearchResponseBody() = default;
};
class CitySearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CitySearchResponseBody> body{};

  CitySearchResponse() {}

  explicit CitySearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CitySearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CitySearchResponseBody>(model1);
      }
    }
  }


  virtual ~CitySearchResponse() = default;
};
class CommonApplyQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  CommonApplyQueryHeaders() {}

  explicit CommonApplyQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~CommonApplyQueryHeaders() = default;
};
class CommonApplyQueryRequest : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};
  shared_ptr<long> bizCategory{};
  shared_ptr<string> userId{};

  CommonApplyQueryRequest() {}

  explicit CommonApplyQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (bizCategory) {
      res["biz_category"] = boost::any(*bizCategory);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("biz_category") != m.end() && !m["biz_category"].empty()) {
      bizCategory = make_shared<long>(boost::any_cast<long>(m["biz_category"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~CommonApplyQueryRequest() = default;
};
class CommonApplyQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};
  shared_ptr<long> bizCategory{};
  shared_ptr<string> cause{};
  shared_ptr<string> corpId{};
  shared_ptr<string> extendValue{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<long> status{};
  shared_ptr<string> thirdpartCorpId{};
  shared_ptr<string> thirdpartId{};
  shared_ptr<string> tripCause{};
  shared_ptr<string> userId{};

  CommonApplyQueryResponseBodyModule() {}

  explicit CommonApplyQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (bizCategory) {
      res["biz_category"] = boost::any(*bizCategory);
    }
    if (cause) {
      res["cause"] = boost::any(*cause);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (extendValue) {
      res["extend_value"] = boost::any(*extendValue);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (thirdpartCorpId) {
      res["thirdpart_corp_id"] = boost::any(*thirdpartCorpId);
    }
    if (thirdpartId) {
      res["thirdpart_id"] = boost::any(*thirdpartId);
    }
    if (tripCause) {
      res["trip_cause"] = boost::any(*tripCause);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("biz_category") != m.end() && !m["biz_category"].empty()) {
      bizCategory = make_shared<long>(boost::any_cast<long>(m["biz_category"]));
    }
    if (m.find("cause") != m.end() && !m["cause"].empty()) {
      cause = make_shared<string>(boost::any_cast<string>(m["cause"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("extend_value") != m.end() && !m["extend_value"].empty()) {
      extendValue = make_shared<string>(boost::any_cast<string>(m["extend_value"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("thirdpart_corp_id") != m.end() && !m["thirdpart_corp_id"].empty()) {
      thirdpartCorpId = make_shared<string>(boost::any_cast<string>(m["thirdpart_corp_id"]));
    }
    if (m.find("thirdpart_id") != m.end() && !m["thirdpart_id"].empty()) {
      thirdpartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_id"]));
    }
    if (m.find("trip_cause") != m.end() && !m["trip_cause"].empty()) {
      tripCause = make_shared<string>(boost::any_cast<string>(m["trip_cause"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~CommonApplyQueryResponseBodyModule() = default;
};
class CommonApplyQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<CommonApplyQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CommonApplyQueryResponseBody() {}

  explicit CommonApplyQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        CommonApplyQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<CommonApplyQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CommonApplyQueryResponseBody() = default;
};
class CommonApplyQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CommonApplyQueryResponseBody> body{};

  CommonApplyQueryResponse() {}

  explicit CommonApplyQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CommonApplyQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CommonApplyQueryResponseBody>(model1);
      }
    }
  }


  virtual ~CommonApplyQueryResponse() = default;
};
class CommonApplySyncHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  CommonApplySyncHeaders() {}

  explicit CommonApplySyncHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~CommonApplySyncHeaders() = default;
};
class CommonApplySyncRequest : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};
  shared_ptr<long> bizCategory{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<string> thirdpartyFlowId{};
  shared_ptr<string> userId{};

  CommonApplySyncRequest() {}

  explicit CommonApplySyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (bizCategory) {
      res["biz_category"] = boost::any(*bizCategory);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (thirdpartyFlowId) {
      res["thirdparty_flow_id"] = boost::any(*thirdpartyFlowId);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("biz_category") != m.end() && !m["biz_category"].empty()) {
      bizCategory = make_shared<long>(boost::any_cast<long>(m["biz_category"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("thirdparty_flow_id") != m.end() && !m["thirdparty_flow_id"].empty()) {
      thirdpartyFlowId = make_shared<string>(boost::any_cast<string>(m["thirdparty_flow_id"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~CommonApplySyncRequest() = default;
};
class CommonApplySyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CommonApplySyncResponseBody() {}

  explicit CommonApplySyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = boost::any(*module);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      module = make_shared<bool>(boost::any_cast<bool>(m["module"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CommonApplySyncResponseBody() = default;
};
class CommonApplySyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CommonApplySyncResponseBody> body{};

  CommonApplySyncResponse() {}

  explicit CommonApplySyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CommonApplySyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CommonApplySyncResponseBody>(model1);
      }
    }
  }


  virtual ~CommonApplySyncResponse() = default;
};
class CorpTokenHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripAccessToken{};

  CorpTokenHeaders() {}

  explicit CorpTokenHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripAccessToken) {
      res["x-acs-btrip-access-token"] = boost::any(*xAcsBtripAccessToken);
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
    if (m.find("x-acs-btrip-access-token") != m.end() && !m["x-acs-btrip-access-token"].empty()) {
      xAcsBtripAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-access-token"]));
    }
  }


  virtual ~CorpTokenHeaders() = default;
};
class CorpTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> appSecret{};
  shared_ptr<string> corpId{};
  shared_ptr<long> type{};

  CorpTokenRequest() {}

  explicit CorpTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appSecret) {
      res["app_secret"] = boost::any(*appSecret);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("app_secret") != m.end() && !m["app_secret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["app_secret"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~CorpTokenRequest() = default;
};
class CorpTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> expire{};
  shared_ptr<string> token{};

  CorpTokenResponseBodyData() {}

  explicit CorpTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expire) {
      res["expire"] = boost::any(*expire);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("expire") != m.end() && !m["expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["expire"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~CorpTokenResponseBodyData() = default;
};
class CorpTokenResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> expire{};
  shared_ptr<long> start{};
  shared_ptr<string> token{};

  CorpTokenResponseBodyModule() {}

  explicit CorpTokenResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expire) {
      res["expire"] = boost::any(*expire);
    }
    if (start) {
      res["start"] = boost::any(*start);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("expire") != m.end() && !m["expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["expire"]));
    }
    if (m.find("start") != m.end() && !m["start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["start"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~CorpTokenResponseBodyModule() = default;
};
class CorpTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CorpTokenResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<CorpTokenResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<string> traceId{};

  CorpTokenResponseBody() {}

  explicit CorpTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CorpTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CorpTokenResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        CorpTokenResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<CorpTokenResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CorpTokenResponseBody() = default;
};
class CorpTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CorpTokenResponseBody> body{};

  CorpTokenResponse() {}

  explicit CorpTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CorpTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CorpTokenResponseBody>(model1);
      }
    }
  }


  virtual ~CorpTokenResponse() = default;
};
class CostCenterDeleteHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  CostCenterDeleteHeaders() {}

  explicit CostCenterDeleteHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~CostCenterDeleteHeaders() = default;
};
class CostCenterDeleteRequest : public Darabonba::Model {
public:
  shared_ptr<string> thirdpartId{};

  CostCenterDeleteRequest() {}

  explicit CostCenterDeleteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (thirdpartId) {
      res["thirdpart_id"] = boost::any(*thirdpartId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("thirdpart_id") != m.end() && !m["thirdpart_id"].empty()) {
      thirdpartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_id"]));
    }
  }


  virtual ~CostCenterDeleteRequest() = default;
};
class CostCenterDeleteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CostCenterDeleteResponseBody() {}

  explicit CostCenterDeleteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
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
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CostCenterDeleteResponseBody() = default;
};
class CostCenterDeleteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CostCenterDeleteResponseBody> body{};

  CostCenterDeleteResponse() {}

  explicit CostCenterDeleteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CostCenterDeleteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CostCenterDeleteResponseBody>(model1);
      }
    }
  }


  virtual ~CostCenterDeleteResponse() = default;
};
class CostCenterModifyHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  CostCenterModifyHeaders() {}

  explicit CostCenterModifyHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~CostCenterModifyHeaders() = default;
};
class CostCenterModifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> alipayNo{};
  shared_ptr<string> number{};
  shared_ptr<long> scope{};
  shared_ptr<string> thirdpartId{};
  shared_ptr<string> title{};

  CostCenterModifyRequest() {}

  explicit CostCenterModifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alipayNo) {
      res["alipay_no"] = boost::any(*alipayNo);
    }
    if (number) {
      res["number"] = boost::any(*number);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (thirdpartId) {
      res["thirdpart_id"] = boost::any(*thirdpartId);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alipay_no") != m.end() && !m["alipay_no"].empty()) {
      alipayNo = make_shared<string>(boost::any_cast<string>(m["alipay_no"]));
    }
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["number"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<long>(boost::any_cast<long>(m["scope"]));
    }
    if (m.find("thirdpart_id") != m.end() && !m["thirdpart_id"].empty()) {
      thirdpartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_id"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~CostCenterModifyRequest() = default;
};
class CostCenterModifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CostCenterModifyResponseBody() {}

  explicit CostCenterModifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
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
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CostCenterModifyResponseBody() = default;
};
class CostCenterModifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CostCenterModifyResponseBody> body{};

  CostCenterModifyResponse() {}

  explicit CostCenterModifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CostCenterModifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CostCenterModifyResponseBody>(model1);
      }
    }
  }


  virtual ~CostCenterModifyResponse() = default;
};
class CostCenterQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  CostCenterQueryHeaders() {}

  explicit CostCenterQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~CostCenterQueryHeaders() = default;
};
class CostCenterQueryRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needOrgEntity{};
  shared_ptr<string> thirdpartId{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  CostCenterQueryRequest() {}

  explicit CostCenterQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needOrgEntity) {
      res["need_org_entity"] = boost::any(*needOrgEntity);
    }
    if (thirdpartId) {
      res["thirdpart_id"] = boost::any(*thirdpartId);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("need_org_entity") != m.end() && !m["need_org_entity"].empty()) {
      needOrgEntity = make_shared<bool>(boost::any_cast<bool>(m["need_org_entity"]));
    }
    if (m.find("thirdpart_id") != m.end() && !m["thirdpart_id"].empty()) {
      thirdpartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_id"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~CostCenterQueryRequest() = default;
};
class CostCenterQueryResponseBodyModuleEntityDOS : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> entityId{};
  shared_ptr<string> entityType{};
  shared_ptr<string> name{};
  shared_ptr<long> userNum{};

  CostCenterQueryResponseBodyModuleEntityDOS() {}

  explicit CostCenterQueryResponseBodyModuleEntityDOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (entityId) {
      res["entity_id"] = boost::any(*entityId);
    }
    if (entityType) {
      res["entity_type"] = boost::any(*entityType);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (userNum) {
      res["user_num"] = boost::any(*userNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("entity_id") != m.end() && !m["entity_id"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["entity_id"]));
    }
    if (m.find("entity_type") != m.end() && !m["entity_type"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["entity_type"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("user_num") != m.end() && !m["user_num"].empty()) {
      userNum = make_shared<long>(boost::any_cast<long>(m["user_num"]));
    }
  }


  virtual ~CostCenterQueryResponseBodyModuleEntityDOS() = default;
};
class CostCenterQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<string> alipayNo{};
  shared_ptr<string> corpId{};
  shared_ptr<vector<CostCenterQueryResponseBodyModuleEntityDOS>> entityDOS{};
  shared_ptr<long> id{};
  shared_ptr<string> number{};
  shared_ptr<long> ruleCode{};
  shared_ptr<long> scope{};
  shared_ptr<string> thirdpartId{};
  shared_ptr<string> title{};

  CostCenterQueryResponseBodyModule() {}

  explicit CostCenterQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alipayNo) {
      res["alipay_no"] = boost::any(*alipayNo);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (entityDOS) {
      vector<boost::any> temp1;
      for(auto item1:*entityDOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["entity_d_o_s"] = boost::any(temp1);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (number) {
      res["number"] = boost::any(*number);
    }
    if (ruleCode) {
      res["rule_code"] = boost::any(*ruleCode);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (thirdpartId) {
      res["thirdpart_id"] = boost::any(*thirdpartId);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alipay_no") != m.end() && !m["alipay_no"].empty()) {
      alipayNo = make_shared<string>(boost::any_cast<string>(m["alipay_no"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("entity_d_o_s") != m.end() && !m["entity_d_o_s"].empty()) {
      if (typeid(vector<boost::any>) == m["entity_d_o_s"].type()) {
        vector<CostCenterQueryResponseBodyModuleEntityDOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["entity_d_o_s"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CostCenterQueryResponseBodyModuleEntityDOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entityDOS = make_shared<vector<CostCenterQueryResponseBodyModuleEntityDOS>>(expect1);
      }
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["number"]));
    }
    if (m.find("rule_code") != m.end() && !m["rule_code"].empty()) {
      ruleCode = make_shared<long>(boost::any_cast<long>(m["rule_code"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<long>(boost::any_cast<long>(m["scope"]));
    }
    if (m.find("thirdpart_id") != m.end() && !m["thirdpart_id"].empty()) {
      thirdpartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_id"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~CostCenterQueryResponseBodyModule() = default;
};
class CostCenterQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<CostCenterQueryResponseBodyModule>> module{};
  shared_ptr<bool> morePage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CostCenterQueryResponseBody() {}

  explicit CostCenterQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      vector<boost::any> temp1;
      for(auto item1:*module){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["module"] = boost::any(temp1);
    }
    if (morePage) {
      res["more_page"] = boost::any(*morePage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(vector<boost::any>) == m["module"].type()) {
        vector<CostCenterQueryResponseBodyModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["module"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CostCenterQueryResponseBodyModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        module = make_shared<vector<CostCenterQueryResponseBodyModule>>(expect1);
      }
    }
    if (m.find("more_page") != m.end() && !m["more_page"].empty()) {
      morePage = make_shared<bool>(boost::any_cast<bool>(m["more_page"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CostCenterQueryResponseBody() = default;
};
class CostCenterQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CostCenterQueryResponseBody> body{};

  CostCenterQueryResponse() {}

  explicit CostCenterQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CostCenterQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CostCenterQueryResponseBody>(model1);
      }
    }
  }


  virtual ~CostCenterQueryResponse() = default;
};
class CostCenterSaveHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  CostCenterSaveHeaders() {}

  explicit CostCenterSaveHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~CostCenterSaveHeaders() = default;
};
class CostCenterSaveRequest : public Darabonba::Model {
public:
  shared_ptr<string> alipayNo{};
  shared_ptr<string> number{};
  shared_ptr<long> scope{};
  shared_ptr<string> thirdpartId{};
  shared_ptr<string> title{};

  CostCenterSaveRequest() {}

  explicit CostCenterSaveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alipayNo) {
      res["alipay_no"] = boost::any(*alipayNo);
    }
    if (number) {
      res["number"] = boost::any(*number);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (thirdpartId) {
      res["thirdpart_id"] = boost::any(*thirdpartId);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alipay_no") != m.end() && !m["alipay_no"].empty()) {
      alipayNo = make_shared<string>(boost::any_cast<string>(m["alipay_no"]));
    }
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["number"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<long>(boost::any_cast<long>(m["scope"]));
    }
    if (m.find("thirdpart_id") != m.end() && !m["thirdpart_id"].empty()) {
      thirdpartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_id"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~CostCenterSaveRequest() = default;
};
class CostCenterSaveResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  CostCenterSaveResponseBodyModule() {}

  explicit CostCenterSaveResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
  }


  virtual ~CostCenterSaveResponseBodyModule() = default;
};
class CostCenterSaveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<CostCenterSaveResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CostCenterSaveResponseBody() {}

  explicit CostCenterSaveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        CostCenterSaveResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<CostCenterSaveResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~CostCenterSaveResponseBody() = default;
};
class CostCenterSaveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CostCenterSaveResponseBody> body{};

  CostCenterSaveResponse() {}

  explicit CostCenterSaveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CostCenterSaveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CostCenterSaveResponseBody>(model1);
      }
    }
  }


  virtual ~CostCenterSaveResponse() = default;
};
class DepartmentSaveHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  DepartmentSaveHeaders() {}

  explicit DepartmentSaveHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~DepartmentSaveHeaders() = default;
};
class DepartmentSaveRequestDepartList : public Darabonba::Model {
public:
  shared_ptr<long> departId{};
  shared_ptr<string> departName{};
  shared_ptr<long> departPid{};
  shared_ptr<string> managerIds{};
  shared_ptr<long> status{};
  shared_ptr<string> thirdDepartId{};
  shared_ptr<string> thirdDepartPid{};

  DepartmentSaveRequestDepartList() {}

  explicit DepartmentSaveRequestDepartList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (departName) {
      res["depart_name"] = boost::any(*departName);
    }
    if (departPid) {
      res["depart_pid"] = boost::any(*departPid);
    }
    if (managerIds) {
      res["manager_ids"] = boost::any(*managerIds);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (thirdDepartId) {
      res["third_depart_id"] = boost::any(*thirdDepartId);
    }
    if (thirdDepartPid) {
      res["third_depart_pid"] = boost::any(*thirdDepartPid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<long>(boost::any_cast<long>(m["depart_id"]));
    }
    if (m.find("depart_name") != m.end() && !m["depart_name"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["depart_name"]));
    }
    if (m.find("depart_pid") != m.end() && !m["depart_pid"].empty()) {
      departPid = make_shared<long>(boost::any_cast<long>(m["depart_pid"]));
    }
    if (m.find("manager_ids") != m.end() && !m["manager_ids"].empty()) {
      managerIds = make_shared<string>(boost::any_cast<string>(m["manager_ids"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("third_depart_id") != m.end() && !m["third_depart_id"].empty()) {
      thirdDepartId = make_shared<string>(boost::any_cast<string>(m["third_depart_id"]));
    }
    if (m.find("third_depart_pid") != m.end() && !m["third_depart_pid"].empty()) {
      thirdDepartPid = make_shared<string>(boost::any_cast<string>(m["third_depart_pid"]));
    }
  }


  virtual ~DepartmentSaveRequestDepartList() = default;
};
class DepartmentSaveRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DepartmentSaveRequestDepartList>> departList{};

  DepartmentSaveRequest() {}

  explicit DepartmentSaveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (departList) {
      vector<boost::any> temp1;
      for(auto item1:*departList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["depart_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("depart_list") != m.end() && !m["depart_list"].empty()) {
      if (typeid(vector<boost::any>) == m["depart_list"].type()) {
        vector<DepartmentSaveRequestDepartList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["depart_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DepartmentSaveRequestDepartList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        departList = make_shared<vector<DepartmentSaveRequestDepartList>>(expect1);
      }
    }
  }


  virtual ~DepartmentSaveRequest() = default;
};
class DepartmentSaveShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> departListShrink{};

  DepartmentSaveShrinkRequest() {}

  explicit DepartmentSaveShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (departListShrink) {
      res["depart_list"] = boost::any(*departListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("depart_list") != m.end() && !m["depart_list"].empty()) {
      departListShrink = make_shared<string>(boost::any_cast<string>(m["depart_list"]));
    }
  }


  virtual ~DepartmentSaveShrinkRequest() = default;
};
class DepartmentSaveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DepartmentSaveResponseBody() {}

  explicit DepartmentSaveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = boost::any(*module);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["module"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~DepartmentSaveResponseBody() = default;
};
class DepartmentSaveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DepartmentSaveResponseBody> body{};

  DepartmentSaveResponse() {}

  explicit DepartmentSaveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DepartmentSaveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DepartmentSaveResponseBody>(model1);
      }
    }
  }


  virtual ~DepartmentSaveResponse() = default;
};
class EntityAddHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  EntityAddHeaders() {}

  explicit EntityAddHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~EntityAddHeaders() = default;
};
class EntityAddRequestEntityDOList : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> entityType{};

  EntityAddRequestEntityDOList() {}

  explicit EntityAddRequestEntityDOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["entity_id"] = boost::any(*entityId);
    }
    if (entityType) {
      res["entity_type"] = boost::any(*entityType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("entity_id") != m.end() && !m["entity_id"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["entity_id"]));
    }
    if (m.find("entity_type") != m.end() && !m["entity_type"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["entity_type"]));
    }
  }


  virtual ~EntityAddRequestEntityDOList() = default;
};
class EntityAddRequest : public Darabonba::Model {
public:
  shared_ptr<vector<EntityAddRequestEntityDOList>> entityDOList{};
  shared_ptr<string> thirdpartId{};

  EntityAddRequest() {}

  explicit EntityAddRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityDOList) {
      vector<boost::any> temp1;
      for(auto item1:*entityDOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["entity_d_o_list"] = boost::any(temp1);
    }
    if (thirdpartId) {
      res["thirdpart_id"] = boost::any(*thirdpartId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("entity_d_o_list") != m.end() && !m["entity_d_o_list"].empty()) {
      if (typeid(vector<boost::any>) == m["entity_d_o_list"].type()) {
        vector<EntityAddRequestEntityDOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["entity_d_o_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EntityAddRequestEntityDOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entityDOList = make_shared<vector<EntityAddRequestEntityDOList>>(expect1);
      }
    }
    if (m.find("thirdpart_id") != m.end() && !m["thirdpart_id"].empty()) {
      thirdpartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_id"]));
    }
  }


  virtual ~EntityAddRequest() = default;
};
class EntityAddShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityDOListShrink{};
  shared_ptr<string> thirdpartId{};

  EntityAddShrinkRequest() {}

  explicit EntityAddShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityDOListShrink) {
      res["entity_d_o_list"] = boost::any(*entityDOListShrink);
    }
    if (thirdpartId) {
      res["thirdpart_id"] = boost::any(*thirdpartId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("entity_d_o_list") != m.end() && !m["entity_d_o_list"].empty()) {
      entityDOListShrink = make_shared<string>(boost::any_cast<string>(m["entity_d_o_list"]));
    }
    if (m.find("thirdpart_id") != m.end() && !m["thirdpart_id"].empty()) {
      thirdpartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_id"]));
    }
  }


  virtual ~EntityAddShrinkRequest() = default;
};
class EntityAddResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> addNum{};
  shared_ptr<long> selectedUserNum{};

  EntityAddResponseBodyModule() {}

  explicit EntityAddResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addNum) {
      res["add_num"] = boost::any(*addNum);
    }
    if (selectedUserNum) {
      res["selected_user_num"] = boost::any(*selectedUserNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("add_num") != m.end() && !m["add_num"].empty()) {
      addNum = make_shared<long>(boost::any_cast<long>(m["add_num"]));
    }
    if (m.find("selected_user_num") != m.end() && !m["selected_user_num"].empty()) {
      selectedUserNum = make_shared<long>(boost::any_cast<long>(m["selected_user_num"]));
    }
  }


  virtual ~EntityAddResponseBodyModule() = default;
};
class EntityAddResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<EntityAddResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  EntityAddResponseBody() {}

  explicit EntityAddResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        EntityAddResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<EntityAddResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~EntityAddResponseBody() = default;
};
class EntityAddResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EntityAddResponseBody> body{};

  EntityAddResponse() {}

  explicit EntityAddResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EntityAddResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EntityAddResponseBody>(model1);
      }
    }
  }


  virtual ~EntityAddResponse() = default;
};
class EntityDeleteHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  EntityDeleteHeaders() {}

  explicit EntityDeleteHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~EntityDeleteHeaders() = default;
};
class EntityDeleteRequestEntityDOList : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> entityType{};

  EntityDeleteRequestEntityDOList() {}

  explicit EntityDeleteRequestEntityDOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["entity_id"] = boost::any(*entityId);
    }
    if (entityType) {
      res["entity_type"] = boost::any(*entityType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("entity_id") != m.end() && !m["entity_id"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["entity_id"]));
    }
    if (m.find("entity_type") != m.end() && !m["entity_type"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["entity_type"]));
    }
  }


  virtual ~EntityDeleteRequestEntityDOList() = default;
};
class EntityDeleteRequest : public Darabonba::Model {
public:
  shared_ptr<bool> delAll{};
  shared_ptr<vector<EntityDeleteRequestEntityDOList>> entityDOList{};
  shared_ptr<string> thirdpartId{};

  EntityDeleteRequest() {}

  explicit EntityDeleteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delAll) {
      res["del_all"] = boost::any(*delAll);
    }
    if (entityDOList) {
      vector<boost::any> temp1;
      for(auto item1:*entityDOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["entity_d_o_list"] = boost::any(temp1);
    }
    if (thirdpartId) {
      res["thirdpart_id"] = boost::any(*thirdpartId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("del_all") != m.end() && !m["del_all"].empty()) {
      delAll = make_shared<bool>(boost::any_cast<bool>(m["del_all"]));
    }
    if (m.find("entity_d_o_list") != m.end() && !m["entity_d_o_list"].empty()) {
      if (typeid(vector<boost::any>) == m["entity_d_o_list"].type()) {
        vector<EntityDeleteRequestEntityDOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["entity_d_o_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EntityDeleteRequestEntityDOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entityDOList = make_shared<vector<EntityDeleteRequestEntityDOList>>(expect1);
      }
    }
    if (m.find("thirdpart_id") != m.end() && !m["thirdpart_id"].empty()) {
      thirdpartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_id"]));
    }
  }


  virtual ~EntityDeleteRequest() = default;
};
class EntityDeleteShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> delAll{};
  shared_ptr<string> entityDOListShrink{};
  shared_ptr<string> thirdpartId{};

  EntityDeleteShrinkRequest() {}

  explicit EntityDeleteShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delAll) {
      res["del_all"] = boost::any(*delAll);
    }
    if (entityDOListShrink) {
      res["entity_d_o_list"] = boost::any(*entityDOListShrink);
    }
    if (thirdpartId) {
      res["thirdpart_id"] = boost::any(*thirdpartId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("del_all") != m.end() && !m["del_all"].empty()) {
      delAll = make_shared<bool>(boost::any_cast<bool>(m["del_all"]));
    }
    if (m.find("entity_d_o_list") != m.end() && !m["entity_d_o_list"].empty()) {
      entityDOListShrink = make_shared<string>(boost::any_cast<string>(m["entity_d_o_list"]));
    }
    if (m.find("thirdpart_id") != m.end() && !m["thirdpart_id"].empty()) {
      thirdpartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_id"]));
    }
  }


  virtual ~EntityDeleteShrinkRequest() = default;
};
class EntityDeleteResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> removeNum{};
  shared_ptr<long> selectedUserNum{};

  EntityDeleteResponseBodyModule() {}

  explicit EntityDeleteResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (removeNum) {
      res["remove_num"] = boost::any(*removeNum);
    }
    if (selectedUserNum) {
      res["selected_user_num"] = boost::any(*selectedUserNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("remove_num") != m.end() && !m["remove_num"].empty()) {
      removeNum = make_shared<long>(boost::any_cast<long>(m["remove_num"]));
    }
    if (m.find("selected_user_num") != m.end() && !m["selected_user_num"].empty()) {
      selectedUserNum = make_shared<long>(boost::any_cast<long>(m["selected_user_num"]));
    }
  }


  virtual ~EntityDeleteResponseBodyModule() = default;
};
class EntityDeleteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<EntityDeleteResponseBodyModule> module{};
  shared_ptr<bool> morePage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  EntityDeleteResponseBody() {}

  explicit EntityDeleteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (morePage) {
      res["more_page"] = boost::any(*morePage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        EntityDeleteResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<EntityDeleteResponseBodyModule>(model1);
      }
    }
    if (m.find("more_page") != m.end() && !m["more_page"].empty()) {
      morePage = make_shared<bool>(boost::any_cast<bool>(m["more_page"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~EntityDeleteResponseBody() = default;
};
class EntityDeleteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EntityDeleteResponseBody> body{};

  EntityDeleteResponse() {}

  explicit EntityDeleteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EntityDeleteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EntityDeleteResponseBody>(model1);
      }
    }
  }


  virtual ~EntityDeleteResponse() = default;
};
class EntitySetHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  EntitySetHeaders() {}

  explicit EntitySetHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~EntitySetHeaders() = default;
};
class EntitySetRequestEntityDOList : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> entityType{};

  EntitySetRequestEntityDOList() {}

  explicit EntitySetRequestEntityDOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["entity_id"] = boost::any(*entityId);
    }
    if (entityType) {
      res["entity_type"] = boost::any(*entityType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("entity_id") != m.end() && !m["entity_id"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["entity_id"]));
    }
    if (m.find("entity_type") != m.end() && !m["entity_type"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["entity_type"]));
    }
  }


  virtual ~EntitySetRequestEntityDOList() = default;
};
class EntitySetRequest : public Darabonba::Model {
public:
  shared_ptr<vector<EntitySetRequestEntityDOList>> entityDOList{};
  shared_ptr<string> thirdpartId{};

  EntitySetRequest() {}

  explicit EntitySetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityDOList) {
      vector<boost::any> temp1;
      for(auto item1:*entityDOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["entity_d_o_list"] = boost::any(temp1);
    }
    if (thirdpartId) {
      res["thirdpart_id"] = boost::any(*thirdpartId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("entity_d_o_list") != m.end() && !m["entity_d_o_list"].empty()) {
      if (typeid(vector<boost::any>) == m["entity_d_o_list"].type()) {
        vector<EntitySetRequestEntityDOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["entity_d_o_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EntitySetRequestEntityDOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entityDOList = make_shared<vector<EntitySetRequestEntityDOList>>(expect1);
      }
    }
    if (m.find("thirdpart_id") != m.end() && !m["thirdpart_id"].empty()) {
      thirdpartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_id"]));
    }
  }


  virtual ~EntitySetRequest() = default;
};
class EntitySetShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityDOListShrink{};
  shared_ptr<string> thirdpartId{};

  EntitySetShrinkRequest() {}

  explicit EntitySetShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityDOListShrink) {
      res["entity_d_o_list"] = boost::any(*entityDOListShrink);
    }
    if (thirdpartId) {
      res["thirdpart_id"] = boost::any(*thirdpartId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("entity_d_o_list") != m.end() && !m["entity_d_o_list"].empty()) {
      entityDOListShrink = make_shared<string>(boost::any_cast<string>(m["entity_d_o_list"]));
    }
    if (m.find("thirdpart_id") != m.end() && !m["thirdpart_id"].empty()) {
      thirdpartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_id"]));
    }
  }


  virtual ~EntitySetShrinkRequest() = default;
};
class EntitySetResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> addNum{};
  shared_ptr<long> removeNum{};
  shared_ptr<long> selectedUserNum{};

  EntitySetResponseBodyModule() {}

  explicit EntitySetResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addNum) {
      res["add_num"] = boost::any(*addNum);
    }
    if (removeNum) {
      res["remove_num"] = boost::any(*removeNum);
    }
    if (selectedUserNum) {
      res["selected_user_num"] = boost::any(*selectedUserNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("add_num") != m.end() && !m["add_num"].empty()) {
      addNum = make_shared<long>(boost::any_cast<long>(m["add_num"]));
    }
    if (m.find("remove_num") != m.end() && !m["remove_num"].empty()) {
      removeNum = make_shared<long>(boost::any_cast<long>(m["remove_num"]));
    }
    if (m.find("selected_user_num") != m.end() && !m["selected_user_num"].empty()) {
      selectedUserNum = make_shared<long>(boost::any_cast<long>(m["selected_user_num"]));
    }
  }


  virtual ~EntitySetResponseBodyModule() = default;
};
class EntitySetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<EntitySetResponseBodyModule> module{};
  shared_ptr<bool> morePage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  EntitySetResponseBody() {}

  explicit EntitySetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (morePage) {
      res["more_page"] = boost::any(*morePage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        EntitySetResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<EntitySetResponseBodyModule>(model1);
      }
    }
    if (m.find("more_page") != m.end() && !m["more_page"].empty()) {
      morePage = make_shared<bool>(boost::any_cast<bool>(m["more_page"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~EntitySetResponseBody() = default;
};
class EntitySetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EntitySetResponseBody> body{};

  EntitySetResponse() {}

  explicit EntitySetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EntitySetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EntitySetResponseBody>(model1);
      }
    }
  }


  virtual ~EntitySetResponse() = default;
};
class EstimatedPriceQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  EstimatedPriceQueryHeaders() {}

  explicit EstimatedPriceQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~EstimatedPriceQueryHeaders() = default;
};
class EstimatedPriceQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> arrCity{};
  shared_ptr<string> category{};
  shared_ptr<string> depCity{};
  shared_ptr<long> endTime{};
  shared_ptr<string> itineraryId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> userId{};

  EstimatedPriceQueryRequest() {}

  explicit EstimatedPriceQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrCity) {
      res["arr_city"] = boost::any(*arrCity);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (depCity) {
      res["dep_city"] = boost::any(*depCity);
    }
    if (endTime) {
      res["end_time"] = boost::any(*endTime);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (startTime) {
      res["start_time"] = boost::any(*startTime);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_city") != m.end() && !m["arr_city"].empty()) {
      arrCity = make_shared<string>(boost::any_cast<string>(m["arr_city"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("dep_city") != m.end() && !m["dep_city"].empty()) {
      depCity = make_shared<string>(boost::any_cast<string>(m["dep_city"]));
    }
    if (m.find("end_time") != m.end() && !m["end_time"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["end_time"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("start_time") != m.end() && !m["start_time"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["start_time"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~EstimatedPriceQueryRequest() = default;
};
class EstimatedPriceQueryResponseBodyModuleHotelFeeDetail : public Darabonba::Model {
public:
  shared_ptr<string> city{};
  shared_ptr<long> criterion{};
  shared_ptr<string> itineraryId{};
  shared_ptr<long> total{};
  shared_ptr<long> tripDays{};

  EstimatedPriceQueryResponseBodyModuleHotelFeeDetail() {}

  explicit EstimatedPriceQueryResponseBodyModuleHotelFeeDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (city) {
      res["city"] = boost::any(*city);
    }
    if (criterion) {
      res["criterion"] = boost::any(*criterion);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    if (tripDays) {
      res["trip_days"] = boost::any(*tripDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("city") != m.end() && !m["city"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["city"]));
    }
    if (m.find("criterion") != m.end() && !m["criterion"].empty()) {
      criterion = make_shared<long>(boost::any_cast<long>(m["criterion"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
    if (m.find("trip_days") != m.end() && !m["trip_days"].empty()) {
      tripDays = make_shared<long>(boost::any_cast<long>(m["trip_days"]));
    }
  }


  virtual ~EstimatedPriceQueryResponseBodyModuleHotelFeeDetail() = default;
};
class EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest : public Darabonba::Model {
public:
  shared_ptr<string> arrTime{};
  shared_ptr<string> depTime{};
  shared_ptr<long> fee{};
  shared_ptr<string> seatGrade{};
  shared_ptr<string> vehicleNo{};

  EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest() {}

  explicit EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrTime) {
      res["arr_time"] = boost::any(*arrTime);
    }
    if (depTime) {
      res["dep_time"] = boost::any(*depTime);
    }
    if (fee) {
      res["fee"] = boost::any(*fee);
    }
    if (seatGrade) {
      res["seat_grade"] = boost::any(*seatGrade);
    }
    if (vehicleNo) {
      res["vehicle_no"] = boost::any(*vehicleNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_time") != m.end() && !m["arr_time"].empty()) {
      arrTime = make_shared<string>(boost::any_cast<string>(m["arr_time"]));
    }
    if (m.find("dep_time") != m.end() && !m["dep_time"].empty()) {
      depTime = make_shared<string>(boost::any_cast<string>(m["dep_time"]));
    }
    if (m.find("fee") != m.end() && !m["fee"].empty()) {
      fee = make_shared<long>(boost::any_cast<long>(m["fee"]));
    }
    if (m.find("seat_grade") != m.end() && !m["seat_grade"].empty()) {
      seatGrade = make_shared<string>(boost::any_cast<string>(m["seat_grade"]));
    }
    if (m.find("vehicle_no") != m.end() && !m["vehicle_no"].empty()) {
      vehicleNo = make_shared<string>(boost::any_cast<string>(m["vehicle_no"]));
    }
  }


  virtual ~EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest() = default;
};
class EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesMostExpensive : public Darabonba::Model {
public:
  shared_ptr<string> arrTime{};
  shared_ptr<string> depTime{};
  shared_ptr<long> fee{};
  shared_ptr<string> seatGrade{};
  shared_ptr<string> vehicleNo{};

  EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesMostExpensive() {}

  explicit EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesMostExpensive(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrTime) {
      res["arr_time"] = boost::any(*arrTime);
    }
    if (depTime) {
      res["dep_time"] = boost::any(*depTime);
    }
    if (fee) {
      res["fee"] = boost::any(*fee);
    }
    if (seatGrade) {
      res["seat_grade"] = boost::any(*seatGrade);
    }
    if (vehicleNo) {
      res["vehicle_no"] = boost::any(*vehicleNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_time") != m.end() && !m["arr_time"].empty()) {
      arrTime = make_shared<string>(boost::any_cast<string>(m["arr_time"]));
    }
    if (m.find("dep_time") != m.end() && !m["dep_time"].empty()) {
      depTime = make_shared<string>(boost::any_cast<string>(m["dep_time"]));
    }
    if (m.find("fee") != m.end() && !m["fee"].empty()) {
      fee = make_shared<long>(boost::any_cast<long>(m["fee"]));
    }
    if (m.find("seat_grade") != m.end() && !m["seat_grade"].empty()) {
      seatGrade = make_shared<string>(boost::any_cast<string>(m["seat_grade"]));
    }
    if (m.find("vehicle_no") != m.end() && !m["vehicle_no"].empty()) {
      vehicleNo = make_shared<string>(boost::any_cast<string>(m["vehicle_no"]));
    }
  }


  virtual ~EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesMostExpensive() = default;
};
class EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes : public Darabonba::Model {
public:
  shared_ptr<string> arrCity{};
  shared_ptr<long> arrDate{};
  shared_ptr<EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest> cheapest{};
  shared_ptr<string> depCity{};
  shared_ptr<long> depDate{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> itineraryId{};
  shared_ptr<EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesMostExpensive> mostExpensive{};
  shared_ptr<bool> success{};

  EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes() {}

  explicit EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrCity) {
      res["arr_city"] = boost::any(*arrCity);
    }
    if (arrDate) {
      res["arr_date"] = boost::any(*arrDate);
    }
    if (cheapest) {
      res["cheapest"] = cheapest ? boost::any(cheapest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (depCity) {
      res["dep_city"] = boost::any(*depCity);
    }
    if (depDate) {
      res["dep_date"] = boost::any(*depDate);
    }
    if (errMsg) {
      res["err_msg"] = boost::any(*errMsg);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (mostExpensive) {
      res["most_expensive"] = mostExpensive ? boost::any(mostExpensive->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_city") != m.end() && !m["arr_city"].empty()) {
      arrCity = make_shared<string>(boost::any_cast<string>(m["arr_city"]));
    }
    if (m.find("arr_date") != m.end() && !m["arr_date"].empty()) {
      arrDate = make_shared<long>(boost::any_cast<long>(m["arr_date"]));
    }
    if (m.find("cheapest") != m.end() && !m["cheapest"].empty()) {
      if (typeid(map<string, boost::any>) == m["cheapest"].type()) {
        EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cheapest"]));
        cheapest = make_shared<EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest>(model1);
      }
    }
    if (m.find("dep_city") != m.end() && !m["dep_city"].empty()) {
      depCity = make_shared<string>(boost::any_cast<string>(m["dep_city"]));
    }
    if (m.find("dep_date") != m.end() && !m["dep_date"].empty()) {
      depDate = make_shared<long>(boost::any_cast<long>(m["dep_date"]));
    }
    if (m.find("err_msg") != m.end() && !m["err_msg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["err_msg"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("most_expensive") != m.end() && !m["most_expensive"].empty()) {
      if (typeid(map<string, boost::any>) == m["most_expensive"].type()) {
        EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesMostExpensive model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["most_expensive"]));
        mostExpensive = make_shared<EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesMostExpensive>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes() = default;
};
class EstimatedPriceQueryResponseBodyModuleTrafficFee : public Darabonba::Model {
public:
  shared_ptr<vector<EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes>> btripRoutes{};
  shared_ptr<string> errMsg{};
  shared_ptr<long> maxFee{};
  shared_ptr<long> minFee{};
  shared_ptr<bool> success{};

  EstimatedPriceQueryResponseBodyModuleTrafficFee() {}

  explicit EstimatedPriceQueryResponseBodyModuleTrafficFee(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (btripRoutes) {
      vector<boost::any> temp1;
      for(auto item1:*btripRoutes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["btrip_routes"] = boost::any(temp1);
    }
    if (errMsg) {
      res["err_msg"] = boost::any(*errMsg);
    }
    if (maxFee) {
      res["max_fee"] = boost::any(*maxFee);
    }
    if (minFee) {
      res["min_fee"] = boost::any(*minFee);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("btrip_routes") != m.end() && !m["btrip_routes"].empty()) {
      if (typeid(vector<boost::any>) == m["btrip_routes"].type()) {
        vector<EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["btrip_routes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        btripRoutes = make_shared<vector<EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes>>(expect1);
      }
    }
    if (m.find("err_msg") != m.end() && !m["err_msg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["err_msg"]));
    }
    if (m.find("max_fee") != m.end() && !m["max_fee"].empty()) {
      maxFee = make_shared<long>(boost::any_cast<long>(m["max_fee"]));
    }
    if (m.find("min_fee") != m.end() && !m["min_fee"].empty()) {
      minFee = make_shared<long>(boost::any_cast<long>(m["min_fee"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~EstimatedPriceQueryResponseBodyModuleTrafficFee() = default;
};
class EstimatedPriceQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<vector<EstimatedPriceQueryResponseBodyModuleHotelFeeDetail>> hotelFeeDetail{};
  shared_ptr<EstimatedPriceQueryResponseBodyModuleTrafficFee> trafficFee{};

  EstimatedPriceQueryResponseBodyModule() {}

  explicit EstimatedPriceQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hotelFeeDetail) {
      vector<boost::any> temp1;
      for(auto item1:*hotelFeeDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hotel_fee_detail"] = boost::any(temp1);
    }
    if (trafficFee) {
      res["traffic_fee"] = trafficFee ? boost::any(trafficFee->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("hotel_fee_detail") != m.end() && !m["hotel_fee_detail"].empty()) {
      if (typeid(vector<boost::any>) == m["hotel_fee_detail"].type()) {
        vector<EstimatedPriceQueryResponseBodyModuleHotelFeeDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hotel_fee_detail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EstimatedPriceQueryResponseBodyModuleHotelFeeDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hotelFeeDetail = make_shared<vector<EstimatedPriceQueryResponseBodyModuleHotelFeeDetail>>(expect1);
      }
    }
    if (m.find("traffic_fee") != m.end() && !m["traffic_fee"].empty()) {
      if (typeid(map<string, boost::any>) == m["traffic_fee"].type()) {
        EstimatedPriceQueryResponseBodyModuleTrafficFee model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["traffic_fee"]));
        trafficFee = make_shared<EstimatedPriceQueryResponseBodyModuleTrafficFee>(model1);
      }
    }
  }


  virtual ~EstimatedPriceQueryResponseBodyModule() = default;
};
class EstimatedPriceQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<EstimatedPriceQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  EstimatedPriceQueryResponseBody() {}

  explicit EstimatedPriceQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        EstimatedPriceQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<EstimatedPriceQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~EstimatedPriceQueryResponseBody() = default;
};
class EstimatedPriceQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EstimatedPriceQueryResponseBody> body{};

  EstimatedPriceQueryResponse() {}

  explicit EstimatedPriceQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EstimatedPriceQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EstimatedPriceQueryResponseBody>(model1);
      }
    }
  }


  virtual ~EstimatedPriceQueryResponse() = default;
};
class ExceedApplySyncHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  ExceedApplySyncHeaders() {}

  explicit ExceedApplySyncHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~ExceedApplySyncHeaders() = default;
};
class ExceedApplySyncRequest : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};
  shared_ptr<long> bizCategory{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<string> thirdpartyFlowId{};
  shared_ptr<string> userId{};

  ExceedApplySyncRequest() {}

  explicit ExceedApplySyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (bizCategory) {
      res["biz_category"] = boost::any(*bizCategory);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (thirdpartyFlowId) {
      res["thirdparty_flow_id"] = boost::any(*thirdpartyFlowId);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("biz_category") != m.end() && !m["biz_category"].empty()) {
      bizCategory = make_shared<long>(boost::any_cast<long>(m["biz_category"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("thirdparty_flow_id") != m.end() && !m["thirdparty_flow_id"].empty()) {
      thirdpartyFlowId = make_shared<string>(boost::any_cast<string>(m["thirdparty_flow_id"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~ExceedApplySyncRequest() = default;
};
class ExceedApplySyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ExceedApplySyncResponseBody() {}

  explicit ExceedApplySyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = boost::any(*module);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      module = make_shared<bool>(boost::any_cast<bool>(m["module"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~ExceedApplySyncResponseBody() = default;
};
class ExceedApplySyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExceedApplySyncResponseBody> body{};

  ExceedApplySyncResponse() {}

  explicit ExceedApplySyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExceedApplySyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExceedApplySyncResponseBody>(model1);
      }
    }
  }


  virtual ~ExceedApplySyncResponse() = default;
};
class FlightBillSettlementQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  FlightBillSettlementQueryHeaders() {}

  explicit FlightBillSettlementQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~FlightBillSettlementQueryHeaders() = default;
};
class FlightBillSettlementQueryRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> periodEnd{};
  shared_ptr<string> periodStart{};

  FlightBillSettlementQueryRequest() {}

  explicit FlightBillSettlementQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["page_no"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (periodEnd) {
      res["period_end"] = boost::any(*periodEnd);
    }
    if (periodStart) {
      res["period_start"] = boost::any(*periodStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page_no") != m.end() && !m["page_no"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["page_no"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("period_end") != m.end() && !m["period_end"].empty()) {
      periodEnd = make_shared<string>(boost::any_cast<string>(m["period_end"]));
    }
    if (m.find("period_start") != m.end() && !m["period_start"].empty()) {
      periodStart = make_shared<string>(boost::any_cast<string>(m["period_start"]));
    }
  }


  virtual ~FlightBillSettlementQueryRequest() = default;
};
class FlightBillSettlementQueryResponseBodyModuleDataList : public Darabonba::Model {
public:
  shared_ptr<long> advanceDay{};
  shared_ptr<string> airlineCorpCode{};
  shared_ptr<string> airlineCorpName{};
  shared_ptr<string> alipayTradeNo{};
  shared_ptr<string> applyId{};
  shared_ptr<string> arrAirportCode{};
  shared_ptr<string> arrCity{};
  shared_ptr<string> arrDate{};
  shared_ptr<string> arrStation{};
  shared_ptr<string> arrTime{};
  shared_ptr<string> billRecordTime{};
  shared_ptr<string> bookTime{};
  shared_ptr<string> bookerId{};
  shared_ptr<string> bookerJobNo{};
  shared_ptr<string> bookerName{};
  shared_ptr<double> btripCouponFee{};
  shared_ptr<double> buildFee{};
  shared_ptr<string> cabin{};
  shared_ptr<string> cabinClass{};
  shared_ptr<string> capitalDirection{};
  shared_ptr<string> cascadeDepartment{};
  shared_ptr<double> changeFee{};
  shared_ptr<double> corpPayOrderFee{};
  shared_ptr<string> costCenter{};
  shared_ptr<string> costCenterNumber{};
  shared_ptr<double> coupon{};
  shared_ptr<string> depAirportCode{};
  shared_ptr<string> department{};
  shared_ptr<string> departmentId{};
  shared_ptr<string> deptCity{};
  shared_ptr<string> deptDate{};
  shared_ptr<string> deptStation{};
  shared_ptr<string> deptTime{};
  shared_ptr<string> discount{};
  shared_ptr<string> feeType{};
  shared_ptr<string> flightNo{};
  shared_ptr<string> index{};
  shared_ptr<double> insuranceFee{};
  shared_ptr<string> invoiceTitle{};
  shared_ptr<string> itineraryNum{};
  shared_ptr<double> itineraryPrice{};
  shared_ptr<string> mostDifferenceDeptTime{};
  shared_ptr<string> mostDifferenceDiscount{};
  shared_ptr<string> mostDifferenceFlightNo{};
  shared_ptr<double> mostDifferencePrice{};
  shared_ptr<string> mostDifferenceReason{};
  shared_ptr<double> mostPrice{};
  shared_ptr<double> negotiationCouponFee{};
  shared_ptr<double> oilFee{};
  shared_ptr<string> orderId{};
  shared_ptr<string> overApplyId{};
  shared_ptr<long> primaryId{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectName{};
  shared_ptr<double> refundFee{};
  shared_ptr<double> refundUpgradeCost{};
  shared_ptr<string> remark{};
  shared_ptr<string> repeatRefund{};
  shared_ptr<double> sealPrice{};
  shared_ptr<double> serviceFee{};
  shared_ptr<double> settlementFee{};
  shared_ptr<double> settlementGrantFee{};
  shared_ptr<string> settlementTime{};
  shared_ptr<string> settlementType{};
  shared_ptr<long> status{};
  shared_ptr<string> ticketId{};
  shared_ptr<string> travelerId{};
  shared_ptr<string> travelerJobNo{};
  shared_ptr<string> travelerName{};
  shared_ptr<double> upgradeCost{};
  shared_ptr<long> voucherType{};

  FlightBillSettlementQueryResponseBodyModuleDataList() {}

  explicit FlightBillSettlementQueryResponseBodyModuleDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advanceDay) {
      res["advance_day"] = boost::any(*advanceDay);
    }
    if (airlineCorpCode) {
      res["airline_corp_code"] = boost::any(*airlineCorpCode);
    }
    if (airlineCorpName) {
      res["airline_corp_name"] = boost::any(*airlineCorpName);
    }
    if (alipayTradeNo) {
      res["alipay_trade_no"] = boost::any(*alipayTradeNo);
    }
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (arrAirportCode) {
      res["arr_airport_code"] = boost::any(*arrAirportCode);
    }
    if (arrCity) {
      res["arr_city"] = boost::any(*arrCity);
    }
    if (arrDate) {
      res["arr_date"] = boost::any(*arrDate);
    }
    if (arrStation) {
      res["arr_station"] = boost::any(*arrStation);
    }
    if (arrTime) {
      res["arr_time"] = boost::any(*arrTime);
    }
    if (billRecordTime) {
      res["bill_record_time"] = boost::any(*billRecordTime);
    }
    if (bookTime) {
      res["book_time"] = boost::any(*bookTime);
    }
    if (bookerId) {
      res["booker_id"] = boost::any(*bookerId);
    }
    if (bookerJobNo) {
      res["booker_job_no"] = boost::any(*bookerJobNo);
    }
    if (bookerName) {
      res["booker_name"] = boost::any(*bookerName);
    }
    if (btripCouponFee) {
      res["btrip_coupon_fee"] = boost::any(*btripCouponFee);
    }
    if (buildFee) {
      res["build_fee"] = boost::any(*buildFee);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (capitalDirection) {
      res["capital_direction"] = boost::any(*capitalDirection);
    }
    if (cascadeDepartment) {
      res["cascade_department"] = boost::any(*cascadeDepartment);
    }
    if (changeFee) {
      res["change_fee"] = boost::any(*changeFee);
    }
    if (corpPayOrderFee) {
      res["corp_pay_order_fee"] = boost::any(*corpPayOrderFee);
    }
    if (costCenter) {
      res["cost_center"] = boost::any(*costCenter);
    }
    if (costCenterNumber) {
      res["cost_center_number"] = boost::any(*costCenterNumber);
    }
    if (coupon) {
      res["coupon"] = boost::any(*coupon);
    }
    if (depAirportCode) {
      res["dep_airport_code"] = boost::any(*depAirportCode);
    }
    if (department) {
      res["department"] = boost::any(*department);
    }
    if (departmentId) {
      res["department_id"] = boost::any(*departmentId);
    }
    if (deptCity) {
      res["dept_city"] = boost::any(*deptCity);
    }
    if (deptDate) {
      res["dept_date"] = boost::any(*deptDate);
    }
    if (deptStation) {
      res["dept_station"] = boost::any(*deptStation);
    }
    if (deptTime) {
      res["dept_time"] = boost::any(*deptTime);
    }
    if (discount) {
      res["discount"] = boost::any(*discount);
    }
    if (feeType) {
      res["fee_type"] = boost::any(*feeType);
    }
    if (flightNo) {
      res["flight_no"] = boost::any(*flightNo);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (insuranceFee) {
      res["insurance_fee"] = boost::any(*insuranceFee);
    }
    if (invoiceTitle) {
      res["invoice_title"] = boost::any(*invoiceTitle);
    }
    if (itineraryNum) {
      res["itinerary_num"] = boost::any(*itineraryNum);
    }
    if (itineraryPrice) {
      res["itinerary_price"] = boost::any(*itineraryPrice);
    }
    if (mostDifferenceDeptTime) {
      res["most_difference_dept_time"] = boost::any(*mostDifferenceDeptTime);
    }
    if (mostDifferenceDiscount) {
      res["most_difference_discount"] = boost::any(*mostDifferenceDiscount);
    }
    if (mostDifferenceFlightNo) {
      res["most_difference_flight_no"] = boost::any(*mostDifferenceFlightNo);
    }
    if (mostDifferencePrice) {
      res["most_difference_price"] = boost::any(*mostDifferencePrice);
    }
    if (mostDifferenceReason) {
      res["most_difference_reason"] = boost::any(*mostDifferenceReason);
    }
    if (mostPrice) {
      res["most_price"] = boost::any(*mostPrice);
    }
    if (negotiationCouponFee) {
      res["negotiation_coupon_fee"] = boost::any(*negotiationCouponFee);
    }
    if (oilFee) {
      res["oil_fee"] = boost::any(*oilFee);
    }
    if (orderId) {
      res["order_id"] = boost::any(*orderId);
    }
    if (overApplyId) {
      res["over_apply_id"] = boost::any(*overApplyId);
    }
    if (primaryId) {
      res["primary_id"] = boost::any(*primaryId);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectName) {
      res["project_name"] = boost::any(*projectName);
    }
    if (refundFee) {
      res["refund_fee"] = boost::any(*refundFee);
    }
    if (refundUpgradeCost) {
      res["refund_upgrade_cost"] = boost::any(*refundUpgradeCost);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (repeatRefund) {
      res["repeat_refund"] = boost::any(*repeatRefund);
    }
    if (sealPrice) {
      res["seal_price"] = boost::any(*sealPrice);
    }
    if (serviceFee) {
      res["service_fee"] = boost::any(*serviceFee);
    }
    if (settlementFee) {
      res["settlement_fee"] = boost::any(*settlementFee);
    }
    if (settlementGrantFee) {
      res["settlement_grant_fee"] = boost::any(*settlementGrantFee);
    }
    if (settlementTime) {
      res["settlement_time"] = boost::any(*settlementTime);
    }
    if (settlementType) {
      res["settlement_type"] = boost::any(*settlementType);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (ticketId) {
      res["ticket_id"] = boost::any(*ticketId);
    }
    if (travelerId) {
      res["traveler_id"] = boost::any(*travelerId);
    }
    if (travelerJobNo) {
      res["traveler_job_no"] = boost::any(*travelerJobNo);
    }
    if (travelerName) {
      res["traveler_name"] = boost::any(*travelerName);
    }
    if (upgradeCost) {
      res["upgrade_cost"] = boost::any(*upgradeCost);
    }
    if (voucherType) {
      res["voucher_type"] = boost::any(*voucherType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("advance_day") != m.end() && !m["advance_day"].empty()) {
      advanceDay = make_shared<long>(boost::any_cast<long>(m["advance_day"]));
    }
    if (m.find("airline_corp_code") != m.end() && !m["airline_corp_code"].empty()) {
      airlineCorpCode = make_shared<string>(boost::any_cast<string>(m["airline_corp_code"]));
    }
    if (m.find("airline_corp_name") != m.end() && !m["airline_corp_name"].empty()) {
      airlineCorpName = make_shared<string>(boost::any_cast<string>(m["airline_corp_name"]));
    }
    if (m.find("alipay_trade_no") != m.end() && !m["alipay_trade_no"].empty()) {
      alipayTradeNo = make_shared<string>(boost::any_cast<string>(m["alipay_trade_no"]));
    }
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["apply_id"]));
    }
    if (m.find("arr_airport_code") != m.end() && !m["arr_airport_code"].empty()) {
      arrAirportCode = make_shared<string>(boost::any_cast<string>(m["arr_airport_code"]));
    }
    if (m.find("arr_city") != m.end() && !m["arr_city"].empty()) {
      arrCity = make_shared<string>(boost::any_cast<string>(m["arr_city"]));
    }
    if (m.find("arr_date") != m.end() && !m["arr_date"].empty()) {
      arrDate = make_shared<string>(boost::any_cast<string>(m["arr_date"]));
    }
    if (m.find("arr_station") != m.end() && !m["arr_station"].empty()) {
      arrStation = make_shared<string>(boost::any_cast<string>(m["arr_station"]));
    }
    if (m.find("arr_time") != m.end() && !m["arr_time"].empty()) {
      arrTime = make_shared<string>(boost::any_cast<string>(m["arr_time"]));
    }
    if (m.find("bill_record_time") != m.end() && !m["bill_record_time"].empty()) {
      billRecordTime = make_shared<string>(boost::any_cast<string>(m["bill_record_time"]));
    }
    if (m.find("book_time") != m.end() && !m["book_time"].empty()) {
      bookTime = make_shared<string>(boost::any_cast<string>(m["book_time"]));
    }
    if (m.find("booker_id") != m.end() && !m["booker_id"].empty()) {
      bookerId = make_shared<string>(boost::any_cast<string>(m["booker_id"]));
    }
    if (m.find("booker_job_no") != m.end() && !m["booker_job_no"].empty()) {
      bookerJobNo = make_shared<string>(boost::any_cast<string>(m["booker_job_no"]));
    }
    if (m.find("booker_name") != m.end() && !m["booker_name"].empty()) {
      bookerName = make_shared<string>(boost::any_cast<string>(m["booker_name"]));
    }
    if (m.find("btrip_coupon_fee") != m.end() && !m["btrip_coupon_fee"].empty()) {
      btripCouponFee = make_shared<double>(boost::any_cast<double>(m["btrip_coupon_fee"]));
    }
    if (m.find("build_fee") != m.end() && !m["build_fee"].empty()) {
      buildFee = make_shared<double>(boost::any_cast<double>(m["build_fee"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("capital_direction") != m.end() && !m["capital_direction"].empty()) {
      capitalDirection = make_shared<string>(boost::any_cast<string>(m["capital_direction"]));
    }
    if (m.find("cascade_department") != m.end() && !m["cascade_department"].empty()) {
      cascadeDepartment = make_shared<string>(boost::any_cast<string>(m["cascade_department"]));
    }
    if (m.find("change_fee") != m.end() && !m["change_fee"].empty()) {
      changeFee = make_shared<double>(boost::any_cast<double>(m["change_fee"]));
    }
    if (m.find("corp_pay_order_fee") != m.end() && !m["corp_pay_order_fee"].empty()) {
      corpPayOrderFee = make_shared<double>(boost::any_cast<double>(m["corp_pay_order_fee"]));
    }
    if (m.find("cost_center") != m.end() && !m["cost_center"].empty()) {
      costCenter = make_shared<string>(boost::any_cast<string>(m["cost_center"]));
    }
    if (m.find("cost_center_number") != m.end() && !m["cost_center_number"].empty()) {
      costCenterNumber = make_shared<string>(boost::any_cast<string>(m["cost_center_number"]));
    }
    if (m.find("coupon") != m.end() && !m["coupon"].empty()) {
      coupon = make_shared<double>(boost::any_cast<double>(m["coupon"]));
    }
    if (m.find("dep_airport_code") != m.end() && !m["dep_airport_code"].empty()) {
      depAirportCode = make_shared<string>(boost::any_cast<string>(m["dep_airport_code"]));
    }
    if (m.find("department") != m.end() && !m["department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["department"]));
    }
    if (m.find("department_id") != m.end() && !m["department_id"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["department_id"]));
    }
    if (m.find("dept_city") != m.end() && !m["dept_city"].empty()) {
      deptCity = make_shared<string>(boost::any_cast<string>(m["dept_city"]));
    }
    if (m.find("dept_date") != m.end() && !m["dept_date"].empty()) {
      deptDate = make_shared<string>(boost::any_cast<string>(m["dept_date"]));
    }
    if (m.find("dept_station") != m.end() && !m["dept_station"].empty()) {
      deptStation = make_shared<string>(boost::any_cast<string>(m["dept_station"]));
    }
    if (m.find("dept_time") != m.end() && !m["dept_time"].empty()) {
      deptTime = make_shared<string>(boost::any_cast<string>(m["dept_time"]));
    }
    if (m.find("discount") != m.end() && !m["discount"].empty()) {
      discount = make_shared<string>(boost::any_cast<string>(m["discount"]));
    }
    if (m.find("fee_type") != m.end() && !m["fee_type"].empty()) {
      feeType = make_shared<string>(boost::any_cast<string>(m["fee_type"]));
    }
    if (m.find("flight_no") != m.end() && !m["flight_no"].empty()) {
      flightNo = make_shared<string>(boost::any_cast<string>(m["flight_no"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["index"]));
    }
    if (m.find("insurance_fee") != m.end() && !m["insurance_fee"].empty()) {
      insuranceFee = make_shared<double>(boost::any_cast<double>(m["insurance_fee"]));
    }
    if (m.find("invoice_title") != m.end() && !m["invoice_title"].empty()) {
      invoiceTitle = make_shared<string>(boost::any_cast<string>(m["invoice_title"]));
    }
    if (m.find("itinerary_num") != m.end() && !m["itinerary_num"].empty()) {
      itineraryNum = make_shared<string>(boost::any_cast<string>(m["itinerary_num"]));
    }
    if (m.find("itinerary_price") != m.end() && !m["itinerary_price"].empty()) {
      itineraryPrice = make_shared<double>(boost::any_cast<double>(m["itinerary_price"]));
    }
    if (m.find("most_difference_dept_time") != m.end() && !m["most_difference_dept_time"].empty()) {
      mostDifferenceDeptTime = make_shared<string>(boost::any_cast<string>(m["most_difference_dept_time"]));
    }
    if (m.find("most_difference_discount") != m.end() && !m["most_difference_discount"].empty()) {
      mostDifferenceDiscount = make_shared<string>(boost::any_cast<string>(m["most_difference_discount"]));
    }
    if (m.find("most_difference_flight_no") != m.end() && !m["most_difference_flight_no"].empty()) {
      mostDifferenceFlightNo = make_shared<string>(boost::any_cast<string>(m["most_difference_flight_no"]));
    }
    if (m.find("most_difference_price") != m.end() && !m["most_difference_price"].empty()) {
      mostDifferencePrice = make_shared<double>(boost::any_cast<double>(m["most_difference_price"]));
    }
    if (m.find("most_difference_reason") != m.end() && !m["most_difference_reason"].empty()) {
      mostDifferenceReason = make_shared<string>(boost::any_cast<string>(m["most_difference_reason"]));
    }
    if (m.find("most_price") != m.end() && !m["most_price"].empty()) {
      mostPrice = make_shared<double>(boost::any_cast<double>(m["most_price"]));
    }
    if (m.find("negotiation_coupon_fee") != m.end() && !m["negotiation_coupon_fee"].empty()) {
      negotiationCouponFee = make_shared<double>(boost::any_cast<double>(m["negotiation_coupon_fee"]));
    }
    if (m.find("oil_fee") != m.end() && !m["oil_fee"].empty()) {
      oilFee = make_shared<double>(boost::any_cast<double>(m["oil_fee"]));
    }
    if (m.find("order_id") != m.end() && !m["order_id"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["order_id"]));
    }
    if (m.find("over_apply_id") != m.end() && !m["over_apply_id"].empty()) {
      overApplyId = make_shared<string>(boost::any_cast<string>(m["over_apply_id"]));
    }
    if (m.find("primary_id") != m.end() && !m["primary_id"].empty()) {
      primaryId = make_shared<long>(boost::any_cast<long>(m["primary_id"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_name") != m.end() && !m["project_name"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["project_name"]));
    }
    if (m.find("refund_fee") != m.end() && !m["refund_fee"].empty()) {
      refundFee = make_shared<double>(boost::any_cast<double>(m["refund_fee"]));
    }
    if (m.find("refund_upgrade_cost") != m.end() && !m["refund_upgrade_cost"].empty()) {
      refundUpgradeCost = make_shared<double>(boost::any_cast<double>(m["refund_upgrade_cost"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("repeat_refund") != m.end() && !m["repeat_refund"].empty()) {
      repeatRefund = make_shared<string>(boost::any_cast<string>(m["repeat_refund"]));
    }
    if (m.find("seal_price") != m.end() && !m["seal_price"].empty()) {
      sealPrice = make_shared<double>(boost::any_cast<double>(m["seal_price"]));
    }
    if (m.find("service_fee") != m.end() && !m["service_fee"].empty()) {
      serviceFee = make_shared<double>(boost::any_cast<double>(m["service_fee"]));
    }
    if (m.find("settlement_fee") != m.end() && !m["settlement_fee"].empty()) {
      settlementFee = make_shared<double>(boost::any_cast<double>(m["settlement_fee"]));
    }
    if (m.find("settlement_grant_fee") != m.end() && !m["settlement_grant_fee"].empty()) {
      settlementGrantFee = make_shared<double>(boost::any_cast<double>(m["settlement_grant_fee"]));
    }
    if (m.find("settlement_time") != m.end() && !m["settlement_time"].empty()) {
      settlementTime = make_shared<string>(boost::any_cast<string>(m["settlement_time"]));
    }
    if (m.find("settlement_type") != m.end() && !m["settlement_type"].empty()) {
      settlementType = make_shared<string>(boost::any_cast<string>(m["settlement_type"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("ticket_id") != m.end() && !m["ticket_id"].empty()) {
      ticketId = make_shared<string>(boost::any_cast<string>(m["ticket_id"]));
    }
    if (m.find("traveler_id") != m.end() && !m["traveler_id"].empty()) {
      travelerId = make_shared<string>(boost::any_cast<string>(m["traveler_id"]));
    }
    if (m.find("traveler_job_no") != m.end() && !m["traveler_job_no"].empty()) {
      travelerJobNo = make_shared<string>(boost::any_cast<string>(m["traveler_job_no"]));
    }
    if (m.find("traveler_name") != m.end() && !m["traveler_name"].empty()) {
      travelerName = make_shared<string>(boost::any_cast<string>(m["traveler_name"]));
    }
    if (m.find("upgrade_cost") != m.end() && !m["upgrade_cost"].empty()) {
      upgradeCost = make_shared<double>(boost::any_cast<double>(m["upgrade_cost"]));
    }
    if (m.find("voucher_type") != m.end() && !m["voucher_type"].empty()) {
      voucherType = make_shared<long>(boost::any_cast<long>(m["voucher_type"]));
    }
  }


  virtual ~FlightBillSettlementQueryResponseBodyModuleDataList() = default;
};
class FlightBillSettlementQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> category{};
  shared_ptr<string> corpId{};
  shared_ptr<vector<FlightBillSettlementQueryResponseBodyModuleDataList>> dataList{};
  shared_ptr<string> periodEnd{};
  shared_ptr<string> periodStart{};
  shared_ptr<long> totalNum{};

  FlightBillSettlementQueryResponseBodyModule() {}

  explicit FlightBillSettlementQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data_list"] = boost::any(temp1);
    }
    if (periodEnd) {
      res["period_end"] = boost::any(*periodEnd);
    }
    if (periodStart) {
      res["period_start"] = boost::any(*periodStart);
    }
    if (totalNum) {
      res["total_num"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<long>(boost::any_cast<long>(m["category"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("data_list") != m.end() && !m["data_list"].empty()) {
      if (typeid(vector<boost::any>) == m["data_list"].type()) {
        vector<FlightBillSettlementQueryResponseBodyModuleDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FlightBillSettlementQueryResponseBodyModuleDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<FlightBillSettlementQueryResponseBodyModuleDataList>>(expect1);
      }
    }
    if (m.find("period_end") != m.end() && !m["period_end"].empty()) {
      periodEnd = make_shared<string>(boost::any_cast<string>(m["period_end"]));
    }
    if (m.find("period_start") != m.end() && !m["period_start"].empty()) {
      periodStart = make_shared<string>(boost::any_cast<string>(m["period_start"]));
    }
    if (m.find("total_num") != m.end() && !m["total_num"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["total_num"]));
    }
  }


  virtual ~FlightBillSettlementQueryResponseBodyModule() = default;
};
class FlightBillSettlementQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<FlightBillSettlementQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  FlightBillSettlementQueryResponseBody() {}

  explicit FlightBillSettlementQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        FlightBillSettlementQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<FlightBillSettlementQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~FlightBillSettlementQueryResponseBody() = default;
};
class FlightBillSettlementQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FlightBillSettlementQueryResponseBody> body{};

  FlightBillSettlementQueryResponse() {}

  explicit FlightBillSettlementQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FlightBillSettlementQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FlightBillSettlementQueryResponseBody>(model1);
      }
    }
  }


  virtual ~FlightBillSettlementQueryResponse() = default;
};
class FlightExceedApplyQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  FlightExceedApplyQueryHeaders() {}

  explicit FlightExceedApplyQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~FlightExceedApplyQueryHeaders() = default;
};
class FlightExceedApplyQueryRequest : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};

  FlightExceedApplyQueryRequest() {}

  explicit FlightExceedApplyQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
  }


  virtual ~FlightExceedApplyQueryRequest() = default;
};
class FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo : public Darabonba::Model {
public:
  shared_ptr<string> arrCity{};
  shared_ptr<string> arrCityName{};
  shared_ptr<string> arrTime{};
  shared_ptr<string> cabin{};
  shared_ptr<long> cabinClass{};
  shared_ptr<string> cabinClassStr{};
  shared_ptr<string> depCity{};
  shared_ptr<string> depCityName{};
  shared_ptr<string> depTime{};
  shared_ptr<string> discount{};
  shared_ptr<string> flightNo{};
  shared_ptr<long> price{};
  shared_ptr<long> type{};

  FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo() {}

  explicit FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrCity) {
      res["arr_city"] = boost::any(*arrCity);
    }
    if (arrCityName) {
      res["arr_city_name"] = boost::any(*arrCityName);
    }
    if (arrTime) {
      res["arr_time"] = boost::any(*arrTime);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (cabinClassStr) {
      res["cabin_class_str"] = boost::any(*cabinClassStr);
    }
    if (depCity) {
      res["dep_city"] = boost::any(*depCity);
    }
    if (depCityName) {
      res["dep_city_name"] = boost::any(*depCityName);
    }
    if (depTime) {
      res["dep_time"] = boost::any(*depTime);
    }
    if (discount) {
      res["discount"] = boost::any(*discount);
    }
    if (flightNo) {
      res["flight_no"] = boost::any(*flightNo);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_city") != m.end() && !m["arr_city"].empty()) {
      arrCity = make_shared<string>(boost::any_cast<string>(m["arr_city"]));
    }
    if (m.find("arr_city_name") != m.end() && !m["arr_city_name"].empty()) {
      arrCityName = make_shared<string>(boost::any_cast<string>(m["arr_city_name"]));
    }
    if (m.find("arr_time") != m.end() && !m["arr_time"].empty()) {
      arrTime = make_shared<string>(boost::any_cast<string>(m["arr_time"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<long>(boost::any_cast<long>(m["cabin_class"]));
    }
    if (m.find("cabin_class_str") != m.end() && !m["cabin_class_str"].empty()) {
      cabinClassStr = make_shared<string>(boost::any_cast<string>(m["cabin_class_str"]));
    }
    if (m.find("dep_city") != m.end() && !m["dep_city"].empty()) {
      depCity = make_shared<string>(boost::any_cast<string>(m["dep_city"]));
    }
    if (m.find("dep_city_name") != m.end() && !m["dep_city_name"].empty()) {
      depCityName = make_shared<string>(boost::any_cast<string>(m["dep_city_name"]));
    }
    if (m.find("dep_time") != m.end() && !m["dep_time"].empty()) {
      depTime = make_shared<string>(boost::any_cast<string>(m["dep_time"]));
    }
    if (m.find("discount") != m.end() && !m["discount"].empty()) {
      discount = make_shared<string>(boost::any_cast<string>(m["discount"]));
    }
    if (m.find("flight_no") != m.end() && !m["flight_no"].empty()) {
      flightNo = make_shared<string>(boost::any_cast<string>(m["flight_no"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["price"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo() = default;
};
class FlightExceedApplyQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};
  shared_ptr<FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo> applyIntentionInfoDo{};
  shared_ptr<string> btripCause{};
  shared_ptr<string> corpId{};
  shared_ptr<string> exceedReason{};
  shared_ptr<long> exceedType{};
  shared_ptr<string> originStandard{};
  shared_ptr<long> status{};
  shared_ptr<string> submitTime{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartCorpId{};
  shared_ptr<string> userId{};

  FlightExceedApplyQueryResponseBodyModule() {}

  explicit FlightExceedApplyQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (applyIntentionInfoDo) {
      res["apply_intention_info_do"] = applyIntentionInfoDo ? boost::any(applyIntentionInfoDo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (btripCause) {
      res["btrip_cause"] = boost::any(*btripCause);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (exceedReason) {
      res["exceed_reason"] = boost::any(*exceedReason);
    }
    if (exceedType) {
      res["exceed_type"] = boost::any(*exceedType);
    }
    if (originStandard) {
      res["origin_standard"] = boost::any(*originStandard);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (submitTime) {
      res["submit_time"] = boost::any(*submitTime);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartCorpId) {
      res["thirdpart_corp_id"] = boost::any(*thirdpartCorpId);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("apply_intention_info_do") != m.end() && !m["apply_intention_info_do"].empty()) {
      if (typeid(map<string, boost::any>) == m["apply_intention_info_do"].type()) {
        FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["apply_intention_info_do"]));
        applyIntentionInfoDo = make_shared<FlightExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo>(model1);
      }
    }
    if (m.find("btrip_cause") != m.end() && !m["btrip_cause"].empty()) {
      btripCause = make_shared<string>(boost::any_cast<string>(m["btrip_cause"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("exceed_reason") != m.end() && !m["exceed_reason"].empty()) {
      exceedReason = make_shared<string>(boost::any_cast<string>(m["exceed_reason"]));
    }
    if (m.find("exceed_type") != m.end() && !m["exceed_type"].empty()) {
      exceedType = make_shared<long>(boost::any_cast<long>(m["exceed_type"]));
    }
    if (m.find("origin_standard") != m.end() && !m["origin_standard"].empty()) {
      originStandard = make_shared<string>(boost::any_cast<string>(m["origin_standard"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("submit_time") != m.end() && !m["submit_time"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["submit_time"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_corp_id") != m.end() && !m["thirdpart_corp_id"].empty()) {
      thirdpartCorpId = make_shared<string>(boost::any_cast<string>(m["thirdpart_corp_id"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~FlightExceedApplyQueryResponseBodyModule() = default;
};
class FlightExceedApplyQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<FlightExceedApplyQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  FlightExceedApplyQueryResponseBody() {}

  explicit FlightExceedApplyQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        FlightExceedApplyQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<FlightExceedApplyQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~FlightExceedApplyQueryResponseBody() = default;
};
class FlightExceedApplyQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FlightExceedApplyQueryResponseBody> body{};

  FlightExceedApplyQueryResponse() {}

  explicit FlightExceedApplyQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FlightExceedApplyQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FlightExceedApplyQueryResponseBody>(model1);
      }
    }
  }


  virtual ~FlightExceedApplyQueryResponse() = default;
};
class FlightOrderListQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  FlightOrderListQueryHeaders() {}

  explicit FlightOrderListQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~FlightOrderListQueryHeaders() = default;
};
class FlightOrderListQueryRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allApply{};
  shared_ptr<long> applyId{};
  shared_ptr<string> departId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> updateEndTime{};
  shared_ptr<string> updateStartTime{};
  shared_ptr<string> userId{};

  FlightOrderListQueryRequest() {}

  explicit FlightOrderListQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allApply) {
      res["all_apply"] = boost::any(*allApply);
    }
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (endTime) {
      res["end_time"] = boost::any(*endTime);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["start_time"] = boost::any(*startTime);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (updateEndTime) {
      res["update_end_time"] = boost::any(*updateEndTime);
    }
    if (updateStartTime) {
      res["update_start_time"] = boost::any(*updateStartTime);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("all_apply") != m.end() && !m["all_apply"].empty()) {
      allApply = make_shared<bool>(boost::any_cast<bool>(m["all_apply"]));
    }
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("end_time") != m.end() && !m["end_time"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["end_time"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("start_time") != m.end() && !m["start_time"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["start_time"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("update_end_time") != m.end() && !m["update_end_time"].empty()) {
      updateEndTime = make_shared<string>(boost::any_cast<string>(m["update_end_time"]));
    }
    if (m.find("update_start_time") != m.end() && !m["update_start_time"].empty()) {
      updateStartTime = make_shared<string>(boost::any_cast<string>(m["update_start_time"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~FlightOrderListQueryRequest() = default;
};
class FlightOrderListQueryResponseBodyModuleCostCenter : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> number{};

  FlightOrderListQueryResponseBodyModuleCostCenter() {}

  explicit FlightOrderListQueryResponseBodyModuleCostCenter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (number) {
      res["number"] = boost::any(*number);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["number"]));
    }
  }


  virtual ~FlightOrderListQueryResponseBodyModuleCostCenter() = default;
};
class FlightOrderListQueryResponseBodyModuleInsureInfoList : public Darabonba::Model {
public:
  shared_ptr<string> insureNo{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};

  FlightOrderListQueryResponseBodyModuleInsureInfoList() {}

  explicit FlightOrderListQueryResponseBodyModuleInsureInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (insureNo) {
      res["insure_no"] = boost::any(*insureNo);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("insure_no") != m.end() && !m["insure_no"].empty()) {
      insureNo = make_shared<string>(boost::any_cast<string>(m["insure_no"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~FlightOrderListQueryResponseBodyModuleInsureInfoList() = default;
};
class FlightOrderListQueryResponseBodyModuleInvoice : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> title{};

  FlightOrderListQueryResponseBodyModuleInvoice() {}

  explicit FlightOrderListQueryResponseBodyModuleInvoice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~FlightOrderListQueryResponseBodyModuleInvoice() = default;
};
class FlightOrderListQueryResponseBodyModulePriceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> categoryCode{};
  shared_ptr<long> categoryType{};
  shared_ptr<string> changeFlightNo{};
  shared_ptr<string> discount{};
  shared_ptr<string> endTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> originalTicketNo{};
  shared_ptr<string> passengerName{};
  shared_ptr<long> payType{};
  shared_ptr<double> price{};
  shared_ptr<string> startTime{};
  shared_ptr<string> ticketNo{};
  shared_ptr<string> tradeId{};
  shared_ptr<long> type{};

  FlightOrderListQueryResponseBodyModulePriceInfoList() {}

  explicit FlightOrderListQueryResponseBodyModulePriceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryCode) {
      res["category_code"] = boost::any(*categoryCode);
    }
    if (categoryType) {
      res["category_type"] = boost::any(*categoryType);
    }
    if (changeFlightNo) {
      res["change_flight_no"] = boost::any(*changeFlightNo);
    }
    if (discount) {
      res["discount"] = boost::any(*discount);
    }
    if (endTime) {
      res["end_time"] = boost::any(*endTime);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (originalTicketNo) {
      res["original_ticket_no"] = boost::any(*originalTicketNo);
    }
    if (passengerName) {
      res["passenger_name"] = boost::any(*passengerName);
    }
    if (payType) {
      res["pay_type"] = boost::any(*payType);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    if (startTime) {
      res["start_time"] = boost::any(*startTime);
    }
    if (ticketNo) {
      res["ticket_no"] = boost::any(*ticketNo);
    }
    if (tradeId) {
      res["trade_id"] = boost::any(*tradeId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category_code") != m.end() && !m["category_code"].empty()) {
      categoryCode = make_shared<long>(boost::any_cast<long>(m["category_code"]));
    }
    if (m.find("category_type") != m.end() && !m["category_type"].empty()) {
      categoryType = make_shared<long>(boost::any_cast<long>(m["category_type"]));
    }
    if (m.find("change_flight_no") != m.end() && !m["change_flight_no"].empty()) {
      changeFlightNo = make_shared<string>(boost::any_cast<string>(m["change_flight_no"]));
    }
    if (m.find("discount") != m.end() && !m["discount"].empty()) {
      discount = make_shared<string>(boost::any_cast<string>(m["discount"]));
    }
    if (m.find("end_time") != m.end() && !m["end_time"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["end_time"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("original_ticket_no") != m.end() && !m["original_ticket_no"].empty()) {
      originalTicketNo = make_shared<string>(boost::any_cast<string>(m["original_ticket_no"]));
    }
    if (m.find("passenger_name") != m.end() && !m["passenger_name"].empty()) {
      passengerName = make_shared<string>(boost::any_cast<string>(m["passenger_name"]));
    }
    if (m.find("pay_type") != m.end() && !m["pay_type"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["pay_type"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["price"]));
    }
    if (m.find("start_time") != m.end() && !m["start_time"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["start_time"]));
    }
    if (m.find("ticket_no") != m.end() && !m["ticket_no"].empty()) {
      ticketNo = make_shared<string>(boost::any_cast<string>(m["ticket_no"]));
    }
    if (m.find("trade_id") != m.end() && !m["trade_id"].empty()) {
      tradeId = make_shared<string>(boost::any_cast<string>(m["trade_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~FlightOrderListQueryResponseBodyModulePriceInfoList() = default;
};
class FlightOrderListQueryResponseBodyModuleUserAffiliateList : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  FlightOrderListQueryResponseBodyModuleUserAffiliateList() {}

  explicit FlightOrderListQueryResponseBodyModuleUserAffiliateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~FlightOrderListQueryResponseBodyModuleUserAffiliateList() = default;
};
class FlightOrderListQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};
  shared_ptr<string> arrAirport{};
  shared_ptr<string> arrCity{};
  shared_ptr<string> btripTitle{};
  shared_ptr<string> cabinClass{};
  shared_ptr<string> contactName{};
  shared_ptr<string> corpId{};
  shared_ptr<string> corpName{};
  shared_ptr<FlightOrderListQueryResponseBodyModuleCostCenter> costCenter{};
  shared_ptr<string> depAirport{};
  shared_ptr<string> depCity{};
  shared_ptr<string> depDate{};
  shared_ptr<string> departId{};
  shared_ptr<string> departName{};
  shared_ptr<string> discount{};
  shared_ptr<string> flightNo{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<vector<FlightOrderListQueryResponseBodyModuleInsureInfoList>> insureInfoList{};
  shared_ptr<FlightOrderListQueryResponseBodyModuleInvoice> invoice{};
  shared_ptr<long> passengerCount{};
  shared_ptr<string> passengerName{};
  shared_ptr<vector<FlightOrderListQueryResponseBodyModulePriceInfoList>> priceInfoList{};
  shared_ptr<string> projectCode{};
  shared_ptr<long> projectId{};
  shared_ptr<string> projectTitle{};
  shared_ptr<string> retDate{};
  shared_ptr<long> status{};
  shared_ptr<string> thirdPartProjectId{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartItineraryId{};
  shared_ptr<long> tripType{};
  shared_ptr<vector<FlightOrderListQueryResponseBodyModuleUserAffiliateList>> userAffiliateList{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  FlightOrderListQueryResponseBodyModule() {}

  explicit FlightOrderListQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (arrAirport) {
      res["arr_airport"] = boost::any(*arrAirport);
    }
    if (arrCity) {
      res["arr_city"] = boost::any(*arrCity);
    }
    if (btripTitle) {
      res["btrip_title"] = boost::any(*btripTitle);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (contactName) {
      res["contact_name"] = boost::any(*contactName);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (corpName) {
      res["corp_name"] = boost::any(*corpName);
    }
    if (costCenter) {
      res["cost_center"] = costCenter ? boost::any(costCenter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (depAirport) {
      res["dep_airport"] = boost::any(*depAirport);
    }
    if (depCity) {
      res["dep_city"] = boost::any(*depCity);
    }
    if (depDate) {
      res["dep_date"] = boost::any(*depDate);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (departName) {
      res["depart_name"] = boost::any(*departName);
    }
    if (discount) {
      res["discount"] = boost::any(*discount);
    }
    if (flightNo) {
      res["flight_no"] = boost::any(*flightNo);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmt_modified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (insureInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*insureInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["insure_info_list"] = boost::any(temp1);
    }
    if (invoice) {
      res["invoice"] = invoice ? boost::any(invoice->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (passengerCount) {
      res["passenger_count"] = boost::any(*passengerCount);
    }
    if (passengerName) {
      res["passenger_name"] = boost::any(*passengerName);
    }
    if (priceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*priceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["price_info_list"] = boost::any(temp1);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectId) {
      res["project_id"] = boost::any(*projectId);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (retDate) {
      res["ret_date"] = boost::any(*retDate);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (thirdPartProjectId) {
      res["third_part_project_id"] = boost::any(*thirdPartProjectId);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartItineraryId) {
      res["thirdpart_itinerary_id"] = boost::any(*thirdpartItineraryId);
    }
    if (tripType) {
      res["trip_type"] = boost::any(*tripType);
    }
    if (userAffiliateList) {
      vector<boost::any> temp1;
      for(auto item1:*userAffiliateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["user_affiliate_list"] = boost::any(temp1);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("arr_airport") != m.end() && !m["arr_airport"].empty()) {
      arrAirport = make_shared<string>(boost::any_cast<string>(m["arr_airport"]));
    }
    if (m.find("arr_city") != m.end() && !m["arr_city"].empty()) {
      arrCity = make_shared<string>(boost::any_cast<string>(m["arr_city"]));
    }
    if (m.find("btrip_title") != m.end() && !m["btrip_title"].empty()) {
      btripTitle = make_shared<string>(boost::any_cast<string>(m["btrip_title"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("contact_name") != m.end() && !m["contact_name"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["contact_name"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("corp_name") != m.end() && !m["corp_name"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["corp_name"]));
    }
    if (m.find("cost_center") != m.end() && !m["cost_center"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost_center"].type()) {
        FlightOrderListQueryResponseBodyModuleCostCenter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost_center"]));
        costCenter = make_shared<FlightOrderListQueryResponseBodyModuleCostCenter>(model1);
      }
    }
    if (m.find("dep_airport") != m.end() && !m["dep_airport"].empty()) {
      depAirport = make_shared<string>(boost::any_cast<string>(m["dep_airport"]));
    }
    if (m.find("dep_city") != m.end() && !m["dep_city"].empty()) {
      depCity = make_shared<string>(boost::any_cast<string>(m["dep_city"]));
    }
    if (m.find("dep_date") != m.end() && !m["dep_date"].empty()) {
      depDate = make_shared<string>(boost::any_cast<string>(m["dep_date"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("depart_name") != m.end() && !m["depart_name"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["depart_name"]));
    }
    if (m.find("discount") != m.end() && !m["discount"].empty()) {
      discount = make_shared<string>(boost::any_cast<string>(m["discount"]));
    }
    if (m.find("flight_no") != m.end() && !m["flight_no"].empty()) {
      flightNo = make_shared<string>(boost::any_cast<string>(m["flight_no"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("gmt_modified") != m.end() && !m["gmt_modified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmt_modified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("insure_info_list") != m.end() && !m["insure_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["insure_info_list"].type()) {
        vector<FlightOrderListQueryResponseBodyModuleInsureInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["insure_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FlightOrderListQueryResponseBodyModuleInsureInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        insureInfoList = make_shared<vector<FlightOrderListQueryResponseBodyModuleInsureInfoList>>(expect1);
      }
    }
    if (m.find("invoice") != m.end() && !m["invoice"].empty()) {
      if (typeid(map<string, boost::any>) == m["invoice"].type()) {
        FlightOrderListQueryResponseBodyModuleInvoice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["invoice"]));
        invoice = make_shared<FlightOrderListQueryResponseBodyModuleInvoice>(model1);
      }
    }
    if (m.find("passenger_count") != m.end() && !m["passenger_count"].empty()) {
      passengerCount = make_shared<long>(boost::any_cast<long>(m["passenger_count"]));
    }
    if (m.find("passenger_name") != m.end() && !m["passenger_name"].empty()) {
      passengerName = make_shared<string>(boost::any_cast<string>(m["passenger_name"]));
    }
    if (m.find("price_info_list") != m.end() && !m["price_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["price_info_list"].type()) {
        vector<FlightOrderListQueryResponseBodyModulePriceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["price_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FlightOrderListQueryResponseBodyModulePriceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        priceInfoList = make_shared<vector<FlightOrderListQueryResponseBodyModulePriceInfoList>>(expect1);
      }
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_id") != m.end() && !m["project_id"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["project_id"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("ret_date") != m.end() && !m["ret_date"].empty()) {
      retDate = make_shared<string>(boost::any_cast<string>(m["ret_date"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("third_part_project_id") != m.end() && !m["third_part_project_id"].empty()) {
      thirdPartProjectId = make_shared<string>(boost::any_cast<string>(m["third_part_project_id"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_itinerary_id") != m.end() && !m["thirdpart_itinerary_id"].empty()) {
      thirdpartItineraryId = make_shared<string>(boost::any_cast<string>(m["thirdpart_itinerary_id"]));
    }
    if (m.find("trip_type") != m.end() && !m["trip_type"].empty()) {
      tripType = make_shared<long>(boost::any_cast<long>(m["trip_type"]));
    }
    if (m.find("user_affiliate_list") != m.end() && !m["user_affiliate_list"].empty()) {
      if (typeid(vector<boost::any>) == m["user_affiliate_list"].type()) {
        vector<FlightOrderListQueryResponseBodyModuleUserAffiliateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["user_affiliate_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FlightOrderListQueryResponseBodyModuleUserAffiliateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userAffiliateList = make_shared<vector<FlightOrderListQueryResponseBodyModuleUserAffiliateList>>(expect1);
      }
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~FlightOrderListQueryResponseBodyModule() = default;
};
class FlightOrderListQueryResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNumber{};

  FlightOrderListQueryResponseBodyPageInfo() {}

  explicit FlightOrderListQueryResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (totalNumber) {
      res["total_number"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("total_number") != m.end() && !m["total_number"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["total_number"]));
    }
  }


  virtual ~FlightOrderListQueryResponseBodyPageInfo() = default;
};
class FlightOrderListQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<FlightOrderListQueryResponseBodyModule>> module{};
  shared_ptr<FlightOrderListQueryResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  FlightOrderListQueryResponseBody() {}

  explicit FlightOrderListQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      vector<boost::any> temp1;
      for(auto item1:*module){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["module"] = boost::any(temp1);
    }
    if (pageInfo) {
      res["page_info"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(vector<boost::any>) == m["module"].type()) {
        vector<FlightOrderListQueryResponseBodyModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["module"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FlightOrderListQueryResponseBodyModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        module = make_shared<vector<FlightOrderListQueryResponseBodyModule>>(expect1);
      }
    }
    if (m.find("page_info") != m.end() && !m["page_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["page_info"].type()) {
        FlightOrderListQueryResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["page_info"]));
        pageInfo = make_shared<FlightOrderListQueryResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~FlightOrderListQueryResponseBody() = default;
};
class FlightOrderListQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FlightOrderListQueryResponseBody> body{};

  FlightOrderListQueryResponse() {}

  explicit FlightOrderListQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FlightOrderListQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FlightOrderListQueryResponseBody>(model1);
      }
    }
  }


  virtual ~FlightOrderListQueryResponse() = default;
};
class FlightOrderQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  FlightOrderQueryHeaders() {}

  explicit FlightOrderQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~FlightOrderQueryHeaders() = default;
};
class FlightOrderQueryRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> userId{};

  FlightOrderQueryRequest() {}

  explicit FlightOrderQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["order_id"] = boost::any(*orderId);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_id") != m.end() && !m["order_id"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["order_id"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~FlightOrderQueryRequest() = default;
};
class FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList : public Darabonba::Model {
public:
  shared_ptr<string> arrTime{};
  shared_ptr<string> changeCabin{};
  shared_ptr<string> changeCabinLevel{};
  shared_ptr<double> changeFee{};
  shared_ptr<string> changeFlightNo{};
  shared_ptr<long> changeOrderId{};
  shared_ptr<string> changeReason{};
  shared_ptr<long> changeType{};
  shared_ptr<string> depTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModify{};
  shared_ptr<string> originTicketNo{};
  shared_ptr<string> ticketNo{};
  shared_ptr<double> upgradeFee{};

  FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList() {}

  explicit FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrTime) {
      res["arr_time"] = boost::any(*arrTime);
    }
    if (changeCabin) {
      res["change_cabin"] = boost::any(*changeCabin);
    }
    if (changeCabinLevel) {
      res["change_cabin_level"] = boost::any(*changeCabinLevel);
    }
    if (changeFee) {
      res["change_fee"] = boost::any(*changeFee);
    }
    if (changeFlightNo) {
      res["change_flight_no"] = boost::any(*changeFlightNo);
    }
    if (changeOrderId) {
      res["change_order_id"] = boost::any(*changeOrderId);
    }
    if (changeReason) {
      res["change_reason"] = boost::any(*changeReason);
    }
    if (changeType) {
      res["change_type"] = boost::any(*changeType);
    }
    if (depTime) {
      res["dep_time"] = boost::any(*depTime);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModify) {
      res["gmt_modify"] = boost::any(*gmtModify);
    }
    if (originTicketNo) {
      res["origin_ticket_no"] = boost::any(*originTicketNo);
    }
    if (ticketNo) {
      res["ticket_no"] = boost::any(*ticketNo);
    }
    if (upgradeFee) {
      res["upgrade_fee"] = boost::any(*upgradeFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_time") != m.end() && !m["arr_time"].empty()) {
      arrTime = make_shared<string>(boost::any_cast<string>(m["arr_time"]));
    }
    if (m.find("change_cabin") != m.end() && !m["change_cabin"].empty()) {
      changeCabin = make_shared<string>(boost::any_cast<string>(m["change_cabin"]));
    }
    if (m.find("change_cabin_level") != m.end() && !m["change_cabin_level"].empty()) {
      changeCabinLevel = make_shared<string>(boost::any_cast<string>(m["change_cabin_level"]));
    }
    if (m.find("change_fee") != m.end() && !m["change_fee"].empty()) {
      changeFee = make_shared<double>(boost::any_cast<double>(m["change_fee"]));
    }
    if (m.find("change_flight_no") != m.end() && !m["change_flight_no"].empty()) {
      changeFlightNo = make_shared<string>(boost::any_cast<string>(m["change_flight_no"]));
    }
    if (m.find("change_order_id") != m.end() && !m["change_order_id"].empty()) {
      changeOrderId = make_shared<long>(boost::any_cast<long>(m["change_order_id"]));
    }
    if (m.find("change_reason") != m.end() && !m["change_reason"].empty()) {
      changeReason = make_shared<string>(boost::any_cast<string>(m["change_reason"]));
    }
    if (m.find("change_type") != m.end() && !m["change_type"].empty()) {
      changeType = make_shared<long>(boost::any_cast<long>(m["change_type"]));
    }
    if (m.find("dep_time") != m.end() && !m["dep_time"].empty()) {
      depTime = make_shared<string>(boost::any_cast<string>(m["dep_time"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("gmt_modify") != m.end() && !m["gmt_modify"].empty()) {
      gmtModify = make_shared<string>(boost::any_cast<string>(m["gmt_modify"]));
    }
    if (m.find("origin_ticket_no") != m.end() && !m["origin_ticket_no"].empty()) {
      originTicketNo = make_shared<string>(boost::any_cast<string>(m["origin_ticket_no"]));
    }
    if (m.find("ticket_no") != m.end() && !m["ticket_no"].empty()) {
      ticketNo = make_shared<string>(boost::any_cast<string>(m["ticket_no"]));
    }
    if (m.find("upgrade_fee") != m.end() && !m["upgrade_fee"].empty()) {
      upgradeFee = make_shared<double>(boost::any_cast<double>(m["upgrade_fee"]));
    }
  }


  virtual ~FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList() = default;
};
class FlightOrderQueryResponseBodyModuleFlightInfoList : public Darabonba::Model {
public:
  shared_ptr<string> airlineCode{};
  shared_ptr<string> airlineName{};
  shared_ptr<string> arrAirportCode{};
  shared_ptr<string> arrAirportName{};
  shared_ptr<string> arrCityCode{};
  shared_ptr<string> arrCityName{};
  shared_ptr<string> arrTime{};
  shared_ptr<string> cabin{};
  shared_ptr<string> cabinLevel{};
  shared_ptr<string> depAirportCode{};
  shared_ptr<string> depAirportName{};
  shared_ptr<string> depCityCode{};
  shared_ptr<string> depCityName{};
  shared_ptr<string> depTime{};
  shared_ptr<long> flightMile{};
  shared_ptr<string> flightNo{};

  FlightOrderQueryResponseBodyModuleFlightInfoList() {}

  explicit FlightOrderQueryResponseBodyModuleFlightInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (airlineCode) {
      res["airline_code"] = boost::any(*airlineCode);
    }
    if (airlineName) {
      res["airline_name"] = boost::any(*airlineName);
    }
    if (arrAirportCode) {
      res["arr_airport_code"] = boost::any(*arrAirportCode);
    }
    if (arrAirportName) {
      res["arr_airport_name"] = boost::any(*arrAirportName);
    }
    if (arrCityCode) {
      res["arr_city_code"] = boost::any(*arrCityCode);
    }
    if (arrCityName) {
      res["arr_city_name"] = boost::any(*arrCityName);
    }
    if (arrTime) {
      res["arr_time"] = boost::any(*arrTime);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinLevel) {
      res["cabin_level"] = boost::any(*cabinLevel);
    }
    if (depAirportCode) {
      res["dep_airport_code"] = boost::any(*depAirportCode);
    }
    if (depAirportName) {
      res["dep_airport_name"] = boost::any(*depAirportName);
    }
    if (depCityCode) {
      res["dep_city_code"] = boost::any(*depCityCode);
    }
    if (depCityName) {
      res["dep_city_name"] = boost::any(*depCityName);
    }
    if (depTime) {
      res["dep_time"] = boost::any(*depTime);
    }
    if (flightMile) {
      res["flight_mile"] = boost::any(*flightMile);
    }
    if (flightNo) {
      res["flight_no"] = boost::any(*flightNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("airline_code") != m.end() && !m["airline_code"].empty()) {
      airlineCode = make_shared<string>(boost::any_cast<string>(m["airline_code"]));
    }
    if (m.find("airline_name") != m.end() && !m["airline_name"].empty()) {
      airlineName = make_shared<string>(boost::any_cast<string>(m["airline_name"]));
    }
    if (m.find("arr_airport_code") != m.end() && !m["arr_airport_code"].empty()) {
      arrAirportCode = make_shared<string>(boost::any_cast<string>(m["arr_airport_code"]));
    }
    if (m.find("arr_airport_name") != m.end() && !m["arr_airport_name"].empty()) {
      arrAirportName = make_shared<string>(boost::any_cast<string>(m["arr_airport_name"]));
    }
    if (m.find("arr_city_code") != m.end() && !m["arr_city_code"].empty()) {
      arrCityCode = make_shared<string>(boost::any_cast<string>(m["arr_city_code"]));
    }
    if (m.find("arr_city_name") != m.end() && !m["arr_city_name"].empty()) {
      arrCityName = make_shared<string>(boost::any_cast<string>(m["arr_city_name"]));
    }
    if (m.find("arr_time") != m.end() && !m["arr_time"].empty()) {
      arrTime = make_shared<string>(boost::any_cast<string>(m["arr_time"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_level") != m.end() && !m["cabin_level"].empty()) {
      cabinLevel = make_shared<string>(boost::any_cast<string>(m["cabin_level"]));
    }
    if (m.find("dep_airport_code") != m.end() && !m["dep_airport_code"].empty()) {
      depAirportCode = make_shared<string>(boost::any_cast<string>(m["dep_airport_code"]));
    }
    if (m.find("dep_airport_name") != m.end() && !m["dep_airport_name"].empty()) {
      depAirportName = make_shared<string>(boost::any_cast<string>(m["dep_airport_name"]));
    }
    if (m.find("dep_city_code") != m.end() && !m["dep_city_code"].empty()) {
      depCityCode = make_shared<string>(boost::any_cast<string>(m["dep_city_code"]));
    }
    if (m.find("dep_city_name") != m.end() && !m["dep_city_name"].empty()) {
      depCityName = make_shared<string>(boost::any_cast<string>(m["dep_city_name"]));
    }
    if (m.find("dep_time") != m.end() && !m["dep_time"].empty()) {
      depTime = make_shared<string>(boost::any_cast<string>(m["dep_time"]));
    }
    if (m.find("flight_mile") != m.end() && !m["flight_mile"].empty()) {
      flightMile = make_shared<long>(boost::any_cast<long>(m["flight_mile"]));
    }
    if (m.find("flight_no") != m.end() && !m["flight_no"].empty()) {
      flightNo = make_shared<string>(boost::any_cast<string>(m["flight_no"]));
    }
  }


  virtual ~FlightOrderQueryResponseBodyModuleFlightInfoList() = default;
};
class FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModify{};
  shared_ptr<long> refundOrderId{};
  shared_ptr<string> refundReason{};
  shared_ptr<double> refundTicketFee{};
  shared_ptr<long> refundType{};
  shared_ptr<string> ticketNo{};

  FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList() {}

  explicit FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModify) {
      res["gmt_modify"] = boost::any(*gmtModify);
    }
    if (refundOrderId) {
      res["refund_order_id"] = boost::any(*refundOrderId);
    }
    if (refundReason) {
      res["refund_reason"] = boost::any(*refundReason);
    }
    if (refundTicketFee) {
      res["refund_ticket_fee"] = boost::any(*refundTicketFee);
    }
    if (refundType) {
      res["refund_type"] = boost::any(*refundType);
    }
    if (ticketNo) {
      res["ticket_no"] = boost::any(*ticketNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("gmt_modify") != m.end() && !m["gmt_modify"].empty()) {
      gmtModify = make_shared<string>(boost::any_cast<string>(m["gmt_modify"]));
    }
    if (m.find("refund_order_id") != m.end() && !m["refund_order_id"].empty()) {
      refundOrderId = make_shared<long>(boost::any_cast<long>(m["refund_order_id"]));
    }
    if (m.find("refund_reason") != m.end() && !m["refund_reason"].empty()) {
      refundReason = make_shared<string>(boost::any_cast<string>(m["refund_reason"]));
    }
    if (m.find("refund_ticket_fee") != m.end() && !m["refund_ticket_fee"].empty()) {
      refundTicketFee = make_shared<double>(boost::any_cast<double>(m["refund_ticket_fee"]));
    }
    if (m.find("refund_type") != m.end() && !m["refund_type"].empty()) {
      refundType = make_shared<long>(boost::any_cast<long>(m["refund_type"]));
    }
    if (m.find("ticket_no") != m.end() && !m["ticket_no"].empty()) {
      ticketNo = make_shared<string>(boost::any_cast<string>(m["ticket_no"]));
    }
  }


  virtual ~FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList() = default;
};
class FlightOrderQueryResponseBodyModuleFlightTicketInfoList : public Darabonba::Model {
public:
  shared_ptr<double> buildPrice{};
  shared_ptr<bool> changed{};
  shared_ptr<long> discount{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModify{};
  shared_ptr<double> oilPrice{};
  shared_ptr<long> payType{};
  shared_ptr<double> settlePrice{};
  shared_ptr<string> ticketNo{};
  shared_ptr<double> ticketPrice{};
  shared_ptr<string> ticketStatus{};
  shared_ptr<long> ticketStatusCode{};
  shared_ptr<string> userId{};

  FlightOrderQueryResponseBodyModuleFlightTicketInfoList() {}

  explicit FlightOrderQueryResponseBodyModuleFlightTicketInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildPrice) {
      res["build_price"] = boost::any(*buildPrice);
    }
    if (changed) {
      res["changed"] = boost::any(*changed);
    }
    if (discount) {
      res["discount"] = boost::any(*discount);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModify) {
      res["gmt_modify"] = boost::any(*gmtModify);
    }
    if (oilPrice) {
      res["oil_price"] = boost::any(*oilPrice);
    }
    if (payType) {
      res["pay_type"] = boost::any(*payType);
    }
    if (settlePrice) {
      res["settle_price"] = boost::any(*settlePrice);
    }
    if (ticketNo) {
      res["ticket_no"] = boost::any(*ticketNo);
    }
    if (ticketPrice) {
      res["ticket_price"] = boost::any(*ticketPrice);
    }
    if (ticketStatus) {
      res["ticket_status"] = boost::any(*ticketStatus);
    }
    if (ticketStatusCode) {
      res["ticket_status_code"] = boost::any(*ticketStatusCode);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("build_price") != m.end() && !m["build_price"].empty()) {
      buildPrice = make_shared<double>(boost::any_cast<double>(m["build_price"]));
    }
    if (m.find("changed") != m.end() && !m["changed"].empty()) {
      changed = make_shared<bool>(boost::any_cast<bool>(m["changed"]));
    }
    if (m.find("discount") != m.end() && !m["discount"].empty()) {
      discount = make_shared<long>(boost::any_cast<long>(m["discount"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("gmt_modify") != m.end() && !m["gmt_modify"].empty()) {
      gmtModify = make_shared<string>(boost::any_cast<string>(m["gmt_modify"]));
    }
    if (m.find("oil_price") != m.end() && !m["oil_price"].empty()) {
      oilPrice = make_shared<double>(boost::any_cast<double>(m["oil_price"]));
    }
    if (m.find("pay_type") != m.end() && !m["pay_type"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["pay_type"]));
    }
    if (m.find("settle_price") != m.end() && !m["settle_price"].empty()) {
      settlePrice = make_shared<double>(boost::any_cast<double>(m["settle_price"]));
    }
    if (m.find("ticket_no") != m.end() && !m["ticket_no"].empty()) {
      ticketNo = make_shared<string>(boost::any_cast<string>(m["ticket_no"]));
    }
    if (m.find("ticket_price") != m.end() && !m["ticket_price"].empty()) {
      ticketPrice = make_shared<double>(boost::any_cast<double>(m["ticket_price"]));
    }
    if (m.find("ticket_status") != m.end() && !m["ticket_status"].empty()) {
      ticketStatus = make_shared<string>(boost::any_cast<string>(m["ticket_status"]));
    }
    if (m.find("ticket_status_code") != m.end() && !m["ticket_status_code"].empty()) {
      ticketStatusCode = make_shared<long>(boost::any_cast<long>(m["ticket_status_code"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~FlightOrderQueryResponseBodyModuleFlightTicketInfoList() = default;
};
class FlightOrderQueryResponseBodyModuleInsuranceInfoList : public Darabonba::Model {
public:
  shared_ptr<double> amount{};
  shared_ptr<string> insuranceNo{};
  shared_ptr<long> status{};
  shared_ptr<string> type{};

  FlightOrderQueryResponseBodyModuleInsuranceInfoList() {}

  explicit FlightOrderQueryResponseBodyModuleInsuranceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["amount"] = boost::any(*amount);
    }
    if (insuranceNo) {
      res["insurance_no"] = boost::any(*insuranceNo);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("amount") != m.end() && !m["amount"].empty()) {
      amount = make_shared<double>(boost::any_cast<double>(m["amount"]));
    }
    if (m.find("insurance_no") != m.end() && !m["insurance_no"].empty()) {
      insuranceNo = make_shared<string>(boost::any_cast<string>(m["insurance_no"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~FlightOrderQueryResponseBodyModuleInsuranceInfoList() = default;
};
class FlightOrderQueryResponseBodyModuleInvoiceInfo : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> title{};

  FlightOrderQueryResponseBodyModuleInvoiceInfo() {}

  explicit FlightOrderQueryResponseBodyModuleInvoiceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~FlightOrderQueryResponseBodyModuleInvoiceInfo() = default;
};
class FlightOrderQueryResponseBodyModuleOrderBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<string> btripTitle{};
  shared_ptr<string> contactName{};
  shared_ptr<string> corpId{};
  shared_ptr<string> corpName{};
  shared_ptr<string> departId{};
  shared_ptr<string> departName{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModify{};
  shared_ptr<string> itineraryId{};
  shared_ptr<long> orderId{};
  shared_ptr<long> orderStatus{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartCorpId{};
  shared_ptr<string> thirdpartItineraryId{};
  shared_ptr<long> tripType{};
  shared_ptr<string> userId{};

  FlightOrderQueryResponseBodyModuleOrderBaseInfo() {}

  explicit FlightOrderQueryResponseBodyModuleOrderBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (btripTitle) {
      res["btrip_title"] = boost::any(*btripTitle);
    }
    if (contactName) {
      res["contact_name"] = boost::any(*contactName);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (corpName) {
      res["corp_name"] = boost::any(*corpName);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (departName) {
      res["depart_name"] = boost::any(*departName);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModify) {
      res["gmt_modify"] = boost::any(*gmtModify);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (orderId) {
      res["order_id"] = boost::any(*orderId);
    }
    if (orderStatus) {
      res["order_status"] = boost::any(*orderStatus);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartCorpId) {
      res["thirdpart_corp_id"] = boost::any(*thirdpartCorpId);
    }
    if (thirdpartItineraryId) {
      res["thirdpart_itinerary_id"] = boost::any(*thirdpartItineraryId);
    }
    if (tripType) {
      res["trip_type"] = boost::any(*tripType);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["apply_id"]));
    }
    if (m.find("btrip_title") != m.end() && !m["btrip_title"].empty()) {
      btripTitle = make_shared<string>(boost::any_cast<string>(m["btrip_title"]));
    }
    if (m.find("contact_name") != m.end() && !m["contact_name"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["contact_name"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("corp_name") != m.end() && !m["corp_name"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["corp_name"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("depart_name") != m.end() && !m["depart_name"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["depart_name"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("gmt_modify") != m.end() && !m["gmt_modify"].empty()) {
      gmtModify = make_shared<string>(boost::any_cast<string>(m["gmt_modify"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("order_id") != m.end() && !m["order_id"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["order_id"]));
    }
    if (m.find("order_status") != m.end() && !m["order_status"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["order_status"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_corp_id") != m.end() && !m["thirdpart_corp_id"].empty()) {
      thirdpartCorpId = make_shared<string>(boost::any_cast<string>(m["thirdpart_corp_id"]));
    }
    if (m.find("thirdpart_itinerary_id") != m.end() && !m["thirdpart_itinerary_id"].empty()) {
      thirdpartItineraryId = make_shared<string>(boost::any_cast<string>(m["thirdpart_itinerary_id"]));
    }
    if (m.find("trip_type") != m.end() && !m["trip_type"].empty()) {
      tripType = make_shared<long>(boost::any_cast<long>(m["trip_type"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~FlightOrderQueryResponseBodyModuleOrderBaseInfo() = default;
};
class FlightOrderQueryResponseBodyModulePassengerInfoList : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<string> costCenterName{};
  shared_ptr<string> costCenterNumber{};
  shared_ptr<string> projectCode{};
  shared_ptr<long> projectId{};
  shared_ptr<string> projectTitle{};
  shared_ptr<string> thirdpartProjectId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<long> userType{};

  FlightOrderQueryResponseBodyModulePassengerInfoList() {}

  explicit FlightOrderQueryResponseBodyModulePassengerInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["cost_center_id"] = boost::any(*costCenterId);
    }
    if (costCenterName) {
      res["cost_center_name"] = boost::any(*costCenterName);
    }
    if (costCenterNumber) {
      res["cost_center_number"] = boost::any(*costCenterNumber);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectId) {
      res["project_id"] = boost::any(*projectId);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (thirdpartProjectId) {
      res["thirdpart_project_id"] = boost::any(*thirdpartProjectId);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    if (userType) {
      res["user_type"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost_center_id") != m.end() && !m["cost_center_id"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["cost_center_id"]));
    }
    if (m.find("cost_center_name") != m.end() && !m["cost_center_name"].empty()) {
      costCenterName = make_shared<string>(boost::any_cast<string>(m["cost_center_name"]));
    }
    if (m.find("cost_center_number") != m.end() && !m["cost_center_number"].empty()) {
      costCenterNumber = make_shared<string>(boost::any_cast<string>(m["cost_center_number"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_id") != m.end() && !m["project_id"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["project_id"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("thirdpart_project_id") != m.end() && !m["thirdpart_project_id"].empty()) {
      thirdpartProjectId = make_shared<string>(boost::any_cast<string>(m["thirdpart_project_id"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
    if (m.find("user_type") != m.end() && !m["user_type"].empty()) {
      userType = make_shared<long>(boost::any_cast<long>(m["user_type"]));
    }
  }


  virtual ~FlightOrderQueryResponseBodyModulePassengerInfoList() = default;
};
class FlightOrderQueryResponseBodyModulePriceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> categoryCode{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> passengerName{};
  shared_ptr<long> payType{};
  shared_ptr<double> price{};
  shared_ptr<string> tradeId{};
  shared_ptr<long> type{};

  FlightOrderQueryResponseBodyModulePriceInfoList() {}

  explicit FlightOrderQueryResponseBodyModulePriceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryCode) {
      res["category_code"] = boost::any(*categoryCode);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (passengerName) {
      res["passenger_name"] = boost::any(*passengerName);
    }
    if (payType) {
      res["pay_type"] = boost::any(*payType);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    if (tradeId) {
      res["trade_id"] = boost::any(*tradeId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category_code") != m.end() && !m["category_code"].empty()) {
      categoryCode = make_shared<long>(boost::any_cast<long>(m["category_code"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("passenger_name") != m.end() && !m["passenger_name"].empty()) {
      passengerName = make_shared<string>(boost::any_cast<string>(m["passenger_name"]));
    }
    if (m.find("pay_type") != m.end() && !m["pay_type"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["pay_type"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["price"]));
    }
    if (m.find("trade_id") != m.end() && !m["trade_id"].empty()) {
      tradeId = make_shared<string>(boost::any_cast<string>(m["trade_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~FlightOrderQueryResponseBodyModulePriceInfoList() = default;
};
class FlightOrderQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<vector<FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList>> flightChangeTicketInfoList{};
  shared_ptr<vector<FlightOrderQueryResponseBodyModuleFlightInfoList>> flightInfoList{};
  shared_ptr<vector<FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList>> flightRefundTicketInfoList{};
  shared_ptr<vector<FlightOrderQueryResponseBodyModuleFlightTicketInfoList>> flightTicketInfoList{};
  shared_ptr<vector<FlightOrderQueryResponseBodyModuleInsuranceInfoList>> insuranceInfoList{};
  shared_ptr<FlightOrderQueryResponseBodyModuleInvoiceInfo> invoiceInfo{};
  shared_ptr<FlightOrderQueryResponseBodyModuleOrderBaseInfo> orderBaseInfo{};
  shared_ptr<vector<FlightOrderQueryResponseBodyModulePassengerInfoList>> passengerInfoList{};
  shared_ptr<vector<FlightOrderQueryResponseBodyModulePriceInfoList>> priceInfoList{};

  FlightOrderQueryResponseBodyModule() {}

  explicit FlightOrderQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flightChangeTicketInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*flightChangeTicketInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["flight_change_ticket_info_list"] = boost::any(temp1);
    }
    if (flightInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*flightInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["flight_info_list"] = boost::any(temp1);
    }
    if (flightRefundTicketInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*flightRefundTicketInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["flight_refund_ticket_info_list"] = boost::any(temp1);
    }
    if (flightTicketInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*flightTicketInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["flight_ticket_info_list"] = boost::any(temp1);
    }
    if (insuranceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*insuranceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["insurance_info_list"] = boost::any(temp1);
    }
    if (invoiceInfo) {
      res["invoice_info"] = invoiceInfo ? boost::any(invoiceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderBaseInfo) {
      res["order_base_info"] = orderBaseInfo ? boost::any(orderBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (passengerInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*passengerInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["passenger_info_list"] = boost::any(temp1);
    }
    if (priceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*priceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["price_info_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("flight_change_ticket_info_list") != m.end() && !m["flight_change_ticket_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["flight_change_ticket_info_list"].type()) {
        vector<FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["flight_change_ticket_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flightChangeTicketInfoList = make_shared<vector<FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList>>(expect1);
      }
    }
    if (m.find("flight_info_list") != m.end() && !m["flight_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["flight_info_list"].type()) {
        vector<FlightOrderQueryResponseBodyModuleFlightInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["flight_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FlightOrderQueryResponseBodyModuleFlightInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flightInfoList = make_shared<vector<FlightOrderQueryResponseBodyModuleFlightInfoList>>(expect1);
      }
    }
    if (m.find("flight_refund_ticket_info_list") != m.end() && !m["flight_refund_ticket_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["flight_refund_ticket_info_list"].type()) {
        vector<FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["flight_refund_ticket_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flightRefundTicketInfoList = make_shared<vector<FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList>>(expect1);
      }
    }
    if (m.find("flight_ticket_info_list") != m.end() && !m["flight_ticket_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["flight_ticket_info_list"].type()) {
        vector<FlightOrderQueryResponseBodyModuleFlightTicketInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["flight_ticket_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FlightOrderQueryResponseBodyModuleFlightTicketInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flightTicketInfoList = make_shared<vector<FlightOrderQueryResponseBodyModuleFlightTicketInfoList>>(expect1);
      }
    }
    if (m.find("insurance_info_list") != m.end() && !m["insurance_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["insurance_info_list"].type()) {
        vector<FlightOrderQueryResponseBodyModuleInsuranceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["insurance_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FlightOrderQueryResponseBodyModuleInsuranceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        insuranceInfoList = make_shared<vector<FlightOrderQueryResponseBodyModuleInsuranceInfoList>>(expect1);
      }
    }
    if (m.find("invoice_info") != m.end() && !m["invoice_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["invoice_info"].type()) {
        FlightOrderQueryResponseBodyModuleInvoiceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["invoice_info"]));
        invoiceInfo = make_shared<FlightOrderQueryResponseBodyModuleInvoiceInfo>(model1);
      }
    }
    if (m.find("order_base_info") != m.end() && !m["order_base_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["order_base_info"].type()) {
        FlightOrderQueryResponseBodyModuleOrderBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["order_base_info"]));
        orderBaseInfo = make_shared<FlightOrderQueryResponseBodyModuleOrderBaseInfo>(model1);
      }
    }
    if (m.find("passenger_info_list") != m.end() && !m["passenger_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["passenger_info_list"].type()) {
        vector<FlightOrderQueryResponseBodyModulePassengerInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["passenger_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FlightOrderQueryResponseBodyModulePassengerInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        passengerInfoList = make_shared<vector<FlightOrderQueryResponseBodyModulePassengerInfoList>>(expect1);
      }
    }
    if (m.find("price_info_list") != m.end() && !m["price_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["price_info_list"].type()) {
        vector<FlightOrderQueryResponseBodyModulePriceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["price_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FlightOrderQueryResponseBodyModulePriceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        priceInfoList = make_shared<vector<FlightOrderQueryResponseBodyModulePriceInfoList>>(expect1);
      }
    }
  }


  virtual ~FlightOrderQueryResponseBodyModule() = default;
};
class FlightOrderQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<FlightOrderQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  FlightOrderQueryResponseBody() {}

  explicit FlightOrderQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        FlightOrderQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<FlightOrderQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~FlightOrderQueryResponseBody() = default;
};
class FlightOrderQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FlightOrderQueryResponseBody> body{};

  FlightOrderQueryResponse() {}

  explicit FlightOrderQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FlightOrderQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FlightOrderQueryResponseBody>(model1);
      }
    }
  }


  virtual ~FlightOrderQueryResponse() = default;
};
class HotelBillSettlementQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  HotelBillSettlementQueryHeaders() {}

  explicit HotelBillSettlementQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~HotelBillSettlementQueryHeaders() = default;
};
class HotelBillSettlementQueryRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> periodEnd{};
  shared_ptr<string> periodStart{};

  HotelBillSettlementQueryRequest() {}

  explicit HotelBillSettlementQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["page_no"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (periodEnd) {
      res["period_end"] = boost::any(*periodEnd);
    }
    if (periodStart) {
      res["period_start"] = boost::any(*periodStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page_no") != m.end() && !m["page_no"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["page_no"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("period_end") != m.end() && !m["period_end"].empty()) {
      periodEnd = make_shared<string>(boost::any_cast<string>(m["period_end"]));
    }
    if (m.find("period_start") != m.end() && !m["period_start"].empty()) {
      periodStart = make_shared<string>(boost::any_cast<string>(m["period_start"]));
    }
  }


  virtual ~HotelBillSettlementQueryRequest() = default;
};
class HotelBillSettlementQueryResponseBodyModuleDataList : public Darabonba::Model {
public:
  shared_ptr<string> alipayTradeNo{};
  shared_ptr<string> applyId{};
  shared_ptr<string> billRecordTime{};
  shared_ptr<string> bookTime{};
  shared_ptr<string> bookerId{};
  shared_ptr<string> bookerJobNo{};
  shared_ptr<string> bookerName{};
  shared_ptr<string> capitalDirection{};
  shared_ptr<string> cascadeDepartment{};
  shared_ptr<string> checkInDate{};
  shared_ptr<string> checkoutDate{};
  shared_ptr<string> city{};
  shared_ptr<string> cityCode{};
  shared_ptr<double> corpRefundFee{};
  shared_ptr<double> corpTotalFee{};
  shared_ptr<string> costCenter{};
  shared_ptr<string> costCenterNumber{};
  shared_ptr<string> department{};
  shared_ptr<string> departmentId{};
  shared_ptr<string> feeType{};
  shared_ptr<double> fees{};
  shared_ptr<double> fuPointFee{};
  shared_ptr<string> hotelName{};
  shared_ptr<string> index{};
  shared_ptr<string> invoiceTitle{};
  shared_ptr<string> isNegotiation{};
  shared_ptr<string> isShareStr{};
  shared_ptr<long> nights{};
  shared_ptr<string> orderId{};
  shared_ptr<double> orderPrice{};
  shared_ptr<string> orderType{};
  shared_ptr<string> overApplyId{};
  shared_ptr<double> personRefundFee{};
  shared_ptr<double> personSettlePrice{};
  shared_ptr<long> primaryId{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectName{};
  shared_ptr<double> promotionFee{};
  shared_ptr<string> remark{};
  shared_ptr<long> roomNumber{};
  shared_ptr<double> roomPrice{};
  shared_ptr<string> roomType{};
  shared_ptr<double> serviceFee{};
  shared_ptr<double> settlementFee{};
  shared_ptr<double> settlementGrantFee{};
  shared_ptr<string> settlementTime{};
  shared_ptr<string> settlementType{};
  shared_ptr<long> status{};
  shared_ptr<long> totalNights{};
  shared_ptr<string> travelerId{};
  shared_ptr<string> travelerJobNo{};
  shared_ptr<string> travelerName{};
  shared_ptr<long> voucherType{};

  HotelBillSettlementQueryResponseBodyModuleDataList() {}

  explicit HotelBillSettlementQueryResponseBodyModuleDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alipayTradeNo) {
      res["alipay_trade_no"] = boost::any(*alipayTradeNo);
    }
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (billRecordTime) {
      res["bill_record_time"] = boost::any(*billRecordTime);
    }
    if (bookTime) {
      res["book_time"] = boost::any(*bookTime);
    }
    if (bookerId) {
      res["booker_id"] = boost::any(*bookerId);
    }
    if (bookerJobNo) {
      res["booker_job_no"] = boost::any(*bookerJobNo);
    }
    if (bookerName) {
      res["booker_name"] = boost::any(*bookerName);
    }
    if (capitalDirection) {
      res["capital_direction"] = boost::any(*capitalDirection);
    }
    if (cascadeDepartment) {
      res["cascade_department"] = boost::any(*cascadeDepartment);
    }
    if (checkInDate) {
      res["check_in_date"] = boost::any(*checkInDate);
    }
    if (checkoutDate) {
      res["checkout_date"] = boost::any(*checkoutDate);
    }
    if (city) {
      res["city"] = boost::any(*city);
    }
    if (cityCode) {
      res["city_code"] = boost::any(*cityCode);
    }
    if (corpRefundFee) {
      res["corp_refund_fee"] = boost::any(*corpRefundFee);
    }
    if (corpTotalFee) {
      res["corp_total_fee"] = boost::any(*corpTotalFee);
    }
    if (costCenter) {
      res["cost_center"] = boost::any(*costCenter);
    }
    if (costCenterNumber) {
      res["cost_center_number"] = boost::any(*costCenterNumber);
    }
    if (department) {
      res["department"] = boost::any(*department);
    }
    if (departmentId) {
      res["department_id"] = boost::any(*departmentId);
    }
    if (feeType) {
      res["fee_type"] = boost::any(*feeType);
    }
    if (fees) {
      res["fees"] = boost::any(*fees);
    }
    if (fuPointFee) {
      res["fu_point_fee"] = boost::any(*fuPointFee);
    }
    if (hotelName) {
      res["hotel_name"] = boost::any(*hotelName);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (invoiceTitle) {
      res["invoice_title"] = boost::any(*invoiceTitle);
    }
    if (isNegotiation) {
      res["is_negotiation"] = boost::any(*isNegotiation);
    }
    if (isShareStr) {
      res["is_share_str"] = boost::any(*isShareStr);
    }
    if (nights) {
      res["nights"] = boost::any(*nights);
    }
    if (orderId) {
      res["order_id"] = boost::any(*orderId);
    }
    if (orderPrice) {
      res["order_price"] = boost::any(*orderPrice);
    }
    if (orderType) {
      res["order_type"] = boost::any(*orderType);
    }
    if (overApplyId) {
      res["over_apply_id"] = boost::any(*overApplyId);
    }
    if (personRefundFee) {
      res["person_refund_fee"] = boost::any(*personRefundFee);
    }
    if (personSettlePrice) {
      res["person_settle_price"] = boost::any(*personSettlePrice);
    }
    if (primaryId) {
      res["primary_id"] = boost::any(*primaryId);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectName) {
      res["project_name"] = boost::any(*projectName);
    }
    if (promotionFee) {
      res["promotion_fee"] = boost::any(*promotionFee);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (roomNumber) {
      res["room_number"] = boost::any(*roomNumber);
    }
    if (roomPrice) {
      res["room_price"] = boost::any(*roomPrice);
    }
    if (roomType) {
      res["room_type"] = boost::any(*roomType);
    }
    if (serviceFee) {
      res["service_fee"] = boost::any(*serviceFee);
    }
    if (settlementFee) {
      res["settlement_fee"] = boost::any(*settlementFee);
    }
    if (settlementGrantFee) {
      res["settlement_grant_fee"] = boost::any(*settlementGrantFee);
    }
    if (settlementTime) {
      res["settlement_time"] = boost::any(*settlementTime);
    }
    if (settlementType) {
      res["settlement_type"] = boost::any(*settlementType);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (totalNights) {
      res["total_nights"] = boost::any(*totalNights);
    }
    if (travelerId) {
      res["traveler_id"] = boost::any(*travelerId);
    }
    if (travelerJobNo) {
      res["traveler_job_no"] = boost::any(*travelerJobNo);
    }
    if (travelerName) {
      res["traveler_name"] = boost::any(*travelerName);
    }
    if (voucherType) {
      res["voucher_type"] = boost::any(*voucherType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alipay_trade_no") != m.end() && !m["alipay_trade_no"].empty()) {
      alipayTradeNo = make_shared<string>(boost::any_cast<string>(m["alipay_trade_no"]));
    }
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["apply_id"]));
    }
    if (m.find("bill_record_time") != m.end() && !m["bill_record_time"].empty()) {
      billRecordTime = make_shared<string>(boost::any_cast<string>(m["bill_record_time"]));
    }
    if (m.find("book_time") != m.end() && !m["book_time"].empty()) {
      bookTime = make_shared<string>(boost::any_cast<string>(m["book_time"]));
    }
    if (m.find("booker_id") != m.end() && !m["booker_id"].empty()) {
      bookerId = make_shared<string>(boost::any_cast<string>(m["booker_id"]));
    }
    if (m.find("booker_job_no") != m.end() && !m["booker_job_no"].empty()) {
      bookerJobNo = make_shared<string>(boost::any_cast<string>(m["booker_job_no"]));
    }
    if (m.find("booker_name") != m.end() && !m["booker_name"].empty()) {
      bookerName = make_shared<string>(boost::any_cast<string>(m["booker_name"]));
    }
    if (m.find("capital_direction") != m.end() && !m["capital_direction"].empty()) {
      capitalDirection = make_shared<string>(boost::any_cast<string>(m["capital_direction"]));
    }
    if (m.find("cascade_department") != m.end() && !m["cascade_department"].empty()) {
      cascadeDepartment = make_shared<string>(boost::any_cast<string>(m["cascade_department"]));
    }
    if (m.find("check_in_date") != m.end() && !m["check_in_date"].empty()) {
      checkInDate = make_shared<string>(boost::any_cast<string>(m["check_in_date"]));
    }
    if (m.find("checkout_date") != m.end() && !m["checkout_date"].empty()) {
      checkoutDate = make_shared<string>(boost::any_cast<string>(m["checkout_date"]));
    }
    if (m.find("city") != m.end() && !m["city"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["city"]));
    }
    if (m.find("city_code") != m.end() && !m["city_code"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["city_code"]));
    }
    if (m.find("corp_refund_fee") != m.end() && !m["corp_refund_fee"].empty()) {
      corpRefundFee = make_shared<double>(boost::any_cast<double>(m["corp_refund_fee"]));
    }
    if (m.find("corp_total_fee") != m.end() && !m["corp_total_fee"].empty()) {
      corpTotalFee = make_shared<double>(boost::any_cast<double>(m["corp_total_fee"]));
    }
    if (m.find("cost_center") != m.end() && !m["cost_center"].empty()) {
      costCenter = make_shared<string>(boost::any_cast<string>(m["cost_center"]));
    }
    if (m.find("cost_center_number") != m.end() && !m["cost_center_number"].empty()) {
      costCenterNumber = make_shared<string>(boost::any_cast<string>(m["cost_center_number"]));
    }
    if (m.find("department") != m.end() && !m["department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["department"]));
    }
    if (m.find("department_id") != m.end() && !m["department_id"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["department_id"]));
    }
    if (m.find("fee_type") != m.end() && !m["fee_type"].empty()) {
      feeType = make_shared<string>(boost::any_cast<string>(m["fee_type"]));
    }
    if (m.find("fees") != m.end() && !m["fees"].empty()) {
      fees = make_shared<double>(boost::any_cast<double>(m["fees"]));
    }
    if (m.find("fu_point_fee") != m.end() && !m["fu_point_fee"].empty()) {
      fuPointFee = make_shared<double>(boost::any_cast<double>(m["fu_point_fee"]));
    }
    if (m.find("hotel_name") != m.end() && !m["hotel_name"].empty()) {
      hotelName = make_shared<string>(boost::any_cast<string>(m["hotel_name"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["index"]));
    }
    if (m.find("invoice_title") != m.end() && !m["invoice_title"].empty()) {
      invoiceTitle = make_shared<string>(boost::any_cast<string>(m["invoice_title"]));
    }
    if (m.find("is_negotiation") != m.end() && !m["is_negotiation"].empty()) {
      isNegotiation = make_shared<string>(boost::any_cast<string>(m["is_negotiation"]));
    }
    if (m.find("is_share_str") != m.end() && !m["is_share_str"].empty()) {
      isShareStr = make_shared<string>(boost::any_cast<string>(m["is_share_str"]));
    }
    if (m.find("nights") != m.end() && !m["nights"].empty()) {
      nights = make_shared<long>(boost::any_cast<long>(m["nights"]));
    }
    if (m.find("order_id") != m.end() && !m["order_id"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["order_id"]));
    }
    if (m.find("order_price") != m.end() && !m["order_price"].empty()) {
      orderPrice = make_shared<double>(boost::any_cast<double>(m["order_price"]));
    }
    if (m.find("order_type") != m.end() && !m["order_type"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["order_type"]));
    }
    if (m.find("over_apply_id") != m.end() && !m["over_apply_id"].empty()) {
      overApplyId = make_shared<string>(boost::any_cast<string>(m["over_apply_id"]));
    }
    if (m.find("person_refund_fee") != m.end() && !m["person_refund_fee"].empty()) {
      personRefundFee = make_shared<double>(boost::any_cast<double>(m["person_refund_fee"]));
    }
    if (m.find("person_settle_price") != m.end() && !m["person_settle_price"].empty()) {
      personSettlePrice = make_shared<double>(boost::any_cast<double>(m["person_settle_price"]));
    }
    if (m.find("primary_id") != m.end() && !m["primary_id"].empty()) {
      primaryId = make_shared<long>(boost::any_cast<long>(m["primary_id"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_name") != m.end() && !m["project_name"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["project_name"]));
    }
    if (m.find("promotion_fee") != m.end() && !m["promotion_fee"].empty()) {
      promotionFee = make_shared<double>(boost::any_cast<double>(m["promotion_fee"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("room_number") != m.end() && !m["room_number"].empty()) {
      roomNumber = make_shared<long>(boost::any_cast<long>(m["room_number"]));
    }
    if (m.find("room_price") != m.end() && !m["room_price"].empty()) {
      roomPrice = make_shared<double>(boost::any_cast<double>(m["room_price"]));
    }
    if (m.find("room_type") != m.end() && !m["room_type"].empty()) {
      roomType = make_shared<string>(boost::any_cast<string>(m["room_type"]));
    }
    if (m.find("service_fee") != m.end() && !m["service_fee"].empty()) {
      serviceFee = make_shared<double>(boost::any_cast<double>(m["service_fee"]));
    }
    if (m.find("settlement_fee") != m.end() && !m["settlement_fee"].empty()) {
      settlementFee = make_shared<double>(boost::any_cast<double>(m["settlement_fee"]));
    }
    if (m.find("settlement_grant_fee") != m.end() && !m["settlement_grant_fee"].empty()) {
      settlementGrantFee = make_shared<double>(boost::any_cast<double>(m["settlement_grant_fee"]));
    }
    if (m.find("settlement_time") != m.end() && !m["settlement_time"].empty()) {
      settlementTime = make_shared<string>(boost::any_cast<string>(m["settlement_time"]));
    }
    if (m.find("settlement_type") != m.end() && !m["settlement_type"].empty()) {
      settlementType = make_shared<string>(boost::any_cast<string>(m["settlement_type"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("total_nights") != m.end() && !m["total_nights"].empty()) {
      totalNights = make_shared<long>(boost::any_cast<long>(m["total_nights"]));
    }
    if (m.find("traveler_id") != m.end() && !m["traveler_id"].empty()) {
      travelerId = make_shared<string>(boost::any_cast<string>(m["traveler_id"]));
    }
    if (m.find("traveler_job_no") != m.end() && !m["traveler_job_no"].empty()) {
      travelerJobNo = make_shared<string>(boost::any_cast<string>(m["traveler_job_no"]));
    }
    if (m.find("traveler_name") != m.end() && !m["traveler_name"].empty()) {
      travelerName = make_shared<string>(boost::any_cast<string>(m["traveler_name"]));
    }
    if (m.find("voucher_type") != m.end() && !m["voucher_type"].empty()) {
      voucherType = make_shared<long>(boost::any_cast<long>(m["voucher_type"]));
    }
  }


  virtual ~HotelBillSettlementQueryResponseBodyModuleDataList() = default;
};
class HotelBillSettlementQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> category{};
  shared_ptr<string> corpId{};
  shared_ptr<vector<HotelBillSettlementQueryResponseBodyModuleDataList>> dataList{};
  shared_ptr<string> periodEnd{};
  shared_ptr<string> periodStart{};
  shared_ptr<long> totalNum{};

  HotelBillSettlementQueryResponseBodyModule() {}

  explicit HotelBillSettlementQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data_list"] = boost::any(temp1);
    }
    if (periodEnd) {
      res["period_end"] = boost::any(*periodEnd);
    }
    if (periodStart) {
      res["period_start"] = boost::any(*periodStart);
    }
    if (totalNum) {
      res["total_num"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<long>(boost::any_cast<long>(m["category"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("data_list") != m.end() && !m["data_list"].empty()) {
      if (typeid(vector<boost::any>) == m["data_list"].type()) {
        vector<HotelBillSettlementQueryResponseBodyModuleDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HotelBillSettlementQueryResponseBodyModuleDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<HotelBillSettlementQueryResponseBodyModuleDataList>>(expect1);
      }
    }
    if (m.find("period_end") != m.end() && !m["period_end"].empty()) {
      periodEnd = make_shared<string>(boost::any_cast<string>(m["period_end"]));
    }
    if (m.find("period_start") != m.end() && !m["period_start"].empty()) {
      periodStart = make_shared<string>(boost::any_cast<string>(m["period_start"]));
    }
    if (m.find("total_num") != m.end() && !m["total_num"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["total_num"]));
    }
  }


  virtual ~HotelBillSettlementQueryResponseBodyModule() = default;
};
class HotelBillSettlementQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<HotelBillSettlementQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  HotelBillSettlementQueryResponseBody() {}

  explicit HotelBillSettlementQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        HotelBillSettlementQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<HotelBillSettlementQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~HotelBillSettlementQueryResponseBody() = default;
};
class HotelBillSettlementQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HotelBillSettlementQueryResponseBody> body{};

  HotelBillSettlementQueryResponse() {}

  explicit HotelBillSettlementQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HotelBillSettlementQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HotelBillSettlementQueryResponseBody>(model1);
      }
    }
  }


  virtual ~HotelBillSettlementQueryResponse() = default;
};
class HotelExceedApplyQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  HotelExceedApplyQueryHeaders() {}

  explicit HotelExceedApplyQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~HotelExceedApplyQueryHeaders() = default;
};
class HotelExceedApplyQueryRequest : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};

  HotelExceedApplyQueryRequest() {}

  explicit HotelExceedApplyQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
  }


  virtual ~HotelExceedApplyQueryRequest() = default;
};
class HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo : public Darabonba::Model {
public:
  shared_ptr<string> checkIn{};
  shared_ptr<string> checkOut{};
  shared_ptr<string> cityCode{};
  shared_ptr<string> cityName{};
  shared_ptr<long> price{};
  shared_ptr<bool> together{};
  shared_ptr<long> type{};

  HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo() {}

  explicit HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkIn) {
      res["check_in"] = boost::any(*checkIn);
    }
    if (checkOut) {
      res["check_out"] = boost::any(*checkOut);
    }
    if (cityCode) {
      res["city_code"] = boost::any(*cityCode);
    }
    if (cityName) {
      res["city_name"] = boost::any(*cityName);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    if (together) {
      res["together"] = boost::any(*together);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("check_in") != m.end() && !m["check_in"].empty()) {
      checkIn = make_shared<string>(boost::any_cast<string>(m["check_in"]));
    }
    if (m.find("check_out") != m.end() && !m["check_out"].empty()) {
      checkOut = make_shared<string>(boost::any_cast<string>(m["check_out"]));
    }
    if (m.find("city_code") != m.end() && !m["city_code"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["city_code"]));
    }
    if (m.find("city_name") != m.end() && !m["city_name"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["city_name"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["price"]));
    }
    if (m.find("together") != m.end() && !m["together"].empty()) {
      together = make_shared<bool>(boost::any_cast<bool>(m["together"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo() = default;
};
class HotelExceedApplyQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};
  shared_ptr<HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo> applyIntentionInfoDo{};
  shared_ptr<string> btripCause{};
  shared_ptr<string> corpId{};
  shared_ptr<string> exceedReason{};
  shared_ptr<long> exceedType{};
  shared_ptr<string> originStandard{};
  shared_ptr<long> status{};
  shared_ptr<string> submitTime{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartCorpId{};
  shared_ptr<string> userId{};

  HotelExceedApplyQueryResponseBodyModule() {}

  explicit HotelExceedApplyQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (applyIntentionInfoDo) {
      res["apply_intention_info_do"] = applyIntentionInfoDo ? boost::any(applyIntentionInfoDo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (btripCause) {
      res["btrip_cause"] = boost::any(*btripCause);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (exceedReason) {
      res["exceed_reason"] = boost::any(*exceedReason);
    }
    if (exceedType) {
      res["exceed_type"] = boost::any(*exceedType);
    }
    if (originStandard) {
      res["origin_standard"] = boost::any(*originStandard);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (submitTime) {
      res["submit_time"] = boost::any(*submitTime);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartCorpId) {
      res["thirdpart_corp_id"] = boost::any(*thirdpartCorpId);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("apply_intention_info_do") != m.end() && !m["apply_intention_info_do"].empty()) {
      if (typeid(map<string, boost::any>) == m["apply_intention_info_do"].type()) {
        HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["apply_intention_info_do"]));
        applyIntentionInfoDo = make_shared<HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo>(model1);
      }
    }
    if (m.find("btrip_cause") != m.end() && !m["btrip_cause"].empty()) {
      btripCause = make_shared<string>(boost::any_cast<string>(m["btrip_cause"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("exceed_reason") != m.end() && !m["exceed_reason"].empty()) {
      exceedReason = make_shared<string>(boost::any_cast<string>(m["exceed_reason"]));
    }
    if (m.find("exceed_type") != m.end() && !m["exceed_type"].empty()) {
      exceedType = make_shared<long>(boost::any_cast<long>(m["exceed_type"]));
    }
    if (m.find("origin_standard") != m.end() && !m["origin_standard"].empty()) {
      originStandard = make_shared<string>(boost::any_cast<string>(m["origin_standard"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("submit_time") != m.end() && !m["submit_time"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["submit_time"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_corp_id") != m.end() && !m["thirdpart_corp_id"].empty()) {
      thirdpartCorpId = make_shared<string>(boost::any_cast<string>(m["thirdpart_corp_id"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~HotelExceedApplyQueryResponseBodyModule() = default;
};
class HotelExceedApplyQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<HotelExceedApplyQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  HotelExceedApplyQueryResponseBody() {}

  explicit HotelExceedApplyQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        HotelExceedApplyQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<HotelExceedApplyQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~HotelExceedApplyQueryResponseBody() = default;
};
class HotelExceedApplyQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HotelExceedApplyQueryResponseBody> body{};

  HotelExceedApplyQueryResponse() {}

  explicit HotelExceedApplyQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HotelExceedApplyQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HotelExceedApplyQueryResponseBody>(model1);
      }
    }
  }


  virtual ~HotelExceedApplyQueryResponse() = default;
};
class HotelOrderListQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  HotelOrderListQueryHeaders() {}

  explicit HotelOrderListQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~HotelOrderListQueryHeaders() = default;
};
class HotelOrderListQueryRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allApply{};
  shared_ptr<long> applyId{};
  shared_ptr<string> departId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> updateEndTime{};
  shared_ptr<string> updateStartTime{};
  shared_ptr<string> userId{};

  HotelOrderListQueryRequest() {}

  explicit HotelOrderListQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allApply) {
      res["all_apply"] = boost::any(*allApply);
    }
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (endTime) {
      res["end_time"] = boost::any(*endTime);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["start_time"] = boost::any(*startTime);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (updateEndTime) {
      res["update_end_time"] = boost::any(*updateEndTime);
    }
    if (updateStartTime) {
      res["update_start_time"] = boost::any(*updateStartTime);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("all_apply") != m.end() && !m["all_apply"].empty()) {
      allApply = make_shared<bool>(boost::any_cast<bool>(m["all_apply"]));
    }
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("end_time") != m.end() && !m["end_time"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["end_time"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("start_time") != m.end() && !m["start_time"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["start_time"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("update_end_time") != m.end() && !m["update_end_time"].empty()) {
      updateEndTime = make_shared<string>(boost::any_cast<string>(m["update_end_time"]));
    }
    if (m.find("update_start_time") != m.end() && !m["update_start_time"].empty()) {
      updateStartTime = make_shared<string>(boost::any_cast<string>(m["update_start_time"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~HotelOrderListQueryRequest() = default;
};
class HotelOrderListQueryResponseBodyModuleCostCenter : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> number{};

  HotelOrderListQueryResponseBodyModuleCostCenter() {}

  explicit HotelOrderListQueryResponseBodyModuleCostCenter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (number) {
      res["number"] = boost::any(*number);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["number"]));
    }
  }


  virtual ~HotelOrderListQueryResponseBodyModuleCostCenter() = default;
};
class HotelOrderListQueryResponseBodyModuleInvoice : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> invoiceType{};
  shared_ptr<string> title{};

  HotelOrderListQueryResponseBodyModuleInvoice() {}

  explicit HotelOrderListQueryResponseBodyModuleInvoice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (invoiceType) {
      res["invoice_type"] = boost::any(*invoiceType);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("invoice_type") != m.end() && !m["invoice_type"].empty()) {
      invoiceType = make_shared<long>(boost::any_cast<long>(m["invoice_type"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~HotelOrderListQueryResponseBodyModuleInvoice() = default;
};
class HotelOrderListQueryResponseBodyModulePriceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> categoryCode{};
  shared_ptr<long> categoryType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> passengerName{};
  shared_ptr<long> payType{};
  shared_ptr<double> price{};
  shared_ptr<string> tradeId{};
  shared_ptr<long> type{};

  HotelOrderListQueryResponseBodyModulePriceInfoList() {}

  explicit HotelOrderListQueryResponseBodyModulePriceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryCode) {
      res["category_code"] = boost::any(*categoryCode);
    }
    if (categoryType) {
      res["category_type"] = boost::any(*categoryType);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (passengerName) {
      res["passenger_name"] = boost::any(*passengerName);
    }
    if (payType) {
      res["pay_type"] = boost::any(*payType);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    if (tradeId) {
      res["trade_id"] = boost::any(*tradeId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category_code") != m.end() && !m["category_code"].empty()) {
      categoryCode = make_shared<long>(boost::any_cast<long>(m["category_code"]));
    }
    if (m.find("category_type") != m.end() && !m["category_type"].empty()) {
      categoryType = make_shared<long>(boost::any_cast<long>(m["category_type"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("passenger_name") != m.end() && !m["passenger_name"].empty()) {
      passengerName = make_shared<string>(boost::any_cast<string>(m["passenger_name"]));
    }
    if (m.find("pay_type") != m.end() && !m["pay_type"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["pay_type"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["price"]));
    }
    if (m.find("trade_id") != m.end() && !m["trade_id"].empty()) {
      tradeId = make_shared<string>(boost::any_cast<string>(m["trade_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~HotelOrderListQueryResponseBodyModulePriceInfoList() = default;
};
class HotelOrderListQueryResponseBodyModuleUserAffiliateList : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  HotelOrderListQueryResponseBodyModuleUserAffiliateList() {}

  explicit HotelOrderListQueryResponseBodyModuleUserAffiliateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~HotelOrderListQueryResponseBodyModuleUserAffiliateList() = default;
};
class HotelOrderListQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};
  shared_ptr<string> btripTitle{};
  shared_ptr<string> checkIn{};
  shared_ptr<string> checkOut{};
  shared_ptr<string> city{};
  shared_ptr<string> contactName{};
  shared_ptr<string> corpId{};
  shared_ptr<string> corpName{};
  shared_ptr<HotelOrderListQueryResponseBodyModuleCostCenter> costCenter{};
  shared_ptr<string> departId{};
  shared_ptr<string> departName{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> guest{};
  shared_ptr<string> hotelName{};
  shared_ptr<long> hotelSupportVatInvoiceType{};
  shared_ptr<long> id{};
  shared_ptr<HotelOrderListQueryResponseBodyModuleInvoice> invoice{};
  shared_ptr<long> night{};
  shared_ptr<long> orderStatus{};
  shared_ptr<string> orderStatusDesc{};
  shared_ptr<long> orderType{};
  shared_ptr<string> orderTypeDesc{};
  shared_ptr<vector<HotelOrderListQueryResponseBodyModulePriceInfoList>> priceInfoList{};
  shared_ptr<string> projectCode{};
  shared_ptr<long> projectId{};
  shared_ptr<string> projectTitle{};
  shared_ptr<long> roomNum{};
  shared_ptr<string> roomType{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartItineraryId{};
  shared_ptr<string> thirdpartProjectId{};
  shared_ptr<vector<HotelOrderListQueryResponseBodyModuleUserAffiliateList>> userAffiliateList{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  HotelOrderListQueryResponseBodyModule() {}

  explicit HotelOrderListQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (btripTitle) {
      res["btrip_title"] = boost::any(*btripTitle);
    }
    if (checkIn) {
      res["check_in"] = boost::any(*checkIn);
    }
    if (checkOut) {
      res["check_out"] = boost::any(*checkOut);
    }
    if (city) {
      res["city"] = boost::any(*city);
    }
    if (contactName) {
      res["contact_name"] = boost::any(*contactName);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (corpName) {
      res["corp_name"] = boost::any(*corpName);
    }
    if (costCenter) {
      res["cost_center"] = costCenter ? boost::any(costCenter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (departName) {
      res["depart_name"] = boost::any(*departName);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmt_modified"] = boost::any(*gmtModified);
    }
    if (guest) {
      res["guest"] = boost::any(*guest);
    }
    if (hotelName) {
      res["hotel_name"] = boost::any(*hotelName);
    }
    if (hotelSupportVatInvoiceType) {
      res["hotel_support_vat_invoice_type"] = boost::any(*hotelSupportVatInvoiceType);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (invoice) {
      res["invoice"] = invoice ? boost::any(invoice->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (night) {
      res["night"] = boost::any(*night);
    }
    if (orderStatus) {
      res["order_status"] = boost::any(*orderStatus);
    }
    if (orderStatusDesc) {
      res["order_status_desc"] = boost::any(*orderStatusDesc);
    }
    if (orderType) {
      res["order_type"] = boost::any(*orderType);
    }
    if (orderTypeDesc) {
      res["order_type_desc"] = boost::any(*orderTypeDesc);
    }
    if (priceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*priceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["price_info_list"] = boost::any(temp1);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectId) {
      res["project_id"] = boost::any(*projectId);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (roomNum) {
      res["room_num"] = boost::any(*roomNum);
    }
    if (roomType) {
      res["room_type"] = boost::any(*roomType);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartItineraryId) {
      res["thirdpart_itinerary_id"] = boost::any(*thirdpartItineraryId);
    }
    if (thirdpartProjectId) {
      res["thirdpart_project_id"] = boost::any(*thirdpartProjectId);
    }
    if (userAffiliateList) {
      vector<boost::any> temp1;
      for(auto item1:*userAffiliateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["user_affiliate_list"] = boost::any(temp1);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("btrip_title") != m.end() && !m["btrip_title"].empty()) {
      btripTitle = make_shared<string>(boost::any_cast<string>(m["btrip_title"]));
    }
    if (m.find("check_in") != m.end() && !m["check_in"].empty()) {
      checkIn = make_shared<string>(boost::any_cast<string>(m["check_in"]));
    }
    if (m.find("check_out") != m.end() && !m["check_out"].empty()) {
      checkOut = make_shared<string>(boost::any_cast<string>(m["check_out"]));
    }
    if (m.find("city") != m.end() && !m["city"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["city"]));
    }
    if (m.find("contact_name") != m.end() && !m["contact_name"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["contact_name"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("corp_name") != m.end() && !m["corp_name"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["corp_name"]));
    }
    if (m.find("cost_center") != m.end() && !m["cost_center"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost_center"].type()) {
        HotelOrderListQueryResponseBodyModuleCostCenter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost_center"]));
        costCenter = make_shared<HotelOrderListQueryResponseBodyModuleCostCenter>(model1);
      }
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("depart_name") != m.end() && !m["depart_name"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["depart_name"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("gmt_modified") != m.end() && !m["gmt_modified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmt_modified"]));
    }
    if (m.find("guest") != m.end() && !m["guest"].empty()) {
      guest = make_shared<string>(boost::any_cast<string>(m["guest"]));
    }
    if (m.find("hotel_name") != m.end() && !m["hotel_name"].empty()) {
      hotelName = make_shared<string>(boost::any_cast<string>(m["hotel_name"]));
    }
    if (m.find("hotel_support_vat_invoice_type") != m.end() && !m["hotel_support_vat_invoice_type"].empty()) {
      hotelSupportVatInvoiceType = make_shared<long>(boost::any_cast<long>(m["hotel_support_vat_invoice_type"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("invoice") != m.end() && !m["invoice"].empty()) {
      if (typeid(map<string, boost::any>) == m["invoice"].type()) {
        HotelOrderListQueryResponseBodyModuleInvoice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["invoice"]));
        invoice = make_shared<HotelOrderListQueryResponseBodyModuleInvoice>(model1);
      }
    }
    if (m.find("night") != m.end() && !m["night"].empty()) {
      night = make_shared<long>(boost::any_cast<long>(m["night"]));
    }
    if (m.find("order_status") != m.end() && !m["order_status"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["order_status"]));
    }
    if (m.find("order_status_desc") != m.end() && !m["order_status_desc"].empty()) {
      orderStatusDesc = make_shared<string>(boost::any_cast<string>(m["order_status_desc"]));
    }
    if (m.find("order_type") != m.end() && !m["order_type"].empty()) {
      orderType = make_shared<long>(boost::any_cast<long>(m["order_type"]));
    }
    if (m.find("order_type_desc") != m.end() && !m["order_type_desc"].empty()) {
      orderTypeDesc = make_shared<string>(boost::any_cast<string>(m["order_type_desc"]));
    }
    if (m.find("price_info_list") != m.end() && !m["price_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["price_info_list"].type()) {
        vector<HotelOrderListQueryResponseBodyModulePriceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["price_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HotelOrderListQueryResponseBodyModulePriceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        priceInfoList = make_shared<vector<HotelOrderListQueryResponseBodyModulePriceInfoList>>(expect1);
      }
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_id") != m.end() && !m["project_id"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["project_id"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("room_num") != m.end() && !m["room_num"].empty()) {
      roomNum = make_shared<long>(boost::any_cast<long>(m["room_num"]));
    }
    if (m.find("room_type") != m.end() && !m["room_type"].empty()) {
      roomType = make_shared<string>(boost::any_cast<string>(m["room_type"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_itinerary_id") != m.end() && !m["thirdpart_itinerary_id"].empty()) {
      thirdpartItineraryId = make_shared<string>(boost::any_cast<string>(m["thirdpart_itinerary_id"]));
    }
    if (m.find("thirdpart_project_id") != m.end() && !m["thirdpart_project_id"].empty()) {
      thirdpartProjectId = make_shared<string>(boost::any_cast<string>(m["thirdpart_project_id"]));
    }
    if (m.find("user_affiliate_list") != m.end() && !m["user_affiliate_list"].empty()) {
      if (typeid(vector<boost::any>) == m["user_affiliate_list"].type()) {
        vector<HotelOrderListQueryResponseBodyModuleUserAffiliateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["user_affiliate_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HotelOrderListQueryResponseBodyModuleUserAffiliateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userAffiliateList = make_shared<vector<HotelOrderListQueryResponseBodyModuleUserAffiliateList>>(expect1);
      }
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~HotelOrderListQueryResponseBodyModule() = default;
};
class HotelOrderListQueryResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNumber{};

  HotelOrderListQueryResponseBodyPageInfo() {}

  explicit HotelOrderListQueryResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (totalNumber) {
      res["total_number"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("total_number") != m.end() && !m["total_number"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["total_number"]));
    }
  }


  virtual ~HotelOrderListQueryResponseBodyPageInfo() = default;
};
class HotelOrderListQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<HotelOrderListQueryResponseBodyModule>> module{};
  shared_ptr<HotelOrderListQueryResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  HotelOrderListQueryResponseBody() {}

  explicit HotelOrderListQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      vector<boost::any> temp1;
      for(auto item1:*module){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["module"] = boost::any(temp1);
    }
    if (pageInfo) {
      res["page_info"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(vector<boost::any>) == m["module"].type()) {
        vector<HotelOrderListQueryResponseBodyModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["module"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HotelOrderListQueryResponseBodyModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        module = make_shared<vector<HotelOrderListQueryResponseBodyModule>>(expect1);
      }
    }
    if (m.find("page_info") != m.end() && !m["page_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["page_info"].type()) {
        HotelOrderListQueryResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["page_info"]));
        pageInfo = make_shared<HotelOrderListQueryResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~HotelOrderListQueryResponseBody() = default;
};
class HotelOrderListQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HotelOrderListQueryResponseBody> body{};

  HotelOrderListQueryResponse() {}

  explicit HotelOrderListQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HotelOrderListQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HotelOrderListQueryResponseBody>(model1);
      }
    }
  }


  virtual ~HotelOrderListQueryResponse() = default;
};
class HotelOrderQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  HotelOrderQueryHeaders() {}

  explicit HotelOrderQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~HotelOrderQueryHeaders() = default;
};
class HotelOrderQueryRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};

  HotelOrderQueryRequest() {}

  explicit HotelOrderQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["order_id"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_id") != m.end() && !m["order_id"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["order_id"]));
    }
  }


  virtual ~HotelOrderQueryRequest() = default;
};
class HotelOrderQueryResponseBodyModuleHotelInfo : public Darabonba::Model {
public:
  shared_ptr<long> checkIn{};
  shared_ptr<long> checkOut{};
  shared_ptr<string> city{};
  shared_ptr<string> hotelName{};
  shared_ptr<long> hotelSupportVatInvoiceType{};
  shared_ptr<long> night{};
  shared_ptr<long> roomNum{};
  shared_ptr<string> roomType{};

  HotelOrderQueryResponseBodyModuleHotelInfo() {}

  explicit HotelOrderQueryResponseBodyModuleHotelInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkIn) {
      res["check_in"] = boost::any(*checkIn);
    }
    if (checkOut) {
      res["check_out"] = boost::any(*checkOut);
    }
    if (city) {
      res["city"] = boost::any(*city);
    }
    if (hotelName) {
      res["hotel_name"] = boost::any(*hotelName);
    }
    if (hotelSupportVatInvoiceType) {
      res["hotel_support_vat_invoice_type"] = boost::any(*hotelSupportVatInvoiceType);
    }
    if (night) {
      res["night"] = boost::any(*night);
    }
    if (roomNum) {
      res["room_num"] = boost::any(*roomNum);
    }
    if (roomType) {
      res["room_type"] = boost::any(*roomType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("check_in") != m.end() && !m["check_in"].empty()) {
      checkIn = make_shared<long>(boost::any_cast<long>(m["check_in"]));
    }
    if (m.find("check_out") != m.end() && !m["check_out"].empty()) {
      checkOut = make_shared<long>(boost::any_cast<long>(m["check_out"]));
    }
    if (m.find("city") != m.end() && !m["city"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["city"]));
    }
    if (m.find("hotel_name") != m.end() && !m["hotel_name"].empty()) {
      hotelName = make_shared<string>(boost::any_cast<string>(m["hotel_name"]));
    }
    if (m.find("hotel_support_vat_invoice_type") != m.end() && !m["hotel_support_vat_invoice_type"].empty()) {
      hotelSupportVatInvoiceType = make_shared<long>(boost::any_cast<long>(m["hotel_support_vat_invoice_type"]));
    }
    if (m.find("night") != m.end() && !m["night"].empty()) {
      night = make_shared<long>(boost::any_cast<long>(m["night"]));
    }
    if (m.find("room_num") != m.end() && !m["room_num"].empty()) {
      roomNum = make_shared<long>(boost::any_cast<long>(m["room_num"]));
    }
    if (m.find("room_type") != m.end() && !m["room_type"].empty()) {
      roomType = make_shared<string>(boost::any_cast<string>(m["room_type"]));
    }
  }


  virtual ~HotelOrderQueryResponseBodyModuleHotelInfo() = default;
};
class HotelOrderQueryResponseBodyModuleInvoiceInfo : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> title{};

  HotelOrderQueryResponseBodyModuleInvoiceInfo() {}

  explicit HotelOrderQueryResponseBodyModuleInvoiceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~HotelOrderQueryResponseBodyModuleInvoiceInfo() = default;
};
class HotelOrderQueryResponseBodyModuleOrderBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<string> btripTitle{};
  shared_ptr<string> corpId{};
  shared_ptr<string> corpName{};
  shared_ptr<string> departId{};
  shared_ptr<string> departName{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> itineraryId{};
  shared_ptr<long> orderStatus{};
  shared_ptr<long> orderType{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartDepartId{};
  shared_ptr<string> thirdpartItineraryId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  HotelOrderQueryResponseBodyModuleOrderBaseInfo() {}

  explicit HotelOrderQueryResponseBodyModuleOrderBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (btripTitle) {
      res["btrip_title"] = boost::any(*btripTitle);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (corpName) {
      res["corp_name"] = boost::any(*corpName);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (departName) {
      res["depart_name"] = boost::any(*departName);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmt_modified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (orderStatus) {
      res["order_status"] = boost::any(*orderStatus);
    }
    if (orderType) {
      res["order_type"] = boost::any(*orderType);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartDepartId) {
      res["thirdpart_depart_id"] = boost::any(*thirdpartDepartId);
    }
    if (thirdpartItineraryId) {
      res["thirdpart_itinerary_id"] = boost::any(*thirdpartItineraryId);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["apply_id"]));
    }
    if (m.find("btrip_title") != m.end() && !m["btrip_title"].empty()) {
      btripTitle = make_shared<string>(boost::any_cast<string>(m["btrip_title"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("corp_name") != m.end() && !m["corp_name"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["corp_name"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("depart_name") != m.end() && !m["depart_name"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["depart_name"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmt_create"]));
    }
    if (m.find("gmt_modified") != m.end() && !m["gmt_modified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmt_modified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("order_status") != m.end() && !m["order_status"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["order_status"]));
    }
    if (m.find("order_type") != m.end() && !m["order_type"].empty()) {
      orderType = make_shared<long>(boost::any_cast<long>(m["order_type"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_depart_id") != m.end() && !m["thirdpart_depart_id"].empty()) {
      thirdpartDepartId = make_shared<string>(boost::any_cast<string>(m["thirdpart_depart_id"]));
    }
    if (m.find("thirdpart_itinerary_id") != m.end() && !m["thirdpart_itinerary_id"].empty()) {
      thirdpartItineraryId = make_shared<string>(boost::any_cast<string>(m["thirdpart_itinerary_id"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~HotelOrderQueryResponseBodyModuleOrderBaseInfo() = default;
};
class HotelOrderQueryResponseBodyModulePassengerList : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<string> costCenterName{};
  shared_ptr<string> costCenterNumber{};
  shared_ptr<string> projectCode{};
  shared_ptr<long> projectId{};
  shared_ptr<string> projectTitle{};
  shared_ptr<string> thirdpartCostCenterId{};
  shared_ptr<string> thirdpartProjectId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<long> userType{};

  HotelOrderQueryResponseBodyModulePassengerList() {}

  explicit HotelOrderQueryResponseBodyModulePassengerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["cost_center_id"] = boost::any(*costCenterId);
    }
    if (costCenterName) {
      res["cost_center_name"] = boost::any(*costCenterName);
    }
    if (costCenterNumber) {
      res["cost_center_number"] = boost::any(*costCenterNumber);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectId) {
      res["project_id"] = boost::any(*projectId);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (thirdpartCostCenterId) {
      res["thirdpart_cost_center_id"] = boost::any(*thirdpartCostCenterId);
    }
    if (thirdpartProjectId) {
      res["thirdpart_project_id"] = boost::any(*thirdpartProjectId);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    if (userType) {
      res["user_type"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost_center_id") != m.end() && !m["cost_center_id"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["cost_center_id"]));
    }
    if (m.find("cost_center_name") != m.end() && !m["cost_center_name"].empty()) {
      costCenterName = make_shared<string>(boost::any_cast<string>(m["cost_center_name"]));
    }
    if (m.find("cost_center_number") != m.end() && !m["cost_center_number"].empty()) {
      costCenterNumber = make_shared<string>(boost::any_cast<string>(m["cost_center_number"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_id") != m.end() && !m["project_id"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["project_id"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("thirdpart_cost_center_id") != m.end() && !m["thirdpart_cost_center_id"].empty()) {
      thirdpartCostCenterId = make_shared<string>(boost::any_cast<string>(m["thirdpart_cost_center_id"]));
    }
    if (m.find("thirdpart_project_id") != m.end() && !m["thirdpart_project_id"].empty()) {
      thirdpartProjectId = make_shared<string>(boost::any_cast<string>(m["thirdpart_project_id"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
    if (m.find("user_type") != m.end() && !m["user_type"].empty()) {
      userType = make_shared<long>(boost::any_cast<long>(m["user_type"]));
    }
  }


  virtual ~HotelOrderQueryResponseBodyModulePassengerList() = default;
};
class HotelOrderQueryResponseBodyModulePriceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> categoryCode{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> payType{};
  shared_ptr<double> price{};
  shared_ptr<string> tradeId{};
  shared_ptr<long> type{};

  HotelOrderQueryResponseBodyModulePriceInfoList() {}

  explicit HotelOrderQueryResponseBodyModulePriceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryCode) {
      res["category_code"] = boost::any(*categoryCode);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (payType) {
      res["pay_type"] = boost::any(*payType);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    if (tradeId) {
      res["trade_id"] = boost::any(*tradeId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category_code") != m.end() && !m["category_code"].empty()) {
      categoryCode = make_shared<long>(boost::any_cast<long>(m["category_code"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmt_create"]));
    }
    if (m.find("pay_type") != m.end() && !m["pay_type"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["pay_type"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["price"]));
    }
    if (m.find("trade_id") != m.end() && !m["trade_id"].empty()) {
      tradeId = make_shared<string>(boost::any_cast<string>(m["trade_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~HotelOrderQueryResponseBodyModulePriceInfoList() = default;
};
class HotelOrderQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<HotelOrderQueryResponseBodyModuleHotelInfo> hotelInfo{};
  shared_ptr<HotelOrderQueryResponseBodyModuleInvoiceInfo> invoiceInfo{};
  shared_ptr<HotelOrderQueryResponseBodyModuleOrderBaseInfo> orderBaseInfo{};
  shared_ptr<vector<HotelOrderQueryResponseBodyModulePassengerList>> passengerList{};
  shared_ptr<vector<HotelOrderQueryResponseBodyModulePriceInfoList>> priceInfoList{};

  HotelOrderQueryResponseBodyModule() {}

  explicit HotelOrderQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hotelInfo) {
      res["hotel_info"] = hotelInfo ? boost::any(hotelInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (invoiceInfo) {
      res["invoice_info"] = invoiceInfo ? boost::any(invoiceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderBaseInfo) {
      res["order_base_info"] = orderBaseInfo ? boost::any(orderBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (passengerList) {
      vector<boost::any> temp1;
      for(auto item1:*passengerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["passenger_list"] = boost::any(temp1);
    }
    if (priceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*priceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["price_info_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("hotel_info") != m.end() && !m["hotel_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["hotel_info"].type()) {
        HotelOrderQueryResponseBodyModuleHotelInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["hotel_info"]));
        hotelInfo = make_shared<HotelOrderQueryResponseBodyModuleHotelInfo>(model1);
      }
    }
    if (m.find("invoice_info") != m.end() && !m["invoice_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["invoice_info"].type()) {
        HotelOrderQueryResponseBodyModuleInvoiceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["invoice_info"]));
        invoiceInfo = make_shared<HotelOrderQueryResponseBodyModuleInvoiceInfo>(model1);
      }
    }
    if (m.find("order_base_info") != m.end() && !m["order_base_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["order_base_info"].type()) {
        HotelOrderQueryResponseBodyModuleOrderBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["order_base_info"]));
        orderBaseInfo = make_shared<HotelOrderQueryResponseBodyModuleOrderBaseInfo>(model1);
      }
    }
    if (m.find("passenger_list") != m.end() && !m["passenger_list"].empty()) {
      if (typeid(vector<boost::any>) == m["passenger_list"].type()) {
        vector<HotelOrderQueryResponseBodyModulePassengerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["passenger_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HotelOrderQueryResponseBodyModulePassengerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        passengerList = make_shared<vector<HotelOrderQueryResponseBodyModulePassengerList>>(expect1);
      }
    }
    if (m.find("price_info_list") != m.end() && !m["price_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["price_info_list"].type()) {
        vector<HotelOrderQueryResponseBodyModulePriceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["price_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HotelOrderQueryResponseBodyModulePriceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        priceInfoList = make_shared<vector<HotelOrderQueryResponseBodyModulePriceInfoList>>(expect1);
      }
    }
  }


  virtual ~HotelOrderQueryResponseBodyModule() = default;
};
class HotelOrderQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<HotelOrderQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  HotelOrderQueryResponseBody() {}

  explicit HotelOrderQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        HotelOrderQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<HotelOrderQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~HotelOrderQueryResponseBody() = default;
};
class HotelOrderQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HotelOrderQueryResponseBody> body{};

  HotelOrderQueryResponse() {}

  explicit HotelOrderQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HotelOrderQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HotelOrderQueryResponseBody>(model1);
      }
    }
  }


  virtual ~HotelOrderQueryResponse() = default;
};
class IeFlightBillSettlementQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  IeFlightBillSettlementQueryHeaders() {}

  explicit IeFlightBillSettlementQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~IeFlightBillSettlementQueryHeaders() = default;
};
class IeFlightBillSettlementQueryRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> periodEnd{};
  shared_ptr<string> periodStart{};

  IeFlightBillSettlementQueryRequest() {}

  explicit IeFlightBillSettlementQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["page_no"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (periodEnd) {
      res["period_end"] = boost::any(*periodEnd);
    }
    if (periodStart) {
      res["period_start"] = boost::any(*periodStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page_no") != m.end() && !m["page_no"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["page_no"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("period_end") != m.end() && !m["period_end"].empty()) {
      periodEnd = make_shared<string>(boost::any_cast<string>(m["period_end"]));
    }
    if (m.find("period_start") != m.end() && !m["period_start"].empty()) {
      periodStart = make_shared<string>(boost::any_cast<string>(m["period_start"]));
    }
  }


  virtual ~IeFlightBillSettlementQueryRequest() = default;
};
class IeFlightBillSettlementQueryResponseBodyModuleDataList : public Darabonba::Model {
public:
  shared_ptr<long> advanceDay{};
  shared_ptr<string> airlineCorpCode{};
  shared_ptr<string> airlineCorpName{};
  shared_ptr<string> alipayTradeNo{};
  shared_ptr<string> applyId{};
  shared_ptr<string> arrAirportCode{};
  shared_ptr<string> arrCity{};
  shared_ptr<string> arrDate{};
  shared_ptr<string> arrStation{};
  shared_ptr<string> arrTime{};
  shared_ptr<string> billRecordTime{};
  shared_ptr<string> bookMode{};
  shared_ptr<string> bookTime{};
  shared_ptr<string> bookerId{};
  shared_ptr<string> bookerJobNo{};
  shared_ptr<string> bookerName{};
  shared_ptr<double> btripCouponFee{};
  shared_ptr<string> cabin{};
  shared_ptr<string> cabinClass{};
  shared_ptr<string> capitalDirection{};
  shared_ptr<string> cascadeDepartment{};
  shared_ptr<double> changeFee{};
  shared_ptr<double> corpPayOrderFee{};
  shared_ptr<string> costCenter{};
  shared_ptr<string> costCenterNumber{};
  shared_ptr<double> coupon{};
  shared_ptr<string> depAirportCode{};
  shared_ptr<string> department{};
  shared_ptr<string> departmentId{};
  shared_ptr<string> deptCity{};
  shared_ptr<string> deptDate{};
  shared_ptr<string> deptStation{};
  shared_ptr<string> deptTime{};
  shared_ptr<string> discount{};
  shared_ptr<string> feeType{};
  shared_ptr<string> flightNo{};
  shared_ptr<string> index{};
  shared_ptr<double> insuranceFee{};
  shared_ptr<string> insuranceNumber{};
  shared_ptr<string> invoiceTitle{};
  shared_ptr<string> mostDifferenceDeptTime{};
  shared_ptr<string> mostDifferenceDiscount{};
  shared_ptr<string> mostDifferenceFlightNo{};
  shared_ptr<double> mostDifferencePrice{};
  shared_ptr<string> mostDifferenceReason{};
  shared_ptr<double> mostPrice{};
  shared_ptr<double> negotiationCouponFee{};
  shared_ptr<string> orderId{};
  shared_ptr<string> orderStatusDesc{};
  shared_ptr<string> overApplyId{};
  shared_ptr<long> primaryId{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectName{};
  shared_ptr<double> refundFee{};
  shared_ptr<string> remark{};
  shared_ptr<string> repeatRefund{};
  shared_ptr<double> sealPrice{};
  shared_ptr<string> segmentType{};
  shared_ptr<double> serviceFee{};
  shared_ptr<double> settlementFee{};
  shared_ptr<double> settlementGrantFee{};
  shared_ptr<string> settlementTime{};
  shared_ptr<string> settlementType{};
  shared_ptr<long> status{};
  shared_ptr<string> subOrderId{};
  shared_ptr<double> taxFee{};
  shared_ptr<string> ticketId{};
  shared_ptr<string> trade{};
  shared_ptr<string> travelerId{};
  shared_ptr<string> travelerJobNo{};
  shared_ptr<string> travelerName{};
  shared_ptr<long> voucherType{};

  IeFlightBillSettlementQueryResponseBodyModuleDataList() {}

  explicit IeFlightBillSettlementQueryResponseBodyModuleDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advanceDay) {
      res["advance_day"] = boost::any(*advanceDay);
    }
    if (airlineCorpCode) {
      res["airline_corp_code"] = boost::any(*airlineCorpCode);
    }
    if (airlineCorpName) {
      res["airline_corp_name"] = boost::any(*airlineCorpName);
    }
    if (alipayTradeNo) {
      res["alipay_trade_no"] = boost::any(*alipayTradeNo);
    }
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (arrAirportCode) {
      res["arr_airport_code"] = boost::any(*arrAirportCode);
    }
    if (arrCity) {
      res["arr_city"] = boost::any(*arrCity);
    }
    if (arrDate) {
      res["arr_date"] = boost::any(*arrDate);
    }
    if (arrStation) {
      res["arr_station"] = boost::any(*arrStation);
    }
    if (arrTime) {
      res["arr_time"] = boost::any(*arrTime);
    }
    if (billRecordTime) {
      res["bill_record_time"] = boost::any(*billRecordTime);
    }
    if (bookMode) {
      res["book_mode"] = boost::any(*bookMode);
    }
    if (bookTime) {
      res["book_time"] = boost::any(*bookTime);
    }
    if (bookerId) {
      res["booker_id"] = boost::any(*bookerId);
    }
    if (bookerJobNo) {
      res["booker_job_no"] = boost::any(*bookerJobNo);
    }
    if (bookerName) {
      res["booker_name"] = boost::any(*bookerName);
    }
    if (btripCouponFee) {
      res["btrip_coupon_fee"] = boost::any(*btripCouponFee);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (capitalDirection) {
      res["capital_direction"] = boost::any(*capitalDirection);
    }
    if (cascadeDepartment) {
      res["cascade_department"] = boost::any(*cascadeDepartment);
    }
    if (changeFee) {
      res["change_fee"] = boost::any(*changeFee);
    }
    if (corpPayOrderFee) {
      res["corp_pay_order_fee"] = boost::any(*corpPayOrderFee);
    }
    if (costCenter) {
      res["cost_center"] = boost::any(*costCenter);
    }
    if (costCenterNumber) {
      res["cost_center_number"] = boost::any(*costCenterNumber);
    }
    if (coupon) {
      res["coupon"] = boost::any(*coupon);
    }
    if (depAirportCode) {
      res["dep_airport_code"] = boost::any(*depAirportCode);
    }
    if (department) {
      res["department"] = boost::any(*department);
    }
    if (departmentId) {
      res["department_id"] = boost::any(*departmentId);
    }
    if (deptCity) {
      res["dept_city"] = boost::any(*deptCity);
    }
    if (deptDate) {
      res["dept_date"] = boost::any(*deptDate);
    }
    if (deptStation) {
      res["dept_station"] = boost::any(*deptStation);
    }
    if (deptTime) {
      res["dept_time"] = boost::any(*deptTime);
    }
    if (discount) {
      res["discount"] = boost::any(*discount);
    }
    if (feeType) {
      res["fee_type"] = boost::any(*feeType);
    }
    if (flightNo) {
      res["flight_no"] = boost::any(*flightNo);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (insuranceFee) {
      res["insurance_fee"] = boost::any(*insuranceFee);
    }
    if (insuranceNumber) {
      res["insurance_number"] = boost::any(*insuranceNumber);
    }
    if (invoiceTitle) {
      res["invoice_title"] = boost::any(*invoiceTitle);
    }
    if (mostDifferenceDeptTime) {
      res["most_difference_dept_time"] = boost::any(*mostDifferenceDeptTime);
    }
    if (mostDifferenceDiscount) {
      res["most_difference_discount"] = boost::any(*mostDifferenceDiscount);
    }
    if (mostDifferenceFlightNo) {
      res["most_difference_flight_no"] = boost::any(*mostDifferenceFlightNo);
    }
    if (mostDifferencePrice) {
      res["most_difference_price"] = boost::any(*mostDifferencePrice);
    }
    if (mostDifferenceReason) {
      res["most_difference_reason"] = boost::any(*mostDifferenceReason);
    }
    if (mostPrice) {
      res["most_price"] = boost::any(*mostPrice);
    }
    if (negotiationCouponFee) {
      res["negotiation_coupon_fee"] = boost::any(*negotiationCouponFee);
    }
    if (orderId) {
      res["order_id"] = boost::any(*orderId);
    }
    if (orderStatusDesc) {
      res["order_status_desc"] = boost::any(*orderStatusDesc);
    }
    if (overApplyId) {
      res["over_apply_id"] = boost::any(*overApplyId);
    }
    if (primaryId) {
      res["primary_id"] = boost::any(*primaryId);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectName) {
      res["project_name"] = boost::any(*projectName);
    }
    if (refundFee) {
      res["refund_fee"] = boost::any(*refundFee);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (repeatRefund) {
      res["repeat_refund"] = boost::any(*repeatRefund);
    }
    if (sealPrice) {
      res["seal_price"] = boost::any(*sealPrice);
    }
    if (segmentType) {
      res["segment_type"] = boost::any(*segmentType);
    }
    if (serviceFee) {
      res["service_fee"] = boost::any(*serviceFee);
    }
    if (settlementFee) {
      res["settlement_fee"] = boost::any(*settlementFee);
    }
    if (settlementGrantFee) {
      res["settlement_grant_fee"] = boost::any(*settlementGrantFee);
    }
    if (settlementTime) {
      res["settlement_time"] = boost::any(*settlementTime);
    }
    if (settlementType) {
      res["settlement_type"] = boost::any(*settlementType);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subOrderId) {
      res["sub_order_id"] = boost::any(*subOrderId);
    }
    if (taxFee) {
      res["tax_fee"] = boost::any(*taxFee);
    }
    if (ticketId) {
      res["ticket_id"] = boost::any(*ticketId);
    }
    if (trade) {
      res["trade"] = boost::any(*trade);
    }
    if (travelerId) {
      res["traveler_id"] = boost::any(*travelerId);
    }
    if (travelerJobNo) {
      res["traveler_job_no"] = boost::any(*travelerJobNo);
    }
    if (travelerName) {
      res["traveler_name"] = boost::any(*travelerName);
    }
    if (voucherType) {
      res["voucher_type"] = boost::any(*voucherType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("advance_day") != m.end() && !m["advance_day"].empty()) {
      advanceDay = make_shared<long>(boost::any_cast<long>(m["advance_day"]));
    }
    if (m.find("airline_corp_code") != m.end() && !m["airline_corp_code"].empty()) {
      airlineCorpCode = make_shared<string>(boost::any_cast<string>(m["airline_corp_code"]));
    }
    if (m.find("airline_corp_name") != m.end() && !m["airline_corp_name"].empty()) {
      airlineCorpName = make_shared<string>(boost::any_cast<string>(m["airline_corp_name"]));
    }
    if (m.find("alipay_trade_no") != m.end() && !m["alipay_trade_no"].empty()) {
      alipayTradeNo = make_shared<string>(boost::any_cast<string>(m["alipay_trade_no"]));
    }
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["apply_id"]));
    }
    if (m.find("arr_airport_code") != m.end() && !m["arr_airport_code"].empty()) {
      arrAirportCode = make_shared<string>(boost::any_cast<string>(m["arr_airport_code"]));
    }
    if (m.find("arr_city") != m.end() && !m["arr_city"].empty()) {
      arrCity = make_shared<string>(boost::any_cast<string>(m["arr_city"]));
    }
    if (m.find("arr_date") != m.end() && !m["arr_date"].empty()) {
      arrDate = make_shared<string>(boost::any_cast<string>(m["arr_date"]));
    }
    if (m.find("arr_station") != m.end() && !m["arr_station"].empty()) {
      arrStation = make_shared<string>(boost::any_cast<string>(m["arr_station"]));
    }
    if (m.find("arr_time") != m.end() && !m["arr_time"].empty()) {
      arrTime = make_shared<string>(boost::any_cast<string>(m["arr_time"]));
    }
    if (m.find("bill_record_time") != m.end() && !m["bill_record_time"].empty()) {
      billRecordTime = make_shared<string>(boost::any_cast<string>(m["bill_record_time"]));
    }
    if (m.find("book_mode") != m.end() && !m["book_mode"].empty()) {
      bookMode = make_shared<string>(boost::any_cast<string>(m["book_mode"]));
    }
    if (m.find("book_time") != m.end() && !m["book_time"].empty()) {
      bookTime = make_shared<string>(boost::any_cast<string>(m["book_time"]));
    }
    if (m.find("booker_id") != m.end() && !m["booker_id"].empty()) {
      bookerId = make_shared<string>(boost::any_cast<string>(m["booker_id"]));
    }
    if (m.find("booker_job_no") != m.end() && !m["booker_job_no"].empty()) {
      bookerJobNo = make_shared<string>(boost::any_cast<string>(m["booker_job_no"]));
    }
    if (m.find("booker_name") != m.end() && !m["booker_name"].empty()) {
      bookerName = make_shared<string>(boost::any_cast<string>(m["booker_name"]));
    }
    if (m.find("btrip_coupon_fee") != m.end() && !m["btrip_coupon_fee"].empty()) {
      btripCouponFee = make_shared<double>(boost::any_cast<double>(m["btrip_coupon_fee"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("capital_direction") != m.end() && !m["capital_direction"].empty()) {
      capitalDirection = make_shared<string>(boost::any_cast<string>(m["capital_direction"]));
    }
    if (m.find("cascade_department") != m.end() && !m["cascade_department"].empty()) {
      cascadeDepartment = make_shared<string>(boost::any_cast<string>(m["cascade_department"]));
    }
    if (m.find("change_fee") != m.end() && !m["change_fee"].empty()) {
      changeFee = make_shared<double>(boost::any_cast<double>(m["change_fee"]));
    }
    if (m.find("corp_pay_order_fee") != m.end() && !m["corp_pay_order_fee"].empty()) {
      corpPayOrderFee = make_shared<double>(boost::any_cast<double>(m["corp_pay_order_fee"]));
    }
    if (m.find("cost_center") != m.end() && !m["cost_center"].empty()) {
      costCenter = make_shared<string>(boost::any_cast<string>(m["cost_center"]));
    }
    if (m.find("cost_center_number") != m.end() && !m["cost_center_number"].empty()) {
      costCenterNumber = make_shared<string>(boost::any_cast<string>(m["cost_center_number"]));
    }
    if (m.find("coupon") != m.end() && !m["coupon"].empty()) {
      coupon = make_shared<double>(boost::any_cast<double>(m["coupon"]));
    }
    if (m.find("dep_airport_code") != m.end() && !m["dep_airport_code"].empty()) {
      depAirportCode = make_shared<string>(boost::any_cast<string>(m["dep_airport_code"]));
    }
    if (m.find("department") != m.end() && !m["department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["department"]));
    }
    if (m.find("department_id") != m.end() && !m["department_id"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["department_id"]));
    }
    if (m.find("dept_city") != m.end() && !m["dept_city"].empty()) {
      deptCity = make_shared<string>(boost::any_cast<string>(m["dept_city"]));
    }
    if (m.find("dept_date") != m.end() && !m["dept_date"].empty()) {
      deptDate = make_shared<string>(boost::any_cast<string>(m["dept_date"]));
    }
    if (m.find("dept_station") != m.end() && !m["dept_station"].empty()) {
      deptStation = make_shared<string>(boost::any_cast<string>(m["dept_station"]));
    }
    if (m.find("dept_time") != m.end() && !m["dept_time"].empty()) {
      deptTime = make_shared<string>(boost::any_cast<string>(m["dept_time"]));
    }
    if (m.find("discount") != m.end() && !m["discount"].empty()) {
      discount = make_shared<string>(boost::any_cast<string>(m["discount"]));
    }
    if (m.find("fee_type") != m.end() && !m["fee_type"].empty()) {
      feeType = make_shared<string>(boost::any_cast<string>(m["fee_type"]));
    }
    if (m.find("flight_no") != m.end() && !m["flight_no"].empty()) {
      flightNo = make_shared<string>(boost::any_cast<string>(m["flight_no"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["index"]));
    }
    if (m.find("insurance_fee") != m.end() && !m["insurance_fee"].empty()) {
      insuranceFee = make_shared<double>(boost::any_cast<double>(m["insurance_fee"]));
    }
    if (m.find("insurance_number") != m.end() && !m["insurance_number"].empty()) {
      insuranceNumber = make_shared<string>(boost::any_cast<string>(m["insurance_number"]));
    }
    if (m.find("invoice_title") != m.end() && !m["invoice_title"].empty()) {
      invoiceTitle = make_shared<string>(boost::any_cast<string>(m["invoice_title"]));
    }
    if (m.find("most_difference_dept_time") != m.end() && !m["most_difference_dept_time"].empty()) {
      mostDifferenceDeptTime = make_shared<string>(boost::any_cast<string>(m["most_difference_dept_time"]));
    }
    if (m.find("most_difference_discount") != m.end() && !m["most_difference_discount"].empty()) {
      mostDifferenceDiscount = make_shared<string>(boost::any_cast<string>(m["most_difference_discount"]));
    }
    if (m.find("most_difference_flight_no") != m.end() && !m["most_difference_flight_no"].empty()) {
      mostDifferenceFlightNo = make_shared<string>(boost::any_cast<string>(m["most_difference_flight_no"]));
    }
    if (m.find("most_difference_price") != m.end() && !m["most_difference_price"].empty()) {
      mostDifferencePrice = make_shared<double>(boost::any_cast<double>(m["most_difference_price"]));
    }
    if (m.find("most_difference_reason") != m.end() && !m["most_difference_reason"].empty()) {
      mostDifferenceReason = make_shared<string>(boost::any_cast<string>(m["most_difference_reason"]));
    }
    if (m.find("most_price") != m.end() && !m["most_price"].empty()) {
      mostPrice = make_shared<double>(boost::any_cast<double>(m["most_price"]));
    }
    if (m.find("negotiation_coupon_fee") != m.end() && !m["negotiation_coupon_fee"].empty()) {
      negotiationCouponFee = make_shared<double>(boost::any_cast<double>(m["negotiation_coupon_fee"]));
    }
    if (m.find("order_id") != m.end() && !m["order_id"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["order_id"]));
    }
    if (m.find("order_status_desc") != m.end() && !m["order_status_desc"].empty()) {
      orderStatusDesc = make_shared<string>(boost::any_cast<string>(m["order_status_desc"]));
    }
    if (m.find("over_apply_id") != m.end() && !m["over_apply_id"].empty()) {
      overApplyId = make_shared<string>(boost::any_cast<string>(m["over_apply_id"]));
    }
    if (m.find("primary_id") != m.end() && !m["primary_id"].empty()) {
      primaryId = make_shared<long>(boost::any_cast<long>(m["primary_id"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_name") != m.end() && !m["project_name"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["project_name"]));
    }
    if (m.find("refund_fee") != m.end() && !m["refund_fee"].empty()) {
      refundFee = make_shared<double>(boost::any_cast<double>(m["refund_fee"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("repeat_refund") != m.end() && !m["repeat_refund"].empty()) {
      repeatRefund = make_shared<string>(boost::any_cast<string>(m["repeat_refund"]));
    }
    if (m.find("seal_price") != m.end() && !m["seal_price"].empty()) {
      sealPrice = make_shared<double>(boost::any_cast<double>(m["seal_price"]));
    }
    if (m.find("segment_type") != m.end() && !m["segment_type"].empty()) {
      segmentType = make_shared<string>(boost::any_cast<string>(m["segment_type"]));
    }
    if (m.find("service_fee") != m.end() && !m["service_fee"].empty()) {
      serviceFee = make_shared<double>(boost::any_cast<double>(m["service_fee"]));
    }
    if (m.find("settlement_fee") != m.end() && !m["settlement_fee"].empty()) {
      settlementFee = make_shared<double>(boost::any_cast<double>(m["settlement_fee"]));
    }
    if (m.find("settlement_grant_fee") != m.end() && !m["settlement_grant_fee"].empty()) {
      settlementGrantFee = make_shared<double>(boost::any_cast<double>(m["settlement_grant_fee"]));
    }
    if (m.find("settlement_time") != m.end() && !m["settlement_time"].empty()) {
      settlementTime = make_shared<string>(boost::any_cast<string>(m["settlement_time"]));
    }
    if (m.find("settlement_type") != m.end() && !m["settlement_type"].empty()) {
      settlementType = make_shared<string>(boost::any_cast<string>(m["settlement_type"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("sub_order_id") != m.end() && !m["sub_order_id"].empty()) {
      subOrderId = make_shared<string>(boost::any_cast<string>(m["sub_order_id"]));
    }
    if (m.find("tax_fee") != m.end() && !m["tax_fee"].empty()) {
      taxFee = make_shared<double>(boost::any_cast<double>(m["tax_fee"]));
    }
    if (m.find("ticket_id") != m.end() && !m["ticket_id"].empty()) {
      ticketId = make_shared<string>(boost::any_cast<string>(m["ticket_id"]));
    }
    if (m.find("trade") != m.end() && !m["trade"].empty()) {
      trade = make_shared<string>(boost::any_cast<string>(m["trade"]));
    }
    if (m.find("traveler_id") != m.end() && !m["traveler_id"].empty()) {
      travelerId = make_shared<string>(boost::any_cast<string>(m["traveler_id"]));
    }
    if (m.find("traveler_job_no") != m.end() && !m["traveler_job_no"].empty()) {
      travelerJobNo = make_shared<string>(boost::any_cast<string>(m["traveler_job_no"]));
    }
    if (m.find("traveler_name") != m.end() && !m["traveler_name"].empty()) {
      travelerName = make_shared<string>(boost::any_cast<string>(m["traveler_name"]));
    }
    if (m.find("voucher_type") != m.end() && !m["voucher_type"].empty()) {
      voucherType = make_shared<long>(boost::any_cast<long>(m["voucher_type"]));
    }
  }


  virtual ~IeFlightBillSettlementQueryResponseBodyModuleDataList() = default;
};
class IeFlightBillSettlementQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> category{};
  shared_ptr<string> corpId{};
  shared_ptr<vector<IeFlightBillSettlementQueryResponseBodyModuleDataList>> dataList{};
  shared_ptr<string> periodEnd{};
  shared_ptr<string> periodStart{};
  shared_ptr<long> totalNum{};

  IeFlightBillSettlementQueryResponseBodyModule() {}

  explicit IeFlightBillSettlementQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data_list"] = boost::any(temp1);
    }
    if (periodEnd) {
      res["period_end"] = boost::any(*periodEnd);
    }
    if (periodStart) {
      res["period_start"] = boost::any(*periodStart);
    }
    if (totalNum) {
      res["total_num"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<long>(boost::any_cast<long>(m["category"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("data_list") != m.end() && !m["data_list"].empty()) {
      if (typeid(vector<boost::any>) == m["data_list"].type()) {
        vector<IeFlightBillSettlementQueryResponseBodyModuleDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IeFlightBillSettlementQueryResponseBodyModuleDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<IeFlightBillSettlementQueryResponseBodyModuleDataList>>(expect1);
      }
    }
    if (m.find("period_end") != m.end() && !m["period_end"].empty()) {
      periodEnd = make_shared<string>(boost::any_cast<string>(m["period_end"]));
    }
    if (m.find("period_start") != m.end() && !m["period_start"].empty()) {
      periodStart = make_shared<string>(boost::any_cast<string>(m["period_start"]));
    }
    if (m.find("total_num") != m.end() && !m["total_num"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["total_num"]));
    }
  }


  virtual ~IeFlightBillSettlementQueryResponseBodyModule() = default;
};
class IeFlightBillSettlementQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<IeFlightBillSettlementQueryResponseBodyModule> module{};
  shared_ptr<bool> morePage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  IeFlightBillSettlementQueryResponseBody() {}

  explicit IeFlightBillSettlementQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (morePage) {
      res["more_page"] = boost::any(*morePage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        IeFlightBillSettlementQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<IeFlightBillSettlementQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("more_page") != m.end() && !m["more_page"].empty()) {
      morePage = make_shared<bool>(boost::any_cast<bool>(m["more_page"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~IeFlightBillSettlementQueryResponseBody() = default;
};
class IeFlightBillSettlementQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IeFlightBillSettlementQueryResponseBody> body{};

  IeFlightBillSettlementQueryResponse() {}

  explicit IeFlightBillSettlementQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IeFlightBillSettlementQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IeFlightBillSettlementQueryResponseBody>(model1);
      }
    }
  }


  virtual ~IeFlightBillSettlementQueryResponse() = default;
};
class InvoiceAddHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  InvoiceAddHeaders() {}

  explicit InvoiceAddHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~InvoiceAddHeaders() = default;
};
class InvoiceAddRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> bankName{};
  shared_ptr<string> bankNo{};
  shared_ptr<string> taxNo{};
  shared_ptr<string> tel{};
  shared_ptr<string> thirdPartId{};
  shared_ptr<string> title{};
  shared_ptr<long> type{};

  InvoiceAddRequest() {}

  explicit InvoiceAddRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["address"] = boost::any(*address);
    }
    if (bankName) {
      res["bank_name"] = boost::any(*bankName);
    }
    if (bankNo) {
      res["bank_no"] = boost::any(*bankNo);
    }
    if (taxNo) {
      res["tax_no"] = boost::any(*taxNo);
    }
    if (tel) {
      res["tel"] = boost::any(*tel);
    }
    if (thirdPartId) {
      res["third_part_id"] = boost::any(*thirdPartId);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("address") != m.end() && !m["address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["address"]));
    }
    if (m.find("bank_name") != m.end() && !m["bank_name"].empty()) {
      bankName = make_shared<string>(boost::any_cast<string>(m["bank_name"]));
    }
    if (m.find("bank_no") != m.end() && !m["bank_no"].empty()) {
      bankNo = make_shared<string>(boost::any_cast<string>(m["bank_no"]));
    }
    if (m.find("tax_no") != m.end() && !m["tax_no"].empty()) {
      taxNo = make_shared<string>(boost::any_cast<string>(m["tax_no"]));
    }
    if (m.find("tel") != m.end() && !m["tel"].empty()) {
      tel = make_shared<string>(boost::any_cast<string>(m["tel"]));
    }
    if (m.find("third_part_id") != m.end() && !m["third_part_id"].empty()) {
      thirdPartId = make_shared<string>(boost::any_cast<string>(m["third_part_id"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~InvoiceAddRequest() = default;
};
class InvoiceAddResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  InvoiceAddResponseBody() {}

  explicit InvoiceAddResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
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
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~InvoiceAddResponseBody() = default;
};
class InvoiceAddResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InvoiceAddResponseBody> body{};

  InvoiceAddResponse() {}

  explicit InvoiceAddResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InvoiceAddResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InvoiceAddResponseBody>(model1);
      }
    }
  }


  virtual ~InvoiceAddResponse() = default;
};
class InvoiceDeleteHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  InvoiceDeleteHeaders() {}

  explicit InvoiceDeleteHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~InvoiceDeleteHeaders() = default;
};
class InvoiceDeleteRequest : public Darabonba::Model {
public:
  shared_ptr<string> thirdPartId{};

  InvoiceDeleteRequest() {}

  explicit InvoiceDeleteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (thirdPartId) {
      res["third_part_id"] = boost::any(*thirdPartId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("third_part_id") != m.end() && !m["third_part_id"].empty()) {
      thirdPartId = make_shared<string>(boost::any_cast<string>(m["third_part_id"]));
    }
  }


  virtual ~InvoiceDeleteRequest() = default;
};
class InvoiceDeleteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  InvoiceDeleteResponseBody() {}

  explicit InvoiceDeleteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
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
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~InvoiceDeleteResponseBody() = default;
};
class InvoiceDeleteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InvoiceDeleteResponseBody> body{};

  InvoiceDeleteResponse() {}

  explicit InvoiceDeleteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InvoiceDeleteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InvoiceDeleteResponseBody>(model1);
      }
    }
  }


  virtual ~InvoiceDeleteResponse() = default;
};
class InvoiceModifyHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  InvoiceModifyHeaders() {}

  explicit InvoiceModifyHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~InvoiceModifyHeaders() = default;
};
class InvoiceModifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> bankName{};
  shared_ptr<string> bankNo{};
  shared_ptr<string> taxNo{};
  shared_ptr<string> tel{};
  shared_ptr<string> thirdPartId{};
  shared_ptr<string> title{};
  shared_ptr<long> type{};

  InvoiceModifyRequest() {}

  explicit InvoiceModifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["address"] = boost::any(*address);
    }
    if (bankName) {
      res["bank_name"] = boost::any(*bankName);
    }
    if (bankNo) {
      res["bank_no"] = boost::any(*bankNo);
    }
    if (taxNo) {
      res["tax_no"] = boost::any(*taxNo);
    }
    if (tel) {
      res["tel"] = boost::any(*tel);
    }
    if (thirdPartId) {
      res["third_part_id"] = boost::any(*thirdPartId);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("address") != m.end() && !m["address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["address"]));
    }
    if (m.find("bank_name") != m.end() && !m["bank_name"].empty()) {
      bankName = make_shared<string>(boost::any_cast<string>(m["bank_name"]));
    }
    if (m.find("bank_no") != m.end() && !m["bank_no"].empty()) {
      bankNo = make_shared<string>(boost::any_cast<string>(m["bank_no"]));
    }
    if (m.find("tax_no") != m.end() && !m["tax_no"].empty()) {
      taxNo = make_shared<string>(boost::any_cast<string>(m["tax_no"]));
    }
    if (m.find("tel") != m.end() && !m["tel"].empty()) {
      tel = make_shared<string>(boost::any_cast<string>(m["tel"]));
    }
    if (m.find("third_part_id") != m.end() && !m["third_part_id"].empty()) {
      thirdPartId = make_shared<string>(boost::any_cast<string>(m["third_part_id"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~InvoiceModifyRequest() = default;
};
class InvoiceModifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  InvoiceModifyResponseBody() {}

  explicit InvoiceModifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
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
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~InvoiceModifyResponseBody() = default;
};
class InvoiceModifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InvoiceModifyResponseBody> body{};

  InvoiceModifyResponse() {}

  explicit InvoiceModifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InvoiceModifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InvoiceModifyResponseBody>(model1);
      }
    }
  }


  virtual ~InvoiceModifyResponse() = default;
};
class InvoiceRuleSaveHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  InvoiceRuleSaveHeaders() {}

  explicit InvoiceRuleSaveHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~InvoiceRuleSaveHeaders() = default;
};
class InvoiceRuleSaveRequestEntities : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> type{};

  InvoiceRuleSaveRequestEntities() {}

  explicit InvoiceRuleSaveRequestEntities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~InvoiceRuleSaveRequestEntities() = default;
};
class InvoiceRuleSaveRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allEmploye{};
  shared_ptr<vector<InvoiceRuleSaveRequestEntities>> entities{};
  shared_ptr<string> thirdPartId{};

  InvoiceRuleSaveRequest() {}

  explicit InvoiceRuleSaveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allEmploye) {
      res["all_employe"] = boost::any(*allEmploye);
    }
    if (entities) {
      vector<boost::any> temp1;
      for(auto item1:*entities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["entities"] = boost::any(temp1);
    }
    if (thirdPartId) {
      res["third_part_id"] = boost::any(*thirdPartId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("all_employe") != m.end() && !m["all_employe"].empty()) {
      allEmploye = make_shared<bool>(boost::any_cast<bool>(m["all_employe"]));
    }
    if (m.find("entities") != m.end() && !m["entities"].empty()) {
      if (typeid(vector<boost::any>) == m["entities"].type()) {
        vector<InvoiceRuleSaveRequestEntities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["entities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InvoiceRuleSaveRequestEntities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entities = make_shared<vector<InvoiceRuleSaveRequestEntities>>(expect1);
      }
    }
    if (m.find("third_part_id") != m.end() && !m["third_part_id"].empty()) {
      thirdPartId = make_shared<string>(boost::any_cast<string>(m["third_part_id"]));
    }
  }


  virtual ~InvoiceRuleSaveRequest() = default;
};
class InvoiceRuleSaveShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allEmploye{};
  shared_ptr<string> entitiesShrink{};
  shared_ptr<string> thirdPartId{};

  InvoiceRuleSaveShrinkRequest() {}

  explicit InvoiceRuleSaveShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allEmploye) {
      res["all_employe"] = boost::any(*allEmploye);
    }
    if (entitiesShrink) {
      res["entities"] = boost::any(*entitiesShrink);
    }
    if (thirdPartId) {
      res["third_part_id"] = boost::any(*thirdPartId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("all_employe") != m.end() && !m["all_employe"].empty()) {
      allEmploye = make_shared<bool>(boost::any_cast<bool>(m["all_employe"]));
    }
    if (m.find("entities") != m.end() && !m["entities"].empty()) {
      entitiesShrink = make_shared<string>(boost::any_cast<string>(m["entities"]));
    }
    if (m.find("third_part_id") != m.end() && !m["third_part_id"].empty()) {
      thirdPartId = make_shared<string>(boost::any_cast<string>(m["third_part_id"]));
    }
  }


  virtual ~InvoiceRuleSaveShrinkRequest() = default;
};
class InvoiceRuleSaveResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> addNum{};
  shared_ptr<long> removeNum{};

  InvoiceRuleSaveResponseBodyModule() {}

  explicit InvoiceRuleSaveResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addNum) {
      res["add_num"] = boost::any(*addNum);
    }
    if (removeNum) {
      res["remove_num"] = boost::any(*removeNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("add_num") != m.end() && !m["add_num"].empty()) {
      addNum = make_shared<long>(boost::any_cast<long>(m["add_num"]));
    }
    if (m.find("remove_num") != m.end() && !m["remove_num"].empty()) {
      removeNum = make_shared<long>(boost::any_cast<long>(m["remove_num"]));
    }
  }


  virtual ~InvoiceRuleSaveResponseBodyModule() = default;
};
class InvoiceRuleSaveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<InvoiceRuleSaveResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  InvoiceRuleSaveResponseBody() {}

  explicit InvoiceRuleSaveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        InvoiceRuleSaveResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<InvoiceRuleSaveResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~InvoiceRuleSaveResponseBody() = default;
};
class InvoiceRuleSaveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InvoiceRuleSaveResponseBody> body{};

  InvoiceRuleSaveResponse() {}

  explicit InvoiceRuleSaveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InvoiceRuleSaveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InvoiceRuleSaveResponseBody>(model1);
      }
    }
  }


  virtual ~InvoiceRuleSaveResponse() = default;
};
class InvoiceSearchHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  InvoiceSearchHeaders() {}

  explicit InvoiceSearchHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~InvoiceSearchHeaders() = default;
};
class InvoiceSearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  InvoiceSearchRequest() {}

  explicit InvoiceSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~InvoiceSearchRequest() = default;
};
class InvoiceSearchResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> thirdPartInvoiceId{};
  shared_ptr<string> title{};

  InvoiceSearchResponseBodyModule() {}

  explicit InvoiceSearchResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (thirdPartInvoiceId) {
      res["third_part_invoice_id"] = boost::any(*thirdPartInvoiceId);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("third_part_invoice_id") != m.end() && !m["third_part_invoice_id"].empty()) {
      thirdPartInvoiceId = make_shared<string>(boost::any_cast<string>(m["third_part_invoice_id"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~InvoiceSearchResponseBodyModule() = default;
};
class InvoiceSearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<InvoiceSearchResponseBodyModule>> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  InvoiceSearchResponseBody() {}

  explicit InvoiceSearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      vector<boost::any> temp1;
      for(auto item1:*module){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["module"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(vector<boost::any>) == m["module"].type()) {
        vector<InvoiceSearchResponseBodyModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["module"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InvoiceSearchResponseBodyModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        module = make_shared<vector<InvoiceSearchResponseBodyModule>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~InvoiceSearchResponseBody() = default;
};
class InvoiceSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InvoiceSearchResponseBody> body{};

  InvoiceSearchResponse() {}

  explicit InvoiceSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InvoiceSearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InvoiceSearchResponseBody>(model1);
      }
    }
  }


  virtual ~InvoiceSearchResponse() = default;
};
class IsvUserSaveHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  IsvUserSaveHeaders() {}

  explicit IsvUserSaveHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~IsvUserSaveHeaders() = default;
};
class IsvUserSaveRequestUserList : public Darabonba::Model {
public:
  shared_ptr<long> departId{};
  shared_ptr<string> email{};
  shared_ptr<string> jobNo{};
  shared_ptr<long> leaveStatus{};
  shared_ptr<string> managerUserId{};
  shared_ptr<string> phone{};
  shared_ptr<string> position{};
  shared_ptr<string> positionLevel{};
  shared_ptr<string> realNameEn{};
  shared_ptr<string> thirdDepartId{};
  shared_ptr<vector<string>> thirdDepartIdList{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  IsvUserSaveRequestUserList() {}

  explicit IsvUserSaveRequestUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (jobNo) {
      res["job_no"] = boost::any(*jobNo);
    }
    if (leaveStatus) {
      res["leave_status"] = boost::any(*leaveStatus);
    }
    if (managerUserId) {
      res["manager_user_id"] = boost::any(*managerUserId);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (position) {
      res["position"] = boost::any(*position);
    }
    if (positionLevel) {
      res["position_level"] = boost::any(*positionLevel);
    }
    if (realNameEn) {
      res["real_name_en"] = boost::any(*realNameEn);
    }
    if (thirdDepartId) {
      res["third_depart_id"] = boost::any(*thirdDepartId);
    }
    if (thirdDepartIdList) {
      res["third_depart_id_list"] = boost::any(*thirdDepartIdList);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<long>(boost::any_cast<long>(m["depart_id"]));
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("job_no") != m.end() && !m["job_no"].empty()) {
      jobNo = make_shared<string>(boost::any_cast<string>(m["job_no"]));
    }
    if (m.find("leave_status") != m.end() && !m["leave_status"].empty()) {
      leaveStatus = make_shared<long>(boost::any_cast<long>(m["leave_status"]));
    }
    if (m.find("manager_user_id") != m.end() && !m["manager_user_id"].empty()) {
      managerUserId = make_shared<string>(boost::any_cast<string>(m["manager_user_id"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("position") != m.end() && !m["position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["position"]));
    }
    if (m.find("position_level") != m.end() && !m["position_level"].empty()) {
      positionLevel = make_shared<string>(boost::any_cast<string>(m["position_level"]));
    }
    if (m.find("real_name_en") != m.end() && !m["real_name_en"].empty()) {
      realNameEn = make_shared<string>(boost::any_cast<string>(m["real_name_en"]));
    }
    if (m.find("third_depart_id") != m.end() && !m["third_depart_id"].empty()) {
      thirdDepartId = make_shared<string>(boost::any_cast<string>(m["third_depart_id"]));
    }
    if (m.find("third_depart_id_list") != m.end() && !m["third_depart_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["third_depart_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["third_depart_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      thirdDepartIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~IsvUserSaveRequestUserList() = default;
};
class IsvUserSaveRequest : public Darabonba::Model {
public:
  shared_ptr<vector<IsvUserSaveRequestUserList>> userList{};

  IsvUserSaveRequest() {}

  explicit IsvUserSaveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userList) {
      vector<boost::any> temp1;
      for(auto item1:*userList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["user_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("user_list") != m.end() && !m["user_list"].empty()) {
      if (typeid(vector<boost::any>) == m["user_list"].type()) {
        vector<IsvUserSaveRequestUserList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["user_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IsvUserSaveRequestUserList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userList = make_shared<vector<IsvUserSaveRequestUserList>>(expect1);
      }
    }
  }


  virtual ~IsvUserSaveRequest() = default;
};
class IsvUserSaveShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> userListShrink{};

  IsvUserSaveShrinkRequest() {}

  explicit IsvUserSaveShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userListShrink) {
      res["user_list"] = boost::any(*userListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("user_list") != m.end() && !m["user_list"].empty()) {
      userListShrink = make_shared<string>(boost::any_cast<string>(m["user_list"]));
    }
  }


  virtual ~IsvUserSaveShrinkRequest() = default;
};
class IsvUserSaveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  IsvUserSaveResponseBody() {}

  explicit IsvUserSaveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = boost::any(*module);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["module"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~IsvUserSaveResponseBody() = default;
};
class IsvUserSaveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IsvUserSaveResponseBody> body{};

  IsvUserSaveResponse() {}

  explicit IsvUserSaveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IsvUserSaveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IsvUserSaveResponseBody>(model1);
      }
    }
  }


  virtual ~IsvUserSaveResponse() = default;
};
class MonthBillGetHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  MonthBillGetHeaders() {}

  explicit MonthBillGetHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~MonthBillGetHeaders() = default;
};
class MonthBillGetRequest : public Darabonba::Model {
public:
  shared_ptr<string> billMonth{};

  MonthBillGetRequest() {}

  explicit MonthBillGetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billMonth) {
      res["bill_month"] = boost::any(*billMonth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bill_month") != m.end() && !m["bill_month"].empty()) {
      billMonth = make_shared<string>(boost::any_cast<string>(m["bill_month"]));
    }
  }


  virtual ~MonthBillGetRequest() = default;
};
class MonthBillGetResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> startDate{};
  shared_ptr<string> url{};

  MonthBillGetResponseBodyModule() {}

  explicit MonthBillGetResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["end_date"] = boost::any(*endDate);
    }
    if (startDate) {
      res["start_date"] = boost::any(*startDate);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end_date") != m.end() && !m["end_date"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["end_date"]));
    }
    if (m.find("start_date") != m.end() && !m["start_date"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["start_date"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~MonthBillGetResponseBodyModule() = default;
};
class MonthBillGetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<MonthBillGetResponseBodyModule>> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  MonthBillGetResponseBody() {}

  explicit MonthBillGetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      vector<boost::any> temp1;
      for(auto item1:*module){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["module"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(vector<boost::any>) == m["module"].type()) {
        vector<MonthBillGetResponseBodyModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["module"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MonthBillGetResponseBodyModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        module = make_shared<vector<MonthBillGetResponseBodyModule>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~MonthBillGetResponseBody() = default;
};
class MonthBillGetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MonthBillGetResponseBody> body{};

  MonthBillGetResponse() {}

  explicit MonthBillGetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MonthBillGetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MonthBillGetResponseBody>(model1);
      }
    }
  }


  virtual ~MonthBillGetResponse() = default;
};
class ProjectAddHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  ProjectAddHeaders() {}

  explicit ProjectAddHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~ProjectAddHeaders() = default;
};
class ProjectAddRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> projectName{};
  shared_ptr<string> thirdPartCostCenterId{};
  shared_ptr<string> thirdPartId{};
  shared_ptr<string> thirdPartInvoiceId{};

  ProjectAddRequest() {}

  explicit ProjectAddRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (projectName) {
      res["project_name"] = boost::any(*projectName);
    }
    if (thirdPartCostCenterId) {
      res["third_part_cost_center_id"] = boost::any(*thirdPartCostCenterId);
    }
    if (thirdPartId) {
      res["third_part_id"] = boost::any(*thirdPartId);
    }
    if (thirdPartInvoiceId) {
      res["third_part_invoice_id"] = boost::any(*thirdPartInvoiceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("project_name") != m.end() && !m["project_name"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["project_name"]));
    }
    if (m.find("third_part_cost_center_id") != m.end() && !m["third_part_cost_center_id"].empty()) {
      thirdPartCostCenterId = make_shared<string>(boost::any_cast<string>(m["third_part_cost_center_id"]));
    }
    if (m.find("third_part_id") != m.end() && !m["third_part_id"].empty()) {
      thirdPartId = make_shared<string>(boost::any_cast<string>(m["third_part_id"]));
    }
    if (m.find("third_part_invoice_id") != m.end() && !m["third_part_invoice_id"].empty()) {
      thirdPartInvoiceId = make_shared<string>(boost::any_cast<string>(m["third_part_invoice_id"]));
    }
  }


  virtual ~ProjectAddRequest() = default;
};
class ProjectAddResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> module{};
  shared_ptr<bool> morePage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ProjectAddResponseBody() {}

  explicit ProjectAddResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = boost::any(*module);
    }
    if (morePage) {
      res["more_page"] = boost::any(*morePage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      module = make_shared<long>(boost::any_cast<long>(m["module"]));
    }
    if (m.find("more_page") != m.end() && !m["more_page"].empty()) {
      morePage = make_shared<bool>(boost::any_cast<bool>(m["more_page"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~ProjectAddResponseBody() = default;
};
class ProjectAddResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ProjectAddResponseBody> body{};

  ProjectAddResponse() {}

  explicit ProjectAddResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ProjectAddResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ProjectAddResponseBody>(model1);
      }
    }
  }


  virtual ~ProjectAddResponse() = default;
};
class ProjectDeleteHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  ProjectDeleteHeaders() {}

  explicit ProjectDeleteHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~ProjectDeleteHeaders() = default;
};
class ProjectDeleteRequest : public Darabonba::Model {
public:
  shared_ptr<string> thirdPartId{};

  ProjectDeleteRequest() {}

  explicit ProjectDeleteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (thirdPartId) {
      res["third_part_id"] = boost::any(*thirdPartId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("third_part_id") != m.end() && !m["third_part_id"].empty()) {
      thirdPartId = make_shared<string>(boost::any_cast<string>(m["third_part_id"]));
    }
  }


  virtual ~ProjectDeleteRequest() = default;
};
class ProjectDeleteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ProjectDeleteResponseBody() {}

  explicit ProjectDeleteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = boost::any(*module);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      module = make_shared<bool>(boost::any_cast<bool>(m["module"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~ProjectDeleteResponseBody() = default;
};
class ProjectDeleteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ProjectDeleteResponseBody> body{};

  ProjectDeleteResponse() {}

  explicit ProjectDeleteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ProjectDeleteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ProjectDeleteResponseBody>(model1);
      }
    }
  }


  virtual ~ProjectDeleteResponse() = default;
};
class ProjectModifyHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  ProjectModifyHeaders() {}

  explicit ProjectModifyHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~ProjectModifyHeaders() = default;
};
class ProjectModifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> projectName{};
  shared_ptr<string> thirdPartCostCenterId{};
  shared_ptr<string> thirdPartId{};
  shared_ptr<string> thirdPartInvoiceId{};

  ProjectModifyRequest() {}

  explicit ProjectModifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (projectName) {
      res["project_name"] = boost::any(*projectName);
    }
    if (thirdPartCostCenterId) {
      res["third_part_cost_center_id"] = boost::any(*thirdPartCostCenterId);
    }
    if (thirdPartId) {
      res["third_part_id"] = boost::any(*thirdPartId);
    }
    if (thirdPartInvoiceId) {
      res["third_part_invoice_id"] = boost::any(*thirdPartInvoiceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("project_name") != m.end() && !m["project_name"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["project_name"]));
    }
    if (m.find("third_part_cost_center_id") != m.end() && !m["third_part_cost_center_id"].empty()) {
      thirdPartCostCenterId = make_shared<string>(boost::any_cast<string>(m["third_part_cost_center_id"]));
    }
    if (m.find("third_part_id") != m.end() && !m["third_part_id"].empty()) {
      thirdPartId = make_shared<string>(boost::any_cast<string>(m["third_part_id"]));
    }
    if (m.find("third_part_invoice_id") != m.end() && !m["third_part_invoice_id"].empty()) {
      thirdPartInvoiceId = make_shared<string>(boost::any_cast<string>(m["third_part_invoice_id"]));
    }
  }


  virtual ~ProjectModifyRequest() = default;
};
class ProjectModifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ProjectModifyResponseBody() {}

  explicit ProjectModifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = boost::any(*module);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      module = make_shared<bool>(boost::any_cast<bool>(m["module"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~ProjectModifyResponseBody() = default;
};
class ProjectModifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ProjectModifyResponseBody> body{};

  ProjectModifyResponse() {}

  explicit ProjectModifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ProjectModifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ProjectModifyResponseBody>(model1);
      }
    }
  }


  virtual ~ProjectModifyResponse() = default;
};
class SyncSingleUserHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  SyncSingleUserHeaders() {}

  explicit SyncSingleUserHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~SyncSingleUserHeaders() = default;
};
class SyncSingleUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> jobNo{};
  shared_ptr<long> leaveStatus{};
  shared_ptr<string> managerUserId{};
  shared_ptr<string> phone{};
  shared_ptr<string> position{};
  shared_ptr<string> positionLevel{};
  shared_ptr<string> realNameEn{};
  shared_ptr<vector<string>> thirdDepartIdList{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  SyncSingleUserRequest() {}

  explicit SyncSingleUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (jobNo) {
      res["job_no"] = boost::any(*jobNo);
    }
    if (leaveStatus) {
      res["leave_status"] = boost::any(*leaveStatus);
    }
    if (managerUserId) {
      res["manager_user_id"] = boost::any(*managerUserId);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (position) {
      res["position"] = boost::any(*position);
    }
    if (positionLevel) {
      res["position_level"] = boost::any(*positionLevel);
    }
    if (realNameEn) {
      res["real_name_en"] = boost::any(*realNameEn);
    }
    if (thirdDepartIdList) {
      res["third_depart_id_list"] = boost::any(*thirdDepartIdList);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("job_no") != m.end() && !m["job_no"].empty()) {
      jobNo = make_shared<string>(boost::any_cast<string>(m["job_no"]));
    }
    if (m.find("leave_status") != m.end() && !m["leave_status"].empty()) {
      leaveStatus = make_shared<long>(boost::any_cast<long>(m["leave_status"]));
    }
    if (m.find("manager_user_id") != m.end() && !m["manager_user_id"].empty()) {
      managerUserId = make_shared<string>(boost::any_cast<string>(m["manager_user_id"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("position") != m.end() && !m["position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["position"]));
    }
    if (m.find("position_level") != m.end() && !m["position_level"].empty()) {
      positionLevel = make_shared<string>(boost::any_cast<string>(m["position_level"]));
    }
    if (m.find("real_name_en") != m.end() && !m["real_name_en"].empty()) {
      realNameEn = make_shared<string>(boost::any_cast<string>(m["real_name_en"]));
    }
    if (m.find("third_depart_id_list") != m.end() && !m["third_depart_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["third_depart_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["third_depart_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      thirdDepartIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~SyncSingleUserRequest() = default;
};
class SyncSingleUserShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> jobNo{};
  shared_ptr<long> leaveStatus{};
  shared_ptr<string> managerUserId{};
  shared_ptr<string> phone{};
  shared_ptr<string> position{};
  shared_ptr<string> positionLevel{};
  shared_ptr<string> realNameEn{};
  shared_ptr<string> thirdDepartIdListShrink{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  SyncSingleUserShrinkRequest() {}

  explicit SyncSingleUserShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (jobNo) {
      res["job_no"] = boost::any(*jobNo);
    }
    if (leaveStatus) {
      res["leave_status"] = boost::any(*leaveStatus);
    }
    if (managerUserId) {
      res["manager_user_id"] = boost::any(*managerUserId);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (position) {
      res["position"] = boost::any(*position);
    }
    if (positionLevel) {
      res["position_level"] = boost::any(*positionLevel);
    }
    if (realNameEn) {
      res["real_name_en"] = boost::any(*realNameEn);
    }
    if (thirdDepartIdListShrink) {
      res["third_depart_id_list"] = boost::any(*thirdDepartIdListShrink);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("job_no") != m.end() && !m["job_no"].empty()) {
      jobNo = make_shared<string>(boost::any_cast<string>(m["job_no"]));
    }
    if (m.find("leave_status") != m.end() && !m["leave_status"].empty()) {
      leaveStatus = make_shared<long>(boost::any_cast<long>(m["leave_status"]));
    }
    if (m.find("manager_user_id") != m.end() && !m["manager_user_id"].empty()) {
      managerUserId = make_shared<string>(boost::any_cast<string>(m["manager_user_id"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("position") != m.end() && !m["position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["position"]));
    }
    if (m.find("position_level") != m.end() && !m["position_level"].empty()) {
      positionLevel = make_shared<string>(boost::any_cast<string>(m["position_level"]));
    }
    if (m.find("real_name_en") != m.end() && !m["real_name_en"].empty()) {
      realNameEn = make_shared<string>(boost::any_cast<string>(m["real_name_en"]));
    }
    if (m.find("third_depart_id_list") != m.end() && !m["third_depart_id_list"].empty()) {
      thirdDepartIdListShrink = make_shared<string>(boost::any_cast<string>(m["third_depart_id_list"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~SyncSingleUserShrinkRequest() = default;
};
class SyncSingleUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  SyncSingleUserResponseBody() {}

  explicit SyncSingleUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = boost::any(*module);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["module"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~SyncSingleUserResponseBody() = default;
};
class SyncSingleUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncSingleUserResponseBody> body{};

  SyncSingleUserResponse() {}

  explicit SyncSingleUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncSingleUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncSingleUserResponseBody>(model1);
      }
    }
  }


  virtual ~SyncSingleUserResponse() = default;
};
class TrainBillSettlementQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  TrainBillSettlementQueryHeaders() {}

  explicit TrainBillSettlementQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~TrainBillSettlementQueryHeaders() = default;
};
class TrainBillSettlementQueryRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> periodEnd{};
  shared_ptr<string> periodStart{};

  TrainBillSettlementQueryRequest() {}

  explicit TrainBillSettlementQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["page_no"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (periodEnd) {
      res["period_end"] = boost::any(*periodEnd);
    }
    if (periodStart) {
      res["period_start"] = boost::any(*periodStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page_no") != m.end() && !m["page_no"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["page_no"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("period_end") != m.end() && !m["period_end"].empty()) {
      periodEnd = make_shared<string>(boost::any_cast<string>(m["period_end"]));
    }
    if (m.find("period_start") != m.end() && !m["period_start"].empty()) {
      periodStart = make_shared<string>(boost::any_cast<string>(m["period_start"]));
    }
  }


  virtual ~TrainBillSettlementQueryRequest() = default;
};
class TrainBillSettlementQueryResponseBodyModuleDataList : public Darabonba::Model {
public:
  shared_ptr<string> alipayTradeNo{};
  shared_ptr<string> applyId{};
  shared_ptr<string> arrDate{};
  shared_ptr<string> arrStation{};
  shared_ptr<string> arrTime{};
  shared_ptr<string> billRecordTime{};
  shared_ptr<string> bookTime{};
  shared_ptr<string> bookerId{};
  shared_ptr<string> bookerJobNo{};
  shared_ptr<string> bookerName{};
  shared_ptr<string> capitalDirection{};
  shared_ptr<string> cascadeDepartment{};
  shared_ptr<double> changeFee{};
  shared_ptr<string> costCenter{};
  shared_ptr<string> costCenterNumber{};
  shared_ptr<double> coupon{};
  shared_ptr<string> department{};
  shared_ptr<string> departmentId{};
  shared_ptr<string> deptDate{};
  shared_ptr<string> deptStation{};
  shared_ptr<string> deptTime{};
  shared_ptr<string> feeType{};
  shared_ptr<string> index{};
  shared_ptr<string> invoiceTitle{};
  shared_ptr<string> orderId{};
  shared_ptr<double> orderPrice{};
  shared_ptr<string> overApplyId{};
  shared_ptr<long> primaryId{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectName{};
  shared_ptr<double> refundFee{};
  shared_ptr<string> remark{};
  shared_ptr<string> runTime{};
  shared_ptr<string> seatNo{};
  shared_ptr<string> seatType{};
  shared_ptr<double> serviceFee{};
  shared_ptr<double> settlementFee{};
  shared_ptr<double> settlementGrantFee{};
  shared_ptr<string> settlementTime{};
  shared_ptr<string> settlementType{};
  shared_ptr<long> status{};
  shared_ptr<string> ticketNo{};
  shared_ptr<double> ticketPrice{};
  shared_ptr<string> trainNo{};
  shared_ptr<string> trainType{};
  shared_ptr<string> travelerId{};
  shared_ptr<string> travelerJobNo{};
  shared_ptr<string> travelerName{};
  shared_ptr<long> voucherType{};

  TrainBillSettlementQueryResponseBodyModuleDataList() {}

  explicit TrainBillSettlementQueryResponseBodyModuleDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alipayTradeNo) {
      res["alipay_trade_no"] = boost::any(*alipayTradeNo);
    }
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (arrDate) {
      res["arr_date"] = boost::any(*arrDate);
    }
    if (arrStation) {
      res["arr_station"] = boost::any(*arrStation);
    }
    if (arrTime) {
      res["arr_time"] = boost::any(*arrTime);
    }
    if (billRecordTime) {
      res["bill_record_time"] = boost::any(*billRecordTime);
    }
    if (bookTime) {
      res["book_time"] = boost::any(*bookTime);
    }
    if (bookerId) {
      res["booker_id"] = boost::any(*bookerId);
    }
    if (bookerJobNo) {
      res["booker_job_no"] = boost::any(*bookerJobNo);
    }
    if (bookerName) {
      res["booker_name"] = boost::any(*bookerName);
    }
    if (capitalDirection) {
      res["capital_direction"] = boost::any(*capitalDirection);
    }
    if (cascadeDepartment) {
      res["cascade_department"] = boost::any(*cascadeDepartment);
    }
    if (changeFee) {
      res["change_fee"] = boost::any(*changeFee);
    }
    if (costCenter) {
      res["cost_center"] = boost::any(*costCenter);
    }
    if (costCenterNumber) {
      res["cost_center_number"] = boost::any(*costCenterNumber);
    }
    if (coupon) {
      res["coupon"] = boost::any(*coupon);
    }
    if (department) {
      res["department"] = boost::any(*department);
    }
    if (departmentId) {
      res["department_id"] = boost::any(*departmentId);
    }
    if (deptDate) {
      res["dept_date"] = boost::any(*deptDate);
    }
    if (deptStation) {
      res["dept_station"] = boost::any(*deptStation);
    }
    if (deptTime) {
      res["dept_time"] = boost::any(*deptTime);
    }
    if (feeType) {
      res["fee_type"] = boost::any(*feeType);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (invoiceTitle) {
      res["invoice_title"] = boost::any(*invoiceTitle);
    }
    if (orderId) {
      res["order_id"] = boost::any(*orderId);
    }
    if (orderPrice) {
      res["order_price"] = boost::any(*orderPrice);
    }
    if (overApplyId) {
      res["over_apply_id"] = boost::any(*overApplyId);
    }
    if (primaryId) {
      res["primary_id"] = boost::any(*primaryId);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectName) {
      res["project_name"] = boost::any(*projectName);
    }
    if (refundFee) {
      res["refund_fee"] = boost::any(*refundFee);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (runTime) {
      res["run_time"] = boost::any(*runTime);
    }
    if (seatNo) {
      res["seat_no"] = boost::any(*seatNo);
    }
    if (seatType) {
      res["seat_type"] = boost::any(*seatType);
    }
    if (serviceFee) {
      res["service_fee"] = boost::any(*serviceFee);
    }
    if (settlementFee) {
      res["settlement_fee"] = boost::any(*settlementFee);
    }
    if (settlementGrantFee) {
      res["settlement_grant_fee"] = boost::any(*settlementGrantFee);
    }
    if (settlementTime) {
      res["settlement_time"] = boost::any(*settlementTime);
    }
    if (settlementType) {
      res["settlement_type"] = boost::any(*settlementType);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (ticketNo) {
      res["ticket_no"] = boost::any(*ticketNo);
    }
    if (ticketPrice) {
      res["ticket_price"] = boost::any(*ticketPrice);
    }
    if (trainNo) {
      res["train_no"] = boost::any(*trainNo);
    }
    if (trainType) {
      res["train_type"] = boost::any(*trainType);
    }
    if (travelerId) {
      res["traveler_id"] = boost::any(*travelerId);
    }
    if (travelerJobNo) {
      res["traveler_job_no"] = boost::any(*travelerJobNo);
    }
    if (travelerName) {
      res["traveler_name"] = boost::any(*travelerName);
    }
    if (voucherType) {
      res["voucher_type"] = boost::any(*voucherType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alipay_trade_no") != m.end() && !m["alipay_trade_no"].empty()) {
      alipayTradeNo = make_shared<string>(boost::any_cast<string>(m["alipay_trade_no"]));
    }
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["apply_id"]));
    }
    if (m.find("arr_date") != m.end() && !m["arr_date"].empty()) {
      arrDate = make_shared<string>(boost::any_cast<string>(m["arr_date"]));
    }
    if (m.find("arr_station") != m.end() && !m["arr_station"].empty()) {
      arrStation = make_shared<string>(boost::any_cast<string>(m["arr_station"]));
    }
    if (m.find("arr_time") != m.end() && !m["arr_time"].empty()) {
      arrTime = make_shared<string>(boost::any_cast<string>(m["arr_time"]));
    }
    if (m.find("bill_record_time") != m.end() && !m["bill_record_time"].empty()) {
      billRecordTime = make_shared<string>(boost::any_cast<string>(m["bill_record_time"]));
    }
    if (m.find("book_time") != m.end() && !m["book_time"].empty()) {
      bookTime = make_shared<string>(boost::any_cast<string>(m["book_time"]));
    }
    if (m.find("booker_id") != m.end() && !m["booker_id"].empty()) {
      bookerId = make_shared<string>(boost::any_cast<string>(m["booker_id"]));
    }
    if (m.find("booker_job_no") != m.end() && !m["booker_job_no"].empty()) {
      bookerJobNo = make_shared<string>(boost::any_cast<string>(m["booker_job_no"]));
    }
    if (m.find("booker_name") != m.end() && !m["booker_name"].empty()) {
      bookerName = make_shared<string>(boost::any_cast<string>(m["booker_name"]));
    }
    if (m.find("capital_direction") != m.end() && !m["capital_direction"].empty()) {
      capitalDirection = make_shared<string>(boost::any_cast<string>(m["capital_direction"]));
    }
    if (m.find("cascade_department") != m.end() && !m["cascade_department"].empty()) {
      cascadeDepartment = make_shared<string>(boost::any_cast<string>(m["cascade_department"]));
    }
    if (m.find("change_fee") != m.end() && !m["change_fee"].empty()) {
      changeFee = make_shared<double>(boost::any_cast<double>(m["change_fee"]));
    }
    if (m.find("cost_center") != m.end() && !m["cost_center"].empty()) {
      costCenter = make_shared<string>(boost::any_cast<string>(m["cost_center"]));
    }
    if (m.find("cost_center_number") != m.end() && !m["cost_center_number"].empty()) {
      costCenterNumber = make_shared<string>(boost::any_cast<string>(m["cost_center_number"]));
    }
    if (m.find("coupon") != m.end() && !m["coupon"].empty()) {
      coupon = make_shared<double>(boost::any_cast<double>(m["coupon"]));
    }
    if (m.find("department") != m.end() && !m["department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["department"]));
    }
    if (m.find("department_id") != m.end() && !m["department_id"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["department_id"]));
    }
    if (m.find("dept_date") != m.end() && !m["dept_date"].empty()) {
      deptDate = make_shared<string>(boost::any_cast<string>(m["dept_date"]));
    }
    if (m.find("dept_station") != m.end() && !m["dept_station"].empty()) {
      deptStation = make_shared<string>(boost::any_cast<string>(m["dept_station"]));
    }
    if (m.find("dept_time") != m.end() && !m["dept_time"].empty()) {
      deptTime = make_shared<string>(boost::any_cast<string>(m["dept_time"]));
    }
    if (m.find("fee_type") != m.end() && !m["fee_type"].empty()) {
      feeType = make_shared<string>(boost::any_cast<string>(m["fee_type"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["index"]));
    }
    if (m.find("invoice_title") != m.end() && !m["invoice_title"].empty()) {
      invoiceTitle = make_shared<string>(boost::any_cast<string>(m["invoice_title"]));
    }
    if (m.find("order_id") != m.end() && !m["order_id"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["order_id"]));
    }
    if (m.find("order_price") != m.end() && !m["order_price"].empty()) {
      orderPrice = make_shared<double>(boost::any_cast<double>(m["order_price"]));
    }
    if (m.find("over_apply_id") != m.end() && !m["over_apply_id"].empty()) {
      overApplyId = make_shared<string>(boost::any_cast<string>(m["over_apply_id"]));
    }
    if (m.find("primary_id") != m.end() && !m["primary_id"].empty()) {
      primaryId = make_shared<long>(boost::any_cast<long>(m["primary_id"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_name") != m.end() && !m["project_name"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["project_name"]));
    }
    if (m.find("refund_fee") != m.end() && !m["refund_fee"].empty()) {
      refundFee = make_shared<double>(boost::any_cast<double>(m["refund_fee"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("run_time") != m.end() && !m["run_time"].empty()) {
      runTime = make_shared<string>(boost::any_cast<string>(m["run_time"]));
    }
    if (m.find("seat_no") != m.end() && !m["seat_no"].empty()) {
      seatNo = make_shared<string>(boost::any_cast<string>(m["seat_no"]));
    }
    if (m.find("seat_type") != m.end() && !m["seat_type"].empty()) {
      seatType = make_shared<string>(boost::any_cast<string>(m["seat_type"]));
    }
    if (m.find("service_fee") != m.end() && !m["service_fee"].empty()) {
      serviceFee = make_shared<double>(boost::any_cast<double>(m["service_fee"]));
    }
    if (m.find("settlement_fee") != m.end() && !m["settlement_fee"].empty()) {
      settlementFee = make_shared<double>(boost::any_cast<double>(m["settlement_fee"]));
    }
    if (m.find("settlement_grant_fee") != m.end() && !m["settlement_grant_fee"].empty()) {
      settlementGrantFee = make_shared<double>(boost::any_cast<double>(m["settlement_grant_fee"]));
    }
    if (m.find("settlement_time") != m.end() && !m["settlement_time"].empty()) {
      settlementTime = make_shared<string>(boost::any_cast<string>(m["settlement_time"]));
    }
    if (m.find("settlement_type") != m.end() && !m["settlement_type"].empty()) {
      settlementType = make_shared<string>(boost::any_cast<string>(m["settlement_type"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("ticket_no") != m.end() && !m["ticket_no"].empty()) {
      ticketNo = make_shared<string>(boost::any_cast<string>(m["ticket_no"]));
    }
    if (m.find("ticket_price") != m.end() && !m["ticket_price"].empty()) {
      ticketPrice = make_shared<double>(boost::any_cast<double>(m["ticket_price"]));
    }
    if (m.find("train_no") != m.end() && !m["train_no"].empty()) {
      trainNo = make_shared<string>(boost::any_cast<string>(m["train_no"]));
    }
    if (m.find("train_type") != m.end() && !m["train_type"].empty()) {
      trainType = make_shared<string>(boost::any_cast<string>(m["train_type"]));
    }
    if (m.find("traveler_id") != m.end() && !m["traveler_id"].empty()) {
      travelerId = make_shared<string>(boost::any_cast<string>(m["traveler_id"]));
    }
    if (m.find("traveler_job_no") != m.end() && !m["traveler_job_no"].empty()) {
      travelerJobNo = make_shared<string>(boost::any_cast<string>(m["traveler_job_no"]));
    }
    if (m.find("traveler_name") != m.end() && !m["traveler_name"].empty()) {
      travelerName = make_shared<string>(boost::any_cast<string>(m["traveler_name"]));
    }
    if (m.find("voucher_type") != m.end() && !m["voucher_type"].empty()) {
      voucherType = make_shared<long>(boost::any_cast<long>(m["voucher_type"]));
    }
  }


  virtual ~TrainBillSettlementQueryResponseBodyModuleDataList() = default;
};
class TrainBillSettlementQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> category{};
  shared_ptr<string> corpId{};
  shared_ptr<vector<TrainBillSettlementQueryResponseBodyModuleDataList>> dataList{};
  shared_ptr<string> periodEnd{};
  shared_ptr<string> periodStart{};
  shared_ptr<long> totalNum{};

  TrainBillSettlementQueryResponseBodyModule() {}

  explicit TrainBillSettlementQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data_list"] = boost::any(temp1);
    }
    if (periodEnd) {
      res["period_end"] = boost::any(*periodEnd);
    }
    if (periodStart) {
      res["period_start"] = boost::any(*periodStart);
    }
    if (totalNum) {
      res["total_num"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<long>(boost::any_cast<long>(m["category"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("data_list") != m.end() && !m["data_list"].empty()) {
      if (typeid(vector<boost::any>) == m["data_list"].type()) {
        vector<TrainBillSettlementQueryResponseBodyModuleDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TrainBillSettlementQueryResponseBodyModuleDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<TrainBillSettlementQueryResponseBodyModuleDataList>>(expect1);
      }
    }
    if (m.find("period_end") != m.end() && !m["period_end"].empty()) {
      periodEnd = make_shared<string>(boost::any_cast<string>(m["period_end"]));
    }
    if (m.find("period_start") != m.end() && !m["period_start"].empty()) {
      periodStart = make_shared<string>(boost::any_cast<string>(m["period_start"]));
    }
    if (m.find("total_num") != m.end() && !m["total_num"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["total_num"]));
    }
  }


  virtual ~TrainBillSettlementQueryResponseBodyModule() = default;
};
class TrainBillSettlementQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<TrainBillSettlementQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  TrainBillSettlementQueryResponseBody() {}

  explicit TrainBillSettlementQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        TrainBillSettlementQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<TrainBillSettlementQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~TrainBillSettlementQueryResponseBody() = default;
};
class TrainBillSettlementQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TrainBillSettlementQueryResponseBody> body{};

  TrainBillSettlementQueryResponse() {}

  explicit TrainBillSettlementQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TrainBillSettlementQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TrainBillSettlementQueryResponseBody>(model1);
      }
    }
  }


  virtual ~TrainBillSettlementQueryResponse() = default;
};
class TrainExceedApplyQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  TrainExceedApplyQueryHeaders() {}

  explicit TrainExceedApplyQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~TrainExceedApplyQueryHeaders() = default;
};
class TrainExceedApplyQueryRequest : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};

  TrainExceedApplyQueryRequest() {}

  explicit TrainExceedApplyQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
  }


  virtual ~TrainExceedApplyQueryRequest() = default;
};
class TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO : public Darabonba::Model {
public:
  shared_ptr<string> arrCity{};
  shared_ptr<string> arrCityName{};
  shared_ptr<string> arrStation{};
  shared_ptr<string> arrTime{};
  shared_ptr<string> depCity{};
  shared_ptr<string> depCityName{};
  shared_ptr<string> depStation{};
  shared_ptr<string> depTime{};
  shared_ptr<long> price{};
  shared_ptr<string> seatName{};
  shared_ptr<string> trainNo{};
  shared_ptr<string> trainTypeDesc{};
  shared_ptr<long> type{};

  TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO() {}

  explicit TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrCity) {
      res["arr_city"] = boost::any(*arrCity);
    }
    if (arrCityName) {
      res["arr_city_name"] = boost::any(*arrCityName);
    }
    if (arrStation) {
      res["arr_station"] = boost::any(*arrStation);
    }
    if (arrTime) {
      res["arr_time"] = boost::any(*arrTime);
    }
    if (depCity) {
      res["dep_city"] = boost::any(*depCity);
    }
    if (depCityName) {
      res["dep_city_name"] = boost::any(*depCityName);
    }
    if (depStation) {
      res["dep_station"] = boost::any(*depStation);
    }
    if (depTime) {
      res["dep_time"] = boost::any(*depTime);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    if (seatName) {
      res["seat_name"] = boost::any(*seatName);
    }
    if (trainNo) {
      res["train_no"] = boost::any(*trainNo);
    }
    if (trainTypeDesc) {
      res["train_type_desc"] = boost::any(*trainTypeDesc);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_city") != m.end() && !m["arr_city"].empty()) {
      arrCity = make_shared<string>(boost::any_cast<string>(m["arr_city"]));
    }
    if (m.find("arr_city_name") != m.end() && !m["arr_city_name"].empty()) {
      arrCityName = make_shared<string>(boost::any_cast<string>(m["arr_city_name"]));
    }
    if (m.find("arr_station") != m.end() && !m["arr_station"].empty()) {
      arrStation = make_shared<string>(boost::any_cast<string>(m["arr_station"]));
    }
    if (m.find("arr_time") != m.end() && !m["arr_time"].empty()) {
      arrTime = make_shared<string>(boost::any_cast<string>(m["arr_time"]));
    }
    if (m.find("dep_city") != m.end() && !m["dep_city"].empty()) {
      depCity = make_shared<string>(boost::any_cast<string>(m["dep_city"]));
    }
    if (m.find("dep_city_name") != m.end() && !m["dep_city_name"].empty()) {
      depCityName = make_shared<string>(boost::any_cast<string>(m["dep_city_name"]));
    }
    if (m.find("dep_station") != m.end() && !m["dep_station"].empty()) {
      depStation = make_shared<string>(boost::any_cast<string>(m["dep_station"]));
    }
    if (m.find("dep_time") != m.end() && !m["dep_time"].empty()) {
      depTime = make_shared<string>(boost::any_cast<string>(m["dep_time"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["price"]));
    }
    if (m.find("seat_name") != m.end() && !m["seat_name"].empty()) {
      seatName = make_shared<string>(boost::any_cast<string>(m["seat_name"]));
    }
    if (m.find("train_no") != m.end() && !m["train_no"].empty()) {
      trainNo = make_shared<string>(boost::any_cast<string>(m["train_no"]));
    }
    if (m.find("train_type_desc") != m.end() && !m["train_type_desc"].empty()) {
      trainTypeDesc = make_shared<string>(boost::any_cast<string>(m["train_type_desc"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO() = default;
};
class TrainExceedApplyQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};
  shared_ptr<TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO> applyIntentionInfoDO{};
  shared_ptr<string> btripCause{};
  shared_ptr<string> corpId{};
  shared_ptr<string> exceedReason{};
  shared_ptr<long> exceedType{};
  shared_ptr<string> originStandard{};
  shared_ptr<long> status{};
  shared_ptr<string> submitTime{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartCorpId{};
  shared_ptr<string> userId{};

  TrainExceedApplyQueryResponseBodyModule() {}

  explicit TrainExceedApplyQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (applyIntentionInfoDO) {
      res["apply_intention_info_d_o"] = applyIntentionInfoDO ? boost::any(applyIntentionInfoDO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (btripCause) {
      res["btrip_cause"] = boost::any(*btripCause);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (exceedReason) {
      res["exceed_reason"] = boost::any(*exceedReason);
    }
    if (exceedType) {
      res["exceed_type"] = boost::any(*exceedType);
    }
    if (originStandard) {
      res["origin_standard"] = boost::any(*originStandard);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (submitTime) {
      res["submit_time"] = boost::any(*submitTime);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartCorpId) {
      res["thirdpart_corp_id"] = boost::any(*thirdpartCorpId);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("apply_intention_info_d_o") != m.end() && !m["apply_intention_info_d_o"].empty()) {
      if (typeid(map<string, boost::any>) == m["apply_intention_info_d_o"].type()) {
        TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["apply_intention_info_d_o"]));
        applyIntentionInfoDO = make_shared<TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO>(model1);
      }
    }
    if (m.find("btrip_cause") != m.end() && !m["btrip_cause"].empty()) {
      btripCause = make_shared<string>(boost::any_cast<string>(m["btrip_cause"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("exceed_reason") != m.end() && !m["exceed_reason"].empty()) {
      exceedReason = make_shared<string>(boost::any_cast<string>(m["exceed_reason"]));
    }
    if (m.find("exceed_type") != m.end() && !m["exceed_type"].empty()) {
      exceedType = make_shared<long>(boost::any_cast<long>(m["exceed_type"]));
    }
    if (m.find("origin_standard") != m.end() && !m["origin_standard"].empty()) {
      originStandard = make_shared<string>(boost::any_cast<string>(m["origin_standard"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("submit_time") != m.end() && !m["submit_time"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["submit_time"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_corp_id") != m.end() && !m["thirdpart_corp_id"].empty()) {
      thirdpartCorpId = make_shared<string>(boost::any_cast<string>(m["thirdpart_corp_id"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~TrainExceedApplyQueryResponseBodyModule() = default;
};
class TrainExceedApplyQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<TrainExceedApplyQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  TrainExceedApplyQueryResponseBody() {}

  explicit TrainExceedApplyQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        TrainExceedApplyQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<TrainExceedApplyQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~TrainExceedApplyQueryResponseBody() = default;
};
class TrainExceedApplyQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TrainExceedApplyQueryResponseBody> body{};

  TrainExceedApplyQueryResponse() {}

  explicit TrainExceedApplyQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TrainExceedApplyQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TrainExceedApplyQueryResponseBody>(model1);
      }
    }
  }


  virtual ~TrainExceedApplyQueryResponse() = default;
};
class TrainOrderListQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  TrainOrderListQueryHeaders() {}

  explicit TrainOrderListQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~TrainOrderListQueryHeaders() = default;
};
class TrainOrderListQueryRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allApply{};
  shared_ptr<long> applyId{};
  shared_ptr<string> departId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> updateEndTime{};
  shared_ptr<string> updateStartTime{};
  shared_ptr<string> userId{};

  TrainOrderListQueryRequest() {}

  explicit TrainOrderListQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allApply) {
      res["all_apply"] = boost::any(*allApply);
    }
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (endTime) {
      res["end_time"] = boost::any(*endTime);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["start_time"] = boost::any(*startTime);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (updateEndTime) {
      res["update_end_time"] = boost::any(*updateEndTime);
    }
    if (updateStartTime) {
      res["update_start_time"] = boost::any(*updateStartTime);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("all_apply") != m.end() && !m["all_apply"].empty()) {
      allApply = make_shared<bool>(boost::any_cast<bool>(m["all_apply"]));
    }
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("end_time") != m.end() && !m["end_time"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["end_time"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("start_time") != m.end() && !m["start_time"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["start_time"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("update_end_time") != m.end() && !m["update_end_time"].empty()) {
      updateEndTime = make_shared<string>(boost::any_cast<string>(m["update_end_time"]));
    }
    if (m.find("update_start_time") != m.end() && !m["update_start_time"].empty()) {
      updateStartTime = make_shared<string>(boost::any_cast<string>(m["update_start_time"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~TrainOrderListQueryRequest() = default;
};
class TrainOrderListQueryResponseBodyModuleCostCenter : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> number{};

  TrainOrderListQueryResponseBodyModuleCostCenter() {}

  explicit TrainOrderListQueryResponseBodyModuleCostCenter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (number) {
      res["number"] = boost::any(*number);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["number"]));
    }
  }


  virtual ~TrainOrderListQueryResponseBodyModuleCostCenter() = default;
};
class TrainOrderListQueryResponseBodyModuleInvoice : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> title{};

  TrainOrderListQueryResponseBodyModuleInvoice() {}

  explicit TrainOrderListQueryResponseBodyModuleInvoice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~TrainOrderListQueryResponseBodyModuleInvoice() = default;
};
class TrainOrderListQueryResponseBodyModulePriceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> categoryCode{};
  shared_ptr<long> categoryType{};
  shared_ptr<string> endCity{};
  shared_ptr<string> endTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> originalTrainNo{};
  shared_ptr<string> passengerName{};
  shared_ptr<long> payType{};
  shared_ptr<double> price{};
  shared_ptr<string> seatType{};
  shared_ptr<string> startCity{};
  shared_ptr<string> startTime{};
  shared_ptr<string> tradeId{};
  shared_ptr<string> trainNo{};
  shared_ptr<long> type{};

  TrainOrderListQueryResponseBodyModulePriceInfoList() {}

  explicit TrainOrderListQueryResponseBodyModulePriceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryCode) {
      res["category_code"] = boost::any(*categoryCode);
    }
    if (categoryType) {
      res["category_type"] = boost::any(*categoryType);
    }
    if (endCity) {
      res["end_city"] = boost::any(*endCity);
    }
    if (endTime) {
      res["end_time"] = boost::any(*endTime);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (originalTrainNo) {
      res["original_train_no"] = boost::any(*originalTrainNo);
    }
    if (passengerName) {
      res["passenger_name"] = boost::any(*passengerName);
    }
    if (payType) {
      res["pay_type"] = boost::any(*payType);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    if (seatType) {
      res["seat_type"] = boost::any(*seatType);
    }
    if (startCity) {
      res["start_city"] = boost::any(*startCity);
    }
    if (startTime) {
      res["start_time"] = boost::any(*startTime);
    }
    if (tradeId) {
      res["trade_id"] = boost::any(*tradeId);
    }
    if (trainNo) {
      res["train_no"] = boost::any(*trainNo);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category_code") != m.end() && !m["category_code"].empty()) {
      categoryCode = make_shared<long>(boost::any_cast<long>(m["category_code"]));
    }
    if (m.find("category_type") != m.end() && !m["category_type"].empty()) {
      categoryType = make_shared<long>(boost::any_cast<long>(m["category_type"]));
    }
    if (m.find("end_city") != m.end() && !m["end_city"].empty()) {
      endCity = make_shared<string>(boost::any_cast<string>(m["end_city"]));
    }
    if (m.find("end_time") != m.end() && !m["end_time"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["end_time"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("original_train_no") != m.end() && !m["original_train_no"].empty()) {
      originalTrainNo = make_shared<string>(boost::any_cast<string>(m["original_train_no"]));
    }
    if (m.find("passenger_name") != m.end() && !m["passenger_name"].empty()) {
      passengerName = make_shared<string>(boost::any_cast<string>(m["passenger_name"]));
    }
    if (m.find("pay_type") != m.end() && !m["pay_type"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["pay_type"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["price"]));
    }
    if (m.find("seat_type") != m.end() && !m["seat_type"].empty()) {
      seatType = make_shared<string>(boost::any_cast<string>(m["seat_type"]));
    }
    if (m.find("start_city") != m.end() && !m["start_city"].empty()) {
      startCity = make_shared<string>(boost::any_cast<string>(m["start_city"]));
    }
    if (m.find("start_time") != m.end() && !m["start_time"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["start_time"]));
    }
    if (m.find("trade_id") != m.end() && !m["trade_id"].empty()) {
      tradeId = make_shared<string>(boost::any_cast<string>(m["trade_id"]));
    }
    if (m.find("train_no") != m.end() && !m["train_no"].empty()) {
      trainNo = make_shared<string>(boost::any_cast<string>(m["train_no"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~TrainOrderListQueryResponseBodyModulePriceInfoList() = default;
};
class TrainOrderListQueryResponseBodyModuleUserAffiliateList : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  TrainOrderListQueryResponseBodyModuleUserAffiliateList() {}

  explicit TrainOrderListQueryResponseBodyModuleUserAffiliateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~TrainOrderListQueryResponseBodyModuleUserAffiliateList() = default;
};
class TrainOrderListQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> applyId{};
  shared_ptr<string> arrCity{};
  shared_ptr<string> arrStation{};
  shared_ptr<string> arrTime{};
  shared_ptr<string> btripTitle{};
  shared_ptr<string> contactName{};
  shared_ptr<string> corpId{};
  shared_ptr<string> corpName{};
  shared_ptr<TrainOrderListQueryResponseBodyModuleCostCenter> costCenter{};
  shared_ptr<string> depCity{};
  shared_ptr<string> depStation{};
  shared_ptr<string> depTime{};
  shared_ptr<string> departId{};
  shared_ptr<string> departName{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<TrainOrderListQueryResponseBodyModuleInvoice> invoice{};
  shared_ptr<vector<TrainOrderListQueryResponseBodyModulePriceInfoList>> priceInfoList{};
  shared_ptr<string> projectCode{};
  shared_ptr<long> projectId{};
  shared_ptr<string> projectTitle{};
  shared_ptr<string> riderName{};
  shared_ptr<string> runTime{};
  shared_ptr<string> seatType{};
  shared_ptr<long> status{};
  shared_ptr<string> thirdPartProjectId{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartItineraryId{};
  shared_ptr<long> ticketCount{};
  shared_ptr<string> ticketNo12306{};
  shared_ptr<string> trainNumber{};
  shared_ptr<string> trainType{};
  shared_ptr<vector<TrainOrderListQueryResponseBodyModuleUserAffiliateList>> userAffiliateList{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  TrainOrderListQueryResponseBodyModule() {}

  explicit TrainOrderListQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (arrCity) {
      res["arr_city"] = boost::any(*arrCity);
    }
    if (arrStation) {
      res["arr_station"] = boost::any(*arrStation);
    }
    if (arrTime) {
      res["arr_time"] = boost::any(*arrTime);
    }
    if (btripTitle) {
      res["btrip_title"] = boost::any(*btripTitle);
    }
    if (contactName) {
      res["contact_name"] = boost::any(*contactName);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (corpName) {
      res["corp_name"] = boost::any(*corpName);
    }
    if (costCenter) {
      res["cost_center"] = costCenter ? boost::any(costCenter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (depCity) {
      res["dep_city"] = boost::any(*depCity);
    }
    if (depStation) {
      res["dep_station"] = boost::any(*depStation);
    }
    if (depTime) {
      res["dep_time"] = boost::any(*depTime);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (departName) {
      res["depart_name"] = boost::any(*departName);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmt_modified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (invoice) {
      res["invoice"] = invoice ? boost::any(invoice->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (priceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*priceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["price_info_list"] = boost::any(temp1);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectId) {
      res["project_id"] = boost::any(*projectId);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (riderName) {
      res["rider_name"] = boost::any(*riderName);
    }
    if (runTime) {
      res["run_time"] = boost::any(*runTime);
    }
    if (seatType) {
      res["seat_type"] = boost::any(*seatType);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (thirdPartProjectId) {
      res["third_part_project_id"] = boost::any(*thirdPartProjectId);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartItineraryId) {
      res["thirdpart_itinerary_id"] = boost::any(*thirdpartItineraryId);
    }
    if (ticketCount) {
      res["ticket_count"] = boost::any(*ticketCount);
    }
    if (ticketNo12306) {
      res["ticket_no12306"] = boost::any(*ticketNo12306);
    }
    if (trainNumber) {
      res["train_number"] = boost::any(*trainNumber);
    }
    if (trainType) {
      res["train_type"] = boost::any(*trainType);
    }
    if (userAffiliateList) {
      vector<boost::any> temp1;
      for(auto item1:*userAffiliateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["user_affiliate_list"] = boost::any(temp1);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<long>(boost::any_cast<long>(m["apply_id"]));
    }
    if (m.find("arr_city") != m.end() && !m["arr_city"].empty()) {
      arrCity = make_shared<string>(boost::any_cast<string>(m["arr_city"]));
    }
    if (m.find("arr_station") != m.end() && !m["arr_station"].empty()) {
      arrStation = make_shared<string>(boost::any_cast<string>(m["arr_station"]));
    }
    if (m.find("arr_time") != m.end() && !m["arr_time"].empty()) {
      arrTime = make_shared<string>(boost::any_cast<string>(m["arr_time"]));
    }
    if (m.find("btrip_title") != m.end() && !m["btrip_title"].empty()) {
      btripTitle = make_shared<string>(boost::any_cast<string>(m["btrip_title"]));
    }
    if (m.find("contact_name") != m.end() && !m["contact_name"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["contact_name"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("corp_name") != m.end() && !m["corp_name"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["corp_name"]));
    }
    if (m.find("cost_center") != m.end() && !m["cost_center"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost_center"].type()) {
        TrainOrderListQueryResponseBodyModuleCostCenter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost_center"]));
        costCenter = make_shared<TrainOrderListQueryResponseBodyModuleCostCenter>(model1);
      }
    }
    if (m.find("dep_city") != m.end() && !m["dep_city"].empty()) {
      depCity = make_shared<string>(boost::any_cast<string>(m["dep_city"]));
    }
    if (m.find("dep_station") != m.end() && !m["dep_station"].empty()) {
      depStation = make_shared<string>(boost::any_cast<string>(m["dep_station"]));
    }
    if (m.find("dep_time") != m.end() && !m["dep_time"].empty()) {
      depTime = make_shared<string>(boost::any_cast<string>(m["dep_time"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("depart_name") != m.end() && !m["depart_name"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["depart_name"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("gmt_modified") != m.end() && !m["gmt_modified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmt_modified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("invoice") != m.end() && !m["invoice"].empty()) {
      if (typeid(map<string, boost::any>) == m["invoice"].type()) {
        TrainOrderListQueryResponseBodyModuleInvoice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["invoice"]));
        invoice = make_shared<TrainOrderListQueryResponseBodyModuleInvoice>(model1);
      }
    }
    if (m.find("price_info_list") != m.end() && !m["price_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["price_info_list"].type()) {
        vector<TrainOrderListQueryResponseBodyModulePriceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["price_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TrainOrderListQueryResponseBodyModulePriceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        priceInfoList = make_shared<vector<TrainOrderListQueryResponseBodyModulePriceInfoList>>(expect1);
      }
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_id") != m.end() && !m["project_id"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["project_id"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("rider_name") != m.end() && !m["rider_name"].empty()) {
      riderName = make_shared<string>(boost::any_cast<string>(m["rider_name"]));
    }
    if (m.find("run_time") != m.end() && !m["run_time"].empty()) {
      runTime = make_shared<string>(boost::any_cast<string>(m["run_time"]));
    }
    if (m.find("seat_type") != m.end() && !m["seat_type"].empty()) {
      seatType = make_shared<string>(boost::any_cast<string>(m["seat_type"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("third_part_project_id") != m.end() && !m["third_part_project_id"].empty()) {
      thirdPartProjectId = make_shared<string>(boost::any_cast<string>(m["third_part_project_id"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_itinerary_id") != m.end() && !m["thirdpart_itinerary_id"].empty()) {
      thirdpartItineraryId = make_shared<string>(boost::any_cast<string>(m["thirdpart_itinerary_id"]));
    }
    if (m.find("ticket_count") != m.end() && !m["ticket_count"].empty()) {
      ticketCount = make_shared<long>(boost::any_cast<long>(m["ticket_count"]));
    }
    if (m.find("ticket_no12306") != m.end() && !m["ticket_no12306"].empty()) {
      ticketNo12306 = make_shared<string>(boost::any_cast<string>(m["ticket_no12306"]));
    }
    if (m.find("train_number") != m.end() && !m["train_number"].empty()) {
      trainNumber = make_shared<string>(boost::any_cast<string>(m["train_number"]));
    }
    if (m.find("train_type") != m.end() && !m["train_type"].empty()) {
      trainType = make_shared<string>(boost::any_cast<string>(m["train_type"]));
    }
    if (m.find("user_affiliate_list") != m.end() && !m["user_affiliate_list"].empty()) {
      if (typeid(vector<boost::any>) == m["user_affiliate_list"].type()) {
        vector<TrainOrderListQueryResponseBodyModuleUserAffiliateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["user_affiliate_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TrainOrderListQueryResponseBodyModuleUserAffiliateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userAffiliateList = make_shared<vector<TrainOrderListQueryResponseBodyModuleUserAffiliateList>>(expect1);
      }
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
  }


  virtual ~TrainOrderListQueryResponseBodyModule() = default;
};
class TrainOrderListQueryResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNumber{};

  TrainOrderListQueryResponseBodyPageInfo() {}

  explicit TrainOrderListQueryResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (totalNumber) {
      res["total_number"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("total_number") != m.end() && !m["total_number"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["total_number"]));
    }
  }


  virtual ~TrainOrderListQueryResponseBodyPageInfo() = default;
};
class TrainOrderListQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<TrainOrderListQueryResponseBodyModule>> module{};
  shared_ptr<TrainOrderListQueryResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  TrainOrderListQueryResponseBody() {}

  explicit TrainOrderListQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      vector<boost::any> temp1;
      for(auto item1:*module){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["module"] = boost::any(temp1);
    }
    if (pageInfo) {
      res["page_info"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(vector<boost::any>) == m["module"].type()) {
        vector<TrainOrderListQueryResponseBodyModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["module"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TrainOrderListQueryResponseBodyModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        module = make_shared<vector<TrainOrderListQueryResponseBodyModule>>(expect1);
      }
    }
    if (m.find("page_info") != m.end() && !m["page_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["page_info"].type()) {
        TrainOrderListQueryResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["page_info"]));
        pageInfo = make_shared<TrainOrderListQueryResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~TrainOrderListQueryResponseBody() = default;
};
class TrainOrderListQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TrainOrderListQueryResponseBody> body{};

  TrainOrderListQueryResponse() {}

  explicit TrainOrderListQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TrainOrderListQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TrainOrderListQueryResponseBody>(model1);
      }
    }
  }


  virtual ~TrainOrderListQueryResponse() = default;
};
class TrainOrderQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  TrainOrderQueryHeaders() {}

  explicit TrainOrderQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~TrainOrderQueryHeaders() = default;
};
class TrainOrderQueryRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> userId{};

  TrainOrderQueryRequest() {}

  explicit TrainOrderQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["order_id"] = boost::any(*orderId);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_id") != m.end() && !m["order_id"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["order_id"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~TrainOrderQueryRequest() = default;
};
class TrainOrderQueryResponseBodyModuleChangeTicketInfoList : public Darabonba::Model {
public:
  shared_ptr<string> changeCoachNo{};
  shared_ptr<double> changeGapFee{};
  shared_ptr<double> changeHandlingFee{};
  shared_ptr<string> changeSeatNo{};
  shared_ptr<string> changeSeatTypeName{};
  shared_ptr<double> changeServiceFee{};
  shared_ptr<string> changeTrainNo{};
  shared_ptr<string> changeTrainTypeName{};
  shared_ptr<string> checkInTime{};
  shared_ptr<string> checkOutTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> fromStationName{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModify{};
  shared_ptr<string> originTicketNo{};
  shared_ptr<string> outTicketStatus{};
  shared_ptr<string> startTime{};
  shared_ptr<string> ticketNo{};
  shared_ptr<string> toStationName{};

  TrainOrderQueryResponseBodyModuleChangeTicketInfoList() {}

  explicit TrainOrderQueryResponseBodyModuleChangeTicketInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeCoachNo) {
      res["change_coach_no"] = boost::any(*changeCoachNo);
    }
    if (changeGapFee) {
      res["change_gap_fee"] = boost::any(*changeGapFee);
    }
    if (changeHandlingFee) {
      res["change_handling_fee"] = boost::any(*changeHandlingFee);
    }
    if (changeSeatNo) {
      res["change_seat_no"] = boost::any(*changeSeatNo);
    }
    if (changeSeatTypeName) {
      res["change_seat_type_name"] = boost::any(*changeSeatTypeName);
    }
    if (changeServiceFee) {
      res["change_service_fee"] = boost::any(*changeServiceFee);
    }
    if (changeTrainNo) {
      res["change_train_no"] = boost::any(*changeTrainNo);
    }
    if (changeTrainTypeName) {
      res["change_train_type_name"] = boost::any(*changeTrainTypeName);
    }
    if (checkInTime) {
      res["check_in_time"] = boost::any(*checkInTime);
    }
    if (checkOutTime) {
      res["check_out_time"] = boost::any(*checkOutTime);
    }
    if (endTime) {
      res["end_time"] = boost::any(*endTime);
    }
    if (fromStationName) {
      res["from_station_name"] = boost::any(*fromStationName);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModify) {
      res["gmt_modify"] = boost::any(*gmtModify);
    }
    if (originTicketNo) {
      res["origin_ticket_no"] = boost::any(*originTicketNo);
    }
    if (outTicketStatus) {
      res["out_ticket_status"] = boost::any(*outTicketStatus);
    }
    if (startTime) {
      res["start_time"] = boost::any(*startTime);
    }
    if (ticketNo) {
      res["ticket_no"] = boost::any(*ticketNo);
    }
    if (toStationName) {
      res["to_station_name"] = boost::any(*toStationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_coach_no") != m.end() && !m["change_coach_no"].empty()) {
      changeCoachNo = make_shared<string>(boost::any_cast<string>(m["change_coach_no"]));
    }
    if (m.find("change_gap_fee") != m.end() && !m["change_gap_fee"].empty()) {
      changeGapFee = make_shared<double>(boost::any_cast<double>(m["change_gap_fee"]));
    }
    if (m.find("change_handling_fee") != m.end() && !m["change_handling_fee"].empty()) {
      changeHandlingFee = make_shared<double>(boost::any_cast<double>(m["change_handling_fee"]));
    }
    if (m.find("change_seat_no") != m.end() && !m["change_seat_no"].empty()) {
      changeSeatNo = make_shared<string>(boost::any_cast<string>(m["change_seat_no"]));
    }
    if (m.find("change_seat_type_name") != m.end() && !m["change_seat_type_name"].empty()) {
      changeSeatTypeName = make_shared<string>(boost::any_cast<string>(m["change_seat_type_name"]));
    }
    if (m.find("change_service_fee") != m.end() && !m["change_service_fee"].empty()) {
      changeServiceFee = make_shared<double>(boost::any_cast<double>(m["change_service_fee"]));
    }
    if (m.find("change_train_no") != m.end() && !m["change_train_no"].empty()) {
      changeTrainNo = make_shared<string>(boost::any_cast<string>(m["change_train_no"]));
    }
    if (m.find("change_train_type_name") != m.end() && !m["change_train_type_name"].empty()) {
      changeTrainTypeName = make_shared<string>(boost::any_cast<string>(m["change_train_type_name"]));
    }
    if (m.find("check_in_time") != m.end() && !m["check_in_time"].empty()) {
      checkInTime = make_shared<string>(boost::any_cast<string>(m["check_in_time"]));
    }
    if (m.find("check_out_time") != m.end() && !m["check_out_time"].empty()) {
      checkOutTime = make_shared<string>(boost::any_cast<string>(m["check_out_time"]));
    }
    if (m.find("end_time") != m.end() && !m["end_time"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["end_time"]));
    }
    if (m.find("from_station_name") != m.end() && !m["from_station_name"].empty()) {
      fromStationName = make_shared<string>(boost::any_cast<string>(m["from_station_name"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("gmt_modify") != m.end() && !m["gmt_modify"].empty()) {
      gmtModify = make_shared<string>(boost::any_cast<string>(m["gmt_modify"]));
    }
    if (m.find("origin_ticket_no") != m.end() && !m["origin_ticket_no"].empty()) {
      originTicketNo = make_shared<string>(boost::any_cast<string>(m["origin_ticket_no"]));
    }
    if (m.find("out_ticket_status") != m.end() && !m["out_ticket_status"].empty()) {
      outTicketStatus = make_shared<string>(boost::any_cast<string>(m["out_ticket_status"]));
    }
    if (m.find("start_time") != m.end() && !m["start_time"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["start_time"]));
    }
    if (m.find("ticket_no") != m.end() && !m["ticket_no"].empty()) {
      ticketNo = make_shared<string>(boost::any_cast<string>(m["ticket_no"]));
    }
    if (m.find("to_station_name") != m.end() && !m["to_station_name"].empty()) {
      toStationName = make_shared<string>(boost::any_cast<string>(m["to_station_name"]));
    }
  }


  virtual ~TrainOrderQueryResponseBodyModuleChangeTicketInfoList() = default;
};
class TrainOrderQueryResponseBodyModuleInvoiceInfo : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> title{};

  TrainOrderQueryResponseBodyModuleInvoiceInfo() {}

  explicit TrainOrderQueryResponseBodyModuleInvoiceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~TrainOrderQueryResponseBodyModuleInvoiceInfo() = default;
};
class TrainOrderQueryResponseBodyModuleOrderBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<string> btripTitle{};
  shared_ptr<string> contactName{};
  shared_ptr<string> corpId{};
  shared_ptr<string> corpName{};
  shared_ptr<string> departId{};
  shared_ptr<string> departName{};
  shared_ptr<string> exceedApplyId{};
  shared_ptr<string> exceedThirdPartApplyId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModify{};
  shared_ptr<string> itineraryId{};
  shared_ptr<long> orderId{};
  shared_ptr<long> orderStatus{};
  shared_ptr<string> thirdpartApplyId{};
  shared_ptr<string> thirdpartCorpId{};
  shared_ptr<string> thirdpartItineraryId{};
  shared_ptr<long> tripType{};
  shared_ptr<string> userId{};

  TrainOrderQueryResponseBodyModuleOrderBaseInfo() {}

  explicit TrainOrderQueryResponseBodyModuleOrderBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["apply_id"] = boost::any(*applyId);
    }
    if (btripTitle) {
      res["btrip_title"] = boost::any(*btripTitle);
    }
    if (contactName) {
      res["contact_name"] = boost::any(*contactName);
    }
    if (corpId) {
      res["corp_id"] = boost::any(*corpId);
    }
    if (corpName) {
      res["corp_name"] = boost::any(*corpName);
    }
    if (departId) {
      res["depart_id"] = boost::any(*departId);
    }
    if (departName) {
      res["depart_name"] = boost::any(*departName);
    }
    if (exceedApplyId) {
      res["exceed_apply_id"] = boost::any(*exceedApplyId);
    }
    if (exceedThirdPartApplyId) {
      res["exceed_third_part_apply_id"] = boost::any(*exceedThirdPartApplyId);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModify) {
      res["gmt_modify"] = boost::any(*gmtModify);
    }
    if (itineraryId) {
      res["itinerary_id"] = boost::any(*itineraryId);
    }
    if (orderId) {
      res["order_id"] = boost::any(*orderId);
    }
    if (orderStatus) {
      res["order_status"] = boost::any(*orderStatus);
    }
    if (thirdpartApplyId) {
      res["thirdpart_apply_id"] = boost::any(*thirdpartApplyId);
    }
    if (thirdpartCorpId) {
      res["thirdpart_corp_id"] = boost::any(*thirdpartCorpId);
    }
    if (thirdpartItineraryId) {
      res["thirdpart_itinerary_id"] = boost::any(*thirdpartItineraryId);
    }
    if (tripType) {
      res["trip_type"] = boost::any(*tripType);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apply_id") != m.end() && !m["apply_id"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["apply_id"]));
    }
    if (m.find("btrip_title") != m.end() && !m["btrip_title"].empty()) {
      btripTitle = make_shared<string>(boost::any_cast<string>(m["btrip_title"]));
    }
    if (m.find("contact_name") != m.end() && !m["contact_name"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["contact_name"]));
    }
    if (m.find("corp_id") != m.end() && !m["corp_id"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corp_id"]));
    }
    if (m.find("corp_name") != m.end() && !m["corp_name"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["corp_name"]));
    }
    if (m.find("depart_id") != m.end() && !m["depart_id"].empty()) {
      departId = make_shared<string>(boost::any_cast<string>(m["depart_id"]));
    }
    if (m.find("depart_name") != m.end() && !m["depart_name"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["depart_name"]));
    }
    if (m.find("exceed_apply_id") != m.end() && !m["exceed_apply_id"].empty()) {
      exceedApplyId = make_shared<string>(boost::any_cast<string>(m["exceed_apply_id"]));
    }
    if (m.find("exceed_third_part_apply_id") != m.end() && !m["exceed_third_part_apply_id"].empty()) {
      exceedThirdPartApplyId = make_shared<string>(boost::any_cast<string>(m["exceed_third_part_apply_id"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("gmt_modify") != m.end() && !m["gmt_modify"].empty()) {
      gmtModify = make_shared<string>(boost::any_cast<string>(m["gmt_modify"]));
    }
    if (m.find("itinerary_id") != m.end() && !m["itinerary_id"].empty()) {
      itineraryId = make_shared<string>(boost::any_cast<string>(m["itinerary_id"]));
    }
    if (m.find("order_id") != m.end() && !m["order_id"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["order_id"]));
    }
    if (m.find("order_status") != m.end() && !m["order_status"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["order_status"]));
    }
    if (m.find("thirdpart_apply_id") != m.end() && !m["thirdpart_apply_id"].empty()) {
      thirdpartApplyId = make_shared<string>(boost::any_cast<string>(m["thirdpart_apply_id"]));
    }
    if (m.find("thirdpart_corp_id") != m.end() && !m["thirdpart_corp_id"].empty()) {
      thirdpartCorpId = make_shared<string>(boost::any_cast<string>(m["thirdpart_corp_id"]));
    }
    if (m.find("thirdpart_itinerary_id") != m.end() && !m["thirdpart_itinerary_id"].empty()) {
      thirdpartItineraryId = make_shared<string>(boost::any_cast<string>(m["thirdpart_itinerary_id"]));
    }
    if (m.find("trip_type") != m.end() && !m["trip_type"].empty()) {
      tripType = make_shared<long>(boost::any_cast<long>(m["trip_type"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~TrainOrderQueryResponseBodyModuleOrderBaseInfo() = default;
};
class TrainOrderQueryResponseBodyModulePassengerInfoList : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<string> costCenterName{};
  shared_ptr<string> costCenterNumber{};
  shared_ptr<string> projectCode{};
  shared_ptr<long> projectId{};
  shared_ptr<string> projectTitle{};
  shared_ptr<string> thirdpartProjectId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<long> userType{};

  TrainOrderQueryResponseBodyModulePassengerInfoList() {}

  explicit TrainOrderQueryResponseBodyModulePassengerInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["cost_center_id"] = boost::any(*costCenterId);
    }
    if (costCenterName) {
      res["cost_center_name"] = boost::any(*costCenterName);
    }
    if (costCenterNumber) {
      res["cost_center_number"] = boost::any(*costCenterNumber);
    }
    if (projectCode) {
      res["project_code"] = boost::any(*projectCode);
    }
    if (projectId) {
      res["project_id"] = boost::any(*projectId);
    }
    if (projectTitle) {
      res["project_title"] = boost::any(*projectTitle);
    }
    if (thirdpartProjectId) {
      res["thirdpart_project_id"] = boost::any(*thirdpartProjectId);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    if (userName) {
      res["user_name"] = boost::any(*userName);
    }
    if (userType) {
      res["user_type"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost_center_id") != m.end() && !m["cost_center_id"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["cost_center_id"]));
    }
    if (m.find("cost_center_name") != m.end() && !m["cost_center_name"].empty()) {
      costCenterName = make_shared<string>(boost::any_cast<string>(m["cost_center_name"]));
    }
    if (m.find("cost_center_number") != m.end() && !m["cost_center_number"].empty()) {
      costCenterNumber = make_shared<string>(boost::any_cast<string>(m["cost_center_number"]));
    }
    if (m.find("project_code") != m.end() && !m["project_code"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["project_code"]));
    }
    if (m.find("project_id") != m.end() && !m["project_id"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["project_id"]));
    }
    if (m.find("project_title") != m.end() && !m["project_title"].empty()) {
      projectTitle = make_shared<string>(boost::any_cast<string>(m["project_title"]));
    }
    if (m.find("thirdpart_project_id") != m.end() && !m["thirdpart_project_id"].empty()) {
      thirdpartProjectId = make_shared<string>(boost::any_cast<string>(m["thirdpart_project_id"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
    if (m.find("user_name") != m.end() && !m["user_name"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["user_name"]));
    }
    if (m.find("user_type") != m.end() && !m["user_type"].empty()) {
      userType = make_shared<long>(boost::any_cast<long>(m["user_type"]));
    }
  }


  virtual ~TrainOrderQueryResponseBodyModulePassengerInfoList() = default;
};
class TrainOrderQueryResponseBodyModulePriceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> categoryCode{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> passengerName{};
  shared_ptr<long> payType{};
  shared_ptr<double> price{};
  shared_ptr<string> tradeId{};
  shared_ptr<long> type{};

  TrainOrderQueryResponseBodyModulePriceInfoList() {}

  explicit TrainOrderQueryResponseBodyModulePriceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryCode) {
      res["category_code"] = boost::any(*categoryCode);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (passengerName) {
      res["passenger_name"] = boost::any(*passengerName);
    }
    if (payType) {
      res["pay_type"] = boost::any(*payType);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    if (tradeId) {
      res["trade_id"] = boost::any(*tradeId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category_code") != m.end() && !m["category_code"].empty()) {
      categoryCode = make_shared<long>(boost::any_cast<long>(m["category_code"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("passenger_name") != m.end() && !m["passenger_name"].empty()) {
      passengerName = make_shared<string>(boost::any_cast<string>(m["passenger_name"]));
    }
    if (m.find("pay_type") != m.end() && !m["pay_type"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["pay_type"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["price"]));
    }
    if (m.find("trade_id") != m.end() && !m["trade_id"].empty()) {
      tradeId = make_shared<string>(boost::any_cast<string>(m["trade_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~TrainOrderQueryResponseBodyModulePriceInfoList() = default;
};
class TrainOrderQueryResponseBodyModuleRefundTicketInfoList : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModify{};
  shared_ptr<double> refundFee{};
  shared_ptr<double> refundServiceFee{};
  shared_ptr<string> ticketNo{};

  TrainOrderQueryResponseBodyModuleRefundTicketInfoList() {}

  explicit TrainOrderQueryResponseBodyModuleRefundTicketInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModify) {
      res["gmt_modify"] = boost::any(*gmtModify);
    }
    if (refundFee) {
      res["refund_fee"] = boost::any(*refundFee);
    }
    if (refundServiceFee) {
      res["refund_service_fee"] = boost::any(*refundServiceFee);
    }
    if (ticketNo) {
      res["ticket_no"] = boost::any(*ticketNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("gmt_modify") != m.end() && !m["gmt_modify"].empty()) {
      gmtModify = make_shared<string>(boost::any_cast<string>(m["gmt_modify"]));
    }
    if (m.find("refund_fee") != m.end() && !m["refund_fee"].empty()) {
      refundFee = make_shared<double>(boost::any_cast<double>(m["refund_fee"]));
    }
    if (m.find("refund_service_fee") != m.end() && !m["refund_service_fee"].empty()) {
      refundServiceFee = make_shared<double>(boost::any_cast<double>(m["refund_service_fee"]));
    }
    if (m.find("ticket_no") != m.end() && !m["ticket_no"].empty()) {
      ticketNo = make_shared<string>(boost::any_cast<string>(m["ticket_no"]));
    }
  }


  virtual ~TrainOrderQueryResponseBodyModuleRefundTicketInfoList() = default;
};
class TrainOrderQueryResponseBodyModuleTicketInfoList : public Darabonba::Model {
public:
  shared_ptr<bool> changed{};
  shared_ptr<string> checkInTime{};
  shared_ptr<string> checkOutTime{};
  shared_ptr<string> coachNo{};
  shared_ptr<string> endTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModify{};
  shared_ptr<string> outTicketStatus{};
  shared_ptr<long> payType{};
  shared_ptr<string> seatNo{};
  shared_ptr<string> seatTypeName{};
  shared_ptr<double> serviceFee{};
  shared_ptr<string> startTime{};
  shared_ptr<string> ticketNo{};
  shared_ptr<double> ticketPrice{};
  shared_ptr<long> ticketStatus{};
  shared_ptr<string> trainTypeName{};
  shared_ptr<string> userId{};

  TrainOrderQueryResponseBodyModuleTicketInfoList() {}

  explicit TrainOrderQueryResponseBodyModuleTicketInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changed) {
      res["changed"] = boost::any(*changed);
    }
    if (checkInTime) {
      res["check_in_time"] = boost::any(*checkInTime);
    }
    if (checkOutTime) {
      res["check_out_time"] = boost::any(*checkOutTime);
    }
    if (coachNo) {
      res["coach_no"] = boost::any(*coachNo);
    }
    if (endTime) {
      res["end_time"] = boost::any(*endTime);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModify) {
      res["gmt_modify"] = boost::any(*gmtModify);
    }
    if (outTicketStatus) {
      res["out_ticket_status"] = boost::any(*outTicketStatus);
    }
    if (payType) {
      res["pay_type"] = boost::any(*payType);
    }
    if (seatNo) {
      res["seat_no"] = boost::any(*seatNo);
    }
    if (seatTypeName) {
      res["seat_type_name"] = boost::any(*seatTypeName);
    }
    if (serviceFee) {
      res["service_fee"] = boost::any(*serviceFee);
    }
    if (startTime) {
      res["start_time"] = boost::any(*startTime);
    }
    if (ticketNo) {
      res["ticket_no"] = boost::any(*ticketNo);
    }
    if (ticketPrice) {
      res["ticket_price"] = boost::any(*ticketPrice);
    }
    if (ticketStatus) {
      res["ticket_status"] = boost::any(*ticketStatus);
    }
    if (trainTypeName) {
      res["train_type_name"] = boost::any(*trainTypeName);
    }
    if (userId) {
      res["user_id"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("changed") != m.end() && !m["changed"].empty()) {
      changed = make_shared<bool>(boost::any_cast<bool>(m["changed"]));
    }
    if (m.find("check_in_time") != m.end() && !m["check_in_time"].empty()) {
      checkInTime = make_shared<string>(boost::any_cast<string>(m["check_in_time"]));
    }
    if (m.find("check_out_time") != m.end() && !m["check_out_time"].empty()) {
      checkOutTime = make_shared<string>(boost::any_cast<string>(m["check_out_time"]));
    }
    if (m.find("coach_no") != m.end() && !m["coach_no"].empty()) {
      coachNo = make_shared<string>(boost::any_cast<string>(m["coach_no"]));
    }
    if (m.find("end_time") != m.end() && !m["end_time"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["end_time"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmt_create"]));
    }
    if (m.find("gmt_modify") != m.end() && !m["gmt_modify"].empty()) {
      gmtModify = make_shared<string>(boost::any_cast<string>(m["gmt_modify"]));
    }
    if (m.find("out_ticket_status") != m.end() && !m["out_ticket_status"].empty()) {
      outTicketStatus = make_shared<string>(boost::any_cast<string>(m["out_ticket_status"]));
    }
    if (m.find("pay_type") != m.end() && !m["pay_type"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["pay_type"]));
    }
    if (m.find("seat_no") != m.end() && !m["seat_no"].empty()) {
      seatNo = make_shared<string>(boost::any_cast<string>(m["seat_no"]));
    }
    if (m.find("seat_type_name") != m.end() && !m["seat_type_name"].empty()) {
      seatTypeName = make_shared<string>(boost::any_cast<string>(m["seat_type_name"]));
    }
    if (m.find("service_fee") != m.end() && !m["service_fee"].empty()) {
      serviceFee = make_shared<double>(boost::any_cast<double>(m["service_fee"]));
    }
    if (m.find("start_time") != m.end() && !m["start_time"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["start_time"]));
    }
    if (m.find("ticket_no") != m.end() && !m["ticket_no"].empty()) {
      ticketNo = make_shared<string>(boost::any_cast<string>(m["ticket_no"]));
    }
    if (m.find("ticket_price") != m.end() && !m["ticket_price"].empty()) {
      ticketPrice = make_shared<double>(boost::any_cast<double>(m["ticket_price"]));
    }
    if (m.find("ticket_status") != m.end() && !m["ticket_status"].empty()) {
      ticketStatus = make_shared<long>(boost::any_cast<long>(m["ticket_status"]));
    }
    if (m.find("train_type_name") != m.end() && !m["train_type_name"].empty()) {
      trainTypeName = make_shared<string>(boost::any_cast<string>(m["train_type_name"]));
    }
    if (m.find("user_id") != m.end() && !m["user_id"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["user_id"]));
    }
  }


  virtual ~TrainOrderQueryResponseBodyModuleTicketInfoList() = default;
};
class TrainOrderQueryResponseBodyModuleTrainInfo : public Darabonba::Model {
public:
  shared_ptr<string> arrTime{};
  shared_ptr<string> depTime{};
  shared_ptr<string> fromStationName{};
  shared_ptr<long> runTime{};
  shared_ptr<string> toStationName{};
  shared_ptr<string> trainNo{};

  TrainOrderQueryResponseBodyModuleTrainInfo() {}

  explicit TrainOrderQueryResponseBodyModuleTrainInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrTime) {
      res["arr_time"] = boost::any(*arrTime);
    }
    if (depTime) {
      res["dep_time"] = boost::any(*depTime);
    }
    if (fromStationName) {
      res["from_station_name"] = boost::any(*fromStationName);
    }
    if (runTime) {
      res["run_time"] = boost::any(*runTime);
    }
    if (toStationName) {
      res["to_station_name"] = boost::any(*toStationName);
    }
    if (trainNo) {
      res["train_no"] = boost::any(*trainNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arr_time") != m.end() && !m["arr_time"].empty()) {
      arrTime = make_shared<string>(boost::any_cast<string>(m["arr_time"]));
    }
    if (m.find("dep_time") != m.end() && !m["dep_time"].empty()) {
      depTime = make_shared<string>(boost::any_cast<string>(m["dep_time"]));
    }
    if (m.find("from_station_name") != m.end() && !m["from_station_name"].empty()) {
      fromStationName = make_shared<string>(boost::any_cast<string>(m["from_station_name"]));
    }
    if (m.find("run_time") != m.end() && !m["run_time"].empty()) {
      runTime = make_shared<long>(boost::any_cast<long>(m["run_time"]));
    }
    if (m.find("to_station_name") != m.end() && !m["to_station_name"].empty()) {
      toStationName = make_shared<string>(boost::any_cast<string>(m["to_station_name"]));
    }
    if (m.find("train_no") != m.end() && !m["train_no"].empty()) {
      trainNo = make_shared<string>(boost::any_cast<string>(m["train_no"]));
    }
  }


  virtual ~TrainOrderQueryResponseBodyModuleTrainInfo() = default;
};
class TrainOrderQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<vector<TrainOrderQueryResponseBodyModuleChangeTicketInfoList>> changeTicketInfoList{};
  shared_ptr<TrainOrderQueryResponseBodyModuleInvoiceInfo> invoiceInfo{};
  shared_ptr<TrainOrderQueryResponseBodyModuleOrderBaseInfo> orderBaseInfo{};
  shared_ptr<vector<TrainOrderQueryResponseBodyModulePassengerInfoList>> passengerInfoList{};
  shared_ptr<vector<TrainOrderQueryResponseBodyModulePriceInfoList>> priceInfoList{};
  shared_ptr<vector<TrainOrderQueryResponseBodyModuleRefundTicketInfoList>> refundTicketInfoList{};
  shared_ptr<vector<TrainOrderQueryResponseBodyModuleTicketInfoList>> ticketInfoList{};
  shared_ptr<TrainOrderQueryResponseBodyModuleTrainInfo> trainInfo{};

  TrainOrderQueryResponseBodyModule() {}

  explicit TrainOrderQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeTicketInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*changeTicketInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["change_ticket_info_list"] = boost::any(temp1);
    }
    if (invoiceInfo) {
      res["invoice_info"] = invoiceInfo ? boost::any(invoiceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderBaseInfo) {
      res["order_base_info"] = orderBaseInfo ? boost::any(orderBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (passengerInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*passengerInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["passenger_info_list"] = boost::any(temp1);
    }
    if (priceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*priceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["price_info_list"] = boost::any(temp1);
    }
    if (refundTicketInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*refundTicketInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["refund_ticket_info_list"] = boost::any(temp1);
    }
    if (ticketInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*ticketInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ticket_info_list"] = boost::any(temp1);
    }
    if (trainInfo) {
      res["train_info"] = trainInfo ? boost::any(trainInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_ticket_info_list") != m.end() && !m["change_ticket_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["change_ticket_info_list"].type()) {
        vector<TrainOrderQueryResponseBodyModuleChangeTicketInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["change_ticket_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TrainOrderQueryResponseBodyModuleChangeTicketInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeTicketInfoList = make_shared<vector<TrainOrderQueryResponseBodyModuleChangeTicketInfoList>>(expect1);
      }
    }
    if (m.find("invoice_info") != m.end() && !m["invoice_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["invoice_info"].type()) {
        TrainOrderQueryResponseBodyModuleInvoiceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["invoice_info"]));
        invoiceInfo = make_shared<TrainOrderQueryResponseBodyModuleInvoiceInfo>(model1);
      }
    }
    if (m.find("order_base_info") != m.end() && !m["order_base_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["order_base_info"].type()) {
        TrainOrderQueryResponseBodyModuleOrderBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["order_base_info"]));
        orderBaseInfo = make_shared<TrainOrderQueryResponseBodyModuleOrderBaseInfo>(model1);
      }
    }
    if (m.find("passenger_info_list") != m.end() && !m["passenger_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["passenger_info_list"].type()) {
        vector<TrainOrderQueryResponseBodyModulePassengerInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["passenger_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TrainOrderQueryResponseBodyModulePassengerInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        passengerInfoList = make_shared<vector<TrainOrderQueryResponseBodyModulePassengerInfoList>>(expect1);
      }
    }
    if (m.find("price_info_list") != m.end() && !m["price_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["price_info_list"].type()) {
        vector<TrainOrderQueryResponseBodyModulePriceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["price_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TrainOrderQueryResponseBodyModulePriceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        priceInfoList = make_shared<vector<TrainOrderQueryResponseBodyModulePriceInfoList>>(expect1);
      }
    }
    if (m.find("refund_ticket_info_list") != m.end() && !m["refund_ticket_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["refund_ticket_info_list"].type()) {
        vector<TrainOrderQueryResponseBodyModuleRefundTicketInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["refund_ticket_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TrainOrderQueryResponseBodyModuleRefundTicketInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refundTicketInfoList = make_shared<vector<TrainOrderQueryResponseBodyModuleRefundTicketInfoList>>(expect1);
      }
    }
    if (m.find("ticket_info_list") != m.end() && !m["ticket_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["ticket_info_list"].type()) {
        vector<TrainOrderQueryResponseBodyModuleTicketInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ticket_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TrainOrderQueryResponseBodyModuleTicketInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ticketInfoList = make_shared<vector<TrainOrderQueryResponseBodyModuleTicketInfoList>>(expect1);
      }
    }
    if (m.find("train_info") != m.end() && !m["train_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["train_info"].type()) {
        TrainOrderQueryResponseBodyModuleTrainInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["train_info"]));
        trainInfo = make_shared<TrainOrderQueryResponseBodyModuleTrainInfo>(model1);
      }
    }
  }


  virtual ~TrainOrderQueryResponseBodyModule() = default;
};
class TrainOrderQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<TrainOrderQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  TrainOrderQueryResponseBody() {}

  explicit TrainOrderQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        TrainOrderQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<TrainOrderQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~TrainOrderQueryResponseBody() = default;
};
class TrainOrderQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TrainOrderQueryResponseBody> body{};

  TrainOrderQueryResponse() {}

  explicit TrainOrderQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TrainOrderQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TrainOrderQueryResponseBody>(model1);
      }
    }
  }


  virtual ~TrainOrderQueryResponse() = default;
};
class TrainStationSearchHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  TrainStationSearchHeaders() {}

  explicit TrainStationSearchHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~TrainStationSearchHeaders() = default;
};
class TrainStationSearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};

  TrainStationSearchRequest() {}

  explicit TrainStationSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
  }


  virtual ~TrainStationSearchRequest() = default;
};
class TrainStationSearchResponseBodyModuleCities : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  TrainStationSearchResponseBodyModuleCities() {}

  explicit TrainStationSearchResponseBodyModuleCities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~TrainStationSearchResponseBodyModuleCities() = default;
};
class TrainStationSearchResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<vector<TrainStationSearchResponseBodyModuleCities>> cities{};

  TrainStationSearchResponseBodyModule() {}

  explicit TrainStationSearchResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cities) {
      vector<boost::any> temp1;
      for(auto item1:*cities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["cities"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cities") != m.end() && !m["cities"].empty()) {
      if (typeid(vector<boost::any>) == m["cities"].type()) {
        vector<TrainStationSearchResponseBodyModuleCities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["cities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TrainStationSearchResponseBodyModuleCities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cities = make_shared<vector<TrainStationSearchResponseBodyModuleCities>>(expect1);
      }
    }
  }


  virtual ~TrainStationSearchResponseBodyModule() = default;
};
class TrainStationSearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<TrainStationSearchResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  TrainStationSearchResponseBody() {}

  explicit TrainStationSearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        TrainStationSearchResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<TrainStationSearchResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~TrainStationSearchResponseBody() = default;
};
class TrainStationSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TrainStationSearchResponseBody> body{};

  TrainStationSearchResponse() {}

  explicit TrainStationSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TrainStationSearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TrainStationSearchResponseBody>(model1);
      }
    }
  }


  virtual ~TrainStationSearchResponse() = default;
};
class UserQueryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsBtripSoCorpToken{};

  UserQueryHeaders() {}

  explicit UserQueryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsBtripSoCorpToken) {
      res["x-acs-btrip-so-corp-token"] = boost::any(*xAcsBtripSoCorpToken);
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
    if (m.find("x-acs-btrip-so-corp-token") != m.end() && !m["x-acs-btrip-so-corp-token"].empty()) {
      xAcsBtripSoCorpToken = make_shared<string>(boost::any_cast<string>(m["x-acs-btrip-so-corp-token"]));
    }
  }


  virtual ~UserQueryHeaders() = default;
};
class UserQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> modifiedTimeGreaterOrEqualThan{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pageToken{};
  shared_ptr<string> thirdPartJobNo{};

  UserQueryRequest() {}

  explicit UserQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modifiedTimeGreaterOrEqualThan) {
      res["modified_time_greater_or_equal_than"] = boost::any(*modifiedTimeGreaterOrEqualThan);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (pageToken) {
      res["page_token"] = boost::any(*pageToken);
    }
    if (thirdPartJobNo) {
      res["third_part_job_no"] = boost::any(*thirdPartJobNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("modified_time_greater_or_equal_than") != m.end() && !m["modified_time_greater_or_equal_than"].empty()) {
      modifiedTimeGreaterOrEqualThan = make_shared<string>(boost::any_cast<string>(m["modified_time_greater_or_equal_than"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("page_token") != m.end() && !m["page_token"].empty()) {
      pageToken = make_shared<string>(boost::any_cast<string>(m["page_token"]));
    }
    if (m.find("third_part_job_no") != m.end() && !m["third_part_job_no"].empty()) {
      thirdPartJobNo = make_shared<string>(boost::any_cast<string>(m["third_part_job_no"]));
    }
  }


  virtual ~UserQueryRequest() = default;
};
class UserQueryResponseBodyModuleItems : public Darabonba::Model {
public:
  shared_ptr<string> employeeNick{};
  shared_ptr<long> leaveStatus{};
  shared_ptr<string> thirdPartEmployeeId{};
  shared_ptr<string> thirdPartJobNo{};

  UserQueryResponseBodyModuleItems() {}

  explicit UserQueryResponseBodyModuleItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (employeeNick) {
      res["employee_nick"] = boost::any(*employeeNick);
    }
    if (leaveStatus) {
      res["leave_status"] = boost::any(*leaveStatus);
    }
    if (thirdPartEmployeeId) {
      res["third_part_employee_id"] = boost::any(*thirdPartEmployeeId);
    }
    if (thirdPartJobNo) {
      res["third_part_job_no"] = boost::any(*thirdPartJobNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("employee_nick") != m.end() && !m["employee_nick"].empty()) {
      employeeNick = make_shared<string>(boost::any_cast<string>(m["employee_nick"]));
    }
    if (m.find("leave_status") != m.end() && !m["leave_status"].empty()) {
      leaveStatus = make_shared<long>(boost::any_cast<long>(m["leave_status"]));
    }
    if (m.find("third_part_employee_id") != m.end() && !m["third_part_employee_id"].empty()) {
      thirdPartEmployeeId = make_shared<string>(boost::any_cast<string>(m["third_part_employee_id"]));
    }
    if (m.find("third_part_job_no") != m.end() && !m["third_part_job_no"].empty()) {
      thirdPartJobNo = make_shared<string>(boost::any_cast<string>(m["third_part_job_no"]));
    }
  }


  virtual ~UserQueryResponseBodyModuleItems() = default;
};
class UserQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<bool> hasMore{};
  shared_ptr<vector<UserQueryResponseBodyModuleItems>> items{};
  shared_ptr<string> pageToken{};
  shared_ptr<long> total{};

  UserQueryResponseBodyModule() {}

  explicit UserQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasMore) {
      res["has_more"] = boost::any(*hasMore);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageToken) {
      res["page_token"] = boost::any(*pageToken);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("has_more") != m.end() && !m["has_more"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["has_more"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<UserQueryResponseBodyModuleItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UserQueryResponseBodyModuleItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<UserQueryResponseBodyModuleItems>>(expect1);
      }
    }
    if (m.find("page_token") != m.end() && !m["page_token"].empty()) {
      pageToken = make_shared<string>(boost::any_cast<string>(m["page_token"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~UserQueryResponseBodyModule() = default;
};
class UserQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<UserQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  UserQueryResponseBody() {}

  explicit UserQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        UserQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<UserQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~UserQueryResponseBody() = default;
};
class UserQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UserQueryResponseBody> body{};

  UserQueryResponse() {}

  explicit UserQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UserQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UserQueryResponseBody>(model1);
      }
    }
  }


  virtual ~UserQueryResponse() = default;
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
  AccessTokenResponse accessTokenWithOptions(shared_ptr<AccessTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AccessTokenResponse accessToken(shared_ptr<AccessTokenRequest> request);
  AddressGetResponse addressGetWithOptions(shared_ptr<AddressGetRequest> request, shared_ptr<AddressGetHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddressGetResponse addressGet(shared_ptr<AddressGetRequest> request);
  AirportSearchResponse airportSearchWithOptions(shared_ptr<AirportSearchRequest> request, shared_ptr<AirportSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AirportSearchResponse airportSearch(shared_ptr<AirportSearchRequest> request);
  AllBaseCityInfoQueryResponse allBaseCityInfoQueryWithOptions(shared_ptr<AllBaseCityInfoQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllBaseCityInfoQueryResponse allBaseCityInfoQuery();
  ApplyAddResponse applyAddWithOptions(shared_ptr<ApplyAddRequest> tmpReq, shared_ptr<ApplyAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyAddResponse applyAdd(shared_ptr<ApplyAddRequest> request);
  ApplyApproveResponse applyApproveWithOptions(shared_ptr<ApplyApproveRequest> request, shared_ptr<ApplyApproveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyApproveResponse applyApprove(shared_ptr<ApplyApproveRequest> request);
  ApplyListQueryResponse applyListQueryWithOptions(shared_ptr<ApplyListQueryRequest> request, shared_ptr<ApplyListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyListQueryResponse applyListQuery(shared_ptr<ApplyListQueryRequest> request);
  ApplyModifyResponse applyModifyWithOptions(shared_ptr<ApplyModifyRequest> tmpReq, shared_ptr<ApplyModifyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyModifyResponse applyModify(shared_ptr<ApplyModifyRequest> request);
  ApplyQueryResponse applyQueryWithOptions(shared_ptr<ApplyQueryRequest> request, shared_ptr<ApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyQueryResponse applyQuery(shared_ptr<ApplyQueryRequest> request);
  CarApplyAddResponse carApplyAddWithOptions(shared_ptr<CarApplyAddRequest> request, shared_ptr<CarApplyAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CarApplyAddResponse carApplyAdd(shared_ptr<CarApplyAddRequest> request);
  CarApplyModifyResponse carApplyModifyWithOptions(shared_ptr<CarApplyModifyRequest> request, shared_ptr<CarApplyModifyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CarApplyModifyResponse carApplyModify(shared_ptr<CarApplyModifyRequest> request);
  CarApplyQueryResponse carApplyQueryWithOptions(shared_ptr<CarApplyQueryRequest> request, shared_ptr<CarApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CarApplyQueryResponse carApplyQuery(shared_ptr<CarApplyQueryRequest> request);
  CarBillSettlementQueryResponse carBillSettlementQueryWithOptions(shared_ptr<CarBillSettlementQueryRequest> request, shared_ptr<CarBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CarBillSettlementQueryResponse carBillSettlementQuery(shared_ptr<CarBillSettlementQueryRequest> request);
  CarOrderListQueryResponse carOrderListQueryWithOptions(shared_ptr<CarOrderListQueryRequest> request, shared_ptr<CarOrderListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CarOrderListQueryResponse carOrderListQuery(shared_ptr<CarOrderListQueryRequest> request);
  CarOrderQueryResponse carOrderQueryWithOptions(shared_ptr<CarOrderQueryRequest> request, shared_ptr<CarOrderQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CarOrderQueryResponse carOrderQuery(shared_ptr<CarOrderQueryRequest> request);
  CitySearchResponse citySearchWithOptions(shared_ptr<CitySearchRequest> request, shared_ptr<CitySearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CitySearchResponse citySearch(shared_ptr<CitySearchRequest> request);
  CommonApplyQueryResponse commonApplyQueryWithOptions(shared_ptr<CommonApplyQueryRequest> request, shared_ptr<CommonApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CommonApplyQueryResponse commonApplyQuery(shared_ptr<CommonApplyQueryRequest> request);
  CommonApplySyncResponse commonApplySyncWithOptions(shared_ptr<CommonApplySyncRequest> request, shared_ptr<CommonApplySyncHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CommonApplySyncResponse commonApplySync(shared_ptr<CommonApplySyncRequest> request);
  CorpTokenResponse corpTokenWithOptions(shared_ptr<CorpTokenRequest> request, shared_ptr<CorpTokenHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CorpTokenResponse corpToken(shared_ptr<CorpTokenRequest> request);
  CostCenterDeleteResponse costCenterDeleteWithOptions(shared_ptr<CostCenterDeleteRequest> request, shared_ptr<CostCenterDeleteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CostCenterDeleteResponse costCenterDelete(shared_ptr<CostCenterDeleteRequest> request);
  CostCenterModifyResponse costCenterModifyWithOptions(shared_ptr<CostCenterModifyRequest> request, shared_ptr<CostCenterModifyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CostCenterModifyResponse costCenterModify(shared_ptr<CostCenterModifyRequest> request);
  CostCenterQueryResponse costCenterQueryWithOptions(shared_ptr<CostCenterQueryRequest> request, shared_ptr<CostCenterQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CostCenterQueryResponse costCenterQuery(shared_ptr<CostCenterQueryRequest> request);
  CostCenterSaveResponse costCenterSaveWithOptions(shared_ptr<CostCenterSaveRequest> request, shared_ptr<CostCenterSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CostCenterSaveResponse costCenterSave(shared_ptr<CostCenterSaveRequest> request);
  DepartmentSaveResponse departmentSaveWithOptions(shared_ptr<DepartmentSaveRequest> tmpReq, shared_ptr<DepartmentSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DepartmentSaveResponse departmentSave(shared_ptr<DepartmentSaveRequest> request);
  EntityAddResponse entityAddWithOptions(shared_ptr<EntityAddRequest> tmpReq, shared_ptr<EntityAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EntityAddResponse entityAdd(shared_ptr<EntityAddRequest> request);
  EntityDeleteResponse entityDeleteWithOptions(shared_ptr<EntityDeleteRequest> tmpReq, shared_ptr<EntityDeleteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EntityDeleteResponse entityDelete(shared_ptr<EntityDeleteRequest> request);
  EntitySetResponse entitySetWithOptions(shared_ptr<EntitySetRequest> tmpReq, shared_ptr<EntitySetHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EntitySetResponse entitySet(shared_ptr<EntitySetRequest> request);
  EstimatedPriceQueryResponse estimatedPriceQueryWithOptions(shared_ptr<EstimatedPriceQueryRequest> request, shared_ptr<EstimatedPriceQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EstimatedPriceQueryResponse estimatedPriceQuery(shared_ptr<EstimatedPriceQueryRequest> request);
  ExceedApplySyncResponse exceedApplySyncWithOptions(shared_ptr<ExceedApplySyncRequest> request, shared_ptr<ExceedApplySyncHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExceedApplySyncResponse exceedApplySync(shared_ptr<ExceedApplySyncRequest> request);
  FlightBillSettlementQueryResponse flightBillSettlementQueryWithOptions(shared_ptr<FlightBillSettlementQueryRequest> request, shared_ptr<FlightBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FlightBillSettlementQueryResponse flightBillSettlementQuery(shared_ptr<FlightBillSettlementQueryRequest> request);
  FlightExceedApplyQueryResponse flightExceedApplyQueryWithOptions(shared_ptr<FlightExceedApplyQueryRequest> request, shared_ptr<FlightExceedApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FlightExceedApplyQueryResponse flightExceedApplyQuery(shared_ptr<FlightExceedApplyQueryRequest> request);
  FlightOrderListQueryResponse flightOrderListQueryWithOptions(shared_ptr<FlightOrderListQueryRequest> request, shared_ptr<FlightOrderListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FlightOrderListQueryResponse flightOrderListQuery(shared_ptr<FlightOrderListQueryRequest> request);
  FlightOrderQueryResponse flightOrderQueryWithOptions(shared_ptr<FlightOrderQueryRequest> request, shared_ptr<FlightOrderQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FlightOrderQueryResponse flightOrderQuery(shared_ptr<FlightOrderQueryRequest> request);
  HotelBillSettlementQueryResponse hotelBillSettlementQueryWithOptions(shared_ptr<HotelBillSettlementQueryRequest> request, shared_ptr<HotelBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HotelBillSettlementQueryResponse hotelBillSettlementQuery(shared_ptr<HotelBillSettlementQueryRequest> request);
  HotelExceedApplyQueryResponse hotelExceedApplyQueryWithOptions(shared_ptr<HotelExceedApplyQueryRequest> request, shared_ptr<HotelExceedApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HotelExceedApplyQueryResponse hotelExceedApplyQuery(shared_ptr<HotelExceedApplyQueryRequest> request);
  HotelOrderListQueryResponse hotelOrderListQueryWithOptions(shared_ptr<HotelOrderListQueryRequest> request, shared_ptr<HotelOrderListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HotelOrderListQueryResponse hotelOrderListQuery(shared_ptr<HotelOrderListQueryRequest> request);
  HotelOrderQueryResponse hotelOrderQueryWithOptions(shared_ptr<HotelOrderQueryRequest> request, shared_ptr<HotelOrderQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HotelOrderQueryResponse hotelOrderQuery(shared_ptr<HotelOrderQueryRequest> request);
  IeFlightBillSettlementQueryResponse ieFlightBillSettlementQueryWithOptions(shared_ptr<IeFlightBillSettlementQueryRequest> request, shared_ptr<IeFlightBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IeFlightBillSettlementQueryResponse ieFlightBillSettlementQuery(shared_ptr<IeFlightBillSettlementQueryRequest> request);
  InvoiceAddResponse invoiceAddWithOptions(shared_ptr<InvoiceAddRequest> request, shared_ptr<InvoiceAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvoiceAddResponse invoiceAdd(shared_ptr<InvoiceAddRequest> request);
  InvoiceDeleteResponse invoiceDeleteWithOptions(shared_ptr<InvoiceDeleteRequest> request, shared_ptr<InvoiceDeleteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvoiceDeleteResponse invoiceDelete(shared_ptr<InvoiceDeleteRequest> request);
  InvoiceModifyResponse invoiceModifyWithOptions(shared_ptr<InvoiceModifyRequest> request, shared_ptr<InvoiceModifyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvoiceModifyResponse invoiceModify(shared_ptr<InvoiceModifyRequest> request);
  InvoiceRuleSaveResponse invoiceRuleSaveWithOptions(shared_ptr<InvoiceRuleSaveRequest> tmpReq, shared_ptr<InvoiceRuleSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvoiceRuleSaveResponse invoiceRuleSave(shared_ptr<InvoiceRuleSaveRequest> request);
  InvoiceSearchResponse invoiceSearchWithOptions(shared_ptr<InvoiceSearchRequest> request, shared_ptr<InvoiceSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvoiceSearchResponse invoiceSearch(shared_ptr<InvoiceSearchRequest> request);
  IsvUserSaveResponse isvUserSaveWithOptions(shared_ptr<IsvUserSaveRequest> tmpReq, shared_ptr<IsvUserSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IsvUserSaveResponse isvUserSave(shared_ptr<IsvUserSaveRequest> request);
  MonthBillGetResponse monthBillGetWithOptions(shared_ptr<MonthBillGetRequest> request, shared_ptr<MonthBillGetHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MonthBillGetResponse monthBillGet(shared_ptr<MonthBillGetRequest> request);
  ProjectAddResponse projectAddWithOptions(shared_ptr<ProjectAddRequest> request, shared_ptr<ProjectAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ProjectAddResponse projectAdd(shared_ptr<ProjectAddRequest> request);
  ProjectDeleteResponse projectDeleteWithOptions(shared_ptr<ProjectDeleteRequest> request, shared_ptr<ProjectDeleteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ProjectDeleteResponse projectDelete(shared_ptr<ProjectDeleteRequest> request);
  ProjectModifyResponse projectModifyWithOptions(shared_ptr<ProjectModifyRequest> request, shared_ptr<ProjectModifyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ProjectModifyResponse projectModify(shared_ptr<ProjectModifyRequest> request);
  SyncSingleUserResponse syncSingleUserWithOptions(shared_ptr<SyncSingleUserRequest> tmpReq, shared_ptr<SyncSingleUserHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncSingleUserResponse syncSingleUser(shared_ptr<SyncSingleUserRequest> request);
  TrainBillSettlementQueryResponse trainBillSettlementQueryWithOptions(shared_ptr<TrainBillSettlementQueryRequest> request, shared_ptr<TrainBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TrainBillSettlementQueryResponse trainBillSettlementQuery(shared_ptr<TrainBillSettlementQueryRequest> request);
  TrainExceedApplyQueryResponse trainExceedApplyQueryWithOptions(shared_ptr<TrainExceedApplyQueryRequest> request, shared_ptr<TrainExceedApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TrainExceedApplyQueryResponse trainExceedApplyQuery(shared_ptr<TrainExceedApplyQueryRequest> request);
  TrainOrderListQueryResponse trainOrderListQueryWithOptions(shared_ptr<TrainOrderListQueryRequest> request, shared_ptr<TrainOrderListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TrainOrderListQueryResponse trainOrderListQuery(shared_ptr<TrainOrderListQueryRequest> request);
  TrainOrderQueryResponse trainOrderQueryWithOptions(shared_ptr<TrainOrderQueryRequest> request, shared_ptr<TrainOrderQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TrainOrderQueryResponse trainOrderQuery(shared_ptr<TrainOrderQueryRequest> request);
  TrainStationSearchResponse trainStationSearchWithOptions(shared_ptr<TrainStationSearchRequest> request, shared_ptr<TrainStationSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TrainStationSearchResponse trainStationSearch(shared_ptr<TrainStationSearchRequest> request);
  UserQueryResponse userQueryWithOptions(shared_ptr<UserQueryRequest> request, shared_ptr<UserQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UserQueryResponse userQuery(shared_ptr<UserQueryRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_BtripOpen20220520

#endif
