// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IQS20240712_H_
#define ALIBABACLOUD_IQS20240712_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_IQS20240712 {
class AgentBaseQuery : public Darabonba::Model {
public:
  shared_ptr<string> query{};

  AgentBaseQuery() {}

  explicit AgentBaseQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (query) {
      res["query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
  }


  virtual ~AgentBaseQuery() = default;
};
class CommonAgentQuery : public Darabonba::Model {
public:
  shared_ptr<string> query{};
  shared_ptr<string> querySceneEnumCode{};

  CommonAgentQuery() {}

  explicit CommonAgentQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (querySceneEnumCode) {
      res["querySceneEnumCode"] = boost::any(*querySceneEnumCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("querySceneEnumCode") != m.end() && !m["querySceneEnumCode"].empty()) {
      querySceneEnumCode = make_shared<string>(boost::any_cast<string>(m["querySceneEnumCode"]));
    }
  }


  virtual ~CommonAgentQuery() = default;
};
class QueryResultDataImages : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  QueryResultDataImages() {}

  explicit QueryResultDataImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~QueryResultDataImages() = default;
};
class QueryResultDataMetadata : public Darabonba::Model {
public:
  shared_ptr<string> businessArea{};
  shared_ptr<string> dailyOpeningHours{};
  shared_ptr<string> mainTag{};
  shared_ptr<string> phone{};
  shared_ptr<string> score{};
  shared_ptr<string> weeklyOpeningDays{};

  QueryResultDataMetadata() {}

  explicit QueryResultDataMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessArea) {
      res["businessArea"] = boost::any(*businessArea);
    }
    if (dailyOpeningHours) {
      res["dailyOpeningHours"] = boost::any(*dailyOpeningHours);
    }
    if (mainTag) {
      res["mainTag"] = boost::any(*mainTag);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (score) {
      res["score"] = boost::any(*score);
    }
    if (weeklyOpeningDays) {
      res["weeklyOpeningDays"] = boost::any(*weeklyOpeningDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("businessArea") != m.end() && !m["businessArea"].empty()) {
      businessArea = make_shared<string>(boost::any_cast<string>(m["businessArea"]));
    }
    if (m.find("dailyOpeningHours") != m.end() && !m["dailyOpeningHours"].empty()) {
      dailyOpeningHours = make_shared<string>(boost::any_cast<string>(m["dailyOpeningHours"]));
    }
    if (m.find("mainTag") != m.end() && !m["mainTag"].empty()) {
      mainTag = make_shared<string>(boost::any_cast<string>(m["mainTag"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("score") != m.end() && !m["score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["score"]));
    }
    if (m.find("weeklyOpeningDays") != m.end() && !m["weeklyOpeningDays"].empty()) {
      weeklyOpeningDays = make_shared<string>(boost::any_cast<string>(m["weeklyOpeningDays"]));
    }
  }


  virtual ~QueryResultDataMetadata() = default;
};
class QueryResultData : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> cityCode{};
  shared_ptr<string> cityName{};
  shared_ptr<string> districtCode{};
  shared_ptr<string> districtName{};
  shared_ptr<string> id{};
  shared_ptr<vector<QueryResultDataImages>> images{};
  shared_ptr<string> latitude{};
  shared_ptr<string> longitude{};
  shared_ptr<QueryResultDataMetadata> metadata{};
  shared_ptr<string> name{};
  shared_ptr<string> provinceCode{};
  shared_ptr<string> provinceName{};
  shared_ptr<string> typeCode{};
  shared_ptr<string> types{};

  QueryResultData() {}

  explicit QueryResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["address"] = boost::any(*address);
    }
    if (cityCode) {
      res["cityCode"] = boost::any(*cityCode);
    }
    if (cityName) {
      res["cityName"] = boost::any(*cityName);
    }
    if (districtCode) {
      res["districtCode"] = boost::any(*districtCode);
    }
    if (districtName) {
      res["districtName"] = boost::any(*districtName);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["images"] = boost::any(temp1);
    }
    if (latitude) {
      res["latitude"] = boost::any(*latitude);
    }
    if (longitude) {
      res["longitude"] = boost::any(*longitude);
    }
    if (metadata) {
      res["metadata"] = metadata ? boost::any(metadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (provinceCode) {
      res["provinceCode"] = boost::any(*provinceCode);
    }
    if (provinceName) {
      res["provinceName"] = boost::any(*provinceName);
    }
    if (typeCode) {
      res["typeCode"] = boost::any(*typeCode);
    }
    if (types) {
      res["types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("address") != m.end() && !m["address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["address"]));
    }
    if (m.find("cityCode") != m.end() && !m["cityCode"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["cityCode"]));
    }
    if (m.find("cityName") != m.end() && !m["cityName"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["cityName"]));
    }
    if (m.find("districtCode") != m.end() && !m["districtCode"].empty()) {
      districtCode = make_shared<string>(boost::any_cast<string>(m["districtCode"]));
    }
    if (m.find("districtName") != m.end() && !m["districtName"].empty()) {
      districtName = make_shared<string>(boost::any_cast<string>(m["districtName"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("images") != m.end() && !m["images"].empty()) {
      if (typeid(vector<boost::any>) == m["images"].type()) {
        vector<QueryResultDataImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryResultDataImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<QueryResultDataImages>>(expect1);
      }
    }
    if (m.find("latitude") != m.end() && !m["latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["latitude"]));
    }
    if (m.find("longitude") != m.end() && !m["longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["longitude"]));
    }
    if (m.find("metadata") != m.end() && !m["metadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["metadata"].type()) {
        QueryResultDataMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["metadata"]));
        metadata = make_shared<QueryResultDataMetadata>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("provinceCode") != m.end() && !m["provinceCode"].empty()) {
      provinceCode = make_shared<string>(boost::any_cast<string>(m["provinceCode"]));
    }
    if (m.find("provinceName") != m.end() && !m["provinceName"].empty()) {
      provinceName = make_shared<string>(boost::any_cast<string>(m["provinceName"]));
    }
    if (m.find("typeCode") != m.end() && !m["typeCode"].empty()) {
      typeCode = make_shared<string>(boost::any_cast<string>(m["typeCode"]));
    }
    if (m.find("types") != m.end() && !m["types"].empty()) {
      types = make_shared<string>(boost::any_cast<string>(m["types"]));
    }
  }


  virtual ~QueryResultData() = default;
};
class QueryResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryResultData>> data{};

  QueryResult() {}

  explicit QueryResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<QueryResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryResultData>>(expect1);
      }
    }
  }


  virtual ~QueryResult() = default;
};
class CommonQueryBySceneRequest : public Darabonba::Model {
public:
  shared_ptr<CommonAgentQuery> body{};

  CommonQueryBySceneRequest() {}

  explicit CommonQueryBySceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CommonAgentQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CommonAgentQuery>(model1);
      }
    }
  }


  virtual ~CommonQueryBySceneRequest() = default;
};
class CommonQueryBySceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryResult> body{};

  CommonQueryBySceneResponse() {}

  explicit CommonQueryBySceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryResult>(model1);
      }
    }
  }


  virtual ~CommonQueryBySceneResponse() = default;
};
class QueryAttractionsRequest : public Darabonba::Model {
public:
  shared_ptr<AgentBaseQuery> body{};

  QueryAttractionsRequest() {}

  explicit QueryAttractionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AgentBaseQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AgentBaseQuery>(model1);
      }
    }
  }


  virtual ~QueryAttractionsRequest() = default;
};
class QueryAttractionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryResult> queryResult{};
  shared_ptr<string> requestId{};

  QueryAttractionsResponseBody() {}

  explicit QueryAttractionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryResult) {
      res["queryResult"] = queryResult ? boost::any(queryResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("queryResult") != m.end() && !m["queryResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["queryResult"].type()) {
        QueryResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["queryResult"]));
        queryResult = make_shared<QueryResult>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~QueryAttractionsResponseBody() = default;
};
class QueryAttractionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAttractionsResponseBody> body{};

  QueryAttractionsResponse() {}

  explicit QueryAttractionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAttractionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAttractionsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAttractionsResponse() = default;
};
class QueryHotelsRequest : public Darabonba::Model {
public:
  shared_ptr<AgentBaseQuery> body{};

  QueryHotelsRequest() {}

  explicit QueryHotelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AgentBaseQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AgentBaseQuery>(model1);
      }
    }
  }


  virtual ~QueryHotelsRequest() = default;
};
class QueryHotelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryResult> queryResult{};
  shared_ptr<string> requestId{};

  QueryHotelsResponseBody() {}

  explicit QueryHotelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryResult) {
      res["queryResult"] = queryResult ? boost::any(queryResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("queryResult") != m.end() && !m["queryResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["queryResult"].type()) {
        QueryResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["queryResult"]));
        queryResult = make_shared<QueryResult>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~QueryHotelsResponseBody() = default;
};
class QueryHotelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryHotelsResponseBody> body{};

  QueryHotelsResponse() {}

  explicit QueryHotelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryHotelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryHotelsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryHotelsResponse() = default;
};
class QueryRestaurantsRequest : public Darabonba::Model {
public:
  shared_ptr<AgentBaseQuery> body{};

  QueryRestaurantsRequest() {}

  explicit QueryRestaurantsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AgentBaseQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AgentBaseQuery>(model1);
      }
    }
  }


  virtual ~QueryRestaurantsRequest() = default;
};
class QueryRestaurantsResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryResult> queryResult{};
  shared_ptr<string> requestId{};

  QueryRestaurantsResponseBody() {}

  explicit QueryRestaurantsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryResult) {
      res["queryResult"] = queryResult ? boost::any(queryResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("queryResult") != m.end() && !m["queryResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["queryResult"].type()) {
        QueryResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["queryResult"]));
        queryResult = make_shared<QueryResult>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~QueryRestaurantsResponseBody() = default;
};
class QueryRestaurantsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRestaurantsResponseBody> body{};

  QueryRestaurantsResponse() {}

  explicit QueryRestaurantsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryRestaurantsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRestaurantsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRestaurantsResponse() = default;
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
  CommonQueryBySceneResponse commonQueryBySceneWithOptions(shared_ptr<CommonQueryBySceneRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CommonQueryBySceneResponse commonQueryByScene(shared_ptr<CommonQueryBySceneRequest> request);
  QueryAttractionsResponse queryAttractionsWithOptions(shared_ptr<QueryAttractionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAttractionsResponse queryAttractions(shared_ptr<QueryAttractionsRequest> request);
  QueryHotelsResponse queryHotelsWithOptions(shared_ptr<QueryHotelsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryHotelsResponse queryHotels(shared_ptr<QueryHotelsRequest> request);
  QueryRestaurantsResponse queryRestaurantsWithOptions(shared_ptr<QueryRestaurantsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRestaurantsResponse queryRestaurants(shared_ptr<QueryRestaurantsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_IQS20240712

#endif
