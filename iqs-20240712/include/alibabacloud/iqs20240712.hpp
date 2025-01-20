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
  shared_ptr<string> averageSpend{};
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
    if (averageSpend) {
      res["averageSpend"] = boost::any(*averageSpend);
    }
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
    if (m.find("averageSpend") != m.end() && !m["averageSpend"].empty()) {
      averageSpend = make_shared<string>(boost::any_cast<string>(m["averageSpend"]));
    }
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
  shared_ptr<string> distanceMeter{};
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
    if (distanceMeter) {
      res["distanceMeter"] = boost::any(*distanceMeter);
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
    if (m.find("distanceMeter") != m.end() && !m["distanceMeter"].empty()) {
      distanceMeter = make_shared<string>(boost::any_cast<string>(m["distanceMeter"]));
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
  shared_ptr<string> requestId{};

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
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~QueryResult() = default;
};
class BicyclingDirectionNovaRequest : public Darabonba::Model {
public:
  shared_ptr<string> destinationLatitude{};
  shared_ptr<string> destinationLongitude{};
  shared_ptr<string> originLatitude{};
  shared_ptr<string> originLongitude{};

  BicyclingDirectionNovaRequest() {}

  explicit BicyclingDirectionNovaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationLatitude) {
      res["destinationLatitude"] = boost::any(*destinationLatitude);
    }
    if (destinationLongitude) {
      res["destinationLongitude"] = boost::any(*destinationLongitude);
    }
    if (originLatitude) {
      res["originLatitude"] = boost::any(*originLatitude);
    }
    if (originLongitude) {
      res["originLongitude"] = boost::any(*originLongitude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("destinationLatitude") != m.end() && !m["destinationLatitude"].empty()) {
      destinationLatitude = make_shared<string>(boost::any_cast<string>(m["destinationLatitude"]));
    }
    if (m.find("destinationLongitude") != m.end() && !m["destinationLongitude"].empty()) {
      destinationLongitude = make_shared<string>(boost::any_cast<string>(m["destinationLongitude"]));
    }
    if (m.find("originLatitude") != m.end() && !m["originLatitude"].empty()) {
      originLatitude = make_shared<string>(boost::any_cast<string>(m["originLatitude"]));
    }
    if (m.find("originLongitude") != m.end() && !m["originLongitude"].empty()) {
      originLongitude = make_shared<string>(boost::any_cast<string>(m["originLongitude"]));
    }
  }


  virtual ~BicyclingDirectionNovaRequest() = default;
};
class BicyclingDirectionNovaResponseBodyDataPathsCost : public Darabonba::Model {
public:
  shared_ptr<string> durationSecond{};
  shared_ptr<string> taxiFee{};
  shared_ptr<string> tollDistanceMeter{};
  shared_ptr<string> tollRoads{};
  shared_ptr<string> tolls{};
  shared_ptr<string> trafficLights{};
  shared_ptr<string> transitFee{};

  BicyclingDirectionNovaResponseBodyDataPathsCost() {}

  explicit BicyclingDirectionNovaResponseBodyDataPathsCost(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (taxiFee) {
      res["taxiFee"] = boost::any(*taxiFee);
    }
    if (tollDistanceMeter) {
      res["tollDistanceMeter"] = boost::any(*tollDistanceMeter);
    }
    if (tollRoads) {
      res["tollRoads"] = boost::any(*tollRoads);
    }
    if (tolls) {
      res["tolls"] = boost::any(*tolls);
    }
    if (trafficLights) {
      res["trafficLights"] = boost::any(*trafficLights);
    }
    if (transitFee) {
      res["transitFee"] = boost::any(*transitFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("taxiFee") != m.end() && !m["taxiFee"].empty()) {
      taxiFee = make_shared<string>(boost::any_cast<string>(m["taxiFee"]));
    }
    if (m.find("tollDistanceMeter") != m.end() && !m["tollDistanceMeter"].empty()) {
      tollDistanceMeter = make_shared<string>(boost::any_cast<string>(m["tollDistanceMeter"]));
    }
    if (m.find("tollRoads") != m.end() && !m["tollRoads"].empty()) {
      tollRoads = make_shared<string>(boost::any_cast<string>(m["tollRoads"]));
    }
    if (m.find("tolls") != m.end() && !m["tolls"].empty()) {
      tolls = make_shared<string>(boost::any_cast<string>(m["tolls"]));
    }
    if (m.find("trafficLights") != m.end() && !m["trafficLights"].empty()) {
      trafficLights = make_shared<string>(boost::any_cast<string>(m["trafficLights"]));
    }
    if (m.find("transitFee") != m.end() && !m["transitFee"].empty()) {
      transitFee = make_shared<string>(boost::any_cast<string>(m["transitFee"]));
    }
  }


  virtual ~BicyclingDirectionNovaResponseBodyDataPathsCost() = default;
};
class BicyclingDirectionNovaResponseBodyDataPathsStepsCost : public Darabonba::Model {
public:
  shared_ptr<string> durationSecond{};
  shared_ptr<string> taxiFee{};
  shared_ptr<string> tollDistanceMeter{};
  shared_ptr<string> tollRoads{};
  shared_ptr<string> tolls{};
  shared_ptr<string> trafficLights{};
  shared_ptr<string> transitFee{};

  BicyclingDirectionNovaResponseBodyDataPathsStepsCost() {}

  explicit BicyclingDirectionNovaResponseBodyDataPathsStepsCost(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (taxiFee) {
      res["taxiFee"] = boost::any(*taxiFee);
    }
    if (tollDistanceMeter) {
      res["tollDistanceMeter"] = boost::any(*tollDistanceMeter);
    }
    if (tollRoads) {
      res["tollRoads"] = boost::any(*tollRoads);
    }
    if (tolls) {
      res["tolls"] = boost::any(*tolls);
    }
    if (trafficLights) {
      res["trafficLights"] = boost::any(*trafficLights);
    }
    if (transitFee) {
      res["transitFee"] = boost::any(*transitFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("taxiFee") != m.end() && !m["taxiFee"].empty()) {
      taxiFee = make_shared<string>(boost::any_cast<string>(m["taxiFee"]));
    }
    if (m.find("tollDistanceMeter") != m.end() && !m["tollDistanceMeter"].empty()) {
      tollDistanceMeter = make_shared<string>(boost::any_cast<string>(m["tollDistanceMeter"]));
    }
    if (m.find("tollRoads") != m.end() && !m["tollRoads"].empty()) {
      tollRoads = make_shared<string>(boost::any_cast<string>(m["tollRoads"]));
    }
    if (m.find("tolls") != m.end() && !m["tolls"].empty()) {
      tolls = make_shared<string>(boost::any_cast<string>(m["tolls"]));
    }
    if (m.find("trafficLights") != m.end() && !m["trafficLights"].empty()) {
      trafficLights = make_shared<string>(boost::any_cast<string>(m["trafficLights"]));
    }
    if (m.find("transitFee") != m.end() && !m["transitFee"].empty()) {
      transitFee = make_shared<string>(boost::any_cast<string>(m["transitFee"]));
    }
  }


  virtual ~BicyclingDirectionNovaResponseBodyDataPathsStepsCost() = default;
};
class BicyclingDirectionNovaResponseBodyDataPathsSteps : public Darabonba::Model {
public:
  shared_ptr<BicyclingDirectionNovaResponseBodyDataPathsStepsCost> cost{};
  shared_ptr<string> instruction{};
  shared_ptr<string> orientation{};
  shared_ptr<string> polyline{};
  shared_ptr<string> roadName{};
  shared_ptr<string> stepDistanceMeter{};

  BicyclingDirectionNovaResponseBodyDataPathsSteps() {}

  explicit BicyclingDirectionNovaResponseBodyDataPathsSteps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = cost ? boost::any(cost->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instruction) {
      res["instruction"] = boost::any(*instruction);
    }
    if (orientation) {
      res["orientation"] = boost::any(*orientation);
    }
    if (polyline) {
      res["polyline"] = boost::any(*polyline);
    }
    if (roadName) {
      res["roadName"] = boost::any(*roadName);
    }
    if (stepDistanceMeter) {
      res["stepDistanceMeter"] = boost::any(*stepDistanceMeter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost"].type()) {
        BicyclingDirectionNovaResponseBodyDataPathsStepsCost model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost"]));
        cost = make_shared<BicyclingDirectionNovaResponseBodyDataPathsStepsCost>(model1);
      }
    }
    if (m.find("instruction") != m.end() && !m["instruction"].empty()) {
      instruction = make_shared<string>(boost::any_cast<string>(m["instruction"]));
    }
    if (m.find("orientation") != m.end() && !m["orientation"].empty()) {
      orientation = make_shared<string>(boost::any_cast<string>(m["orientation"]));
    }
    if (m.find("polyline") != m.end() && !m["polyline"].empty()) {
      polyline = make_shared<string>(boost::any_cast<string>(m["polyline"]));
    }
    if (m.find("roadName") != m.end() && !m["roadName"].empty()) {
      roadName = make_shared<string>(boost::any_cast<string>(m["roadName"]));
    }
    if (m.find("stepDistanceMeter") != m.end() && !m["stepDistanceMeter"].empty()) {
      stepDistanceMeter = make_shared<string>(boost::any_cast<string>(m["stepDistanceMeter"]));
    }
  }


  virtual ~BicyclingDirectionNovaResponseBodyDataPathsSteps() = default;
};
class BicyclingDirectionNovaResponseBodyDataPaths : public Darabonba::Model {
public:
  shared_ptr<BicyclingDirectionNovaResponseBodyDataPathsCost> cost{};
  shared_ptr<string> distanceMeter{};
  shared_ptr<string> durationSecond{};
  shared_ptr<string> restriction{};
  shared_ptr<vector<BicyclingDirectionNovaResponseBodyDataPathsSteps>> steps{};

  BicyclingDirectionNovaResponseBodyDataPaths() {}

  explicit BicyclingDirectionNovaResponseBodyDataPaths(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = cost ? boost::any(cost->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (distanceMeter) {
      res["distanceMeter"] = boost::any(*distanceMeter);
    }
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (restriction) {
      res["restriction"] = boost::any(*restriction);
    }
    if (steps) {
      vector<boost::any> temp1;
      for(auto item1:*steps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["steps"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost"].type()) {
        BicyclingDirectionNovaResponseBodyDataPathsCost model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost"]));
        cost = make_shared<BicyclingDirectionNovaResponseBodyDataPathsCost>(model1);
      }
    }
    if (m.find("distanceMeter") != m.end() && !m["distanceMeter"].empty()) {
      distanceMeter = make_shared<string>(boost::any_cast<string>(m["distanceMeter"]));
    }
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("restriction") != m.end() && !m["restriction"].empty()) {
      restriction = make_shared<string>(boost::any_cast<string>(m["restriction"]));
    }
    if (m.find("steps") != m.end() && !m["steps"].empty()) {
      if (typeid(vector<boost::any>) == m["steps"].type()) {
        vector<BicyclingDirectionNovaResponseBodyDataPathsSteps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["steps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BicyclingDirectionNovaResponseBodyDataPathsSteps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        steps = make_shared<vector<BicyclingDirectionNovaResponseBodyDataPathsSteps>>(expect1);
      }
    }
  }


  virtual ~BicyclingDirectionNovaResponseBodyDataPaths() = default;
};
class BicyclingDirectionNovaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> count{};
  shared_ptr<string> destinationLatitude{};
  shared_ptr<string> destinationLongitude{};
  shared_ptr<string> originLatitude{};
  shared_ptr<string> originLongitude{};
  shared_ptr<vector<BicyclingDirectionNovaResponseBodyDataPaths>> paths{};
  shared_ptr<string> taxiCost{};

  BicyclingDirectionNovaResponseBodyData() {}

  explicit BicyclingDirectionNovaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (destinationLatitude) {
      res["destinationLatitude"] = boost::any(*destinationLatitude);
    }
    if (destinationLongitude) {
      res["destinationLongitude"] = boost::any(*destinationLongitude);
    }
    if (originLatitude) {
      res["originLatitude"] = boost::any(*originLatitude);
    }
    if (originLongitude) {
      res["originLongitude"] = boost::any(*originLongitude);
    }
    if (paths) {
      vector<boost::any> temp1;
      for(auto item1:*paths){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["paths"] = boost::any(temp1);
    }
    if (taxiCost) {
      res["taxiCost"] = boost::any(*taxiCost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["count"]));
    }
    if (m.find("destinationLatitude") != m.end() && !m["destinationLatitude"].empty()) {
      destinationLatitude = make_shared<string>(boost::any_cast<string>(m["destinationLatitude"]));
    }
    if (m.find("destinationLongitude") != m.end() && !m["destinationLongitude"].empty()) {
      destinationLongitude = make_shared<string>(boost::any_cast<string>(m["destinationLongitude"]));
    }
    if (m.find("originLatitude") != m.end() && !m["originLatitude"].empty()) {
      originLatitude = make_shared<string>(boost::any_cast<string>(m["originLatitude"]));
    }
    if (m.find("originLongitude") != m.end() && !m["originLongitude"].empty()) {
      originLongitude = make_shared<string>(boost::any_cast<string>(m["originLongitude"]));
    }
    if (m.find("paths") != m.end() && !m["paths"].empty()) {
      if (typeid(vector<boost::any>) == m["paths"].type()) {
        vector<BicyclingDirectionNovaResponseBodyDataPaths> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["paths"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BicyclingDirectionNovaResponseBodyDataPaths model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paths = make_shared<vector<BicyclingDirectionNovaResponseBodyDataPaths>>(expect1);
      }
    }
    if (m.find("taxiCost") != m.end() && !m["taxiCost"].empty()) {
      taxiCost = make_shared<string>(boost::any_cast<string>(m["taxiCost"]));
    }
  }


  virtual ~BicyclingDirectionNovaResponseBodyData() = default;
};
class BicyclingDirectionNovaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<BicyclingDirectionNovaResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BicyclingDirectionNovaResponseBody() {}

  explicit BicyclingDirectionNovaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
        BicyclingDirectionNovaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<BicyclingDirectionNovaResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
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


  virtual ~BicyclingDirectionNovaResponseBody() = default;
};
class BicyclingDirectionNovaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BicyclingDirectionNovaResponseBody> body{};

  BicyclingDirectionNovaResponse() {}

  explicit BicyclingDirectionNovaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BicyclingDirectionNovaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BicyclingDirectionNovaResponseBody>(model1);
      }
    }
  }


  virtual ~BicyclingDirectionNovaResponse() = default;
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
class DrivingDirectionNovaRequest : public Darabonba::Model {
public:
  shared_ptr<string> carType{};
  shared_ptr<string> destinationLatitude{};
  shared_ptr<string> destinationLongitude{};
  shared_ptr<string> originLatitude{};
  shared_ptr<string> originLongitude{};
  shared_ptr<string> plate{};

  DrivingDirectionNovaRequest() {}

  explicit DrivingDirectionNovaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carType) {
      res["carType"] = boost::any(*carType);
    }
    if (destinationLatitude) {
      res["destinationLatitude"] = boost::any(*destinationLatitude);
    }
    if (destinationLongitude) {
      res["destinationLongitude"] = boost::any(*destinationLongitude);
    }
    if (originLatitude) {
      res["originLatitude"] = boost::any(*originLatitude);
    }
    if (originLongitude) {
      res["originLongitude"] = boost::any(*originLongitude);
    }
    if (plate) {
      res["plate"] = boost::any(*plate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carType") != m.end() && !m["carType"].empty()) {
      carType = make_shared<string>(boost::any_cast<string>(m["carType"]));
    }
    if (m.find("destinationLatitude") != m.end() && !m["destinationLatitude"].empty()) {
      destinationLatitude = make_shared<string>(boost::any_cast<string>(m["destinationLatitude"]));
    }
    if (m.find("destinationLongitude") != m.end() && !m["destinationLongitude"].empty()) {
      destinationLongitude = make_shared<string>(boost::any_cast<string>(m["destinationLongitude"]));
    }
    if (m.find("originLatitude") != m.end() && !m["originLatitude"].empty()) {
      originLatitude = make_shared<string>(boost::any_cast<string>(m["originLatitude"]));
    }
    if (m.find("originLongitude") != m.end() && !m["originLongitude"].empty()) {
      originLongitude = make_shared<string>(boost::any_cast<string>(m["originLongitude"]));
    }
    if (m.find("plate") != m.end() && !m["plate"].empty()) {
      plate = make_shared<string>(boost::any_cast<string>(m["plate"]));
    }
  }


  virtual ~DrivingDirectionNovaRequest() = default;
};
class DrivingDirectionNovaResponseBodyDataPathsCost : public Darabonba::Model {
public:
  shared_ptr<string> durationSecond{};
  shared_ptr<string> taxiFee{};
  shared_ptr<string> tollDistanceMeter{};
  shared_ptr<string> tollRoads{};
  shared_ptr<string> tolls{};
  shared_ptr<string> trafficLights{};
  shared_ptr<string> transitFee{};

  DrivingDirectionNovaResponseBodyDataPathsCost() {}

  explicit DrivingDirectionNovaResponseBodyDataPathsCost(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (taxiFee) {
      res["taxiFee"] = boost::any(*taxiFee);
    }
    if (tollDistanceMeter) {
      res["tollDistanceMeter"] = boost::any(*tollDistanceMeter);
    }
    if (tollRoads) {
      res["tollRoads"] = boost::any(*tollRoads);
    }
    if (tolls) {
      res["tolls"] = boost::any(*tolls);
    }
    if (trafficLights) {
      res["trafficLights"] = boost::any(*trafficLights);
    }
    if (transitFee) {
      res["transitFee"] = boost::any(*transitFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("taxiFee") != m.end() && !m["taxiFee"].empty()) {
      taxiFee = make_shared<string>(boost::any_cast<string>(m["taxiFee"]));
    }
    if (m.find("tollDistanceMeter") != m.end() && !m["tollDistanceMeter"].empty()) {
      tollDistanceMeter = make_shared<string>(boost::any_cast<string>(m["tollDistanceMeter"]));
    }
    if (m.find("tollRoads") != m.end() && !m["tollRoads"].empty()) {
      tollRoads = make_shared<string>(boost::any_cast<string>(m["tollRoads"]));
    }
    if (m.find("tolls") != m.end() && !m["tolls"].empty()) {
      tolls = make_shared<string>(boost::any_cast<string>(m["tolls"]));
    }
    if (m.find("trafficLights") != m.end() && !m["trafficLights"].empty()) {
      trafficLights = make_shared<string>(boost::any_cast<string>(m["trafficLights"]));
    }
    if (m.find("transitFee") != m.end() && !m["transitFee"].empty()) {
      transitFee = make_shared<string>(boost::any_cast<string>(m["transitFee"]));
    }
  }


  virtual ~DrivingDirectionNovaResponseBodyDataPathsCost() = default;
};
class DrivingDirectionNovaResponseBodyDataPathsStepsCost : public Darabonba::Model {
public:
  shared_ptr<string> durationSecond{};
  shared_ptr<string> taxiFee{};
  shared_ptr<string> tollDistanceMeter{};
  shared_ptr<string> tollRoads{};
  shared_ptr<string> tolls{};
  shared_ptr<string> trafficLights{};
  shared_ptr<string> transitFee{};

  DrivingDirectionNovaResponseBodyDataPathsStepsCost() {}

  explicit DrivingDirectionNovaResponseBodyDataPathsStepsCost(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (taxiFee) {
      res["taxiFee"] = boost::any(*taxiFee);
    }
    if (tollDistanceMeter) {
      res["tollDistanceMeter"] = boost::any(*tollDistanceMeter);
    }
    if (tollRoads) {
      res["tollRoads"] = boost::any(*tollRoads);
    }
    if (tolls) {
      res["tolls"] = boost::any(*tolls);
    }
    if (trafficLights) {
      res["trafficLights"] = boost::any(*trafficLights);
    }
    if (transitFee) {
      res["transitFee"] = boost::any(*transitFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("taxiFee") != m.end() && !m["taxiFee"].empty()) {
      taxiFee = make_shared<string>(boost::any_cast<string>(m["taxiFee"]));
    }
    if (m.find("tollDistanceMeter") != m.end() && !m["tollDistanceMeter"].empty()) {
      tollDistanceMeter = make_shared<string>(boost::any_cast<string>(m["tollDistanceMeter"]));
    }
    if (m.find("tollRoads") != m.end() && !m["tollRoads"].empty()) {
      tollRoads = make_shared<string>(boost::any_cast<string>(m["tollRoads"]));
    }
    if (m.find("tolls") != m.end() && !m["tolls"].empty()) {
      tolls = make_shared<string>(boost::any_cast<string>(m["tolls"]));
    }
    if (m.find("trafficLights") != m.end() && !m["trafficLights"].empty()) {
      trafficLights = make_shared<string>(boost::any_cast<string>(m["trafficLights"]));
    }
    if (m.find("transitFee") != m.end() && !m["transitFee"].empty()) {
      transitFee = make_shared<string>(boost::any_cast<string>(m["transitFee"]));
    }
  }


  virtual ~DrivingDirectionNovaResponseBodyDataPathsStepsCost() = default;
};
class DrivingDirectionNovaResponseBodyDataPathsSteps : public Darabonba::Model {
public:
  shared_ptr<DrivingDirectionNovaResponseBodyDataPathsStepsCost> cost{};
  shared_ptr<string> instruction{};
  shared_ptr<string> orientation{};
  shared_ptr<string> polyline{};
  shared_ptr<string> roadName{};
  shared_ptr<string> stepDistanceMeter{};

  DrivingDirectionNovaResponseBodyDataPathsSteps() {}

  explicit DrivingDirectionNovaResponseBodyDataPathsSteps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = cost ? boost::any(cost->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instruction) {
      res["instruction"] = boost::any(*instruction);
    }
    if (orientation) {
      res["orientation"] = boost::any(*orientation);
    }
    if (polyline) {
      res["polyline"] = boost::any(*polyline);
    }
    if (roadName) {
      res["roadName"] = boost::any(*roadName);
    }
    if (stepDistanceMeter) {
      res["stepDistanceMeter"] = boost::any(*stepDistanceMeter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost"].type()) {
        DrivingDirectionNovaResponseBodyDataPathsStepsCost model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost"]));
        cost = make_shared<DrivingDirectionNovaResponseBodyDataPathsStepsCost>(model1);
      }
    }
    if (m.find("instruction") != m.end() && !m["instruction"].empty()) {
      instruction = make_shared<string>(boost::any_cast<string>(m["instruction"]));
    }
    if (m.find("orientation") != m.end() && !m["orientation"].empty()) {
      orientation = make_shared<string>(boost::any_cast<string>(m["orientation"]));
    }
    if (m.find("polyline") != m.end() && !m["polyline"].empty()) {
      polyline = make_shared<string>(boost::any_cast<string>(m["polyline"]));
    }
    if (m.find("roadName") != m.end() && !m["roadName"].empty()) {
      roadName = make_shared<string>(boost::any_cast<string>(m["roadName"]));
    }
    if (m.find("stepDistanceMeter") != m.end() && !m["stepDistanceMeter"].empty()) {
      stepDistanceMeter = make_shared<string>(boost::any_cast<string>(m["stepDistanceMeter"]));
    }
  }


  virtual ~DrivingDirectionNovaResponseBodyDataPathsSteps() = default;
};
class DrivingDirectionNovaResponseBodyDataPaths : public Darabonba::Model {
public:
  shared_ptr<DrivingDirectionNovaResponseBodyDataPathsCost> cost{};
  shared_ptr<string> distanceMeter{};
  shared_ptr<string> durationSecond{};
  shared_ptr<string> restriction{};
  shared_ptr<vector<DrivingDirectionNovaResponseBodyDataPathsSteps>> steps{};

  DrivingDirectionNovaResponseBodyDataPaths() {}

  explicit DrivingDirectionNovaResponseBodyDataPaths(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = cost ? boost::any(cost->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (distanceMeter) {
      res["distanceMeter"] = boost::any(*distanceMeter);
    }
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (restriction) {
      res["restriction"] = boost::any(*restriction);
    }
    if (steps) {
      vector<boost::any> temp1;
      for(auto item1:*steps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["steps"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost"].type()) {
        DrivingDirectionNovaResponseBodyDataPathsCost model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost"]));
        cost = make_shared<DrivingDirectionNovaResponseBodyDataPathsCost>(model1);
      }
    }
    if (m.find("distanceMeter") != m.end() && !m["distanceMeter"].empty()) {
      distanceMeter = make_shared<string>(boost::any_cast<string>(m["distanceMeter"]));
    }
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("restriction") != m.end() && !m["restriction"].empty()) {
      restriction = make_shared<string>(boost::any_cast<string>(m["restriction"]));
    }
    if (m.find("steps") != m.end() && !m["steps"].empty()) {
      if (typeid(vector<boost::any>) == m["steps"].type()) {
        vector<DrivingDirectionNovaResponseBodyDataPathsSteps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["steps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DrivingDirectionNovaResponseBodyDataPathsSteps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        steps = make_shared<vector<DrivingDirectionNovaResponseBodyDataPathsSteps>>(expect1);
      }
    }
  }


  virtual ~DrivingDirectionNovaResponseBodyDataPaths() = default;
};
class DrivingDirectionNovaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> count{};
  shared_ptr<string> destinationLatitude{};
  shared_ptr<string> destinationLongitude{};
  shared_ptr<string> originLatitude{};
  shared_ptr<string> originLongitude{};
  shared_ptr<vector<DrivingDirectionNovaResponseBodyDataPaths>> paths{};
  shared_ptr<string> taxiCost{};

  DrivingDirectionNovaResponseBodyData() {}

  explicit DrivingDirectionNovaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (destinationLatitude) {
      res["destinationLatitude"] = boost::any(*destinationLatitude);
    }
    if (destinationLongitude) {
      res["destinationLongitude"] = boost::any(*destinationLongitude);
    }
    if (originLatitude) {
      res["originLatitude"] = boost::any(*originLatitude);
    }
    if (originLongitude) {
      res["originLongitude"] = boost::any(*originLongitude);
    }
    if (paths) {
      vector<boost::any> temp1;
      for(auto item1:*paths){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["paths"] = boost::any(temp1);
    }
    if (taxiCost) {
      res["taxiCost"] = boost::any(*taxiCost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["count"]));
    }
    if (m.find("destinationLatitude") != m.end() && !m["destinationLatitude"].empty()) {
      destinationLatitude = make_shared<string>(boost::any_cast<string>(m["destinationLatitude"]));
    }
    if (m.find("destinationLongitude") != m.end() && !m["destinationLongitude"].empty()) {
      destinationLongitude = make_shared<string>(boost::any_cast<string>(m["destinationLongitude"]));
    }
    if (m.find("originLatitude") != m.end() && !m["originLatitude"].empty()) {
      originLatitude = make_shared<string>(boost::any_cast<string>(m["originLatitude"]));
    }
    if (m.find("originLongitude") != m.end() && !m["originLongitude"].empty()) {
      originLongitude = make_shared<string>(boost::any_cast<string>(m["originLongitude"]));
    }
    if (m.find("paths") != m.end() && !m["paths"].empty()) {
      if (typeid(vector<boost::any>) == m["paths"].type()) {
        vector<DrivingDirectionNovaResponseBodyDataPaths> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["paths"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DrivingDirectionNovaResponseBodyDataPaths model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paths = make_shared<vector<DrivingDirectionNovaResponseBodyDataPaths>>(expect1);
      }
    }
    if (m.find("taxiCost") != m.end() && !m["taxiCost"].empty()) {
      taxiCost = make_shared<string>(boost::any_cast<string>(m["taxiCost"]));
    }
  }


  virtual ~DrivingDirectionNovaResponseBodyData() = default;
};
class DrivingDirectionNovaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DrivingDirectionNovaResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DrivingDirectionNovaResponseBody() {}

  explicit DrivingDirectionNovaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
        DrivingDirectionNovaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DrivingDirectionNovaResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
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


  virtual ~DrivingDirectionNovaResponseBody() = default;
};
class DrivingDirectionNovaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DrivingDirectionNovaResponseBody> body{};

  DrivingDirectionNovaResponse() {}

  explicit DrivingDirectionNovaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DrivingDirectionNovaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DrivingDirectionNovaResponseBody>(model1);
      }
    }
  }


  virtual ~DrivingDirectionNovaResponse() = default;
};
class ElectrobikeDirectionNovaRequest : public Darabonba::Model {
public:
  shared_ptr<string> destinationLatitude{};
  shared_ptr<string> destinationLongitude{};
  shared_ptr<string> originLatitude{};
  shared_ptr<string> originLongitude{};

  ElectrobikeDirectionNovaRequest() {}

  explicit ElectrobikeDirectionNovaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationLatitude) {
      res["destinationLatitude"] = boost::any(*destinationLatitude);
    }
    if (destinationLongitude) {
      res["destinationLongitude"] = boost::any(*destinationLongitude);
    }
    if (originLatitude) {
      res["originLatitude"] = boost::any(*originLatitude);
    }
    if (originLongitude) {
      res["originLongitude"] = boost::any(*originLongitude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("destinationLatitude") != m.end() && !m["destinationLatitude"].empty()) {
      destinationLatitude = make_shared<string>(boost::any_cast<string>(m["destinationLatitude"]));
    }
    if (m.find("destinationLongitude") != m.end() && !m["destinationLongitude"].empty()) {
      destinationLongitude = make_shared<string>(boost::any_cast<string>(m["destinationLongitude"]));
    }
    if (m.find("originLatitude") != m.end() && !m["originLatitude"].empty()) {
      originLatitude = make_shared<string>(boost::any_cast<string>(m["originLatitude"]));
    }
    if (m.find("originLongitude") != m.end() && !m["originLongitude"].empty()) {
      originLongitude = make_shared<string>(boost::any_cast<string>(m["originLongitude"]));
    }
  }


  virtual ~ElectrobikeDirectionNovaRequest() = default;
};
class ElectrobikeDirectionNovaResponseBodyDataPathsCost : public Darabonba::Model {
public:
  shared_ptr<string> durationSecond{};
  shared_ptr<string> taxiFee{};
  shared_ptr<string> tollDistanceMeter{};
  shared_ptr<string> tollRoads{};
  shared_ptr<string> tolls{};
  shared_ptr<string> trafficLights{};
  shared_ptr<string> transitFee{};

  ElectrobikeDirectionNovaResponseBodyDataPathsCost() {}

  explicit ElectrobikeDirectionNovaResponseBodyDataPathsCost(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (taxiFee) {
      res["taxiFee"] = boost::any(*taxiFee);
    }
    if (tollDistanceMeter) {
      res["tollDistanceMeter"] = boost::any(*tollDistanceMeter);
    }
    if (tollRoads) {
      res["tollRoads"] = boost::any(*tollRoads);
    }
    if (tolls) {
      res["tolls"] = boost::any(*tolls);
    }
    if (trafficLights) {
      res["trafficLights"] = boost::any(*trafficLights);
    }
    if (transitFee) {
      res["transitFee"] = boost::any(*transitFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("taxiFee") != m.end() && !m["taxiFee"].empty()) {
      taxiFee = make_shared<string>(boost::any_cast<string>(m["taxiFee"]));
    }
    if (m.find("tollDistanceMeter") != m.end() && !m["tollDistanceMeter"].empty()) {
      tollDistanceMeter = make_shared<string>(boost::any_cast<string>(m["tollDistanceMeter"]));
    }
    if (m.find("tollRoads") != m.end() && !m["tollRoads"].empty()) {
      tollRoads = make_shared<string>(boost::any_cast<string>(m["tollRoads"]));
    }
    if (m.find("tolls") != m.end() && !m["tolls"].empty()) {
      tolls = make_shared<string>(boost::any_cast<string>(m["tolls"]));
    }
    if (m.find("trafficLights") != m.end() && !m["trafficLights"].empty()) {
      trafficLights = make_shared<string>(boost::any_cast<string>(m["trafficLights"]));
    }
    if (m.find("transitFee") != m.end() && !m["transitFee"].empty()) {
      transitFee = make_shared<string>(boost::any_cast<string>(m["transitFee"]));
    }
  }


  virtual ~ElectrobikeDirectionNovaResponseBodyDataPathsCost() = default;
};
class ElectrobikeDirectionNovaResponseBodyDataPathsStepsCost : public Darabonba::Model {
public:
  shared_ptr<string> durationSecond{};
  shared_ptr<string> taxiFee{};
  shared_ptr<string> tollDistanceMeter{};
  shared_ptr<string> tollRoads{};
  shared_ptr<string> tolls{};
  shared_ptr<string> trafficLights{};
  shared_ptr<string> transitFee{};

  ElectrobikeDirectionNovaResponseBodyDataPathsStepsCost() {}

  explicit ElectrobikeDirectionNovaResponseBodyDataPathsStepsCost(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (taxiFee) {
      res["taxiFee"] = boost::any(*taxiFee);
    }
    if (tollDistanceMeter) {
      res["tollDistanceMeter"] = boost::any(*tollDistanceMeter);
    }
    if (tollRoads) {
      res["tollRoads"] = boost::any(*tollRoads);
    }
    if (tolls) {
      res["tolls"] = boost::any(*tolls);
    }
    if (trafficLights) {
      res["trafficLights"] = boost::any(*trafficLights);
    }
    if (transitFee) {
      res["transitFee"] = boost::any(*transitFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("taxiFee") != m.end() && !m["taxiFee"].empty()) {
      taxiFee = make_shared<string>(boost::any_cast<string>(m["taxiFee"]));
    }
    if (m.find("tollDistanceMeter") != m.end() && !m["tollDistanceMeter"].empty()) {
      tollDistanceMeter = make_shared<string>(boost::any_cast<string>(m["tollDistanceMeter"]));
    }
    if (m.find("tollRoads") != m.end() && !m["tollRoads"].empty()) {
      tollRoads = make_shared<string>(boost::any_cast<string>(m["tollRoads"]));
    }
    if (m.find("tolls") != m.end() && !m["tolls"].empty()) {
      tolls = make_shared<string>(boost::any_cast<string>(m["tolls"]));
    }
    if (m.find("trafficLights") != m.end() && !m["trafficLights"].empty()) {
      trafficLights = make_shared<string>(boost::any_cast<string>(m["trafficLights"]));
    }
    if (m.find("transitFee") != m.end() && !m["transitFee"].empty()) {
      transitFee = make_shared<string>(boost::any_cast<string>(m["transitFee"]));
    }
  }


  virtual ~ElectrobikeDirectionNovaResponseBodyDataPathsStepsCost() = default;
};
class ElectrobikeDirectionNovaResponseBodyDataPathsSteps : public Darabonba::Model {
public:
  shared_ptr<ElectrobikeDirectionNovaResponseBodyDataPathsStepsCost> cost{};
  shared_ptr<string> instruction{};
  shared_ptr<string> orientation{};
  shared_ptr<string> polyline{};
  shared_ptr<string> roadName{};
  shared_ptr<string> stepDistanceMeter{};

  ElectrobikeDirectionNovaResponseBodyDataPathsSteps() {}

  explicit ElectrobikeDirectionNovaResponseBodyDataPathsSteps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = cost ? boost::any(cost->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instruction) {
      res["instruction"] = boost::any(*instruction);
    }
    if (orientation) {
      res["orientation"] = boost::any(*orientation);
    }
    if (polyline) {
      res["polyline"] = boost::any(*polyline);
    }
    if (roadName) {
      res["roadName"] = boost::any(*roadName);
    }
    if (stepDistanceMeter) {
      res["stepDistanceMeter"] = boost::any(*stepDistanceMeter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost"].type()) {
        ElectrobikeDirectionNovaResponseBodyDataPathsStepsCost model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost"]));
        cost = make_shared<ElectrobikeDirectionNovaResponseBodyDataPathsStepsCost>(model1);
      }
    }
    if (m.find("instruction") != m.end() && !m["instruction"].empty()) {
      instruction = make_shared<string>(boost::any_cast<string>(m["instruction"]));
    }
    if (m.find("orientation") != m.end() && !m["orientation"].empty()) {
      orientation = make_shared<string>(boost::any_cast<string>(m["orientation"]));
    }
    if (m.find("polyline") != m.end() && !m["polyline"].empty()) {
      polyline = make_shared<string>(boost::any_cast<string>(m["polyline"]));
    }
    if (m.find("roadName") != m.end() && !m["roadName"].empty()) {
      roadName = make_shared<string>(boost::any_cast<string>(m["roadName"]));
    }
    if (m.find("stepDistanceMeter") != m.end() && !m["stepDistanceMeter"].empty()) {
      stepDistanceMeter = make_shared<string>(boost::any_cast<string>(m["stepDistanceMeter"]));
    }
  }


  virtual ~ElectrobikeDirectionNovaResponseBodyDataPathsSteps() = default;
};
class ElectrobikeDirectionNovaResponseBodyDataPaths : public Darabonba::Model {
public:
  shared_ptr<ElectrobikeDirectionNovaResponseBodyDataPathsCost> cost{};
  shared_ptr<string> distanceMeter{};
  shared_ptr<string> durationSecond{};
  shared_ptr<string> restriction{};
  shared_ptr<vector<ElectrobikeDirectionNovaResponseBodyDataPathsSteps>> steps{};

  ElectrobikeDirectionNovaResponseBodyDataPaths() {}

  explicit ElectrobikeDirectionNovaResponseBodyDataPaths(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = cost ? boost::any(cost->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (distanceMeter) {
      res["distanceMeter"] = boost::any(*distanceMeter);
    }
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (restriction) {
      res["restriction"] = boost::any(*restriction);
    }
    if (steps) {
      vector<boost::any> temp1;
      for(auto item1:*steps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["steps"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost"].type()) {
        ElectrobikeDirectionNovaResponseBodyDataPathsCost model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost"]));
        cost = make_shared<ElectrobikeDirectionNovaResponseBodyDataPathsCost>(model1);
      }
    }
    if (m.find("distanceMeter") != m.end() && !m["distanceMeter"].empty()) {
      distanceMeter = make_shared<string>(boost::any_cast<string>(m["distanceMeter"]));
    }
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("restriction") != m.end() && !m["restriction"].empty()) {
      restriction = make_shared<string>(boost::any_cast<string>(m["restriction"]));
    }
    if (m.find("steps") != m.end() && !m["steps"].empty()) {
      if (typeid(vector<boost::any>) == m["steps"].type()) {
        vector<ElectrobikeDirectionNovaResponseBodyDataPathsSteps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["steps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ElectrobikeDirectionNovaResponseBodyDataPathsSteps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        steps = make_shared<vector<ElectrobikeDirectionNovaResponseBodyDataPathsSteps>>(expect1);
      }
    }
  }


  virtual ~ElectrobikeDirectionNovaResponseBodyDataPaths() = default;
};
class ElectrobikeDirectionNovaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> count{};
  shared_ptr<string> destinationLatitude{};
  shared_ptr<string> destinationLongitude{};
  shared_ptr<string> originLatitude{};
  shared_ptr<string> originLongitude{};
  shared_ptr<vector<ElectrobikeDirectionNovaResponseBodyDataPaths>> paths{};
  shared_ptr<string> taxiCost{};

  ElectrobikeDirectionNovaResponseBodyData() {}

  explicit ElectrobikeDirectionNovaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (destinationLatitude) {
      res["destinationLatitude"] = boost::any(*destinationLatitude);
    }
    if (destinationLongitude) {
      res["destinationLongitude"] = boost::any(*destinationLongitude);
    }
    if (originLatitude) {
      res["originLatitude"] = boost::any(*originLatitude);
    }
    if (originLongitude) {
      res["originLongitude"] = boost::any(*originLongitude);
    }
    if (paths) {
      vector<boost::any> temp1;
      for(auto item1:*paths){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["paths"] = boost::any(temp1);
    }
    if (taxiCost) {
      res["taxiCost"] = boost::any(*taxiCost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["count"]));
    }
    if (m.find("destinationLatitude") != m.end() && !m["destinationLatitude"].empty()) {
      destinationLatitude = make_shared<string>(boost::any_cast<string>(m["destinationLatitude"]));
    }
    if (m.find("destinationLongitude") != m.end() && !m["destinationLongitude"].empty()) {
      destinationLongitude = make_shared<string>(boost::any_cast<string>(m["destinationLongitude"]));
    }
    if (m.find("originLatitude") != m.end() && !m["originLatitude"].empty()) {
      originLatitude = make_shared<string>(boost::any_cast<string>(m["originLatitude"]));
    }
    if (m.find("originLongitude") != m.end() && !m["originLongitude"].empty()) {
      originLongitude = make_shared<string>(boost::any_cast<string>(m["originLongitude"]));
    }
    if (m.find("paths") != m.end() && !m["paths"].empty()) {
      if (typeid(vector<boost::any>) == m["paths"].type()) {
        vector<ElectrobikeDirectionNovaResponseBodyDataPaths> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["paths"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ElectrobikeDirectionNovaResponseBodyDataPaths model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paths = make_shared<vector<ElectrobikeDirectionNovaResponseBodyDataPaths>>(expect1);
      }
    }
    if (m.find("taxiCost") != m.end() && !m["taxiCost"].empty()) {
      taxiCost = make_shared<string>(boost::any_cast<string>(m["taxiCost"]));
    }
  }


  virtual ~ElectrobikeDirectionNovaResponseBodyData() = default;
};
class ElectrobikeDirectionNovaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ElectrobikeDirectionNovaResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ElectrobikeDirectionNovaResponseBody() {}

  explicit ElectrobikeDirectionNovaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
        ElectrobikeDirectionNovaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ElectrobikeDirectionNovaResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
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


  virtual ~ElectrobikeDirectionNovaResponseBody() = default;
};
class ElectrobikeDirectionNovaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ElectrobikeDirectionNovaResponseBody> body{};

  ElectrobikeDirectionNovaResponse() {}

  explicit ElectrobikeDirectionNovaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ElectrobikeDirectionNovaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ElectrobikeDirectionNovaResponseBody>(model1);
      }
    }
  }


  virtual ~ElectrobikeDirectionNovaResponse() = default;
};
class GeoCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> city{};

  GeoCodeRequest() {}

  explicit GeoCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["address"] = boost::any(*address);
    }
    if (city) {
      res["city"] = boost::any(*city);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("address") != m.end() && !m["address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["address"]));
    }
    if (m.find("city") != m.end() && !m["city"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["city"]));
    }
  }


  virtual ~GeoCodeRequest() = default;
};
class GeoCodeResponseBodyDataBuilding : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  GeoCodeResponseBodyDataBuilding() {}

  explicit GeoCodeResponseBodyDataBuilding(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GeoCodeResponseBodyDataBuilding() = default;
};
class GeoCodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GeoCodeResponseBodyDataBuilding> building{};
  shared_ptr<string> city{};
  shared_ptr<string> cityCode{};
  shared_ptr<string> district{};
  shared_ptr<string> districtCode{};
  shared_ptr<string> latitude{};
  shared_ptr<string> level{};
  shared_ptr<string> longitude{};
  shared_ptr<string> number{};
  shared_ptr<string> province{};
  shared_ptr<string> street{};

  GeoCodeResponseBodyData() {}

  explicit GeoCodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (building) {
      res["building"] = building ? boost::any(building->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (city) {
      res["city"] = boost::any(*city);
    }
    if (cityCode) {
      res["cityCode"] = boost::any(*cityCode);
    }
    if (district) {
      res["district"] = boost::any(*district);
    }
    if (districtCode) {
      res["districtCode"] = boost::any(*districtCode);
    }
    if (latitude) {
      res["latitude"] = boost::any(*latitude);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (longitude) {
      res["longitude"] = boost::any(*longitude);
    }
    if (number) {
      res["number"] = boost::any(*number);
    }
    if (province) {
      res["province"] = boost::any(*province);
    }
    if (street) {
      res["street"] = boost::any(*street);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("building") != m.end() && !m["building"].empty()) {
      if (typeid(map<string, boost::any>) == m["building"].type()) {
        GeoCodeResponseBodyDataBuilding model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["building"]));
        building = make_shared<GeoCodeResponseBodyDataBuilding>(model1);
      }
    }
    if (m.find("city") != m.end() && !m["city"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["city"]));
    }
    if (m.find("cityCode") != m.end() && !m["cityCode"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["cityCode"]));
    }
    if (m.find("district") != m.end() && !m["district"].empty()) {
      district = make_shared<string>(boost::any_cast<string>(m["district"]));
    }
    if (m.find("districtCode") != m.end() && !m["districtCode"].empty()) {
      districtCode = make_shared<string>(boost::any_cast<string>(m["districtCode"]));
    }
    if (m.find("latitude") != m.end() && !m["latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["latitude"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("longitude") != m.end() && !m["longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["longitude"]));
    }
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["number"]));
    }
    if (m.find("province") != m.end() && !m["province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["province"]));
    }
    if (m.find("street") != m.end() && !m["street"].empty()) {
      street = make_shared<string>(boost::any_cast<string>(m["street"]));
    }
  }


  virtual ~GeoCodeResponseBodyData() = default;
};
class GeoCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GeoCodeResponseBodyData>> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GeoCodeResponseBody() {}

  explicit GeoCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
        vector<GeoCodeResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GeoCodeResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GeoCodeResponseBodyData>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
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


  virtual ~GeoCodeResponseBody() = default;
};
class GeoCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GeoCodeResponseBody> body{};

  GeoCodeResponse() {}

  explicit GeoCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GeoCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GeoCodeResponseBody>(model1);
      }
    }
  }


  virtual ~GeoCodeResponse() = default;
};
class NearbySearchNovaRequest : public Darabonba::Model {
public:
  shared_ptr<bool> cityLimit{};
  shared_ptr<string> keywords{};
  shared_ptr<string> latitude{};
  shared_ptr<string> longitude{};
  shared_ptr<long> page{};
  shared_ptr<long> radius{};
  shared_ptr<long> size{};
  shared_ptr<string> sortRule{};
  shared_ptr<string> types{};

  NearbySearchNovaRequest() {}

  explicit NearbySearchNovaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityLimit) {
      res["cityLimit"] = boost::any(*cityLimit);
    }
    if (keywords) {
      res["keywords"] = boost::any(*keywords);
    }
    if (latitude) {
      res["latitude"] = boost::any(*latitude);
    }
    if (longitude) {
      res["longitude"] = boost::any(*longitude);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (radius) {
      res["radius"] = boost::any(*radius);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (sortRule) {
      res["sortRule"] = boost::any(*sortRule);
    }
    if (types) {
      res["types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cityLimit") != m.end() && !m["cityLimit"].empty()) {
      cityLimit = make_shared<bool>(boost::any_cast<bool>(m["cityLimit"]));
    }
    if (m.find("keywords") != m.end() && !m["keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["keywords"]));
    }
    if (m.find("latitude") != m.end() && !m["latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["latitude"]));
    }
    if (m.find("longitude") != m.end() && !m["longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["longitude"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("radius") != m.end() && !m["radius"].empty()) {
      radius = make_shared<long>(boost::any_cast<long>(m["radius"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("sortRule") != m.end() && !m["sortRule"].empty()) {
      sortRule = make_shared<string>(boost::any_cast<string>(m["sortRule"]));
    }
    if (m.find("types") != m.end() && !m["types"].empty()) {
      types = make_shared<string>(boost::any_cast<string>(m["types"]));
    }
  }


  virtual ~NearbySearchNovaRequest() = default;
};
class NearbySearchNovaResponseBodyDataImages : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  NearbySearchNovaResponseBodyDataImages() {}

  explicit NearbySearchNovaResponseBodyDataImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~NearbySearchNovaResponseBodyDataImages() = default;
};
class NearbySearchNovaResponseBodyDataMetadata : public Darabonba::Model {
public:
  shared_ptr<string> averageSpend{};
  shared_ptr<string> businessArea{};
  shared_ptr<string> dailyOpeningHours{};
  shared_ptr<string> mainTag{};
  shared_ptr<string> phone{};
  shared_ptr<string> score{};
  shared_ptr<string> tag{};
  shared_ptr<string> weeklyOpeningDays{};

  NearbySearchNovaResponseBodyDataMetadata() {}

  explicit NearbySearchNovaResponseBodyDataMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (averageSpend) {
      res["averageSpend"] = boost::any(*averageSpend);
    }
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
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (weeklyOpeningDays) {
      res["weeklyOpeningDays"] = boost::any(*weeklyOpeningDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("averageSpend") != m.end() && !m["averageSpend"].empty()) {
      averageSpend = make_shared<string>(boost::any_cast<string>(m["averageSpend"]));
    }
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
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("weeklyOpeningDays") != m.end() && !m["weeklyOpeningDays"].empty()) {
      weeklyOpeningDays = make_shared<string>(boost::any_cast<string>(m["weeklyOpeningDays"]));
    }
  }


  virtual ~NearbySearchNovaResponseBodyDataMetadata() = default;
};
class NearbySearchNovaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> cityCode{};
  shared_ptr<string> cityName{};
  shared_ptr<string> distanceMeter{};
  shared_ptr<string> districtCode{};
  shared_ptr<string> districtName{};
  shared_ptr<string> id{};
  shared_ptr<vector<NearbySearchNovaResponseBodyDataImages>> images{};
  shared_ptr<string> latitude{};
  shared_ptr<string> longitude{};
  shared_ptr<NearbySearchNovaResponseBodyDataMetadata> metadata{};
  shared_ptr<string> name{};
  shared_ptr<string> provinceCode{};
  shared_ptr<string> provinceName{};
  shared_ptr<string> typeCode{};
  shared_ptr<string> types{};

  NearbySearchNovaResponseBodyData() {}

  explicit NearbySearchNovaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (distanceMeter) {
      res["distanceMeter"] = boost::any(*distanceMeter);
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
    if (m.find("distanceMeter") != m.end() && !m["distanceMeter"].empty()) {
      distanceMeter = make_shared<string>(boost::any_cast<string>(m["distanceMeter"]));
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
        vector<NearbySearchNovaResponseBodyDataImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NearbySearchNovaResponseBodyDataImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<NearbySearchNovaResponseBodyDataImages>>(expect1);
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
        NearbySearchNovaResponseBodyDataMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["metadata"]));
        metadata = make_shared<NearbySearchNovaResponseBodyDataMetadata>(model1);
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


  virtual ~NearbySearchNovaResponseBodyData() = default;
};
class NearbySearchNovaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<NearbySearchNovaResponseBodyData>> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  NearbySearchNovaResponseBody() {}

  explicit NearbySearchNovaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
        vector<NearbySearchNovaResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NearbySearchNovaResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<NearbySearchNovaResponseBodyData>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
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


  virtual ~NearbySearchNovaResponseBody() = default;
};
class NearbySearchNovaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<NearbySearchNovaResponseBody> body{};

  NearbySearchNovaResponse() {}

  explicit NearbySearchNovaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        NearbySearchNovaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<NearbySearchNovaResponseBody>(model1);
      }
    }
  }


  virtual ~NearbySearchNovaResponse() = default;
};
class PlaceSearchNovaRequest : public Darabonba::Model {
public:
  shared_ptr<bool> cityLimit{};
  shared_ptr<string> keywords{};
  shared_ptr<long> page{};
  shared_ptr<string> region{};
  shared_ptr<long> size{};
  shared_ptr<string> types{};

  PlaceSearchNovaRequest() {}

  explicit PlaceSearchNovaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityLimit) {
      res["cityLimit"] = boost::any(*cityLimit);
    }
    if (keywords) {
      res["keywords"] = boost::any(*keywords);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (types) {
      res["types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cityLimit") != m.end() && !m["cityLimit"].empty()) {
      cityLimit = make_shared<bool>(boost::any_cast<bool>(m["cityLimit"]));
    }
    if (m.find("keywords") != m.end() && !m["keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["keywords"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("types") != m.end() && !m["types"].empty()) {
      types = make_shared<string>(boost::any_cast<string>(m["types"]));
    }
  }


  virtual ~PlaceSearchNovaRequest() = default;
};
class PlaceSearchNovaResponseBodyDataImages : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  PlaceSearchNovaResponseBodyDataImages() {}

  explicit PlaceSearchNovaResponseBodyDataImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PlaceSearchNovaResponseBodyDataImages() = default;
};
class PlaceSearchNovaResponseBodyDataMetadata : public Darabonba::Model {
public:
  shared_ptr<string> averageSpend{};
  shared_ptr<string> businessArea{};
  shared_ptr<string> dailyOpeningHours{};
  shared_ptr<string> mainTag{};
  shared_ptr<string> phone{};
  shared_ptr<string> score{};
  shared_ptr<string> tag{};
  shared_ptr<string> weeklyOpeningDays{};

  PlaceSearchNovaResponseBodyDataMetadata() {}

  explicit PlaceSearchNovaResponseBodyDataMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (averageSpend) {
      res["averageSpend"] = boost::any(*averageSpend);
    }
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
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (weeklyOpeningDays) {
      res["weeklyOpeningDays"] = boost::any(*weeklyOpeningDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("averageSpend") != m.end() && !m["averageSpend"].empty()) {
      averageSpend = make_shared<string>(boost::any_cast<string>(m["averageSpend"]));
    }
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
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("weeklyOpeningDays") != m.end() && !m["weeklyOpeningDays"].empty()) {
      weeklyOpeningDays = make_shared<string>(boost::any_cast<string>(m["weeklyOpeningDays"]));
    }
  }


  virtual ~PlaceSearchNovaResponseBodyDataMetadata() = default;
};
class PlaceSearchNovaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> cityCode{};
  shared_ptr<string> cityName{};
  shared_ptr<string> distanceMeter{};
  shared_ptr<string> districtCode{};
  shared_ptr<string> districtName{};
  shared_ptr<string> id{};
  shared_ptr<vector<PlaceSearchNovaResponseBodyDataImages>> images{};
  shared_ptr<string> latitude{};
  shared_ptr<string> longitude{};
  shared_ptr<PlaceSearchNovaResponseBodyDataMetadata> metadata{};
  shared_ptr<string> name{};
  shared_ptr<string> provinceCode{};
  shared_ptr<string> provinceName{};
  shared_ptr<string> typeCode{};
  shared_ptr<string> types{};

  PlaceSearchNovaResponseBodyData() {}

  explicit PlaceSearchNovaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (distanceMeter) {
      res["distanceMeter"] = boost::any(*distanceMeter);
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
    if (m.find("distanceMeter") != m.end() && !m["distanceMeter"].empty()) {
      distanceMeter = make_shared<string>(boost::any_cast<string>(m["distanceMeter"]));
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
        vector<PlaceSearchNovaResponseBodyDataImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PlaceSearchNovaResponseBodyDataImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<PlaceSearchNovaResponseBodyDataImages>>(expect1);
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
        PlaceSearchNovaResponseBodyDataMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["metadata"]));
        metadata = make_shared<PlaceSearchNovaResponseBodyDataMetadata>(model1);
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


  virtual ~PlaceSearchNovaResponseBodyData() = default;
};
class PlaceSearchNovaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<PlaceSearchNovaResponseBodyData>> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PlaceSearchNovaResponseBody() {}

  explicit PlaceSearchNovaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
        vector<PlaceSearchNovaResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PlaceSearchNovaResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PlaceSearchNovaResponseBodyData>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
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


  virtual ~PlaceSearchNovaResponseBody() = default;
};
class PlaceSearchNovaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PlaceSearchNovaResponseBody> body{};

  PlaceSearchNovaResponse() {}

  explicit PlaceSearchNovaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PlaceSearchNovaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PlaceSearchNovaResponseBody>(model1);
      }
    }
  }


  virtual ~PlaceSearchNovaResponse() = default;
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
class QueryAttractionsNlRequest : public Darabonba::Model {
public:
  shared_ptr<AgentBaseQuery> body{};

  QueryAttractionsNlRequest() {}

  explicit QueryAttractionsNlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryAttractionsNlRequest() = default;
};
class QueryAttractionsNlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryResult> body{};

  QueryAttractionsNlResponse() {}

  explicit QueryAttractionsNlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryAttractionsNlResponse() = default;
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
class QueryHotelsNlRequest : public Darabonba::Model {
public:
  shared_ptr<AgentBaseQuery> body{};

  QueryHotelsNlRequest() {}

  explicit QueryHotelsNlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryHotelsNlRequest() = default;
};
class QueryHotelsNlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryResult> body{};

  QueryHotelsNlResponse() {}

  explicit QueryHotelsNlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryHotelsNlResponse() = default;
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
class QueryRestaurantsNlRequest : public Darabonba::Model {
public:
  shared_ptr<AgentBaseQuery> body{};

  QueryRestaurantsNlRequest() {}

  explicit QueryRestaurantsNlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryRestaurantsNlRequest() = default;
};
class QueryRestaurantsNlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryResult> body{};

  QueryRestaurantsNlResponse() {}

  explicit QueryRestaurantsNlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryRestaurantsNlResponse() = default;
};
class RgeoCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> latitude{};
  shared_ptr<string> longitude{};

  RgeoCodeRequest() {}

  explicit RgeoCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (latitude) {
      res["latitude"] = boost::any(*latitude);
    }
    if (longitude) {
      res["longitude"] = boost::any(*longitude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("latitude") != m.end() && !m["latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["latitude"]));
    }
    if (m.find("longitude") != m.end() && !m["longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["longitude"]));
    }
  }


  virtual ~RgeoCodeRequest() = default;
};
class RgeoCodeResponseBodyDataBuilding : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  RgeoCodeResponseBodyDataBuilding() {}

  explicit RgeoCodeResponseBodyDataBuilding(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~RgeoCodeResponseBodyDataBuilding() = default;
};
class RgeoCodeResponseBodyDataBusinessAreas : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> latitude{};
  shared_ptr<string> longitude{};
  shared_ptr<string> name{};

  RgeoCodeResponseBodyDataBusinessAreas() {}

  explicit RgeoCodeResponseBodyDataBusinessAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (latitude) {
      res["latitude"] = boost::any(*latitude);
    }
    if (longitude) {
      res["longitude"] = boost::any(*longitude);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("latitude") != m.end() && !m["latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["latitude"]));
    }
    if (m.find("longitude") != m.end() && !m["longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["longitude"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~RgeoCodeResponseBodyDataBusinessAreas() = default;
};
class RgeoCodeResponseBodyDataNeighborhood : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  RgeoCodeResponseBodyDataNeighborhood() {}

  explicit RgeoCodeResponseBodyDataNeighborhood(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~RgeoCodeResponseBodyDataNeighborhood() = default;
};
class RgeoCodeResponseBodyDataStreetNumber : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<string> distanceMeter{};
  shared_ptr<string> latitude{};
  shared_ptr<string> longitude{};
  shared_ptr<string> number{};
  shared_ptr<string> street{};

  RgeoCodeResponseBodyDataStreetNumber() {}

  explicit RgeoCodeResponseBodyDataStreetNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["direction"] = boost::any(*direction);
    }
    if (distanceMeter) {
      res["distanceMeter"] = boost::any(*distanceMeter);
    }
    if (latitude) {
      res["latitude"] = boost::any(*latitude);
    }
    if (longitude) {
      res["longitude"] = boost::any(*longitude);
    }
    if (number) {
      res["number"] = boost::any(*number);
    }
    if (street) {
      res["street"] = boost::any(*street);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("direction") != m.end() && !m["direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["direction"]));
    }
    if (m.find("distanceMeter") != m.end() && !m["distanceMeter"].empty()) {
      distanceMeter = make_shared<string>(boost::any_cast<string>(m["distanceMeter"]));
    }
    if (m.find("latitude") != m.end() && !m["latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["latitude"]));
    }
    if (m.find("longitude") != m.end() && !m["longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["longitude"]));
    }
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["number"]));
    }
    if (m.find("street") != m.end() && !m["street"].empty()) {
      street = make_shared<string>(boost::any_cast<string>(m["street"]));
    }
  }


  virtual ~RgeoCodeResponseBodyDataStreetNumber() = default;
};
class RgeoCodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RgeoCodeResponseBodyDataBuilding> building{};
  shared_ptr<vector<RgeoCodeResponseBodyDataBusinessAreas>> businessAreas{};
  shared_ptr<string> city{};
  shared_ptr<string> cityCode{};
  shared_ptr<string> country{};
  shared_ptr<string> district{};
  shared_ptr<string> districtCode{};
  shared_ptr<string> formattedAddress{};
  shared_ptr<RgeoCodeResponseBodyDataNeighborhood> neighborhood{};
  shared_ptr<string> province{};
  shared_ptr<RgeoCodeResponseBodyDataStreetNumber> streetNumber{};
  shared_ptr<string> townCode{};
  shared_ptr<string> townShip{};

  RgeoCodeResponseBodyData() {}

  explicit RgeoCodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (building) {
      res["building"] = building ? boost::any(building->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (businessAreas) {
      vector<boost::any> temp1;
      for(auto item1:*businessAreas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["businessAreas"] = boost::any(temp1);
    }
    if (city) {
      res["city"] = boost::any(*city);
    }
    if (cityCode) {
      res["cityCode"] = boost::any(*cityCode);
    }
    if (country) {
      res["country"] = boost::any(*country);
    }
    if (district) {
      res["district"] = boost::any(*district);
    }
    if (districtCode) {
      res["districtCode"] = boost::any(*districtCode);
    }
    if (formattedAddress) {
      res["formattedAddress"] = boost::any(*formattedAddress);
    }
    if (neighborhood) {
      res["neighborhood"] = neighborhood ? boost::any(neighborhood->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (province) {
      res["province"] = boost::any(*province);
    }
    if (streetNumber) {
      res["streetNumber"] = streetNumber ? boost::any(streetNumber->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (townCode) {
      res["townCode"] = boost::any(*townCode);
    }
    if (townShip) {
      res["townShip"] = boost::any(*townShip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("building") != m.end() && !m["building"].empty()) {
      if (typeid(map<string, boost::any>) == m["building"].type()) {
        RgeoCodeResponseBodyDataBuilding model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["building"]));
        building = make_shared<RgeoCodeResponseBodyDataBuilding>(model1);
      }
    }
    if (m.find("businessAreas") != m.end() && !m["businessAreas"].empty()) {
      if (typeid(vector<boost::any>) == m["businessAreas"].type()) {
        vector<RgeoCodeResponseBodyDataBusinessAreas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["businessAreas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RgeoCodeResponseBodyDataBusinessAreas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        businessAreas = make_shared<vector<RgeoCodeResponseBodyDataBusinessAreas>>(expect1);
      }
    }
    if (m.find("city") != m.end() && !m["city"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["city"]));
    }
    if (m.find("cityCode") != m.end() && !m["cityCode"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["cityCode"]));
    }
    if (m.find("country") != m.end() && !m["country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["country"]));
    }
    if (m.find("district") != m.end() && !m["district"].empty()) {
      district = make_shared<string>(boost::any_cast<string>(m["district"]));
    }
    if (m.find("districtCode") != m.end() && !m["districtCode"].empty()) {
      districtCode = make_shared<string>(boost::any_cast<string>(m["districtCode"]));
    }
    if (m.find("formattedAddress") != m.end() && !m["formattedAddress"].empty()) {
      formattedAddress = make_shared<string>(boost::any_cast<string>(m["formattedAddress"]));
    }
    if (m.find("neighborhood") != m.end() && !m["neighborhood"].empty()) {
      if (typeid(map<string, boost::any>) == m["neighborhood"].type()) {
        RgeoCodeResponseBodyDataNeighborhood model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["neighborhood"]));
        neighborhood = make_shared<RgeoCodeResponseBodyDataNeighborhood>(model1);
      }
    }
    if (m.find("province") != m.end() && !m["province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["province"]));
    }
    if (m.find("streetNumber") != m.end() && !m["streetNumber"].empty()) {
      if (typeid(map<string, boost::any>) == m["streetNumber"].type()) {
        RgeoCodeResponseBodyDataStreetNumber model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["streetNumber"]));
        streetNumber = make_shared<RgeoCodeResponseBodyDataStreetNumber>(model1);
      }
    }
    if (m.find("townCode") != m.end() && !m["townCode"].empty()) {
      townCode = make_shared<string>(boost::any_cast<string>(m["townCode"]));
    }
    if (m.find("townShip") != m.end() && !m["townShip"].empty()) {
      townShip = make_shared<string>(boost::any_cast<string>(m["townShip"]));
    }
  }


  virtual ~RgeoCodeResponseBodyData() = default;
};
class RgeoCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RgeoCodeResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RgeoCodeResponseBody() {}

  explicit RgeoCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
        RgeoCodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RgeoCodeResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
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


  virtual ~RgeoCodeResponseBody() = default;
};
class RgeoCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RgeoCodeResponseBody> body{};

  RgeoCodeResponse() {}

  explicit RgeoCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RgeoCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RgeoCodeResponseBody>(model1);
      }
    }
  }


  virtual ~RgeoCodeResponse() = default;
};
class TransitIntegratedDirectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> destinationCity{};
  shared_ptr<string> destinationLatitude{};
  shared_ptr<string> destinationLongitude{};
  shared_ptr<string> originCity{};
  shared_ptr<string> originLatitude{};
  shared_ptr<string> originLongitude{};

  TransitIntegratedDirectionRequest() {}

  explicit TransitIntegratedDirectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCity) {
      res["destinationCity"] = boost::any(*destinationCity);
    }
    if (destinationLatitude) {
      res["destinationLatitude"] = boost::any(*destinationLatitude);
    }
    if (destinationLongitude) {
      res["destinationLongitude"] = boost::any(*destinationLongitude);
    }
    if (originCity) {
      res["originCity"] = boost::any(*originCity);
    }
    if (originLatitude) {
      res["originLatitude"] = boost::any(*originLatitude);
    }
    if (originLongitude) {
      res["originLongitude"] = boost::any(*originLongitude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("destinationCity") != m.end() && !m["destinationCity"].empty()) {
      destinationCity = make_shared<string>(boost::any_cast<string>(m["destinationCity"]));
    }
    if (m.find("destinationLatitude") != m.end() && !m["destinationLatitude"].empty()) {
      destinationLatitude = make_shared<string>(boost::any_cast<string>(m["destinationLatitude"]));
    }
    if (m.find("destinationLongitude") != m.end() && !m["destinationLongitude"].empty()) {
      destinationLongitude = make_shared<string>(boost::any_cast<string>(m["destinationLongitude"]));
    }
    if (m.find("originCity") != m.end() && !m["originCity"].empty()) {
      originCity = make_shared<string>(boost::any_cast<string>(m["originCity"]));
    }
    if (m.find("originLatitude") != m.end() && !m["originLatitude"].empty()) {
      originLatitude = make_shared<string>(boost::any_cast<string>(m["originLatitude"]));
    }
    if (m.find("originLongitude") != m.end() && !m["originLongitude"].empty()) {
      originLongitude = make_shared<string>(boost::any_cast<string>(m["originLongitude"]));
    }
  }


  virtual ~TransitIntegratedDirectionRequest() = default;
};
class TransitIntegratedDirectionResponseBodyDataCost : public Darabonba::Model {
public:
  shared_ptr<string> durationSecond{};
  shared_ptr<string> taxiFee{};
  shared_ptr<string> tollDistanceMeter{};
  shared_ptr<string> tollRoads{};
  shared_ptr<string> tolls{};
  shared_ptr<string> trafficLights{};
  shared_ptr<string> transitFee{};

  TransitIntegratedDirectionResponseBodyDataCost() {}

  explicit TransitIntegratedDirectionResponseBodyDataCost(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (taxiFee) {
      res["taxiFee"] = boost::any(*taxiFee);
    }
    if (tollDistanceMeter) {
      res["tollDistanceMeter"] = boost::any(*tollDistanceMeter);
    }
    if (tollRoads) {
      res["tollRoads"] = boost::any(*tollRoads);
    }
    if (tolls) {
      res["tolls"] = boost::any(*tolls);
    }
    if (trafficLights) {
      res["trafficLights"] = boost::any(*trafficLights);
    }
    if (transitFee) {
      res["transitFee"] = boost::any(*transitFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("taxiFee") != m.end() && !m["taxiFee"].empty()) {
      taxiFee = make_shared<string>(boost::any_cast<string>(m["taxiFee"]));
    }
    if (m.find("tollDistanceMeter") != m.end() && !m["tollDistanceMeter"].empty()) {
      tollDistanceMeter = make_shared<string>(boost::any_cast<string>(m["tollDistanceMeter"]));
    }
    if (m.find("tollRoads") != m.end() && !m["tollRoads"].empty()) {
      tollRoads = make_shared<string>(boost::any_cast<string>(m["tollRoads"]));
    }
    if (m.find("tolls") != m.end() && !m["tolls"].empty()) {
      tolls = make_shared<string>(boost::any_cast<string>(m["tolls"]));
    }
    if (m.find("trafficLights") != m.end() && !m["trafficLights"].empty()) {
      trafficLights = make_shared<string>(boost::any_cast<string>(m["trafficLights"]));
    }
    if (m.find("transitFee") != m.end() && !m["transitFee"].empty()) {
      transitFee = make_shared<string>(boost::any_cast<string>(m["transitFee"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataCost() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsCost : public Darabonba::Model {
public:
  shared_ptr<string> durationSecond{};
  shared_ptr<string> taxiFee{};
  shared_ptr<string> tollDistanceMeter{};
  shared_ptr<string> tollRoads{};
  shared_ptr<string> tolls{};
  shared_ptr<string> trafficLights{};
  shared_ptr<string> transitFee{};

  TransitIntegratedDirectionResponseBodyDataPathsCost() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsCost(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (taxiFee) {
      res["taxiFee"] = boost::any(*taxiFee);
    }
    if (tollDistanceMeter) {
      res["tollDistanceMeter"] = boost::any(*tollDistanceMeter);
    }
    if (tollRoads) {
      res["tollRoads"] = boost::any(*tollRoads);
    }
    if (tolls) {
      res["tolls"] = boost::any(*tolls);
    }
    if (trafficLights) {
      res["trafficLights"] = boost::any(*trafficLights);
    }
    if (transitFee) {
      res["transitFee"] = boost::any(*transitFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("taxiFee") != m.end() && !m["taxiFee"].empty()) {
      taxiFee = make_shared<string>(boost::any_cast<string>(m["taxiFee"]));
    }
    if (m.find("tollDistanceMeter") != m.end() && !m["tollDistanceMeter"].empty()) {
      tollDistanceMeter = make_shared<string>(boost::any_cast<string>(m["tollDistanceMeter"]));
    }
    if (m.find("tollRoads") != m.end() && !m["tollRoads"].empty()) {
      tollRoads = make_shared<string>(boost::any_cast<string>(m["tollRoads"]));
    }
    if (m.find("tolls") != m.end() && !m["tolls"].empty()) {
      tolls = make_shared<string>(boost::any_cast<string>(m["tolls"]));
    }
    if (m.find("trafficLights") != m.end() && !m["trafficLights"].empty()) {
      trafficLights = make_shared<string>(boost::any_cast<string>(m["trafficLights"]));
    }
    if (m.find("transitFee") != m.end() && !m["transitFee"].empty()) {
      transitFee = make_shared<string>(boost::any_cast<string>(m["transitFee"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsCost() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesArrivalStopExit : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesArrivalStopExit() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesArrivalStopExit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesArrivalStopExit() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesArrivalStop : public Darabonba::Model {
public:
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesArrivalStopExit> exit{};
  shared_ptr<string> id{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesArrivalStop() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesArrivalStop(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exit) {
      res["exit"] = exit ? boost::any(exit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("exit") != m.end() && !m["exit"].empty()) {
      if (typeid(map<string, boost::any>) == m["exit"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesArrivalStopExit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["exit"]));
        exit = make_shared<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesArrivalStopExit>(model1);
      }
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesArrivalStop() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesCost : public Darabonba::Model {
public:
  shared_ptr<string> durationSecond{};
  shared_ptr<string> taxiFee{};
  shared_ptr<string> tollDistanceMeter{};
  shared_ptr<string> tollRoads{};
  shared_ptr<string> tolls{};
  shared_ptr<string> trafficLights{};
  shared_ptr<string> transitFee{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesCost() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesCost(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (taxiFee) {
      res["taxiFee"] = boost::any(*taxiFee);
    }
    if (tollDistanceMeter) {
      res["tollDistanceMeter"] = boost::any(*tollDistanceMeter);
    }
    if (tollRoads) {
      res["tollRoads"] = boost::any(*tollRoads);
    }
    if (tolls) {
      res["tolls"] = boost::any(*tolls);
    }
    if (trafficLights) {
      res["trafficLights"] = boost::any(*trafficLights);
    }
    if (transitFee) {
      res["transitFee"] = boost::any(*transitFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("taxiFee") != m.end() && !m["taxiFee"].empty()) {
      taxiFee = make_shared<string>(boost::any_cast<string>(m["taxiFee"]));
    }
    if (m.find("tollDistanceMeter") != m.end() && !m["tollDistanceMeter"].empty()) {
      tollDistanceMeter = make_shared<string>(boost::any_cast<string>(m["tollDistanceMeter"]));
    }
    if (m.find("tollRoads") != m.end() && !m["tollRoads"].empty()) {
      tollRoads = make_shared<string>(boost::any_cast<string>(m["tollRoads"]));
    }
    if (m.find("tolls") != m.end() && !m["tolls"].empty()) {
      tolls = make_shared<string>(boost::any_cast<string>(m["tolls"]));
    }
    if (m.find("trafficLights") != m.end() && !m["trafficLights"].empty()) {
      trafficLights = make_shared<string>(boost::any_cast<string>(m["trafficLights"]));
    }
    if (m.find("transitFee") != m.end() && !m["transitFee"].empty()) {
      transitFee = make_shared<string>(boost::any_cast<string>(m["transitFee"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesCost() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesDepartureStopEntrance : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesDepartureStopEntrance() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesDepartureStopEntrance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesDepartureStopEntrance() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesDepartureStop : public Darabonba::Model {
public:
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesDepartureStopEntrance> entrance{};
  shared_ptr<string> id{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesDepartureStop() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesDepartureStop(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entrance) {
      res["entrance"] = entrance ? boost::any(entrance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("entrance") != m.end() && !m["entrance"].empty()) {
      if (typeid(map<string, boost::any>) == m["entrance"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesDepartureStopEntrance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["entrance"]));
        entrance = make_shared<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesDepartureStopEntrance>(model1);
      }
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesDepartureStop() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesPolyline : public Darabonba::Model {
public:
  shared_ptr<string> polyline{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesPolyline() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesPolyline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (polyline) {
      res["polyline"] = boost::any(*polyline);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("polyline") != m.end() && !m["polyline"].empty()) {
      polyline = make_shared<string>(boost::any_cast<string>(m["polyline"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesPolyline() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesViaStops : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesViaStops() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesViaStops(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesViaStops() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslines : public Darabonba::Model {
public:
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesArrivalStop> arrivalStop{};
  shared_ptr<string> busTimeTips{};
  shared_ptr<string> bustimetag{};
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesCost> cost{};
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesDepartureStop> departureStop{};
  shared_ptr<string> distanceMeter{};
  shared_ptr<string> endTime{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesPolyline> polyline{};
  shared_ptr<string> startTime{};
  shared_ptr<string> type{};
  shared_ptr<string> viaNum{};
  shared_ptr<vector<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesViaStops>> viaStops{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslines() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalStop) {
      res["arrivalStop"] = arrivalStop ? boost::any(arrivalStop->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (busTimeTips) {
      res["busTimeTips"] = boost::any(*busTimeTips);
    }
    if (bustimetag) {
      res["bustimetag"] = boost::any(*bustimetag);
    }
    if (cost) {
      res["cost"] = cost ? boost::any(cost->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (departureStop) {
      res["departureStop"] = departureStop ? boost::any(departureStop->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (distanceMeter) {
      res["distanceMeter"] = boost::any(*distanceMeter);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (polyline) {
      res["polyline"] = polyline ? boost::any(polyline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (viaNum) {
      res["viaNum"] = boost::any(*viaNum);
    }
    if (viaStops) {
      vector<boost::any> temp1;
      for(auto item1:*viaStops){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["viaStops"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrivalStop") != m.end() && !m["arrivalStop"].empty()) {
      if (typeid(map<string, boost::any>) == m["arrivalStop"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesArrivalStop model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["arrivalStop"]));
        arrivalStop = make_shared<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesArrivalStop>(model1);
      }
    }
    if (m.find("busTimeTips") != m.end() && !m["busTimeTips"].empty()) {
      busTimeTips = make_shared<string>(boost::any_cast<string>(m["busTimeTips"]));
    }
    if (m.find("bustimetag") != m.end() && !m["bustimetag"].empty()) {
      bustimetag = make_shared<string>(boost::any_cast<string>(m["bustimetag"]));
    }
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesCost model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost"]));
        cost = make_shared<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesCost>(model1);
      }
    }
    if (m.find("departureStop") != m.end() && !m["departureStop"].empty()) {
      if (typeid(map<string, boost::any>) == m["departureStop"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesDepartureStop model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["departureStop"]));
        departureStop = make_shared<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesDepartureStop>(model1);
      }
    }
    if (m.find("distanceMeter") != m.end() && !m["distanceMeter"].empty()) {
      distanceMeter = make_shared<string>(boost::any_cast<string>(m["distanceMeter"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("polyline") != m.end() && !m["polyline"].empty()) {
      if (typeid(map<string, boost::any>) == m["polyline"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesPolyline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["polyline"]));
        polyline = make_shared<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesPolyline>(model1);
      }
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("viaNum") != m.end() && !m["viaNum"].empty()) {
      viaNum = make_shared<string>(boost::any_cast<string>(m["viaNum"]));
    }
    if (m.find("viaStops") != m.end() && !m["viaStops"].empty()) {
      if (typeid(vector<boost::any>) == m["viaStops"].type()) {
        vector<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesViaStops> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["viaStops"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesViaStops model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        viaStops = make_shared<vector<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslinesViaStops>>(expect1);
      }
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslines() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsBus : public Darabonba::Model {
public:
  shared_ptr<vector<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslines>> buslines{};
  shared_ptr<string> index{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsBus() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsBus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buslines) {
      vector<boost::any> temp1;
      for(auto item1:*buslines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["buslines"] = boost::any(temp1);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buslines") != m.end() && !m["buslines"].empty()) {
      if (typeid(vector<boost::any>) == m["buslines"].type()) {
        vector<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["buslines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buslines = make_shared<vector<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBusBuslines>>(expect1);
      }
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["index"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsBus() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwayArrivalStop : public Darabonba::Model {
public:
  shared_ptr<string> adcode{};
  shared_ptr<string> end{};
  shared_ptr<string> id{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};
  shared_ptr<string> time{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwayArrivalStop() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwayArrivalStop(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adcode) {
      res["adcode"] = boost::any(*adcode);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("adcode") != m.end() && !m["adcode"].empty()) {
      adcode = make_shared<string>(boost::any_cast<string>(m["adcode"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<string>(boost::any_cast<string>(m["end"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwayArrivalStop() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwayDepartureStop : public Darabonba::Model {
public:
  shared_ptr<string> adcode{};
  shared_ptr<string> id{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};
  shared_ptr<string> start{};
  shared_ptr<string> time{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwayDepartureStop() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwayDepartureStop(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adcode) {
      res["adcode"] = boost::any(*adcode);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (start) {
      res["start"] = boost::any(*start);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("adcode") != m.end() && !m["adcode"].empty()) {
      adcode = make_shared<string>(boost::any_cast<string>(m["adcode"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("start") != m.end() && !m["start"].empty()) {
      start = make_shared<string>(boost::any_cast<string>(m["start"]));
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwayDepartureStop() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwaySpaces : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> cost{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwaySpaces() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwaySpaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<string>(boost::any_cast<string>(m["cost"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwaySpaces() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailway : public Darabonba::Model {
public:
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwayArrivalStop> arrivalStop{};
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwayDepartureStop> departureStop{};
  shared_ptr<string> distanceMeter{};
  shared_ptr<string> id{};
  shared_ptr<string> index{};
  shared_ptr<string> name{};
  shared_ptr<vector<TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwaySpaces>> spaces{};
  shared_ptr<string> time{};
  shared_ptr<string> trip{};
  shared_ptr<string> type{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailway() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailway(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalStop) {
      res["arrivalStop"] = arrivalStop ? boost::any(arrivalStop->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (departureStop) {
      res["departureStop"] = departureStop ? boost::any(departureStop->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (distanceMeter) {
      res["distanceMeter"] = boost::any(*distanceMeter);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (spaces) {
      vector<boost::any> temp1;
      for(auto item1:*spaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["spaces"] = boost::any(temp1);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (trip) {
      res["trip"] = boost::any(*trip);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrivalStop") != m.end() && !m["arrivalStop"].empty()) {
      if (typeid(map<string, boost::any>) == m["arrivalStop"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwayArrivalStop model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["arrivalStop"]));
        arrivalStop = make_shared<TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwayArrivalStop>(model1);
      }
    }
    if (m.find("departureStop") != m.end() && !m["departureStop"].empty()) {
      if (typeid(map<string, boost::any>) == m["departureStop"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwayDepartureStop model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["departureStop"]));
        departureStop = make_shared<TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwayDepartureStop>(model1);
      }
    }
    if (m.find("distanceMeter") != m.end() && !m["distanceMeter"].empty()) {
      distanceMeter = make_shared<string>(boost::any_cast<string>(m["distanceMeter"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["index"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("spaces") != m.end() && !m["spaces"].empty()) {
      if (typeid(vector<boost::any>) == m["spaces"].type()) {
        vector<TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwaySpaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["spaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwaySpaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spaces = make_shared<vector<TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailwaySpaces>>(expect1);
      }
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
    if (m.find("trip") != m.end() && !m["trip"].empty()) {
      trip = make_shared<string>(boost::any_cast<string>(m["trip"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailway() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsTaxi : public Darabonba::Model {
public:
  shared_ptr<string> destinationName{};
  shared_ptr<string> destinationPoint{};
  shared_ptr<string> distanceMeter{};
  shared_ptr<string> driveTimeSecond{};
  shared_ptr<string> index{};
  shared_ptr<string> originName{};
  shared_ptr<string> originPoint{};
  shared_ptr<string> price{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsTaxi() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsTaxi(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationName) {
      res["destinationName"] = boost::any(*destinationName);
    }
    if (destinationPoint) {
      res["destinationPoint"] = boost::any(*destinationPoint);
    }
    if (distanceMeter) {
      res["distanceMeter"] = boost::any(*distanceMeter);
    }
    if (driveTimeSecond) {
      res["driveTimeSecond"] = boost::any(*driveTimeSecond);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (originName) {
      res["originName"] = boost::any(*originName);
    }
    if (originPoint) {
      res["originPoint"] = boost::any(*originPoint);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("destinationName") != m.end() && !m["destinationName"].empty()) {
      destinationName = make_shared<string>(boost::any_cast<string>(m["destinationName"]));
    }
    if (m.find("destinationPoint") != m.end() && !m["destinationPoint"].empty()) {
      destinationPoint = make_shared<string>(boost::any_cast<string>(m["destinationPoint"]));
    }
    if (m.find("distanceMeter") != m.end() && !m["distanceMeter"].empty()) {
      distanceMeter = make_shared<string>(boost::any_cast<string>(m["distanceMeter"]));
    }
    if (m.find("driveTimeSecond") != m.end() && !m["driveTimeSecond"].empty()) {
      driveTimeSecond = make_shared<string>(boost::any_cast<string>(m["driveTimeSecond"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["index"]));
    }
    if (m.find("originName") != m.end() && !m["originName"].empty()) {
      originName = make_shared<string>(boost::any_cast<string>(m["originName"]));
    }
    if (m.find("originPoint") != m.end() && !m["originPoint"].empty()) {
      originPoint = make_shared<string>(boost::any_cast<string>(m["originPoint"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<string>(boost::any_cast<string>(m["price"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsTaxi() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingCost : public Darabonba::Model {
public:
  shared_ptr<string> durationSecond{};
  shared_ptr<string> taxiFee{};
  shared_ptr<string> tollDistanceMeter{};
  shared_ptr<string> tollRoads{};
  shared_ptr<string> tolls{};
  shared_ptr<string> trafficLights{};
  shared_ptr<string> transitFee{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingCost() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingCost(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (taxiFee) {
      res["taxiFee"] = boost::any(*taxiFee);
    }
    if (tollDistanceMeter) {
      res["tollDistanceMeter"] = boost::any(*tollDistanceMeter);
    }
    if (tollRoads) {
      res["tollRoads"] = boost::any(*tollRoads);
    }
    if (tolls) {
      res["tolls"] = boost::any(*tolls);
    }
    if (trafficLights) {
      res["trafficLights"] = boost::any(*trafficLights);
    }
    if (transitFee) {
      res["transitFee"] = boost::any(*transitFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("taxiFee") != m.end() && !m["taxiFee"].empty()) {
      taxiFee = make_shared<string>(boost::any_cast<string>(m["taxiFee"]));
    }
    if (m.find("tollDistanceMeter") != m.end() && !m["tollDistanceMeter"].empty()) {
      tollDistanceMeter = make_shared<string>(boost::any_cast<string>(m["tollDistanceMeter"]));
    }
    if (m.find("tollRoads") != m.end() && !m["tollRoads"].empty()) {
      tollRoads = make_shared<string>(boost::any_cast<string>(m["tollRoads"]));
    }
    if (m.find("tolls") != m.end() && !m["tolls"].empty()) {
      tolls = make_shared<string>(boost::any_cast<string>(m["tolls"]));
    }
    if (m.find("trafficLights") != m.end() && !m["trafficLights"].empty()) {
      trafficLights = make_shared<string>(boost::any_cast<string>(m["trafficLights"]));
    }
    if (m.find("transitFee") != m.end() && !m["transitFee"].empty()) {
      transitFee = make_shared<string>(boost::any_cast<string>(m["transitFee"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingCost() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingStepsCost : public Darabonba::Model {
public:
  shared_ptr<string> durationSecond{};
  shared_ptr<string> taxiFee{};
  shared_ptr<string> tollDistanceMeter{};
  shared_ptr<string> tollRoads{};
  shared_ptr<string> tolls{};
  shared_ptr<string> trafficLights{};
  shared_ptr<string> transitFee{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingStepsCost() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingStepsCost(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (taxiFee) {
      res["taxiFee"] = boost::any(*taxiFee);
    }
    if (tollDistanceMeter) {
      res["tollDistanceMeter"] = boost::any(*tollDistanceMeter);
    }
    if (tollRoads) {
      res["tollRoads"] = boost::any(*tollRoads);
    }
    if (tolls) {
      res["tolls"] = boost::any(*tolls);
    }
    if (trafficLights) {
      res["trafficLights"] = boost::any(*trafficLights);
    }
    if (transitFee) {
      res["transitFee"] = boost::any(*transitFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("taxiFee") != m.end() && !m["taxiFee"].empty()) {
      taxiFee = make_shared<string>(boost::any_cast<string>(m["taxiFee"]));
    }
    if (m.find("tollDistanceMeter") != m.end() && !m["tollDistanceMeter"].empty()) {
      tollDistanceMeter = make_shared<string>(boost::any_cast<string>(m["tollDistanceMeter"]));
    }
    if (m.find("tollRoads") != m.end() && !m["tollRoads"].empty()) {
      tollRoads = make_shared<string>(boost::any_cast<string>(m["tollRoads"]));
    }
    if (m.find("tolls") != m.end() && !m["tolls"].empty()) {
      tolls = make_shared<string>(boost::any_cast<string>(m["tolls"]));
    }
    if (m.find("trafficLights") != m.end() && !m["trafficLights"].empty()) {
      trafficLights = make_shared<string>(boost::any_cast<string>(m["trafficLights"]));
    }
    if (m.find("transitFee") != m.end() && !m["transitFee"].empty()) {
      transitFee = make_shared<string>(boost::any_cast<string>(m["transitFee"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingStepsCost() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingStepsPolyline : public Darabonba::Model {
public:
  shared_ptr<string> polyline{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingStepsPolyline() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingStepsPolyline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (polyline) {
      res["polyline"] = boost::any(*polyline);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("polyline") != m.end() && !m["polyline"].empty()) {
      polyline = make_shared<string>(boost::any_cast<string>(m["polyline"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingStepsPolyline() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingSteps : public Darabonba::Model {
public:
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingStepsCost> cost{};
  shared_ptr<string> instruction{};
  shared_ptr<string> orientation{};
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingStepsPolyline> polyline{};
  shared_ptr<string> roadName{};
  shared_ptr<string> stepDistanceMeter{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingSteps() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingSteps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = cost ? boost::any(cost->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instruction) {
      res["instruction"] = boost::any(*instruction);
    }
    if (orientation) {
      res["orientation"] = boost::any(*orientation);
    }
    if (polyline) {
      res["polyline"] = polyline ? boost::any(polyline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roadName) {
      res["roadName"] = boost::any(*roadName);
    }
    if (stepDistanceMeter) {
      res["stepDistanceMeter"] = boost::any(*stepDistanceMeter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingStepsCost model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost"]));
        cost = make_shared<TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingStepsCost>(model1);
      }
    }
    if (m.find("instruction") != m.end() && !m["instruction"].empty()) {
      instruction = make_shared<string>(boost::any_cast<string>(m["instruction"]));
    }
    if (m.find("orientation") != m.end() && !m["orientation"].empty()) {
      orientation = make_shared<string>(boost::any_cast<string>(m["orientation"]));
    }
    if (m.find("polyline") != m.end() && !m["polyline"].empty()) {
      if (typeid(map<string, boost::any>) == m["polyline"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingStepsPolyline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["polyline"]));
        polyline = make_shared<TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingStepsPolyline>(model1);
      }
    }
    if (m.find("roadName") != m.end() && !m["roadName"].empty()) {
      roadName = make_shared<string>(boost::any_cast<string>(m["roadName"]));
    }
    if (m.find("stepDistanceMeter") != m.end() && !m["stepDistanceMeter"].empty()) {
      stepDistanceMeter = make_shared<string>(boost::any_cast<string>(m["stepDistanceMeter"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingSteps() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalking : public Darabonba::Model {
public:
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingCost> cost{};
  shared_ptr<string> destination{};
  shared_ptr<string> distanceMeter{};
  shared_ptr<string> index{};
  shared_ptr<string> origin{};
  shared_ptr<vector<TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingSteps>> steps{};

  TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalking() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalking(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = cost ? boost::any(cost->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (destination) {
      res["destination"] = boost::any(*destination);
    }
    if (distanceMeter) {
      res["distanceMeter"] = boost::any(*distanceMeter);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (origin) {
      res["origin"] = boost::any(*origin);
    }
    if (steps) {
      vector<boost::any> temp1;
      for(auto item1:*steps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["steps"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingCost model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost"]));
        cost = make_shared<TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingCost>(model1);
      }
    }
    if (m.find("destination") != m.end() && !m["destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["destination"]));
    }
    if (m.find("distanceMeter") != m.end() && !m["distanceMeter"].empty()) {
      distanceMeter = make_shared<string>(boost::any_cast<string>(m["distanceMeter"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["index"]));
    }
    if (m.find("origin") != m.end() && !m["origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["origin"]));
    }
    if (m.find("steps") != m.end() && !m["steps"].empty()) {
      if (typeid(vector<boost::any>) == m["steps"].type()) {
        vector<TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingSteps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["steps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingSteps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        steps = make_shared<vector<TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalkingSteps>>(expect1);
      }
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalking() = default;
};
class TransitIntegratedDirectionResponseBodyDataPathsSegments : public Darabonba::Model {
public:
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBus> bus{};
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailway> railway{};
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsSegmentsTaxi> taxi{};
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalking> walking{};

  TransitIntegratedDirectionResponseBodyDataPathsSegments() {}

  explicit TransitIntegratedDirectionResponseBodyDataPathsSegments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bus) {
      res["bus"] = bus ? boost::any(bus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (railway) {
      res["railway"] = railway ? boost::any(railway->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taxi) {
      res["taxi"] = taxi ? boost::any(taxi->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (walking) {
      res["walking"] = walking ? boost::any(walking->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bus") != m.end() && !m["bus"].empty()) {
      if (typeid(map<string, boost::any>) == m["bus"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsSegmentsBus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["bus"]));
        bus = make_shared<TransitIntegratedDirectionResponseBodyDataPathsSegmentsBus>(model1);
      }
    }
    if (m.find("railway") != m.end() && !m["railway"].empty()) {
      if (typeid(map<string, boost::any>) == m["railway"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailway model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["railway"]));
        railway = make_shared<TransitIntegratedDirectionResponseBodyDataPathsSegmentsRailway>(model1);
      }
    }
    if (m.find("taxi") != m.end() && !m["taxi"].empty()) {
      if (typeid(map<string, boost::any>) == m["taxi"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsSegmentsTaxi model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["taxi"]));
        taxi = make_shared<TransitIntegratedDirectionResponseBodyDataPathsSegmentsTaxi>(model1);
      }
    }
    if (m.find("walking") != m.end() && !m["walking"].empty()) {
      if (typeid(map<string, boost::any>) == m["walking"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalking model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["walking"]));
        walking = make_shared<TransitIntegratedDirectionResponseBodyDataPathsSegmentsWalking>(model1);
      }
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPathsSegments() = default;
};
class TransitIntegratedDirectionResponseBodyDataPaths : public Darabonba::Model {
public:
  shared_ptr<TransitIntegratedDirectionResponseBodyDataPathsCost> cost{};
  shared_ptr<string> distanceMeter{};
  shared_ptr<string> nightflag{};
  shared_ptr<vector<TransitIntegratedDirectionResponseBodyDataPathsSegments>> segments{};
  shared_ptr<string> walkingDistanceMeter{};

  TransitIntegratedDirectionResponseBodyDataPaths() {}

  explicit TransitIntegratedDirectionResponseBodyDataPaths(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = cost ? boost::any(cost->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (distanceMeter) {
      res["distanceMeter"] = boost::any(*distanceMeter);
    }
    if (nightflag) {
      res["nightflag"] = boost::any(*nightflag);
    }
    if (segments) {
      vector<boost::any> temp1;
      for(auto item1:*segments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segments"] = boost::any(temp1);
    }
    if (walkingDistanceMeter) {
      res["walkingDistanceMeter"] = boost::any(*walkingDistanceMeter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost"].type()) {
        TransitIntegratedDirectionResponseBodyDataPathsCost model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost"]));
        cost = make_shared<TransitIntegratedDirectionResponseBodyDataPathsCost>(model1);
      }
    }
    if (m.find("distanceMeter") != m.end() && !m["distanceMeter"].empty()) {
      distanceMeter = make_shared<string>(boost::any_cast<string>(m["distanceMeter"]));
    }
    if (m.find("nightflag") != m.end() && !m["nightflag"].empty()) {
      nightflag = make_shared<string>(boost::any_cast<string>(m["nightflag"]));
    }
    if (m.find("segments") != m.end() && !m["segments"].empty()) {
      if (typeid(vector<boost::any>) == m["segments"].type()) {
        vector<TransitIntegratedDirectionResponseBodyDataPathsSegments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TransitIntegratedDirectionResponseBodyDataPathsSegments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segments = make_shared<vector<TransitIntegratedDirectionResponseBodyDataPathsSegments>>(expect1);
      }
    }
    if (m.find("walkingDistanceMeter") != m.end() && !m["walkingDistanceMeter"].empty()) {
      walkingDistanceMeter = make_shared<string>(boost::any_cast<string>(m["walkingDistanceMeter"]));
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyDataPaths() = default;
};
class TransitIntegratedDirectionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<TransitIntegratedDirectionResponseBodyDataCost> cost{};
  shared_ptr<string> count{};
  shared_ptr<string> destinationLatitude{};
  shared_ptr<string> destinationLongitude{};
  shared_ptr<string> distanceMeter{};
  shared_ptr<string> originLatitude{};
  shared_ptr<string> originLongitude{};
  shared_ptr<vector<TransitIntegratedDirectionResponseBodyDataPaths>> paths{};

  TransitIntegratedDirectionResponseBodyData() {}

  explicit TransitIntegratedDirectionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = cost ? boost::any(cost->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (destinationLatitude) {
      res["destinationLatitude"] = boost::any(*destinationLatitude);
    }
    if (destinationLongitude) {
      res["destinationLongitude"] = boost::any(*destinationLongitude);
    }
    if (distanceMeter) {
      res["distanceMeter"] = boost::any(*distanceMeter);
    }
    if (originLatitude) {
      res["originLatitude"] = boost::any(*originLatitude);
    }
    if (originLongitude) {
      res["originLongitude"] = boost::any(*originLongitude);
    }
    if (paths) {
      vector<boost::any> temp1;
      for(auto item1:*paths){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["paths"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost"].type()) {
        TransitIntegratedDirectionResponseBodyDataCost model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost"]));
        cost = make_shared<TransitIntegratedDirectionResponseBodyDataCost>(model1);
      }
    }
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["count"]));
    }
    if (m.find("destinationLatitude") != m.end() && !m["destinationLatitude"].empty()) {
      destinationLatitude = make_shared<string>(boost::any_cast<string>(m["destinationLatitude"]));
    }
    if (m.find("destinationLongitude") != m.end() && !m["destinationLongitude"].empty()) {
      destinationLongitude = make_shared<string>(boost::any_cast<string>(m["destinationLongitude"]));
    }
    if (m.find("distanceMeter") != m.end() && !m["distanceMeter"].empty()) {
      distanceMeter = make_shared<string>(boost::any_cast<string>(m["distanceMeter"]));
    }
    if (m.find("originLatitude") != m.end() && !m["originLatitude"].empty()) {
      originLatitude = make_shared<string>(boost::any_cast<string>(m["originLatitude"]));
    }
    if (m.find("originLongitude") != m.end() && !m["originLongitude"].empty()) {
      originLongitude = make_shared<string>(boost::any_cast<string>(m["originLongitude"]));
    }
    if (m.find("paths") != m.end() && !m["paths"].empty()) {
      if (typeid(vector<boost::any>) == m["paths"].type()) {
        vector<TransitIntegratedDirectionResponseBodyDataPaths> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["paths"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TransitIntegratedDirectionResponseBodyDataPaths model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paths = make_shared<vector<TransitIntegratedDirectionResponseBodyDataPaths>>(expect1);
      }
    }
  }


  virtual ~TransitIntegratedDirectionResponseBodyData() = default;
};
class TransitIntegratedDirectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<TransitIntegratedDirectionResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  TransitIntegratedDirectionResponseBody() {}

  explicit TransitIntegratedDirectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
        TransitIntegratedDirectionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<TransitIntegratedDirectionResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
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


  virtual ~TransitIntegratedDirectionResponseBody() = default;
};
class TransitIntegratedDirectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TransitIntegratedDirectionResponseBody> body{};

  TransitIntegratedDirectionResponse() {}

  explicit TransitIntegratedDirectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TransitIntegratedDirectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransitIntegratedDirectionResponseBody>(model1);
      }
    }
  }


  virtual ~TransitIntegratedDirectionResponse() = default;
};
class WalkingDirectionNovaRequest : public Darabonba::Model {
public:
  shared_ptr<string> destinationLatitude{};
  shared_ptr<string> destinationLongitude{};
  shared_ptr<string> originLatitude{};
  shared_ptr<string> originLongitude{};

  WalkingDirectionNovaRequest() {}

  explicit WalkingDirectionNovaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationLatitude) {
      res["destinationLatitude"] = boost::any(*destinationLatitude);
    }
    if (destinationLongitude) {
      res["destinationLongitude"] = boost::any(*destinationLongitude);
    }
    if (originLatitude) {
      res["originLatitude"] = boost::any(*originLatitude);
    }
    if (originLongitude) {
      res["originLongitude"] = boost::any(*originLongitude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("destinationLatitude") != m.end() && !m["destinationLatitude"].empty()) {
      destinationLatitude = make_shared<string>(boost::any_cast<string>(m["destinationLatitude"]));
    }
    if (m.find("destinationLongitude") != m.end() && !m["destinationLongitude"].empty()) {
      destinationLongitude = make_shared<string>(boost::any_cast<string>(m["destinationLongitude"]));
    }
    if (m.find("originLatitude") != m.end() && !m["originLatitude"].empty()) {
      originLatitude = make_shared<string>(boost::any_cast<string>(m["originLatitude"]));
    }
    if (m.find("originLongitude") != m.end() && !m["originLongitude"].empty()) {
      originLongitude = make_shared<string>(boost::any_cast<string>(m["originLongitude"]));
    }
  }


  virtual ~WalkingDirectionNovaRequest() = default;
};
class WalkingDirectionNovaResponseBodyDataPathsCost : public Darabonba::Model {
public:
  shared_ptr<string> durationSecond{};
  shared_ptr<string> taxiFee{};
  shared_ptr<string> tollDistanceMeter{};
  shared_ptr<string> tollRoads{};
  shared_ptr<string> tolls{};
  shared_ptr<string> trafficLights{};
  shared_ptr<string> transitFee{};

  WalkingDirectionNovaResponseBodyDataPathsCost() {}

  explicit WalkingDirectionNovaResponseBodyDataPathsCost(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (taxiFee) {
      res["taxiFee"] = boost::any(*taxiFee);
    }
    if (tollDistanceMeter) {
      res["tollDistanceMeter"] = boost::any(*tollDistanceMeter);
    }
    if (tollRoads) {
      res["tollRoads"] = boost::any(*tollRoads);
    }
    if (tolls) {
      res["tolls"] = boost::any(*tolls);
    }
    if (trafficLights) {
      res["trafficLights"] = boost::any(*trafficLights);
    }
    if (transitFee) {
      res["transitFee"] = boost::any(*transitFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("taxiFee") != m.end() && !m["taxiFee"].empty()) {
      taxiFee = make_shared<string>(boost::any_cast<string>(m["taxiFee"]));
    }
    if (m.find("tollDistanceMeter") != m.end() && !m["tollDistanceMeter"].empty()) {
      tollDistanceMeter = make_shared<string>(boost::any_cast<string>(m["tollDistanceMeter"]));
    }
    if (m.find("tollRoads") != m.end() && !m["tollRoads"].empty()) {
      tollRoads = make_shared<string>(boost::any_cast<string>(m["tollRoads"]));
    }
    if (m.find("tolls") != m.end() && !m["tolls"].empty()) {
      tolls = make_shared<string>(boost::any_cast<string>(m["tolls"]));
    }
    if (m.find("trafficLights") != m.end() && !m["trafficLights"].empty()) {
      trafficLights = make_shared<string>(boost::any_cast<string>(m["trafficLights"]));
    }
    if (m.find("transitFee") != m.end() && !m["transitFee"].empty()) {
      transitFee = make_shared<string>(boost::any_cast<string>(m["transitFee"]));
    }
  }


  virtual ~WalkingDirectionNovaResponseBodyDataPathsCost() = default;
};
class WalkingDirectionNovaResponseBodyDataPathsStepsCost : public Darabonba::Model {
public:
  shared_ptr<string> durationSecond{};
  shared_ptr<string> taxiFee{};
  shared_ptr<string> tollDistanceMeter{};
  shared_ptr<string> tollRoads{};
  shared_ptr<string> tolls{};
  shared_ptr<string> trafficLights{};
  shared_ptr<string> transitFee{};

  WalkingDirectionNovaResponseBodyDataPathsStepsCost() {}

  explicit WalkingDirectionNovaResponseBodyDataPathsStepsCost(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (taxiFee) {
      res["taxiFee"] = boost::any(*taxiFee);
    }
    if (tollDistanceMeter) {
      res["tollDistanceMeter"] = boost::any(*tollDistanceMeter);
    }
    if (tollRoads) {
      res["tollRoads"] = boost::any(*tollRoads);
    }
    if (tolls) {
      res["tolls"] = boost::any(*tolls);
    }
    if (trafficLights) {
      res["trafficLights"] = boost::any(*trafficLights);
    }
    if (transitFee) {
      res["transitFee"] = boost::any(*transitFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("taxiFee") != m.end() && !m["taxiFee"].empty()) {
      taxiFee = make_shared<string>(boost::any_cast<string>(m["taxiFee"]));
    }
    if (m.find("tollDistanceMeter") != m.end() && !m["tollDistanceMeter"].empty()) {
      tollDistanceMeter = make_shared<string>(boost::any_cast<string>(m["tollDistanceMeter"]));
    }
    if (m.find("tollRoads") != m.end() && !m["tollRoads"].empty()) {
      tollRoads = make_shared<string>(boost::any_cast<string>(m["tollRoads"]));
    }
    if (m.find("tolls") != m.end() && !m["tolls"].empty()) {
      tolls = make_shared<string>(boost::any_cast<string>(m["tolls"]));
    }
    if (m.find("trafficLights") != m.end() && !m["trafficLights"].empty()) {
      trafficLights = make_shared<string>(boost::any_cast<string>(m["trafficLights"]));
    }
    if (m.find("transitFee") != m.end() && !m["transitFee"].empty()) {
      transitFee = make_shared<string>(boost::any_cast<string>(m["transitFee"]));
    }
  }


  virtual ~WalkingDirectionNovaResponseBodyDataPathsStepsCost() = default;
};
class WalkingDirectionNovaResponseBodyDataPathsSteps : public Darabonba::Model {
public:
  shared_ptr<WalkingDirectionNovaResponseBodyDataPathsStepsCost> cost{};
  shared_ptr<string> instruction{};
  shared_ptr<string> orientation{};
  shared_ptr<string> polyline{};
  shared_ptr<string> roadName{};
  shared_ptr<string> stepDistanceMeter{};

  WalkingDirectionNovaResponseBodyDataPathsSteps() {}

  explicit WalkingDirectionNovaResponseBodyDataPathsSteps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = cost ? boost::any(cost->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instruction) {
      res["instruction"] = boost::any(*instruction);
    }
    if (orientation) {
      res["orientation"] = boost::any(*orientation);
    }
    if (polyline) {
      res["polyline"] = boost::any(*polyline);
    }
    if (roadName) {
      res["roadName"] = boost::any(*roadName);
    }
    if (stepDistanceMeter) {
      res["stepDistanceMeter"] = boost::any(*stepDistanceMeter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost"].type()) {
        WalkingDirectionNovaResponseBodyDataPathsStepsCost model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost"]));
        cost = make_shared<WalkingDirectionNovaResponseBodyDataPathsStepsCost>(model1);
      }
    }
    if (m.find("instruction") != m.end() && !m["instruction"].empty()) {
      instruction = make_shared<string>(boost::any_cast<string>(m["instruction"]));
    }
    if (m.find("orientation") != m.end() && !m["orientation"].empty()) {
      orientation = make_shared<string>(boost::any_cast<string>(m["orientation"]));
    }
    if (m.find("polyline") != m.end() && !m["polyline"].empty()) {
      polyline = make_shared<string>(boost::any_cast<string>(m["polyline"]));
    }
    if (m.find("roadName") != m.end() && !m["roadName"].empty()) {
      roadName = make_shared<string>(boost::any_cast<string>(m["roadName"]));
    }
    if (m.find("stepDistanceMeter") != m.end() && !m["stepDistanceMeter"].empty()) {
      stepDistanceMeter = make_shared<string>(boost::any_cast<string>(m["stepDistanceMeter"]));
    }
  }


  virtual ~WalkingDirectionNovaResponseBodyDataPathsSteps() = default;
};
class WalkingDirectionNovaResponseBodyDataPaths : public Darabonba::Model {
public:
  shared_ptr<WalkingDirectionNovaResponseBodyDataPathsCost> cost{};
  shared_ptr<string> distanceMeter{};
  shared_ptr<string> durationSecond{};
  shared_ptr<string> restriction{};
  shared_ptr<vector<WalkingDirectionNovaResponseBodyDataPathsSteps>> steps{};

  WalkingDirectionNovaResponseBodyDataPaths() {}

  explicit WalkingDirectionNovaResponseBodyDataPaths(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = cost ? boost::any(cost->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (distanceMeter) {
      res["distanceMeter"] = boost::any(*distanceMeter);
    }
    if (durationSecond) {
      res["durationSecond"] = boost::any(*durationSecond);
    }
    if (restriction) {
      res["restriction"] = boost::any(*restriction);
    }
    if (steps) {
      vector<boost::any> temp1;
      for(auto item1:*steps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["steps"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      if (typeid(map<string, boost::any>) == m["cost"].type()) {
        WalkingDirectionNovaResponseBodyDataPathsCost model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cost"]));
        cost = make_shared<WalkingDirectionNovaResponseBodyDataPathsCost>(model1);
      }
    }
    if (m.find("distanceMeter") != m.end() && !m["distanceMeter"].empty()) {
      distanceMeter = make_shared<string>(boost::any_cast<string>(m["distanceMeter"]));
    }
    if (m.find("durationSecond") != m.end() && !m["durationSecond"].empty()) {
      durationSecond = make_shared<string>(boost::any_cast<string>(m["durationSecond"]));
    }
    if (m.find("restriction") != m.end() && !m["restriction"].empty()) {
      restriction = make_shared<string>(boost::any_cast<string>(m["restriction"]));
    }
    if (m.find("steps") != m.end() && !m["steps"].empty()) {
      if (typeid(vector<boost::any>) == m["steps"].type()) {
        vector<WalkingDirectionNovaResponseBodyDataPathsSteps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["steps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            WalkingDirectionNovaResponseBodyDataPathsSteps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        steps = make_shared<vector<WalkingDirectionNovaResponseBodyDataPathsSteps>>(expect1);
      }
    }
  }


  virtual ~WalkingDirectionNovaResponseBodyDataPaths() = default;
};
class WalkingDirectionNovaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> count{};
  shared_ptr<string> destinationLatitude{};
  shared_ptr<string> destinationLongitude{};
  shared_ptr<string> originLatitude{};
  shared_ptr<string> originLongitude{};
  shared_ptr<vector<WalkingDirectionNovaResponseBodyDataPaths>> paths{};
  shared_ptr<string> taxiCost{};

  WalkingDirectionNovaResponseBodyData() {}

  explicit WalkingDirectionNovaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (destinationLatitude) {
      res["destinationLatitude"] = boost::any(*destinationLatitude);
    }
    if (destinationLongitude) {
      res["destinationLongitude"] = boost::any(*destinationLongitude);
    }
    if (originLatitude) {
      res["originLatitude"] = boost::any(*originLatitude);
    }
    if (originLongitude) {
      res["originLongitude"] = boost::any(*originLongitude);
    }
    if (paths) {
      vector<boost::any> temp1;
      for(auto item1:*paths){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["paths"] = boost::any(temp1);
    }
    if (taxiCost) {
      res["taxiCost"] = boost::any(*taxiCost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["count"]));
    }
    if (m.find("destinationLatitude") != m.end() && !m["destinationLatitude"].empty()) {
      destinationLatitude = make_shared<string>(boost::any_cast<string>(m["destinationLatitude"]));
    }
    if (m.find("destinationLongitude") != m.end() && !m["destinationLongitude"].empty()) {
      destinationLongitude = make_shared<string>(boost::any_cast<string>(m["destinationLongitude"]));
    }
    if (m.find("originLatitude") != m.end() && !m["originLatitude"].empty()) {
      originLatitude = make_shared<string>(boost::any_cast<string>(m["originLatitude"]));
    }
    if (m.find("originLongitude") != m.end() && !m["originLongitude"].empty()) {
      originLongitude = make_shared<string>(boost::any_cast<string>(m["originLongitude"]));
    }
    if (m.find("paths") != m.end() && !m["paths"].empty()) {
      if (typeid(vector<boost::any>) == m["paths"].type()) {
        vector<WalkingDirectionNovaResponseBodyDataPaths> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["paths"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            WalkingDirectionNovaResponseBodyDataPaths model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paths = make_shared<vector<WalkingDirectionNovaResponseBodyDataPaths>>(expect1);
      }
    }
    if (m.find("taxiCost") != m.end() && !m["taxiCost"].empty()) {
      taxiCost = make_shared<string>(boost::any_cast<string>(m["taxiCost"]));
    }
  }


  virtual ~WalkingDirectionNovaResponseBodyData() = default;
};
class WalkingDirectionNovaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<WalkingDirectionNovaResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  WalkingDirectionNovaResponseBody() {}

  explicit WalkingDirectionNovaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
        WalkingDirectionNovaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<WalkingDirectionNovaResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
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


  virtual ~WalkingDirectionNovaResponseBody() = default;
};
class WalkingDirectionNovaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<WalkingDirectionNovaResponseBody> body{};

  WalkingDirectionNovaResponse() {}

  explicit WalkingDirectionNovaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        WalkingDirectionNovaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<WalkingDirectionNovaResponseBody>(model1);
      }
    }
  }


  virtual ~WalkingDirectionNovaResponse() = default;
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
  BicyclingDirectionNovaResponse bicyclingDirectionNovaWithOptions(shared_ptr<BicyclingDirectionNovaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BicyclingDirectionNovaResponse bicyclingDirectionNova(shared_ptr<BicyclingDirectionNovaRequest> request);
  CommonQueryBySceneResponse commonQueryBySceneWithOptions(shared_ptr<CommonQueryBySceneRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CommonQueryBySceneResponse commonQueryByScene(shared_ptr<CommonQueryBySceneRequest> request);
  DrivingDirectionNovaResponse drivingDirectionNovaWithOptions(shared_ptr<DrivingDirectionNovaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DrivingDirectionNovaResponse drivingDirectionNova(shared_ptr<DrivingDirectionNovaRequest> request);
  ElectrobikeDirectionNovaResponse electrobikeDirectionNovaWithOptions(shared_ptr<ElectrobikeDirectionNovaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ElectrobikeDirectionNovaResponse electrobikeDirectionNova(shared_ptr<ElectrobikeDirectionNovaRequest> request);
  GeoCodeResponse geoCodeWithOptions(shared_ptr<GeoCodeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GeoCodeResponse geoCode(shared_ptr<GeoCodeRequest> request);
  NearbySearchNovaResponse nearbySearchNovaWithOptions(shared_ptr<NearbySearchNovaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  NearbySearchNovaResponse nearbySearchNova(shared_ptr<NearbySearchNovaRequest> request);
  PlaceSearchNovaResponse placeSearchNovaWithOptions(shared_ptr<PlaceSearchNovaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PlaceSearchNovaResponse placeSearchNova(shared_ptr<PlaceSearchNovaRequest> request);
  QueryAttractionsResponse queryAttractionsWithOptions(shared_ptr<QueryAttractionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAttractionsResponse queryAttractions(shared_ptr<QueryAttractionsRequest> request);
  QueryAttractionsNlResponse queryAttractionsNlWithOptions(shared_ptr<QueryAttractionsNlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAttractionsNlResponse queryAttractionsNl(shared_ptr<QueryAttractionsNlRequest> request);
  QueryHotelsResponse queryHotelsWithOptions(shared_ptr<QueryHotelsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryHotelsResponse queryHotels(shared_ptr<QueryHotelsRequest> request);
  QueryHotelsNlResponse queryHotelsNlWithOptions(shared_ptr<QueryHotelsNlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryHotelsNlResponse queryHotelsNl(shared_ptr<QueryHotelsNlRequest> request);
  QueryRestaurantsResponse queryRestaurantsWithOptions(shared_ptr<QueryRestaurantsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRestaurantsResponse queryRestaurants(shared_ptr<QueryRestaurantsRequest> request);
  QueryRestaurantsNlResponse queryRestaurantsNlWithOptions(shared_ptr<QueryRestaurantsNlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRestaurantsNlResponse queryRestaurantsNl(shared_ptr<QueryRestaurantsNlRequest> request);
  RgeoCodeResponse rgeoCodeWithOptions(shared_ptr<RgeoCodeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RgeoCodeResponse rgeoCode(shared_ptr<RgeoCodeRequest> request);
  TransitIntegratedDirectionResponse transitIntegratedDirectionWithOptions(shared_ptr<TransitIntegratedDirectionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransitIntegratedDirectionResponse transitIntegratedDirection(shared_ptr<TransitIntegratedDirectionRequest> request);
  WalkingDirectionNovaResponse walkingDirectionNovaWithOptions(shared_ptr<WalkingDirectionNovaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WalkingDirectionNovaResponse walkingDirectionNova(shared_ptr<WalkingDirectionNovaRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_IQS20240712

#endif
