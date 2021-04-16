// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CDRS20201101_H_
#define ALIBABACLOUD_CDRS20201101_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_CDRS20201101 {
class SearchObjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> objectType{};
  shared_ptr<string> vendor{};
  shared_ptr<string> feature{};
  shared_ptr<string> imageContent{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> deviceList{};
  shared_ptr<string> attributes{};
  shared_ptr<string> shotTimeStart{};
  shared_ptr<string> shotTimeEnd{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  SearchObjectRequest() {}

  explicit SearchObjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    if (feature) {
      res["Feature"] = boost::any(*feature);
    }
    if (imageContent) {
      res["ImageContent"] = boost::any(*imageContent);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (deviceList) {
      res["DeviceList"] = boost::any(*deviceList);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (shotTimeStart) {
      res["ShotTimeStart"] = boost::any(*shotTimeStart);
    }
    if (shotTimeEnd) {
      res["ShotTimeEnd"] = boost::any(*shotTimeEnd);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
    if (m.find("Feature") != m.end() && !m["Feature"].empty()) {
      feature = make_shared<string>(boost::any_cast<string>(m["Feature"]));
    }
    if (m.find("ImageContent") != m.end() && !m["ImageContent"].empty()) {
      imageContent = make_shared<string>(boost::any_cast<string>(m["ImageContent"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("DeviceList") != m.end() && !m["DeviceList"].empty()) {
      deviceList = make_shared<string>(boost::any_cast<string>(m["DeviceList"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      attributes = make_shared<string>(boost::any_cast<string>(m["Attributes"]));
    }
    if (m.find("ShotTimeStart") != m.end() && !m["ShotTimeStart"].empty()) {
      shotTimeStart = make_shared<string>(boost::any_cast<string>(m["ShotTimeStart"]));
    }
    if (m.find("ShotTimeEnd") != m.end() && !m["ShotTimeEnd"].empty()) {
      shotTimeEnd = make_shared<string>(boost::any_cast<string>(m["ShotTimeEnd"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~SearchObjectRequest() = default;
};
class SearchObjectResponseBodyDataBodyList : public Darabonba::Model {
public:
  shared_ptr<string> sourceImageUrl{};
  shared_ptr<string> deviceID{};
  shared_ptr<string> objectType{};
  shared_ptr<string> targetImageUrl{};
  shared_ptr<long> rightBottomY{};
  shared_ptr<long> leftTopY{};
  shared_ptr<double> score{};
  shared_ptr<string> shotTime{};
  shared_ptr<long> rightBottomX{};
  shared_ptr<long> leftTopX{};

  SearchObjectResponseBodyDataBodyList() {}

  explicit SearchObjectResponseBodyDataBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceImageUrl) {
      res["SourceImageUrl"] = boost::any(*sourceImageUrl);
    }
    if (deviceID) {
      res["DeviceID"] = boost::any(*deviceID);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (targetImageUrl) {
      res["TargetImageUrl"] = boost::any(*targetImageUrl);
    }
    if (rightBottomY) {
      res["RightBottomY"] = boost::any(*rightBottomY);
    }
    if (leftTopY) {
      res["LeftTopY"] = boost::any(*leftTopY);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (shotTime) {
      res["ShotTime"] = boost::any(*shotTime);
    }
    if (rightBottomX) {
      res["RightBottomX"] = boost::any(*rightBottomX);
    }
    if (leftTopX) {
      res["LeftTopX"] = boost::any(*leftTopX);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceImageUrl") != m.end() && !m["SourceImageUrl"].empty()) {
      sourceImageUrl = make_shared<string>(boost::any_cast<string>(m["SourceImageUrl"]));
    }
    if (m.find("DeviceID") != m.end() && !m["DeviceID"].empty()) {
      deviceID = make_shared<string>(boost::any_cast<string>(m["DeviceID"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("TargetImageUrl") != m.end() && !m["TargetImageUrl"].empty()) {
      targetImageUrl = make_shared<string>(boost::any_cast<string>(m["TargetImageUrl"]));
    }
    if (m.find("RightBottomY") != m.end() && !m["RightBottomY"].empty()) {
      rightBottomY = make_shared<long>(boost::any_cast<long>(m["RightBottomY"]));
    }
    if (m.find("LeftTopY") != m.end() && !m["LeftTopY"].empty()) {
      leftTopY = make_shared<long>(boost::any_cast<long>(m["LeftTopY"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("ShotTime") != m.end() && !m["ShotTime"].empty()) {
      shotTime = make_shared<string>(boost::any_cast<string>(m["ShotTime"]));
    }
    if (m.find("RightBottomX") != m.end() && !m["RightBottomX"].empty()) {
      rightBottomX = make_shared<long>(boost::any_cast<long>(m["RightBottomX"]));
    }
    if (m.find("LeftTopX") != m.end() && !m["LeftTopX"].empty()) {
      leftTopX = make_shared<long>(boost::any_cast<long>(m["LeftTopX"]));
    }
  }


  virtual ~SearchObjectResponseBodyDataBodyList() = default;
};
class SearchObjectResponseBodyDataFaceList : public Darabonba::Model {
public:
  shared_ptr<string> sourceImageUrl{};
  shared_ptr<string> deviceID{};
  shared_ptr<string> objectType{};
  shared_ptr<string> targetImageUrl{};
  shared_ptr<long> rightBottomY{};
  shared_ptr<long> leftTopY{};
  shared_ptr<double> score{};
  shared_ptr<string> shotTime{};
  shared_ptr<long> rightBottomX{};
  shared_ptr<long> leftTopX{};

  SearchObjectResponseBodyDataFaceList() {}

  explicit SearchObjectResponseBodyDataFaceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceImageUrl) {
      res["SourceImageUrl"] = boost::any(*sourceImageUrl);
    }
    if (deviceID) {
      res["DeviceID"] = boost::any(*deviceID);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (targetImageUrl) {
      res["TargetImageUrl"] = boost::any(*targetImageUrl);
    }
    if (rightBottomY) {
      res["RightBottomY"] = boost::any(*rightBottomY);
    }
    if (leftTopY) {
      res["LeftTopY"] = boost::any(*leftTopY);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (shotTime) {
      res["ShotTime"] = boost::any(*shotTime);
    }
    if (rightBottomX) {
      res["RightBottomX"] = boost::any(*rightBottomX);
    }
    if (leftTopX) {
      res["LeftTopX"] = boost::any(*leftTopX);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceImageUrl") != m.end() && !m["SourceImageUrl"].empty()) {
      sourceImageUrl = make_shared<string>(boost::any_cast<string>(m["SourceImageUrl"]));
    }
    if (m.find("DeviceID") != m.end() && !m["DeviceID"].empty()) {
      deviceID = make_shared<string>(boost::any_cast<string>(m["DeviceID"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("TargetImageUrl") != m.end() && !m["TargetImageUrl"].empty()) {
      targetImageUrl = make_shared<string>(boost::any_cast<string>(m["TargetImageUrl"]));
    }
    if (m.find("RightBottomY") != m.end() && !m["RightBottomY"].empty()) {
      rightBottomY = make_shared<long>(boost::any_cast<long>(m["RightBottomY"]));
    }
    if (m.find("LeftTopY") != m.end() && !m["LeftTopY"].empty()) {
      leftTopY = make_shared<long>(boost::any_cast<long>(m["LeftTopY"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("ShotTime") != m.end() && !m["ShotTime"].empty()) {
      shotTime = make_shared<string>(boost::any_cast<string>(m["ShotTime"]));
    }
    if (m.find("RightBottomX") != m.end() && !m["RightBottomX"].empty()) {
      rightBottomX = make_shared<long>(boost::any_cast<long>(m["RightBottomX"]));
    }
    if (m.find("LeftTopX") != m.end() && !m["LeftTopX"].empty()) {
      leftTopX = make_shared<long>(boost::any_cast<long>(m["LeftTopX"]));
    }
  }


  virtual ~SearchObjectResponseBodyDataFaceList() = default;
};
class SearchObjectResponseBodyDataMotorList : public Darabonba::Model {
public:
  shared_ptr<string> sourceImageUrl{};
  shared_ptr<string> deviceID{};
  shared_ptr<string> objectType{};
  shared_ptr<string> targetImageUrl{};
  shared_ptr<long> rightBottomY{};
  shared_ptr<long> leftTopY{};
  shared_ptr<double> score{};
  shared_ptr<string> shotTime{};
  shared_ptr<long> rightBottomX{};
  shared_ptr<long> leftTopX{};

  SearchObjectResponseBodyDataMotorList() {}

  explicit SearchObjectResponseBodyDataMotorList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceImageUrl) {
      res["SourceImageUrl"] = boost::any(*sourceImageUrl);
    }
    if (deviceID) {
      res["DeviceID"] = boost::any(*deviceID);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (targetImageUrl) {
      res["TargetImageUrl"] = boost::any(*targetImageUrl);
    }
    if (rightBottomY) {
      res["RightBottomY"] = boost::any(*rightBottomY);
    }
    if (leftTopY) {
      res["LeftTopY"] = boost::any(*leftTopY);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (shotTime) {
      res["ShotTime"] = boost::any(*shotTime);
    }
    if (rightBottomX) {
      res["RightBottomX"] = boost::any(*rightBottomX);
    }
    if (leftTopX) {
      res["LeftTopX"] = boost::any(*leftTopX);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceImageUrl") != m.end() && !m["SourceImageUrl"].empty()) {
      sourceImageUrl = make_shared<string>(boost::any_cast<string>(m["SourceImageUrl"]));
    }
    if (m.find("DeviceID") != m.end() && !m["DeviceID"].empty()) {
      deviceID = make_shared<string>(boost::any_cast<string>(m["DeviceID"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("TargetImageUrl") != m.end() && !m["TargetImageUrl"].empty()) {
      targetImageUrl = make_shared<string>(boost::any_cast<string>(m["TargetImageUrl"]));
    }
    if (m.find("RightBottomY") != m.end() && !m["RightBottomY"].empty()) {
      rightBottomY = make_shared<long>(boost::any_cast<long>(m["RightBottomY"]));
    }
    if (m.find("LeftTopY") != m.end() && !m["LeftTopY"].empty()) {
      leftTopY = make_shared<long>(boost::any_cast<long>(m["LeftTopY"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("ShotTime") != m.end() && !m["ShotTime"].empty()) {
      shotTime = make_shared<string>(boost::any_cast<string>(m["ShotTime"]));
    }
    if (m.find("RightBottomX") != m.end() && !m["RightBottomX"].empty()) {
      rightBottomX = make_shared<long>(boost::any_cast<long>(m["RightBottomX"]));
    }
    if (m.find("LeftTopX") != m.end() && !m["LeftTopX"].empty()) {
      leftTopX = make_shared<long>(boost::any_cast<long>(m["LeftTopX"]));
    }
  }


  virtual ~SearchObjectResponseBodyDataMotorList() = default;
};
class SearchObjectResponseBodyDataNonMotorList : public Darabonba::Model {
public:
  shared_ptr<string> sourceImageUrl{};
  shared_ptr<string> deviceID{};
  shared_ptr<string> objectType{};
  shared_ptr<string> targetImageUrl{};
  shared_ptr<long> rightBottomY{};
  shared_ptr<long> leftTopY{};
  shared_ptr<double> score{};
  shared_ptr<string> shotTime{};
  shared_ptr<long> rightBottomX{};
  shared_ptr<long> leftTopX{};

  SearchObjectResponseBodyDataNonMotorList() {}

  explicit SearchObjectResponseBodyDataNonMotorList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceImageUrl) {
      res["SourceImageUrl"] = boost::any(*sourceImageUrl);
    }
    if (deviceID) {
      res["DeviceID"] = boost::any(*deviceID);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (targetImageUrl) {
      res["TargetImageUrl"] = boost::any(*targetImageUrl);
    }
    if (rightBottomY) {
      res["RightBottomY"] = boost::any(*rightBottomY);
    }
    if (leftTopY) {
      res["LeftTopY"] = boost::any(*leftTopY);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (shotTime) {
      res["ShotTime"] = boost::any(*shotTime);
    }
    if (rightBottomX) {
      res["RightBottomX"] = boost::any(*rightBottomX);
    }
    if (leftTopX) {
      res["LeftTopX"] = boost::any(*leftTopX);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceImageUrl") != m.end() && !m["SourceImageUrl"].empty()) {
      sourceImageUrl = make_shared<string>(boost::any_cast<string>(m["SourceImageUrl"]));
    }
    if (m.find("DeviceID") != m.end() && !m["DeviceID"].empty()) {
      deviceID = make_shared<string>(boost::any_cast<string>(m["DeviceID"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("TargetImageUrl") != m.end() && !m["TargetImageUrl"].empty()) {
      targetImageUrl = make_shared<string>(boost::any_cast<string>(m["TargetImageUrl"]));
    }
    if (m.find("RightBottomY") != m.end() && !m["RightBottomY"].empty()) {
      rightBottomY = make_shared<long>(boost::any_cast<long>(m["RightBottomY"]));
    }
    if (m.find("LeftTopY") != m.end() && !m["LeftTopY"].empty()) {
      leftTopY = make_shared<long>(boost::any_cast<long>(m["LeftTopY"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("ShotTime") != m.end() && !m["ShotTime"].empty()) {
      shotTime = make_shared<string>(boost::any_cast<string>(m["ShotTime"]));
    }
    if (m.find("RightBottomX") != m.end() && !m["RightBottomX"].empty()) {
      rightBottomX = make_shared<long>(boost::any_cast<long>(m["RightBottomX"]));
    }
    if (m.find("LeftTopX") != m.end() && !m["LeftTopX"].empty()) {
      leftTopX = make_shared<long>(boost::any_cast<long>(m["LeftTopX"]));
    }
  }


  virtual ~SearchObjectResponseBodyDataNonMotorList() = default;
};
class SearchObjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SearchObjectResponseBodyDataBodyList>> bodyList{};
  shared_ptr<vector<SearchObjectResponseBodyDataFaceList>> faceList{};
  shared_ptr<vector<SearchObjectResponseBodyDataMotorList>> motorList{};
  shared_ptr<vector<SearchObjectResponseBodyDataNonMotorList>> nonMotorList{};

  SearchObjectResponseBodyData() {}

  explicit SearchObjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyList) {
      vector<boost::any> temp1;
      for(auto item1:*bodyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BodyList"] = boost::any(temp1);
    }
    if (faceList) {
      vector<boost::any> temp1;
      for(auto item1:*faceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceList"] = boost::any(temp1);
    }
    if (motorList) {
      vector<boost::any> temp1;
      for(auto item1:*motorList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MotorList"] = boost::any(temp1);
    }
    if (nonMotorList) {
      vector<boost::any> temp1;
      for(auto item1:*nonMotorList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NonMotorList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyList") != m.end() && !m["BodyList"].empty()) {
      if (typeid(vector<boost::any>) == m["BodyList"].type()) {
        vector<SearchObjectResponseBodyDataBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BodyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchObjectResponseBodyDataBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bodyList = make_shared<vector<SearchObjectResponseBodyDataBodyList>>(expect1);
      }
    }
    if (m.find("FaceList") != m.end() && !m["FaceList"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceList"].type()) {
        vector<SearchObjectResponseBodyDataFaceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchObjectResponseBodyDataFaceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceList = make_shared<vector<SearchObjectResponseBodyDataFaceList>>(expect1);
      }
    }
    if (m.find("MotorList") != m.end() && !m["MotorList"].empty()) {
      if (typeid(vector<boost::any>) == m["MotorList"].type()) {
        vector<SearchObjectResponseBodyDataMotorList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MotorList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchObjectResponseBodyDataMotorList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        motorList = make_shared<vector<SearchObjectResponseBodyDataMotorList>>(expect1);
      }
    }
    if (m.find("NonMotorList") != m.end() && !m["NonMotorList"].empty()) {
      if (typeid(vector<boost::any>) == m["NonMotorList"].type()) {
        vector<SearchObjectResponseBodyDataNonMotorList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NonMotorList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchObjectResponseBodyDataNonMotorList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nonMotorList = make_shared<vector<SearchObjectResponseBodyDataNonMotorList>>(expect1);
      }
    }
  }


  virtual ~SearchObjectResponseBodyData() = default;
};
class SearchObjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<SearchObjectResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SearchObjectResponseBody() {}

  explicit SearchObjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SearchObjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SearchObjectResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SearchObjectResponseBody() = default;
};
class SearchObjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SearchObjectResponseBody> body{};

  SearchObjectResponse() {}

  explicit SearchObjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SearchObjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchObjectResponseBody>(model1);
      }
    }
  }


  virtual ~SearchObjectResponse() = default;
};
class ListAreaHotSpotMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> personId{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  ListAreaHotSpotMetricsRequest() {}

  explicit ListAreaHotSpotMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListAreaHotSpotMetricsRequest() = default;
};
class ListAreaHotSpotMetricsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> coordinates{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> times{};
  shared_ptr<string> intervalTime{};
  shared_ptr<string> personId{};

  ListAreaHotSpotMetricsResponseBodyData() {}

  explicit ListAreaHotSpotMetricsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coordinates) {
      res["Coordinates"] = boost::any(*coordinates);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (times) {
      res["Times"] = boost::any(*times);
    }
    if (intervalTime) {
      res["IntervalTime"] = boost::any(*intervalTime);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Coordinates") != m.end() && !m["Coordinates"].empty()) {
      coordinates = make_shared<string>(boost::any_cast<string>(m["Coordinates"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Times") != m.end() && !m["Times"].empty()) {
      times = make_shared<string>(boost::any_cast<string>(m["Times"]));
    }
    if (m.find("IntervalTime") != m.end() && !m["IntervalTime"].empty()) {
      intervalTime = make_shared<string>(boost::any_cast<string>(m["IntervalTime"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
  }


  virtual ~ListAreaHotSpotMetricsResponseBodyData() = default;
};
class ListAreaHotSpotMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> pageNumber{};
  shared_ptr<vector<ListAreaHotSpotMetricsResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListAreaHotSpotMetricsResponseBody() {}

  explicit ListAreaHotSpotMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAreaHotSpotMetricsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAreaHotSpotMetricsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAreaHotSpotMetricsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListAreaHotSpotMetricsResponseBody() = default;
};
class ListAreaHotSpotMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAreaHotSpotMetricsResponseBody> body{};

  ListAreaHotSpotMetricsResponse() {}

  explicit ListAreaHotSpotMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAreaHotSpotMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAreaHotSpotMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAreaHotSpotMetricsResponse() = default;
};
class BindDeviceRequestDevices : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> corpId{};

  BindDeviceRequestDevices() {}

  explicit BindDeviceRequestDevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
  }


  virtual ~BindDeviceRequestDevices() = default;
};
class BindDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<vector<BindDeviceRequestDevices>> devices{};

  BindDeviceRequest() {}

  explicit BindDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (devices) {
      vector<boost::any> temp1;
      for(auto item1:*devices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Devices"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("Devices") != m.end() && !m["Devices"].empty()) {
      if (typeid(vector<boost::any>) == m["Devices"].type()) {
        vector<BindDeviceRequestDevices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Devices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BindDeviceRequestDevices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        devices = make_shared<vector<BindDeviceRequestDevices>>(expect1);
      }
    }
  }


  virtual ~BindDeviceRequest() = default;
};
class BindDeviceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  BindDeviceResponseBodyData() {}

  explicit BindDeviceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~BindDeviceResponseBodyData() = default;
};
class BindDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<BindDeviceResponseBodyData>> data{};
  shared_ptr<string> code{};

  BindDeviceResponseBody() {}

  explicit BindDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<BindDeviceResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BindDeviceResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<BindDeviceResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~BindDeviceResponseBody() = default;
};
class BindDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BindDeviceResponseBody> body{};

  BindDeviceResponse() {}

  explicit BindDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BindDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~BindDeviceResponse() = default;
};
class GetCdrsMonitorResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> minRecordId{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> algorithmVendor{};

  GetCdrsMonitorResultRequest() {}

  explicit GetCdrsMonitorResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (minRecordId) {
      res["MinRecordId"] = boost::any(*minRecordId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (algorithmVendor) {
      res["AlgorithmVendor"] = boost::any(*algorithmVendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("MinRecordId") != m.end() && !m["MinRecordId"].empty()) {
      minRecordId = make_shared<string>(boost::any_cast<string>(m["MinRecordId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("AlgorithmVendor") != m.end() && !m["AlgorithmVendor"].empty()) {
      algorithmVendor = make_shared<string>(boost::any_cast<string>(m["AlgorithmVendor"]));
    }
  }


  virtual ~GetCdrsMonitorResultRequest() = default;
};
class GetCdrsMonitorResultResponseBodyDataRecordsExtendInfo : public Darabonba::Model {
public:
  shared_ptr<string> plateNo{};

  GetCdrsMonitorResultResponseBodyDataRecordsExtendInfo() {}

  explicit GetCdrsMonitorResultResponseBodyDataRecordsExtendInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (plateNo) {
      res["PlateNo"] = boost::any(*plateNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlateNo") != m.end() && !m["PlateNo"].empty()) {
      plateNo = make_shared<string>(boost::any_cast<string>(m["PlateNo"]));
    }
  }


  virtual ~GetCdrsMonitorResultResponseBodyDataRecordsExtendInfo() = default;
};
class GetCdrsMonitorResultResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> picUrl{};
  shared_ptr<string> rightBottomY{};
  shared_ptr<string> score{};
  shared_ptr<string> monitorPicUrl{};
  shared_ptr<string> rightBottomX{};
  shared_ptr<GetCdrsMonitorResultResponseBodyDataRecordsExtendInfo> extendInfo{};
  shared_ptr<string> gbId{};
  shared_ptr<string> leftUpY{};
  shared_ptr<string> leftUpX{};
  shared_ptr<string> shotTime{};
  shared_ptr<string> taskId{};
  shared_ptr<string> targetPicUrl{};

  GetCdrsMonitorResultResponseBodyDataRecords() {}

  explicit GetCdrsMonitorResultResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (rightBottomY) {
      res["RightBottomY"] = boost::any(*rightBottomY);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (monitorPicUrl) {
      res["MonitorPicUrl"] = boost::any(*monitorPicUrl);
    }
    if (rightBottomX) {
      res["RightBottomX"] = boost::any(*rightBottomX);
    }
    if (extendInfo) {
      res["ExtendInfo"] = extendInfo ? boost::any(extendInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (leftUpY) {
      res["LeftUpY"] = boost::any(*leftUpY);
    }
    if (leftUpX) {
      res["LeftUpX"] = boost::any(*leftUpX);
    }
    if (shotTime) {
      res["ShotTime"] = boost::any(*shotTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (targetPicUrl) {
      res["TargetPicUrl"] = boost::any(*targetPicUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("RightBottomY") != m.end() && !m["RightBottomY"].empty()) {
      rightBottomY = make_shared<string>(boost::any_cast<string>(m["RightBottomY"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("MonitorPicUrl") != m.end() && !m["MonitorPicUrl"].empty()) {
      monitorPicUrl = make_shared<string>(boost::any_cast<string>(m["MonitorPicUrl"]));
    }
    if (m.find("RightBottomX") != m.end() && !m["RightBottomX"].empty()) {
      rightBottomX = make_shared<string>(boost::any_cast<string>(m["RightBottomX"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtendInfo"].type()) {
        GetCdrsMonitorResultResponseBodyDataRecordsExtendInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtendInfo"]));
        extendInfo = make_shared<GetCdrsMonitorResultResponseBodyDataRecordsExtendInfo>(model1);
      }
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("LeftUpY") != m.end() && !m["LeftUpY"].empty()) {
      leftUpY = make_shared<string>(boost::any_cast<string>(m["LeftUpY"]));
    }
    if (m.find("LeftUpX") != m.end() && !m["LeftUpX"].empty()) {
      leftUpX = make_shared<string>(boost::any_cast<string>(m["LeftUpX"]));
    }
    if (m.find("ShotTime") != m.end() && !m["ShotTime"].empty()) {
      shotTime = make_shared<string>(boost::any_cast<string>(m["ShotTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TargetPicUrl") != m.end() && !m["TargetPicUrl"].empty()) {
      targetPicUrl = make_shared<string>(boost::any_cast<string>(m["TargetPicUrl"]));
    }
  }


  virtual ~GetCdrsMonitorResultResponseBodyDataRecords() = default;
};
class GetCdrsMonitorResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> maxId{};
  shared_ptr<vector<GetCdrsMonitorResultResponseBodyDataRecords>> records{};

  GetCdrsMonitorResultResponseBodyData() {}

  explicit GetCdrsMonitorResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxId) {
      res["MaxId"] = boost::any(*maxId);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxId") != m.end() && !m["MaxId"].empty()) {
      maxId = make_shared<string>(boost::any_cast<string>(m["MaxId"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<GetCdrsMonitorResultResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCdrsMonitorResultResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetCdrsMonitorResultResponseBodyDataRecords>>(expect1);
      }
    }
  }


  virtual ~GetCdrsMonitorResultResponseBodyData() = default;
};
class GetCdrsMonitorResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetCdrsMonitorResultResponseBodyData> data{};
  shared_ptr<string> code{};

  GetCdrsMonitorResultResponseBody() {}

  explicit GetCdrsMonitorResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCdrsMonitorResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCdrsMonitorResultResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~GetCdrsMonitorResultResponseBody() = default;
};
class GetCdrsMonitorResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCdrsMonitorResultResponseBody> body{};

  GetCdrsMonitorResultResponse() {}

  explicit GetCdrsMonitorResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCdrsMonitorResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCdrsMonitorResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetCdrsMonitorResultResponse() = default;
};
class ListVehicleDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> plateId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  ListVehicleDetailsRequest() {}

  explicit ListVehicleDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (plateId) {
      res["PlateId"] = boost::any(*plateId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("PlateId") != m.end() && !m["PlateId"].empty()) {
      plateId = make_shared<string>(boost::any_cast<string>(m["PlateId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListVehicleDetailsRequest() = default;
};
class ListVehicleDetailsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> vehicleApplication{};
  shared_ptr<string> sourceUrl{};
  shared_ptr<string> gender{};
  shared_ptr<string> vehicleColor{};
  shared_ptr<string> vehicleId{};
  shared_ptr<string> sourceImageStoragePath{};
  shared_ptr<string> personType{};
  shared_ptr<string> popularPoi{};
  shared_ptr<string> popularAddress{};
  shared_ptr<string> plateId{};
  shared_ptr<string> targetUrl{};
  shared_ptr<string> vehicleClass{};
  shared_ptr<string> prefOutTime{};
  shared_ptr<string> personId{};
  shared_ptr<string> targetImageStoragePath{};

  ListVehicleDetailsResponseBodyData() {}

  explicit ListVehicleDetailsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vehicleApplication) {
      res["VehicleApplication"] = boost::any(*vehicleApplication);
    }
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (vehicleColor) {
      res["VehicleColor"] = boost::any(*vehicleColor);
    }
    if (vehicleId) {
      res["VehicleId"] = boost::any(*vehicleId);
    }
    if (sourceImageStoragePath) {
      res["SourceImageStoragePath"] = boost::any(*sourceImageStoragePath);
    }
    if (personType) {
      res["PersonType"] = boost::any(*personType);
    }
    if (popularPoi) {
      res["PopularPoi"] = boost::any(*popularPoi);
    }
    if (popularAddress) {
      res["PopularAddress"] = boost::any(*popularAddress);
    }
    if (plateId) {
      res["PlateId"] = boost::any(*plateId);
    }
    if (targetUrl) {
      res["TargetUrl"] = boost::any(*targetUrl);
    }
    if (vehicleClass) {
      res["VehicleClass"] = boost::any(*vehicleClass);
    }
    if (prefOutTime) {
      res["PrefOutTime"] = boost::any(*prefOutTime);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    if (targetImageStoragePath) {
      res["TargetImageStoragePath"] = boost::any(*targetImageStoragePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VehicleApplication") != m.end() && !m["VehicleApplication"].empty()) {
      vehicleApplication = make_shared<string>(boost::any_cast<string>(m["VehicleApplication"]));
    }
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("VehicleColor") != m.end() && !m["VehicleColor"].empty()) {
      vehicleColor = make_shared<string>(boost::any_cast<string>(m["VehicleColor"]));
    }
    if (m.find("VehicleId") != m.end() && !m["VehicleId"].empty()) {
      vehicleId = make_shared<string>(boost::any_cast<string>(m["VehicleId"]));
    }
    if (m.find("SourceImageStoragePath") != m.end() && !m["SourceImageStoragePath"].empty()) {
      sourceImageStoragePath = make_shared<string>(boost::any_cast<string>(m["SourceImageStoragePath"]));
    }
    if (m.find("PersonType") != m.end() && !m["PersonType"].empty()) {
      personType = make_shared<string>(boost::any_cast<string>(m["PersonType"]));
    }
    if (m.find("PopularPoi") != m.end() && !m["PopularPoi"].empty()) {
      popularPoi = make_shared<string>(boost::any_cast<string>(m["PopularPoi"]));
    }
    if (m.find("PopularAddress") != m.end() && !m["PopularAddress"].empty()) {
      popularAddress = make_shared<string>(boost::any_cast<string>(m["PopularAddress"]));
    }
    if (m.find("PlateId") != m.end() && !m["PlateId"].empty()) {
      plateId = make_shared<string>(boost::any_cast<string>(m["PlateId"]));
    }
    if (m.find("TargetUrl") != m.end() && !m["TargetUrl"].empty()) {
      targetUrl = make_shared<string>(boost::any_cast<string>(m["TargetUrl"]));
    }
    if (m.find("VehicleClass") != m.end() && !m["VehicleClass"].empty()) {
      vehicleClass = make_shared<string>(boost::any_cast<string>(m["VehicleClass"]));
    }
    if (m.find("PrefOutTime") != m.end() && !m["PrefOutTime"].empty()) {
      prefOutTime = make_shared<string>(boost::any_cast<string>(m["PrefOutTime"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
    if (m.find("TargetImageStoragePath") != m.end() && !m["TargetImageStoragePath"].empty()) {
      targetImageStoragePath = make_shared<string>(boost::any_cast<string>(m["TargetImageStoragePath"]));
    }
  }


  virtual ~ListVehicleDetailsResponseBodyData() = default;
};
class ListVehicleDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListVehicleDetailsResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListVehicleDetailsResponseBody() {}

  explicit ListVehicleDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVehicleDetailsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVehicleDetailsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVehicleDetailsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListVehicleDetailsResponseBody() = default;
};
class ListVehicleDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVehicleDetailsResponseBody> body{};

  ListVehicleDetailsResponse() {}

  explicit ListVehicleDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVehicleDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVehicleDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVehicleDetailsResponse() = default;
};
class GetCdrsMonitorListRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  GetCdrsMonitorListRequest() {}

  explicit GetCdrsMonitorListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~GetCdrsMonitorListRequest() = default;
};
class GetCdrsMonitorListResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> ruleExpression{};
  shared_ptr<string> imageMatch{};
  shared_ptr<string> monitorType{};
  shared_ptr<string> createDate{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> notifierType{};
  shared_ptr<string> description{};
  shared_ptr<string> expression{};
  shared_ptr<string> notifierExtra{};
  shared_ptr<string> attributes{};
  shared_ptr<string> deviceList{};
  shared_ptr<string> taskId{};
  shared_ptr<string> modifiedDate{};
  shared_ptr<string> algorithmVendor{};

  GetCdrsMonitorListResponseBodyDataRecords() {}

  explicit GetCdrsMonitorListResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (ruleExpression) {
      res["RuleExpression"] = boost::any(*ruleExpression);
    }
    if (imageMatch) {
      res["ImageMatch"] = boost::any(*imageMatch);
    }
    if (monitorType) {
      res["MonitorType"] = boost::any(*monitorType);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (notifierType) {
      res["NotifierType"] = boost::any(*notifierType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (notifierExtra) {
      res["NotifierExtra"] = boost::any(*notifierExtra);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (deviceList) {
      res["DeviceList"] = boost::any(*deviceList);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (modifiedDate) {
      res["ModifiedDate"] = boost::any(*modifiedDate);
    }
    if (algorithmVendor) {
      res["AlgorithmVendor"] = boost::any(*algorithmVendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RuleExpression") != m.end() && !m["RuleExpression"].empty()) {
      ruleExpression = make_shared<string>(boost::any_cast<string>(m["RuleExpression"]));
    }
    if (m.find("ImageMatch") != m.end() && !m["ImageMatch"].empty()) {
      imageMatch = make_shared<string>(boost::any_cast<string>(m["ImageMatch"]));
    }
    if (m.find("MonitorType") != m.end() && !m["MonitorType"].empty()) {
      monitorType = make_shared<string>(boost::any_cast<string>(m["MonitorType"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("NotifierType") != m.end() && !m["NotifierType"].empty()) {
      notifierType = make_shared<string>(boost::any_cast<string>(m["NotifierType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("NotifierExtra") != m.end() && !m["NotifierExtra"].empty()) {
      notifierExtra = make_shared<string>(boost::any_cast<string>(m["NotifierExtra"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      attributes = make_shared<string>(boost::any_cast<string>(m["Attributes"]));
    }
    if (m.find("DeviceList") != m.end() && !m["DeviceList"].empty()) {
      deviceList = make_shared<string>(boost::any_cast<string>(m["DeviceList"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("ModifiedDate") != m.end() && !m["ModifiedDate"].empty()) {
      modifiedDate = make_shared<string>(boost::any_cast<string>(m["ModifiedDate"]));
    }
    if (m.find("AlgorithmVendor") != m.end() && !m["AlgorithmVendor"].empty()) {
      algorithmVendor = make_shared<string>(boost::any_cast<string>(m["AlgorithmVendor"]));
    }
  }


  virtual ~GetCdrsMonitorListResponseBodyDataRecords() = default;
};
class GetCdrsMonitorListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetCdrsMonitorListResponseBodyDataRecords>> records{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> totalPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  GetCdrsMonitorListResponseBodyData() {}

  explicit GetCdrsMonitorListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<GetCdrsMonitorListResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCdrsMonitorListResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetCdrsMonitorListResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetCdrsMonitorListResponseBodyData() = default;
};
class GetCdrsMonitorListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetCdrsMonitorListResponseBodyData> data{};
  shared_ptr<string> code{};

  GetCdrsMonitorListResponseBody() {}

  explicit GetCdrsMonitorListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCdrsMonitorListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCdrsMonitorListResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~GetCdrsMonitorListResponseBody() = default;
};
class GetCdrsMonitorListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCdrsMonitorListResponseBody> body{};

  GetCdrsMonitorListResponse() {}

  explicit GetCdrsMonitorListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCdrsMonitorListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCdrsMonitorListResponseBody>(model1);
      }
    }
  }


  virtual ~GetCdrsMonitorListResponse() = default;
};
class UpdateMonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> deviceOperateType{};
  shared_ptr<string> deviceList{};
  shared_ptr<string> picOperateType{};
  shared_ptr<string> picList{};
  shared_ptr<string> attributeOperateType{};
  shared_ptr<string> attributeName{};
  shared_ptr<string> attributeValueList{};
  shared_ptr<string> description{};
  shared_ptr<string> ruleExpression{};
  shared_ptr<string> algorithmVendor{};
  shared_ptr<string> notifierType{};
  shared_ptr<string> notifierUrl{};
  shared_ptr<string> notifierAppSecret{};
  shared_ptr<long> notifierTimeOut{};
  shared_ptr<string> notifierExtendValues{};
  shared_ptr<string> picExtendList{};

  UpdateMonitorRequest() {}

  explicit UpdateMonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (deviceOperateType) {
      res["DeviceOperateType"] = boost::any(*deviceOperateType);
    }
    if (deviceList) {
      res["DeviceList"] = boost::any(*deviceList);
    }
    if (picOperateType) {
      res["PicOperateType"] = boost::any(*picOperateType);
    }
    if (picList) {
      res["PicList"] = boost::any(*picList);
    }
    if (attributeOperateType) {
      res["AttributeOperateType"] = boost::any(*attributeOperateType);
    }
    if (attributeName) {
      res["AttributeName"] = boost::any(*attributeName);
    }
    if (attributeValueList) {
      res["AttributeValueList"] = boost::any(*attributeValueList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ruleExpression) {
      res["RuleExpression"] = boost::any(*ruleExpression);
    }
    if (algorithmVendor) {
      res["AlgorithmVendor"] = boost::any(*algorithmVendor);
    }
    if (notifierType) {
      res["NotifierType"] = boost::any(*notifierType);
    }
    if (notifierUrl) {
      res["NotifierUrl"] = boost::any(*notifierUrl);
    }
    if (notifierAppSecret) {
      res["NotifierAppSecret"] = boost::any(*notifierAppSecret);
    }
    if (notifierTimeOut) {
      res["NotifierTimeOut"] = boost::any(*notifierTimeOut);
    }
    if (notifierExtendValues) {
      res["NotifierExtendValues"] = boost::any(*notifierExtendValues);
    }
    if (picExtendList) {
      res["PicExtendList"] = boost::any(*picExtendList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("DeviceOperateType") != m.end() && !m["DeviceOperateType"].empty()) {
      deviceOperateType = make_shared<string>(boost::any_cast<string>(m["DeviceOperateType"]));
    }
    if (m.find("DeviceList") != m.end() && !m["DeviceList"].empty()) {
      deviceList = make_shared<string>(boost::any_cast<string>(m["DeviceList"]));
    }
    if (m.find("PicOperateType") != m.end() && !m["PicOperateType"].empty()) {
      picOperateType = make_shared<string>(boost::any_cast<string>(m["PicOperateType"]));
    }
    if (m.find("PicList") != m.end() && !m["PicList"].empty()) {
      picList = make_shared<string>(boost::any_cast<string>(m["PicList"]));
    }
    if (m.find("AttributeOperateType") != m.end() && !m["AttributeOperateType"].empty()) {
      attributeOperateType = make_shared<string>(boost::any_cast<string>(m["AttributeOperateType"]));
    }
    if (m.find("AttributeName") != m.end() && !m["AttributeName"].empty()) {
      attributeName = make_shared<string>(boost::any_cast<string>(m["AttributeName"]));
    }
    if (m.find("AttributeValueList") != m.end() && !m["AttributeValueList"].empty()) {
      attributeValueList = make_shared<string>(boost::any_cast<string>(m["AttributeValueList"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RuleExpression") != m.end() && !m["RuleExpression"].empty()) {
      ruleExpression = make_shared<string>(boost::any_cast<string>(m["RuleExpression"]));
    }
    if (m.find("AlgorithmVendor") != m.end() && !m["AlgorithmVendor"].empty()) {
      algorithmVendor = make_shared<string>(boost::any_cast<string>(m["AlgorithmVendor"]));
    }
    if (m.find("NotifierType") != m.end() && !m["NotifierType"].empty()) {
      notifierType = make_shared<string>(boost::any_cast<string>(m["NotifierType"]));
    }
    if (m.find("NotifierUrl") != m.end() && !m["NotifierUrl"].empty()) {
      notifierUrl = make_shared<string>(boost::any_cast<string>(m["NotifierUrl"]));
    }
    if (m.find("NotifierAppSecret") != m.end() && !m["NotifierAppSecret"].empty()) {
      notifierAppSecret = make_shared<string>(boost::any_cast<string>(m["NotifierAppSecret"]));
    }
    if (m.find("NotifierTimeOut") != m.end() && !m["NotifierTimeOut"].empty()) {
      notifierTimeOut = make_shared<long>(boost::any_cast<long>(m["NotifierTimeOut"]));
    }
    if (m.find("NotifierExtendValues") != m.end() && !m["NotifierExtendValues"].empty()) {
      notifierExtendValues = make_shared<string>(boost::any_cast<string>(m["NotifierExtendValues"]));
    }
    if (m.find("PicExtendList") != m.end() && !m["PicExtendList"].empty()) {
      picExtendList = make_shared<string>(boost::any_cast<string>(m["PicExtendList"]));
    }
  }


  virtual ~UpdateMonitorRequest() = default;
};
class UpdateMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};

  UpdateMonitorResponseBody() {}

  explicit UpdateMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~UpdateMonitorResponseBody() = default;
};
class UpdateMonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateMonitorResponseBody> body{};

  UpdateMonitorResponse() {}

  explicit UpdateMonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateMonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMonitorResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMonitorResponse() = default;
};
class ListDataStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> backCategory{};
  shared_ptr<string> schema{};

  ListDataStatisticsRequest() {}

  explicit ListDataStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backCategory) {
      res["BackCategory"] = boost::any(*backCategory);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackCategory") != m.end() && !m["BackCategory"].empty()) {
      backCategory = make_shared<string>(boost::any_cast<string>(m["BackCategory"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
  }


  virtual ~ListDataStatisticsRequest() = default;
};
class ListDataStatisticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> number{};

  ListDataStatisticsResponseBodyData() {}

  explicit ListDataStatisticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
  }


  virtual ~ListDataStatisticsResponseBodyData() = default;
};
class ListDataStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListDataStatisticsResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListDataStatisticsResponseBody() {}

  explicit ListDataStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListDataStatisticsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataStatisticsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDataStatisticsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListDataStatisticsResponseBody() = default;
};
class ListDataStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDataStatisticsResponseBody> body{};

  ListDataStatisticsResponse() {}

  explicit ListDataStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDataStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataStatisticsResponse() = default;
};
class UnbindDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> deviceIds{};

  UnbindDeviceRequest() {}

  explicit UnbindDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (deviceIds) {
      res["DeviceIds"] = boost::any(*deviceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("DeviceIds") != m.end() && !m["DeviceIds"].empty()) {
      deviceIds = make_shared<string>(boost::any_cast<string>(m["DeviceIds"]));
    }
  }


  virtual ~UnbindDeviceRequest() = default;
};
class UnbindDeviceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  UnbindDeviceResponseBodyData() {}

  explicit UnbindDeviceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~UnbindDeviceResponseBodyData() = default;
};
class UnbindDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<UnbindDeviceResponseBodyData>> data{};
  shared_ptr<string> code{};

  UnbindDeviceResponseBody() {}

  explicit UnbindDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<UnbindDeviceResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UnbindDeviceResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<UnbindDeviceResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~UnbindDeviceResponseBody() = default;
};
class UnbindDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnbindDeviceResponseBody> body{};

  UnbindDeviceResponse() {}

  explicit UnbindDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UnbindDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindDeviceResponse() = default;
};
class ListPersonDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> personId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> schema{};

  ListPersonDetailsRequest() {}

  explicit ListPersonDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
  }


  virtual ~ListPersonDetailsRequest() = default;
};
class ListPersonDetailsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> updateTime{};
  shared_ptr<string> gender{};
  shared_ptr<string> bodyTargetImage{};
  shared_ptr<string> preferredColor{};
  shared_ptr<string> hotSpotAddress{};
  shared_ptr<string> age{};
  shared_ptr<string> personType{};
  shared_ptr<string> transportation{};
  shared_ptr<string> profession{};
  shared_ptr<string> address{};
  shared_ptr<string> faceSourceImage{};
  shared_ptr<string> faceTargetImage{};
  shared_ptr<string> prefOutTime{};
  shared_ptr<string> bodySourceImage{};
  shared_ptr<string> personId{};

  ListPersonDetailsResponseBodyData() {}

  explicit ListPersonDetailsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (bodyTargetImage) {
      res["BodyTargetImage"] = boost::any(*bodyTargetImage);
    }
    if (preferredColor) {
      res["PreferredColor"] = boost::any(*preferredColor);
    }
    if (hotSpotAddress) {
      res["HotSpotAddress"] = boost::any(*hotSpotAddress);
    }
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (personType) {
      res["PersonType"] = boost::any(*personType);
    }
    if (transportation) {
      res["Transportation"] = boost::any(*transportation);
    }
    if (profession) {
      res["Profession"] = boost::any(*profession);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (faceSourceImage) {
      res["FaceSourceImage"] = boost::any(*faceSourceImage);
    }
    if (faceTargetImage) {
      res["FaceTargetImage"] = boost::any(*faceTargetImage);
    }
    if (prefOutTime) {
      res["PrefOutTime"] = boost::any(*prefOutTime);
    }
    if (bodySourceImage) {
      res["BodySourceImage"] = boost::any(*bodySourceImage);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("BodyTargetImage") != m.end() && !m["BodyTargetImage"].empty()) {
      bodyTargetImage = make_shared<string>(boost::any_cast<string>(m["BodyTargetImage"]));
    }
    if (m.find("PreferredColor") != m.end() && !m["PreferredColor"].empty()) {
      preferredColor = make_shared<string>(boost::any_cast<string>(m["PreferredColor"]));
    }
    if (m.find("HotSpotAddress") != m.end() && !m["HotSpotAddress"].empty()) {
      hotSpotAddress = make_shared<string>(boost::any_cast<string>(m["HotSpotAddress"]));
    }
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<string>(boost::any_cast<string>(m["Age"]));
    }
    if (m.find("PersonType") != m.end() && !m["PersonType"].empty()) {
      personType = make_shared<string>(boost::any_cast<string>(m["PersonType"]));
    }
    if (m.find("Transportation") != m.end() && !m["Transportation"].empty()) {
      transportation = make_shared<string>(boost::any_cast<string>(m["Transportation"]));
    }
    if (m.find("Profession") != m.end() && !m["Profession"].empty()) {
      profession = make_shared<string>(boost::any_cast<string>(m["Profession"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("FaceSourceImage") != m.end() && !m["FaceSourceImage"].empty()) {
      faceSourceImage = make_shared<string>(boost::any_cast<string>(m["FaceSourceImage"]));
    }
    if (m.find("FaceTargetImage") != m.end() && !m["FaceTargetImage"].empty()) {
      faceTargetImage = make_shared<string>(boost::any_cast<string>(m["FaceTargetImage"]));
    }
    if (m.find("PrefOutTime") != m.end() && !m["PrefOutTime"].empty()) {
      prefOutTime = make_shared<string>(boost::any_cast<string>(m["PrefOutTime"]));
    }
    if (m.find("BodySourceImage") != m.end() && !m["BodySourceImage"].empty()) {
      bodySourceImage = make_shared<string>(boost::any_cast<string>(m["BodySourceImage"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
  }


  virtual ~ListPersonDetailsResponseBodyData() = default;
};
class ListPersonDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListPersonDetailsResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListPersonDetailsResponseBody() {}

  explicit ListPersonDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListPersonDetailsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPersonDetailsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListPersonDetailsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListPersonDetailsResponseBody() = default;
};
class ListPersonDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPersonDetailsResponseBody> body{};

  ListPersonDetailsResponse() {}

  explicit ListPersonDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPersonDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPersonDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPersonDetailsResponse() = default;
};
class ListVehicleTagDistributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> tagCode{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  ListVehicleTagDistributeRequest() {}

  explicit ListVehicleTagDistributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (tagCode) {
      res["TagCode"] = boost::any(*tagCode);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("TagCode") != m.end() && !m["TagCode"].empty()) {
      tagCode = make_shared<string>(boost::any_cast<string>(m["TagCode"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~ListVehicleTagDistributeRequest() = default;
};
class ListVehicleTagDistributeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> corpId{};
  shared_ptr<string> tagValue{};

  ListVehicleTagDistributeResponseBodyData() {}

  explicit ListVehicleTagDistributeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListVehicleTagDistributeResponseBodyData() = default;
};
class ListVehicleTagDistributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListVehicleTagDistributeResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListVehicleTagDistributeResponseBody() {}

  explicit ListVehicleTagDistributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVehicleTagDistributeResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVehicleTagDistributeResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVehicleTagDistributeResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListVehicleTagDistributeResponseBody() = default;
};
class ListVehicleTagDistributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVehicleTagDistributeResponseBody> body{};

  ListVehicleTagDistributeResponse() {}

  explicit ListVehicleTagDistributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVehicleTagDistributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVehicleTagDistributeResponseBody>(model1);
      }
    }
  }


  virtual ~ListVehicleTagDistributeResponse() = default;
};
class ListDevicePersonStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> statisticsType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> corpId{};

  ListDevicePersonStatisticsRequest() {}

  explicit ListDevicePersonStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (statisticsType) {
      res["StatisticsType"] = boost::any(*statisticsType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("StatisticsType") != m.end() && !m["StatisticsType"].empty()) {
      statisticsType = make_shared<string>(boost::any_cast<string>(m["StatisticsType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
  }


  virtual ~ListDevicePersonStatisticsRequest() = default;
};
class ListDevicePersonStatisticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> number{};
  shared_ptr<string> shotTime{};

  ListDevicePersonStatisticsResponseBodyData() {}

  explicit ListDevicePersonStatisticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (shotTime) {
      res["ShotTime"] = boost::any(*shotTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("ShotTime") != m.end() && !m["ShotTime"].empty()) {
      shotTime = make_shared<string>(boost::any_cast<string>(m["ShotTime"]));
    }
  }


  virtual ~ListDevicePersonStatisticsResponseBodyData() = default;
};
class ListDevicePersonStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDevicePersonStatisticsResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListDevicePersonStatisticsResponseBody() {}

  explicit ListDevicePersonStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListDevicePersonStatisticsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDevicePersonStatisticsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDevicePersonStatisticsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListDevicePersonStatisticsResponseBody() = default;
};
class ListDevicePersonStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDevicePersonStatisticsResponseBody> body{};

  ListDevicePersonStatisticsResponse() {}

  explicit ListDevicePersonStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDevicePersonStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDevicePersonStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDevicePersonStatisticsResponse() = default;
};
class AddMonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> monitorType{};
  shared_ptr<string> description{};
  shared_ptr<long> batchIndicator{};
  shared_ptr<string> algorithmVendor{};
  shared_ptr<string> notifierType{};
  shared_ptr<string> notifierUrl{};
  shared_ptr<string> notifierAppSecret{};
  shared_ptr<long> notifierTimeOut{};
  shared_ptr<string> notifierExtendValues{};

  AddMonitorRequest() {}

  explicit AddMonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (monitorType) {
      res["MonitorType"] = boost::any(*monitorType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (batchIndicator) {
      res["BatchIndicator"] = boost::any(*batchIndicator);
    }
    if (algorithmVendor) {
      res["AlgorithmVendor"] = boost::any(*algorithmVendor);
    }
    if (notifierType) {
      res["NotifierType"] = boost::any(*notifierType);
    }
    if (notifierUrl) {
      res["NotifierUrl"] = boost::any(*notifierUrl);
    }
    if (notifierAppSecret) {
      res["NotifierAppSecret"] = boost::any(*notifierAppSecret);
    }
    if (notifierTimeOut) {
      res["NotifierTimeOut"] = boost::any(*notifierTimeOut);
    }
    if (notifierExtendValues) {
      res["NotifierExtendValues"] = boost::any(*notifierExtendValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("MonitorType") != m.end() && !m["MonitorType"].empty()) {
      monitorType = make_shared<string>(boost::any_cast<string>(m["MonitorType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("BatchIndicator") != m.end() && !m["BatchIndicator"].empty()) {
      batchIndicator = make_shared<long>(boost::any_cast<long>(m["BatchIndicator"]));
    }
    if (m.find("AlgorithmVendor") != m.end() && !m["AlgorithmVendor"].empty()) {
      algorithmVendor = make_shared<string>(boost::any_cast<string>(m["AlgorithmVendor"]));
    }
    if (m.find("NotifierType") != m.end() && !m["NotifierType"].empty()) {
      notifierType = make_shared<string>(boost::any_cast<string>(m["NotifierType"]));
    }
    if (m.find("NotifierUrl") != m.end() && !m["NotifierUrl"].empty()) {
      notifierUrl = make_shared<string>(boost::any_cast<string>(m["NotifierUrl"]));
    }
    if (m.find("NotifierAppSecret") != m.end() && !m["NotifierAppSecret"].empty()) {
      notifierAppSecret = make_shared<string>(boost::any_cast<string>(m["NotifierAppSecret"]));
    }
    if (m.find("NotifierTimeOut") != m.end() && !m["NotifierTimeOut"].empty()) {
      notifierTimeOut = make_shared<long>(boost::any_cast<long>(m["NotifierTimeOut"]));
    }
    if (m.find("NotifierExtendValues") != m.end() && !m["NotifierExtendValues"].empty()) {
      notifierExtendValues = make_shared<string>(boost::any_cast<string>(m["NotifierExtendValues"]));
    }
  }


  virtual ~AddMonitorRequest() = default;
};
class AddMonitorResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  AddMonitorResponseBodyData() {}

  explicit AddMonitorResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~AddMonitorResponseBodyData() = default;
};
class AddMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<AddMonitorResponseBodyData> data{};
  shared_ptr<string> code{};

  AddMonitorResponseBody() {}

  explicit AddMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddMonitorResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddMonitorResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~AddMonitorResponseBody() = default;
};
class AddMonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddMonitorResponseBody> body{};

  AddMonitorResponse() {}

  explicit AddMonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddMonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddMonitorResponseBody>(model1);
      }
    }
  }


  virtual ~AddMonitorResponse() = default;
};
class PaginateDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> countTotalNum{};
  shared_ptr<string> corpId{};

  PaginateDeviceRequest() {}

  explicit PaginateDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (countTotalNum) {
      res["CountTotalNum"] = boost::any(*countTotalNum);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CountTotalNum") != m.end() && !m["CountTotalNum"].empty()) {
      countTotalNum = make_shared<bool>(boost::any_cast<bool>(m["CountTotalNum"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
  }


  virtual ~PaginateDeviceRequest() = default;
};
class PaginateDeviceResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};

  PaginateDeviceResponseBodyDataRecords() {}

  explicit PaginateDeviceResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~PaginateDeviceResponseBodyDataRecords() = default;
};
class PaginateDeviceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<PaginateDeviceResponseBodyDataRecords>> records{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  PaginateDeviceResponseBodyData() {}

  explicit PaginateDeviceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<PaginateDeviceResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PaginateDeviceResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<PaginateDeviceResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~PaginateDeviceResponseBodyData() = default;
};
class PaginateDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<PaginateDeviceResponseBodyData> data{};
  shared_ptr<string> code{};

  PaginateDeviceResponseBody() {}

  explicit PaginateDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        PaginateDeviceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PaginateDeviceResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~PaginateDeviceResponseBody() = default;
};
class PaginateDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PaginateDeviceResponseBody> body{};

  PaginateDeviceResponse() {}

  explicit PaginateDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PaginateDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PaginateDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~PaginateDeviceResponse() = default;
};
class StopCdrsMonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> algorithmVendor{};
  shared_ptr<string> corpId{};

  StopCdrsMonitorRequest() {}

  explicit StopCdrsMonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (algorithmVendor) {
      res["AlgorithmVendor"] = boost::any(*algorithmVendor);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("AlgorithmVendor") != m.end() && !m["AlgorithmVendor"].empty()) {
      algorithmVendor = make_shared<string>(boost::any_cast<string>(m["AlgorithmVendor"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
  }


  virtual ~StopCdrsMonitorRequest() = default;
};
class StopCdrsMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};

  StopCdrsMonitorResponseBody() {}

  explicit StopCdrsMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~StopCdrsMonitorResponseBody() = default;
};
class StopCdrsMonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopCdrsMonitorResponseBody> body{};

  StopCdrsMonitorResponse() {}

  explicit StopCdrsMonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopCdrsMonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopCdrsMonitorResponseBody>(model1);
      }
    }
  }


  virtual ~StopCdrsMonitorResponse() = default;
};
class RecallTrajectoryByCoordinateTimeRequestPointList : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<double> longitude{};
  shared_ptr<double> latitude{};
  shared_ptr<double> deltaDistance{};

  RecallTrajectoryByCoordinateTimeRequestPointList() {}

  explicit RecallTrajectoryByCoordinateTimeRequestPointList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (deltaDistance) {
      res["DeltaDistance"] = boost::any(*deltaDistance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<double>(boost::any_cast<double>(m["Longitude"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<double>(boost::any_cast<double>(m["Latitude"]));
    }
    if (m.find("DeltaDistance") != m.end() && !m["DeltaDistance"].empty()) {
      deltaDistance = make_shared<double>(boost::any_cast<double>(m["DeltaDistance"]));
    }
  }


  virtual ~RecallTrajectoryByCoordinateTimeRequestPointList() = default;
};
class RecallTrajectoryByCoordinateTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> corpId{};
  shared_ptr<long> outputIdCount{};
  shared_ptr<vector<RecallTrajectoryByCoordinateTimeRequestPointList>> pointList{};
  shared_ptr<vector<string>> outputIdTypeList{};

  RecallTrajectoryByCoordinateTimeRequest() {}

  explicit RecallTrajectoryByCoordinateTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (outputIdCount) {
      res["OutputIdCount"] = boost::any(*outputIdCount);
    }
    if (pointList) {
      vector<boost::any> temp1;
      for(auto item1:*pointList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PointList"] = boost::any(temp1);
    }
    if (outputIdTypeList) {
      res["OutputIdTypeList"] = boost::any(*outputIdTypeList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("OutputIdCount") != m.end() && !m["OutputIdCount"].empty()) {
      outputIdCount = make_shared<long>(boost::any_cast<long>(m["OutputIdCount"]));
    }
    if (m.find("PointList") != m.end() && !m["PointList"].empty()) {
      if (typeid(vector<boost::any>) == m["PointList"].type()) {
        vector<RecallTrajectoryByCoordinateTimeRequestPointList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PointList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecallTrajectoryByCoordinateTimeRequestPointList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pointList = make_shared<vector<RecallTrajectoryByCoordinateTimeRequestPointList>>(expect1);
      }
    }
    if (m.find("OutputIdTypeList") != m.end() && !m["OutputIdTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OutputIdTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OutputIdTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      outputIdTypeList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RecallTrajectoryByCoordinateTimeRequest() = default;
};
class RecallTrajectoryByCoordinateTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  RecallTrajectoryByCoordinateTimeResponseBody() {}

  explicit RecallTrajectoryByCoordinateTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RecallTrajectoryByCoordinateTimeResponseBody() = default;
};
class RecallTrajectoryByCoordinateTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecallTrajectoryByCoordinateTimeResponseBody> body{};

  RecallTrajectoryByCoordinateTimeResponse() {}

  explicit RecallTrajectoryByCoordinateTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RecallTrajectoryByCoordinateTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecallTrajectoryByCoordinateTimeResponseBody>(model1);
      }
    }
  }


  virtual ~RecallTrajectoryByCoordinateTimeResponse() = default;
};
class ListCityMapPersonFlowRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> originDataSourceIdList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<map<string, boost::any>> targetDataSourceIdList{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> range{};

  ListCityMapPersonFlowRequest() {}

  explicit ListCityMapPersonFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originDataSourceIdList) {
      res["OriginDataSourceIdList"] = boost::any(*originDataSourceIdList);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (targetDataSourceIdList) {
      res["TargetDataSourceIdList"] = boost::any(*targetDataSourceIdList);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (range) {
      res["Range"] = boost::any(*range);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginDataSourceIdList") != m.end() && !m["OriginDataSourceIdList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OriginDataSourceIdList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      originDataSourceIdList = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TargetDataSourceIdList") != m.end() && !m["TargetDataSourceIdList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TargetDataSourceIdList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      targetDataSourceIdList = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Range") != m.end() && !m["Range"].empty()) {
      range = make_shared<string>(boost::any_cast<string>(m["Range"]));
    }
  }


  virtual ~ListCityMapPersonFlowRequest() = default;
};
class ListCityMapPersonFlowShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> originDataSourceIdListShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> targetDataSourceIdListShrink{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> range{};

  ListCityMapPersonFlowShrinkRequest() {}

  explicit ListCityMapPersonFlowShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originDataSourceIdListShrink) {
      res["OriginDataSourceIdList"] = boost::any(*originDataSourceIdListShrink);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (targetDataSourceIdListShrink) {
      res["TargetDataSourceIdList"] = boost::any(*targetDataSourceIdListShrink);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (range) {
      res["Range"] = boost::any(*range);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginDataSourceIdList") != m.end() && !m["OriginDataSourceIdList"].empty()) {
      originDataSourceIdListShrink = make_shared<string>(boost::any_cast<string>(m["OriginDataSourceIdList"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TargetDataSourceIdList") != m.end() && !m["TargetDataSourceIdList"].empty()) {
      targetDataSourceIdListShrink = make_shared<string>(boost::any_cast<string>(m["TargetDataSourceIdList"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Range") != m.end() && !m["Range"].empty()) {
      range = make_shared<string>(boost::any_cast<string>(m["Range"]));
    }
  }


  virtual ~ListCityMapPersonFlowShrinkRequest() = default;
};
class ListCityMapPersonFlowResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> flowNumber{};
  shared_ptr<string> originDataSourceId{};
  shared_ptr<string> targetDataSourceId{};
  shared_ptr<string> flowDirection{};

  ListCityMapPersonFlowResponseBodyData() {}

  explicit ListCityMapPersonFlowResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowNumber) {
      res["FlowNumber"] = boost::any(*flowNumber);
    }
    if (originDataSourceId) {
      res["OriginDataSourceId"] = boost::any(*originDataSourceId);
    }
    if (targetDataSourceId) {
      res["TargetDataSourceId"] = boost::any(*targetDataSourceId);
    }
    if (flowDirection) {
      res["FlowDirection"] = boost::any(*flowDirection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowNumber") != m.end() && !m["FlowNumber"].empty()) {
      flowNumber = make_shared<string>(boost::any_cast<string>(m["FlowNumber"]));
    }
    if (m.find("OriginDataSourceId") != m.end() && !m["OriginDataSourceId"].empty()) {
      originDataSourceId = make_shared<string>(boost::any_cast<string>(m["OriginDataSourceId"]));
    }
    if (m.find("TargetDataSourceId") != m.end() && !m["TargetDataSourceId"].empty()) {
      targetDataSourceId = make_shared<string>(boost::any_cast<string>(m["TargetDataSourceId"]));
    }
    if (m.find("FlowDirection") != m.end() && !m["FlowDirection"].empty()) {
      flowDirection = make_shared<string>(boost::any_cast<string>(m["FlowDirection"]));
    }
  }


  virtual ~ListCityMapPersonFlowResponseBodyData() = default;
};
class ListCityMapPersonFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListCityMapPersonFlowResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListCityMapPersonFlowResponseBody() {}

  explicit ListCityMapPersonFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListCityMapPersonFlowResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCityMapPersonFlowResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCityMapPersonFlowResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListCityMapPersonFlowResponseBody() = default;
};
class ListCityMapPersonFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCityMapPersonFlowResponseBody> body{};

  ListCityMapPersonFlowResponse() {}

  explicit ListCityMapPersonFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCityMapPersonFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCityMapPersonFlowResponseBody>(model1);
      }
    }
  }


  virtual ~ListCityMapPersonFlowResponse() = default;
};
class AddCdrsMonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> monitorType{};
  shared_ptr<string> description{};
  shared_ptr<long> batchIndicator{};
  shared_ptr<string> algorithmVendor{};
  shared_ptr<string> notifierType{};
  shared_ptr<string> notifierUrl{};
  shared_ptr<string> notifierAppSecret{};
  shared_ptr<long> notifierTimeOut{};
  shared_ptr<string> notifierExtendValues{};

  AddCdrsMonitorRequest() {}

  explicit AddCdrsMonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (monitorType) {
      res["MonitorType"] = boost::any(*monitorType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (batchIndicator) {
      res["BatchIndicator"] = boost::any(*batchIndicator);
    }
    if (algorithmVendor) {
      res["AlgorithmVendor"] = boost::any(*algorithmVendor);
    }
    if (notifierType) {
      res["NotifierType"] = boost::any(*notifierType);
    }
    if (notifierUrl) {
      res["NotifierUrl"] = boost::any(*notifierUrl);
    }
    if (notifierAppSecret) {
      res["NotifierAppSecret"] = boost::any(*notifierAppSecret);
    }
    if (notifierTimeOut) {
      res["NotifierTimeOut"] = boost::any(*notifierTimeOut);
    }
    if (notifierExtendValues) {
      res["NotifierExtendValues"] = boost::any(*notifierExtendValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("MonitorType") != m.end() && !m["MonitorType"].empty()) {
      monitorType = make_shared<string>(boost::any_cast<string>(m["MonitorType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("BatchIndicator") != m.end() && !m["BatchIndicator"].empty()) {
      batchIndicator = make_shared<long>(boost::any_cast<long>(m["BatchIndicator"]));
    }
    if (m.find("AlgorithmVendor") != m.end() && !m["AlgorithmVendor"].empty()) {
      algorithmVendor = make_shared<string>(boost::any_cast<string>(m["AlgorithmVendor"]));
    }
    if (m.find("NotifierType") != m.end() && !m["NotifierType"].empty()) {
      notifierType = make_shared<string>(boost::any_cast<string>(m["NotifierType"]));
    }
    if (m.find("NotifierUrl") != m.end() && !m["NotifierUrl"].empty()) {
      notifierUrl = make_shared<string>(boost::any_cast<string>(m["NotifierUrl"]));
    }
    if (m.find("NotifierAppSecret") != m.end() && !m["NotifierAppSecret"].empty()) {
      notifierAppSecret = make_shared<string>(boost::any_cast<string>(m["NotifierAppSecret"]));
    }
    if (m.find("NotifierTimeOut") != m.end() && !m["NotifierTimeOut"].empty()) {
      notifierTimeOut = make_shared<long>(boost::any_cast<long>(m["NotifierTimeOut"]));
    }
    if (m.find("NotifierExtendValues") != m.end() && !m["NotifierExtendValues"].empty()) {
      notifierExtendValues = make_shared<string>(boost::any_cast<string>(m["NotifierExtendValues"]));
    }
  }


  virtual ~AddCdrsMonitorRequest() = default;
};
class AddCdrsMonitorResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  AddCdrsMonitorResponseBodyData() {}

  explicit AddCdrsMonitorResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~AddCdrsMonitorResponseBodyData() = default;
};
class AddCdrsMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<AddCdrsMonitorResponseBodyData> data{};
  shared_ptr<string> code{};

  AddCdrsMonitorResponseBody() {}

  explicit AddCdrsMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddCdrsMonitorResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddCdrsMonitorResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~AddCdrsMonitorResponseBody() = default;
};
class AddCdrsMonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddCdrsMonitorResponseBody> body{};

  AddCdrsMonitorResponse() {}

  explicit AddCdrsMonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddCdrsMonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddCdrsMonitorResponseBody>(model1);
      }
    }
  }


  virtual ~AddCdrsMonitorResponse() = default;
};
class ListMapRouteDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> routeList{};

  ListMapRouteDetailsRequest() {}

  explicit ListMapRouteDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeList) {
      res["RouteList"] = boost::any(*routeList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RouteList") != m.end() && !m["RouteList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["RouteList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      routeList = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListMapRouteDetailsRequest() = default;
};
class ListMapRouteDetailsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> routeListShrink{};

  ListMapRouteDetailsShrinkRequest() {}

  explicit ListMapRouteDetailsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeListShrink) {
      res["RouteList"] = boost::any(*routeListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RouteList") != m.end() && !m["RouteList"].empty()) {
      routeListShrink = make_shared<string>(boost::any_cast<string>(m["RouteList"]));
    }
  }


  virtual ~ListMapRouteDetailsShrinkRequest() = default;
};
class ListMapRouteDetailsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> destination{};
  shared_ptr<string> origin{};
  shared_ptr<string> route{};

  ListMapRouteDetailsResponseBodyData() {}

  explicit ListMapRouteDetailsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (route) {
      res["Route"] = boost::any(*route);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("Route") != m.end() && !m["Route"].empty()) {
      route = make_shared<string>(boost::any_cast<string>(m["Route"]));
    }
  }


  virtual ~ListMapRouteDetailsResponseBodyData() = default;
};
class ListMapRouteDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListMapRouteDetailsResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListMapRouteDetailsResponseBody() {}

  explicit ListMapRouteDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListMapRouteDetailsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMapRouteDetailsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListMapRouteDetailsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListMapRouteDetailsResponseBody() = default;
};
class ListMapRouteDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListMapRouteDetailsResponseBody> body{};

  ListMapRouteDetailsResponse() {}

  explicit ListMapRouteDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMapRouteDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMapRouteDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMapRouteDetailsResponse() = default;
};
class ListPersonTopRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> personId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  ListPersonTopRequest() {}

  explicit ListPersonTopRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~ListPersonTopRequest() = default;
};
class ListPersonTopResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> frequency{};
  shared_ptr<string> poiId{};
  shared_ptr<string> corpId{};
  shared_ptr<string> passHour{};
  shared_ptr<string> poiName{};
  shared_ptr<string> personId{};

  ListPersonTopResponseBodyData() {}

  explicit ListPersonTopResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frequency) {
      res["Frequency"] = boost::any(*frequency);
    }
    if (poiId) {
      res["PoiId"] = boost::any(*poiId);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (passHour) {
      res["PassHour"] = boost::any(*passHour);
    }
    if (poiName) {
      res["PoiName"] = boost::any(*poiName);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Frequency") != m.end() && !m["Frequency"].empty()) {
      frequency = make_shared<string>(boost::any_cast<string>(m["Frequency"]));
    }
    if (m.find("PoiId") != m.end() && !m["PoiId"].empty()) {
      poiId = make_shared<string>(boost::any_cast<string>(m["PoiId"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("PassHour") != m.end() && !m["PassHour"].empty()) {
      passHour = make_shared<string>(boost::any_cast<string>(m["PassHour"]));
    }
    if (m.find("PoiName") != m.end() && !m["PoiName"].empty()) {
      poiName = make_shared<string>(boost::any_cast<string>(m["PoiName"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
  }


  virtual ~ListPersonTopResponseBodyData() = default;
};
class ListPersonTopResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListPersonTopResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListPersonTopResponseBody() {}

  explicit ListPersonTopResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListPersonTopResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPersonTopResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListPersonTopResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListPersonTopResponseBody() = default;
};
class ListPersonTopResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPersonTopResponseBody> body{};

  ListPersonTopResponse() {}

  explicit ListPersonTopResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPersonTopResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPersonTopResponseBody>(model1);
      }
    }
  }


  virtual ~ListPersonTopResponse() = default;
};
class GetMonitorResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> minRecordId{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> algorithmVendor{};

  GetMonitorResultRequest() {}

  explicit GetMonitorResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (minRecordId) {
      res["MinRecordId"] = boost::any(*minRecordId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (algorithmVendor) {
      res["AlgorithmVendor"] = boost::any(*algorithmVendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("MinRecordId") != m.end() && !m["MinRecordId"].empty()) {
      minRecordId = make_shared<string>(boost::any_cast<string>(m["MinRecordId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("AlgorithmVendor") != m.end() && !m["AlgorithmVendor"].empty()) {
      algorithmVendor = make_shared<string>(boost::any_cast<string>(m["AlgorithmVendor"]));
    }
  }


  virtual ~GetMonitorResultRequest() = default;
};
class GetMonitorResultResponseBodyDataRecordsExtendInfo : public Darabonba::Model {
public:
  shared_ptr<string> plateNo{};

  GetMonitorResultResponseBodyDataRecordsExtendInfo() {}

  explicit GetMonitorResultResponseBodyDataRecordsExtendInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (plateNo) {
      res["PlateNo"] = boost::any(*plateNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlateNo") != m.end() && !m["PlateNo"].empty()) {
      plateNo = make_shared<string>(boost::any_cast<string>(m["PlateNo"]));
    }
  }


  virtual ~GetMonitorResultResponseBodyDataRecordsExtendInfo() = default;
};
class GetMonitorResultResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> picUrl{};
  shared_ptr<string> rightBottomY{};
  shared_ptr<string> score{};
  shared_ptr<string> monitorPicUrl{};
  shared_ptr<string> rightBottomX{};
  shared_ptr<GetMonitorResultResponseBodyDataRecordsExtendInfo> extendInfo{};
  shared_ptr<string> gbId{};
  shared_ptr<string> leftUpY{};
  shared_ptr<string> leftUpX{};
  shared_ptr<string> shotTime{};
  shared_ptr<string> taskId{};
  shared_ptr<string> targetPicUrl{};

  GetMonitorResultResponseBodyDataRecords() {}

  explicit GetMonitorResultResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (rightBottomY) {
      res["RightBottomY"] = boost::any(*rightBottomY);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (monitorPicUrl) {
      res["MonitorPicUrl"] = boost::any(*monitorPicUrl);
    }
    if (rightBottomX) {
      res["RightBottomX"] = boost::any(*rightBottomX);
    }
    if (extendInfo) {
      res["ExtendInfo"] = extendInfo ? boost::any(extendInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (leftUpY) {
      res["LeftUpY"] = boost::any(*leftUpY);
    }
    if (leftUpX) {
      res["LeftUpX"] = boost::any(*leftUpX);
    }
    if (shotTime) {
      res["ShotTime"] = boost::any(*shotTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (targetPicUrl) {
      res["TargetPicUrl"] = boost::any(*targetPicUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("RightBottomY") != m.end() && !m["RightBottomY"].empty()) {
      rightBottomY = make_shared<string>(boost::any_cast<string>(m["RightBottomY"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("MonitorPicUrl") != m.end() && !m["MonitorPicUrl"].empty()) {
      monitorPicUrl = make_shared<string>(boost::any_cast<string>(m["MonitorPicUrl"]));
    }
    if (m.find("RightBottomX") != m.end() && !m["RightBottomX"].empty()) {
      rightBottomX = make_shared<string>(boost::any_cast<string>(m["RightBottomX"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtendInfo"].type()) {
        GetMonitorResultResponseBodyDataRecordsExtendInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtendInfo"]));
        extendInfo = make_shared<GetMonitorResultResponseBodyDataRecordsExtendInfo>(model1);
      }
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("LeftUpY") != m.end() && !m["LeftUpY"].empty()) {
      leftUpY = make_shared<string>(boost::any_cast<string>(m["LeftUpY"]));
    }
    if (m.find("LeftUpX") != m.end() && !m["LeftUpX"].empty()) {
      leftUpX = make_shared<string>(boost::any_cast<string>(m["LeftUpX"]));
    }
    if (m.find("ShotTime") != m.end() && !m["ShotTime"].empty()) {
      shotTime = make_shared<string>(boost::any_cast<string>(m["ShotTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TargetPicUrl") != m.end() && !m["TargetPicUrl"].empty()) {
      targetPicUrl = make_shared<string>(boost::any_cast<string>(m["TargetPicUrl"]));
    }
  }


  virtual ~GetMonitorResultResponseBodyDataRecords() = default;
};
class GetMonitorResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> maxId{};
  shared_ptr<vector<GetMonitorResultResponseBodyDataRecords>> records{};

  GetMonitorResultResponseBodyData() {}

  explicit GetMonitorResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxId) {
      res["MaxId"] = boost::any(*maxId);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxId") != m.end() && !m["MaxId"].empty()) {
      maxId = make_shared<string>(boost::any_cast<string>(m["MaxId"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<GetMonitorResultResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMonitorResultResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetMonitorResultResponseBodyDataRecords>>(expect1);
      }
    }
  }


  virtual ~GetMonitorResultResponseBodyData() = default;
};
class GetMonitorResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetMonitorResultResponseBodyData> data{};
  shared_ptr<string> code{};

  GetMonitorResultResponseBody() {}

  explicit GetMonitorResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetMonitorResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetMonitorResultResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~GetMonitorResultResponseBody() = default;
};
class GetMonitorResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMonitorResultResponseBody> body{};

  GetMonitorResultResponse() {}

  explicit GetMonitorResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMonitorResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMonitorResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetMonitorResultResponse() = default;
};
class ListCityMapAoisRequest : public Darabonba::Model {
public:
  shared_ptr<long> radius{};
  shared_ptr<string> latitude{};
  shared_ptr<string> longitude{};

  ListCityMapAoisRequest() {}

  explicit ListCityMapAoisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (radius) {
      res["Radius"] = boost::any(*radius);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Radius") != m.end() && !m["Radius"].empty()) {
      radius = make_shared<long>(boost::any_cast<long>(m["Radius"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
  }


  virtual ~ListCityMapAoisRequest() = default;
};
class ListCityMapAoisResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> id{};

  ListCityMapAoisResponseBodyData() {}

  explicit ListCityMapAoisResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListCityMapAoisResponseBodyData() = default;
};
class ListCityMapAoisResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListCityMapAoisResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListCityMapAoisResponseBody() {}

  explicit ListCityMapAoisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListCityMapAoisResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCityMapAoisResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCityMapAoisResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListCityMapAoisResponseBody() = default;
};
class ListCityMapAoisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCityMapAoisResponseBody> body{};

  ListCityMapAoisResponse() {}

  explicit ListCityMapAoisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCityMapAoisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCityMapAoisResponseBody>(model1);
      }
    }
  }


  virtual ~ListCityMapAoisResponse() = default;
};
class RecognizeImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> vendor{};
  shared_ptr<string> imageContent{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> recognizeType{};
  shared_ptr<bool> requireCropImage{};

  RecognizeImageRequest() {}

  explicit RecognizeImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    if (imageContent) {
      res["ImageContent"] = boost::any(*imageContent);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (recognizeType) {
      res["RecognizeType"] = boost::any(*recognizeType);
    }
    if (requireCropImage) {
      res["RequireCropImage"] = boost::any(*requireCropImage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
    if (m.find("ImageContent") != m.end() && !m["ImageContent"].empty()) {
      imageContent = make_shared<string>(boost::any_cast<string>(m["ImageContent"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("RecognizeType") != m.end() && !m["RecognizeType"].empty()) {
      recognizeType = make_shared<string>(boost::any_cast<string>(m["RecognizeType"]));
    }
    if (m.find("RequireCropImage") != m.end() && !m["RequireCropImage"].empty()) {
      requireCropImage = make_shared<bool>(boost::any_cast<bool>(m["RequireCropImage"]));
    }
  }


  virtual ~RecognizeImageRequest() = default;
};
class RecognizeImageResponseBodyDataBodyList : public Darabonba::Model {
public:
  shared_ptr<string> cropAlgorithmCode{};
  shared_ptr<long> rightBottomY{};
  shared_ptr<string> feature{};
  shared_ptr<long> leftTopY{};
  shared_ptr<string> targetImageContent{};
  shared_ptr<long> leftTopX{};
  shared_ptr<long> rightBottomX{};

  RecognizeImageResponseBodyDataBodyList() {}

  explicit RecognizeImageResponseBodyDataBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cropAlgorithmCode) {
      res["CropAlgorithmCode"] = boost::any(*cropAlgorithmCode);
    }
    if (rightBottomY) {
      res["RightBottomY"] = boost::any(*rightBottomY);
    }
    if (feature) {
      res["Feature"] = boost::any(*feature);
    }
    if (leftTopY) {
      res["LeftTopY"] = boost::any(*leftTopY);
    }
    if (targetImageContent) {
      res["TargetImageContent"] = boost::any(*targetImageContent);
    }
    if (leftTopX) {
      res["LeftTopX"] = boost::any(*leftTopX);
    }
    if (rightBottomX) {
      res["RightBottomX"] = boost::any(*rightBottomX);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CropAlgorithmCode") != m.end() && !m["CropAlgorithmCode"].empty()) {
      cropAlgorithmCode = make_shared<string>(boost::any_cast<string>(m["CropAlgorithmCode"]));
    }
    if (m.find("RightBottomY") != m.end() && !m["RightBottomY"].empty()) {
      rightBottomY = make_shared<long>(boost::any_cast<long>(m["RightBottomY"]));
    }
    if (m.find("Feature") != m.end() && !m["Feature"].empty()) {
      feature = make_shared<string>(boost::any_cast<string>(m["Feature"]));
    }
    if (m.find("LeftTopY") != m.end() && !m["LeftTopY"].empty()) {
      leftTopY = make_shared<long>(boost::any_cast<long>(m["LeftTopY"]));
    }
    if (m.find("TargetImageContent") != m.end() && !m["TargetImageContent"].empty()) {
      targetImageContent = make_shared<string>(boost::any_cast<string>(m["TargetImageContent"]));
    }
    if (m.find("LeftTopX") != m.end() && !m["LeftTopX"].empty()) {
      leftTopX = make_shared<long>(boost::any_cast<long>(m["LeftTopX"]));
    }
    if (m.find("RightBottomX") != m.end() && !m["RightBottomX"].empty()) {
      rightBottomX = make_shared<long>(boost::any_cast<long>(m["RightBottomX"]));
    }
  }


  virtual ~RecognizeImageResponseBodyDataBodyList() = default;
};
class RecognizeImageResponseBodyDataFaceList : public Darabonba::Model {
public:
  shared_ptr<string> cropAlgorithmCode{};
  shared_ptr<string> feature{};
  shared_ptr<long> rightBottomY{};
  shared_ptr<long> leftTopY{};
  shared_ptr<string> targetImageContent{};
  shared_ptr<double> faceQuality{};
  shared_ptr<long> rightBottomX{};
  shared_ptr<long> leftTopX{};
  shared_ptr<double> faceKeyPointQuality{};

  RecognizeImageResponseBodyDataFaceList() {}

  explicit RecognizeImageResponseBodyDataFaceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cropAlgorithmCode) {
      res["CropAlgorithmCode"] = boost::any(*cropAlgorithmCode);
    }
    if (feature) {
      res["Feature"] = boost::any(*feature);
    }
    if (rightBottomY) {
      res["RightBottomY"] = boost::any(*rightBottomY);
    }
    if (leftTopY) {
      res["LeftTopY"] = boost::any(*leftTopY);
    }
    if (targetImageContent) {
      res["TargetImageContent"] = boost::any(*targetImageContent);
    }
    if (faceQuality) {
      res["FaceQuality"] = boost::any(*faceQuality);
    }
    if (rightBottomX) {
      res["RightBottomX"] = boost::any(*rightBottomX);
    }
    if (leftTopX) {
      res["LeftTopX"] = boost::any(*leftTopX);
    }
    if (faceKeyPointQuality) {
      res["FaceKeyPointQuality"] = boost::any(*faceKeyPointQuality);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CropAlgorithmCode") != m.end() && !m["CropAlgorithmCode"].empty()) {
      cropAlgorithmCode = make_shared<string>(boost::any_cast<string>(m["CropAlgorithmCode"]));
    }
    if (m.find("Feature") != m.end() && !m["Feature"].empty()) {
      feature = make_shared<string>(boost::any_cast<string>(m["Feature"]));
    }
    if (m.find("RightBottomY") != m.end() && !m["RightBottomY"].empty()) {
      rightBottomY = make_shared<long>(boost::any_cast<long>(m["RightBottomY"]));
    }
    if (m.find("LeftTopY") != m.end() && !m["LeftTopY"].empty()) {
      leftTopY = make_shared<long>(boost::any_cast<long>(m["LeftTopY"]));
    }
    if (m.find("TargetImageContent") != m.end() && !m["TargetImageContent"].empty()) {
      targetImageContent = make_shared<string>(boost::any_cast<string>(m["TargetImageContent"]));
    }
    if (m.find("FaceQuality") != m.end() && !m["FaceQuality"].empty()) {
      faceQuality = make_shared<double>(boost::any_cast<double>(m["FaceQuality"]));
    }
    if (m.find("RightBottomX") != m.end() && !m["RightBottomX"].empty()) {
      rightBottomX = make_shared<long>(boost::any_cast<long>(m["RightBottomX"]));
    }
    if (m.find("LeftTopX") != m.end() && !m["LeftTopX"].empty()) {
      leftTopX = make_shared<long>(boost::any_cast<long>(m["LeftTopX"]));
    }
    if (m.find("FaceKeyPointQuality") != m.end() && !m["FaceKeyPointQuality"].empty()) {
      faceKeyPointQuality = make_shared<double>(boost::any_cast<double>(m["FaceKeyPointQuality"]));
    }
  }


  virtual ~RecognizeImageResponseBodyDataFaceList() = default;
};
class RecognizeImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeImageResponseBodyDataBodyList>> bodyList{};
  shared_ptr<vector<RecognizeImageResponseBodyDataFaceList>> faceList{};

  RecognizeImageResponseBodyData() {}

  explicit RecognizeImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyList) {
      vector<boost::any> temp1;
      for(auto item1:*bodyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BodyList"] = boost::any(temp1);
    }
    if (faceList) {
      vector<boost::any> temp1;
      for(auto item1:*faceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyList") != m.end() && !m["BodyList"].empty()) {
      if (typeid(vector<boost::any>) == m["BodyList"].type()) {
        vector<RecognizeImageResponseBodyDataBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BodyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeImageResponseBodyDataBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bodyList = make_shared<vector<RecognizeImageResponseBodyDataBodyList>>(expect1);
      }
    }
    if (m.find("FaceList") != m.end() && !m["FaceList"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceList"].type()) {
        vector<RecognizeImageResponseBodyDataFaceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeImageResponseBodyDataFaceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceList = make_shared<vector<RecognizeImageResponseBodyDataFaceList>>(expect1);
      }
    }
  }


  virtual ~RecognizeImageResponseBodyData() = default;
};
class RecognizeImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeImageResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};

  RecognizeImageResponseBody() {}

  explicit RecognizeImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeImageResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~RecognizeImageResponseBody() = default;
};
class RecognizeImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeImageResponseBody> body{};

  RecognizeImageResponse() {}

  explicit RecognizeImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RecognizeImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeImageResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeImageResponse() = default;
};
class GetMonitorListRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  GetMonitorListRequest() {}

  explicit GetMonitorListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~GetMonitorListRequest() = default;
};
class GetMonitorListResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> ruleExpression{};
  shared_ptr<string> imageMatch{};
  shared_ptr<string> monitorType{};
  shared_ptr<string> createDate{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> notifierType{};
  shared_ptr<string> description{};
  shared_ptr<string> expression{};
  shared_ptr<string> notifierExtra{};
  shared_ptr<string> attributes{};
  shared_ptr<string> deviceList{};
  shared_ptr<string> taskId{};
  shared_ptr<string> modifiedDate{};
  shared_ptr<string> algorithmVendor{};

  GetMonitorListResponseBodyDataRecords() {}

  explicit GetMonitorListResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (ruleExpression) {
      res["RuleExpression"] = boost::any(*ruleExpression);
    }
    if (imageMatch) {
      res["ImageMatch"] = boost::any(*imageMatch);
    }
    if (monitorType) {
      res["MonitorType"] = boost::any(*monitorType);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (notifierType) {
      res["NotifierType"] = boost::any(*notifierType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (notifierExtra) {
      res["NotifierExtra"] = boost::any(*notifierExtra);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (deviceList) {
      res["DeviceList"] = boost::any(*deviceList);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (modifiedDate) {
      res["ModifiedDate"] = boost::any(*modifiedDate);
    }
    if (algorithmVendor) {
      res["AlgorithmVendor"] = boost::any(*algorithmVendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RuleExpression") != m.end() && !m["RuleExpression"].empty()) {
      ruleExpression = make_shared<string>(boost::any_cast<string>(m["RuleExpression"]));
    }
    if (m.find("ImageMatch") != m.end() && !m["ImageMatch"].empty()) {
      imageMatch = make_shared<string>(boost::any_cast<string>(m["ImageMatch"]));
    }
    if (m.find("MonitorType") != m.end() && !m["MonitorType"].empty()) {
      monitorType = make_shared<string>(boost::any_cast<string>(m["MonitorType"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("NotifierType") != m.end() && !m["NotifierType"].empty()) {
      notifierType = make_shared<string>(boost::any_cast<string>(m["NotifierType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("NotifierExtra") != m.end() && !m["NotifierExtra"].empty()) {
      notifierExtra = make_shared<string>(boost::any_cast<string>(m["NotifierExtra"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      attributes = make_shared<string>(boost::any_cast<string>(m["Attributes"]));
    }
    if (m.find("DeviceList") != m.end() && !m["DeviceList"].empty()) {
      deviceList = make_shared<string>(boost::any_cast<string>(m["DeviceList"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("ModifiedDate") != m.end() && !m["ModifiedDate"].empty()) {
      modifiedDate = make_shared<string>(boost::any_cast<string>(m["ModifiedDate"]));
    }
    if (m.find("AlgorithmVendor") != m.end() && !m["AlgorithmVendor"].empty()) {
      algorithmVendor = make_shared<string>(boost::any_cast<string>(m["AlgorithmVendor"]));
    }
  }


  virtual ~GetMonitorListResponseBodyDataRecords() = default;
};
class GetMonitorListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetMonitorListResponseBodyDataRecords>> records{};
  shared_ptr<long> totalPage{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  GetMonitorListResponseBodyData() {}

  explicit GetMonitorListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<GetMonitorListResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMonitorListResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetMonitorListResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetMonitorListResponseBodyData() = default;
};
class GetMonitorListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetMonitorListResponseBodyData> data{};
  shared_ptr<string> code{};

  GetMonitorListResponseBody() {}

  explicit GetMonitorListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetMonitorListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetMonitorListResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~GetMonitorListResponseBody() = default;
};
class GetMonitorListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMonitorListResponseBody> body{};

  GetMonitorListResponse() {}

  explicit GetMonitorListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMonitorListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMonitorListResponseBody>(model1);
      }
    }
  }


  virtual ~GetMonitorListResponse() = default;
};
class ListDeviceRelationRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};

  ListDeviceRelationRequest() {}

  explicit ListDeviceRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~ListDeviceRelationRequest() = default;
};
class ListDeviceRelationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};

  ListDeviceRelationResponseBodyData() {}

  explicit ListDeviceRelationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
  }


  virtual ~ListDeviceRelationResponseBodyData() = default;
};
class ListDeviceRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDeviceRelationResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListDeviceRelationResponseBody() {}

  explicit ListDeviceRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListDeviceRelationResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeviceRelationResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDeviceRelationResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListDeviceRelationResponseBody() = default;
};
class ListDeviceRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDeviceRelationResponseBody> body{};

  ListDeviceRelationResponse() {}

  explicit ListDeviceRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDeviceRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceRelationResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceRelationResponse() = default;
};
class ListPersonTrackRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> personId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> imageSourceType{};
  shared_ptr<string> aggregateDimension{};
  shared_ptr<string> qualityScore{};

  ListPersonTrackRequest() {}

  explicit ListPersonTrackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (imageSourceType) {
      res["ImageSourceType"] = boost::any(*imageSourceType);
    }
    if (aggregateDimension) {
      res["AggregateDimension"] = boost::any(*aggregateDimension);
    }
    if (qualityScore) {
      res["QualityScore"] = boost::any(*qualityScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ImageSourceType") != m.end() && !m["ImageSourceType"].empty()) {
      imageSourceType = make_shared<string>(boost::any_cast<string>(m["ImageSourceType"]));
    }
    if (m.find("AggregateDimension") != m.end() && !m["AggregateDimension"].empty()) {
      aggregateDimension = make_shared<string>(boost::any_cast<string>(m["AggregateDimension"]));
    }
    if (m.find("QualityScore") != m.end() && !m["QualityScore"].empty()) {
      qualityScore = make_shared<string>(boost::any_cast<string>(m["QualityScore"]));
    }
  }


  virtual ~ListPersonTrackRequest() = default;
};
class ListPersonTrackResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> sourceUrl{};
  shared_ptr<string> rightBottomY{};
  shared_ptr<string> dataSourceName{};
  shared_ptr<string> picUrlPath{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> rightBottomX{};
  shared_ptr<string> targetPicUrlPath{};
  shared_ptr<string> leftTopY{};
  shared_ptr<string> targetUrl{};
  shared_ptr<string> corpId{};
  shared_ptr<string> longitude{};
  shared_ptr<string> latitude{};
  shared_ptr<string> shotTime{};
  shared_ptr<string> personId{};
  shared_ptr<string> leftTopX{};
  shared_ptr<string> tagGender{};
  shared_ptr<string> tagAge{};

  ListPersonTrackResponseBodyData() {}

  explicit ListPersonTrackResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    if (rightBottomY) {
      res["RightBottomY"] = boost::any(*rightBottomY);
    }
    if (dataSourceName) {
      res["DataSourceName"] = boost::any(*dataSourceName);
    }
    if (picUrlPath) {
      res["PicUrlPath"] = boost::any(*picUrlPath);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (rightBottomX) {
      res["RightBottomX"] = boost::any(*rightBottomX);
    }
    if (targetPicUrlPath) {
      res["TargetPicUrlPath"] = boost::any(*targetPicUrlPath);
    }
    if (leftTopY) {
      res["LeftTopY"] = boost::any(*leftTopY);
    }
    if (targetUrl) {
      res["TargetUrl"] = boost::any(*targetUrl);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (shotTime) {
      res["ShotTime"] = boost::any(*shotTime);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    if (leftTopX) {
      res["LeftTopX"] = boost::any(*leftTopX);
    }
    if (tagGender) {
      res["TagGender"] = boost::any(*tagGender);
    }
    if (tagAge) {
      res["TagAge"] = boost::any(*tagAge);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
    if (m.find("RightBottomY") != m.end() && !m["RightBottomY"].empty()) {
      rightBottomY = make_shared<string>(boost::any_cast<string>(m["RightBottomY"]));
    }
    if (m.find("DataSourceName") != m.end() && !m["DataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["DataSourceName"]));
    }
    if (m.find("PicUrlPath") != m.end() && !m["PicUrlPath"].empty()) {
      picUrlPath = make_shared<string>(boost::any_cast<string>(m["PicUrlPath"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("RightBottomX") != m.end() && !m["RightBottomX"].empty()) {
      rightBottomX = make_shared<string>(boost::any_cast<string>(m["RightBottomX"]));
    }
    if (m.find("TargetPicUrlPath") != m.end() && !m["TargetPicUrlPath"].empty()) {
      targetPicUrlPath = make_shared<string>(boost::any_cast<string>(m["TargetPicUrlPath"]));
    }
    if (m.find("LeftTopY") != m.end() && !m["LeftTopY"].empty()) {
      leftTopY = make_shared<string>(boost::any_cast<string>(m["LeftTopY"]));
    }
    if (m.find("TargetUrl") != m.end() && !m["TargetUrl"].empty()) {
      targetUrl = make_shared<string>(boost::any_cast<string>(m["TargetUrl"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("ShotTime") != m.end() && !m["ShotTime"].empty()) {
      shotTime = make_shared<string>(boost::any_cast<string>(m["ShotTime"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
    if (m.find("LeftTopX") != m.end() && !m["LeftTopX"].empty()) {
      leftTopX = make_shared<string>(boost::any_cast<string>(m["LeftTopX"]));
    }
    if (m.find("TagGender") != m.end() && !m["TagGender"].empty()) {
      tagGender = make_shared<string>(boost::any_cast<string>(m["TagGender"]));
    }
    if (m.find("TagAge") != m.end() && !m["TagAge"].empty()) {
      tagAge = make_shared<string>(boost::any_cast<string>(m["TagAge"]));
    }
  }


  virtual ~ListPersonTrackResponseBodyData() = default;
};
class ListPersonTrackResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListPersonTrackResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListPersonTrackResponseBody() {}

  explicit ListPersonTrackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListPersonTrackResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPersonTrackResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListPersonTrackResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListPersonTrackResponseBody() = default;
};
class ListPersonTrackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPersonTrackResponseBody> body{};

  ListPersonTrackResponse() {}

  explicit ListPersonTrackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPersonTrackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPersonTrackResponseBody>(model1);
      }
    }
  }


  virtual ~ListPersonTrackResponse() = default;
};
class ListCityMapCameraResultsRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> dataSourceIdList{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListCityMapCameraResultsRequest() {}

  explicit ListCityMapCameraResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceIdList) {
      res["DataSourceIdList"] = boost::any(*dataSourceIdList);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceIdList") != m.end() && !m["DataSourceIdList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DataSourceIdList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      dataSourceIdList = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListCityMapCameraResultsRequest() = default;
};
class ListCityMapCameraResultsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceIdListShrink{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListCityMapCameraResultsShrinkRequest() {}

  explicit ListCityMapCameraResultsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceIdListShrink) {
      res["DataSourceIdList"] = boost::any(*dataSourceIdListShrink);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceIdList") != m.end() && !m["DataSourceIdList"].empty()) {
      dataSourceIdListShrink = make_shared<string>(boost::any_cast<string>(m["DataSourceIdList"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListCityMapCameraResultsShrinkRequest() = default;
};
class ListCityMapCameraResultsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceName{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> corpId{};
  shared_ptr<string> longitude{};
  shared_ptr<string> latitude{};
  shared_ptr<string> dataSourcePoi{};
  shared_ptr<string> nearPoi{};

  ListCityMapCameraResultsResponseBodyData() {}

  explicit ListCityMapCameraResultsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceName) {
      res["DataSourceName"] = boost::any(*dataSourceName);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (dataSourcePoi) {
      res["DataSourcePoi"] = boost::any(*dataSourcePoi);
    }
    if (nearPoi) {
      res["NearPoi"] = boost::any(*nearPoi);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceName") != m.end() && !m["DataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["DataSourceName"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("DataSourcePoi") != m.end() && !m["DataSourcePoi"].empty()) {
      dataSourcePoi = make_shared<string>(boost::any_cast<string>(m["DataSourcePoi"]));
    }
    if (m.find("NearPoi") != m.end() && !m["NearPoi"].empty()) {
      nearPoi = make_shared<string>(boost::any_cast<string>(m["NearPoi"]));
    }
  }


  virtual ~ListCityMapCameraResultsResponseBodyData() = default;
};
class ListCityMapCameraResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> pageSize{};
  shared_ptr<vector<ListCityMapCameraResultsResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListCityMapCameraResultsResponseBody() {}

  explicit ListCityMapCameraResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<string>(boost::any_cast<string>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListCityMapCameraResultsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCityMapCameraResultsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCityMapCameraResultsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListCityMapCameraResultsResponseBody() = default;
};
class ListCityMapCameraResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCityMapCameraResultsResponseBody> body{};

  ListCityMapCameraResultsResponse() {}

  explicit ListCityMapCameraResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCityMapCameraResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCityMapCameraResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCityMapCameraResultsResponse() = default;
};
class QueryTrajectoryByIdRequestIdList : public Darabonba::Model {
public:
  shared_ptr<string> idValue{};
  shared_ptr<string> idType{};

  QueryTrajectoryByIdRequestIdList() {}

  explicit QueryTrajectoryByIdRequestIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idValue) {
      res["IdValue"] = boost::any(*idValue);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdValue") != m.end() && !m["IdValue"].empty()) {
      idValue = make_shared<string>(boost::any_cast<string>(m["IdValue"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
  }


  virtual ~QueryTrajectoryByIdRequestIdList() = default;
};
class QueryTrajectoryByIdRequestDeviceList : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};

  QueryTrajectoryByIdRequestDeviceList() {}

  explicit QueryTrajectoryByIdRequestDeviceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~QueryTrajectoryByIdRequestDeviceList() = default;
};
class QueryTrajectoryByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> corpId{};
  shared_ptr<vector<QueryTrajectoryByIdRequestIdList>> idList{};
  shared_ptr<vector<QueryTrajectoryByIdRequestDeviceList>> deviceList{};

  QueryTrajectoryByIdRequest() {}

  explicit QueryTrajectoryByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (idList) {
      vector<boost::any> temp1;
      for(auto item1:*idList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IdList"] = boost::any(temp1);
    }
    if (deviceList) {
      vector<boost::any> temp1;
      for(auto item1:*deviceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("IdList") != m.end() && !m["IdList"].empty()) {
      if (typeid(vector<boost::any>) == m["IdList"].type()) {
        vector<QueryTrajectoryByIdRequestIdList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IdList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTrajectoryByIdRequestIdList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        idList = make_shared<vector<QueryTrajectoryByIdRequestIdList>>(expect1);
      }
    }
    if (m.find("DeviceList") != m.end() && !m["DeviceList"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceList"].type()) {
        vector<QueryTrajectoryByIdRequestDeviceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTrajectoryByIdRequestDeviceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceList = make_shared<vector<QueryTrajectoryByIdRequestDeviceList>>(expect1);
      }
    }
  }


  virtual ~QueryTrajectoryByIdRequest() = default;
};
class QueryTrajectoryByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  QueryTrajectoryByIdResponseBody() {}

  explicit QueryTrajectoryByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryTrajectoryByIdResponseBody() = default;
};
class QueryTrajectoryByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryTrajectoryByIdResponseBody> body{};

  QueryTrajectoryByIdResponse() {}

  explicit QueryTrajectoryByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTrajectoryByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTrajectoryByIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTrajectoryByIdResponse() = default;
};
class ListCityMapImageDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<long> recordNumber{};
  shared_ptr<string> timeInterval{};

  ListCityMapImageDetailsRequest() {}

  explicit ListCityMapImageDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (recordNumber) {
      res["RecordNumber"] = boost::any(*recordNumber);
    }
    if (timeInterval) {
      res["TimeInterval"] = boost::any(*timeInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("RecordNumber") != m.end() && !m["RecordNumber"].empty()) {
      recordNumber = make_shared<long>(boost::any_cast<long>(m["RecordNumber"]));
    }
    if (m.find("TimeInterval") != m.end() && !m["TimeInterval"].empty()) {
      timeInterval = make_shared<string>(boost::any_cast<string>(m["TimeInterval"]));
    }
  }


  virtual ~ListCityMapImageDetailsRequest() = default;
};
class ListCityMapImageDetailsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> motorTargetImageStoragePath{};
  shared_ptr<string> rightBottomY{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> recordId{};
  shared_ptr<string> vehicleColor{};
  shared_ptr<string> sourceImageStoragePath{};
  shared_ptr<string> ageUpLimit{};
  shared_ptr<string> coatColor{};
  shared_ptr<string> rightBottomX{};
  shared_ptr<string> trousersColorReliability{};
  shared_ptr<string> ageLowerLimit{};
  shared_ptr<string> leftTopY{};
  shared_ptr<string> shotTime{};
  shared_ptr<string> personTargetImageStoragePath{};
  shared_ptr<string> vehicleClassReliability{};
  shared_ptr<string> genderCodeReliability{};
  shared_ptr<string> gender{};
  shared_ptr<string> trousersColor{};
  shared_ptr<string> ageCodeReliability{};
  shared_ptr<string> faceTargetImageStoragePath{};
  shared_ptr<string> vehicleClass{};
  shared_ptr<string> vehicleColorReliability{};
  shared_ptr<string> leftTopX{};
  shared_ptr<string> ageLowerLimitReliability{};
  shared_ptr<string> coatColorReliability{};

  ListCityMapImageDetailsResponseBodyData() {}

  explicit ListCityMapImageDetailsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (motorTargetImageStoragePath) {
      res["MotorTargetImageStoragePath"] = boost::any(*motorTargetImageStoragePath);
    }
    if (rightBottomY) {
      res["RightBottomY"] = boost::any(*rightBottomY);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (vehicleColor) {
      res["VehicleColor"] = boost::any(*vehicleColor);
    }
    if (sourceImageStoragePath) {
      res["SourceImageStoragePath"] = boost::any(*sourceImageStoragePath);
    }
    if (ageUpLimit) {
      res["AgeUpLimit"] = boost::any(*ageUpLimit);
    }
    if (coatColor) {
      res["CoatColor"] = boost::any(*coatColor);
    }
    if (rightBottomX) {
      res["RightBottomX"] = boost::any(*rightBottomX);
    }
    if (trousersColorReliability) {
      res["TrousersColorReliability"] = boost::any(*trousersColorReliability);
    }
    if (ageLowerLimit) {
      res["AgeLowerLimit"] = boost::any(*ageLowerLimit);
    }
    if (leftTopY) {
      res["LeftTopY"] = boost::any(*leftTopY);
    }
    if (shotTime) {
      res["ShotTime"] = boost::any(*shotTime);
    }
    if (personTargetImageStoragePath) {
      res["PersonTargetImageStoragePath"] = boost::any(*personTargetImageStoragePath);
    }
    if (vehicleClassReliability) {
      res["VehicleClassReliability"] = boost::any(*vehicleClassReliability);
    }
    if (genderCodeReliability) {
      res["GenderCodeReliability"] = boost::any(*genderCodeReliability);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (trousersColor) {
      res["TrousersColor"] = boost::any(*trousersColor);
    }
    if (ageCodeReliability) {
      res["AgeCodeReliability"] = boost::any(*ageCodeReliability);
    }
    if (faceTargetImageStoragePath) {
      res["FaceTargetImageStoragePath"] = boost::any(*faceTargetImageStoragePath);
    }
    if (vehicleClass) {
      res["VehicleClass"] = boost::any(*vehicleClass);
    }
    if (vehicleColorReliability) {
      res["VehicleColorReliability"] = boost::any(*vehicleColorReliability);
    }
    if (leftTopX) {
      res["LeftTopX"] = boost::any(*leftTopX);
    }
    if (ageLowerLimitReliability) {
      res["AgeLowerLimitReliability"] = boost::any(*ageLowerLimitReliability);
    }
    if (coatColorReliability) {
      res["CoatColorReliability"] = boost::any(*coatColorReliability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MotorTargetImageStoragePath") != m.end() && !m["MotorTargetImageStoragePath"].empty()) {
      motorTargetImageStoragePath = make_shared<string>(boost::any_cast<string>(m["MotorTargetImageStoragePath"]));
    }
    if (m.find("RightBottomY") != m.end() && !m["RightBottomY"].empty()) {
      rightBottomY = make_shared<string>(boost::any_cast<string>(m["RightBottomY"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
    if (m.find("VehicleColor") != m.end() && !m["VehicleColor"].empty()) {
      vehicleColor = make_shared<string>(boost::any_cast<string>(m["VehicleColor"]));
    }
    if (m.find("SourceImageStoragePath") != m.end() && !m["SourceImageStoragePath"].empty()) {
      sourceImageStoragePath = make_shared<string>(boost::any_cast<string>(m["SourceImageStoragePath"]));
    }
    if (m.find("AgeUpLimit") != m.end() && !m["AgeUpLimit"].empty()) {
      ageUpLimit = make_shared<string>(boost::any_cast<string>(m["AgeUpLimit"]));
    }
    if (m.find("CoatColor") != m.end() && !m["CoatColor"].empty()) {
      coatColor = make_shared<string>(boost::any_cast<string>(m["CoatColor"]));
    }
    if (m.find("RightBottomX") != m.end() && !m["RightBottomX"].empty()) {
      rightBottomX = make_shared<string>(boost::any_cast<string>(m["RightBottomX"]));
    }
    if (m.find("TrousersColorReliability") != m.end() && !m["TrousersColorReliability"].empty()) {
      trousersColorReliability = make_shared<string>(boost::any_cast<string>(m["TrousersColorReliability"]));
    }
    if (m.find("AgeLowerLimit") != m.end() && !m["AgeLowerLimit"].empty()) {
      ageLowerLimit = make_shared<string>(boost::any_cast<string>(m["AgeLowerLimit"]));
    }
    if (m.find("LeftTopY") != m.end() && !m["LeftTopY"].empty()) {
      leftTopY = make_shared<string>(boost::any_cast<string>(m["LeftTopY"]));
    }
    if (m.find("ShotTime") != m.end() && !m["ShotTime"].empty()) {
      shotTime = make_shared<string>(boost::any_cast<string>(m["ShotTime"]));
    }
    if (m.find("PersonTargetImageStoragePath") != m.end() && !m["PersonTargetImageStoragePath"].empty()) {
      personTargetImageStoragePath = make_shared<string>(boost::any_cast<string>(m["PersonTargetImageStoragePath"]));
    }
    if (m.find("VehicleClassReliability") != m.end() && !m["VehicleClassReliability"].empty()) {
      vehicleClassReliability = make_shared<string>(boost::any_cast<string>(m["VehicleClassReliability"]));
    }
    if (m.find("GenderCodeReliability") != m.end() && !m["GenderCodeReliability"].empty()) {
      genderCodeReliability = make_shared<string>(boost::any_cast<string>(m["GenderCodeReliability"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("TrousersColor") != m.end() && !m["TrousersColor"].empty()) {
      trousersColor = make_shared<string>(boost::any_cast<string>(m["TrousersColor"]));
    }
    if (m.find("AgeCodeReliability") != m.end() && !m["AgeCodeReliability"].empty()) {
      ageCodeReliability = make_shared<string>(boost::any_cast<string>(m["AgeCodeReliability"]));
    }
    if (m.find("FaceTargetImageStoragePath") != m.end() && !m["FaceTargetImageStoragePath"].empty()) {
      faceTargetImageStoragePath = make_shared<string>(boost::any_cast<string>(m["FaceTargetImageStoragePath"]));
    }
    if (m.find("VehicleClass") != m.end() && !m["VehicleClass"].empty()) {
      vehicleClass = make_shared<string>(boost::any_cast<string>(m["VehicleClass"]));
    }
    if (m.find("VehicleColorReliability") != m.end() && !m["VehicleColorReliability"].empty()) {
      vehicleColorReliability = make_shared<string>(boost::any_cast<string>(m["VehicleColorReliability"]));
    }
    if (m.find("LeftTopX") != m.end() && !m["LeftTopX"].empty()) {
      leftTopX = make_shared<string>(boost::any_cast<string>(m["LeftTopX"]));
    }
    if (m.find("AgeLowerLimitReliability") != m.end() && !m["AgeLowerLimitReliability"].empty()) {
      ageLowerLimitReliability = make_shared<string>(boost::any_cast<string>(m["AgeLowerLimitReliability"]));
    }
    if (m.find("CoatColorReliability") != m.end() && !m["CoatColorReliability"].empty()) {
      coatColorReliability = make_shared<string>(boost::any_cast<string>(m["CoatColorReliability"]));
    }
  }


  virtual ~ListCityMapImageDetailsResponseBodyData() = default;
};
class ListCityMapImageDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListCityMapImageDetailsResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListCityMapImageDetailsResponseBody() {}

  explicit ListCityMapImageDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListCityMapImageDetailsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCityMapImageDetailsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCityMapImageDetailsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListCityMapImageDetailsResponseBody() = default;
};
class ListCityMapImageDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCityMapImageDetailsResponseBody> body{};

  ListCityMapImageDetailsResponse() {}

  explicit ListCityMapImageDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCityMapImageDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCityMapImageDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCityMapImageDetailsResponse() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> icon{};
  shared_ptr<string> description{};
  shared_ptr<string> aggregateSceneCode{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (aggregateSceneCode) {
      res["AggregateSceneCode"] = boost::any(*aggregateSceneCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AggregateSceneCode") != m.end() && !m["AggregateSceneCode"].empty()) {
      aggregateSceneCode = make_shared<string>(boost::any_cast<string>(m["AggregateSceneCode"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  CreateProjectResponseBody() {}

  explicit CreateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~CreateProjectResponseBody() = default;
};
class CreateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateProjectResponseBody> body{};

  CreateProjectResponse() {}

  explicit CreateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProjectResponse() = default;
};
class ListVehicleTopRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> plateId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> pageNum{};

  ListVehicleTopRequest() {}

  explicit ListVehicleTopRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (plateId) {
      res["PlateId"] = boost::any(*plateId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("PlateId") != m.end() && !m["PlateId"].empty()) {
      plateId = make_shared<string>(boost::any_cast<string>(m["PlateId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<string>(boost::any_cast<string>(m["PageNum"]));
    }
  }


  virtual ~ListVehicleTopRequest() = default;
};
class ListVehicleTopResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> frequency{};
  shared_ptr<string> poiId{};
  shared_ptr<string> corpId{};
  shared_ptr<string> vehicleId{};
  shared_ptr<string> passHour{};
  shared_ptr<string> poiName{};

  ListVehicleTopResponseBodyData() {}

  explicit ListVehicleTopResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frequency) {
      res["Frequency"] = boost::any(*frequency);
    }
    if (poiId) {
      res["PoiId"] = boost::any(*poiId);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (vehicleId) {
      res["VehicleId"] = boost::any(*vehicleId);
    }
    if (passHour) {
      res["PassHour"] = boost::any(*passHour);
    }
    if (poiName) {
      res["PoiName"] = boost::any(*poiName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Frequency") != m.end() && !m["Frequency"].empty()) {
      frequency = make_shared<string>(boost::any_cast<string>(m["Frequency"]));
    }
    if (m.find("PoiId") != m.end() && !m["PoiId"].empty()) {
      poiId = make_shared<string>(boost::any_cast<string>(m["PoiId"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("VehicleId") != m.end() && !m["VehicleId"].empty()) {
      vehicleId = make_shared<string>(boost::any_cast<string>(m["VehicleId"]));
    }
    if (m.find("PassHour") != m.end() && !m["PassHour"].empty()) {
      passHour = make_shared<string>(boost::any_cast<string>(m["PassHour"]));
    }
    if (m.find("PoiName") != m.end() && !m["PoiName"].empty()) {
      poiName = make_shared<string>(boost::any_cast<string>(m["PoiName"]));
    }
  }


  virtual ~ListVehicleTopResponseBodyData() = default;
};
class ListVehicleTopResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListVehicleTopResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListVehicleTopResponseBody() {}

  explicit ListVehicleTopResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVehicleTopResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVehicleTopResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVehicleTopResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListVehicleTopResponseBody() = default;
};
class ListVehicleTopResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVehicleTopResponseBody> body{};

  ListVehicleTopResponse() {}

  explicit ListVehicleTopResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVehicleTopResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVehicleTopResponseBody>(model1);
      }
    }
  }


  virtual ~ListVehicleTopResponse() = default;
};
class ListDataStatisticsByDayRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  ListDataStatisticsByDayRequest() {}

  explicit ListDataStatisticsByDayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~ListDataStatisticsByDayRequest() = default;
};
class ListDataStatisticsByDayResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> nonMotorNumber{};
  shared_ptr<long> faceNumber{};
  shared_ptr<long> motorNumber{};
  shared_ptr<string> corpId{};
  shared_ptr<string> date{};
  shared_ptr<long> bodyNumber{};
  shared_ptr<long> totalNumber{};

  ListDataStatisticsByDayResponseBodyData() {}

  explicit ListDataStatisticsByDayResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nonMotorNumber) {
      res["NonMotorNumber"] = boost::any(*nonMotorNumber);
    }
    if (faceNumber) {
      res["FaceNumber"] = boost::any(*faceNumber);
    }
    if (motorNumber) {
      res["MotorNumber"] = boost::any(*motorNumber);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (bodyNumber) {
      res["BodyNumber"] = boost::any(*bodyNumber);
    }
    if (totalNumber) {
      res["TotalNumber"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NonMotorNumber") != m.end() && !m["NonMotorNumber"].empty()) {
      nonMotorNumber = make_shared<long>(boost::any_cast<long>(m["NonMotorNumber"]));
    }
    if (m.find("FaceNumber") != m.end() && !m["FaceNumber"].empty()) {
      faceNumber = make_shared<long>(boost::any_cast<long>(m["FaceNumber"]));
    }
    if (m.find("MotorNumber") != m.end() && !m["MotorNumber"].empty()) {
      motorNumber = make_shared<long>(boost::any_cast<long>(m["MotorNumber"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("BodyNumber") != m.end() && !m["BodyNumber"].empty()) {
      bodyNumber = make_shared<long>(boost::any_cast<long>(m["BodyNumber"]));
    }
    if (m.find("TotalNumber") != m.end() && !m["TotalNumber"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["TotalNumber"]));
    }
  }


  virtual ~ListDataStatisticsByDayResponseBodyData() = default;
};
class ListDataStatisticsByDayResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListDataStatisticsByDayResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListDataStatisticsByDayResponseBody() {}

  explicit ListDataStatisticsByDayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListDataStatisticsByDayResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataStatisticsByDayResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDataStatisticsByDayResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListDataStatisticsByDayResponseBody() = default;
};
class ListDataStatisticsByDayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDataStatisticsByDayResponseBody> body{};

  ListDataStatisticsByDayResponse() {}

  explicit ListDataStatisticsByDayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDataStatisticsByDayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataStatisticsByDayResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataStatisticsByDayResponse() = default;
};
class ListVehicleResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> vehicleColor{};
  shared_ptr<string> vehicleClass{};
  shared_ptr<string> vehicleApplication{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListVehicleResultsRequest() {}

  explicit ListVehicleResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (vehicleColor) {
      res["VehicleColor"] = boost::any(*vehicleColor);
    }
    if (vehicleClass) {
      res["VehicleClass"] = boost::any(*vehicleClass);
    }
    if (vehicleApplication) {
      res["VehicleApplication"] = boost::any(*vehicleApplication);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("VehicleColor") != m.end() && !m["VehicleColor"].empty()) {
      vehicleColor = make_shared<string>(boost::any_cast<string>(m["VehicleColor"]));
    }
    if (m.find("VehicleClass") != m.end() && !m["VehicleClass"].empty()) {
      vehicleClass = make_shared<string>(boost::any_cast<string>(m["VehicleClass"]));
    }
    if (m.find("VehicleApplication") != m.end() && !m["VehicleApplication"].empty()) {
      vehicleApplication = make_shared<string>(boost::any_cast<string>(m["VehicleApplication"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListVehicleResultsRequest() = default;
};
class ListVehicleResultsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> vehicleApplication{};
  shared_ptr<string> profession{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> gender{};
  shared_ptr<string> plateId{};
  shared_ptr<string> vehicleClass{};
  shared_ptr<string> liveAddress{};
  shared_ptr<string> vehicleId{};
  shared_ptr<string> personId{};

  ListVehicleResultsResponseBodyData() {}

  explicit ListVehicleResultsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vehicleApplication) {
      res["VehicleApplication"] = boost::any(*vehicleApplication);
    }
    if (profession) {
      res["Profession"] = boost::any(*profession);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (plateId) {
      res["PlateId"] = boost::any(*plateId);
    }
    if (vehicleClass) {
      res["VehicleClass"] = boost::any(*vehicleClass);
    }
    if (liveAddress) {
      res["LiveAddress"] = boost::any(*liveAddress);
    }
    if (vehicleId) {
      res["VehicleId"] = boost::any(*vehicleId);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VehicleApplication") != m.end() && !m["VehicleApplication"].empty()) {
      vehicleApplication = make_shared<string>(boost::any_cast<string>(m["VehicleApplication"]));
    }
    if (m.find("Profession") != m.end() && !m["Profession"].empty()) {
      profession = make_shared<string>(boost::any_cast<string>(m["Profession"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("PlateId") != m.end() && !m["PlateId"].empty()) {
      plateId = make_shared<string>(boost::any_cast<string>(m["PlateId"]));
    }
    if (m.find("VehicleClass") != m.end() && !m["VehicleClass"].empty()) {
      vehicleClass = make_shared<string>(boost::any_cast<string>(m["VehicleClass"]));
    }
    if (m.find("LiveAddress") != m.end() && !m["LiveAddress"].empty()) {
      liveAddress = make_shared<string>(boost::any_cast<string>(m["LiveAddress"]));
    }
    if (m.find("VehicleId") != m.end() && !m["VehicleId"].empty()) {
      vehicleId = make_shared<string>(boost::any_cast<string>(m["VehicleId"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
  }


  virtual ~ListVehicleResultsResponseBodyData() = default;
};
class ListVehicleResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListVehicleResultsResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListVehicleResultsResponseBody() {}

  explicit ListVehicleResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVehicleResultsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVehicleResultsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVehicleResultsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListVehicleResultsResponseBody() = default;
};
class ListVehicleResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVehicleResultsResponseBody> body{};

  ListVehicleResultsResponse() {}

  explicit ListVehicleResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVehicleResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVehicleResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVehicleResultsResponse() = default;
};
class SearchAggregateObjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> objectType{};
  shared_ptr<string> vendor{};
  shared_ptr<string> feature{};
  shared_ptr<string> imageContent{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> deviceList{};
  shared_ptr<string> attributes{};
  shared_ptr<string> shotTimeStart{};
  shared_ptr<string> shotTimeEnd{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> requireTotalCount{};

  SearchAggregateObjectRequest() {}

  explicit SearchAggregateObjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    if (feature) {
      res["Feature"] = boost::any(*feature);
    }
    if (imageContent) {
      res["ImageContent"] = boost::any(*imageContent);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (deviceList) {
      res["DeviceList"] = boost::any(*deviceList);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (shotTimeStart) {
      res["ShotTimeStart"] = boost::any(*shotTimeStart);
    }
    if (shotTimeEnd) {
      res["ShotTimeEnd"] = boost::any(*shotTimeEnd);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requireTotalCount) {
      res["RequireTotalCount"] = boost::any(*requireTotalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
    if (m.find("Feature") != m.end() && !m["Feature"].empty()) {
      feature = make_shared<string>(boost::any_cast<string>(m["Feature"]));
    }
    if (m.find("ImageContent") != m.end() && !m["ImageContent"].empty()) {
      imageContent = make_shared<string>(boost::any_cast<string>(m["ImageContent"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("DeviceList") != m.end() && !m["DeviceList"].empty()) {
      deviceList = make_shared<string>(boost::any_cast<string>(m["DeviceList"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      attributes = make_shared<string>(boost::any_cast<string>(m["Attributes"]));
    }
    if (m.find("ShotTimeStart") != m.end() && !m["ShotTimeStart"].empty()) {
      shotTimeStart = make_shared<string>(boost::any_cast<string>(m["ShotTimeStart"]));
    }
    if (m.find("ShotTimeEnd") != m.end() && !m["ShotTimeEnd"].empty()) {
      shotTimeEnd = make_shared<string>(boost::any_cast<string>(m["ShotTimeEnd"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequireTotalCount") != m.end() && !m["RequireTotalCount"].empty()) {
      requireTotalCount = make_shared<bool>(boost::any_cast<bool>(m["RequireTotalCount"]));
    }
  }


  virtual ~SearchAggregateObjectRequest() = default;
};
class SearchAggregateObjectResponseBodyDataBodyList : public Darabonba::Model {
public:
  shared_ptr<string> deviceID{};
  shared_ptr<string> objectType{};
  shared_ptr<string> deviceName{};
  shared_ptr<long> rightBottomY{};
  shared_ptr<double> score{};
  shared_ptr<long> rightBottomX{};
  shared_ptr<double> deviceLongitude{};
  shared_ptr<string> sourceImageUrl{};
  shared_ptr<string> targetImageUrl{};
  shared_ptr<long> leftTopY{};
  shared_ptr<string> shotTime{};
  shared_ptr<string> personId{};
  shared_ptr<long> leftTopX{};
  shared_ptr<double> deviceLatitude{};

  SearchAggregateObjectResponseBodyDataBodyList() {}

  explicit SearchAggregateObjectResponseBodyDataBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceID) {
      res["DeviceID"] = boost::any(*deviceID);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (rightBottomY) {
      res["RightBottomY"] = boost::any(*rightBottomY);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (rightBottomX) {
      res["RightBottomX"] = boost::any(*rightBottomX);
    }
    if (deviceLongitude) {
      res["DeviceLongitude"] = boost::any(*deviceLongitude);
    }
    if (sourceImageUrl) {
      res["SourceImageUrl"] = boost::any(*sourceImageUrl);
    }
    if (targetImageUrl) {
      res["TargetImageUrl"] = boost::any(*targetImageUrl);
    }
    if (leftTopY) {
      res["LeftTopY"] = boost::any(*leftTopY);
    }
    if (shotTime) {
      res["ShotTime"] = boost::any(*shotTime);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    if (leftTopX) {
      res["LeftTopX"] = boost::any(*leftTopX);
    }
    if (deviceLatitude) {
      res["DeviceLatitude"] = boost::any(*deviceLatitude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceID") != m.end() && !m["DeviceID"].empty()) {
      deviceID = make_shared<string>(boost::any_cast<string>(m["DeviceID"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("RightBottomY") != m.end() && !m["RightBottomY"].empty()) {
      rightBottomY = make_shared<long>(boost::any_cast<long>(m["RightBottomY"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("RightBottomX") != m.end() && !m["RightBottomX"].empty()) {
      rightBottomX = make_shared<long>(boost::any_cast<long>(m["RightBottomX"]));
    }
    if (m.find("DeviceLongitude") != m.end() && !m["DeviceLongitude"].empty()) {
      deviceLongitude = make_shared<double>(boost::any_cast<double>(m["DeviceLongitude"]));
    }
    if (m.find("SourceImageUrl") != m.end() && !m["SourceImageUrl"].empty()) {
      sourceImageUrl = make_shared<string>(boost::any_cast<string>(m["SourceImageUrl"]));
    }
    if (m.find("TargetImageUrl") != m.end() && !m["TargetImageUrl"].empty()) {
      targetImageUrl = make_shared<string>(boost::any_cast<string>(m["TargetImageUrl"]));
    }
    if (m.find("LeftTopY") != m.end() && !m["LeftTopY"].empty()) {
      leftTopY = make_shared<long>(boost::any_cast<long>(m["LeftTopY"]));
    }
    if (m.find("ShotTime") != m.end() && !m["ShotTime"].empty()) {
      shotTime = make_shared<string>(boost::any_cast<string>(m["ShotTime"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
    if (m.find("LeftTopX") != m.end() && !m["LeftTopX"].empty()) {
      leftTopX = make_shared<long>(boost::any_cast<long>(m["LeftTopX"]));
    }
    if (m.find("DeviceLatitude") != m.end() && !m["DeviceLatitude"].empty()) {
      deviceLatitude = make_shared<double>(boost::any_cast<double>(m["DeviceLatitude"]));
    }
  }


  virtual ~SearchAggregateObjectResponseBodyDataBodyList() = default;
};
class SearchAggregateObjectResponseBodyDataFaceList : public Darabonba::Model {
public:
  shared_ptr<string> deviceID{};
  shared_ptr<string> objectType{};
  shared_ptr<string> deviceName{};
  shared_ptr<long> rightBottomY{};
  shared_ptr<double> score{};
  shared_ptr<long> rightBottomX{};
  shared_ptr<double> deviceLongitude{};
  shared_ptr<string> sourceImageUrl{};
  shared_ptr<string> targetImageUrl{};
  shared_ptr<long> leftTopY{};
  shared_ptr<string> shotTime{};
  shared_ptr<string> personId{};
  shared_ptr<long> leftTopX{};
  shared_ptr<double> deviceLatitude{};

  SearchAggregateObjectResponseBodyDataFaceList() {}

  explicit SearchAggregateObjectResponseBodyDataFaceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceID) {
      res["DeviceID"] = boost::any(*deviceID);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (rightBottomY) {
      res["RightBottomY"] = boost::any(*rightBottomY);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (rightBottomX) {
      res["RightBottomX"] = boost::any(*rightBottomX);
    }
    if (deviceLongitude) {
      res["DeviceLongitude"] = boost::any(*deviceLongitude);
    }
    if (sourceImageUrl) {
      res["SourceImageUrl"] = boost::any(*sourceImageUrl);
    }
    if (targetImageUrl) {
      res["TargetImageUrl"] = boost::any(*targetImageUrl);
    }
    if (leftTopY) {
      res["LeftTopY"] = boost::any(*leftTopY);
    }
    if (shotTime) {
      res["ShotTime"] = boost::any(*shotTime);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    if (leftTopX) {
      res["LeftTopX"] = boost::any(*leftTopX);
    }
    if (deviceLatitude) {
      res["DeviceLatitude"] = boost::any(*deviceLatitude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceID") != m.end() && !m["DeviceID"].empty()) {
      deviceID = make_shared<string>(boost::any_cast<string>(m["DeviceID"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("RightBottomY") != m.end() && !m["RightBottomY"].empty()) {
      rightBottomY = make_shared<long>(boost::any_cast<long>(m["RightBottomY"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("RightBottomX") != m.end() && !m["RightBottomX"].empty()) {
      rightBottomX = make_shared<long>(boost::any_cast<long>(m["RightBottomX"]));
    }
    if (m.find("DeviceLongitude") != m.end() && !m["DeviceLongitude"].empty()) {
      deviceLongitude = make_shared<double>(boost::any_cast<double>(m["DeviceLongitude"]));
    }
    if (m.find("SourceImageUrl") != m.end() && !m["SourceImageUrl"].empty()) {
      sourceImageUrl = make_shared<string>(boost::any_cast<string>(m["SourceImageUrl"]));
    }
    if (m.find("TargetImageUrl") != m.end() && !m["TargetImageUrl"].empty()) {
      targetImageUrl = make_shared<string>(boost::any_cast<string>(m["TargetImageUrl"]));
    }
    if (m.find("LeftTopY") != m.end() && !m["LeftTopY"].empty()) {
      leftTopY = make_shared<long>(boost::any_cast<long>(m["LeftTopY"]));
    }
    if (m.find("ShotTime") != m.end() && !m["ShotTime"].empty()) {
      shotTime = make_shared<string>(boost::any_cast<string>(m["ShotTime"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
    if (m.find("LeftTopX") != m.end() && !m["LeftTopX"].empty()) {
      leftTopX = make_shared<long>(boost::any_cast<long>(m["LeftTopX"]));
    }
    if (m.find("DeviceLatitude") != m.end() && !m["DeviceLatitude"].empty()) {
      deviceLatitude = make_shared<double>(boost::any_cast<double>(m["DeviceLatitude"]));
    }
  }


  virtual ~SearchAggregateObjectResponseBodyDataFaceList() = default;
};
class SearchAggregateObjectResponseBodyDataMotorList : public Darabonba::Model {
public:
  shared_ptr<string> deviceID{};
  shared_ptr<string> objectType{};
  shared_ptr<string> deviceName{};
  shared_ptr<long> rightBottomY{};
  shared_ptr<double> score{};
  shared_ptr<long> rightBottomX{};
  shared_ptr<double> deviceLongitude{};
  shared_ptr<string> sourceImageUrl{};
  shared_ptr<string> targetImageUrl{};
  shared_ptr<long> leftTopY{};
  shared_ptr<string> shotTime{};
  shared_ptr<string> personId{};
  shared_ptr<long> leftTopX{};
  shared_ptr<double> deviceLatitude{};

  SearchAggregateObjectResponseBodyDataMotorList() {}

  explicit SearchAggregateObjectResponseBodyDataMotorList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceID) {
      res["DeviceID"] = boost::any(*deviceID);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (rightBottomY) {
      res["RightBottomY"] = boost::any(*rightBottomY);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (rightBottomX) {
      res["RightBottomX"] = boost::any(*rightBottomX);
    }
    if (deviceLongitude) {
      res["DeviceLongitude"] = boost::any(*deviceLongitude);
    }
    if (sourceImageUrl) {
      res["SourceImageUrl"] = boost::any(*sourceImageUrl);
    }
    if (targetImageUrl) {
      res["TargetImageUrl"] = boost::any(*targetImageUrl);
    }
    if (leftTopY) {
      res["LeftTopY"] = boost::any(*leftTopY);
    }
    if (shotTime) {
      res["ShotTime"] = boost::any(*shotTime);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    if (leftTopX) {
      res["LeftTopX"] = boost::any(*leftTopX);
    }
    if (deviceLatitude) {
      res["DeviceLatitude"] = boost::any(*deviceLatitude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceID") != m.end() && !m["DeviceID"].empty()) {
      deviceID = make_shared<string>(boost::any_cast<string>(m["DeviceID"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("RightBottomY") != m.end() && !m["RightBottomY"].empty()) {
      rightBottomY = make_shared<long>(boost::any_cast<long>(m["RightBottomY"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("RightBottomX") != m.end() && !m["RightBottomX"].empty()) {
      rightBottomX = make_shared<long>(boost::any_cast<long>(m["RightBottomX"]));
    }
    if (m.find("DeviceLongitude") != m.end() && !m["DeviceLongitude"].empty()) {
      deviceLongitude = make_shared<double>(boost::any_cast<double>(m["DeviceLongitude"]));
    }
    if (m.find("SourceImageUrl") != m.end() && !m["SourceImageUrl"].empty()) {
      sourceImageUrl = make_shared<string>(boost::any_cast<string>(m["SourceImageUrl"]));
    }
    if (m.find("TargetImageUrl") != m.end() && !m["TargetImageUrl"].empty()) {
      targetImageUrl = make_shared<string>(boost::any_cast<string>(m["TargetImageUrl"]));
    }
    if (m.find("LeftTopY") != m.end() && !m["LeftTopY"].empty()) {
      leftTopY = make_shared<long>(boost::any_cast<long>(m["LeftTopY"]));
    }
    if (m.find("ShotTime") != m.end() && !m["ShotTime"].empty()) {
      shotTime = make_shared<string>(boost::any_cast<string>(m["ShotTime"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
    if (m.find("LeftTopX") != m.end() && !m["LeftTopX"].empty()) {
      leftTopX = make_shared<long>(boost::any_cast<long>(m["LeftTopX"]));
    }
    if (m.find("DeviceLatitude") != m.end() && !m["DeviceLatitude"].empty()) {
      deviceLatitude = make_shared<double>(boost::any_cast<double>(m["DeviceLatitude"]));
    }
  }


  virtual ~SearchAggregateObjectResponseBodyDataMotorList() = default;
};
class SearchAggregateObjectResponseBodyDataNonMotorList : public Darabonba::Model {
public:
  shared_ptr<string> deviceID{};
  shared_ptr<string> objectType{};
  shared_ptr<string> deviceName{};
  shared_ptr<long> rightBottomY{};
  shared_ptr<double> score{};
  shared_ptr<long> rightBottomX{};
  shared_ptr<double> deviceLongitude{};
  shared_ptr<string> sourceImageUrl{};
  shared_ptr<string> targetImageUrl{};
  shared_ptr<long> leftTopY{};
  shared_ptr<string> shotTime{};
  shared_ptr<string> personId{};
  shared_ptr<long> leftTopX{};
  shared_ptr<double> deviceLatitude{};

  SearchAggregateObjectResponseBodyDataNonMotorList() {}

  explicit SearchAggregateObjectResponseBodyDataNonMotorList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceID) {
      res["DeviceID"] = boost::any(*deviceID);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (rightBottomY) {
      res["RightBottomY"] = boost::any(*rightBottomY);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (rightBottomX) {
      res["RightBottomX"] = boost::any(*rightBottomX);
    }
    if (deviceLongitude) {
      res["DeviceLongitude"] = boost::any(*deviceLongitude);
    }
    if (sourceImageUrl) {
      res["SourceImageUrl"] = boost::any(*sourceImageUrl);
    }
    if (targetImageUrl) {
      res["TargetImageUrl"] = boost::any(*targetImageUrl);
    }
    if (leftTopY) {
      res["LeftTopY"] = boost::any(*leftTopY);
    }
    if (shotTime) {
      res["ShotTime"] = boost::any(*shotTime);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    if (leftTopX) {
      res["LeftTopX"] = boost::any(*leftTopX);
    }
    if (deviceLatitude) {
      res["DeviceLatitude"] = boost::any(*deviceLatitude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceID") != m.end() && !m["DeviceID"].empty()) {
      deviceID = make_shared<string>(boost::any_cast<string>(m["DeviceID"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("RightBottomY") != m.end() && !m["RightBottomY"].empty()) {
      rightBottomY = make_shared<long>(boost::any_cast<long>(m["RightBottomY"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("RightBottomX") != m.end() && !m["RightBottomX"].empty()) {
      rightBottomX = make_shared<long>(boost::any_cast<long>(m["RightBottomX"]));
    }
    if (m.find("DeviceLongitude") != m.end() && !m["DeviceLongitude"].empty()) {
      deviceLongitude = make_shared<double>(boost::any_cast<double>(m["DeviceLongitude"]));
    }
    if (m.find("SourceImageUrl") != m.end() && !m["SourceImageUrl"].empty()) {
      sourceImageUrl = make_shared<string>(boost::any_cast<string>(m["SourceImageUrl"]));
    }
    if (m.find("TargetImageUrl") != m.end() && !m["TargetImageUrl"].empty()) {
      targetImageUrl = make_shared<string>(boost::any_cast<string>(m["TargetImageUrl"]));
    }
    if (m.find("LeftTopY") != m.end() && !m["LeftTopY"].empty()) {
      leftTopY = make_shared<long>(boost::any_cast<long>(m["LeftTopY"]));
    }
    if (m.find("ShotTime") != m.end() && !m["ShotTime"].empty()) {
      shotTime = make_shared<string>(boost::any_cast<string>(m["ShotTime"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
    if (m.find("LeftTopX") != m.end() && !m["LeftTopX"].empty()) {
      leftTopX = make_shared<long>(boost::any_cast<long>(m["LeftTopX"]));
    }
    if (m.find("DeviceLatitude") != m.end() && !m["DeviceLatitude"].empty()) {
      deviceLatitude = make_shared<double>(boost::any_cast<double>(m["DeviceLatitude"]));
    }
  }


  virtual ~SearchAggregateObjectResponseBodyDataNonMotorList() = default;
};
class SearchAggregateObjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SearchAggregateObjectResponseBodyDataBodyList>> bodyList{};
  shared_ptr<vector<SearchAggregateObjectResponseBodyDataFaceList>> faceList{};
  shared_ptr<vector<SearchAggregateObjectResponseBodyDataMotorList>> motorList{};
  shared_ptr<vector<SearchAggregateObjectResponseBodyDataNonMotorList>> nonMotorList{};

  SearchAggregateObjectResponseBodyData() {}

  explicit SearchAggregateObjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyList) {
      vector<boost::any> temp1;
      for(auto item1:*bodyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BodyList"] = boost::any(temp1);
    }
    if (faceList) {
      vector<boost::any> temp1;
      for(auto item1:*faceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceList"] = boost::any(temp1);
    }
    if (motorList) {
      vector<boost::any> temp1;
      for(auto item1:*motorList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MotorList"] = boost::any(temp1);
    }
    if (nonMotorList) {
      vector<boost::any> temp1;
      for(auto item1:*nonMotorList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NonMotorList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyList") != m.end() && !m["BodyList"].empty()) {
      if (typeid(vector<boost::any>) == m["BodyList"].type()) {
        vector<SearchAggregateObjectResponseBodyDataBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BodyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchAggregateObjectResponseBodyDataBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bodyList = make_shared<vector<SearchAggregateObjectResponseBodyDataBodyList>>(expect1);
      }
    }
    if (m.find("FaceList") != m.end() && !m["FaceList"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceList"].type()) {
        vector<SearchAggregateObjectResponseBodyDataFaceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchAggregateObjectResponseBodyDataFaceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceList = make_shared<vector<SearchAggregateObjectResponseBodyDataFaceList>>(expect1);
      }
    }
    if (m.find("MotorList") != m.end() && !m["MotorList"].empty()) {
      if (typeid(vector<boost::any>) == m["MotorList"].type()) {
        vector<SearchAggregateObjectResponseBodyDataMotorList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MotorList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchAggregateObjectResponseBodyDataMotorList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        motorList = make_shared<vector<SearchAggregateObjectResponseBodyDataMotorList>>(expect1);
      }
    }
    if (m.find("NonMotorList") != m.end() && !m["NonMotorList"].empty()) {
      if (typeid(vector<boost::any>) == m["NonMotorList"].type()) {
        vector<SearchAggregateObjectResponseBodyDataNonMotorList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NonMotorList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchAggregateObjectResponseBodyDataNonMotorList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nonMotorList = make_shared<vector<SearchAggregateObjectResponseBodyDataNonMotorList>>(expect1);
      }
    }
  }


  virtual ~SearchAggregateObjectResponseBodyData() = default;
};
class SearchAggregateObjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<SearchAggregateObjectResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SearchAggregateObjectResponseBody() {}

  explicit SearchAggregateObjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SearchAggregateObjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SearchAggregateObjectResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SearchAggregateObjectResponseBody() = default;
};
class SearchAggregateObjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SearchAggregateObjectResponseBody> body{};

  SearchAggregateObjectResponse() {}

  explicit SearchAggregateObjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SearchAggregateObjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchAggregateObjectResponseBody>(model1);
      }
    }
  }


  virtual ~SearchAggregateObjectResponse() = default;
};
class ListCorpMetricsStatisticRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> tagCode{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<map<string, boost::any>> userGroupList{};
  shared_ptr<map<string, boost::any>> deviceGroupList{};
  shared_ptr<map<string, boost::any>> deviceIdList{};
  shared_ptr<string> qualitScore{};

  ListCorpMetricsStatisticRequest() {}

  explicit ListCorpMetricsStatisticRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (tagCode) {
      res["TagCode"] = boost::any(*tagCode);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userGroupList) {
      res["UserGroupList"] = boost::any(*userGroupList);
    }
    if (deviceGroupList) {
      res["DeviceGroupList"] = boost::any(*deviceGroupList);
    }
    if (deviceIdList) {
      res["DeviceIdList"] = boost::any(*deviceIdList);
    }
    if (qualitScore) {
      res["QualitScore"] = boost::any(*qualitScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("TagCode") != m.end() && !m["TagCode"].empty()) {
      tagCode = make_shared<string>(boost::any_cast<string>(m["TagCode"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserGroupList") != m.end() && !m["UserGroupList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["UserGroupList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      userGroupList = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DeviceGroupList") != m.end() && !m["DeviceGroupList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DeviceGroupList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      deviceGroupList = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DeviceIdList") != m.end() && !m["DeviceIdList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DeviceIdList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      deviceIdList = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("QualitScore") != m.end() && !m["QualitScore"].empty()) {
      qualitScore = make_shared<string>(boost::any_cast<string>(m["QualitScore"]));
    }
  }


  virtual ~ListCorpMetricsStatisticRequest() = default;
};
class ListCorpMetricsStatisticShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> tagCode{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> userGroupListShrink{};
  shared_ptr<string> deviceGroupListShrink{};
  shared_ptr<string> deviceIdListShrink{};
  shared_ptr<string> qualitScore{};

  ListCorpMetricsStatisticShrinkRequest() {}

  explicit ListCorpMetricsStatisticShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (tagCode) {
      res["TagCode"] = boost::any(*tagCode);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userGroupListShrink) {
      res["UserGroupList"] = boost::any(*userGroupListShrink);
    }
    if (deviceGroupListShrink) {
      res["DeviceGroupList"] = boost::any(*deviceGroupListShrink);
    }
    if (deviceIdListShrink) {
      res["DeviceIdList"] = boost::any(*deviceIdListShrink);
    }
    if (qualitScore) {
      res["QualitScore"] = boost::any(*qualitScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("TagCode") != m.end() && !m["TagCode"].empty()) {
      tagCode = make_shared<string>(boost::any_cast<string>(m["TagCode"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserGroupList") != m.end() && !m["UserGroupList"].empty()) {
      userGroupListShrink = make_shared<string>(boost::any_cast<string>(m["UserGroupList"]));
    }
    if (m.find("DeviceGroupList") != m.end() && !m["DeviceGroupList"].empty()) {
      deviceGroupListShrink = make_shared<string>(boost::any_cast<string>(m["DeviceGroupList"]));
    }
    if (m.find("DeviceIdList") != m.end() && !m["DeviceIdList"].empty()) {
      deviceIdListShrink = make_shared<string>(boost::any_cast<string>(m["DeviceIdList"]));
    }
    if (m.find("QualitScore") != m.end() && !m["QualitScore"].empty()) {
      qualitScore = make_shared<string>(boost::any_cast<string>(m["QualitScore"]));
    }
  }


  virtual ~ListCorpMetricsStatisticShrinkRequest() = default;
};
class ListCorpMetricsStatisticResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dateId{};
  shared_ptr<string> deviceGroupId{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> tagCode{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> corpId{};
  shared_ptr<string> tagMetrics{};
  shared_ptr<string> tagValue{};
  shared_ptr<string> personId{};

  ListCorpMetricsStatisticResponseBodyData() {}

  explicit ListCorpMetricsStatisticResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateId) {
      res["DateId"] = boost::any(*dateId);
    }
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (tagCode) {
      res["TagCode"] = boost::any(*tagCode);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (tagMetrics) {
      res["TagMetrics"] = boost::any(*tagMetrics);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateId") != m.end() && !m["DateId"].empty()) {
      dateId = make_shared<string>(boost::any_cast<string>(m["DateId"]));
    }
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("TagCode") != m.end() && !m["TagCode"].empty()) {
      tagCode = make_shared<string>(boost::any_cast<string>(m["TagCode"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("TagMetrics") != m.end() && !m["TagMetrics"].empty()) {
      tagMetrics = make_shared<string>(boost::any_cast<string>(m["TagMetrics"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
  }


  virtual ~ListCorpMetricsStatisticResponseBodyData() = default;
};
class ListCorpMetricsStatisticResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListCorpMetricsStatisticResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};

  ListCorpMetricsStatisticResponseBody() {}

  explicit ListCorpMetricsStatisticResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListCorpMetricsStatisticResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCorpMetricsStatisticResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCorpMetricsStatisticResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ListCorpMetricsStatisticResponseBody() = default;
};
class ListCorpMetricsStatisticResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCorpMetricsStatisticResponseBody> body{};

  ListCorpMetricsStatisticResponse() {}

  explicit ListCorpMetricsStatisticResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCorpMetricsStatisticResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCorpMetricsStatisticResponseBody>(model1);
      }
    }
  }


  virtual ~ListCorpMetricsStatisticResponse() = default;
};
class DetectTrajectoryRegularPatternRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> idType{};
  shared_ptr<string> idValue{};
  shared_ptr<string> predictDate{};

  DetectTrajectoryRegularPatternRequest() {}

  explicit DetectTrajectoryRegularPatternRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (idValue) {
      res["IdValue"] = boost::any(*idValue);
    }
    if (predictDate) {
      res["PredictDate"] = boost::any(*predictDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("IdValue") != m.end() && !m["IdValue"].empty()) {
      idValue = make_shared<string>(boost::any_cast<string>(m["IdValue"]));
    }
    if (m.find("PredictDate") != m.end() && !m["PredictDate"].empty()) {
      predictDate = make_shared<string>(boost::any_cast<string>(m["PredictDate"]));
    }
  }


  virtual ~DetectTrajectoryRegularPatternRequest() = default;
};
class DetectTrajectoryRegularPatternResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  DetectTrajectoryRegularPatternResponseBody() {}

  explicit DetectTrajectoryRegularPatternResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DetectTrajectoryRegularPatternResponseBody() = default;
};
class DetectTrajectoryRegularPatternResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectTrajectoryRegularPatternResponseBody> body{};

  DetectTrajectoryRegularPatternResponse() {}

  explicit DetectTrajectoryRegularPatternResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetectTrajectoryRegularPatternResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectTrajectoryRegularPatternResponseBody>(model1);
      }
    }
  }


  virtual ~DetectTrajectoryRegularPatternResponse() = default;
};
class ListVehicleTrackRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> plateId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  ListVehicleTrackRequest() {}

  explicit ListVehicleTrackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (plateId) {
      res["PlateId"] = boost::any(*plateId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("PlateId") != m.end() && !m["PlateId"].empty()) {
      plateId = make_shared<string>(boost::any_cast<string>(m["PlateId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~ListVehicleTrackRequest() = default;
};
class ListVehicleTrackResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> sourceUrl{};
  shared_ptr<string> rightBottomY{};
  shared_ptr<string> dataSourceName{};
  shared_ptr<string> picUrlPath{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> rightBottomX{};
  shared_ptr<string> targetPicUrlPath{};
  shared_ptr<string> plateId{};
  shared_ptr<string> leftTopY{};
  shared_ptr<string> targetUrl{};
  shared_ptr<string> corpId{};
  shared_ptr<string> longitude{};
  shared_ptr<string> latitude{};
  shared_ptr<string> leftTopX{};
  shared_ptr<string> passTime{};

  ListVehicleTrackResponseBodyData() {}

  explicit ListVehicleTrackResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    if (rightBottomY) {
      res["RightBottomY"] = boost::any(*rightBottomY);
    }
    if (dataSourceName) {
      res["DataSourceName"] = boost::any(*dataSourceName);
    }
    if (picUrlPath) {
      res["PicUrlPath"] = boost::any(*picUrlPath);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (rightBottomX) {
      res["RightBottomX"] = boost::any(*rightBottomX);
    }
    if (targetPicUrlPath) {
      res["TargetPicUrlPath"] = boost::any(*targetPicUrlPath);
    }
    if (plateId) {
      res["PlateId"] = boost::any(*plateId);
    }
    if (leftTopY) {
      res["LeftTopY"] = boost::any(*leftTopY);
    }
    if (targetUrl) {
      res["TargetUrl"] = boost::any(*targetUrl);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (leftTopX) {
      res["LeftTopX"] = boost::any(*leftTopX);
    }
    if (passTime) {
      res["PassTime"] = boost::any(*passTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
    if (m.find("RightBottomY") != m.end() && !m["RightBottomY"].empty()) {
      rightBottomY = make_shared<string>(boost::any_cast<string>(m["RightBottomY"]));
    }
    if (m.find("DataSourceName") != m.end() && !m["DataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["DataSourceName"]));
    }
    if (m.find("PicUrlPath") != m.end() && !m["PicUrlPath"].empty()) {
      picUrlPath = make_shared<string>(boost::any_cast<string>(m["PicUrlPath"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("RightBottomX") != m.end() && !m["RightBottomX"].empty()) {
      rightBottomX = make_shared<string>(boost::any_cast<string>(m["RightBottomX"]));
    }
    if (m.find("TargetPicUrlPath") != m.end() && !m["TargetPicUrlPath"].empty()) {
      targetPicUrlPath = make_shared<string>(boost::any_cast<string>(m["TargetPicUrlPath"]));
    }
    if (m.find("PlateId") != m.end() && !m["PlateId"].empty()) {
      plateId = make_shared<string>(boost::any_cast<string>(m["PlateId"]));
    }
    if (m.find("LeftTopY") != m.end() && !m["LeftTopY"].empty()) {
      leftTopY = make_shared<string>(boost::any_cast<string>(m["LeftTopY"]));
    }
    if (m.find("TargetUrl") != m.end() && !m["TargetUrl"].empty()) {
      targetUrl = make_shared<string>(boost::any_cast<string>(m["TargetUrl"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("LeftTopX") != m.end() && !m["LeftTopX"].empty()) {
      leftTopX = make_shared<string>(boost::any_cast<string>(m["LeftTopX"]));
    }
    if (m.find("PassTime") != m.end() && !m["PassTime"].empty()) {
      passTime = make_shared<string>(boost::any_cast<string>(m["PassTime"]));
    }
  }


  virtual ~ListVehicleTrackResponseBodyData() = default;
};
class ListVehicleTrackResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListVehicleTrackResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListVehicleTrackResponseBody() {}

  explicit ListVehicleTrackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVehicleTrackResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVehicleTrackResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVehicleTrackResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListVehicleTrackResponseBody() = default;
};
class ListVehicleTrackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVehicleTrackResponseBody> body{};

  ListVehicleTrackResponse() {}

  explicit ListVehicleTrackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVehicleTrackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVehicleTrackResponseBody>(model1);
      }
    }
  }


  virtual ~ListVehicleTrackResponse() = default;
};
class ListStructureStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> backCategory{};

  ListStructureStatisticsRequest() {}

  explicit ListStructureStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (backCategory) {
      res["BackCategory"] = boost::any(*backCategory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("BackCategory") != m.end() && !m["BackCategory"].empty()) {
      backCategory = make_shared<string>(boost::any_cast<string>(m["BackCategory"]));
    }
  }


  virtual ~ListStructureStatisticsRequest() = default;
};
class ListStructureStatisticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> number{};

  ListStructureStatisticsResponseBodyData() {}

  explicit ListStructureStatisticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
  }


  virtual ~ListStructureStatisticsResponseBodyData() = default;
};
class ListStructureStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListStructureStatisticsResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListStructureStatisticsResponseBody() {}

  explicit ListStructureStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListStructureStatisticsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStructureStatisticsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListStructureStatisticsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListStructureStatisticsResponseBody() = default;
};
class ListStructureStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListStructureStatisticsResponseBody> body{};

  ListStructureStatisticsResponse() {}

  explicit ListStructureStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListStructureStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStructureStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~ListStructureStatisticsResponse() = default;
};
class StopMonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> algorithmVendor{};
  shared_ptr<string> corpId{};

  StopMonitorRequest() {}

  explicit StopMonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (algorithmVendor) {
      res["AlgorithmVendor"] = boost::any(*algorithmVendor);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("AlgorithmVendor") != m.end() && !m["AlgorithmVendor"].empty()) {
      algorithmVendor = make_shared<string>(boost::any_cast<string>(m["AlgorithmVendor"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
  }


  virtual ~StopMonitorRequest() = default;
};
class StopMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};

  StopMonitorResponseBody() {}

  explicit StopMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~StopMonitorResponseBody() = default;
};
class StopMonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopMonitorResponseBody> body{};

  StopMonitorResponse() {}

  explicit StopMonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopMonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopMonitorResponseBody>(model1);
      }
    }
  }


  virtual ~StopMonitorResponse() = default;
};
class PredictTrajectoryDestinationRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> idType{};
  shared_ptr<string> idValue{};
  shared_ptr<long> predictTimeSpan{};

  PredictTrajectoryDestinationRequest() {}

  explicit PredictTrajectoryDestinationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (idValue) {
      res["IdValue"] = boost::any(*idValue);
    }
    if (predictTimeSpan) {
      res["PredictTimeSpan"] = boost::any(*predictTimeSpan);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("IdValue") != m.end() && !m["IdValue"].empty()) {
      idValue = make_shared<string>(boost::any_cast<string>(m["IdValue"]));
    }
    if (m.find("PredictTimeSpan") != m.end() && !m["PredictTimeSpan"].empty()) {
      predictTimeSpan = make_shared<long>(boost::any_cast<long>(m["PredictTimeSpan"]));
    }
  }


  virtual ~PredictTrajectoryDestinationRequest() = default;
};
class PredictTrajectoryDestinationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  PredictTrajectoryDestinationResponseBody() {}

  explicit PredictTrajectoryDestinationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PredictTrajectoryDestinationResponseBody() = default;
};
class PredictTrajectoryDestinationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PredictTrajectoryDestinationResponseBody> body{};

  PredictTrajectoryDestinationResponse() {}

  explicit PredictTrajectoryDestinationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PredictTrajectoryDestinationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PredictTrajectoryDestinationResponseBody>(model1);
      }
    }
  }


  virtual ~PredictTrajectoryDestinationResponse() = default;
};
class ListRangeDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> radius{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> corpId{};

  ListRangeDeviceRequest() {}

  explicit ListRangeDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (radius) {
      res["Radius"] = boost::any(*radius);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Radius") != m.end() && !m["Radius"].empty()) {
      radius = make_shared<long>(boost::any_cast<long>(m["Radius"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
  }


  virtual ~ListRangeDeviceRequest() = default;
};
class ListRangeDeviceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceIdPoi{};
  shared_ptr<string> distance{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> corpId{};
  shared_ptr<string> longitude{};
  shared_ptr<string> dataSourceIdName{};
  shared_ptr<string> latitude{};
  shared_ptr<string> nearPoi{};

  ListRangeDeviceResponseBodyData() {}

  explicit ListRangeDeviceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceIdPoi) {
      res["DataSourceIdPoi"] = boost::any(*dataSourceIdPoi);
    }
    if (distance) {
      res["Distance"] = boost::any(*distance);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (dataSourceIdName) {
      res["DataSourceIdName"] = boost::any(*dataSourceIdName);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (nearPoi) {
      res["NearPoi"] = boost::any(*nearPoi);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceIdPoi") != m.end() && !m["DataSourceIdPoi"].empty()) {
      dataSourceIdPoi = make_shared<string>(boost::any_cast<string>(m["DataSourceIdPoi"]));
    }
    if (m.find("Distance") != m.end() && !m["Distance"].empty()) {
      distance = make_shared<string>(boost::any_cast<string>(m["Distance"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("DataSourceIdName") != m.end() && !m["DataSourceIdName"].empty()) {
      dataSourceIdName = make_shared<string>(boost::any_cast<string>(m["DataSourceIdName"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("NearPoi") != m.end() && !m["NearPoi"].empty()) {
      nearPoi = make_shared<string>(boost::any_cast<string>(m["NearPoi"]));
    }
  }


  virtual ~ListRangeDeviceResponseBodyData() = default;
};
class ListRangeDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListRangeDeviceResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListRangeDeviceResponseBody() {}

  explicit ListRangeDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListRangeDeviceResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRangeDeviceResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListRangeDeviceResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListRangeDeviceResponseBody() = default;
};
class ListRangeDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRangeDeviceResponseBody> body{};

  ListRangeDeviceResponse() {}

  explicit ListRangeDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListRangeDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRangeDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~ListRangeDeviceResponse() = default;
};
class ListCityMapRangeStatisticRequest : public Darabonba::Model {
public:
  shared_ptr<long> radius{};
  shared_ptr<string> latitude{};
  shared_ptr<string> longitude{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListCityMapRangeStatisticRequest() {}

  explicit ListCityMapRangeStatisticRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (radius) {
      res["Radius"] = boost::any(*radius);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Radius") != m.end() && !m["Radius"].empty()) {
      radius = make_shared<long>(boost::any_cast<long>(m["Radius"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListCityMapRangeStatisticRequest() = default;
};
class ListCityMapRangeStatisticResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> adultValue{};
  shared_ptr<string> childValue{};
  shared_ptr<string> oldValue{};
  shared_ptr<string> manValue{};
  shared_ptr<string> dataSourceName{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> corpId{};
  shared_ptr<string> motorValue{};
  shared_ptr<string> longitude{};
  shared_ptr<string> latitude{};
  shared_ptr<string> womanValue{};

  ListCityMapRangeStatisticResponseBodyData() {}

  explicit ListCityMapRangeStatisticResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adultValue) {
      res["AdultValue"] = boost::any(*adultValue);
    }
    if (childValue) {
      res["ChildValue"] = boost::any(*childValue);
    }
    if (oldValue) {
      res["OldValue"] = boost::any(*oldValue);
    }
    if (manValue) {
      res["ManValue"] = boost::any(*manValue);
    }
    if (dataSourceName) {
      res["DataSourceName"] = boost::any(*dataSourceName);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (motorValue) {
      res["MotorValue"] = boost::any(*motorValue);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (womanValue) {
      res["WomanValue"] = boost::any(*womanValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdultValue") != m.end() && !m["AdultValue"].empty()) {
      adultValue = make_shared<string>(boost::any_cast<string>(m["AdultValue"]));
    }
    if (m.find("ChildValue") != m.end() && !m["ChildValue"].empty()) {
      childValue = make_shared<string>(boost::any_cast<string>(m["ChildValue"]));
    }
    if (m.find("OldValue") != m.end() && !m["OldValue"].empty()) {
      oldValue = make_shared<string>(boost::any_cast<string>(m["OldValue"]));
    }
    if (m.find("ManValue") != m.end() && !m["ManValue"].empty()) {
      manValue = make_shared<string>(boost::any_cast<string>(m["ManValue"]));
    }
    if (m.find("DataSourceName") != m.end() && !m["DataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["DataSourceName"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("MotorValue") != m.end() && !m["MotorValue"].empty()) {
      motorValue = make_shared<string>(boost::any_cast<string>(m["MotorValue"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("WomanValue") != m.end() && !m["WomanValue"].empty()) {
      womanValue = make_shared<string>(boost::any_cast<string>(m["WomanValue"]));
    }
  }


  virtual ~ListCityMapRangeStatisticResponseBodyData() = default;
};
class ListCityMapRangeStatisticResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListCityMapRangeStatisticResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListCityMapRangeStatisticResponseBody() {}

  explicit ListCityMapRangeStatisticResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListCityMapRangeStatisticResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCityMapRangeStatisticResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCityMapRangeStatisticResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListCityMapRangeStatisticResponseBody() = default;
};
class ListCityMapRangeStatisticResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCityMapRangeStatisticResponseBody> body{};

  ListCityMapRangeStatisticResponse() {}

  explicit ListCityMapRangeStatisticResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCityMapRangeStatisticResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCityMapRangeStatisticResponseBody>(model1);
      }
    }
  }


  virtual ~ListCityMapRangeStatisticResponse() = default;
};
class ListStorageStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};

  ListStorageStatisticsRequest() {}

  explicit ListStorageStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
  }


  virtual ~ListStorageStatisticsRequest() = default;
};
class ListStorageStatisticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> usedStore{};
  shared_ptr<string> unusedStore{};
  shared_ptr<string> corpId{};
  shared_ptr<string> number{};
  shared_ptr<string> totalStore{};

  ListStorageStatisticsResponseBodyData() {}

  explicit ListStorageStatisticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (usedStore) {
      res["UsedStore"] = boost::any(*usedStore);
    }
    if (unusedStore) {
      res["UnusedStore"] = boost::any(*unusedStore);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (totalStore) {
      res["TotalStore"] = boost::any(*totalStore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UsedStore") != m.end() && !m["UsedStore"].empty()) {
      usedStore = make_shared<string>(boost::any_cast<string>(m["UsedStore"]));
    }
    if (m.find("UnusedStore") != m.end() && !m["UnusedStore"].empty()) {
      unusedStore = make_shared<string>(boost::any_cast<string>(m["UnusedStore"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("TotalStore") != m.end() && !m["TotalStore"].empty()) {
      totalStore = make_shared<string>(boost::any_cast<string>(m["TotalStore"]));
    }
  }


  virtual ~ListStorageStatisticsResponseBodyData() = default;
};
class ListStorageStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListStorageStatisticsResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListStorageStatisticsResponseBody() {}

  explicit ListStorageStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListStorageStatisticsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStorageStatisticsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListStorageStatisticsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListStorageStatisticsResponseBody() = default;
};
class ListStorageStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListStorageStatisticsResponseBody> body{};

  ListStorageStatisticsResponse() {}

  explicit ListStorageStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListStorageStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStorageStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~ListStorageStatisticsResponse() = default;
};
class PaginateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> countTotalNum{};
  shared_ptr<string> type{};
  shared_ptr<string> nameLike{};

  PaginateProjectRequest() {}

  explicit PaginateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (countTotalNum) {
      res["CountTotalNum"] = boost::any(*countTotalNum);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (nameLike) {
      res["NameLike"] = boost::any(*nameLike);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CountTotalNum") != m.end() && !m["CountTotalNum"].empty()) {
      countTotalNum = make_shared<bool>(boost::any_cast<bool>(m["CountTotalNum"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("NameLike") != m.end() && !m["NameLike"].empty()) {
      nameLike = make_shared<string>(boost::any_cast<string>(m["NameLike"]));
    }
  }


  virtual ~PaginateProjectRequest() = default;
};
class PaginateProjectResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> description{};
  shared_ptr<string> aggregateSceneCode{};
  shared_ptr<string> corpId{};
  shared_ptr<string> userId{};
  shared_ptr<string> icon{};
  shared_ptr<string> name{};
  shared_ptr<string> createdTime{};

  PaginateProjectResponseBodyDataRecords() {}

  explicit PaginateProjectResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (aggregateSceneCode) {
      res["AggregateSceneCode"] = boost::any(*aggregateSceneCode);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AggregateSceneCode") != m.end() && !m["AggregateSceneCode"].empty()) {
      aggregateSceneCode = make_shared<string>(boost::any_cast<string>(m["AggregateSceneCode"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
  }


  virtual ~PaginateProjectResponseBodyDataRecords() = default;
};
class PaginateProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<PaginateProjectResponseBodyDataRecords>> records{};
  shared_ptr<long> totalPage{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  PaginateProjectResponseBodyData() {}

  explicit PaginateProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<PaginateProjectResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PaginateProjectResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<PaginateProjectResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~PaginateProjectResponseBodyData() = default;
};
class PaginateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<PaginateProjectResponseBodyData> data{};
  shared_ptr<string> code{};

  PaginateProjectResponseBody() {}

  explicit PaginateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        PaginateProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PaginateProjectResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~PaginateProjectResponseBody() = default;
};
class PaginateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PaginateProjectResponseBody> body{};

  PaginateProjectResponse() {}

  explicit PaginateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PaginateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PaginateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PaginateProjectResponse() = default;
};
class ListCityMapCameraStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataSourceIdList{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  ListCityMapCameraStatisticsRequest() {}

  explicit ListCityMapCameraStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataSourceIdList) {
      res["DataSourceIdList"] = boost::any(*dataSourceIdList);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataSourceIdList") != m.end() && !m["DataSourceIdList"].empty()) {
      dataSourceIdList = make_shared<string>(boost::any_cast<string>(m["DataSourceIdList"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~ListCityMapCameraStatisticsRequest() = default;
};
class ListCityMapCameraStatisticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> oldValue{};
  shared_ptr<string> dataSourceName{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> statisticTime{};
  shared_ptr<string> adultValue{};
  shared_ptr<string> childValue{};
  shared_ptr<string> manValue{};
  shared_ptr<string> corpId{};
  shared_ptr<string> motorValue{};
  shared_ptr<string> longitude{};
  shared_ptr<string> latitude{};
  shared_ptr<string> womanValue{};

  ListCityMapCameraStatisticsResponseBodyData() {}

  explicit ListCityMapCameraStatisticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oldValue) {
      res["OldValue"] = boost::any(*oldValue);
    }
    if (dataSourceName) {
      res["DataSourceName"] = boost::any(*dataSourceName);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (statisticTime) {
      res["StatisticTime"] = boost::any(*statisticTime);
    }
    if (adultValue) {
      res["AdultValue"] = boost::any(*adultValue);
    }
    if (childValue) {
      res["ChildValue"] = boost::any(*childValue);
    }
    if (manValue) {
      res["ManValue"] = boost::any(*manValue);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (motorValue) {
      res["MotorValue"] = boost::any(*motorValue);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (womanValue) {
      res["WomanValue"] = boost::any(*womanValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OldValue") != m.end() && !m["OldValue"].empty()) {
      oldValue = make_shared<string>(boost::any_cast<string>(m["OldValue"]));
    }
    if (m.find("DataSourceName") != m.end() && !m["DataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["DataSourceName"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("StatisticTime") != m.end() && !m["StatisticTime"].empty()) {
      statisticTime = make_shared<string>(boost::any_cast<string>(m["StatisticTime"]));
    }
    if (m.find("AdultValue") != m.end() && !m["AdultValue"].empty()) {
      adultValue = make_shared<string>(boost::any_cast<string>(m["AdultValue"]));
    }
    if (m.find("ChildValue") != m.end() && !m["ChildValue"].empty()) {
      childValue = make_shared<string>(boost::any_cast<string>(m["ChildValue"]));
    }
    if (m.find("ManValue") != m.end() && !m["ManValue"].empty()) {
      manValue = make_shared<string>(boost::any_cast<string>(m["ManValue"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("MotorValue") != m.end() && !m["MotorValue"].empty()) {
      motorValue = make_shared<string>(boost::any_cast<string>(m["MotorValue"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("WomanValue") != m.end() && !m["WomanValue"].empty()) {
      womanValue = make_shared<string>(boost::any_cast<string>(m["WomanValue"]));
    }
  }


  virtual ~ListCityMapCameraStatisticsResponseBodyData() = default;
};
class ListCityMapCameraStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListCityMapCameraStatisticsResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListCityMapCameraStatisticsResponseBody() {}

  explicit ListCityMapCameraStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListCityMapCameraStatisticsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCityMapCameraStatisticsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCityMapCameraStatisticsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListCityMapCameraStatisticsResponseBody() = default;
};
class ListCityMapCameraStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCityMapCameraStatisticsResponseBody> body{};

  ListCityMapCameraStatisticsResponse() {}

  explicit ListCityMapCameraStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCityMapCameraStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCityMapCameraStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCityMapCameraStatisticsResponse() = default;
};
class UpdateCdrsMonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> deviceOperateType{};
  shared_ptr<string> deviceList{};
  shared_ptr<string> picOperateType{};
  shared_ptr<string> picList{};
  shared_ptr<string> attributeOperateType{};
  shared_ptr<string> attributeName{};
  shared_ptr<string> attributeValueList{};
  shared_ptr<string> description{};
  shared_ptr<string> ruleExpression{};
  shared_ptr<string> algorithmVendor{};
  shared_ptr<string> notifierType{};
  shared_ptr<string> notifierUrl{};
  shared_ptr<string> notifierAppSecret{};
  shared_ptr<long> notifierTimeOut{};
  shared_ptr<string> notifierExtendValues{};

  UpdateCdrsMonitorRequest() {}

  explicit UpdateCdrsMonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (deviceOperateType) {
      res["DeviceOperateType"] = boost::any(*deviceOperateType);
    }
    if (deviceList) {
      res["DeviceList"] = boost::any(*deviceList);
    }
    if (picOperateType) {
      res["PicOperateType"] = boost::any(*picOperateType);
    }
    if (picList) {
      res["PicList"] = boost::any(*picList);
    }
    if (attributeOperateType) {
      res["AttributeOperateType"] = boost::any(*attributeOperateType);
    }
    if (attributeName) {
      res["AttributeName"] = boost::any(*attributeName);
    }
    if (attributeValueList) {
      res["AttributeValueList"] = boost::any(*attributeValueList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ruleExpression) {
      res["RuleExpression"] = boost::any(*ruleExpression);
    }
    if (algorithmVendor) {
      res["AlgorithmVendor"] = boost::any(*algorithmVendor);
    }
    if (notifierType) {
      res["NotifierType"] = boost::any(*notifierType);
    }
    if (notifierUrl) {
      res["NotifierUrl"] = boost::any(*notifierUrl);
    }
    if (notifierAppSecret) {
      res["NotifierAppSecret"] = boost::any(*notifierAppSecret);
    }
    if (notifierTimeOut) {
      res["NotifierTimeOut"] = boost::any(*notifierTimeOut);
    }
    if (notifierExtendValues) {
      res["NotifierExtendValues"] = boost::any(*notifierExtendValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("DeviceOperateType") != m.end() && !m["DeviceOperateType"].empty()) {
      deviceOperateType = make_shared<string>(boost::any_cast<string>(m["DeviceOperateType"]));
    }
    if (m.find("DeviceList") != m.end() && !m["DeviceList"].empty()) {
      deviceList = make_shared<string>(boost::any_cast<string>(m["DeviceList"]));
    }
    if (m.find("PicOperateType") != m.end() && !m["PicOperateType"].empty()) {
      picOperateType = make_shared<string>(boost::any_cast<string>(m["PicOperateType"]));
    }
    if (m.find("PicList") != m.end() && !m["PicList"].empty()) {
      picList = make_shared<string>(boost::any_cast<string>(m["PicList"]));
    }
    if (m.find("AttributeOperateType") != m.end() && !m["AttributeOperateType"].empty()) {
      attributeOperateType = make_shared<string>(boost::any_cast<string>(m["AttributeOperateType"]));
    }
    if (m.find("AttributeName") != m.end() && !m["AttributeName"].empty()) {
      attributeName = make_shared<string>(boost::any_cast<string>(m["AttributeName"]));
    }
    if (m.find("AttributeValueList") != m.end() && !m["AttributeValueList"].empty()) {
      attributeValueList = make_shared<string>(boost::any_cast<string>(m["AttributeValueList"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RuleExpression") != m.end() && !m["RuleExpression"].empty()) {
      ruleExpression = make_shared<string>(boost::any_cast<string>(m["RuleExpression"]));
    }
    if (m.find("AlgorithmVendor") != m.end() && !m["AlgorithmVendor"].empty()) {
      algorithmVendor = make_shared<string>(boost::any_cast<string>(m["AlgorithmVendor"]));
    }
    if (m.find("NotifierType") != m.end() && !m["NotifierType"].empty()) {
      notifierType = make_shared<string>(boost::any_cast<string>(m["NotifierType"]));
    }
    if (m.find("NotifierUrl") != m.end() && !m["NotifierUrl"].empty()) {
      notifierUrl = make_shared<string>(boost::any_cast<string>(m["NotifierUrl"]));
    }
    if (m.find("NotifierAppSecret") != m.end() && !m["NotifierAppSecret"].empty()) {
      notifierAppSecret = make_shared<string>(boost::any_cast<string>(m["NotifierAppSecret"]));
    }
    if (m.find("NotifierTimeOut") != m.end() && !m["NotifierTimeOut"].empty()) {
      notifierTimeOut = make_shared<long>(boost::any_cast<long>(m["NotifierTimeOut"]));
    }
    if (m.find("NotifierExtendValues") != m.end() && !m["NotifierExtendValues"].empty()) {
      notifierExtendValues = make_shared<string>(boost::any_cast<string>(m["NotifierExtendValues"]));
    }
  }


  virtual ~UpdateCdrsMonitorRequest() = default;
};
class UpdateCdrsMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};

  UpdateCdrsMonitorResponseBody() {}

  explicit UpdateCdrsMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~UpdateCdrsMonitorResponseBody() = default;
};
class UpdateCdrsMonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateCdrsMonitorResponseBody> body{};

  UpdateCdrsMonitorResponse() {}

  explicit UpdateCdrsMonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateCdrsMonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCdrsMonitorResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCdrsMonitorResponse() = default;
};
class ListPersonResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> age{};
  shared_ptr<string> gender{};
  shared_ptr<string> profession{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> qualityScore{};

  ListPersonResultRequest() {}

  explicit ListPersonResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (profession) {
      res["Profession"] = boost::any(*profession);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (qualityScore) {
      res["QualityScore"] = boost::any(*qualityScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<string>(boost::any_cast<string>(m["Age"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("Profession") != m.end() && !m["Profession"].empty()) {
      profession = make_shared<string>(boost::any_cast<string>(m["Profession"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QualityScore") != m.end() && !m["QualityScore"].empty()) {
      qualityScore = make_shared<string>(boost::any_cast<string>(m["QualityScore"]));
    }
  }


  virtual ~ListPersonResultRequest() = default;
};
class ListPersonResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> sourceUrl{};
  shared_ptr<string> profession{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> gender{};
  shared_ptr<string> targetUrl{};
  shared_ptr<string> address{};
  shared_ptr<string> hotSpotAddress{};
  shared_ptr<string> age{};
  shared_ptr<string> personId{};
  shared_ptr<string> personType{};
  shared_ptr<string> transportation{};

  ListPersonResultResponseBodyData() {}

  explicit ListPersonResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    if (profession) {
      res["Profession"] = boost::any(*profession);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (targetUrl) {
      res["TargetUrl"] = boost::any(*targetUrl);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (hotSpotAddress) {
      res["HotSpotAddress"] = boost::any(*hotSpotAddress);
    }
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    if (personType) {
      res["PersonType"] = boost::any(*personType);
    }
    if (transportation) {
      res["Transportation"] = boost::any(*transportation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
    if (m.find("Profession") != m.end() && !m["Profession"].empty()) {
      profession = make_shared<string>(boost::any_cast<string>(m["Profession"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("TargetUrl") != m.end() && !m["TargetUrl"].empty()) {
      targetUrl = make_shared<string>(boost::any_cast<string>(m["TargetUrl"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("HotSpotAddress") != m.end() && !m["HotSpotAddress"].empty()) {
      hotSpotAddress = make_shared<string>(boost::any_cast<string>(m["HotSpotAddress"]));
    }
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<string>(boost::any_cast<string>(m["Age"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
    if (m.find("PersonType") != m.end() && !m["PersonType"].empty()) {
      personType = make_shared<string>(boost::any_cast<string>(m["PersonType"]));
    }
    if (m.find("Transportation") != m.end() && !m["Transportation"].empty()) {
      transportation = make_shared<string>(boost::any_cast<string>(m["Transportation"]));
    }
  }


  virtual ~ListPersonResultResponseBodyData() = default;
};
class ListPersonResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListPersonResultResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListPersonResultResponseBody() {}

  explicit ListPersonResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListPersonResultResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPersonResultResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListPersonResultResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListPersonResultResponseBody() = default;
};
class ListPersonResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPersonResultResponseBody> body{};

  ListPersonResultResponse() {}

  explicit ListPersonResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPersonResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPersonResultResponseBody>(model1);
      }
    }
  }


  virtual ~ListPersonResultResponse() = default;
};
class ListTagMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<map<string, boost::any>> tagCode{};
  shared_ptr<string> aggregateType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  ListTagMetricsRequest() {}

  explicit ListTagMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (tagCode) {
      res["TagCode"] = boost::any(*tagCode);
    }
    if (aggregateType) {
      res["AggregateType"] = boost::any(*aggregateType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("TagCode") != m.end() && !m["TagCode"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TagCode"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tagCode = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("AggregateType") != m.end() && !m["AggregateType"].empty()) {
      aggregateType = make_shared<string>(boost::any_cast<string>(m["AggregateType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListTagMetricsRequest() = default;
};
class ListTagMetricsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> tagCodeShrink{};
  shared_ptr<string> aggregateType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  ListTagMetricsShrinkRequest() {}

  explicit ListTagMetricsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (tagCodeShrink) {
      res["TagCode"] = boost::any(*tagCodeShrink);
    }
    if (aggregateType) {
      res["AggregateType"] = boost::any(*aggregateType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("TagCode") != m.end() && !m["TagCode"].empty()) {
      tagCodeShrink = make_shared<string>(boost::any_cast<string>(m["TagCode"]));
    }
    if (m.find("AggregateType") != m.end() && !m["AggregateType"].empty()) {
      aggregateType = make_shared<string>(boost::any_cast<string>(m["AggregateType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListTagMetricsShrinkRequest() = default;
};
class ListTagMetricsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> tagMetric{};
  shared_ptr<string> tagCode{};
  shared_ptr<string> corpId{};
  shared_ptr<string> tagValue{};
  shared_ptr<string> dateTime{};

  ListTagMetricsResponseBodyData() {}

  explicit ListTagMetricsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagMetric) {
      res["TagMetric"] = boost::any(*tagMetric);
    }
    if (tagCode) {
      res["TagCode"] = boost::any(*tagCode);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (dateTime) {
      res["DateTime"] = boost::any(*dateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagMetric") != m.end() && !m["TagMetric"].empty()) {
      tagMetric = make_shared<string>(boost::any_cast<string>(m["TagMetric"]));
    }
    if (m.find("TagCode") != m.end() && !m["TagCode"].empty()) {
      tagCode = make_shared<string>(boost::any_cast<string>(m["TagCode"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("DateTime") != m.end() && !m["DateTime"].empty()) {
      dateTime = make_shared<string>(boost::any_cast<string>(m["DateTime"]));
    }
  }


  virtual ~ListTagMetricsResponseBodyData() = default;
};
class ListTagMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> pageNumber{};
  shared_ptr<vector<ListTagMetricsResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListTagMetricsResponseBody() {}

  explicit ListTagMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListTagMetricsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagMetricsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListTagMetricsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListTagMetricsResponseBody() = default;
};
class ListTagMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagMetricsResponseBody> body{};

  ListTagMetricsResponse() {}

  explicit ListTagMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTagMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagMetricsResponse() = default;
};
class ListPersonTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> tagCode{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListPersonTagRequest() {}

  explicit ListPersonTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (tagCode) {
      res["TagCode"] = boost::any(*tagCode);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("TagCode") != m.end() && !m["TagCode"].empty()) {
      tagCode = make_shared<string>(boost::any_cast<string>(m["TagCode"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListPersonTagRequest() = default;
};
class ListPersonTagResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> corpId{};
  shared_ptr<string> tagValue{};

  ListPersonTagResponseBodyData() {}

  explicit ListPersonTagResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListPersonTagResponseBodyData() = default;
};
class ListPersonTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListPersonTagResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListPersonTagResponseBody() {}

  explicit ListPersonTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListPersonTagResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPersonTagResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListPersonTagResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListPersonTagResponseBody() = default;
};
class ListPersonTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPersonTagResponseBody> body{};

  ListPersonTagResponse() {}

  explicit ListPersonTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPersonTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPersonTagResponseBody>(model1);
      }
    }
  }


  virtual ~ListPersonTagResponse() = default;
};
class UpdateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<string> icon{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> aggregateSceneCode{};

  UpdateProjectRequest() {}

  explicit UpdateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (aggregateSceneCode) {
      res["AggregateSceneCode"] = boost::any(*aggregateSceneCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AggregateSceneCode") != m.end() && !m["AggregateSceneCode"].empty()) {
      aggregateSceneCode = make_shared<string>(boost::any_cast<string>(m["AggregateSceneCode"]));
    }
  }


  virtual ~UpdateProjectRequest() = default;
};
class UpdateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  UpdateProjectResponseBody() {}

  explicit UpdateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~UpdateProjectResponseBody() = default;
};
class UpdateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateProjectResponseBody> body{};

  UpdateProjectResponse() {}

  explicit UpdateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProjectResponse() = default;
};
class ListDevicePersonRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> statisticsType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> corpId{};

  ListDevicePersonRequest() {}

  explicit ListDevicePersonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (statisticsType) {
      res["StatisticsType"] = boost::any(*statisticsType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("StatisticsType") != m.end() && !m["StatisticsType"].empty()) {
      statisticsType = make_shared<string>(boost::any_cast<string>(m["StatisticsType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
  }


  virtual ~ListDevicePersonRequest() = default;
};
class ListDevicePersonResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> targetPicUrlPath{};
  shared_ptr<string> gender{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> freqNum{};
  shared_ptr<string> personId{};

  ListDevicePersonResponseBodyData() {}

  explicit ListDevicePersonResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetPicUrlPath) {
      res["TargetPicUrlPath"] = boost::any(*targetPicUrlPath);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (freqNum) {
      res["FreqNum"] = boost::any(*freqNum);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetPicUrlPath") != m.end() && !m["TargetPicUrlPath"].empty()) {
      targetPicUrlPath = make_shared<string>(boost::any_cast<string>(m["TargetPicUrlPath"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("FreqNum") != m.end() && !m["FreqNum"].empty()) {
      freqNum = make_shared<string>(boost::any_cast<string>(m["FreqNum"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
  }


  virtual ~ListDevicePersonResponseBodyData() = default;
};
class ListDevicePersonResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListDevicePersonResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListDevicePersonResponseBody() {}

  explicit ListDevicePersonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListDevicePersonResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDevicePersonResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDevicePersonResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListDevicePersonResponseBody() = default;
};
class ListDevicePersonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDevicePersonResponseBody> body{};

  ListDevicePersonResponse() {}

  explicit ListDevicePersonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDevicePersonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDevicePersonResponseBody>(model1);
      }
    }
  }


  virtual ~ListDevicePersonResponse() = default;
};
class ListDeviceDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> corpId{};

  ListDeviceDetailRequest() {}

  explicit ListDeviceDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
  }


  virtual ~ListDeviceDetailRequest() = default;
};
class ListDeviceDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceName{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> corpId{};
  shared_ptr<string> longitude{};
  shared_ptr<string> latitude{};
  shared_ptr<string> dataSourcePoi{};
  shared_ptr<string> nearPoi{};

  ListDeviceDetailResponseBodyData() {}

  explicit ListDeviceDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceName) {
      res["DataSourceName"] = boost::any(*dataSourceName);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (dataSourcePoi) {
      res["DataSourcePoi"] = boost::any(*dataSourcePoi);
    }
    if (nearPoi) {
      res["NearPoi"] = boost::any(*nearPoi);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceName") != m.end() && !m["DataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["DataSourceName"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("DataSourcePoi") != m.end() && !m["DataSourcePoi"].empty()) {
      dataSourcePoi = make_shared<string>(boost::any_cast<string>(m["DataSourcePoi"]));
    }
    if (m.find("NearPoi") != m.end() && !m["NearPoi"].empty()) {
      nearPoi = make_shared<string>(boost::any_cast<string>(m["NearPoi"]));
    }
  }


  virtual ~ListDeviceDetailResponseBodyData() = default;
};
class ListDeviceDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListDeviceDetailResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListDeviceDetailResponseBody() {}

  explicit ListDeviceDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListDeviceDetailResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeviceDetailResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDeviceDetailResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListDeviceDetailResponseBody() = default;
};
class ListDeviceDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDeviceDetailResponseBody> body{};

  ListDeviceDetailResponse() {}

  explicit ListDeviceDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDeviceDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceDetailResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceDetailResponse() = default;
};
class ListDeviceGenderStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> corpId{};

  ListDeviceGenderStatisticsRequest() {}

  explicit ListDeviceGenderStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
  }


  virtual ~ListDeviceGenderStatisticsRequest() = default;
};
class ListDeviceGenderStatisticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gender{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> number{};

  ListDeviceGenderStatisticsResponseBodyData() {}

  explicit ListDeviceGenderStatisticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
  }


  virtual ~ListDeviceGenderStatisticsResponseBodyData() = default;
};
class ListDeviceGenderStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDeviceGenderStatisticsResponseBodyData>> data{};
  shared_ptr<string> code{};

  ListDeviceGenderStatisticsResponseBody() {}

  explicit ListDeviceGenderStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListDeviceGenderStatisticsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeviceGenderStatisticsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDeviceGenderStatisticsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListDeviceGenderStatisticsResponseBody() = default;
};
class ListDeviceGenderStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDeviceGenderStatisticsResponseBody> body{};

  ListDeviceGenderStatisticsResponse() {}

  explicit ListDeviceGenderStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDeviceGenderStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceGenderStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceGenderStatisticsResponse() = default;
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
  SearchObjectResponse searchObjectWithOptions(shared_ptr<SearchObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchObjectResponse searchObject(shared_ptr<SearchObjectRequest> request);
  ListAreaHotSpotMetricsResponse listAreaHotSpotMetricsWithOptions(shared_ptr<ListAreaHotSpotMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAreaHotSpotMetricsResponse listAreaHotSpotMetrics(shared_ptr<ListAreaHotSpotMetricsRequest> request);
  BindDeviceResponse bindDeviceWithOptions(shared_ptr<BindDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindDeviceResponse bindDevice(shared_ptr<BindDeviceRequest> request);
  GetCdrsMonitorResultResponse getCdrsMonitorResultWithOptions(shared_ptr<GetCdrsMonitorResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCdrsMonitorResultResponse getCdrsMonitorResult(shared_ptr<GetCdrsMonitorResultRequest> request);
  ListVehicleDetailsResponse listVehicleDetailsWithOptions(shared_ptr<ListVehicleDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVehicleDetailsResponse listVehicleDetails(shared_ptr<ListVehicleDetailsRequest> request);
  GetCdrsMonitorListResponse getCdrsMonitorListWithOptions(shared_ptr<GetCdrsMonitorListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCdrsMonitorListResponse getCdrsMonitorList(shared_ptr<GetCdrsMonitorListRequest> request);
  UpdateMonitorResponse updateMonitorWithOptions(shared_ptr<UpdateMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMonitorResponse updateMonitor(shared_ptr<UpdateMonitorRequest> request);
  ListDataStatisticsResponse listDataStatisticsWithOptions(shared_ptr<ListDataStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataStatisticsResponse listDataStatistics(shared_ptr<ListDataStatisticsRequest> request);
  UnbindDeviceResponse unbindDeviceWithOptions(shared_ptr<UnbindDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindDeviceResponse unbindDevice(shared_ptr<UnbindDeviceRequest> request);
  ListPersonDetailsResponse listPersonDetailsWithOptions(shared_ptr<ListPersonDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPersonDetailsResponse listPersonDetails(shared_ptr<ListPersonDetailsRequest> request);
  ListVehicleTagDistributeResponse listVehicleTagDistributeWithOptions(shared_ptr<ListVehicleTagDistributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVehicleTagDistributeResponse listVehicleTagDistribute(shared_ptr<ListVehicleTagDistributeRequest> request);
  ListDevicePersonStatisticsResponse listDevicePersonStatisticsWithOptions(shared_ptr<ListDevicePersonStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDevicePersonStatisticsResponse listDevicePersonStatistics(shared_ptr<ListDevicePersonStatisticsRequest> request);
  AddMonitorResponse addMonitorWithOptions(shared_ptr<AddMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddMonitorResponse addMonitor(shared_ptr<AddMonitorRequest> request);
  PaginateDeviceResponse paginateDeviceWithOptions(shared_ptr<PaginateDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PaginateDeviceResponse paginateDevice(shared_ptr<PaginateDeviceRequest> request);
  StopCdrsMonitorResponse stopCdrsMonitorWithOptions(shared_ptr<StopCdrsMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopCdrsMonitorResponse stopCdrsMonitor(shared_ptr<StopCdrsMonitorRequest> request);
  RecallTrajectoryByCoordinateTimeResponse recallTrajectoryByCoordinateTimeWithOptions(shared_ptr<RecallTrajectoryByCoordinateTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecallTrajectoryByCoordinateTimeResponse recallTrajectoryByCoordinateTime(shared_ptr<RecallTrajectoryByCoordinateTimeRequest> request);
  ListCityMapPersonFlowResponse listCityMapPersonFlowWithOptions(shared_ptr<ListCityMapPersonFlowRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCityMapPersonFlowResponse listCityMapPersonFlow(shared_ptr<ListCityMapPersonFlowRequest> request);
  AddCdrsMonitorResponse addCdrsMonitorWithOptions(shared_ptr<AddCdrsMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddCdrsMonitorResponse addCdrsMonitor(shared_ptr<AddCdrsMonitorRequest> request);
  ListMapRouteDetailsResponse listMapRouteDetailsWithOptions(shared_ptr<ListMapRouteDetailsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMapRouteDetailsResponse listMapRouteDetails(shared_ptr<ListMapRouteDetailsRequest> request);
  ListPersonTopResponse listPersonTopWithOptions(shared_ptr<ListPersonTopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPersonTopResponse listPersonTop(shared_ptr<ListPersonTopRequest> request);
  GetMonitorResultResponse getMonitorResultWithOptions(shared_ptr<GetMonitorResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMonitorResultResponse getMonitorResult(shared_ptr<GetMonitorResultRequest> request);
  ListCityMapAoisResponse listCityMapAoisWithOptions(shared_ptr<ListCityMapAoisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCityMapAoisResponse listCityMapAois(shared_ptr<ListCityMapAoisRequest> request);
  RecognizeImageResponse recognizeImageWithOptions(shared_ptr<RecognizeImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeImageResponse recognizeImage(shared_ptr<RecognizeImageRequest> request);
  GetMonitorListResponse getMonitorListWithOptions(shared_ptr<GetMonitorListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMonitorListResponse getMonitorList(shared_ptr<GetMonitorListRequest> request);
  ListDeviceRelationResponse listDeviceRelationWithOptions(shared_ptr<ListDeviceRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceRelationResponse listDeviceRelation(shared_ptr<ListDeviceRelationRequest> request);
  ListPersonTrackResponse listPersonTrackWithOptions(shared_ptr<ListPersonTrackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPersonTrackResponse listPersonTrack(shared_ptr<ListPersonTrackRequest> request);
  ListCityMapCameraResultsResponse listCityMapCameraResultsWithOptions(shared_ptr<ListCityMapCameraResultsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCityMapCameraResultsResponse listCityMapCameraResults(shared_ptr<ListCityMapCameraResultsRequest> request);
  QueryTrajectoryByIdResponse queryTrajectoryByIdWithOptions(shared_ptr<QueryTrajectoryByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTrajectoryByIdResponse queryTrajectoryById(shared_ptr<QueryTrajectoryByIdRequest> request);
  ListCityMapImageDetailsResponse listCityMapImageDetailsWithOptions(shared_ptr<ListCityMapImageDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCityMapImageDetailsResponse listCityMapImageDetails(shared_ptr<ListCityMapImageDetailsRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  ListVehicleTopResponse listVehicleTopWithOptions(shared_ptr<ListVehicleTopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVehicleTopResponse listVehicleTop(shared_ptr<ListVehicleTopRequest> request);
  ListDataStatisticsByDayResponse listDataStatisticsByDayWithOptions(shared_ptr<ListDataStatisticsByDayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataStatisticsByDayResponse listDataStatisticsByDay(shared_ptr<ListDataStatisticsByDayRequest> request);
  ListVehicleResultsResponse listVehicleResultsWithOptions(shared_ptr<ListVehicleResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVehicleResultsResponse listVehicleResults(shared_ptr<ListVehicleResultsRequest> request);
  SearchAggregateObjectResponse searchAggregateObjectWithOptions(shared_ptr<SearchAggregateObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchAggregateObjectResponse searchAggregateObject(shared_ptr<SearchAggregateObjectRequest> request);
  ListCorpMetricsStatisticResponse listCorpMetricsStatisticWithOptions(shared_ptr<ListCorpMetricsStatisticRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCorpMetricsStatisticResponse listCorpMetricsStatistic(shared_ptr<ListCorpMetricsStatisticRequest> request);
  DetectTrajectoryRegularPatternResponse detectTrajectoryRegularPatternWithOptions(shared_ptr<DetectTrajectoryRegularPatternRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectTrajectoryRegularPatternResponse detectTrajectoryRegularPattern(shared_ptr<DetectTrajectoryRegularPatternRequest> request);
  ListVehicleTrackResponse listVehicleTrackWithOptions(shared_ptr<ListVehicleTrackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVehicleTrackResponse listVehicleTrack(shared_ptr<ListVehicleTrackRequest> request);
  ListStructureStatisticsResponse listStructureStatisticsWithOptions(shared_ptr<ListStructureStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStructureStatisticsResponse listStructureStatistics(shared_ptr<ListStructureStatisticsRequest> request);
  StopMonitorResponse stopMonitorWithOptions(shared_ptr<StopMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopMonitorResponse stopMonitor(shared_ptr<StopMonitorRequest> request);
  PredictTrajectoryDestinationResponse predictTrajectoryDestinationWithOptions(shared_ptr<PredictTrajectoryDestinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PredictTrajectoryDestinationResponse predictTrajectoryDestination(shared_ptr<PredictTrajectoryDestinationRequest> request);
  ListRangeDeviceResponse listRangeDeviceWithOptions(shared_ptr<ListRangeDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRangeDeviceResponse listRangeDevice(shared_ptr<ListRangeDeviceRequest> request);
  ListCityMapRangeStatisticResponse listCityMapRangeStatisticWithOptions(shared_ptr<ListCityMapRangeStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCityMapRangeStatisticResponse listCityMapRangeStatistic(shared_ptr<ListCityMapRangeStatisticRequest> request);
  ListStorageStatisticsResponse listStorageStatisticsWithOptions(shared_ptr<ListStorageStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStorageStatisticsResponse listStorageStatistics(shared_ptr<ListStorageStatisticsRequest> request);
  PaginateProjectResponse paginateProjectWithOptions(shared_ptr<PaginateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PaginateProjectResponse paginateProject(shared_ptr<PaginateProjectRequest> request);
  ListCityMapCameraStatisticsResponse listCityMapCameraStatisticsWithOptions(shared_ptr<ListCityMapCameraStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCityMapCameraStatisticsResponse listCityMapCameraStatistics(shared_ptr<ListCityMapCameraStatisticsRequest> request);
  UpdateCdrsMonitorResponse updateCdrsMonitorWithOptions(shared_ptr<UpdateCdrsMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCdrsMonitorResponse updateCdrsMonitor(shared_ptr<UpdateCdrsMonitorRequest> request);
  ListPersonResultResponse listPersonResultWithOptions(shared_ptr<ListPersonResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPersonResultResponse listPersonResult(shared_ptr<ListPersonResultRequest> request);
  ListTagMetricsResponse listTagMetricsWithOptions(shared_ptr<ListTagMetricsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagMetricsResponse listTagMetrics(shared_ptr<ListTagMetricsRequest> request);
  ListPersonTagResponse listPersonTagWithOptions(shared_ptr<ListPersonTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPersonTagResponse listPersonTag(shared_ptr<ListPersonTagRequest> request);
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<UpdateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<UpdateProjectRequest> request);
  ListDevicePersonResponse listDevicePersonWithOptions(shared_ptr<ListDevicePersonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDevicePersonResponse listDevicePerson(shared_ptr<ListDevicePersonRequest> request);
  ListDeviceDetailResponse listDeviceDetailWithOptions(shared_ptr<ListDeviceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceDetailResponse listDeviceDetail(shared_ptr<ListDeviceDetailRequest> request);
  ListDeviceGenderStatisticsResponse listDeviceGenderStatisticsWithOptions(shared_ptr<ListDeviceGenderStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceGenderStatisticsResponse listDeviceGenderStatistics(shared_ptr<ListDeviceGenderStatisticsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_CDRS20201101

#endif
