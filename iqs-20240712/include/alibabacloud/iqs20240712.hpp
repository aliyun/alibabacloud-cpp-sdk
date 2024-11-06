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
  shared_ptr<BicyclingDirectionNovaResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  BicyclingDirectionNovaResponseBody() {}

  explicit BicyclingDirectionNovaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<string> destinationLatitude{};
  shared_ptr<string> destinationLongitude{};
  shared_ptr<string> originLatitude{};
  shared_ptr<string> originLongitude{};

  DrivingDirectionNovaRequest() {}

  explicit DrivingDirectionNovaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<DrivingDirectionNovaResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  DrivingDirectionNovaResponseBody() {}

  explicit DrivingDirectionNovaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<ElectrobikeDirectionNovaResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  ElectrobikeDirectionNovaResponseBody() {}

  explicit ElectrobikeDirectionNovaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<vector<GeoCodeResponseBodyData>> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  GeoCodeResponseBody() {}

  explicit GeoCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
class NearbySearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> keywords{};
  shared_ptr<string> latitude{};
  shared_ptr<string> longitude{};
  shared_ptr<long> page{};
  shared_ptr<long> radius{};
  shared_ptr<long> size{};
  shared_ptr<string> types{};

  NearbySearchRequest() {}

  explicit NearbySearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (types) {
      res["types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("types") != m.end() && !m["types"].empty()) {
      types = make_shared<string>(boost::any_cast<string>(m["types"]));
    }
  }


  virtual ~NearbySearchRequest() = default;
};
class NearbySearchResponseBodyDataImages : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  NearbySearchResponseBodyDataImages() {}

  explicit NearbySearchResponseBodyDataImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~NearbySearchResponseBodyDataImages() = default;
};
class NearbySearchResponseBodyDataMetadata : public Darabonba::Model {
public:
  shared_ptr<string> averageSpend{};
  shared_ptr<string> businessArea{};
  shared_ptr<string> dailyOpeningHours{};
  shared_ptr<string> mainTag{};
  shared_ptr<string> phone{};
  shared_ptr<string> score{};
  shared_ptr<string> tag{};
  shared_ptr<string> weeklyOpeningDays{};

  NearbySearchResponseBodyDataMetadata() {}

  explicit NearbySearchResponseBodyDataMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~NearbySearchResponseBodyDataMetadata() = default;
};
class NearbySearchResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> cityCode{};
  shared_ptr<string> cityName{};
  shared_ptr<string> distanceMeter{};
  shared_ptr<string> districtCode{};
  shared_ptr<string> districtName{};
  shared_ptr<string> id{};
  shared_ptr<vector<NearbySearchResponseBodyDataImages>> images{};
  shared_ptr<string> latitude{};
  shared_ptr<string> longitude{};
  shared_ptr<NearbySearchResponseBodyDataMetadata> metadata{};
  shared_ptr<string> name{};
  shared_ptr<string> provinceCode{};
  shared_ptr<string> provinceName{};
  shared_ptr<string> typeCode{};
  shared_ptr<string> types{};

  NearbySearchResponseBodyData() {}

  explicit NearbySearchResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<NearbySearchResponseBodyDataImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NearbySearchResponseBodyDataImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<NearbySearchResponseBodyDataImages>>(expect1);
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
        NearbySearchResponseBodyDataMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["metadata"]));
        metadata = make_shared<NearbySearchResponseBodyDataMetadata>(model1);
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


  virtual ~NearbySearchResponseBodyData() = default;
};
class NearbySearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<NearbySearchResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  NearbySearchResponseBody() {}

  explicit NearbySearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<NearbySearchResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NearbySearchResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<NearbySearchResponseBodyData>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~NearbySearchResponseBody() = default;
};
class NearbySearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<NearbySearchResponseBody> body{};

  NearbySearchResponse() {}

  explicit NearbySearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        NearbySearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<NearbySearchResponseBody>(model1);
      }
    }
  }


  virtual ~NearbySearchResponse() = default;
};
class NearbySearchNovaRequest : public Darabonba::Model {
public:
  shared_ptr<string> keywords{};
  shared_ptr<string> latitude{};
  shared_ptr<string> longitude{};
  shared_ptr<long> page{};
  shared_ptr<long> radius{};
  shared_ptr<long> size{};
  shared_ptr<string> types{};

  NearbySearchNovaRequest() {}

  explicit NearbySearchNovaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (types) {
      res["types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<vector<NearbySearchNovaResponseBodyData>> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  NearbySearchNovaResponseBody() {}

  explicit NearbySearchNovaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
class PlaceSearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> keywords{};
  shared_ptr<long> page{};
  shared_ptr<string> region{};
  shared_ptr<long> size{};
  shared_ptr<string> types{};

  PlaceSearchRequest() {}

  explicit PlaceSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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


  virtual ~PlaceSearchRequest() = default;
};
class PlaceSearchResponseBodyDataImages : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  PlaceSearchResponseBodyDataImages() {}

  explicit PlaceSearchResponseBodyDataImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PlaceSearchResponseBodyDataImages() = default;
};
class PlaceSearchResponseBodyDataMetadata : public Darabonba::Model {
public:
  shared_ptr<string> businessArea{};
  shared_ptr<string> dailyOpeningHours{};
  shared_ptr<string> mainTag{};
  shared_ptr<string> tag{};
  shared_ptr<string> weeklyOpeningDays{};

  PlaceSearchResponseBodyDataMetadata() {}

  explicit PlaceSearchResponseBodyDataMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tag) {
      res["tag"] = boost::any(*tag);
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
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("weeklyOpeningDays") != m.end() && !m["weeklyOpeningDays"].empty()) {
      weeklyOpeningDays = make_shared<string>(boost::any_cast<string>(m["weeklyOpeningDays"]));
    }
  }


  virtual ~PlaceSearchResponseBodyDataMetadata() = default;
};
class PlaceSearchResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> cityCode{};
  shared_ptr<string> cityName{};
  shared_ptr<string> districtCode{};
  shared_ptr<string> districtName{};
  shared_ptr<string> id{};
  shared_ptr<vector<PlaceSearchResponseBodyDataImages>> images{};
  shared_ptr<string> latitude{};
  shared_ptr<string> longitude{};
  shared_ptr<PlaceSearchResponseBodyDataMetadata> metadata{};
  shared_ptr<string> name{};
  shared_ptr<string> provinceCode{};
  shared_ptr<string> provinceName{};
  shared_ptr<string> typeCode{};
  shared_ptr<string> types{};

  PlaceSearchResponseBodyData() {}

  explicit PlaceSearchResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<PlaceSearchResponseBodyDataImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PlaceSearchResponseBodyDataImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<PlaceSearchResponseBodyDataImages>>(expect1);
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
        PlaceSearchResponseBodyDataMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["metadata"]));
        metadata = make_shared<PlaceSearchResponseBodyDataMetadata>(model1);
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


  virtual ~PlaceSearchResponseBodyData() = default;
};
class PlaceSearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<PlaceSearchResponseBodyData>> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  PlaceSearchResponseBody() {}

  explicit PlaceSearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<PlaceSearchResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PlaceSearchResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PlaceSearchResponseBodyData>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~PlaceSearchResponseBody() = default;
};
class PlaceSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PlaceSearchResponseBody> body{};

  PlaceSearchResponse() {}

  explicit PlaceSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PlaceSearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PlaceSearchResponseBody>(model1);
      }
    }
  }


  virtual ~PlaceSearchResponse() = default;
};
class PlaceSearchNovaRequest : public Darabonba::Model {
public:
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
  shared_ptr<vector<PlaceSearchNovaResponseBodyData>> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  PlaceSearchNovaResponseBody() {}

  explicit PlaceSearchNovaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<RgeoCodeResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  RgeoCodeResponseBody() {}

  explicit RgeoCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<WalkingDirectionNovaResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  WalkingDirectionNovaResponseBody() {}

  explicit WalkingDirectionNovaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  NearbySearchResponse nearbySearchWithOptions(shared_ptr<NearbySearchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  NearbySearchResponse nearbySearch(shared_ptr<NearbySearchRequest> request);
  NearbySearchNovaResponse nearbySearchNovaWithOptions(shared_ptr<NearbySearchNovaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  NearbySearchNovaResponse nearbySearchNova(shared_ptr<NearbySearchNovaRequest> request);
  PlaceSearchResponse placeSearchWithOptions(shared_ptr<PlaceSearchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PlaceSearchResponse placeSearch(shared_ptr<PlaceSearchRequest> request);
  PlaceSearchNovaResponse placeSearchNovaWithOptions(shared_ptr<PlaceSearchNovaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PlaceSearchNovaResponse placeSearchNova(shared_ptr<PlaceSearchNovaRequest> request);
  QueryAttractionsResponse queryAttractionsWithOptions(shared_ptr<QueryAttractionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAttractionsResponse queryAttractions(shared_ptr<QueryAttractionsRequest> request);
  QueryHotelsResponse queryHotelsWithOptions(shared_ptr<QueryHotelsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryHotelsResponse queryHotels(shared_ptr<QueryHotelsRequest> request);
  QueryRestaurantsResponse queryRestaurantsWithOptions(shared_ptr<QueryRestaurantsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRestaurantsResponse queryRestaurants(shared_ptr<QueryRestaurantsRequest> request);
  RgeoCodeResponse rgeoCodeWithOptions(shared_ptr<RgeoCodeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RgeoCodeResponse rgeoCode(shared_ptr<RgeoCodeRequest> request);
  WalkingDirectionNovaResponse walkingDirectionNovaWithOptions(shared_ptr<WalkingDirectionNovaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WalkingDirectionNovaResponse walkingDirectionNova(shared_ptr<WalkingDirectionNovaRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_IQS20240712

#endif
