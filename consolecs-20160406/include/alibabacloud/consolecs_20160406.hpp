// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CONSOLECS20160406_H_
#define ALIBABACLOUD_CONSOLECS20160406_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Consolecs20160406 {
class GetOpenApiListRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GetOpenApiListRequest() {}

  explicit GetOpenApiListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetOpenApiListRequest() = default;
};
class GetOpenApiListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> openApiString{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetOpenApiListResponseBody() {}

  explicit GetOpenApiListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (openApiString) {
      res["OpenApiString"] = boost::any(*openApiString);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OpenApiString") != m.end() && !m["OpenApiString"].empty()) {
      openApiString = make_shared<string>(boost::any_cast<string>(m["OpenApiString"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetOpenApiListResponseBody() = default;
};
class GetOpenApiListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOpenApiListResponseBody> body{};

  GetOpenApiListResponse() {}

  explicit GetOpenApiListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOpenApiListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOpenApiListResponseBody>(model1);
      }
    }
  }


  virtual ~GetOpenApiListResponse() = default;
};
class ListConsoleProductResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> belongedCategory{};
  shared_ptr<vector<string>> categories{};
  shared_ptr<vector<string>> channelLinks{};
  shared_ptr<string> docId{};
  shared_ptr<vector<string>> keywords{};
  shared_ptr<string> names{};
  shared_ptr<string> pinyin{};
  shared_ptr<string> productId{};
  shared_ptr<string> relatedConsoleAppId{};
  shared_ptr<string> relatedPipId{};
  shared_ptr<bool> showInNav{};
  shared_ptr<vector<string>> supportedAccounts{};
  shared_ptr<vector<string>> supportedChannels{};
  shared_ptr<string> tag{};
  shared_ptr<string> tagExpireTime{};

  ListConsoleProductResponseBodyData() {}

  explicit ListConsoleProductResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (belongedCategory) {
      res["BelongedCategory"] = boost::any(*belongedCategory);
    }
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (channelLinks) {
      res["ChannelLinks"] = boost::any(*channelLinks);
    }
    if (docId) {
      res["DocId"] = boost::any(*docId);
    }
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (names) {
      res["Names"] = boost::any(*names);
    }
    if (pinyin) {
      res["Pinyin"] = boost::any(*pinyin);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (relatedConsoleAppId) {
      res["RelatedConsoleAppId"] = boost::any(*relatedConsoleAppId);
    }
    if (relatedPipId) {
      res["RelatedPipId"] = boost::any(*relatedPipId);
    }
    if (showInNav) {
      res["ShowInNav"] = boost::any(*showInNav);
    }
    if (supportedAccounts) {
      res["SupportedAccounts"] = boost::any(*supportedAccounts);
    }
    if (supportedChannels) {
      res["SupportedChannels"] = boost::any(*supportedChannels);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (tagExpireTime) {
      res["TagExpireTime"] = boost::any(*tagExpireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BelongedCategory") != m.end() && !m["BelongedCategory"].empty()) {
      belongedCategory = make_shared<string>(boost::any_cast<string>(m["BelongedCategory"]));
    }
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ChannelLinks") != m.end() && !m["ChannelLinks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelLinks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelLinks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channelLinks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DocId") != m.end() && !m["DocId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["DocId"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Keywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Keywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Names") != m.end() && !m["Names"].empty()) {
      names = make_shared<string>(boost::any_cast<string>(m["Names"]));
    }
    if (m.find("Pinyin") != m.end() && !m["Pinyin"].empty()) {
      pinyin = make_shared<string>(boost::any_cast<string>(m["Pinyin"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("RelatedConsoleAppId") != m.end() && !m["RelatedConsoleAppId"].empty()) {
      relatedConsoleAppId = make_shared<string>(boost::any_cast<string>(m["RelatedConsoleAppId"]));
    }
    if (m.find("RelatedPipId") != m.end() && !m["RelatedPipId"].empty()) {
      relatedPipId = make_shared<string>(boost::any_cast<string>(m["RelatedPipId"]));
    }
    if (m.find("ShowInNav") != m.end() && !m["ShowInNav"].empty()) {
      showInNav = make_shared<bool>(boost::any_cast<bool>(m["ShowInNav"]));
    }
    if (m.find("SupportedAccounts") != m.end() && !m["SupportedAccounts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedAccounts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedAccounts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedAccounts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SupportedChannels") != m.end() && !m["SupportedChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TagExpireTime") != m.end() && !m["TagExpireTime"].empty()) {
      tagExpireTime = make_shared<string>(boost::any_cast<string>(m["TagExpireTime"]));
    }
  }


  virtual ~ListConsoleProductResponseBodyData() = default;
};
class ListConsoleProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListConsoleProductResponseBodyData>> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListConsoleProductResponseBody() {}

  explicit ListConsoleProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListConsoleProductResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConsoleProductResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListConsoleProductResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListConsoleProductResponseBody() = default;
};
class ListConsoleProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConsoleProductResponseBody> body{};

  ListConsoleProductResponse() {}

  explicit ListConsoleProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConsoleProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConsoleProductResponseBody>(model1);
      }
    }
  }


  virtual ~ListConsoleProductResponse() = default;
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
  GetOpenApiListResponse getOpenApiListWithOptions(shared_ptr<GetOpenApiListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOpenApiListResponse getOpenApiList(shared_ptr<GetOpenApiListRequest> request);
  ListConsoleProductResponse listConsoleProductWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConsoleProductResponse listConsoleProduct();

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Consolecs20160406

#endif
