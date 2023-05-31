// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMAGEPROCESS20200320_H_
#define ALIBABACLOUD_IMAGEPROCESS20200320_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Imageprocess20200320 {
class AnalyzeChestVesselRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  AnalyzeChestVesselRequestURLList() {}

  explicit AnalyzeChestVesselRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~AnalyzeChestVesselRequestURLList() = default;
};
class AnalyzeChestVesselRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<AnalyzeChestVesselRequestURLList>> URLList{};

  AnalyzeChestVesselRequest() {}

  explicit AnalyzeChestVesselRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<AnalyzeChestVesselRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeChestVesselRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<AnalyzeChestVesselRequestURLList>>(expect1);
      }
    }
  }


  virtual ~AnalyzeChestVesselRequest() = default;
};
class AnalyzeChestVesselAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  AnalyzeChestVesselAdvanceRequestURLList() {}

  explicit AnalyzeChestVesselAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~AnalyzeChestVesselAdvanceRequestURLList() = default;
};
class AnalyzeChestVesselAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<AnalyzeChestVesselAdvanceRequestURLList>> URLList{};

  AnalyzeChestVesselAdvanceRequest() {}

  explicit AnalyzeChestVesselAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<AnalyzeChestVesselAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeChestVesselAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<AnalyzeChestVesselAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~AnalyzeChestVesselAdvanceRequest() = default;
};
class AnalyzeChestVesselResponseBodyDataAortaInfo : public Darabonba::Model {
public:
  shared_ptr<vector<double>> area{};
  shared_ptr<vector<vector<double>>> coordinates{};
  shared_ptr<long> labelValue{};
  shared_ptr<double> maxArea{};
  shared_ptr<long> maxAreaIndex{};
  shared_ptr<double> maxDiameter{};

  AnalyzeChestVesselResponseBodyDataAortaInfo() {}

  explicit AnalyzeChestVesselResponseBodyDataAortaInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (area) {
      res["Area"] = boost::any(*area);
    }
    if (coordinates) {
      res["Coordinates"] = boost::any(*coordinates);
    }
    if (labelValue) {
      res["LabelValue"] = boost::any(*labelValue);
    }
    if (maxArea) {
      res["MaxArea"] = boost::any(*maxArea);
    }
    if (maxAreaIndex) {
      res["MaxAreaIndex"] = boost::any(*maxAreaIndex);
    }
    if (maxDiameter) {
      res["MaxDiameter"] = boost::any(*maxDiameter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Area") != m.end() && !m["Area"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Area"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Area"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      area = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Coordinates") != m.end() && !m["Coordinates"].empty()) {
      vector<vector<double>> toVec1;
      if (typeid(vector<boost::any>) == m["Coordinates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Coordinates"]);
        for (auto item:vec1) {
          vector<double> toVec2;
          if (typeid(vector<boost::any>) == item.type()) {
            vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item);
            for (auto item:vec2) {
               toVec2.push_back(boost::any_cast<double>(item));
            }
          }
           toVec1 = toVec2;
        }
      }
      coordinates = make_shared<vector<vector<double>>>(toVec1);
    }
    if (m.find("LabelValue") != m.end() && !m["LabelValue"].empty()) {
      labelValue = make_shared<long>(boost::any_cast<long>(m["LabelValue"]));
    }
    if (m.find("MaxArea") != m.end() && !m["MaxArea"].empty()) {
      maxArea = make_shared<double>(boost::any_cast<double>(m["MaxArea"]));
    }
    if (m.find("MaxAreaIndex") != m.end() && !m["MaxAreaIndex"].empty()) {
      maxAreaIndex = make_shared<long>(boost::any_cast<long>(m["MaxAreaIndex"]));
    }
    if (m.find("MaxDiameter") != m.end() && !m["MaxDiameter"].empty()) {
      maxDiameter = make_shared<double>(boost::any_cast<double>(m["MaxDiameter"]));
    }
  }


  virtual ~AnalyzeChestVesselResponseBodyDataAortaInfo() = default;
};
class AnalyzeChestVesselResponseBodyDataPulmonaryInfo : public Darabonba::Model {
public:
  shared_ptr<vector<double>> area{};
  shared_ptr<vector<vector<double>>> coordinates{};
  shared_ptr<long> labelValue{};
  shared_ptr<double> maxArea{};
  shared_ptr<long> maxAreaIndex{};
  shared_ptr<double> maxDiameter{};
  shared_ptr<double> nearestAortaArea{};

  AnalyzeChestVesselResponseBodyDataPulmonaryInfo() {}

  explicit AnalyzeChestVesselResponseBodyDataPulmonaryInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (area) {
      res["Area"] = boost::any(*area);
    }
    if (coordinates) {
      res["Coordinates"] = boost::any(*coordinates);
    }
    if (labelValue) {
      res["LabelValue"] = boost::any(*labelValue);
    }
    if (maxArea) {
      res["MaxArea"] = boost::any(*maxArea);
    }
    if (maxAreaIndex) {
      res["MaxAreaIndex"] = boost::any(*maxAreaIndex);
    }
    if (maxDiameter) {
      res["MaxDiameter"] = boost::any(*maxDiameter);
    }
    if (nearestAortaArea) {
      res["NearestAortaArea"] = boost::any(*nearestAortaArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Area") != m.end() && !m["Area"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Area"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Area"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      area = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Coordinates") != m.end() && !m["Coordinates"].empty()) {
      vector<vector<double>> toVec1;
      if (typeid(vector<boost::any>) == m["Coordinates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Coordinates"]);
        for (auto item:vec1) {
          vector<double> toVec2;
          if (typeid(vector<boost::any>) == item.type()) {
            vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item);
            for (auto item:vec2) {
               toVec2.push_back(boost::any_cast<double>(item));
            }
          }
           toVec1 = toVec2;
        }
      }
      coordinates = make_shared<vector<vector<double>>>(toVec1);
    }
    if (m.find("LabelValue") != m.end() && !m["LabelValue"].empty()) {
      labelValue = make_shared<long>(boost::any_cast<long>(m["LabelValue"]));
    }
    if (m.find("MaxArea") != m.end() && !m["MaxArea"].empty()) {
      maxArea = make_shared<double>(boost::any_cast<double>(m["MaxArea"]));
    }
    if (m.find("MaxAreaIndex") != m.end() && !m["MaxAreaIndex"].empty()) {
      maxAreaIndex = make_shared<long>(boost::any_cast<long>(m["MaxAreaIndex"]));
    }
    if (m.find("MaxDiameter") != m.end() && !m["MaxDiameter"].empty()) {
      maxDiameter = make_shared<double>(boost::any_cast<double>(m["MaxDiameter"]));
    }
    if (m.find("NearestAortaArea") != m.end() && !m["NearestAortaArea"].empty()) {
      nearestAortaArea = make_shared<double>(boost::any_cast<double>(m["NearestAortaArea"]));
    }
  }


  virtual ~AnalyzeChestVesselResponseBodyDataPulmonaryInfo() = default;
};
class AnalyzeChestVesselResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<AnalyzeChestVesselResponseBodyDataAortaInfo> aortaInfo{};
  shared_ptr<AnalyzeChestVesselResponseBodyDataPulmonaryInfo> pulmonaryInfo{};
  shared_ptr<string> resultURL{};

  AnalyzeChestVesselResponseBodyData() {}

  explicit AnalyzeChestVesselResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aortaInfo) {
      res["AortaInfo"] = aortaInfo ? boost::any(aortaInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pulmonaryInfo) {
      res["PulmonaryInfo"] = pulmonaryInfo ? boost::any(pulmonaryInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resultURL) {
      res["ResultURL"] = boost::any(*resultURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AortaInfo") != m.end() && !m["AortaInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AortaInfo"].type()) {
        AnalyzeChestVesselResponseBodyDataAortaInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AortaInfo"]));
        aortaInfo = make_shared<AnalyzeChestVesselResponseBodyDataAortaInfo>(model1);
      }
    }
    if (m.find("PulmonaryInfo") != m.end() && !m["PulmonaryInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PulmonaryInfo"].type()) {
        AnalyzeChestVesselResponseBodyDataPulmonaryInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PulmonaryInfo"]));
        pulmonaryInfo = make_shared<AnalyzeChestVesselResponseBodyDataPulmonaryInfo>(model1);
      }
    }
    if (m.find("ResultURL") != m.end() && !m["ResultURL"].empty()) {
      resultURL = make_shared<string>(boost::any_cast<string>(m["ResultURL"]));
    }
  }


  virtual ~AnalyzeChestVesselResponseBodyData() = default;
};
class AnalyzeChestVesselResponseBody : public Darabonba::Model {
public:
  shared_ptr<AnalyzeChestVesselResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AnalyzeChestVesselResponseBody() {}

  explicit AnalyzeChestVesselResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AnalyzeChestVesselResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AnalyzeChestVesselResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AnalyzeChestVesselResponseBody() = default;
};
class AnalyzeChestVesselResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AnalyzeChestVesselResponseBody> body{};

  AnalyzeChestVesselResponse() {}

  explicit AnalyzeChestVesselResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AnalyzeChestVesselResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AnalyzeChestVesselResponseBody>(model1);
      }
    }
  }


  virtual ~AnalyzeChestVesselResponse() = default;
};
class CalcBMDRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  CalcBMDRequestURLList() {}

  explicit CalcBMDRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~CalcBMDRequestURLList() = default;
};
class CalcBMDRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<CalcBMDRequestURLList>> URLList{};

  CalcBMDRequest() {}

  explicit CalcBMDRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<CalcBMDRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CalcBMDRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<CalcBMDRequestURLList>>(expect1);
      }
    }
  }


  virtual ~CalcBMDRequest() = default;
};
class CalcBMDAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  CalcBMDAdvanceRequestURLList() {}

  explicit CalcBMDAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~CalcBMDAdvanceRequestURLList() = default;
};
class CalcBMDAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<CalcBMDAdvanceRequestURLList>> URLList{};

  CalcBMDAdvanceRequest() {}

  explicit CalcBMDAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<CalcBMDAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CalcBMDAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<CalcBMDAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~CalcBMDAdvanceRequest() = default;
};
class CalcBMDResponseBodyDataDetections : public Darabonba::Model {
public:
  shared_ptr<double> vertBMD{};
  shared_ptr<double> vertCategory{};
  shared_ptr<string> vertId{};
  shared_ptr<double> vertTScore{};
  shared_ptr<double> vertZScore{};

  CalcBMDResponseBodyDataDetections() {}

  explicit CalcBMDResponseBodyDataDetections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vertBMD) {
      res["VertBMD"] = boost::any(*vertBMD);
    }
    if (vertCategory) {
      res["VertCategory"] = boost::any(*vertCategory);
    }
    if (vertId) {
      res["VertId"] = boost::any(*vertId);
    }
    if (vertTScore) {
      res["VertTScore"] = boost::any(*vertTScore);
    }
    if (vertZScore) {
      res["VertZScore"] = boost::any(*vertZScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VertBMD") != m.end() && !m["VertBMD"].empty()) {
      vertBMD = make_shared<double>(boost::any_cast<double>(m["VertBMD"]));
    }
    if (m.find("VertCategory") != m.end() && !m["VertCategory"].empty()) {
      vertCategory = make_shared<double>(boost::any_cast<double>(m["VertCategory"]));
    }
    if (m.find("VertId") != m.end() && !m["VertId"].empty()) {
      vertId = make_shared<string>(boost::any_cast<string>(m["VertId"]));
    }
    if (m.find("VertTScore") != m.end() && !m["VertTScore"].empty()) {
      vertTScore = make_shared<double>(boost::any_cast<double>(m["VertTScore"]));
    }
    if (m.find("VertZScore") != m.end() && !m["VertZScore"].empty()) {
      vertZScore = make_shared<double>(boost::any_cast<double>(m["VertZScore"]));
    }
  }


  virtual ~CalcBMDResponseBodyDataDetections() = default;
};
class CalcBMDResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<CalcBMDResponseBodyDataDetections>> detections{};
  shared_ptr<vector<double>> origin{};
  shared_ptr<string> resultURL{};
  shared_ptr<vector<double>> spacing{};

  CalcBMDResponseBodyData() {}

  explicit CalcBMDResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detections) {
      vector<boost::any> temp1;
      for(auto item1:*detections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Detections"] = boost::any(temp1);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (resultURL) {
      res["ResultURL"] = boost::any(*resultURL);
    }
    if (spacing) {
      res["Spacing"] = boost::any(*spacing);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detections") != m.end() && !m["Detections"].empty()) {
      if (typeid(vector<boost::any>) == m["Detections"].type()) {
        vector<CalcBMDResponseBodyDataDetections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Detections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CalcBMDResponseBodyDataDetections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detections = make_shared<vector<CalcBMDResponseBodyDataDetections>>(expect1);
      }
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Origin"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Origin"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      origin = make_shared<vector<double>>(toVec1);
    }
    if (m.find("ResultURL") != m.end() && !m["ResultURL"].empty()) {
      resultURL = make_shared<string>(boost::any_cast<string>(m["ResultURL"]));
    }
    if (m.find("Spacing") != m.end() && !m["Spacing"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Spacing"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Spacing"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      spacing = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~CalcBMDResponseBodyData() = default;
};
class CalcBMDResponseBody : public Darabonba::Model {
public:
  shared_ptr<CalcBMDResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CalcBMDResponseBody() {}

  explicit CalcBMDResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CalcBMDResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CalcBMDResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CalcBMDResponseBody() = default;
};
class CalcBMDResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CalcBMDResponseBody> body{};

  CalcBMDResponse() {}

  explicit CalcBMDResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CalcBMDResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CalcBMDResponseBody>(model1);
      }
    }
  }


  virtual ~CalcBMDResponse() = default;
};
class CalcCACSRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  CalcCACSRequestURLList() {}

  explicit CalcCACSRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~CalcCACSRequestURLList() = default;
};
class CalcCACSRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<CalcCACSRequestURLList>> URLList{};

  CalcCACSRequest() {}

  explicit CalcCACSRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<CalcCACSRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CalcCACSRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<CalcCACSRequestURLList>>(expect1);
      }
    }
  }


  virtual ~CalcCACSRequest() = default;
};
class CalcCACSAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  CalcCACSAdvanceRequestURLList() {}

  explicit CalcCACSAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~CalcCACSAdvanceRequestURLList() = default;
};
class CalcCACSAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<CalcCACSAdvanceRequestURLList>> URLList{};

  CalcCACSAdvanceRequest() {}

  explicit CalcCACSAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<CalcCACSAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CalcCACSAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<CalcCACSAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~CalcCACSAdvanceRequest() = default;
};
class CalcCACSResponseBodyDataDetections : public Darabonba::Model {
public:
  shared_ptr<vector<long>> calciumCenter{};
  shared_ptr<long> calciumId{};
  shared_ptr<double> calciumScore{};
  shared_ptr<double> calciumVolume{};

  CalcCACSResponseBodyDataDetections() {}

  explicit CalcCACSResponseBodyDataDetections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calciumCenter) {
      res["CalciumCenter"] = boost::any(*calciumCenter);
    }
    if (calciumId) {
      res["CalciumId"] = boost::any(*calciumId);
    }
    if (calciumScore) {
      res["CalciumScore"] = boost::any(*calciumScore);
    }
    if (calciumVolume) {
      res["CalciumVolume"] = boost::any(*calciumVolume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalciumCenter") != m.end() && !m["CalciumCenter"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CalciumCenter"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CalciumCenter"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      calciumCenter = make_shared<vector<long>>(toVec1);
    }
    if (m.find("CalciumId") != m.end() && !m["CalciumId"].empty()) {
      calciumId = make_shared<long>(boost::any_cast<long>(m["CalciumId"]));
    }
    if (m.find("CalciumScore") != m.end() && !m["CalciumScore"].empty()) {
      calciumScore = make_shared<double>(boost::any_cast<double>(m["CalciumScore"]));
    }
    if (m.find("CalciumVolume") != m.end() && !m["CalciumVolume"].empty()) {
      calciumVolume = make_shared<double>(boost::any_cast<double>(m["CalciumVolume"]));
    }
  }


  virtual ~CalcCACSResponseBodyDataDetections() = default;
};
class CalcCACSResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<CalcCACSResponseBodyDataDetections>> detections{};
  shared_ptr<string> resultUrl{};
  shared_ptr<string> score{};
  shared_ptr<string> volumeScore{};

  CalcCACSResponseBodyData() {}

  explicit CalcCACSResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detections) {
      vector<boost::any> temp1;
      for(auto item1:*detections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Detections"] = boost::any(temp1);
    }
    if (resultUrl) {
      res["ResultUrl"] = boost::any(*resultUrl);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (volumeScore) {
      res["VolumeScore"] = boost::any(*volumeScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detections") != m.end() && !m["Detections"].empty()) {
      if (typeid(vector<boost::any>) == m["Detections"].type()) {
        vector<CalcCACSResponseBodyDataDetections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Detections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CalcCACSResponseBodyDataDetections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detections = make_shared<vector<CalcCACSResponseBodyDataDetections>>(expect1);
      }
    }
    if (m.find("ResultUrl") != m.end() && !m["ResultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["ResultUrl"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("VolumeScore") != m.end() && !m["VolumeScore"].empty()) {
      volumeScore = make_shared<string>(boost::any_cast<string>(m["VolumeScore"]));
    }
  }


  virtual ~CalcCACSResponseBodyData() = default;
};
class CalcCACSResponseBody : public Darabonba::Model {
public:
  shared_ptr<CalcCACSResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CalcCACSResponseBody() {}

  explicit CalcCACSResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CalcCACSResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CalcCACSResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CalcCACSResponseBody() = default;
};
class CalcCACSResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CalcCACSResponseBody> body{};

  CalcCACSResponse() {}

  explicit CalcCACSResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CalcCACSResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CalcCACSResponseBody>(model1);
      }
    }
  }


  virtual ~CalcCACSResponse() = default;
};
class ClassifyFNFRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> tracerId{};

  ClassifyFNFRequest() {}

  explicit ClassifyFNFRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (tracerId) {
      res["TracerId"] = boost::any(*tracerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("TracerId") != m.end() && !m["TracerId"].empty()) {
      tracerId = make_shared<string>(boost::any_cast<string>(m["TracerId"]));
    }
  }


  virtual ~ClassifyFNFRequest() = default;
};
class ClassifyFNFAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<Darabonba::Stream> imageUrlObject{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> tracerId{};

  ClassifyFNFAdvanceRequest() {}

  explicit ClassifyFNFAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (imageUrlObject) {
      res["ImageUrl"] = boost::any(*imageUrlObject);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (tracerId) {
      res["TracerId"] = boost::any(*tracerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrl"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("TracerId") != m.end() && !m["TracerId"].empty()) {
      tracerId = make_shared<string>(boost::any_cast<string>(m["TracerId"]));
    }
  }


  virtual ~ClassifyFNFAdvanceRequest() = default;
};
class ClassifyFNFResponseBodyDataFracturesTag : public Darabonba::Model {
public:
  shared_ptr<string> label{};

  ClassifyFNFResponseBodyDataFracturesTag() {}

  explicit ClassifyFNFResponseBodyDataFracturesTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
  }


  virtual ~ClassifyFNFResponseBodyDataFracturesTag() = default;
};
class ClassifyFNFResponseBodyDataFractures : public Darabonba::Model {
public:
  shared_ptr<vector<long>> boxes{};
  shared_ptr<ClassifyFNFResponseBodyDataFracturesTag> tag{};
  shared_ptr<double> value{};

  ClassifyFNFResponseBodyDataFractures() {}

  explicit ClassifyFNFResponseBodyDataFractures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boxes) {
      res["Boxes"] = boost::any(*boxes);
    }
    if (tag) {
      res["Tag"] = tag ? boost::any(tag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Boxes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      boxes = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tag"].type()) {
        ClassifyFNFResponseBodyDataFracturesTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tag"]));
        tag = make_shared<ClassifyFNFResponseBodyDataFracturesTag>(model1);
      }
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~ClassifyFNFResponseBodyDataFractures() = default;
};
class ClassifyFNFResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ClassifyFNFResponseBodyDataFractures>> fractures{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};

  ClassifyFNFResponseBodyData() {}

  explicit ClassifyFNFResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fractures) {
      vector<boost::any> temp1;
      for(auto item1:*fractures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fractures"] = boost::any(temp1);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fractures") != m.end() && !m["Fractures"].empty()) {
      if (typeid(vector<boost::any>) == m["Fractures"].type()) {
        vector<ClassifyFNFResponseBodyDataFractures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fractures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ClassifyFNFResponseBodyDataFractures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fractures = make_shared<vector<ClassifyFNFResponseBodyDataFractures>>(expect1);
      }
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
  }


  virtual ~ClassifyFNFResponseBodyData() = default;
};
class ClassifyFNFResponseBody : public Darabonba::Model {
public:
  shared_ptr<ClassifyFNFResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ClassifyFNFResponseBody() {}

  explicit ClassifyFNFResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ClassifyFNFResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ClassifyFNFResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ClassifyFNFResponseBody() = default;
};
class ClassifyFNFResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ClassifyFNFResponseBody> body{};

  ClassifyFNFResponse() {}

  explicit ClassifyFNFResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClassifyFNFResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClassifyFNFResponseBody>(model1);
      }
    }
  }


  virtual ~ClassifyFNFResponse() = default;
};
class DetectCovid19CadRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  DetectCovid19CadRequestURLList() {}

  explicit DetectCovid19CadRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~DetectCovid19CadRequestURLList() = default;
};
class DetectCovid19CadRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<DetectCovid19CadRequestURLList>> URLList{};

  DetectCovid19CadRequest() {}

  explicit DetectCovid19CadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectCovid19CadRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectCovid19CadRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectCovid19CadRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectCovid19CadRequest() = default;
};
class DetectCovid19CadAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  DetectCovid19CadAdvanceRequestURLList() {}

  explicit DetectCovid19CadAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~DetectCovid19CadAdvanceRequestURLList() = default;
};
class DetectCovid19CadAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<DetectCovid19CadAdvanceRequestURLList>> URLList{};

  DetectCovid19CadAdvanceRequest() {}

  explicit DetectCovid19CadAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectCovid19CadAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectCovid19CadAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectCovid19CadAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectCovid19CadAdvanceRequest() = default;
};
class DetectCovid19CadResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> lesionRatio{};
  shared_ptr<string> mask{};
  shared_ptr<string> newProbability{};
  shared_ptr<string> normalProbability{};
  shared_ptr<string> otherProbability{};

  DetectCovid19CadResponseBodyData() {}

  explicit DetectCovid19CadResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesionRatio) {
      res["LesionRatio"] = boost::any(*lesionRatio);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (newProbability) {
      res["NewProbability"] = boost::any(*newProbability);
    }
    if (normalProbability) {
      res["NormalProbability"] = boost::any(*normalProbability);
    }
    if (otherProbability) {
      res["OtherProbability"] = boost::any(*otherProbability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LesionRatio") != m.end() && !m["LesionRatio"].empty()) {
      lesionRatio = make_shared<string>(boost::any_cast<string>(m["LesionRatio"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("NewProbability") != m.end() && !m["NewProbability"].empty()) {
      newProbability = make_shared<string>(boost::any_cast<string>(m["NewProbability"]));
    }
    if (m.find("NormalProbability") != m.end() && !m["NormalProbability"].empty()) {
      normalProbability = make_shared<string>(boost::any_cast<string>(m["NormalProbability"]));
    }
    if (m.find("OtherProbability") != m.end() && !m["OtherProbability"].empty()) {
      otherProbability = make_shared<string>(boost::any_cast<string>(m["OtherProbability"]));
    }
  }


  virtual ~DetectCovid19CadResponseBodyData() = default;
};
class DetectCovid19CadResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetectCovid19CadResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DetectCovid19CadResponseBody() {}

  explicit DetectCovid19CadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectCovid19CadResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectCovid19CadResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectCovid19CadResponseBody() = default;
};
class DetectCovid19CadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectCovid19CadResponseBody> body{};

  DetectCovid19CadResponse() {}

  explicit DetectCovid19CadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectCovid19CadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectCovid19CadResponseBody>(model1);
      }
    }
  }


  virtual ~DetectCovid19CadResponse() = default;
};
class DetectHipKeypointXRayRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> tracerId{};

  DetectHipKeypointXRayRequest() {}

  explicit DetectHipKeypointXRayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (tracerId) {
      res["TracerId"] = boost::any(*tracerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("TracerId") != m.end() && !m["TracerId"].empty()) {
      tracerId = make_shared<string>(boost::any_cast<string>(m["TracerId"]));
    }
  }


  virtual ~DetectHipKeypointXRayRequest() = default;
};
class DetectHipKeypointXRayAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<Darabonba::Stream> imageUrlObject{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> tracerId{};

  DetectHipKeypointXRayAdvanceRequest() {}

  explicit DetectHipKeypointXRayAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (imageUrlObject) {
      res["ImageUrl"] = boost::any(*imageUrlObject);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (tracerId) {
      res["TracerId"] = boost::any(*tracerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrl"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("TracerId") != m.end() && !m["TracerId"].empty()) {
      tracerId = make_shared<string>(boost::any_cast<string>(m["TracerId"]));
    }
  }


  virtual ~DetectHipKeypointXRayAdvanceRequest() = default;
};
class DetectHipKeypointXRayResponseBodyDataKeyPointsTag : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<string> label{};

  DetectHipKeypointXRayResponseBodyDataKeyPointsTag() {}

  explicit DetectHipKeypointXRayResponseBodyDataKeyPointsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
  }


  virtual ~DetectHipKeypointXRayResponseBodyDataKeyPointsTag() = default;
};
class DetectHipKeypointXRayResponseBodyDataKeyPoints : public Darabonba::Model {
public:
  shared_ptr<vector<long>> coordinates{};
  shared_ptr<DetectHipKeypointXRayResponseBodyDataKeyPointsTag> tag{};
  shared_ptr<double> value{};

  DetectHipKeypointXRayResponseBodyDataKeyPoints() {}

  explicit DetectHipKeypointXRayResponseBodyDataKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coordinates) {
      res["Coordinates"] = boost::any(*coordinates);
    }
    if (tag) {
      res["Tag"] = tag ? boost::any(tag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Coordinates") != m.end() && !m["Coordinates"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Coordinates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Coordinates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      coordinates = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tag"].type()) {
        DetectHipKeypointXRayResponseBodyDataKeyPointsTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tag"]));
        tag = make_shared<DetectHipKeypointXRayResponseBodyDataKeyPointsTag>(model1);
      }
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DetectHipKeypointXRayResponseBodyDataKeyPoints() = default;
};
class DetectHipKeypointXRayResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};
  shared_ptr<vector<DetectHipKeypointXRayResponseBodyDataKeyPoints>> keyPoints{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};

  DetectHipKeypointXRayResponseBodyData() {}

  explicit DetectHipKeypointXRayResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<DetectHipKeypointXRayResponseBodyDataKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectHipKeypointXRayResponseBodyDataKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<DetectHipKeypointXRayResponseBodyDataKeyPoints>>(expect1);
      }
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
  }


  virtual ~DetectHipKeypointXRayResponseBodyData() = default;
};
class DetectHipKeypointXRayResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetectHipKeypointXRayResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DetectHipKeypointXRayResponseBody() {}

  explicit DetectHipKeypointXRayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectHipKeypointXRayResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectHipKeypointXRayResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectHipKeypointXRayResponseBody() = default;
};
class DetectHipKeypointXRayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectHipKeypointXRayResponseBody> body{};

  DetectHipKeypointXRayResponse() {}

  explicit DetectHipKeypointXRayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectHipKeypointXRayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectHipKeypointXRayResponseBody>(model1);
      }
    }
  }


  virtual ~DetectHipKeypointXRayResponse() = default;
};
class DetectKneeKeypointXRayRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> tracerId{};

  DetectKneeKeypointXRayRequest() {}

  explicit DetectKneeKeypointXRayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (tracerId) {
      res["TracerId"] = boost::any(*tracerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("TracerId") != m.end() && !m["TracerId"].empty()) {
      tracerId = make_shared<string>(boost::any_cast<string>(m["TracerId"]));
    }
  }


  virtual ~DetectKneeKeypointXRayRequest() = default;
};
class DetectKneeKeypointXRayAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<Darabonba::Stream> imageUrlObject{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> tracerId{};

  DetectKneeKeypointXRayAdvanceRequest() {}

  explicit DetectKneeKeypointXRayAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (imageUrlObject) {
      res["ImageUrl"] = boost::any(*imageUrlObject);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (tracerId) {
      res["TracerId"] = boost::any(*tracerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrl"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("TracerId") != m.end() && !m["TracerId"].empty()) {
      tracerId = make_shared<string>(boost::any_cast<string>(m["TracerId"]));
    }
  }


  virtual ~DetectKneeKeypointXRayAdvanceRequest() = default;
};
class DetectKneeKeypointXRayResponseBodyDataKeyPointsTag : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<string> label{};

  DetectKneeKeypointXRayResponseBodyDataKeyPointsTag() {}

  explicit DetectKneeKeypointXRayResponseBodyDataKeyPointsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
  }


  virtual ~DetectKneeKeypointXRayResponseBodyDataKeyPointsTag() = default;
};
class DetectKneeKeypointXRayResponseBodyDataKeyPoints : public Darabonba::Model {
public:
  shared_ptr<vector<long>> coordinates{};
  shared_ptr<DetectKneeKeypointXRayResponseBodyDataKeyPointsTag> tag{};
  shared_ptr<double> value{};

  DetectKneeKeypointXRayResponseBodyDataKeyPoints() {}

  explicit DetectKneeKeypointXRayResponseBodyDataKeyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coordinates) {
      res["Coordinates"] = boost::any(*coordinates);
    }
    if (tag) {
      res["Tag"] = tag ? boost::any(tag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Coordinates") != m.end() && !m["Coordinates"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Coordinates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Coordinates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      coordinates = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tag"].type()) {
        DetectKneeKeypointXRayResponseBodyDataKeyPointsTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tag"]));
        tag = make_shared<DetectKneeKeypointXRayResponseBodyDataKeyPointsTag>(model1);
      }
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DetectKneeKeypointXRayResponseBodyDataKeyPoints() = default;
};
class DetectKneeKeypointXRayResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};
  shared_ptr<vector<DetectKneeKeypointXRayResponseBodyDataKeyPoints>> keyPoints{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};

  DetectKneeKeypointXRayResponseBodyData() {}

  explicit DetectKneeKeypointXRayResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (keyPoints) {
      vector<boost::any> temp1;
      for(auto item1:*keyPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyPoints"] = boost::any(temp1);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("KeyPoints") != m.end() && !m["KeyPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyPoints"].type()) {
        vector<DetectKneeKeypointXRayResponseBodyDataKeyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectKneeKeypointXRayResponseBodyDataKeyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyPoints = make_shared<vector<DetectKneeKeypointXRayResponseBodyDataKeyPoints>>(expect1);
      }
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
  }


  virtual ~DetectKneeKeypointXRayResponseBodyData() = default;
};
class DetectKneeKeypointXRayResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetectKneeKeypointXRayResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DetectKneeKeypointXRayResponseBody() {}

  explicit DetectKneeKeypointXRayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectKneeKeypointXRayResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectKneeKeypointXRayResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectKneeKeypointXRayResponseBody() = default;
};
class DetectKneeKeypointXRayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectKneeKeypointXRayResponseBody> body{};

  DetectKneeKeypointXRayResponse() {}

  explicit DetectKneeKeypointXRayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectKneeKeypointXRayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectKneeKeypointXRayResponseBody>(model1);
      }
    }
  }


  virtual ~DetectKneeKeypointXRayResponse() = default;
};
class DetectKneeXRayRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> url{};

  DetectKneeXRayRequest() {}

  explicit DetectKneeXRayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DetectKneeXRayRequest() = default;
};
class DetectKneeXRayAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<Darabonba::Stream> urlObject{};

  DetectKneeXRayAdvanceRequest() {}

  explicit DetectKneeXRayAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (urlObject) {
      res["Url"] = boost::any(*urlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      urlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["Url"]));
    }
  }


  virtual ~DetectKneeXRayAdvanceRequest() = default;
};
class DetectKneeXRayResponseBodyDataKLDetections : public Darabonba::Model {
public:
  shared_ptr<vector<double>> detections{};

  DetectKneeXRayResponseBodyDataKLDetections() {}

  explicit DetectKneeXRayResponseBodyDataKLDetections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detections) {
      res["Detections"] = boost::any(*detections);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detections") != m.end() && !m["Detections"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Detections"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Detections"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      detections = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~DetectKneeXRayResponseBodyDataKLDetections() = default;
};
class DetectKneeXRayResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectKneeXRayResponseBodyDataKLDetections>> KLDetections{};

  DetectKneeXRayResponseBodyData() {}

  explicit DetectKneeXRayResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (KLDetections) {
      vector<boost::any> temp1;
      for(auto item1:*KLDetections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KLDetections"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KLDetections") != m.end() && !m["KLDetections"].empty()) {
      if (typeid(vector<boost::any>) == m["KLDetections"].type()) {
        vector<DetectKneeXRayResponseBodyDataKLDetections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KLDetections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectKneeXRayResponseBodyDataKLDetections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        KLDetections = make_shared<vector<DetectKneeXRayResponseBodyDataKLDetections>>(expect1);
      }
    }
  }


  virtual ~DetectKneeXRayResponseBodyData() = default;
};
class DetectKneeXRayResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetectKneeXRayResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DetectKneeXRayResponseBody() {}

  explicit DetectKneeXRayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectKneeXRayResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectKneeXRayResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectKneeXRayResponseBody() = default;
};
class DetectKneeXRayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectKneeXRayResponseBody> body{};

  DetectKneeXRayResponse() {}

  explicit DetectKneeXRayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectKneeXRayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectKneeXRayResponseBody>(model1);
      }
    }
  }


  virtual ~DetectKneeXRayResponse() = default;
};
class DetectLiverSteatosisRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  DetectLiverSteatosisRequestURLList() {}

  explicit DetectLiverSteatosisRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~DetectLiverSteatosisRequestURLList() = default;
};
class DetectLiverSteatosisRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<DetectLiverSteatosisRequestURLList>> URLList{};

  DetectLiverSteatosisRequest() {}

  explicit DetectLiverSteatosisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectLiverSteatosisRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLiverSteatosisRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectLiverSteatosisRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectLiverSteatosisRequest() = default;
};
class DetectLiverSteatosisAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  DetectLiverSteatosisAdvanceRequestURLList() {}

  explicit DetectLiverSteatosisAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~DetectLiverSteatosisAdvanceRequestURLList() = default;
};
class DetectLiverSteatosisAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<DetectLiverSteatosisAdvanceRequestURLList>> URLList{};

  DetectLiverSteatosisAdvanceRequest() {}

  explicit DetectLiverSteatosisAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectLiverSteatosisAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLiverSteatosisAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectLiverSteatosisAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectLiverSteatosisAdvanceRequest() = default;
};
class DetectLiverSteatosisResponseBodyDataDetections : public Darabonba::Model {
public:
  shared_ptr<double> liverHU{};
  shared_ptr<double> liverROI1{};
  shared_ptr<double> liverROI2{};
  shared_ptr<double> liverROI3{};
  shared_ptr<double> liverSlice{};
  shared_ptr<double> liverSpleenDifference{};
  shared_ptr<double> liverSpleenRatio{};
  shared_ptr<double> liverVolume{};
  shared_ptr<string> prediction{};
  shared_ptr<double> probability{};
  shared_ptr<vector<long>> ROI1Center{};
  shared_ptr<vector<long>> ROI2Center{};
  shared_ptr<vector<long>> ROI3Center{};
  shared_ptr<long> radius{};
  shared_ptr<vector<long>> spleenCenter{};
  shared_ptr<double> spleenHU{};
  shared_ptr<double> spleenROI{};
  shared_ptr<double> spleenSlice{};
  shared_ptr<double> spleenVolume{};

  DetectLiverSteatosisResponseBodyDataDetections() {}

  explicit DetectLiverSteatosisResponseBodyDataDetections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liverHU) {
      res["LiverHU"] = boost::any(*liverHU);
    }
    if (liverROI1) {
      res["LiverROI1"] = boost::any(*liverROI1);
    }
    if (liverROI2) {
      res["LiverROI2"] = boost::any(*liverROI2);
    }
    if (liverROI3) {
      res["LiverROI3"] = boost::any(*liverROI3);
    }
    if (liverSlice) {
      res["LiverSlice"] = boost::any(*liverSlice);
    }
    if (liverSpleenDifference) {
      res["LiverSpleenDifference"] = boost::any(*liverSpleenDifference);
    }
    if (liverSpleenRatio) {
      res["LiverSpleenRatio"] = boost::any(*liverSpleenRatio);
    }
    if (liverVolume) {
      res["LiverVolume"] = boost::any(*liverVolume);
    }
    if (prediction) {
      res["Prediction"] = boost::any(*prediction);
    }
    if (probability) {
      res["Probability"] = boost::any(*probability);
    }
    if (ROI1Center) {
      res["ROI1Center"] = boost::any(*ROI1Center);
    }
    if (ROI2Center) {
      res["ROI2Center"] = boost::any(*ROI2Center);
    }
    if (ROI3Center) {
      res["ROI3Center"] = boost::any(*ROI3Center);
    }
    if (radius) {
      res["Radius"] = boost::any(*radius);
    }
    if (spleenCenter) {
      res["SpleenCenter"] = boost::any(*spleenCenter);
    }
    if (spleenHU) {
      res["SpleenHU"] = boost::any(*spleenHU);
    }
    if (spleenROI) {
      res["SpleenROI"] = boost::any(*spleenROI);
    }
    if (spleenSlice) {
      res["SpleenSlice"] = boost::any(*spleenSlice);
    }
    if (spleenVolume) {
      res["SpleenVolume"] = boost::any(*spleenVolume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiverHU") != m.end() && !m["LiverHU"].empty()) {
      liverHU = make_shared<double>(boost::any_cast<double>(m["LiverHU"]));
    }
    if (m.find("LiverROI1") != m.end() && !m["LiverROI1"].empty()) {
      liverROI1 = make_shared<double>(boost::any_cast<double>(m["LiverROI1"]));
    }
    if (m.find("LiverROI2") != m.end() && !m["LiverROI2"].empty()) {
      liverROI2 = make_shared<double>(boost::any_cast<double>(m["LiverROI2"]));
    }
    if (m.find("LiverROI3") != m.end() && !m["LiverROI3"].empty()) {
      liverROI3 = make_shared<double>(boost::any_cast<double>(m["LiverROI3"]));
    }
    if (m.find("LiverSlice") != m.end() && !m["LiverSlice"].empty()) {
      liverSlice = make_shared<double>(boost::any_cast<double>(m["LiverSlice"]));
    }
    if (m.find("LiverSpleenDifference") != m.end() && !m["LiverSpleenDifference"].empty()) {
      liverSpleenDifference = make_shared<double>(boost::any_cast<double>(m["LiverSpleenDifference"]));
    }
    if (m.find("LiverSpleenRatio") != m.end() && !m["LiverSpleenRatio"].empty()) {
      liverSpleenRatio = make_shared<double>(boost::any_cast<double>(m["LiverSpleenRatio"]));
    }
    if (m.find("LiverVolume") != m.end() && !m["LiverVolume"].empty()) {
      liverVolume = make_shared<double>(boost::any_cast<double>(m["LiverVolume"]));
    }
    if (m.find("Prediction") != m.end() && !m["Prediction"].empty()) {
      prediction = make_shared<string>(boost::any_cast<string>(m["Prediction"]));
    }
    if (m.find("Probability") != m.end() && !m["Probability"].empty()) {
      probability = make_shared<double>(boost::any_cast<double>(m["Probability"]));
    }
    if (m.find("ROI1Center") != m.end() && !m["ROI1Center"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ROI1Center"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ROI1Center"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ROI1Center = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ROI2Center") != m.end() && !m["ROI2Center"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ROI2Center"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ROI2Center"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ROI2Center = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ROI3Center") != m.end() && !m["ROI3Center"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ROI3Center"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ROI3Center"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ROI3Center = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Radius") != m.end() && !m["Radius"].empty()) {
      radius = make_shared<long>(boost::any_cast<long>(m["Radius"]));
    }
    if (m.find("SpleenCenter") != m.end() && !m["SpleenCenter"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SpleenCenter"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SpleenCenter"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      spleenCenter = make_shared<vector<long>>(toVec1);
    }
    if (m.find("SpleenHU") != m.end() && !m["SpleenHU"].empty()) {
      spleenHU = make_shared<double>(boost::any_cast<double>(m["SpleenHU"]));
    }
    if (m.find("SpleenROI") != m.end() && !m["SpleenROI"].empty()) {
      spleenROI = make_shared<double>(boost::any_cast<double>(m["SpleenROI"]));
    }
    if (m.find("SpleenSlice") != m.end() && !m["SpleenSlice"].empty()) {
      spleenSlice = make_shared<double>(boost::any_cast<double>(m["SpleenSlice"]));
    }
    if (m.find("SpleenVolume") != m.end() && !m["SpleenVolume"].empty()) {
      spleenVolume = make_shared<double>(boost::any_cast<double>(m["SpleenVolume"]));
    }
  }


  virtual ~DetectLiverSteatosisResponseBodyDataDetections() = default;
};
class DetectLiverSteatosisResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectLiverSteatosisResponseBodyDataDetections>> detections{};
  shared_ptr<vector<double>> origin{};
  shared_ptr<vector<double>> spacing{};

  DetectLiverSteatosisResponseBodyData() {}

  explicit DetectLiverSteatosisResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detections) {
      vector<boost::any> temp1;
      for(auto item1:*detections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Detections"] = boost::any(temp1);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (spacing) {
      res["Spacing"] = boost::any(*spacing);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detections") != m.end() && !m["Detections"].empty()) {
      if (typeid(vector<boost::any>) == m["Detections"].type()) {
        vector<DetectLiverSteatosisResponseBodyDataDetections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Detections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLiverSteatosisResponseBodyDataDetections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detections = make_shared<vector<DetectLiverSteatosisResponseBodyDataDetections>>(expect1);
      }
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Origin"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Origin"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      origin = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Spacing") != m.end() && !m["Spacing"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Spacing"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Spacing"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      spacing = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~DetectLiverSteatosisResponseBodyData() = default;
};
class DetectLiverSteatosisResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetectLiverSteatosisResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DetectLiverSteatosisResponseBody() {}

  explicit DetectLiverSteatosisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectLiverSteatosisResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectLiverSteatosisResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectLiverSteatosisResponseBody() = default;
};
class DetectLiverSteatosisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectLiverSteatosisResponseBody> body{};

  DetectLiverSteatosisResponse() {}

  explicit DetectLiverSteatosisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectLiverSteatosisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectLiverSteatosisResponseBody>(model1);
      }
    }
  }


  virtual ~DetectLiverSteatosisResponse() = default;
};
class DetectLungNoduleRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  DetectLungNoduleRequestURLList() {}

  explicit DetectLungNoduleRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~DetectLungNoduleRequestURLList() = default;
};
class DetectLungNoduleRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<double> threshold{};
  shared_ptr<vector<DetectLungNoduleRequestURLList>> URLList{};

  DetectLungNoduleRequest() {}

  explicit DetectLungNoduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectLungNoduleRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLungNoduleRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectLungNoduleRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectLungNoduleRequest() = default;
};
class DetectLungNoduleAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  DetectLungNoduleAdvanceRequestURLList() {}

  explicit DetectLungNoduleAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~DetectLungNoduleAdvanceRequestURLList() = default;
};
class DetectLungNoduleAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<double> threshold{};
  shared_ptr<vector<DetectLungNoduleAdvanceRequestURLList>> URLList{};

  DetectLungNoduleAdvanceRequest() {}

  explicit DetectLungNoduleAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectLungNoduleAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLungNoduleAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectLungNoduleAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectLungNoduleAdvanceRequest() = default;
};
class DetectLungNoduleResponseBodyDataSeriesElements : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<double> confidence{};
  shared_ptr<double> diameter{};
  shared_ptr<double> imageX{};
  shared_ptr<double> imageY{};
  shared_ptr<double> imageZ{};
  shared_ptr<string> lobe{};
  shared_ptr<string> lung{};
  shared_ptr<vector<double>> majorAxis{};
  shared_ptr<double> meanValue{};
  shared_ptr<vector<double>> minorAxis{};
  shared_ptr<string> recistSOPInstanceUID{};
  shared_ptr<double> risk{};
  shared_ptr<string> SOPInstanceUID{};
  shared_ptr<double> volume{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<double> z{};

  DetectLungNoduleResponseBodyDataSeriesElements() {}

  explicit DetectLungNoduleResponseBodyDataSeriesElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (diameter) {
      res["Diameter"] = boost::any(*diameter);
    }
    if (imageX) {
      res["ImageX"] = boost::any(*imageX);
    }
    if (imageY) {
      res["ImageY"] = boost::any(*imageY);
    }
    if (imageZ) {
      res["ImageZ"] = boost::any(*imageZ);
    }
    if (lobe) {
      res["Lobe"] = boost::any(*lobe);
    }
    if (lung) {
      res["Lung"] = boost::any(*lung);
    }
    if (majorAxis) {
      res["MajorAxis"] = boost::any(*majorAxis);
    }
    if (meanValue) {
      res["MeanValue"] = boost::any(*meanValue);
    }
    if (minorAxis) {
      res["MinorAxis"] = boost::any(*minorAxis);
    }
    if (recistSOPInstanceUID) {
      res["RecistSOPInstanceUID"] = boost::any(*recistSOPInstanceUID);
    }
    if (risk) {
      res["Risk"] = boost::any(*risk);
    }
    if (SOPInstanceUID) {
      res["SOPInstanceUID"] = boost::any(*SOPInstanceUID);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (z) {
      res["Z"] = boost::any(*z);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Diameter") != m.end() && !m["Diameter"].empty()) {
      diameter = make_shared<double>(boost::any_cast<double>(m["Diameter"]));
    }
    if (m.find("ImageX") != m.end() && !m["ImageX"].empty()) {
      imageX = make_shared<double>(boost::any_cast<double>(m["ImageX"]));
    }
    if (m.find("ImageY") != m.end() && !m["ImageY"].empty()) {
      imageY = make_shared<double>(boost::any_cast<double>(m["ImageY"]));
    }
    if (m.find("ImageZ") != m.end() && !m["ImageZ"].empty()) {
      imageZ = make_shared<double>(boost::any_cast<double>(m["ImageZ"]));
    }
    if (m.find("Lobe") != m.end() && !m["Lobe"].empty()) {
      lobe = make_shared<string>(boost::any_cast<string>(m["Lobe"]));
    }
    if (m.find("Lung") != m.end() && !m["Lung"].empty()) {
      lung = make_shared<string>(boost::any_cast<string>(m["Lung"]));
    }
    if (m.find("MajorAxis") != m.end() && !m["MajorAxis"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["MajorAxis"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MajorAxis"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      majorAxis = make_shared<vector<double>>(toVec1);
    }
    if (m.find("MeanValue") != m.end() && !m["MeanValue"].empty()) {
      meanValue = make_shared<double>(boost::any_cast<double>(m["MeanValue"]));
    }
    if (m.find("MinorAxis") != m.end() && !m["MinorAxis"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["MinorAxis"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MinorAxis"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      minorAxis = make_shared<vector<double>>(toVec1);
    }
    if (m.find("RecistSOPInstanceUID") != m.end() && !m["RecistSOPInstanceUID"].empty()) {
      recistSOPInstanceUID = make_shared<string>(boost::any_cast<string>(m["RecistSOPInstanceUID"]));
    }
    if (m.find("Risk") != m.end() && !m["Risk"].empty()) {
      risk = make_shared<double>(boost::any_cast<double>(m["Risk"]));
    }
    if (m.find("SOPInstanceUID") != m.end() && !m["SOPInstanceUID"].empty()) {
      SOPInstanceUID = make_shared<string>(boost::any_cast<string>(m["SOPInstanceUID"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<double>(boost::any_cast<double>(m["Volume"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("Z") != m.end() && !m["Z"].empty()) {
      z = make_shared<double>(boost::any_cast<double>(m["Z"]));
    }
  }


  virtual ~DetectLungNoduleResponseBodyDataSeriesElements() = default;
};
class DetectLungNoduleResponseBodyDataSeries : public Darabonba::Model {
public:
  shared_ptr<vector<DetectLungNoduleResponseBodyDataSeriesElements>> elements{};
  shared_ptr<vector<double>> origin{};
  shared_ptr<string> report{};
  shared_ptr<string> seriesInstanceUid{};
  shared_ptr<vector<double>> spacing{};

  DetectLungNoduleResponseBodyDataSeries() {}

  explicit DetectLungNoduleResponseBodyDataSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elements) {
      vector<boost::any> temp1;
      for(auto item1:*elements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Elements"] = boost::any(temp1);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (report) {
      res["Report"] = boost::any(*report);
    }
    if (seriesInstanceUid) {
      res["SeriesInstanceUid"] = boost::any(*seriesInstanceUid);
    }
    if (spacing) {
      res["Spacing"] = boost::any(*spacing);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<DetectLungNoduleResponseBodyDataSeriesElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLungNoduleResponseBodyDataSeriesElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<DetectLungNoduleResponseBodyDataSeriesElements>>(expect1);
      }
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Origin"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Origin"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      origin = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Report") != m.end() && !m["Report"].empty()) {
      report = make_shared<string>(boost::any_cast<string>(m["Report"]));
    }
    if (m.find("SeriesInstanceUid") != m.end() && !m["SeriesInstanceUid"].empty()) {
      seriesInstanceUid = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUid"]));
    }
    if (m.find("Spacing") != m.end() && !m["Spacing"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Spacing"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Spacing"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      spacing = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~DetectLungNoduleResponseBodyDataSeries() = default;
};
class DetectLungNoduleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectLungNoduleResponseBodyDataSeries>> series{};

  DetectLungNoduleResponseBodyData() {}

  explicit DetectLungNoduleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (series) {
      vector<boost::any> temp1;
      for(auto item1:*series){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Series"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(vector<boost::any>) == m["Series"].type()) {
        vector<DetectLungNoduleResponseBodyDataSeries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Series"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLungNoduleResponseBodyDataSeries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        series = make_shared<vector<DetectLungNoduleResponseBodyDataSeries>>(expect1);
      }
    }
  }


  virtual ~DetectLungNoduleResponseBodyData() = default;
};
class DetectLungNoduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetectLungNoduleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DetectLungNoduleResponseBody() {}

  explicit DetectLungNoduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectLungNoduleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectLungNoduleResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectLungNoduleResponseBody() = default;
};
class DetectLungNoduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectLungNoduleResponseBody> body{};

  DetectLungNoduleResponse() {}

  explicit DetectLungNoduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectLungNoduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectLungNoduleResponseBody>(model1);
      }
    }
  }


  virtual ~DetectLungNoduleResponse() = default;
};
class DetectLymphRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  DetectLymphRequestURLList() {}

  explicit DetectLymphRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~DetectLymphRequestURLList() = default;
};
class DetectLymphRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceType{};
  shared_ptr<vector<DetectLymphRequestURLList>> URLList{};

  DetectLymphRequest() {}

  explicit DetectLymphRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectLymphRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLymphRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectLymphRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectLymphRequest() = default;
};
class DetectLymphAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  DetectLymphAdvanceRequestURLList() {}

  explicit DetectLymphAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~DetectLymphAdvanceRequestURLList() = default;
};
class DetectLymphAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceType{};
  shared_ptr<vector<DetectLymphAdvanceRequestURLList>> URLList{};

  DetectLymphAdvanceRequest() {}

  explicit DetectLymphAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectLymphAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLymphAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectLymphAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectLymphAdvanceRequest() = default;
};
class DetectLymphResponseBodyDataLesions : public Darabonba::Model {
public:
  shared_ptr<vector<double>> boxes{};
  shared_ptr<vector<double>> diametermm{};
  shared_ptr<long> keySlice{};
  shared_ptr<vector<vector<double>>> recist{};
  shared_ptr<double> score{};

  DetectLymphResponseBodyDataLesions() {}

  explicit DetectLymphResponseBodyDataLesions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boxes) {
      res["Boxes"] = boost::any(*boxes);
    }
    if (diametermm) {
      res["Diametermm"] = boost::any(*diametermm);
    }
    if (keySlice) {
      res["KeySlice"] = boost::any(*keySlice);
    }
    if (recist) {
      res["Recist"] = boost::any(*recist);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Boxes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      boxes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Diametermm") != m.end() && !m["Diametermm"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Diametermm"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Diametermm"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      diametermm = make_shared<vector<double>>(toVec1);
    }
    if (m.find("KeySlice") != m.end() && !m["KeySlice"].empty()) {
      keySlice = make_shared<long>(boost::any_cast<long>(m["KeySlice"]));
    }
    if (m.find("Recist") != m.end() && !m["Recist"].empty()) {
      vector<vector<double>> toVec1;
      if (typeid(vector<boost::any>) == m["Recist"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Recist"]);
        for (auto item:vec1) {
          vector<double> toVec2;
          if (typeid(vector<boost::any>) == item.type()) {
            vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item);
            for (auto item:vec2) {
               toVec2.push_back(boost::any_cast<double>(item));
            }
          }
           toVec1 = toVec2;
        }
      }
      recist = make_shared<vector<vector<double>>>(toVec1);
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~DetectLymphResponseBodyDataLesions() = default;
};
class DetectLymphResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectLymphResponseBodyDataLesions>> lesions{};

  DetectLymphResponseBodyData() {}

  explicit DetectLymphResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesions) {
      vector<boost::any> temp1;
      for(auto item1:*lesions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Lesions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lesions") != m.end() && !m["Lesions"].empty()) {
      if (typeid(vector<boost::any>) == m["Lesions"].type()) {
        vector<DetectLymphResponseBodyDataLesions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Lesions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectLymphResponseBodyDataLesions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lesions = make_shared<vector<DetectLymphResponseBodyDataLesions>>(expect1);
      }
    }
  }


  virtual ~DetectLymphResponseBodyData() = default;
};
class DetectLymphResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetectLymphResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DetectLymphResponseBody() {}

  explicit DetectLymphResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectLymphResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectLymphResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectLymphResponseBody() = default;
};
class DetectLymphResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectLymphResponseBody> body{};

  DetectLymphResponse() {}

  explicit DetectLymphResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectLymphResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectLymphResponseBody>(model1);
      }
    }
  }


  virtual ~DetectLymphResponse() = default;
};
class DetectPancRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  DetectPancRequestURLList() {}

  explicit DetectPancRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~DetectPancRequestURLList() = default;
};
class DetectPancRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceType{};
  shared_ptr<vector<DetectPancRequestURLList>> URLList{};

  DetectPancRequest() {}

  explicit DetectPancRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectPancRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectPancRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectPancRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectPancRequest() = default;
};
class DetectPancAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  DetectPancAdvanceRequestURLList() {}

  explicit DetectPancAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~DetectPancAdvanceRequestURLList() = default;
};
class DetectPancAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceType{};
  shared_ptr<vector<DetectPancAdvanceRequestURLList>> URLList{};

  DetectPancAdvanceRequest() {}

  explicit DetectPancAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectPancAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectPancAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectPancAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectPancAdvanceRequest() = default;
};
class DetectPancResponseBodyDataLesion : public Darabonba::Model {
public:
  shared_ptr<string> mask{};
  shared_ptr<string> nonPdacVol{};
  shared_ptr<string> pancVol{};
  shared_ptr<string> pdacVol{};
  shared_ptr<vector<string>> possibilities{};

  DetectPancResponseBodyDataLesion() {}

  explicit DetectPancResponseBodyDataLesion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (nonPdacVol) {
      res["NonPdacVol"] = boost::any(*nonPdacVol);
    }
    if (pancVol) {
      res["PancVol"] = boost::any(*pancVol);
    }
    if (pdacVol) {
      res["PdacVol"] = boost::any(*pdacVol);
    }
    if (possibilities) {
      res["Possibilities"] = boost::any(*possibilities);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("NonPdacVol") != m.end() && !m["NonPdacVol"].empty()) {
      nonPdacVol = make_shared<string>(boost::any_cast<string>(m["NonPdacVol"]));
    }
    if (m.find("PancVol") != m.end() && !m["PancVol"].empty()) {
      pancVol = make_shared<string>(boost::any_cast<string>(m["PancVol"]));
    }
    if (m.find("PdacVol") != m.end() && !m["PdacVol"].empty()) {
      pdacVol = make_shared<string>(boost::any_cast<string>(m["PdacVol"]));
    }
    if (m.find("Possibilities") != m.end() && !m["Possibilities"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Possibilities"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Possibilities"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      possibilities = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DetectPancResponseBodyDataLesion() = default;
};
class DetectPancResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DetectPancResponseBodyDataLesion> lesion{};

  DetectPancResponseBodyData() {}

  explicit DetectPancResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesion) {
      res["Lesion"] = lesion ? boost::any(lesion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lesion") != m.end() && !m["Lesion"].empty()) {
      if (typeid(map<string, boost::any>) == m["Lesion"].type()) {
        DetectPancResponseBodyDataLesion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Lesion"]));
        lesion = make_shared<DetectPancResponseBodyDataLesion>(model1);
      }
    }
  }


  virtual ~DetectPancResponseBodyData() = default;
};
class DetectPancResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetectPancResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DetectPancResponseBody() {}

  explicit DetectPancResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectPancResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectPancResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectPancResponseBody() = default;
};
class DetectPancResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectPancResponseBody> body{};

  DetectPancResponse() {}

  explicit DetectPancResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectPancResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectPancResponseBody>(model1);
      }
    }
  }


  virtual ~DetectPancResponse() = default;
};
class DetectRibFractureRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  DetectRibFractureRequestURLList() {}

  explicit DetectRibFractureRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~DetectRibFractureRequestURLList() = default;
};
class DetectRibFractureRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<DetectRibFractureRequestURLList>> URLList{};

  DetectRibFractureRequest() {}

  explicit DetectRibFractureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectRibFractureRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectRibFractureRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectRibFractureRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectRibFractureRequest() = default;
};
class DetectRibFractureAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  DetectRibFractureAdvanceRequestURLList() {}

  explicit DetectRibFractureAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~DetectRibFractureAdvanceRequestURLList() = default;
};
class DetectRibFractureAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<DetectRibFractureAdvanceRequestURLList>> URLList{};

  DetectRibFractureAdvanceRequest() {}

  explicit DetectRibFractureAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectRibFractureAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectRibFractureAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectRibFractureAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectRibFractureAdvanceRequest() = default;
};
class DetectRibFractureResponseBodyDataDetections : public Darabonba::Model {
public:
  shared_ptr<vector<long>> coordinateImage{};
  shared_ptr<vector<long>> coordinates{};
  shared_ptr<string> fracSOPInstanceUID{};
  shared_ptr<string> fractureCategory{};
  shared_ptr<double> fractureConfidence{};
  shared_ptr<long> fractureId{};
  shared_ptr<string> fractureLocation{};
  shared_ptr<long> fractureSegment{};

  DetectRibFractureResponseBodyDataDetections() {}

  explicit DetectRibFractureResponseBodyDataDetections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coordinateImage) {
      res["CoordinateImage"] = boost::any(*coordinateImage);
    }
    if (coordinates) {
      res["Coordinates"] = boost::any(*coordinates);
    }
    if (fracSOPInstanceUID) {
      res["FracSOPInstanceUID"] = boost::any(*fracSOPInstanceUID);
    }
    if (fractureCategory) {
      res["FractureCategory"] = boost::any(*fractureCategory);
    }
    if (fractureConfidence) {
      res["FractureConfidence"] = boost::any(*fractureConfidence);
    }
    if (fractureId) {
      res["FractureId"] = boost::any(*fractureId);
    }
    if (fractureLocation) {
      res["FractureLocation"] = boost::any(*fractureLocation);
    }
    if (fractureSegment) {
      res["FractureSegment"] = boost::any(*fractureSegment);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoordinateImage") != m.end() && !m["CoordinateImage"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CoordinateImage"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CoordinateImage"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      coordinateImage = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Coordinates") != m.end() && !m["Coordinates"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Coordinates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Coordinates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      coordinates = make_shared<vector<long>>(toVec1);
    }
    if (m.find("FracSOPInstanceUID") != m.end() && !m["FracSOPInstanceUID"].empty()) {
      fracSOPInstanceUID = make_shared<string>(boost::any_cast<string>(m["FracSOPInstanceUID"]));
    }
    if (m.find("FractureCategory") != m.end() && !m["FractureCategory"].empty()) {
      fractureCategory = make_shared<string>(boost::any_cast<string>(m["FractureCategory"]));
    }
    if (m.find("FractureConfidence") != m.end() && !m["FractureConfidence"].empty()) {
      fractureConfidence = make_shared<double>(boost::any_cast<double>(m["FractureConfidence"]));
    }
    if (m.find("FractureId") != m.end() && !m["FractureId"].empty()) {
      fractureId = make_shared<long>(boost::any_cast<long>(m["FractureId"]));
    }
    if (m.find("FractureLocation") != m.end() && !m["FractureLocation"].empty()) {
      fractureLocation = make_shared<string>(boost::any_cast<string>(m["FractureLocation"]));
    }
    if (m.find("FractureSegment") != m.end() && !m["FractureSegment"].empty()) {
      fractureSegment = make_shared<long>(boost::any_cast<long>(m["FractureSegment"]));
    }
  }


  virtual ~DetectRibFractureResponseBodyDataDetections() = default;
};
class DetectRibFractureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectRibFractureResponseBodyDataDetections>> detections{};
  shared_ptr<vector<double>> origin{};
  shared_ptr<string> resultURL{};
  shared_ptr<vector<double>> spacing{};

  DetectRibFractureResponseBodyData() {}

  explicit DetectRibFractureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detections) {
      vector<boost::any> temp1;
      for(auto item1:*detections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Detections"] = boost::any(temp1);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (resultURL) {
      res["ResultURL"] = boost::any(*resultURL);
    }
    if (spacing) {
      res["Spacing"] = boost::any(*spacing);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detections") != m.end() && !m["Detections"].empty()) {
      if (typeid(vector<boost::any>) == m["Detections"].type()) {
        vector<DetectRibFractureResponseBodyDataDetections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Detections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectRibFractureResponseBodyDataDetections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detections = make_shared<vector<DetectRibFractureResponseBodyDataDetections>>(expect1);
      }
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Origin"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Origin"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      origin = make_shared<vector<double>>(toVec1);
    }
    if (m.find("ResultURL") != m.end() && !m["ResultURL"].empty()) {
      resultURL = make_shared<string>(boost::any_cast<string>(m["ResultURL"]));
    }
    if (m.find("Spacing") != m.end() && !m["Spacing"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Spacing"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Spacing"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      spacing = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~DetectRibFractureResponseBodyData() = default;
};
class DetectRibFractureResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetectRibFractureResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DetectRibFractureResponseBody() {}

  explicit DetectRibFractureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectRibFractureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectRibFractureResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectRibFractureResponseBody() = default;
};
class DetectRibFractureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectRibFractureResponseBody> body{};

  DetectRibFractureResponse() {}

  explicit DetectRibFractureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectRibFractureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectRibFractureResponseBody>(model1);
      }
    }
  }


  virtual ~DetectRibFractureResponse() = default;
};
class DetectSkinDiseaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> url{};

  DetectSkinDiseaseRequest() {}

  explicit DetectSkinDiseaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DetectSkinDiseaseRequest() = default;
};
class DetectSkinDiseaseAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<Darabonba::Stream> urlObject{};

  DetectSkinDiseaseAdvanceRequest() {}

  explicit DetectSkinDiseaseAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (urlObject) {
      res["Url"] = boost::any(*urlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      urlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["Url"]));
    }
  }


  virtual ~DetectSkinDiseaseAdvanceRequest() = default;
};
class DetectSkinDiseaseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bodyPart{};
  shared_ptr<double> imageQuality{};
  shared_ptr<string> imageType{};
  shared_ptr<map<string, boost::any>> results{};
  shared_ptr<map<string, boost::any>> resultsEnglish{};

  DetectSkinDiseaseResponseBodyData() {}

  explicit DetectSkinDiseaseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyPart) {
      res["BodyPart"] = boost::any(*bodyPart);
    }
    if (imageQuality) {
      res["ImageQuality"] = boost::any(*imageQuality);
    }
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    if (results) {
      res["Results"] = boost::any(*results);
    }
    if (resultsEnglish) {
      res["ResultsEnglish"] = boost::any(*resultsEnglish);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyPart") != m.end() && !m["BodyPart"].empty()) {
      bodyPart = make_shared<string>(boost::any_cast<string>(m["BodyPart"]));
    }
    if (m.find("ImageQuality") != m.end() && !m["ImageQuality"].empty()) {
      imageQuality = make_shared<double>(boost::any_cast<double>(m["ImageQuality"]));
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Results"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      results = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ResultsEnglish") != m.end() && !m["ResultsEnglish"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResultsEnglish"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resultsEnglish = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DetectSkinDiseaseResponseBodyData() = default;
};
class DetectSkinDiseaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetectSkinDiseaseResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DetectSkinDiseaseResponseBody() {}

  explicit DetectSkinDiseaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectSkinDiseaseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectSkinDiseaseResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectSkinDiseaseResponseBody() = default;
};
class DetectSkinDiseaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectSkinDiseaseResponseBody> body{};

  DetectSkinDiseaseResponse() {}

  explicit DetectSkinDiseaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectSkinDiseaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectSkinDiseaseResponseBody>(model1);
      }
    }
  }


  virtual ~DetectSkinDiseaseResponse() = default;
};
class DetectSpineMRIRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  DetectSpineMRIRequestURLList() {}

  explicit DetectSpineMRIRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~DetectSpineMRIRequestURLList() = default;
};
class DetectSpineMRIRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<DetectSpineMRIRequestURLList>> URLList{};

  DetectSpineMRIRequest() {}

  explicit DetectSpineMRIRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectSpineMRIRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectSpineMRIRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectSpineMRIRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectSpineMRIRequest() = default;
};
class DetectSpineMRIAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  DetectSpineMRIAdvanceRequestURLList() {}

  explicit DetectSpineMRIAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~DetectSpineMRIAdvanceRequestURLList() = default;
};
class DetectSpineMRIAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<DetectSpineMRIAdvanceRequestURLList>> URLList{};

  DetectSpineMRIAdvanceRequest() {}

  explicit DetectSpineMRIAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<DetectSpineMRIAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectSpineMRIAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<DetectSpineMRIAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~DetectSpineMRIAdvanceRequest() = default;
};
class DetectSpineMRIResponseBodyDataDiscs : public Darabonba::Model {
public:
  shared_ptr<string> disease{};
  shared_ptr<string> identification{};
  shared_ptr<vector<double>> location{};

  DetectSpineMRIResponseBodyDataDiscs() {}

  explicit DetectSpineMRIResponseBodyDataDiscs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disease) {
      res["Disease"] = boost::any(*disease);
    }
    if (identification) {
      res["Identification"] = boost::any(*identification);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Disease") != m.end() && !m["Disease"].empty()) {
      disease = make_shared<string>(boost::any_cast<string>(m["Disease"]));
    }
    if (m.find("Identification") != m.end() && !m["Identification"].empty()) {
      identification = make_shared<string>(boost::any_cast<string>(m["Identification"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Location"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Location"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      location = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~DetectSpineMRIResponseBodyDataDiscs() = default;
};
class DetectSpineMRIResponseBodyDataVertebras : public Darabonba::Model {
public:
  shared_ptr<string> disease{};
  shared_ptr<string> identification{};
  shared_ptr<vector<double>> location{};

  DetectSpineMRIResponseBodyDataVertebras() {}

  explicit DetectSpineMRIResponseBodyDataVertebras(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disease) {
      res["Disease"] = boost::any(*disease);
    }
    if (identification) {
      res["Identification"] = boost::any(*identification);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Disease") != m.end() && !m["Disease"].empty()) {
      disease = make_shared<string>(boost::any_cast<string>(m["Disease"]));
    }
    if (m.find("Identification") != m.end() && !m["Identification"].empty()) {
      identification = make_shared<string>(boost::any_cast<string>(m["Identification"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Location"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Location"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      location = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~DetectSpineMRIResponseBodyDataVertebras() = default;
};
class DetectSpineMRIResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectSpineMRIResponseBodyDataDiscs>> discs{};
  shared_ptr<vector<DetectSpineMRIResponseBodyDataVertebras>> vertebras{};

  DetectSpineMRIResponseBodyData() {}

  explicit DetectSpineMRIResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discs) {
      vector<boost::any> temp1;
      for(auto item1:*discs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Discs"] = boost::any(temp1);
    }
    if (vertebras) {
      vector<boost::any> temp1;
      for(auto item1:*vertebras){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vertebras"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Discs") != m.end() && !m["Discs"].empty()) {
      if (typeid(vector<boost::any>) == m["Discs"].type()) {
        vector<DetectSpineMRIResponseBodyDataDiscs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Discs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectSpineMRIResponseBodyDataDiscs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        discs = make_shared<vector<DetectSpineMRIResponseBodyDataDiscs>>(expect1);
      }
    }
    if (m.find("Vertebras") != m.end() && !m["Vertebras"].empty()) {
      if (typeid(vector<boost::any>) == m["Vertebras"].type()) {
        vector<DetectSpineMRIResponseBodyDataVertebras> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vertebras"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectSpineMRIResponseBodyDataVertebras model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vertebras = make_shared<vector<DetectSpineMRIResponseBodyDataVertebras>>(expect1);
      }
    }
  }


  virtual ~DetectSpineMRIResponseBodyData() = default;
};
class DetectSpineMRIResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetectSpineMRIResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DetectSpineMRIResponseBody() {}

  explicit DetectSpineMRIResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectSpineMRIResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectSpineMRIResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectSpineMRIResponseBody() = default;
};
class DetectSpineMRIResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectSpineMRIResponseBody> body{};

  DetectSpineMRIResponse() {}

  explicit DetectSpineMRIResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectSpineMRIResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectSpineMRIResponseBody>(model1);
      }
    }
  }


  virtual ~DetectSpineMRIResponse() = default;
};
class FeedbackSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> feedback{};
  shared_ptr<string> sessionId{};

  FeedbackSessionRequest() {}

  explicit FeedbackSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<string>(boost::any_cast<string>(m["Feedback"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~FeedbackSessionRequest() = default;
};
class FeedbackSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  FeedbackSessionResponseBody() {}

  explicit FeedbackSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FeedbackSessionResponseBody() = default;
};
class FeedbackSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FeedbackSessionResponseBody> body{};

  FeedbackSessionResponse() {}

  explicit FeedbackSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FeedbackSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FeedbackSessionResponseBody>(model1);
      }
    }
  }


  virtual ~FeedbackSessionResponse() = default;
};
class GetAsyncJobResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetAsyncJobResultRequest() {}

  explicit GetAsyncJobResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetAsyncJobResultRequest() = default;
};
class GetAsyncJobResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> jobId{};
  shared_ptr<string> result{};
  shared_ptr<string> status{};

  GetAsyncJobResultResponseBodyData() {}

  explicit GetAsyncJobResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetAsyncJobResultResponseBodyData() = default;
};
class GetAsyncJobResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAsyncJobResultResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetAsyncJobResultResponseBody() {}

  explicit GetAsyncJobResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAsyncJobResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAsyncJobResultResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAsyncJobResultResponseBody() = default;
};
class GetAsyncJobResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAsyncJobResultResponseBody> body{};

  GetAsyncJobResultResponse() {}

  explicit GetAsyncJobResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsyncJobResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAsyncJobResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetAsyncJobResultResponse() = default;
};
class PredictCVDRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  PredictCVDRequestURLList() {}

  explicit PredictCVDRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~PredictCVDRequestURLList() = default;
};
class PredictCVDRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<PredictCVDRequestURLList>> URLList{};

  PredictCVDRequest() {}

  explicit PredictCVDRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<PredictCVDRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PredictCVDRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<PredictCVDRequestURLList>>(expect1);
      }
    }
  }


  virtual ~PredictCVDRequest() = default;
};
class PredictCVDAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  PredictCVDAdvanceRequestURLList() {}

  explicit PredictCVDAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~PredictCVDAdvanceRequestURLList() = default;
};
class PredictCVDAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<PredictCVDAdvanceRequestURLList>> URLList{};

  PredictCVDAdvanceRequest() {}

  explicit PredictCVDAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<PredictCVDAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PredictCVDAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<PredictCVDAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~PredictCVDAdvanceRequest() = default;
};
class PredictCVDResponseBodyDataLesionFeatureScore : public Darabonba::Model {
public:
  shared_ptr<vector<double>> aortaCalciumScore{};
  shared_ptr<vector<double>> aortaCalciumVolume{};
  shared_ptr<vector<double>> ascAoMaxDiam{};
  shared_ptr<vector<double>> ascendAortaLength{};
  shared_ptr<vector<double>> cardioThoracicRatio{};
  shared_ptr<vector<double>> coronaryCalciumScore{};
  shared_ptr<vector<double>> coronaryCalciumVol{};
  shared_ptr<vector<double>> deepFeature{};
  shared_ptr<vector<double>> eatHUMean{};
  shared_ptr<vector<double>> eatHUSTD{};
  shared_ptr<vector<double>> eatVolume{};
  shared_ptr<vector<double>> leftLungLowattRatio{};
  shared_ptr<vector<double>> myoEpiRatio{};
  shared_ptr<vector<double>> rightLungLowattRatio{};

  PredictCVDResponseBodyDataLesionFeatureScore() {}

  explicit PredictCVDResponseBodyDataLesionFeatureScore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aortaCalciumScore) {
      res["AortaCalciumScore"] = boost::any(*aortaCalciumScore);
    }
    if (aortaCalciumVolume) {
      res["AortaCalciumVolume"] = boost::any(*aortaCalciumVolume);
    }
    if (ascAoMaxDiam) {
      res["AscAoMaxDiam"] = boost::any(*ascAoMaxDiam);
    }
    if (ascendAortaLength) {
      res["AscendAortaLength"] = boost::any(*ascendAortaLength);
    }
    if (cardioThoracicRatio) {
      res["CardioThoracicRatio"] = boost::any(*cardioThoracicRatio);
    }
    if (coronaryCalciumScore) {
      res["CoronaryCalciumScore"] = boost::any(*coronaryCalciumScore);
    }
    if (coronaryCalciumVol) {
      res["CoronaryCalciumVol"] = boost::any(*coronaryCalciumVol);
    }
    if (deepFeature) {
      res["DeepFeature"] = boost::any(*deepFeature);
    }
    if (eatHUMean) {
      res["EatHUMean"] = boost::any(*eatHUMean);
    }
    if (eatHUSTD) {
      res["EatHUSTD"] = boost::any(*eatHUSTD);
    }
    if (eatVolume) {
      res["EatVolume"] = boost::any(*eatVolume);
    }
    if (leftLungLowattRatio) {
      res["LeftLungLowattRatio"] = boost::any(*leftLungLowattRatio);
    }
    if (myoEpiRatio) {
      res["MyoEpiRatio"] = boost::any(*myoEpiRatio);
    }
    if (rightLungLowattRatio) {
      res["RightLungLowattRatio"] = boost::any(*rightLungLowattRatio);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AortaCalciumScore") != m.end() && !m["AortaCalciumScore"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["AortaCalciumScore"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AortaCalciumScore"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      aortaCalciumScore = make_shared<vector<double>>(toVec1);
    }
    if (m.find("AortaCalciumVolume") != m.end() && !m["AortaCalciumVolume"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["AortaCalciumVolume"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AortaCalciumVolume"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      aortaCalciumVolume = make_shared<vector<double>>(toVec1);
    }
    if (m.find("AscAoMaxDiam") != m.end() && !m["AscAoMaxDiam"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["AscAoMaxDiam"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AscAoMaxDiam"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      ascAoMaxDiam = make_shared<vector<double>>(toVec1);
    }
    if (m.find("AscendAortaLength") != m.end() && !m["AscendAortaLength"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["AscendAortaLength"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AscendAortaLength"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      ascendAortaLength = make_shared<vector<double>>(toVec1);
    }
    if (m.find("CardioThoracicRatio") != m.end() && !m["CardioThoracicRatio"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["CardioThoracicRatio"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CardioThoracicRatio"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      cardioThoracicRatio = make_shared<vector<double>>(toVec1);
    }
    if (m.find("CoronaryCalciumScore") != m.end() && !m["CoronaryCalciumScore"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["CoronaryCalciumScore"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CoronaryCalciumScore"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      coronaryCalciumScore = make_shared<vector<double>>(toVec1);
    }
    if (m.find("CoronaryCalciumVol") != m.end() && !m["CoronaryCalciumVol"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["CoronaryCalciumVol"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CoronaryCalciumVol"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      coronaryCalciumVol = make_shared<vector<double>>(toVec1);
    }
    if (m.find("DeepFeature") != m.end() && !m["DeepFeature"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["DeepFeature"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeepFeature"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      deepFeature = make_shared<vector<double>>(toVec1);
    }
    if (m.find("EatHUMean") != m.end() && !m["EatHUMean"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["EatHUMean"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EatHUMean"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      eatHUMean = make_shared<vector<double>>(toVec1);
    }
    if (m.find("EatHUSTD") != m.end() && !m["EatHUSTD"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["EatHUSTD"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EatHUSTD"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      eatHUSTD = make_shared<vector<double>>(toVec1);
    }
    if (m.find("EatVolume") != m.end() && !m["EatVolume"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["EatVolume"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EatVolume"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      eatVolume = make_shared<vector<double>>(toVec1);
    }
    if (m.find("LeftLungLowattRatio") != m.end() && !m["LeftLungLowattRatio"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["LeftLungLowattRatio"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LeftLungLowattRatio"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      leftLungLowattRatio = make_shared<vector<double>>(toVec1);
    }
    if (m.find("MyoEpiRatio") != m.end() && !m["MyoEpiRatio"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["MyoEpiRatio"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MyoEpiRatio"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      myoEpiRatio = make_shared<vector<double>>(toVec1);
    }
    if (m.find("RightLungLowattRatio") != m.end() && !m["RightLungLowattRatio"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["RightLungLowattRatio"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RightLungLowattRatio"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      rightLungLowattRatio = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~PredictCVDResponseBodyDataLesionFeatureScore() = default;
};
class PredictCVDResponseBodyDataLesion : public Darabonba::Model {
public:
  shared_ptr<double> CVDProbability{};
  shared_ptr<PredictCVDResponseBodyDataLesionFeatureScore> featureScore{};
  shared_ptr<vector<string>> resultURL{};

  PredictCVDResponseBodyDataLesion() {}

  explicit PredictCVDResponseBodyDataLesion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CVDProbability) {
      res["CVDProbability"] = boost::any(*CVDProbability);
    }
    if (featureScore) {
      res["FeatureScore"] = featureScore ? boost::any(featureScore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resultURL) {
      res["ResultURL"] = boost::any(*resultURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CVDProbability") != m.end() && !m["CVDProbability"].empty()) {
      CVDProbability = make_shared<double>(boost::any_cast<double>(m["CVDProbability"]));
    }
    if (m.find("FeatureScore") != m.end() && !m["FeatureScore"].empty()) {
      if (typeid(map<string, boost::any>) == m["FeatureScore"].type()) {
        PredictCVDResponseBodyDataLesionFeatureScore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FeatureScore"]));
        featureScore = make_shared<PredictCVDResponseBodyDataLesionFeatureScore>(model1);
      }
    }
    if (m.find("ResultURL") != m.end() && !m["ResultURL"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResultURL"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResultURL"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resultURL = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PredictCVDResponseBodyDataLesion() = default;
};
class PredictCVDResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<PredictCVDResponseBodyDataLesion> lesion{};

  PredictCVDResponseBodyData() {}

  explicit PredictCVDResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesion) {
      res["Lesion"] = lesion ? boost::any(lesion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lesion") != m.end() && !m["Lesion"].empty()) {
      if (typeid(map<string, boost::any>) == m["Lesion"].type()) {
        PredictCVDResponseBodyDataLesion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Lesion"]));
        lesion = make_shared<PredictCVDResponseBodyDataLesion>(model1);
      }
    }
  }


  virtual ~PredictCVDResponseBodyData() = default;
};
class PredictCVDResponseBody : public Darabonba::Model {
public:
  shared_ptr<PredictCVDResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PredictCVDResponseBody() {}

  explicit PredictCVDResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        PredictCVDResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PredictCVDResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PredictCVDResponseBody() = default;
};
class PredictCVDResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PredictCVDResponseBody> body{};

  PredictCVDResponse() {}

  explicit PredictCVDResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PredictCVDResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PredictCVDResponseBody>(model1);
      }
    }
  }


  virtual ~PredictCVDResponse() = default;
};
class RunCTRegistrationRequestFloatingList : public Darabonba::Model {
public:
  shared_ptr<string> floatingURL{};

  RunCTRegistrationRequestFloatingList() {}

  explicit RunCTRegistrationRequestFloatingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (floatingURL) {
      res["FloatingURL"] = boost::any(*floatingURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FloatingURL") != m.end() && !m["FloatingURL"].empty()) {
      floatingURL = make_shared<string>(boost::any_cast<string>(m["FloatingURL"]));
    }
  }


  virtual ~RunCTRegistrationRequestFloatingList() = default;
};
class RunCTRegistrationRequestReferenceList : public Darabonba::Model {
public:
  shared_ptr<string> referenceURL{};

  RunCTRegistrationRequestReferenceList() {}

  explicit RunCTRegistrationRequestReferenceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (referenceURL) {
      res["ReferenceURL"] = boost::any(*referenceURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReferenceURL") != m.end() && !m["ReferenceURL"].empty()) {
      referenceURL = make_shared<string>(boost::any_cast<string>(m["ReferenceURL"]));
    }
  }


  virtual ~RunCTRegistrationRequestReferenceList() = default;
};
class RunCTRegistrationRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<vector<RunCTRegistrationRequestFloatingList>> floatingList{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<RunCTRegistrationRequestReferenceList>> referenceList{};

  RunCTRegistrationRequest() {}

  explicit RunCTRegistrationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (floatingList) {
      vector<boost::any> temp1;
      for(auto item1:*floatingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FloatingList"] = boost::any(temp1);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (referenceList) {
      vector<boost::any> temp1;
      for(auto item1:*referenceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReferenceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("FloatingList") != m.end() && !m["FloatingList"].empty()) {
      if (typeid(vector<boost::any>) == m["FloatingList"].type()) {
        vector<RunCTRegistrationRequestFloatingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FloatingList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunCTRegistrationRequestFloatingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        floatingList = make_shared<vector<RunCTRegistrationRequestFloatingList>>(expect1);
      }
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("ReferenceList") != m.end() && !m["ReferenceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ReferenceList"].type()) {
        vector<RunCTRegistrationRequestReferenceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReferenceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunCTRegistrationRequestReferenceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        referenceList = make_shared<vector<RunCTRegistrationRequestReferenceList>>(expect1);
      }
    }
  }


  virtual ~RunCTRegistrationRequest() = default;
};
class RunCTRegistrationAdvanceRequestFloatingList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> floatingURLObject{};

  RunCTRegistrationAdvanceRequestFloatingList() {}

  explicit RunCTRegistrationAdvanceRequestFloatingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (floatingURLObject) {
      res["FloatingURL"] = boost::any(*floatingURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FloatingURL") != m.end() && !m["FloatingURL"].empty()) {
      floatingURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FloatingURL"]));
    }
  }


  virtual ~RunCTRegistrationAdvanceRequestFloatingList() = default;
};
class RunCTRegistrationAdvanceRequestReferenceList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> referenceURLObject{};

  RunCTRegistrationAdvanceRequestReferenceList() {}

  explicit RunCTRegistrationAdvanceRequestReferenceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (referenceURLObject) {
      res["ReferenceURL"] = boost::any(*referenceURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReferenceURL") != m.end() && !m["ReferenceURL"].empty()) {
      referenceURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ReferenceURL"]));
    }
  }


  virtual ~RunCTRegistrationAdvanceRequestReferenceList() = default;
};
class RunCTRegistrationAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<vector<RunCTRegistrationAdvanceRequestFloatingList>> floatingList{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<RunCTRegistrationAdvanceRequestReferenceList>> referenceList{};

  RunCTRegistrationAdvanceRequest() {}

  explicit RunCTRegistrationAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (floatingList) {
      vector<boost::any> temp1;
      for(auto item1:*floatingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FloatingList"] = boost::any(temp1);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (referenceList) {
      vector<boost::any> temp1;
      for(auto item1:*referenceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReferenceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("FloatingList") != m.end() && !m["FloatingList"].empty()) {
      if (typeid(vector<boost::any>) == m["FloatingList"].type()) {
        vector<RunCTRegistrationAdvanceRequestFloatingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FloatingList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunCTRegistrationAdvanceRequestFloatingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        floatingList = make_shared<vector<RunCTRegistrationAdvanceRequestFloatingList>>(expect1);
      }
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("ReferenceList") != m.end() && !m["ReferenceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ReferenceList"].type()) {
        vector<RunCTRegistrationAdvanceRequestReferenceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReferenceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunCTRegistrationAdvanceRequestReferenceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        referenceList = make_shared<vector<RunCTRegistrationAdvanceRequestReferenceList>>(expect1);
      }
    }
  }


  virtual ~RunCTRegistrationAdvanceRequest() = default;
};
class RunCTRegistrationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> DUrl{};
  shared_ptr<string> NUrl{};

  RunCTRegistrationResponseBodyData() {}

  explicit RunCTRegistrationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DUrl) {
      res["DUrl"] = boost::any(*DUrl);
    }
    if (NUrl) {
      res["NUrl"] = boost::any(*NUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DUrl") != m.end() && !m["DUrl"].empty()) {
      DUrl = make_shared<string>(boost::any_cast<string>(m["DUrl"]));
    }
    if (m.find("NUrl") != m.end() && !m["NUrl"].empty()) {
      NUrl = make_shared<string>(boost::any_cast<string>(m["NUrl"]));
    }
  }


  virtual ~RunCTRegistrationResponseBodyData() = default;
};
class RunCTRegistrationResponseBody : public Darabonba::Model {
public:
  shared_ptr<RunCTRegistrationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RunCTRegistrationResponseBody() {}

  explicit RunCTRegistrationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RunCTRegistrationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RunCTRegistrationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RunCTRegistrationResponseBody() = default;
};
class RunCTRegistrationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunCTRegistrationResponseBody> body{};

  RunCTRegistrationResponse() {}

  explicit RunCTRegistrationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunCTRegistrationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunCTRegistrationResponseBody>(model1);
      }
    }
  }


  virtual ~RunCTRegistrationResponse() = default;
};
class RunMedQARequestAnswerImageDataList : public Darabonba::Model {
public:
  shared_ptr<string> answerImageData{};

  RunMedQARequestAnswerImageDataList() {}

  explicit RunMedQARequestAnswerImageDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerImageData) {
      res["AnswerImageData"] = boost::any(*answerImageData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerImageData") != m.end() && !m["AnswerImageData"].empty()) {
      answerImageData = make_shared<string>(boost::any_cast<string>(m["AnswerImageData"]));
    }
  }


  virtual ~RunMedQARequestAnswerImageDataList() = default;
};
class RunMedQARequestAnswerImageURLList : public Darabonba::Model {
public:
  shared_ptr<string> answerImageURL{};

  RunMedQARequestAnswerImageURLList() {}

  explicit RunMedQARequestAnswerImageURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerImageURL) {
      res["AnswerImageURL"] = boost::any(*answerImageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerImageURL") != m.end() && !m["AnswerImageURL"].empty()) {
      answerImageURL = make_shared<string>(boost::any_cast<string>(m["AnswerImageURL"]));
    }
  }


  virtual ~RunMedQARequestAnswerImageURLList() = default;
};
class RunMedQARequestAnswerTextList : public Darabonba::Model {
public:
  shared_ptr<string> answerText{};

  RunMedQARequestAnswerTextList() {}

  explicit RunMedQARequestAnswerTextList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerText) {
      res["AnswerText"] = boost::any(*answerText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerText") != m.end() && !m["AnswerText"].empty()) {
      answerText = make_shared<string>(boost::any_cast<string>(m["AnswerText"]));
    }
  }


  virtual ~RunMedQARequestAnswerTextList() = default;
};
class RunMedQARequest : public Darabonba::Model {
public:
  shared_ptr<vector<RunMedQARequestAnswerImageDataList>> answerImageDataList{};
  shared_ptr<vector<RunMedQARequestAnswerImageURLList>> answerImageURLList{};
  shared_ptr<vector<RunMedQARequestAnswerTextList>> answerTextList{};
  shared_ptr<string> department{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> questionType{};
  shared_ptr<string> sessionId{};

  RunMedQARequest() {}

  explicit RunMedQARequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerImageDataList) {
      vector<boost::any> temp1;
      for(auto item1:*answerImageDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AnswerImageDataList"] = boost::any(temp1);
    }
    if (answerImageURLList) {
      vector<boost::any> temp1;
      for(auto item1:*answerImageURLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AnswerImageURLList"] = boost::any(temp1);
    }
    if (answerTextList) {
      vector<boost::any> temp1;
      for(auto item1:*answerTextList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AnswerTextList"] = boost::any(temp1);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (questionType) {
      res["QuestionType"] = boost::any(*questionType);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerImageDataList") != m.end() && !m["AnswerImageDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["AnswerImageDataList"].type()) {
        vector<RunMedQARequestAnswerImageDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AnswerImageDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunMedQARequestAnswerImageDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        answerImageDataList = make_shared<vector<RunMedQARequestAnswerImageDataList>>(expect1);
      }
    }
    if (m.find("AnswerImageURLList") != m.end() && !m["AnswerImageURLList"].empty()) {
      if (typeid(vector<boost::any>) == m["AnswerImageURLList"].type()) {
        vector<RunMedQARequestAnswerImageURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AnswerImageURLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunMedQARequestAnswerImageURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        answerImageURLList = make_shared<vector<RunMedQARequestAnswerImageURLList>>(expect1);
      }
    }
    if (m.find("AnswerTextList") != m.end() && !m["AnswerTextList"].empty()) {
      if (typeid(vector<boost::any>) == m["AnswerTextList"].type()) {
        vector<RunMedQARequestAnswerTextList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AnswerTextList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunMedQARequestAnswerTextList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        answerTextList = make_shared<vector<RunMedQARequestAnswerTextList>>(expect1);
      }
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("QuestionType") != m.end() && !m["QuestionType"].empty()) {
      questionType = make_shared<string>(boost::any_cast<string>(m["QuestionType"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~RunMedQARequest() = default;
};
class RunMedQAAdvanceRequestAnswerImageDataList : public Darabonba::Model {
public:
  shared_ptr<string> answerImageData{};

  RunMedQAAdvanceRequestAnswerImageDataList() {}

  explicit RunMedQAAdvanceRequestAnswerImageDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerImageData) {
      res["AnswerImageData"] = boost::any(*answerImageData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerImageData") != m.end() && !m["AnswerImageData"].empty()) {
      answerImageData = make_shared<string>(boost::any_cast<string>(m["AnswerImageData"]));
    }
  }


  virtual ~RunMedQAAdvanceRequestAnswerImageDataList() = default;
};
class RunMedQAAdvanceRequestAnswerImageURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> answerImageURLObject{};

  RunMedQAAdvanceRequestAnswerImageURLList() {}

  explicit RunMedQAAdvanceRequestAnswerImageURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerImageURLObject) {
      res["AnswerImageURL"] = boost::any(*answerImageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerImageURL") != m.end() && !m["AnswerImageURL"].empty()) {
      answerImageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["AnswerImageURL"]));
    }
  }


  virtual ~RunMedQAAdvanceRequestAnswerImageURLList() = default;
};
class RunMedQAAdvanceRequestAnswerTextList : public Darabonba::Model {
public:
  shared_ptr<string> answerText{};

  RunMedQAAdvanceRequestAnswerTextList() {}

  explicit RunMedQAAdvanceRequestAnswerTextList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerText) {
      res["AnswerText"] = boost::any(*answerText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerText") != m.end() && !m["AnswerText"].empty()) {
      answerText = make_shared<string>(boost::any_cast<string>(m["AnswerText"]));
    }
  }


  virtual ~RunMedQAAdvanceRequestAnswerTextList() = default;
};
class RunMedQAAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<RunMedQAAdvanceRequestAnswerImageDataList>> answerImageDataList{};
  shared_ptr<vector<RunMedQAAdvanceRequestAnswerImageURLList>> answerImageURLList{};
  shared_ptr<vector<RunMedQAAdvanceRequestAnswerTextList>> answerTextList{};
  shared_ptr<string> department{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> questionType{};
  shared_ptr<string> sessionId{};

  RunMedQAAdvanceRequest() {}

  explicit RunMedQAAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerImageDataList) {
      vector<boost::any> temp1;
      for(auto item1:*answerImageDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AnswerImageDataList"] = boost::any(temp1);
    }
    if (answerImageURLList) {
      vector<boost::any> temp1;
      for(auto item1:*answerImageURLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AnswerImageURLList"] = boost::any(temp1);
    }
    if (answerTextList) {
      vector<boost::any> temp1;
      for(auto item1:*answerTextList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AnswerTextList"] = boost::any(temp1);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (questionType) {
      res["QuestionType"] = boost::any(*questionType);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerImageDataList") != m.end() && !m["AnswerImageDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["AnswerImageDataList"].type()) {
        vector<RunMedQAAdvanceRequestAnswerImageDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AnswerImageDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunMedQAAdvanceRequestAnswerImageDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        answerImageDataList = make_shared<vector<RunMedQAAdvanceRequestAnswerImageDataList>>(expect1);
      }
    }
    if (m.find("AnswerImageURLList") != m.end() && !m["AnswerImageURLList"].empty()) {
      if (typeid(vector<boost::any>) == m["AnswerImageURLList"].type()) {
        vector<RunMedQAAdvanceRequestAnswerImageURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AnswerImageURLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunMedQAAdvanceRequestAnswerImageURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        answerImageURLList = make_shared<vector<RunMedQAAdvanceRequestAnswerImageURLList>>(expect1);
      }
    }
    if (m.find("AnswerTextList") != m.end() && !m["AnswerTextList"].empty()) {
      if (typeid(vector<boost::any>) == m["AnswerTextList"].type()) {
        vector<RunMedQAAdvanceRequestAnswerTextList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AnswerTextList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunMedQAAdvanceRequestAnswerTextList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        answerTextList = make_shared<vector<RunMedQAAdvanceRequestAnswerTextList>>(expect1);
      }
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("QuestionType") != m.end() && !m["QuestionType"].empty()) {
      questionType = make_shared<string>(boost::any_cast<string>(m["QuestionType"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~RunMedQAAdvanceRequest() = default;
};
class RunMedQAResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> answerType{};
  shared_ptr<vector<string>> options{};
  shared_ptr<string> question{};
  shared_ptr<string> questionType{};
  shared_ptr<map<string, string>> reports{};
  shared_ptr<string> sessionId{};

  RunMedQAResponseBodyData() {}

  explicit RunMedQAResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerType) {
      res["AnswerType"] = boost::any(*answerType);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (question) {
      res["Question"] = boost::any(*question);
    }
    if (questionType) {
      res["QuestionType"] = boost::any(*questionType);
    }
    if (reports) {
      res["Reports"] = boost::any(*reports);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerType") != m.end() && !m["AnswerType"].empty()) {
      answerType = make_shared<string>(boost::any_cast<string>(m["AnswerType"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Options"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Options"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      options = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Question") != m.end() && !m["Question"].empty()) {
      question = make_shared<string>(boost::any_cast<string>(m["Question"]));
    }
    if (m.find("QuestionType") != m.end() && !m["QuestionType"].empty()) {
      questionType = make_shared<string>(boost::any_cast<string>(m["QuestionType"]));
    }
    if (m.find("Reports") != m.end() && !m["Reports"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Reports"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      reports = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~RunMedQAResponseBodyData() = default;
};
class RunMedQAResponseBody : public Darabonba::Model {
public:
  shared_ptr<RunMedQAResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RunMedQAResponseBody() {}

  explicit RunMedQAResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RunMedQAResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RunMedQAResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RunMedQAResponseBody() = default;
};
class RunMedQAResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunMedQAResponseBody> body{};

  RunMedQAResponse() {}

  explicit RunMedQAResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunMedQAResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunMedQAResponseBody>(model1);
      }
    }
  }


  virtual ~RunMedQAResponse() = default;
};
class ScreenCRCRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  ScreenCRCRequestURLList() {}

  explicit ScreenCRCRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~ScreenCRCRequestURLList() = default;
};
class ScreenCRCRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<ScreenCRCRequestURLList>> URLList{};

  ScreenCRCRequest() {}

  explicit ScreenCRCRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<ScreenCRCRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenCRCRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<ScreenCRCRequestURLList>>(expect1);
      }
    }
  }


  virtual ~ScreenCRCRequest() = default;
};
class ScreenCRCAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  ScreenCRCAdvanceRequestURLList() {}

  explicit ScreenCRCAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~ScreenCRCAdvanceRequestURLList() = default;
};
class ScreenCRCAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<ScreenCRCAdvanceRequestURLList>> URLList{};

  ScreenCRCAdvanceRequest() {}

  explicit ScreenCRCAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<ScreenCRCAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenCRCAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<ScreenCRCAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~ScreenCRCAdvanceRequest() = default;
};
class ScreenCRCResponseBodyDataLesion : public Darabonba::Model {
public:
  shared_ptr<string> CRCVolume{};
  shared_ptr<string> colorectumVolume{};
  shared_ptr<string> mask{};
  shared_ptr<string> probabilities{};

  ScreenCRCResponseBodyDataLesion() {}

  explicit ScreenCRCResponseBodyDataLesion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CRCVolume) {
      res["CRCVolume"] = boost::any(*CRCVolume);
    }
    if (colorectumVolume) {
      res["ColorectumVolume"] = boost::any(*colorectumVolume);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (probabilities) {
      res["Probabilities"] = boost::any(*probabilities);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CRCVolume") != m.end() && !m["CRCVolume"].empty()) {
      CRCVolume = make_shared<string>(boost::any_cast<string>(m["CRCVolume"]));
    }
    if (m.find("ColorectumVolume") != m.end() && !m["ColorectumVolume"].empty()) {
      colorectumVolume = make_shared<string>(boost::any_cast<string>(m["ColorectumVolume"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("Probabilities") != m.end() && !m["Probabilities"].empty()) {
      probabilities = make_shared<string>(boost::any_cast<string>(m["Probabilities"]));
    }
  }


  virtual ~ScreenCRCResponseBodyDataLesion() = default;
};
class ScreenCRCResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ScreenCRCResponseBodyDataLesion> lesion{};

  ScreenCRCResponseBodyData() {}

  explicit ScreenCRCResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesion) {
      res["Lesion"] = lesion ? boost::any(lesion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lesion") != m.end() && !m["Lesion"].empty()) {
      if (typeid(map<string, boost::any>) == m["Lesion"].type()) {
        ScreenCRCResponseBodyDataLesion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Lesion"]));
        lesion = make_shared<ScreenCRCResponseBodyDataLesion>(model1);
      }
    }
  }


  virtual ~ScreenCRCResponseBodyData() = default;
};
class ScreenCRCResponseBody : public Darabonba::Model {
public:
  shared_ptr<ScreenCRCResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ScreenCRCResponseBody() {}

  explicit ScreenCRCResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ScreenCRCResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ScreenCRCResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ScreenCRCResponseBody() = default;
};
class ScreenCRCResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ScreenCRCResponseBody> body{};

  ScreenCRCResponse() {}

  explicit ScreenCRCResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScreenCRCResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScreenCRCResponseBody>(model1);
      }
    }
  }


  virtual ~ScreenCRCResponse() = default;
};
class ScreenChestCTRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  ScreenChestCTRequestURLList() {}

  explicit ScreenChestCTRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~ScreenChestCTRequestURLList() = default;
};
class ScreenChestCTRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<long> mask{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<ScreenChestCTRequestURLList>> URLList{};
  shared_ptr<long> verbose{};

  ScreenChestCTRequest() {}

  explicit ScreenChestCTRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<long>(boost::any_cast<long>(m["Mask"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<ScreenChestCTRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenChestCTRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<ScreenChestCTRequestURLList>>(expect1);
      }
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<long>(boost::any_cast<long>(m["Verbose"]));
    }
  }


  virtual ~ScreenChestCTRequest() = default;
};
class ScreenChestCTAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  ScreenChestCTAdvanceRequestURLList() {}

  explicit ScreenChestCTAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~ScreenChestCTAdvanceRequestURLList() = default;
};
class ScreenChestCTAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<long> mask{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<ScreenChestCTAdvanceRequestURLList>> URLList{};
  shared_ptr<long> verbose{};

  ScreenChestCTAdvanceRequest() {}

  explicit ScreenChestCTAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<long>(boost::any_cast<long>(m["Mask"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<ScreenChestCTAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenChestCTAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<ScreenChestCTAdvanceRequestURLList>>(expect1);
      }
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<long>(boost::any_cast<long>(m["Verbose"]));
    }
  }


  virtual ~ScreenChestCTAdvanceRequest() = default;
};
class ScreenChestCTResponseBodyDataAnalyzeChestVesselAortaInfo : public Darabonba::Model {
public:
  shared_ptr<vector<double>> area{};
  shared_ptr<vector<vector<double>>> coordinates{};
  shared_ptr<long> labelValue{};
  shared_ptr<double> maxArea{};
  shared_ptr<long> maxAreaIndex{};
  shared_ptr<double> maxDiameter{};

  ScreenChestCTResponseBodyDataAnalyzeChestVesselAortaInfo() {}

  explicit ScreenChestCTResponseBodyDataAnalyzeChestVesselAortaInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (area) {
      res["Area"] = boost::any(*area);
    }
    if (coordinates) {
      res["Coordinates"] = boost::any(*coordinates);
    }
    if (labelValue) {
      res["LabelValue"] = boost::any(*labelValue);
    }
    if (maxArea) {
      res["MaxArea"] = boost::any(*maxArea);
    }
    if (maxAreaIndex) {
      res["MaxAreaIndex"] = boost::any(*maxAreaIndex);
    }
    if (maxDiameter) {
      res["MaxDiameter"] = boost::any(*maxDiameter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Area") != m.end() && !m["Area"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Area"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Area"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      area = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Coordinates") != m.end() && !m["Coordinates"].empty()) {
      vector<vector<double>> toVec1;
      if (typeid(vector<boost::any>) == m["Coordinates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Coordinates"]);
        for (auto item:vec1) {
          vector<double> toVec2;
          if (typeid(vector<boost::any>) == item.type()) {
            vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item);
            for (auto item:vec2) {
               toVec2.push_back(boost::any_cast<double>(item));
            }
          }
           toVec1 = toVec2;
        }
      }
      coordinates = make_shared<vector<vector<double>>>(toVec1);
    }
    if (m.find("LabelValue") != m.end() && !m["LabelValue"].empty()) {
      labelValue = make_shared<long>(boost::any_cast<long>(m["LabelValue"]));
    }
    if (m.find("MaxArea") != m.end() && !m["MaxArea"].empty()) {
      maxArea = make_shared<double>(boost::any_cast<double>(m["MaxArea"]));
    }
    if (m.find("MaxAreaIndex") != m.end() && !m["MaxAreaIndex"].empty()) {
      maxAreaIndex = make_shared<long>(boost::any_cast<long>(m["MaxAreaIndex"]));
    }
    if (m.find("MaxDiameter") != m.end() && !m["MaxDiameter"].empty()) {
      maxDiameter = make_shared<double>(boost::any_cast<double>(m["MaxDiameter"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataAnalyzeChestVesselAortaInfo() = default;
};
class ScreenChestCTResponseBodyDataAnalyzeChestVesselPulmonaryInfo : public Darabonba::Model {
public:
  shared_ptr<vector<double>> area{};
  shared_ptr<vector<vector<double>>> coordinates{};
  shared_ptr<long> labelValue{};
  shared_ptr<double> maxArea{};
  shared_ptr<long> maxAreaIndex{};
  shared_ptr<double> maxDiameter{};
  shared_ptr<double> nearestAortaArea{};

  ScreenChestCTResponseBodyDataAnalyzeChestVesselPulmonaryInfo() {}

  explicit ScreenChestCTResponseBodyDataAnalyzeChestVesselPulmonaryInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (area) {
      res["Area"] = boost::any(*area);
    }
    if (coordinates) {
      res["Coordinates"] = boost::any(*coordinates);
    }
    if (labelValue) {
      res["LabelValue"] = boost::any(*labelValue);
    }
    if (maxArea) {
      res["MaxArea"] = boost::any(*maxArea);
    }
    if (maxAreaIndex) {
      res["MaxAreaIndex"] = boost::any(*maxAreaIndex);
    }
    if (maxDiameter) {
      res["MaxDiameter"] = boost::any(*maxDiameter);
    }
    if (nearestAortaArea) {
      res["NearestAortaArea"] = boost::any(*nearestAortaArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Area") != m.end() && !m["Area"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Area"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Area"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      area = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Coordinates") != m.end() && !m["Coordinates"].empty()) {
      vector<vector<double>> toVec1;
      if (typeid(vector<boost::any>) == m["Coordinates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Coordinates"]);
        for (auto item:vec1) {
          vector<double> toVec2;
          if (typeid(vector<boost::any>) == item.type()) {
            vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item);
            for (auto item:vec2) {
               toVec2.push_back(boost::any_cast<double>(item));
            }
          }
           toVec1 = toVec2;
        }
      }
      coordinates = make_shared<vector<vector<double>>>(toVec1);
    }
    if (m.find("LabelValue") != m.end() && !m["LabelValue"].empty()) {
      labelValue = make_shared<long>(boost::any_cast<long>(m["LabelValue"]));
    }
    if (m.find("MaxArea") != m.end() && !m["MaxArea"].empty()) {
      maxArea = make_shared<double>(boost::any_cast<double>(m["MaxArea"]));
    }
    if (m.find("MaxAreaIndex") != m.end() && !m["MaxAreaIndex"].empty()) {
      maxAreaIndex = make_shared<long>(boost::any_cast<long>(m["MaxAreaIndex"]));
    }
    if (m.find("MaxDiameter") != m.end() && !m["MaxDiameter"].empty()) {
      maxDiameter = make_shared<double>(boost::any_cast<double>(m["MaxDiameter"]));
    }
    if (m.find("NearestAortaArea") != m.end() && !m["NearestAortaArea"].empty()) {
      nearestAortaArea = make_shared<double>(boost::any_cast<double>(m["NearestAortaArea"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataAnalyzeChestVesselPulmonaryInfo() = default;
};
class ScreenChestCTResponseBodyDataAnalyzeChestVessel : public Darabonba::Model {
public:
  shared_ptr<ScreenChestCTResponseBodyDataAnalyzeChestVesselAortaInfo> aortaInfo{};
  shared_ptr<ScreenChestCTResponseBodyDataAnalyzeChestVesselPulmonaryInfo> pulmonaryInfo{};
  shared_ptr<string> resultURL{};

  ScreenChestCTResponseBodyDataAnalyzeChestVessel() {}

  explicit ScreenChestCTResponseBodyDataAnalyzeChestVessel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aortaInfo) {
      res["AortaInfo"] = aortaInfo ? boost::any(aortaInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pulmonaryInfo) {
      res["PulmonaryInfo"] = pulmonaryInfo ? boost::any(pulmonaryInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resultURL) {
      res["ResultURL"] = boost::any(*resultURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AortaInfo") != m.end() && !m["AortaInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AortaInfo"].type()) {
        ScreenChestCTResponseBodyDataAnalyzeChestVesselAortaInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AortaInfo"]));
        aortaInfo = make_shared<ScreenChestCTResponseBodyDataAnalyzeChestVesselAortaInfo>(model1);
      }
    }
    if (m.find("PulmonaryInfo") != m.end() && !m["PulmonaryInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PulmonaryInfo"].type()) {
        ScreenChestCTResponseBodyDataAnalyzeChestVesselPulmonaryInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PulmonaryInfo"]));
        pulmonaryInfo = make_shared<ScreenChestCTResponseBodyDataAnalyzeChestVesselPulmonaryInfo>(model1);
      }
    }
    if (m.find("ResultURL") != m.end() && !m["ResultURL"].empty()) {
      resultURL = make_shared<string>(boost::any_cast<string>(m["ResultURL"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataAnalyzeChestVessel() = default;
};
class ScreenChestCTResponseBodyDataCACSDetections : public Darabonba::Model {
public:
  shared_ptr<vector<long>> calciumCenter{};
  shared_ptr<long> calciumId{};
  shared_ptr<double> calciumScore{};
  shared_ptr<double> calciumVolume{};

  ScreenChestCTResponseBodyDataCACSDetections() {}

  explicit ScreenChestCTResponseBodyDataCACSDetections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calciumCenter) {
      res["CalciumCenter"] = boost::any(*calciumCenter);
    }
    if (calciumId) {
      res["CalciumId"] = boost::any(*calciumId);
    }
    if (calciumScore) {
      res["CalciumScore"] = boost::any(*calciumScore);
    }
    if (calciumVolume) {
      res["CalciumVolume"] = boost::any(*calciumVolume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalciumCenter") != m.end() && !m["CalciumCenter"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CalciumCenter"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CalciumCenter"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      calciumCenter = make_shared<vector<long>>(toVec1);
    }
    if (m.find("CalciumId") != m.end() && !m["CalciumId"].empty()) {
      calciumId = make_shared<long>(boost::any_cast<long>(m["CalciumId"]));
    }
    if (m.find("CalciumScore") != m.end() && !m["CalciumScore"].empty()) {
      calciumScore = make_shared<double>(boost::any_cast<double>(m["CalciumScore"]));
    }
    if (m.find("CalciumVolume") != m.end() && !m["CalciumVolume"].empty()) {
      calciumVolume = make_shared<double>(boost::any_cast<double>(m["CalciumVolume"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataCACSDetections() = default;
};
class ScreenChestCTResponseBodyDataCACS : public Darabonba::Model {
public:
  shared_ptr<vector<ScreenChestCTResponseBodyDataCACSDetections>> detections{};
  shared_ptr<string> resultUrl{};
  shared_ptr<string> score{};
  shared_ptr<string> seriesInstanceUID{};
  shared_ptr<string> volumeScore{};

  ScreenChestCTResponseBodyDataCACS() {}

  explicit ScreenChestCTResponseBodyDataCACS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detections) {
      vector<boost::any> temp1;
      for(auto item1:*detections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Detections"] = boost::any(temp1);
    }
    if (resultUrl) {
      res["ResultUrl"] = boost::any(*resultUrl);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (seriesInstanceUID) {
      res["SeriesInstanceUID"] = boost::any(*seriesInstanceUID);
    }
    if (volumeScore) {
      res["VolumeScore"] = boost::any(*volumeScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detections") != m.end() && !m["Detections"].empty()) {
      if (typeid(vector<boost::any>) == m["Detections"].type()) {
        vector<ScreenChestCTResponseBodyDataCACSDetections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Detections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenChestCTResponseBodyDataCACSDetections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detections = make_shared<vector<ScreenChestCTResponseBodyDataCACSDetections>>(expect1);
      }
    }
    if (m.find("ResultUrl") != m.end() && !m["ResultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["ResultUrl"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("SeriesInstanceUID") != m.end() && !m["SeriesInstanceUID"].empty()) {
      seriesInstanceUID = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUID"]));
    }
    if (m.find("VolumeScore") != m.end() && !m["VolumeScore"].empty()) {
      volumeScore = make_shared<string>(boost::any_cast<string>(m["VolumeScore"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataCACS() = default;
};
class ScreenChestCTResponseBodyDataCalcBMDDetections : public Darabonba::Model {
public:
  shared_ptr<double> vertBMD{};
  shared_ptr<double> vertCategory{};
  shared_ptr<string> vertId{};
  shared_ptr<double> vertTScore{};
  shared_ptr<double> vertZScore{};

  ScreenChestCTResponseBodyDataCalcBMDDetections() {}

  explicit ScreenChestCTResponseBodyDataCalcBMDDetections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vertBMD) {
      res["VertBMD"] = boost::any(*vertBMD);
    }
    if (vertCategory) {
      res["VertCategory"] = boost::any(*vertCategory);
    }
    if (vertId) {
      res["VertId"] = boost::any(*vertId);
    }
    if (vertTScore) {
      res["VertTScore"] = boost::any(*vertTScore);
    }
    if (vertZScore) {
      res["VertZScore"] = boost::any(*vertZScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VertBMD") != m.end() && !m["VertBMD"].empty()) {
      vertBMD = make_shared<double>(boost::any_cast<double>(m["VertBMD"]));
    }
    if (m.find("VertCategory") != m.end() && !m["VertCategory"].empty()) {
      vertCategory = make_shared<double>(boost::any_cast<double>(m["VertCategory"]));
    }
    if (m.find("VertId") != m.end() && !m["VertId"].empty()) {
      vertId = make_shared<string>(boost::any_cast<string>(m["VertId"]));
    }
    if (m.find("VertTScore") != m.end() && !m["VertTScore"].empty()) {
      vertTScore = make_shared<double>(boost::any_cast<double>(m["VertTScore"]));
    }
    if (m.find("VertZScore") != m.end() && !m["VertZScore"].empty()) {
      vertZScore = make_shared<double>(boost::any_cast<double>(m["VertZScore"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataCalcBMDDetections() = default;
};
class ScreenChestCTResponseBodyDataCalcBMD : public Darabonba::Model {
public:
  shared_ptr<vector<ScreenChestCTResponseBodyDataCalcBMDDetections>> detections{};
  shared_ptr<vector<double>> origin{};
  shared_ptr<string> resultURL{};
  shared_ptr<string> seriesInstanceUid{};
  shared_ptr<vector<double>> spacing{};

  ScreenChestCTResponseBodyDataCalcBMD() {}

  explicit ScreenChestCTResponseBodyDataCalcBMD(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detections) {
      vector<boost::any> temp1;
      for(auto item1:*detections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Detections"] = boost::any(temp1);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (resultURL) {
      res["ResultURL"] = boost::any(*resultURL);
    }
    if (seriesInstanceUid) {
      res["SeriesInstanceUid"] = boost::any(*seriesInstanceUid);
    }
    if (spacing) {
      res["Spacing"] = boost::any(*spacing);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detections") != m.end() && !m["Detections"].empty()) {
      if (typeid(vector<boost::any>) == m["Detections"].type()) {
        vector<ScreenChestCTResponseBodyDataCalcBMDDetections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Detections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenChestCTResponseBodyDataCalcBMDDetections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detections = make_shared<vector<ScreenChestCTResponseBodyDataCalcBMDDetections>>(expect1);
      }
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Origin"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Origin"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      origin = make_shared<vector<double>>(toVec1);
    }
    if (m.find("ResultURL") != m.end() && !m["ResultURL"].empty()) {
      resultURL = make_shared<string>(boost::any_cast<string>(m["ResultURL"]));
    }
    if (m.find("SeriesInstanceUid") != m.end() && !m["SeriesInstanceUid"].empty()) {
      seriesInstanceUid = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUid"]));
    }
    if (m.find("Spacing") != m.end() && !m["Spacing"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Spacing"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Spacing"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      spacing = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~ScreenChestCTResponseBodyDataCalcBMD() = default;
};
class ScreenChestCTResponseBodyDataCovid : public Darabonba::Model {
public:
  shared_ptr<string> lesionRatio{};
  shared_ptr<string> mask{};
  shared_ptr<string> newProbability{};
  shared_ptr<string> normalProbability{};
  shared_ptr<string> otherProbability{};
  shared_ptr<string> seriesInstanceUID{};

  ScreenChestCTResponseBodyDataCovid() {}

  explicit ScreenChestCTResponseBodyDataCovid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesionRatio) {
      res["LesionRatio"] = boost::any(*lesionRatio);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (newProbability) {
      res["NewProbability"] = boost::any(*newProbability);
    }
    if (normalProbability) {
      res["NormalProbability"] = boost::any(*normalProbability);
    }
    if (otherProbability) {
      res["OtherProbability"] = boost::any(*otherProbability);
    }
    if (seriesInstanceUID) {
      res["SeriesInstanceUID"] = boost::any(*seriesInstanceUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LesionRatio") != m.end() && !m["LesionRatio"].empty()) {
      lesionRatio = make_shared<string>(boost::any_cast<string>(m["LesionRatio"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("NewProbability") != m.end() && !m["NewProbability"].empty()) {
      newProbability = make_shared<string>(boost::any_cast<string>(m["NewProbability"]));
    }
    if (m.find("NormalProbability") != m.end() && !m["NormalProbability"].empty()) {
      normalProbability = make_shared<string>(boost::any_cast<string>(m["NormalProbability"]));
    }
    if (m.find("OtherProbability") != m.end() && !m["OtherProbability"].empty()) {
      otherProbability = make_shared<string>(boost::any_cast<string>(m["OtherProbability"]));
    }
    if (m.find("SeriesInstanceUID") != m.end() && !m["SeriesInstanceUID"].empty()) {
      seriesInstanceUID = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUID"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataCovid() = default;
};
class ScreenChestCTResponseBodyDataDetectLiverSteatosisDetections : public Darabonba::Model {
public:
  shared_ptr<double> liverHU{};
  shared_ptr<double> liverROI1{};
  shared_ptr<double> liverROI2{};
  shared_ptr<double> liverROI3{};
  shared_ptr<double> liverSlice{};
  shared_ptr<double> liverSpleenDifference{};
  shared_ptr<double> liverSpleenRatio{};
  shared_ptr<double> liverVolume{};
  shared_ptr<string> prediction{};
  shared_ptr<double> probability{};
  shared_ptr<vector<long>> ROI1Center{};
  shared_ptr<vector<long>> ROI2Center{};
  shared_ptr<vector<long>> ROI3Center{};
  shared_ptr<long> radius{};
  shared_ptr<vector<long>> spleenCenter{};
  shared_ptr<double> spleenHU{};
  shared_ptr<double> spleenROI{};
  shared_ptr<double> spleenSlice{};
  shared_ptr<double> spleenVolume{};

  ScreenChestCTResponseBodyDataDetectLiverSteatosisDetections() {}

  explicit ScreenChestCTResponseBodyDataDetectLiverSteatosisDetections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liverHU) {
      res["LiverHU"] = boost::any(*liverHU);
    }
    if (liverROI1) {
      res["LiverROI1"] = boost::any(*liverROI1);
    }
    if (liverROI2) {
      res["LiverROI2"] = boost::any(*liverROI2);
    }
    if (liverROI3) {
      res["LiverROI3"] = boost::any(*liverROI3);
    }
    if (liverSlice) {
      res["LiverSlice"] = boost::any(*liverSlice);
    }
    if (liverSpleenDifference) {
      res["LiverSpleenDifference"] = boost::any(*liverSpleenDifference);
    }
    if (liverSpleenRatio) {
      res["LiverSpleenRatio"] = boost::any(*liverSpleenRatio);
    }
    if (liverVolume) {
      res["LiverVolume"] = boost::any(*liverVolume);
    }
    if (prediction) {
      res["Prediction"] = boost::any(*prediction);
    }
    if (probability) {
      res["Probability"] = boost::any(*probability);
    }
    if (ROI1Center) {
      res["ROI1Center"] = boost::any(*ROI1Center);
    }
    if (ROI2Center) {
      res["ROI2Center"] = boost::any(*ROI2Center);
    }
    if (ROI3Center) {
      res["ROI3Center"] = boost::any(*ROI3Center);
    }
    if (radius) {
      res["Radius"] = boost::any(*radius);
    }
    if (spleenCenter) {
      res["SpleenCenter"] = boost::any(*spleenCenter);
    }
    if (spleenHU) {
      res["SpleenHU"] = boost::any(*spleenHU);
    }
    if (spleenROI) {
      res["SpleenROI"] = boost::any(*spleenROI);
    }
    if (spleenSlice) {
      res["SpleenSlice"] = boost::any(*spleenSlice);
    }
    if (spleenVolume) {
      res["SpleenVolume"] = boost::any(*spleenVolume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiverHU") != m.end() && !m["LiverHU"].empty()) {
      liverHU = make_shared<double>(boost::any_cast<double>(m["LiverHU"]));
    }
    if (m.find("LiverROI1") != m.end() && !m["LiverROI1"].empty()) {
      liverROI1 = make_shared<double>(boost::any_cast<double>(m["LiverROI1"]));
    }
    if (m.find("LiverROI2") != m.end() && !m["LiverROI2"].empty()) {
      liverROI2 = make_shared<double>(boost::any_cast<double>(m["LiverROI2"]));
    }
    if (m.find("LiverROI3") != m.end() && !m["LiverROI3"].empty()) {
      liverROI3 = make_shared<double>(boost::any_cast<double>(m["LiverROI3"]));
    }
    if (m.find("LiverSlice") != m.end() && !m["LiverSlice"].empty()) {
      liverSlice = make_shared<double>(boost::any_cast<double>(m["LiverSlice"]));
    }
    if (m.find("LiverSpleenDifference") != m.end() && !m["LiverSpleenDifference"].empty()) {
      liverSpleenDifference = make_shared<double>(boost::any_cast<double>(m["LiverSpleenDifference"]));
    }
    if (m.find("LiverSpleenRatio") != m.end() && !m["LiverSpleenRatio"].empty()) {
      liverSpleenRatio = make_shared<double>(boost::any_cast<double>(m["LiverSpleenRatio"]));
    }
    if (m.find("LiverVolume") != m.end() && !m["LiverVolume"].empty()) {
      liverVolume = make_shared<double>(boost::any_cast<double>(m["LiverVolume"]));
    }
    if (m.find("Prediction") != m.end() && !m["Prediction"].empty()) {
      prediction = make_shared<string>(boost::any_cast<string>(m["Prediction"]));
    }
    if (m.find("Probability") != m.end() && !m["Probability"].empty()) {
      probability = make_shared<double>(boost::any_cast<double>(m["Probability"]));
    }
    if (m.find("ROI1Center") != m.end() && !m["ROI1Center"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ROI1Center"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ROI1Center"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ROI1Center = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ROI2Center") != m.end() && !m["ROI2Center"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ROI2Center"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ROI2Center"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ROI2Center = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ROI3Center") != m.end() && !m["ROI3Center"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ROI3Center"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ROI3Center"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ROI3Center = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Radius") != m.end() && !m["Radius"].empty()) {
      radius = make_shared<long>(boost::any_cast<long>(m["Radius"]));
    }
    if (m.find("SpleenCenter") != m.end() && !m["SpleenCenter"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SpleenCenter"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SpleenCenter"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      spleenCenter = make_shared<vector<long>>(toVec1);
    }
    if (m.find("SpleenHU") != m.end() && !m["SpleenHU"].empty()) {
      spleenHU = make_shared<double>(boost::any_cast<double>(m["SpleenHU"]));
    }
    if (m.find("SpleenROI") != m.end() && !m["SpleenROI"].empty()) {
      spleenROI = make_shared<double>(boost::any_cast<double>(m["SpleenROI"]));
    }
    if (m.find("SpleenSlice") != m.end() && !m["SpleenSlice"].empty()) {
      spleenSlice = make_shared<double>(boost::any_cast<double>(m["SpleenSlice"]));
    }
    if (m.find("SpleenVolume") != m.end() && !m["SpleenVolume"].empty()) {
      spleenVolume = make_shared<double>(boost::any_cast<double>(m["SpleenVolume"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataDetectLiverSteatosisDetections() = default;
};
class ScreenChestCTResponseBodyDataDetectLiverSteatosis : public Darabonba::Model {
public:
  shared_ptr<vector<ScreenChestCTResponseBodyDataDetectLiverSteatosisDetections>> detections{};
  shared_ptr<vector<double>> origin{};
  shared_ptr<string> seriesInstanceUid{};
  shared_ptr<vector<double>> spacing{};

  ScreenChestCTResponseBodyDataDetectLiverSteatosis() {}

  explicit ScreenChestCTResponseBodyDataDetectLiverSteatosis(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detections) {
      vector<boost::any> temp1;
      for(auto item1:*detections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Detections"] = boost::any(temp1);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (seriesInstanceUid) {
      res["SeriesInstanceUid"] = boost::any(*seriesInstanceUid);
    }
    if (spacing) {
      res["Spacing"] = boost::any(*spacing);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detections") != m.end() && !m["Detections"].empty()) {
      if (typeid(vector<boost::any>) == m["Detections"].type()) {
        vector<ScreenChestCTResponseBodyDataDetectLiverSteatosisDetections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Detections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenChestCTResponseBodyDataDetectLiverSteatosisDetections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detections = make_shared<vector<ScreenChestCTResponseBodyDataDetectLiverSteatosisDetections>>(expect1);
      }
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Origin"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Origin"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      origin = make_shared<vector<double>>(toVec1);
    }
    if (m.find("SeriesInstanceUid") != m.end() && !m["SeriesInstanceUid"].empty()) {
      seriesInstanceUid = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUid"]));
    }
    if (m.find("Spacing") != m.end() && !m["Spacing"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Spacing"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Spacing"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      spacing = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~ScreenChestCTResponseBodyDataDetectLiverSteatosis() = default;
};
class ScreenChestCTResponseBodyDataDetectLymphLesions : public Darabonba::Model {
public:
  shared_ptr<vector<double>> boxes{};
  shared_ptr<vector<double>> diametermm{};
  shared_ptr<long> keySlice{};
  shared_ptr<vector<vector<double>>> recist{};
  shared_ptr<double> score{};

  ScreenChestCTResponseBodyDataDetectLymphLesions() {}

  explicit ScreenChestCTResponseBodyDataDetectLymphLesions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boxes) {
      res["Boxes"] = boost::any(*boxes);
    }
    if (diametermm) {
      res["Diametermm"] = boost::any(*diametermm);
    }
    if (keySlice) {
      res["KeySlice"] = boost::any(*keySlice);
    }
    if (recist) {
      res["Recist"] = boost::any(*recist);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Boxes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      boxes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Diametermm") != m.end() && !m["Diametermm"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Diametermm"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Diametermm"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      diametermm = make_shared<vector<double>>(toVec1);
    }
    if (m.find("KeySlice") != m.end() && !m["KeySlice"].empty()) {
      keySlice = make_shared<long>(boost::any_cast<long>(m["KeySlice"]));
    }
    if (m.find("Recist") != m.end() && !m["Recist"].empty()) {
      vector<vector<double>> toVec1;
      if (typeid(vector<boost::any>) == m["Recist"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Recist"]);
        for (auto item:vec1) {
          vector<double> toVec2;
          if (typeid(vector<boost::any>) == item.type()) {
            vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item);
            for (auto item:vec2) {
               toVec2.push_back(boost::any_cast<double>(item));
            }
          }
           toVec1 = toVec2;
        }
      }
      recist = make_shared<vector<vector<double>>>(toVec1);
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataDetectLymphLesions() = default;
};
class ScreenChestCTResponseBodyDataDetectLymph : public Darabonba::Model {
public:
  shared_ptr<vector<ScreenChestCTResponseBodyDataDetectLymphLesions>> lesions{};
  shared_ptr<string> seriesInstanceUID{};

  ScreenChestCTResponseBodyDataDetectLymph() {}

  explicit ScreenChestCTResponseBodyDataDetectLymph(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesions) {
      vector<boost::any> temp1;
      for(auto item1:*lesions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Lesions"] = boost::any(temp1);
    }
    if (seriesInstanceUID) {
      res["SeriesInstanceUID"] = boost::any(*seriesInstanceUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lesions") != m.end() && !m["Lesions"].empty()) {
      if (typeid(vector<boost::any>) == m["Lesions"].type()) {
        vector<ScreenChestCTResponseBodyDataDetectLymphLesions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Lesions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenChestCTResponseBodyDataDetectLymphLesions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lesions = make_shared<vector<ScreenChestCTResponseBodyDataDetectLymphLesions>>(expect1);
      }
    }
    if (m.find("SeriesInstanceUID") != m.end() && !m["SeriesInstanceUID"].empty()) {
      seriesInstanceUID = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUID"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataDetectLymph() = default;
};
class ScreenChestCTResponseBodyDataDetectPdacLesion : public Darabonba::Model {
public:
  shared_ptr<string> mask{};
  shared_ptr<string> nonPdacVol{};
  shared_ptr<string> pancVol{};
  shared_ptr<string> pdacVol{};
  shared_ptr<vector<string>> possibilities{};

  ScreenChestCTResponseBodyDataDetectPdacLesion() {}

  explicit ScreenChestCTResponseBodyDataDetectPdacLesion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (nonPdacVol) {
      res["NonPdacVol"] = boost::any(*nonPdacVol);
    }
    if (pancVol) {
      res["PancVol"] = boost::any(*pancVol);
    }
    if (pdacVol) {
      res["PdacVol"] = boost::any(*pdacVol);
    }
    if (possibilities) {
      res["Possibilities"] = boost::any(*possibilities);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("NonPdacVol") != m.end() && !m["NonPdacVol"].empty()) {
      nonPdacVol = make_shared<string>(boost::any_cast<string>(m["NonPdacVol"]));
    }
    if (m.find("PancVol") != m.end() && !m["PancVol"].empty()) {
      pancVol = make_shared<string>(boost::any_cast<string>(m["PancVol"]));
    }
    if (m.find("PdacVol") != m.end() && !m["PdacVol"].empty()) {
      pdacVol = make_shared<string>(boost::any_cast<string>(m["PdacVol"]));
    }
    if (m.find("Possibilities") != m.end() && !m["Possibilities"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Possibilities"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Possibilities"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      possibilities = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ScreenChestCTResponseBodyDataDetectPdacLesion() = default;
};
class ScreenChestCTResponseBodyDataDetectPdac : public Darabonba::Model {
public:
  shared_ptr<ScreenChestCTResponseBodyDataDetectPdacLesion> lesion{};
  shared_ptr<string> seriesInstanceUID{};

  ScreenChestCTResponseBodyDataDetectPdac() {}

  explicit ScreenChestCTResponseBodyDataDetectPdac(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesion) {
      res["Lesion"] = lesion ? boost::any(lesion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (seriesInstanceUID) {
      res["SeriesInstanceUID"] = boost::any(*seriesInstanceUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lesion") != m.end() && !m["Lesion"].empty()) {
      if (typeid(map<string, boost::any>) == m["Lesion"].type()) {
        ScreenChestCTResponseBodyDataDetectPdacLesion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Lesion"]));
        lesion = make_shared<ScreenChestCTResponseBodyDataDetectPdacLesion>(model1);
      }
    }
    if (m.find("SeriesInstanceUID") != m.end() && !m["SeriesInstanceUID"].empty()) {
      seriesInstanceUID = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUID"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataDetectPdac() = default;
};
class ScreenChestCTResponseBodyDataDetectRibFractureDetections : public Darabonba::Model {
public:
  shared_ptr<vector<long>> coordinateImage{};
  shared_ptr<vector<long>> coordinates{};
  shared_ptr<string> fracSOPInstanceUID{};
  shared_ptr<long> fractureCategory{};
  shared_ptr<double> fractureConfidence{};
  shared_ptr<long> fractureId{};
  shared_ptr<string> fractureLocation{};
  shared_ptr<long> fractureSegment{};

  ScreenChestCTResponseBodyDataDetectRibFractureDetections() {}

  explicit ScreenChestCTResponseBodyDataDetectRibFractureDetections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coordinateImage) {
      res["CoordinateImage"] = boost::any(*coordinateImage);
    }
    if (coordinates) {
      res["Coordinates"] = boost::any(*coordinates);
    }
    if (fracSOPInstanceUID) {
      res["FracSOPInstanceUID"] = boost::any(*fracSOPInstanceUID);
    }
    if (fractureCategory) {
      res["FractureCategory"] = boost::any(*fractureCategory);
    }
    if (fractureConfidence) {
      res["FractureConfidence"] = boost::any(*fractureConfidence);
    }
    if (fractureId) {
      res["FractureId"] = boost::any(*fractureId);
    }
    if (fractureLocation) {
      res["FractureLocation"] = boost::any(*fractureLocation);
    }
    if (fractureSegment) {
      res["FractureSegment"] = boost::any(*fractureSegment);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoordinateImage") != m.end() && !m["CoordinateImage"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CoordinateImage"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CoordinateImage"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      coordinateImage = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Coordinates") != m.end() && !m["Coordinates"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Coordinates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Coordinates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      coordinates = make_shared<vector<long>>(toVec1);
    }
    if (m.find("FracSOPInstanceUID") != m.end() && !m["FracSOPInstanceUID"].empty()) {
      fracSOPInstanceUID = make_shared<string>(boost::any_cast<string>(m["FracSOPInstanceUID"]));
    }
    if (m.find("FractureCategory") != m.end() && !m["FractureCategory"].empty()) {
      fractureCategory = make_shared<long>(boost::any_cast<long>(m["FractureCategory"]));
    }
    if (m.find("FractureConfidence") != m.end() && !m["FractureConfidence"].empty()) {
      fractureConfidence = make_shared<double>(boost::any_cast<double>(m["FractureConfidence"]));
    }
    if (m.find("FractureId") != m.end() && !m["FractureId"].empty()) {
      fractureId = make_shared<long>(boost::any_cast<long>(m["FractureId"]));
    }
    if (m.find("FractureLocation") != m.end() && !m["FractureLocation"].empty()) {
      fractureLocation = make_shared<string>(boost::any_cast<string>(m["FractureLocation"]));
    }
    if (m.find("FractureSegment") != m.end() && !m["FractureSegment"].empty()) {
      fractureSegment = make_shared<long>(boost::any_cast<long>(m["FractureSegment"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataDetectRibFractureDetections() = default;
};
class ScreenChestCTResponseBodyDataDetectRibFracture : public Darabonba::Model {
public:
  shared_ptr<vector<ScreenChestCTResponseBodyDataDetectRibFractureDetections>> detections{};
  shared_ptr<string> fractureMaskURL{};
  shared_ptr<vector<double>> origin{};
  shared_ptr<string> resultURL{};
  shared_ptr<string> ribSegmentMaskURL{};
  shared_ptr<string> seriesInstanceUID{};
  shared_ptr<vector<double>> spacing{};

  ScreenChestCTResponseBodyDataDetectRibFracture() {}

  explicit ScreenChestCTResponseBodyDataDetectRibFracture(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detections) {
      vector<boost::any> temp1;
      for(auto item1:*detections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Detections"] = boost::any(temp1);
    }
    if (fractureMaskURL) {
      res["FractureMaskURL"] = boost::any(*fractureMaskURL);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (resultURL) {
      res["ResultURL"] = boost::any(*resultURL);
    }
    if (ribSegmentMaskURL) {
      res["RibSegmentMaskURL"] = boost::any(*ribSegmentMaskURL);
    }
    if (seriesInstanceUID) {
      res["SeriesInstanceUID"] = boost::any(*seriesInstanceUID);
    }
    if (spacing) {
      res["Spacing"] = boost::any(*spacing);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detections") != m.end() && !m["Detections"].empty()) {
      if (typeid(vector<boost::any>) == m["Detections"].type()) {
        vector<ScreenChestCTResponseBodyDataDetectRibFractureDetections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Detections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenChestCTResponseBodyDataDetectRibFractureDetections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detections = make_shared<vector<ScreenChestCTResponseBodyDataDetectRibFractureDetections>>(expect1);
      }
    }
    if (m.find("FractureMaskURL") != m.end() && !m["FractureMaskURL"].empty()) {
      fractureMaskURL = make_shared<string>(boost::any_cast<string>(m["FractureMaskURL"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Origin"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Origin"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      origin = make_shared<vector<double>>(toVec1);
    }
    if (m.find("ResultURL") != m.end() && !m["ResultURL"].empty()) {
      resultURL = make_shared<string>(boost::any_cast<string>(m["ResultURL"]));
    }
    if (m.find("RibSegmentMaskURL") != m.end() && !m["RibSegmentMaskURL"].empty()) {
      ribSegmentMaskURL = make_shared<string>(boost::any_cast<string>(m["RibSegmentMaskURL"]));
    }
    if (m.find("SeriesInstanceUID") != m.end() && !m["SeriesInstanceUID"].empty()) {
      seriesInstanceUID = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUID"]));
    }
    if (m.find("Spacing") != m.end() && !m["Spacing"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Spacing"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Spacing"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      spacing = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~ScreenChestCTResponseBodyDataDetectRibFracture() = default;
};
class ScreenChestCTResponseBodyDataLungNoduleSeriesElements : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<double> confidence{};
  shared_ptr<double> diameter{};
  shared_ptr<double> imageX{};
  shared_ptr<double> imageY{};
  shared_ptr<double> imageZ{};
  shared_ptr<string> lobe{};
  shared_ptr<string> lung{};
  shared_ptr<vector<double>> majorAxis{};
  shared_ptr<double> meanValue{};
  shared_ptr<vector<double>> minorAxis{};
  shared_ptr<string> recistSOPInstanceUID{};
  shared_ptr<double> risk{};
  shared_ptr<string> SOPInstanceUID{};
  shared_ptr<double> volume{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<double> z{};

  ScreenChestCTResponseBodyDataLungNoduleSeriesElements() {}

  explicit ScreenChestCTResponseBodyDataLungNoduleSeriesElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (diameter) {
      res["Diameter"] = boost::any(*diameter);
    }
    if (imageX) {
      res["ImageX"] = boost::any(*imageX);
    }
    if (imageY) {
      res["ImageY"] = boost::any(*imageY);
    }
    if (imageZ) {
      res["ImageZ"] = boost::any(*imageZ);
    }
    if (lobe) {
      res["Lobe"] = boost::any(*lobe);
    }
    if (lung) {
      res["Lung"] = boost::any(*lung);
    }
    if (majorAxis) {
      res["MajorAxis"] = boost::any(*majorAxis);
    }
    if (meanValue) {
      res["MeanValue"] = boost::any(*meanValue);
    }
    if (minorAxis) {
      res["MinorAxis"] = boost::any(*minorAxis);
    }
    if (recistSOPInstanceUID) {
      res["RecistSOPInstanceUID"] = boost::any(*recistSOPInstanceUID);
    }
    if (risk) {
      res["Risk"] = boost::any(*risk);
    }
    if (SOPInstanceUID) {
      res["SOPInstanceUID"] = boost::any(*SOPInstanceUID);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (z) {
      res["Z"] = boost::any(*z);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Diameter") != m.end() && !m["Diameter"].empty()) {
      diameter = make_shared<double>(boost::any_cast<double>(m["Diameter"]));
    }
    if (m.find("ImageX") != m.end() && !m["ImageX"].empty()) {
      imageX = make_shared<double>(boost::any_cast<double>(m["ImageX"]));
    }
    if (m.find("ImageY") != m.end() && !m["ImageY"].empty()) {
      imageY = make_shared<double>(boost::any_cast<double>(m["ImageY"]));
    }
    if (m.find("ImageZ") != m.end() && !m["ImageZ"].empty()) {
      imageZ = make_shared<double>(boost::any_cast<double>(m["ImageZ"]));
    }
    if (m.find("Lobe") != m.end() && !m["Lobe"].empty()) {
      lobe = make_shared<string>(boost::any_cast<string>(m["Lobe"]));
    }
    if (m.find("Lung") != m.end() && !m["Lung"].empty()) {
      lung = make_shared<string>(boost::any_cast<string>(m["Lung"]));
    }
    if (m.find("MajorAxis") != m.end() && !m["MajorAxis"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["MajorAxis"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MajorAxis"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      majorAxis = make_shared<vector<double>>(toVec1);
    }
    if (m.find("MeanValue") != m.end() && !m["MeanValue"].empty()) {
      meanValue = make_shared<double>(boost::any_cast<double>(m["MeanValue"]));
    }
    if (m.find("MinorAxis") != m.end() && !m["MinorAxis"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["MinorAxis"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MinorAxis"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      minorAxis = make_shared<vector<double>>(toVec1);
    }
    if (m.find("RecistSOPInstanceUID") != m.end() && !m["RecistSOPInstanceUID"].empty()) {
      recistSOPInstanceUID = make_shared<string>(boost::any_cast<string>(m["RecistSOPInstanceUID"]));
    }
    if (m.find("Risk") != m.end() && !m["Risk"].empty()) {
      risk = make_shared<double>(boost::any_cast<double>(m["Risk"]));
    }
    if (m.find("SOPInstanceUID") != m.end() && !m["SOPInstanceUID"].empty()) {
      SOPInstanceUID = make_shared<string>(boost::any_cast<string>(m["SOPInstanceUID"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<double>(boost::any_cast<double>(m["Volume"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("Z") != m.end() && !m["Z"].empty()) {
      z = make_shared<double>(boost::any_cast<double>(m["Z"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataLungNoduleSeriesElements() = default;
};
class ScreenChestCTResponseBodyDataLungNoduleSeries : public Darabonba::Model {
public:
  shared_ptr<vector<ScreenChestCTResponseBodyDataLungNoduleSeriesElements>> elements{};
  shared_ptr<vector<double>> origin{};
  shared_ptr<string> report{};
  shared_ptr<string> seriesInstanceUid{};
  shared_ptr<vector<double>> spacing{};

  ScreenChestCTResponseBodyDataLungNoduleSeries() {}

  explicit ScreenChestCTResponseBodyDataLungNoduleSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elements) {
      vector<boost::any> temp1;
      for(auto item1:*elements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Elements"] = boost::any(temp1);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (report) {
      res["Report"] = boost::any(*report);
    }
    if (seriesInstanceUid) {
      res["SeriesInstanceUid"] = boost::any(*seriesInstanceUid);
    }
    if (spacing) {
      res["Spacing"] = boost::any(*spacing);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<ScreenChestCTResponseBodyDataLungNoduleSeriesElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenChestCTResponseBodyDataLungNoduleSeriesElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<ScreenChestCTResponseBodyDataLungNoduleSeriesElements>>(expect1);
      }
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Origin"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Origin"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      origin = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Report") != m.end() && !m["Report"].empty()) {
      report = make_shared<string>(boost::any_cast<string>(m["Report"]));
    }
    if (m.find("SeriesInstanceUid") != m.end() && !m["SeriesInstanceUid"].empty()) {
      seriesInstanceUid = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUid"]));
    }
    if (m.find("Spacing") != m.end() && !m["Spacing"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Spacing"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Spacing"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      spacing = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~ScreenChestCTResponseBodyDataLungNoduleSeries() = default;
};
class ScreenChestCTResponseBodyDataLungNodule : public Darabonba::Model {
public:
  shared_ptr<vector<ScreenChestCTResponseBodyDataLungNoduleSeries>> series{};

  ScreenChestCTResponseBodyDataLungNodule() {}

  explicit ScreenChestCTResponseBodyDataLungNodule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (series) {
      vector<boost::any> temp1;
      for(auto item1:*series){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Series"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(vector<boost::any>) == m["Series"].type()) {
        vector<ScreenChestCTResponseBodyDataLungNoduleSeries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Series"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenChestCTResponseBodyDataLungNoduleSeries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        series = make_shared<vector<ScreenChestCTResponseBodyDataLungNoduleSeries>>(expect1);
      }
    }
  }


  virtual ~ScreenChestCTResponseBodyDataLungNodule() = default;
};
class ScreenChestCTResponseBodyDataPredictCVDLesionFeatureScore : public Darabonba::Model {
public:
  shared_ptr<vector<double>> aortaCalciumScore{};
  shared_ptr<vector<double>> aortaCalciumVolume{};
  shared_ptr<vector<double>> ascAoMaxDiam{};
  shared_ptr<vector<double>> ascendAortaLength{};
  shared_ptr<vector<double>> cardioThoracicRatio{};
  shared_ptr<vector<double>> coronaryCalciumVol{};
  shared_ptr<vector<double>> deepFeature{};
  shared_ptr<vector<double>> eatHUMean{};
  shared_ptr<vector<double>> eatHUSTD{};
  shared_ptr<vector<double>> eatVolume{};
  shared_ptr<vector<double>> leftLungLowattRatio{};
  shared_ptr<vector<double>> myoEpiRatio{};
  shared_ptr<vector<double>> rightLungLowattRatio{};

  ScreenChestCTResponseBodyDataPredictCVDLesionFeatureScore() {}

  explicit ScreenChestCTResponseBodyDataPredictCVDLesionFeatureScore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aortaCalciumScore) {
      res["AortaCalciumScore"] = boost::any(*aortaCalciumScore);
    }
    if (aortaCalciumVolume) {
      res["AortaCalciumVolume"] = boost::any(*aortaCalciumVolume);
    }
    if (ascAoMaxDiam) {
      res["AscAoMaxDiam"] = boost::any(*ascAoMaxDiam);
    }
    if (ascendAortaLength) {
      res["AscendAortaLength"] = boost::any(*ascendAortaLength);
    }
    if (cardioThoracicRatio) {
      res["CardioThoracicRatio"] = boost::any(*cardioThoracicRatio);
    }
    if (coronaryCalciumVol) {
      res["CoronaryCalciumVol"] = boost::any(*coronaryCalciumVol);
    }
    if (deepFeature) {
      res["DeepFeature"] = boost::any(*deepFeature);
    }
    if (eatHUMean) {
      res["EatHUMean"] = boost::any(*eatHUMean);
    }
    if (eatHUSTD) {
      res["EatHUSTD"] = boost::any(*eatHUSTD);
    }
    if (eatVolume) {
      res["EatVolume"] = boost::any(*eatVolume);
    }
    if (leftLungLowattRatio) {
      res["LeftLungLowattRatio"] = boost::any(*leftLungLowattRatio);
    }
    if (myoEpiRatio) {
      res["MyoEpiRatio"] = boost::any(*myoEpiRatio);
    }
    if (rightLungLowattRatio) {
      res["RightLungLowattRatio"] = boost::any(*rightLungLowattRatio);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AortaCalciumScore") != m.end() && !m["AortaCalciumScore"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["AortaCalciumScore"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AortaCalciumScore"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      aortaCalciumScore = make_shared<vector<double>>(toVec1);
    }
    if (m.find("AortaCalciumVolume") != m.end() && !m["AortaCalciumVolume"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["AortaCalciumVolume"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AortaCalciumVolume"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      aortaCalciumVolume = make_shared<vector<double>>(toVec1);
    }
    if (m.find("AscAoMaxDiam") != m.end() && !m["AscAoMaxDiam"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["AscAoMaxDiam"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AscAoMaxDiam"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      ascAoMaxDiam = make_shared<vector<double>>(toVec1);
    }
    if (m.find("AscendAortaLength") != m.end() && !m["AscendAortaLength"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["AscendAortaLength"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AscendAortaLength"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      ascendAortaLength = make_shared<vector<double>>(toVec1);
    }
    if (m.find("CardioThoracicRatio") != m.end() && !m["CardioThoracicRatio"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["CardioThoracicRatio"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CardioThoracicRatio"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      cardioThoracicRatio = make_shared<vector<double>>(toVec1);
    }
    if (m.find("CoronaryCalciumVol") != m.end() && !m["CoronaryCalciumVol"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["CoronaryCalciumVol"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CoronaryCalciumVol"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      coronaryCalciumVol = make_shared<vector<double>>(toVec1);
    }
    if (m.find("DeepFeature") != m.end() && !m["DeepFeature"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["DeepFeature"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeepFeature"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      deepFeature = make_shared<vector<double>>(toVec1);
    }
    if (m.find("EatHUMean") != m.end() && !m["EatHUMean"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["EatHUMean"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EatHUMean"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      eatHUMean = make_shared<vector<double>>(toVec1);
    }
    if (m.find("EatHUSTD") != m.end() && !m["EatHUSTD"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["EatHUSTD"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EatHUSTD"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      eatHUSTD = make_shared<vector<double>>(toVec1);
    }
    if (m.find("EatVolume") != m.end() && !m["EatVolume"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["EatVolume"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EatVolume"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      eatVolume = make_shared<vector<double>>(toVec1);
    }
    if (m.find("LeftLungLowattRatio") != m.end() && !m["LeftLungLowattRatio"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["LeftLungLowattRatio"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LeftLungLowattRatio"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      leftLungLowattRatio = make_shared<vector<double>>(toVec1);
    }
    if (m.find("MyoEpiRatio") != m.end() && !m["MyoEpiRatio"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["MyoEpiRatio"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MyoEpiRatio"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      myoEpiRatio = make_shared<vector<double>>(toVec1);
    }
    if (m.find("RightLungLowattRatio") != m.end() && !m["RightLungLowattRatio"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["RightLungLowattRatio"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RightLungLowattRatio"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      rightLungLowattRatio = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~ScreenChestCTResponseBodyDataPredictCVDLesionFeatureScore() = default;
};
class ScreenChestCTResponseBodyDataPredictCVDLesion : public Darabonba::Model {
public:
  shared_ptr<double> CVDProbability{};
  shared_ptr<ScreenChestCTResponseBodyDataPredictCVDLesionFeatureScore> featureScore{};
  shared_ptr<vector<string>> resultURL{};

  ScreenChestCTResponseBodyDataPredictCVDLesion() {}

  explicit ScreenChestCTResponseBodyDataPredictCVDLesion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CVDProbability) {
      res["CVDProbability"] = boost::any(*CVDProbability);
    }
    if (featureScore) {
      res["FeatureScore"] = featureScore ? boost::any(featureScore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resultURL) {
      res["ResultURL"] = boost::any(*resultURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CVDProbability") != m.end() && !m["CVDProbability"].empty()) {
      CVDProbability = make_shared<double>(boost::any_cast<double>(m["CVDProbability"]));
    }
    if (m.find("FeatureScore") != m.end() && !m["FeatureScore"].empty()) {
      if (typeid(map<string, boost::any>) == m["FeatureScore"].type()) {
        ScreenChestCTResponseBodyDataPredictCVDLesionFeatureScore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FeatureScore"]));
        featureScore = make_shared<ScreenChestCTResponseBodyDataPredictCVDLesionFeatureScore>(model1);
      }
    }
    if (m.find("ResultURL") != m.end() && !m["ResultURL"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResultURL"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResultURL"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resultURL = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ScreenChestCTResponseBodyDataPredictCVDLesion() = default;
};
class ScreenChestCTResponseBodyDataPredictCVD : public Darabonba::Model {
public:
  shared_ptr<ScreenChestCTResponseBodyDataPredictCVDLesion> lesion{};
  shared_ptr<string> seriesInstanceUid{};

  ScreenChestCTResponseBodyDataPredictCVD() {}

  explicit ScreenChestCTResponseBodyDataPredictCVD(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesion) {
      res["Lesion"] = lesion ? boost::any(lesion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (seriesInstanceUid) {
      res["SeriesInstanceUid"] = boost::any(*seriesInstanceUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lesion") != m.end() && !m["Lesion"].empty()) {
      if (typeid(map<string, boost::any>) == m["Lesion"].type()) {
        ScreenChestCTResponseBodyDataPredictCVDLesion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Lesion"]));
        lesion = make_shared<ScreenChestCTResponseBodyDataPredictCVDLesion>(model1);
      }
    }
    if (m.find("SeriesInstanceUid") != m.end() && !m["SeriesInstanceUid"].empty()) {
      seriesInstanceUid = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUid"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataPredictCVD() = default;
};
class ScreenChestCTResponseBodyDataScreenCRCLesion : public Darabonba::Model {
public:
  shared_ptr<string> colorectumVolume{};
  shared_ptr<string> mask{};
  shared_ptr<vector<string>> probabilities{};

  ScreenChestCTResponseBodyDataScreenCRCLesion() {}

  explicit ScreenChestCTResponseBodyDataScreenCRCLesion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (colorectumVolume) {
      res["ColorectumVolume"] = boost::any(*colorectumVolume);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (probabilities) {
      res["Probabilities"] = boost::any(*probabilities);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColorectumVolume") != m.end() && !m["ColorectumVolume"].empty()) {
      colorectumVolume = make_shared<string>(boost::any_cast<string>(m["ColorectumVolume"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("Probabilities") != m.end() && !m["Probabilities"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Probabilities"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Probabilities"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      probabilities = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ScreenChestCTResponseBodyDataScreenCRCLesion() = default;
};
class ScreenChestCTResponseBodyDataScreenCRC : public Darabonba::Model {
public:
  shared_ptr<ScreenChestCTResponseBodyDataScreenCRCLesion> lesion{};
  shared_ptr<string> seriesInstanceUid{};

  ScreenChestCTResponseBodyDataScreenCRC() {}

  explicit ScreenChestCTResponseBodyDataScreenCRC(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesion) {
      res["Lesion"] = lesion ? boost::any(lesion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (seriesInstanceUid) {
      res["SeriesInstanceUid"] = boost::any(*seriesInstanceUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lesion") != m.end() && !m["Lesion"].empty()) {
      if (typeid(map<string, boost::any>) == m["Lesion"].type()) {
        ScreenChestCTResponseBodyDataScreenCRCLesion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Lesion"]));
        lesion = make_shared<ScreenChestCTResponseBodyDataScreenCRCLesion>(model1);
      }
    }
    if (m.find("SeriesInstanceUid") != m.end() && !m["SeriesInstanceUid"].empty()) {
      seriesInstanceUid = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUid"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataScreenCRC() = default;
};
class ScreenChestCTResponseBodyDataScreenEcLesion : public Darabonba::Model {
public:
  shared_ptr<string> benignVolume{};
  shared_ptr<string> ecVolume{};
  shared_ptr<string> esoVolume{};
  shared_ptr<string> mask{};
  shared_ptr<vector<string>> possibilities{};

  ScreenChestCTResponseBodyDataScreenEcLesion() {}

  explicit ScreenChestCTResponseBodyDataScreenEcLesion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (benignVolume) {
      res["BenignVolume"] = boost::any(*benignVolume);
    }
    if (ecVolume) {
      res["EcVolume"] = boost::any(*ecVolume);
    }
    if (esoVolume) {
      res["EsoVolume"] = boost::any(*esoVolume);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (possibilities) {
      res["Possibilities"] = boost::any(*possibilities);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BenignVolume") != m.end() && !m["BenignVolume"].empty()) {
      benignVolume = make_shared<string>(boost::any_cast<string>(m["BenignVolume"]));
    }
    if (m.find("EcVolume") != m.end() && !m["EcVolume"].empty()) {
      ecVolume = make_shared<string>(boost::any_cast<string>(m["EcVolume"]));
    }
    if (m.find("EsoVolume") != m.end() && !m["EsoVolume"].empty()) {
      esoVolume = make_shared<string>(boost::any_cast<string>(m["EsoVolume"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("Possibilities") != m.end() && !m["Possibilities"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Possibilities"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Possibilities"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      possibilities = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ScreenChestCTResponseBodyDataScreenEcLesion() = default;
};
class ScreenChestCTResponseBodyDataScreenEc : public Darabonba::Model {
public:
  shared_ptr<ScreenChestCTResponseBodyDataScreenEcLesion> lesion{};
  shared_ptr<string> seriesInstanceUid{};

  ScreenChestCTResponseBodyDataScreenEc() {}

  explicit ScreenChestCTResponseBodyDataScreenEc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesion) {
      res["Lesion"] = lesion ? boost::any(lesion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (seriesInstanceUid) {
      res["SeriesInstanceUid"] = boost::any(*seriesInstanceUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lesion") != m.end() && !m["Lesion"].empty()) {
      if (typeid(map<string, boost::any>) == m["Lesion"].type()) {
        ScreenChestCTResponseBodyDataScreenEcLesion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Lesion"]));
        lesion = make_shared<ScreenChestCTResponseBodyDataScreenEcLesion>(model1);
      }
    }
    if (m.find("SeriesInstanceUid") != m.end() && !m["SeriesInstanceUid"].empty()) {
      seriesInstanceUid = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUid"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataScreenEc() = default;
};
class ScreenChestCTResponseBodyDataScreenGCLesion : public Darabonba::Model {
public:
  shared_ptr<string> GCVolume{};
  shared_ptr<string> mask{};
  shared_ptr<string> nonGCVolume{};
  shared_ptr<vector<string>> probabilities{};
  shared_ptr<string> stomachVolume{};

  ScreenChestCTResponseBodyDataScreenGCLesion() {}

  explicit ScreenChestCTResponseBodyDataScreenGCLesion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (GCVolume) {
      res["GCVolume"] = boost::any(*GCVolume);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (nonGCVolume) {
      res["NonGCVolume"] = boost::any(*nonGCVolume);
    }
    if (probabilities) {
      res["Probabilities"] = boost::any(*probabilities);
    }
    if (stomachVolume) {
      res["StomachVolume"] = boost::any(*stomachVolume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GCVolume") != m.end() && !m["GCVolume"].empty()) {
      GCVolume = make_shared<string>(boost::any_cast<string>(m["GCVolume"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("NonGCVolume") != m.end() && !m["NonGCVolume"].empty()) {
      nonGCVolume = make_shared<string>(boost::any_cast<string>(m["NonGCVolume"]));
    }
    if (m.find("Probabilities") != m.end() && !m["Probabilities"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Probabilities"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Probabilities"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      probabilities = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StomachVolume") != m.end() && !m["StomachVolume"].empty()) {
      stomachVolume = make_shared<string>(boost::any_cast<string>(m["StomachVolume"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataScreenGCLesion() = default;
};
class ScreenChestCTResponseBodyDataScreenGC : public Darabonba::Model {
public:
  shared_ptr<ScreenChestCTResponseBodyDataScreenGCLesion> lesion{};
  shared_ptr<string> seriesInstanceUid{};

  ScreenChestCTResponseBodyDataScreenGC() {}

  explicit ScreenChestCTResponseBodyDataScreenGC(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesion) {
      res["Lesion"] = lesion ? boost::any(lesion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (seriesInstanceUid) {
      res["SeriesInstanceUid"] = boost::any(*seriesInstanceUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lesion") != m.end() && !m["Lesion"].empty()) {
      if (typeid(map<string, boost::any>) == m["Lesion"].type()) {
        ScreenChestCTResponseBodyDataScreenGCLesion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Lesion"]));
        lesion = make_shared<ScreenChestCTResponseBodyDataScreenGCLesion>(model1);
      }
    }
    if (m.find("SeriesInstanceUid") != m.end() && !m["SeriesInstanceUid"].empty()) {
      seriesInstanceUid = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUid"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataScreenGC() = default;
};
class ScreenChestCTResponseBodyDataScreenLCLesionLesionList : public Darabonba::Model {
public:
  shared_ptr<vector<double>> diameter{};
  shared_ptr<long> keySlice{};
  shared_ptr<double> malignancy{};
  shared_ptr<vector<double>> recistEndpoints{};
  shared_ptr<string> type{};
  shared_ptr<double> volume{};

  ScreenChestCTResponseBodyDataScreenLCLesionLesionList() {}

  explicit ScreenChestCTResponseBodyDataScreenLCLesionLesionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diameter) {
      res["Diameter"] = boost::any(*diameter);
    }
    if (keySlice) {
      res["KeySlice"] = boost::any(*keySlice);
    }
    if (malignancy) {
      res["Malignancy"] = boost::any(*malignancy);
    }
    if (recistEndpoints) {
      res["RecistEndpoints"] = boost::any(*recistEndpoints);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Diameter") != m.end() && !m["Diameter"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Diameter"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Diameter"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      diameter = make_shared<vector<double>>(toVec1);
    }
    if (m.find("KeySlice") != m.end() && !m["KeySlice"].empty()) {
      keySlice = make_shared<long>(boost::any_cast<long>(m["KeySlice"]));
    }
    if (m.find("Malignancy") != m.end() && !m["Malignancy"].empty()) {
      malignancy = make_shared<double>(boost::any_cast<double>(m["Malignancy"]));
    }
    if (m.find("RecistEndpoints") != m.end() && !m["RecistEndpoints"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["RecistEndpoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecistEndpoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      recistEndpoints = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<double>(boost::any_cast<double>(m["Volume"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataScreenLCLesionLesionList() = default;
};
class ScreenChestCTResponseBodyDataScreenLCLesionPatientLevelResult : public Darabonba::Model {
public:
  shared_ptr<string> benignNonCystProb{};
  shared_ptr<string> cystProb{};
  shared_ptr<string> HCCProb{};
  shared_ptr<string> malignantNonHCCProb{};

  ScreenChestCTResponseBodyDataScreenLCLesionPatientLevelResult() {}

  explicit ScreenChestCTResponseBodyDataScreenLCLesionPatientLevelResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (benignNonCystProb) {
      res["BenignNonCystProb"] = boost::any(*benignNonCystProb);
    }
    if (cystProb) {
      res["CystProb"] = boost::any(*cystProb);
    }
    if (HCCProb) {
      res["HCCProb"] = boost::any(*HCCProb);
    }
    if (malignantNonHCCProb) {
      res["MalignantNonHCCProb"] = boost::any(*malignantNonHCCProb);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BenignNonCystProb") != m.end() && !m["BenignNonCystProb"].empty()) {
      benignNonCystProb = make_shared<string>(boost::any_cast<string>(m["BenignNonCystProb"]));
    }
    if (m.find("CystProb") != m.end() && !m["CystProb"].empty()) {
      cystProb = make_shared<string>(boost::any_cast<string>(m["CystProb"]));
    }
    if (m.find("HCCProb") != m.end() && !m["HCCProb"].empty()) {
      HCCProb = make_shared<string>(boost::any_cast<string>(m["HCCProb"]));
    }
    if (m.find("MalignantNonHCCProb") != m.end() && !m["MalignantNonHCCProb"].empty()) {
      malignantNonHCCProb = make_shared<string>(boost::any_cast<string>(m["MalignantNonHCCProb"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataScreenLCLesionPatientLevelResult() = default;
};
class ScreenChestCTResponseBodyDataScreenLCLesion : public Darabonba::Model {
public:
  shared_ptr<vector<ScreenChestCTResponseBodyDataScreenLCLesionLesionList>> lesionList{};
  shared_ptr<string> liverVolume{};
  shared_ptr<string> mask{};
  shared_ptr<ScreenChestCTResponseBodyDataScreenLCLesionPatientLevelResult> patientLevelResult{};

  ScreenChestCTResponseBodyDataScreenLCLesion() {}

  explicit ScreenChestCTResponseBodyDataScreenLCLesion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesionList) {
      vector<boost::any> temp1;
      for(auto item1:*lesionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LesionList"] = boost::any(temp1);
    }
    if (liverVolume) {
      res["LiverVolume"] = boost::any(*liverVolume);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (patientLevelResult) {
      res["PatientLevelResult"] = patientLevelResult ? boost::any(patientLevelResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LesionList") != m.end() && !m["LesionList"].empty()) {
      if (typeid(vector<boost::any>) == m["LesionList"].type()) {
        vector<ScreenChestCTResponseBodyDataScreenLCLesionLesionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LesionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenChestCTResponseBodyDataScreenLCLesionLesionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lesionList = make_shared<vector<ScreenChestCTResponseBodyDataScreenLCLesionLesionList>>(expect1);
      }
    }
    if (m.find("LiverVolume") != m.end() && !m["LiverVolume"].empty()) {
      liverVolume = make_shared<string>(boost::any_cast<string>(m["LiverVolume"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("PatientLevelResult") != m.end() && !m["PatientLevelResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["PatientLevelResult"].type()) {
        ScreenChestCTResponseBodyDataScreenLCLesionPatientLevelResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PatientLevelResult"]));
        patientLevelResult = make_shared<ScreenChestCTResponseBodyDataScreenLCLesionPatientLevelResult>(model1);
      }
    }
  }


  virtual ~ScreenChestCTResponseBodyDataScreenLCLesion() = default;
};
class ScreenChestCTResponseBodyDataScreenLC : public Darabonba::Model {
public:
  shared_ptr<ScreenChestCTResponseBodyDataScreenLCLesion> lesion{};
  shared_ptr<string> seriesInstanceUid{};

  ScreenChestCTResponseBodyDataScreenLC() {}

  explicit ScreenChestCTResponseBodyDataScreenLC(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesion) {
      res["Lesion"] = lesion ? boost::any(lesion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (seriesInstanceUid) {
      res["SeriesInstanceUid"] = boost::any(*seriesInstanceUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lesion") != m.end() && !m["Lesion"].empty()) {
      if (typeid(map<string, boost::any>) == m["Lesion"].type()) {
        ScreenChestCTResponseBodyDataScreenLCLesion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Lesion"]));
        lesion = make_shared<ScreenChestCTResponseBodyDataScreenLCLesion>(model1);
      }
    }
    if (m.find("SeriesInstanceUid") != m.end() && !m["SeriesInstanceUid"].empty()) {
      seriesInstanceUid = make_shared<string>(boost::any_cast<string>(m["SeriesInstanceUid"]));
    }
  }


  virtual ~ScreenChestCTResponseBodyDataScreenLC() = default;
};
class ScreenChestCTResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ScreenChestCTResponseBodyDataAnalyzeChestVessel> analyzeChestVessel{};
  shared_ptr<ScreenChestCTResponseBodyDataCACS> CACS{};
  shared_ptr<ScreenChestCTResponseBodyDataCalcBMD> calcBMD{};
  shared_ptr<ScreenChestCTResponseBodyDataCovid> covid{};
  shared_ptr<ScreenChestCTResponseBodyDataDetectLiverSteatosis> detectLiverSteatosis{};
  shared_ptr<ScreenChestCTResponseBodyDataDetectLymph> detectLymph{};
  shared_ptr<ScreenChestCTResponseBodyDataDetectPdac> detectPdac{};
  shared_ptr<ScreenChestCTResponseBodyDataDetectRibFracture> detectRibFracture{};
  shared_ptr<string> errorMessage{};
  shared_ptr<ScreenChestCTResponseBodyDataLungNodule> lungNodule{};
  shared_ptr<map<string, boost::any>> nestedUrlList{};
  shared_ptr<ScreenChestCTResponseBodyDataPredictCVD> predictCVD{};
  shared_ptr<ScreenChestCTResponseBodyDataScreenCRC> screenCRC{};
  shared_ptr<ScreenChestCTResponseBodyDataScreenEc> screenEc{};
  shared_ptr<ScreenChestCTResponseBodyDataScreenGC> screenGC{};
  shared_ptr<ScreenChestCTResponseBodyDataScreenLC> screenLC{};
  shared_ptr<map<string, boost::any>> URLList{};

  ScreenChestCTResponseBodyData() {}

  explicit ScreenChestCTResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analyzeChestVessel) {
      res["AnalyzeChestVessel"] = analyzeChestVessel ? boost::any(analyzeChestVessel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (CACS) {
      res["CACS"] = CACS ? boost::any(CACS->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (calcBMD) {
      res["CalcBMD"] = calcBMD ? boost::any(calcBMD->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (covid) {
      res["Covid"] = covid ? boost::any(covid->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (detectLiverSteatosis) {
      res["DetectLiverSteatosis"] = detectLiverSteatosis ? boost::any(detectLiverSteatosis->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (detectLymph) {
      res["DetectLymph"] = detectLymph ? boost::any(detectLymph->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (detectPdac) {
      res["DetectPdac"] = detectPdac ? boost::any(detectPdac->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (detectRibFracture) {
      res["DetectRibFracture"] = detectRibFracture ? boost::any(detectRibFracture->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (lungNodule) {
      res["LungNodule"] = lungNodule ? boost::any(lungNodule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nestedUrlList) {
      res["NestedUrlList"] = boost::any(*nestedUrlList);
    }
    if (predictCVD) {
      res["PredictCVD"] = predictCVD ? boost::any(predictCVD->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (screenCRC) {
      res["ScreenCRC"] = screenCRC ? boost::any(screenCRC->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (screenEc) {
      res["ScreenEc"] = screenEc ? boost::any(screenEc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (screenGC) {
      res["ScreenGC"] = screenGC ? boost::any(screenGC->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (screenLC) {
      res["ScreenLC"] = screenLC ? boost::any(screenLC->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (URLList) {
      res["URLList"] = boost::any(*URLList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnalyzeChestVessel") != m.end() && !m["AnalyzeChestVessel"].empty()) {
      if (typeid(map<string, boost::any>) == m["AnalyzeChestVessel"].type()) {
        ScreenChestCTResponseBodyDataAnalyzeChestVessel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AnalyzeChestVessel"]));
        analyzeChestVessel = make_shared<ScreenChestCTResponseBodyDataAnalyzeChestVessel>(model1);
      }
    }
    if (m.find("CACS") != m.end() && !m["CACS"].empty()) {
      if (typeid(map<string, boost::any>) == m["CACS"].type()) {
        ScreenChestCTResponseBodyDataCACS model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CACS"]));
        CACS = make_shared<ScreenChestCTResponseBodyDataCACS>(model1);
      }
    }
    if (m.find("CalcBMD") != m.end() && !m["CalcBMD"].empty()) {
      if (typeid(map<string, boost::any>) == m["CalcBMD"].type()) {
        ScreenChestCTResponseBodyDataCalcBMD model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CalcBMD"]));
        calcBMD = make_shared<ScreenChestCTResponseBodyDataCalcBMD>(model1);
      }
    }
    if (m.find("Covid") != m.end() && !m["Covid"].empty()) {
      if (typeid(map<string, boost::any>) == m["Covid"].type()) {
        ScreenChestCTResponseBodyDataCovid model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Covid"]));
        covid = make_shared<ScreenChestCTResponseBodyDataCovid>(model1);
      }
    }
    if (m.find("DetectLiverSteatosis") != m.end() && !m["DetectLiverSteatosis"].empty()) {
      if (typeid(map<string, boost::any>) == m["DetectLiverSteatosis"].type()) {
        ScreenChestCTResponseBodyDataDetectLiverSteatosis model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DetectLiverSteatosis"]));
        detectLiverSteatosis = make_shared<ScreenChestCTResponseBodyDataDetectLiverSteatosis>(model1);
      }
    }
    if (m.find("DetectLymph") != m.end() && !m["DetectLymph"].empty()) {
      if (typeid(map<string, boost::any>) == m["DetectLymph"].type()) {
        ScreenChestCTResponseBodyDataDetectLymph model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DetectLymph"]));
        detectLymph = make_shared<ScreenChestCTResponseBodyDataDetectLymph>(model1);
      }
    }
    if (m.find("DetectPdac") != m.end() && !m["DetectPdac"].empty()) {
      if (typeid(map<string, boost::any>) == m["DetectPdac"].type()) {
        ScreenChestCTResponseBodyDataDetectPdac model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DetectPdac"]));
        detectPdac = make_shared<ScreenChestCTResponseBodyDataDetectPdac>(model1);
      }
    }
    if (m.find("DetectRibFracture") != m.end() && !m["DetectRibFracture"].empty()) {
      if (typeid(map<string, boost::any>) == m["DetectRibFracture"].type()) {
        ScreenChestCTResponseBodyDataDetectRibFracture model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DetectRibFracture"]));
        detectRibFracture = make_shared<ScreenChestCTResponseBodyDataDetectRibFracture>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LungNodule") != m.end() && !m["LungNodule"].empty()) {
      if (typeid(map<string, boost::any>) == m["LungNodule"].type()) {
        ScreenChestCTResponseBodyDataLungNodule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LungNodule"]));
        lungNodule = make_shared<ScreenChestCTResponseBodyDataLungNodule>(model1);
      }
    }
    if (m.find("NestedUrlList") != m.end() && !m["NestedUrlList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["NestedUrlList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      nestedUrlList = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PredictCVD") != m.end() && !m["PredictCVD"].empty()) {
      if (typeid(map<string, boost::any>) == m["PredictCVD"].type()) {
        ScreenChestCTResponseBodyDataPredictCVD model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PredictCVD"]));
        predictCVD = make_shared<ScreenChestCTResponseBodyDataPredictCVD>(model1);
      }
    }
    if (m.find("ScreenCRC") != m.end() && !m["ScreenCRC"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScreenCRC"].type()) {
        ScreenChestCTResponseBodyDataScreenCRC model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScreenCRC"]));
        screenCRC = make_shared<ScreenChestCTResponseBodyDataScreenCRC>(model1);
      }
    }
    if (m.find("ScreenEc") != m.end() && !m["ScreenEc"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScreenEc"].type()) {
        ScreenChestCTResponseBodyDataScreenEc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScreenEc"]));
        screenEc = make_shared<ScreenChestCTResponseBodyDataScreenEc>(model1);
      }
    }
    if (m.find("ScreenGC") != m.end() && !m["ScreenGC"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScreenGC"].type()) {
        ScreenChestCTResponseBodyDataScreenGC model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScreenGC"]));
        screenGC = make_shared<ScreenChestCTResponseBodyDataScreenGC>(model1);
      }
    }
    if (m.find("ScreenLC") != m.end() && !m["ScreenLC"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScreenLC"].type()) {
        ScreenChestCTResponseBodyDataScreenLC model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScreenLC"]));
        screenLC = make_shared<ScreenChestCTResponseBodyDataScreenLC>(model1);
      }
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["URLList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      URLList = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ScreenChestCTResponseBodyData() = default;
};
class ScreenChestCTResponseBody : public Darabonba::Model {
public:
  shared_ptr<ScreenChestCTResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ScreenChestCTResponseBody() {}

  explicit ScreenChestCTResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ScreenChestCTResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ScreenChestCTResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ScreenChestCTResponseBody() = default;
};
class ScreenChestCTResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ScreenChestCTResponseBody> body{};

  ScreenChestCTResponse() {}

  explicit ScreenChestCTResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScreenChestCTResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScreenChestCTResponseBody>(model1);
      }
    }
  }


  virtual ~ScreenChestCTResponse() = default;
};
class ScreenECRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  ScreenECRequestURLList() {}

  explicit ScreenECRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~ScreenECRequestURLList() = default;
};
class ScreenECRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceType{};
  shared_ptr<vector<ScreenECRequestURLList>> URLList{};

  ScreenECRequest() {}

  explicit ScreenECRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<ScreenECRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenECRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<ScreenECRequestURLList>>(expect1);
      }
    }
  }


  virtual ~ScreenECRequest() = default;
};
class ScreenECResponseBodyDataLesion : public Darabonba::Model {
public:
  shared_ptr<string> benignVolume{};
  shared_ptr<string> ecVolume{};
  shared_ptr<string> esoVolume{};
  shared_ptr<string> mask{};
  shared_ptr<vector<string>> possibilities{};

  ScreenECResponseBodyDataLesion() {}

  explicit ScreenECResponseBodyDataLesion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (benignVolume) {
      res["BenignVolume"] = boost::any(*benignVolume);
    }
    if (ecVolume) {
      res["EcVolume"] = boost::any(*ecVolume);
    }
    if (esoVolume) {
      res["EsoVolume"] = boost::any(*esoVolume);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (possibilities) {
      res["Possibilities"] = boost::any(*possibilities);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BenignVolume") != m.end() && !m["BenignVolume"].empty()) {
      benignVolume = make_shared<string>(boost::any_cast<string>(m["BenignVolume"]));
    }
    if (m.find("EcVolume") != m.end() && !m["EcVolume"].empty()) {
      ecVolume = make_shared<string>(boost::any_cast<string>(m["EcVolume"]));
    }
    if (m.find("EsoVolume") != m.end() && !m["EsoVolume"].empty()) {
      esoVolume = make_shared<string>(boost::any_cast<string>(m["EsoVolume"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("Possibilities") != m.end() && !m["Possibilities"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Possibilities"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Possibilities"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      possibilities = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ScreenECResponseBodyDataLesion() = default;
};
class ScreenECResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ScreenECResponseBodyDataLesion> lesion{};

  ScreenECResponseBodyData() {}

  explicit ScreenECResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesion) {
      res["Lesion"] = lesion ? boost::any(lesion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lesion") != m.end() && !m["Lesion"].empty()) {
      if (typeid(map<string, boost::any>) == m["Lesion"].type()) {
        ScreenECResponseBodyDataLesion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Lesion"]));
        lesion = make_shared<ScreenECResponseBodyDataLesion>(model1);
      }
    }
  }


  virtual ~ScreenECResponseBodyData() = default;
};
class ScreenECResponseBody : public Darabonba::Model {
public:
  shared_ptr<ScreenECResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ScreenECResponseBody() {}

  explicit ScreenECResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ScreenECResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ScreenECResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ScreenECResponseBody() = default;
};
class ScreenECResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ScreenECResponseBody> body{};

  ScreenECResponse() {}

  explicit ScreenECResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScreenECResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScreenECResponseBody>(model1);
      }
    }
  }


  virtual ~ScreenECResponse() = default;
};
class ScreenGCRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  ScreenGCRequestURLList() {}

  explicit ScreenGCRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~ScreenGCRequestURLList() = default;
};
class ScreenGCRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<ScreenGCRequestURLList>> URLList{};

  ScreenGCRequest() {}

  explicit ScreenGCRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<ScreenGCRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenGCRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<ScreenGCRequestURLList>>(expect1);
      }
    }
  }


  virtual ~ScreenGCRequest() = default;
};
class ScreenGCAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  ScreenGCAdvanceRequestURLList() {}

  explicit ScreenGCAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~ScreenGCAdvanceRequestURLList() = default;
};
class ScreenGCAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<ScreenGCAdvanceRequestURLList>> URLList{};

  ScreenGCAdvanceRequest() {}

  explicit ScreenGCAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<ScreenGCAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenGCAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<ScreenGCAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~ScreenGCAdvanceRequest() = default;
};
class ScreenGCResponseBodyDataLesion : public Darabonba::Model {
public:
  shared_ptr<string> GCVolume{};
  shared_ptr<string> mask{};
  shared_ptr<string> nonGCVolume{};
  shared_ptr<string> probabilities{};
  shared_ptr<string> stomachVolume{};

  ScreenGCResponseBodyDataLesion() {}

  explicit ScreenGCResponseBodyDataLesion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (GCVolume) {
      res["GCVolume"] = boost::any(*GCVolume);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (nonGCVolume) {
      res["NonGCVolume"] = boost::any(*nonGCVolume);
    }
    if (probabilities) {
      res["Probabilities"] = boost::any(*probabilities);
    }
    if (stomachVolume) {
      res["StomachVolume"] = boost::any(*stomachVolume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GCVolume") != m.end() && !m["GCVolume"].empty()) {
      GCVolume = make_shared<string>(boost::any_cast<string>(m["GCVolume"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("NonGCVolume") != m.end() && !m["NonGCVolume"].empty()) {
      nonGCVolume = make_shared<string>(boost::any_cast<string>(m["NonGCVolume"]));
    }
    if (m.find("Probabilities") != m.end() && !m["Probabilities"].empty()) {
      probabilities = make_shared<string>(boost::any_cast<string>(m["Probabilities"]));
    }
    if (m.find("StomachVolume") != m.end() && !m["StomachVolume"].empty()) {
      stomachVolume = make_shared<string>(boost::any_cast<string>(m["StomachVolume"]));
    }
  }


  virtual ~ScreenGCResponseBodyDataLesion() = default;
};
class ScreenGCResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ScreenGCResponseBodyDataLesion> lesion{};

  ScreenGCResponseBodyData() {}

  explicit ScreenGCResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesion) {
      res["Lesion"] = lesion ? boost::any(lesion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lesion") != m.end() && !m["Lesion"].empty()) {
      if (typeid(map<string, boost::any>) == m["Lesion"].type()) {
        ScreenGCResponseBodyDataLesion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Lesion"]));
        lesion = make_shared<ScreenGCResponseBodyDataLesion>(model1);
      }
    }
  }


  virtual ~ScreenGCResponseBodyData() = default;
};
class ScreenGCResponseBody : public Darabonba::Model {
public:
  shared_ptr<ScreenGCResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ScreenGCResponseBody() {}

  explicit ScreenGCResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ScreenGCResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ScreenGCResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ScreenGCResponseBody() = default;
};
class ScreenGCResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ScreenGCResponseBody> body{};

  ScreenGCResponse() {}

  explicit ScreenGCResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScreenGCResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScreenGCResponseBody>(model1);
      }
    }
  }


  virtual ~ScreenGCResponse() = default;
};
class ScreenLCRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  ScreenLCRequestURLList() {}

  explicit ScreenLCRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~ScreenLCRequestURLList() = default;
};
class ScreenLCRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<ScreenLCRequestURLList>> URLList{};

  ScreenLCRequest() {}

  explicit ScreenLCRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<ScreenLCRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenLCRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<ScreenLCRequestURLList>>(expect1);
      }
    }
  }


  virtual ~ScreenLCRequest() = default;
};
class ScreenLCAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  ScreenLCAdvanceRequestURLList() {}

  explicit ScreenLCAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~ScreenLCAdvanceRequestURLList() = default;
};
class ScreenLCAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<ScreenLCAdvanceRequestURLList>> URLList{};

  ScreenLCAdvanceRequest() {}

  explicit ScreenLCAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<ScreenLCAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenLCAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<ScreenLCAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~ScreenLCAdvanceRequest() = default;
};
class ScreenLCResponseBodyDataLesionLesionList : public Darabonba::Model {
public:
  shared_ptr<vector<double>> diameter{};
  shared_ptr<long> keySlice{};
  shared_ptr<double> malignancy{};
  shared_ptr<vector<double>> recistEndpoints{};
  shared_ptr<string> type{};
  shared_ptr<double> volume{};

  ScreenLCResponseBodyDataLesionLesionList() {}

  explicit ScreenLCResponseBodyDataLesionLesionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diameter) {
      res["Diameter"] = boost::any(*diameter);
    }
    if (keySlice) {
      res["KeySlice"] = boost::any(*keySlice);
    }
    if (malignancy) {
      res["Malignancy"] = boost::any(*malignancy);
    }
    if (recistEndpoints) {
      res["RecistEndpoints"] = boost::any(*recistEndpoints);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Diameter") != m.end() && !m["Diameter"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Diameter"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Diameter"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      diameter = make_shared<vector<double>>(toVec1);
    }
    if (m.find("KeySlice") != m.end() && !m["KeySlice"].empty()) {
      keySlice = make_shared<long>(boost::any_cast<long>(m["KeySlice"]));
    }
    if (m.find("Malignancy") != m.end() && !m["Malignancy"].empty()) {
      malignancy = make_shared<double>(boost::any_cast<double>(m["Malignancy"]));
    }
    if (m.find("RecistEndpoints") != m.end() && !m["RecistEndpoints"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["RecistEndpoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecistEndpoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      recistEndpoints = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<double>(boost::any_cast<double>(m["Volume"]));
    }
  }


  virtual ~ScreenLCResponseBodyDataLesionLesionList() = default;
};
class ScreenLCResponseBodyDataLesionPatientLevelResult : public Darabonba::Model {
public:
  shared_ptr<string> benignNonCystProb{};
  shared_ptr<double> cystProb{};
  shared_ptr<double> HCCProb{};
  shared_ptr<double> malignantNonHCCProb{};

  ScreenLCResponseBodyDataLesionPatientLevelResult() {}

  explicit ScreenLCResponseBodyDataLesionPatientLevelResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (benignNonCystProb) {
      res["BenignNonCystProb"] = boost::any(*benignNonCystProb);
    }
    if (cystProb) {
      res["CystProb"] = boost::any(*cystProb);
    }
    if (HCCProb) {
      res["HCCProb"] = boost::any(*HCCProb);
    }
    if (malignantNonHCCProb) {
      res["MalignantNonHCCProb"] = boost::any(*malignantNonHCCProb);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BenignNonCystProb") != m.end() && !m["BenignNonCystProb"].empty()) {
      benignNonCystProb = make_shared<string>(boost::any_cast<string>(m["BenignNonCystProb"]));
    }
    if (m.find("CystProb") != m.end() && !m["CystProb"].empty()) {
      cystProb = make_shared<double>(boost::any_cast<double>(m["CystProb"]));
    }
    if (m.find("HCCProb") != m.end() && !m["HCCProb"].empty()) {
      HCCProb = make_shared<double>(boost::any_cast<double>(m["HCCProb"]));
    }
    if (m.find("MalignantNonHCCProb") != m.end() && !m["MalignantNonHCCProb"].empty()) {
      malignantNonHCCProb = make_shared<double>(boost::any_cast<double>(m["MalignantNonHCCProb"]));
    }
  }


  virtual ~ScreenLCResponseBodyDataLesionPatientLevelResult() = default;
};
class ScreenLCResponseBodyDataLesion : public Darabonba::Model {
public:
  shared_ptr<vector<ScreenLCResponseBodyDataLesionLesionList>> lesionList{};
  shared_ptr<double> liverVolume{};
  shared_ptr<string> mask{};
  shared_ptr<ScreenLCResponseBodyDataLesionPatientLevelResult> patientLevelResult{};

  ScreenLCResponseBodyDataLesion() {}

  explicit ScreenLCResponseBodyDataLesion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesionList) {
      vector<boost::any> temp1;
      for(auto item1:*lesionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LesionList"] = boost::any(temp1);
    }
    if (liverVolume) {
      res["LiverVolume"] = boost::any(*liverVolume);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (patientLevelResult) {
      res["PatientLevelResult"] = patientLevelResult ? boost::any(patientLevelResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LesionList") != m.end() && !m["LesionList"].empty()) {
      if (typeid(vector<boost::any>) == m["LesionList"].type()) {
        vector<ScreenLCResponseBodyDataLesionLesionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LesionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScreenLCResponseBodyDataLesionLesionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lesionList = make_shared<vector<ScreenLCResponseBodyDataLesionLesionList>>(expect1);
      }
    }
    if (m.find("LiverVolume") != m.end() && !m["LiverVolume"].empty()) {
      liverVolume = make_shared<double>(boost::any_cast<double>(m["LiverVolume"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("PatientLevelResult") != m.end() && !m["PatientLevelResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["PatientLevelResult"].type()) {
        ScreenLCResponseBodyDataLesionPatientLevelResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PatientLevelResult"]));
        patientLevelResult = make_shared<ScreenLCResponseBodyDataLesionPatientLevelResult>(model1);
      }
    }
  }


  virtual ~ScreenLCResponseBodyDataLesion() = default;
};
class ScreenLCResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ScreenLCResponseBodyDataLesion> lesion{};

  ScreenLCResponseBodyData() {}

  explicit ScreenLCResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lesion) {
      res["Lesion"] = lesion ? boost::any(lesion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lesion") != m.end() && !m["Lesion"].empty()) {
      if (typeid(map<string, boost::any>) == m["Lesion"].type()) {
        ScreenLCResponseBodyDataLesion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Lesion"]));
        lesion = make_shared<ScreenLCResponseBodyDataLesion>(model1);
      }
    }
  }


  virtual ~ScreenLCResponseBodyData() = default;
};
class ScreenLCResponseBody : public Darabonba::Model {
public:
  shared_ptr<ScreenLCResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ScreenLCResponseBody() {}

  explicit ScreenLCResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ScreenLCResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ScreenLCResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ScreenLCResponseBody() = default;
};
class ScreenLCResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ScreenLCResponseBody> body{};

  ScreenLCResponse() {}

  explicit ScreenLCResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScreenLCResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScreenLCResponseBody>(model1);
      }
    }
  }


  virtual ~ScreenLCResponse() = default;
};
class SegmentLymphNodeRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  SegmentLymphNodeRequestURLList() {}

  explicit SegmentLymphNodeRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~SegmentLymphNodeRequestURLList() = default;
};
class SegmentLymphNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyPart{};
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<SegmentLymphNodeRequestURLList>> URLList{};

  SegmentLymphNodeRequest() {}

  explicit SegmentLymphNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyPart) {
      res["BodyPart"] = boost::any(*bodyPart);
    }
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyPart") != m.end() && !m["BodyPart"].empty()) {
      bodyPart = make_shared<string>(boost::any_cast<string>(m["BodyPart"]));
    }
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<SegmentLymphNodeRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SegmentLymphNodeRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<SegmentLymphNodeRequestURLList>>(expect1);
      }
    }
  }


  virtual ~SegmentLymphNodeRequest() = default;
};
class SegmentLymphNodeAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  SegmentLymphNodeAdvanceRequestURLList() {}

  explicit SegmentLymphNodeAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~SegmentLymphNodeAdvanceRequestURLList() = default;
};
class SegmentLymphNodeAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyPart{};
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<SegmentLymphNodeAdvanceRequestURLList>> URLList{};

  SegmentLymphNodeAdvanceRequest() {}

  explicit SegmentLymphNodeAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyPart) {
      res["BodyPart"] = boost::any(*bodyPart);
    }
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyPart") != m.end() && !m["BodyPart"].empty()) {
      bodyPart = make_shared<string>(boost::any_cast<string>(m["BodyPart"]));
    }
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<SegmentLymphNodeAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SegmentLymphNodeAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<SegmentLymphNodeAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~SegmentLymphNodeAdvanceRequest() = default;
};
class SegmentLymphNodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> resultURL{};

  SegmentLymphNodeResponseBodyData() {}

  explicit SegmentLymphNodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultURL) {
      res["ResultURL"] = boost::any(*resultURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultURL") != m.end() && !m["ResultURL"].empty()) {
      resultURL = make_shared<string>(boost::any_cast<string>(m["ResultURL"]));
    }
  }


  virtual ~SegmentLymphNodeResponseBodyData() = default;
};
class SegmentLymphNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<SegmentLymphNodeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SegmentLymphNodeResponseBody() {}

  explicit SegmentLymphNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SegmentLymphNodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentLymphNodeResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentLymphNodeResponseBody() = default;
};
class SegmentLymphNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SegmentLymphNodeResponseBody> body{};

  SegmentLymphNodeResponse() {}

  explicit SegmentLymphNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentLymphNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentLymphNodeResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentLymphNodeResponse() = default;
};
class SegmentOARRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  SegmentOARRequestURLList() {}

  explicit SegmentOARRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~SegmentOARRequestURLList() = default;
};
class SegmentOARRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyPart{};
  shared_ptr<bool> contrast{};
  shared_ptr<string> dataFormat{};
  shared_ptr<vector<long>> maskList{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<SegmentOARRequestURLList>> URLList{};

  SegmentOARRequest() {}

  explicit SegmentOARRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyPart) {
      res["BodyPart"] = boost::any(*bodyPart);
    }
    if (contrast) {
      res["Contrast"] = boost::any(*contrast);
    }
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (maskList) {
      res["MaskList"] = boost::any(*maskList);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyPart") != m.end() && !m["BodyPart"].empty()) {
      bodyPart = make_shared<string>(boost::any_cast<string>(m["BodyPart"]));
    }
    if (m.find("Contrast") != m.end() && !m["Contrast"].empty()) {
      contrast = make_shared<bool>(boost::any_cast<bool>(m["Contrast"]));
    }
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("MaskList") != m.end() && !m["MaskList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["MaskList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MaskList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      maskList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<SegmentOARRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SegmentOARRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<SegmentOARRequestURLList>>(expect1);
      }
    }
  }


  virtual ~SegmentOARRequest() = default;
};
class SegmentOARAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  SegmentOARAdvanceRequestURLList() {}

  explicit SegmentOARAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~SegmentOARAdvanceRequestURLList() = default;
};
class SegmentOARAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyPart{};
  shared_ptr<bool> contrast{};
  shared_ptr<string> dataFormat{};
  shared_ptr<vector<long>> maskList{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<vector<SegmentOARAdvanceRequestURLList>> URLList{};

  SegmentOARAdvanceRequest() {}

  explicit SegmentOARAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyPart) {
      res["BodyPart"] = boost::any(*bodyPart);
    }
    if (contrast) {
      res["Contrast"] = boost::any(*contrast);
    }
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (maskList) {
      res["MaskList"] = boost::any(*maskList);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyPart") != m.end() && !m["BodyPart"].empty()) {
      bodyPart = make_shared<string>(boost::any_cast<string>(m["BodyPart"]));
    }
    if (m.find("Contrast") != m.end() && !m["Contrast"].empty()) {
      contrast = make_shared<bool>(boost::any_cast<bool>(m["Contrast"]));
    }
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("MaskList") != m.end() && !m["MaskList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["MaskList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MaskList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      maskList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<SegmentOARAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SegmentOARAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<SegmentOARAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~SegmentOARAdvanceRequest() = default;
};
class SegmentOARResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> resultURL{};

  SegmentOARResponseBodyData() {}

  explicit SegmentOARResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultURL) {
      res["ResultURL"] = boost::any(*resultURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultURL") != m.end() && !m["ResultURL"].empty()) {
      resultURL = make_shared<string>(boost::any_cast<string>(m["ResultURL"]));
    }
  }


  virtual ~SegmentOARResponseBodyData() = default;
};
class SegmentOARResponseBody : public Darabonba::Model {
public:
  shared_ptr<SegmentOARResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SegmentOARResponseBody() {}

  explicit SegmentOARResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SegmentOARResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SegmentOARResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SegmentOARResponseBody() = default;
};
class SegmentOARResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SegmentOARResponseBody> body{};

  SegmentOARResponse() {}

  explicit SegmentOARResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SegmentOARResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SegmentOARResponseBody>(model1);
      }
    }
  }


  virtual ~SegmentOARResponse() = default;
};
class TargetVolumeSegmentRequestURLList : public Darabonba::Model {
public:
  shared_ptr<string> URL{};

  TargetVolumeSegmentRequestURLList() {}

  explicit TargetVolumeSegmentRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~TargetVolumeSegmentRequestURLList() = default;
};
class TargetVolumeSegmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> cancerType{};
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> targetVolumeType{};
  shared_ptr<vector<TargetVolumeSegmentRequestURLList>> URLList{};

  TargetVolumeSegmentRequest() {}

  explicit TargetVolumeSegmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cancerType) {
      res["CancerType"] = boost::any(*cancerType);
    }
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (targetVolumeType) {
      res["TargetVolumeType"] = boost::any(*targetVolumeType);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CancerType") != m.end() && !m["CancerType"].empty()) {
      cancerType = make_shared<string>(boost::any_cast<string>(m["CancerType"]));
    }
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("TargetVolumeType") != m.end() && !m["TargetVolumeType"].empty()) {
      targetVolumeType = make_shared<string>(boost::any_cast<string>(m["TargetVolumeType"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<TargetVolumeSegmentRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TargetVolumeSegmentRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<TargetVolumeSegmentRequestURLList>>(expect1);
      }
    }
  }


  virtual ~TargetVolumeSegmentRequest() = default;
};
class TargetVolumeSegmentAdvanceRequestURLList : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> URLObject{};

  TargetVolumeSegmentAdvanceRequestURLList() {}

  explicit TargetVolumeSegmentAdvanceRequestURLList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URLObject) {
      res["URL"] = boost::any(*URLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["URL"]));
    }
  }


  virtual ~TargetVolumeSegmentAdvanceRequestURLList() = default;
};
class TargetVolumeSegmentAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> cancerType{};
  shared_ptr<string> dataFormat{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> targetVolumeType{};
  shared_ptr<vector<TargetVolumeSegmentAdvanceRequestURLList>> URLList{};

  TargetVolumeSegmentAdvanceRequest() {}

  explicit TargetVolumeSegmentAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cancerType) {
      res["CancerType"] = boost::any(*cancerType);
    }
    if (dataFormat) {
      res["DataFormat"] = boost::any(*dataFormat);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (targetVolumeType) {
      res["TargetVolumeType"] = boost::any(*targetVolumeType);
    }
    if (URLList) {
      vector<boost::any> temp1;
      for(auto item1:*URLList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["URLList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CancerType") != m.end() && !m["CancerType"].empty()) {
      cancerType = make_shared<string>(boost::any_cast<string>(m["CancerType"]));
    }
    if (m.find("DataFormat") != m.end() && !m["DataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["DataFormat"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("TargetVolumeType") != m.end() && !m["TargetVolumeType"].empty()) {
      targetVolumeType = make_shared<string>(boost::any_cast<string>(m["TargetVolumeType"]));
    }
    if (m.find("URLList") != m.end() && !m["URLList"].empty()) {
      if (typeid(vector<boost::any>) == m["URLList"].type()) {
        vector<TargetVolumeSegmentAdvanceRequestURLList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["URLList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TargetVolumeSegmentAdvanceRequestURLList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        URLList = make_shared<vector<TargetVolumeSegmentAdvanceRequestURLList>>(expect1);
      }
    }
  }


  virtual ~TargetVolumeSegmentAdvanceRequest() = default;
};
class TargetVolumeSegmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> resultURL{};

  TargetVolumeSegmentResponseBodyData() {}

  explicit TargetVolumeSegmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultURL) {
      res["ResultURL"] = boost::any(*resultURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultURL") != m.end() && !m["ResultURL"].empty()) {
      resultURL = make_shared<string>(boost::any_cast<string>(m["ResultURL"]));
    }
  }


  virtual ~TargetVolumeSegmentResponseBodyData() = default;
};
class TargetVolumeSegmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<TargetVolumeSegmentResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  TargetVolumeSegmentResponseBody() {}

  explicit TargetVolumeSegmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        TargetVolumeSegmentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TargetVolumeSegmentResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TargetVolumeSegmentResponseBody() = default;
};
class TargetVolumeSegmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TargetVolumeSegmentResponseBody> body{};

  TargetVolumeSegmentResponse() {}

  explicit TargetVolumeSegmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TargetVolumeSegmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TargetVolumeSegmentResponseBody>(model1);
      }
    }
  }


  virtual ~TargetVolumeSegmentResponse() = default;
};
class TranslateMedRequest : public Darabonba::Model {
public:
  shared_ptr<string> fromLanguage{};
  shared_ptr<string> text{};
  shared_ptr<string> toLanguage{};

  TranslateMedRequest() {}

  explicit TranslateMedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromLanguage) {
      res["FromLanguage"] = boost::any(*fromLanguage);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (toLanguage) {
      res["ToLanguage"] = boost::any(*toLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromLanguage") != m.end() && !m["FromLanguage"].empty()) {
      fromLanguage = make_shared<string>(boost::any_cast<string>(m["FromLanguage"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("ToLanguage") != m.end() && !m["ToLanguage"].empty()) {
      toLanguage = make_shared<string>(boost::any_cast<string>(m["ToLanguage"]));
    }
  }


  virtual ~TranslateMedRequest() = default;
};
class TranslateMedResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> text{};
  shared_ptr<long> words{};

  TranslateMedResponseBodyData() {}

  explicit TranslateMedResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (words) {
      res["Words"] = boost::any(*words);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<long>(boost::any_cast<long>(m["Words"]));
    }
  }


  virtual ~TranslateMedResponseBodyData() = default;
};
class TranslateMedResponseBody : public Darabonba::Model {
public:
  shared_ptr<TranslateMedResponseBodyData> data{};
  shared_ptr<string> requestId{};

  TranslateMedResponseBody() {}

  explicit TranslateMedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        TranslateMedResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TranslateMedResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TranslateMedResponseBody() = default;
};
class TranslateMedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TranslateMedResponseBody> body{};

  TranslateMedResponse() {}

  explicit TranslateMedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TranslateMedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TranslateMedResponseBody>(model1);
      }
    }
  }


  virtual ~TranslateMedResponse() = default;
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
  AnalyzeChestVesselResponse analyzeChestVesselWithOptions(shared_ptr<AnalyzeChestVesselRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AnalyzeChestVesselResponse analyzeChestVessel(shared_ptr<AnalyzeChestVesselRequest> request);
  AnalyzeChestVesselResponse analyzeChestVesselAdvance(shared_ptr<AnalyzeChestVesselAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CalcBMDResponse calcBMDWithOptions(shared_ptr<CalcBMDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CalcBMDResponse calcBMD(shared_ptr<CalcBMDRequest> request);
  CalcBMDResponse calcBMDAdvance(shared_ptr<CalcBMDAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CalcCACSResponse calcCACSWithOptions(shared_ptr<CalcCACSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CalcCACSResponse calcCACS(shared_ptr<CalcCACSRequest> request);
  CalcCACSResponse calcCACSAdvance(shared_ptr<CalcCACSAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClassifyFNFResponse classifyFNFWithOptions(shared_ptr<ClassifyFNFRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClassifyFNFResponse classifyFNF(shared_ptr<ClassifyFNFRequest> request);
  ClassifyFNFResponse classifyFNFAdvance(shared_ptr<ClassifyFNFAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectCovid19CadResponse detectCovid19CadWithOptions(shared_ptr<DetectCovid19CadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectCovid19CadResponse detectCovid19Cad(shared_ptr<DetectCovid19CadRequest> request);
  DetectCovid19CadResponse detectCovid19CadAdvance(shared_ptr<DetectCovid19CadAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectHipKeypointXRayResponse detectHipKeypointXRayWithOptions(shared_ptr<DetectHipKeypointXRayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectHipKeypointXRayResponse detectHipKeypointXRay(shared_ptr<DetectHipKeypointXRayRequest> request);
  DetectHipKeypointXRayResponse detectHipKeypointXRayAdvance(shared_ptr<DetectHipKeypointXRayAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectKneeKeypointXRayResponse detectKneeKeypointXRayWithOptions(shared_ptr<DetectKneeKeypointXRayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectKneeKeypointXRayResponse detectKneeKeypointXRay(shared_ptr<DetectKneeKeypointXRayRequest> request);
  DetectKneeKeypointXRayResponse detectKneeKeypointXRayAdvance(shared_ptr<DetectKneeKeypointXRayAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectKneeXRayResponse detectKneeXRayWithOptions(shared_ptr<DetectKneeXRayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectKneeXRayResponse detectKneeXRay(shared_ptr<DetectKneeXRayRequest> request);
  DetectKneeXRayResponse detectKneeXRayAdvance(shared_ptr<DetectKneeXRayAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectLiverSteatosisResponse detectLiverSteatosisWithOptions(shared_ptr<DetectLiverSteatosisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectLiverSteatosisResponse detectLiverSteatosis(shared_ptr<DetectLiverSteatosisRequest> request);
  DetectLiverSteatosisResponse detectLiverSteatosisAdvance(shared_ptr<DetectLiverSteatosisAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectLungNoduleResponse detectLungNoduleWithOptions(shared_ptr<DetectLungNoduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectLungNoduleResponse detectLungNodule(shared_ptr<DetectLungNoduleRequest> request);
  DetectLungNoduleResponse detectLungNoduleAdvance(shared_ptr<DetectLungNoduleAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectLymphResponse detectLymphWithOptions(shared_ptr<DetectLymphRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectLymphResponse detectLymph(shared_ptr<DetectLymphRequest> request);
  DetectLymphResponse detectLymphAdvance(shared_ptr<DetectLymphAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectPancResponse detectPancWithOptions(shared_ptr<DetectPancRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectPancResponse detectPanc(shared_ptr<DetectPancRequest> request);
  DetectPancResponse detectPancAdvance(shared_ptr<DetectPancAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectRibFractureResponse detectRibFractureWithOptions(shared_ptr<DetectRibFractureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectRibFractureResponse detectRibFracture(shared_ptr<DetectRibFractureRequest> request);
  DetectRibFractureResponse detectRibFractureAdvance(shared_ptr<DetectRibFractureAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectSkinDiseaseResponse detectSkinDiseaseWithOptions(shared_ptr<DetectSkinDiseaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectSkinDiseaseResponse detectSkinDisease(shared_ptr<DetectSkinDiseaseRequest> request);
  DetectSkinDiseaseResponse detectSkinDiseaseAdvance(shared_ptr<DetectSkinDiseaseAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectSpineMRIResponse detectSpineMRIWithOptions(shared_ptr<DetectSpineMRIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectSpineMRIResponse detectSpineMRI(shared_ptr<DetectSpineMRIRequest> request);
  DetectSpineMRIResponse detectSpineMRIAdvance(shared_ptr<DetectSpineMRIAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FeedbackSessionResponse feedbackSessionWithOptions(shared_ptr<FeedbackSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FeedbackSessionResponse feedbackSession(shared_ptr<FeedbackSessionRequest> request);
  GetAsyncJobResultResponse getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request);
  PredictCVDResponse predictCVDWithOptions(shared_ptr<PredictCVDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PredictCVDResponse predictCVD(shared_ptr<PredictCVDRequest> request);
  PredictCVDResponse predictCVDAdvance(shared_ptr<PredictCVDAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunCTRegistrationResponse runCTRegistrationWithOptions(shared_ptr<RunCTRegistrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunCTRegistrationResponse runCTRegistration(shared_ptr<RunCTRegistrationRequest> request);
  RunCTRegistrationResponse runCTRegistrationAdvance(shared_ptr<RunCTRegistrationAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunMedQAResponse runMedQAWithOptions(shared_ptr<RunMedQARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunMedQAResponse runMedQA(shared_ptr<RunMedQARequest> request);
  RunMedQAResponse runMedQAAdvance(shared_ptr<RunMedQAAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScreenCRCResponse screenCRCWithOptions(shared_ptr<ScreenCRCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScreenCRCResponse screenCRC(shared_ptr<ScreenCRCRequest> request);
  ScreenCRCResponse screenCRCAdvance(shared_ptr<ScreenCRCAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScreenChestCTResponse screenChestCTWithOptions(shared_ptr<ScreenChestCTRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScreenChestCTResponse screenChestCT(shared_ptr<ScreenChestCTRequest> request);
  ScreenChestCTResponse screenChestCTAdvance(shared_ptr<ScreenChestCTAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScreenECResponse screenECWithOptions(shared_ptr<ScreenECRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScreenECResponse screenEC(shared_ptr<ScreenECRequest> request);
  ScreenGCResponse screenGCWithOptions(shared_ptr<ScreenGCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScreenGCResponse screenGC(shared_ptr<ScreenGCRequest> request);
  ScreenGCResponse screenGCAdvance(shared_ptr<ScreenGCAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScreenLCResponse screenLCWithOptions(shared_ptr<ScreenLCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScreenLCResponse screenLC(shared_ptr<ScreenLCRequest> request);
  ScreenLCResponse screenLCAdvance(shared_ptr<ScreenLCAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentLymphNodeResponse segmentLymphNodeWithOptions(shared_ptr<SegmentLymphNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentLymphNodeResponse segmentLymphNode(shared_ptr<SegmentLymphNodeRequest> request);
  SegmentLymphNodeResponse segmentLymphNodeAdvance(shared_ptr<SegmentLymphNodeAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentOARResponse segmentOARWithOptions(shared_ptr<SegmentOARRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SegmentOARResponse segmentOAR(shared_ptr<SegmentOARRequest> request);
  SegmentOARResponse segmentOARAdvance(shared_ptr<SegmentOARAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TargetVolumeSegmentResponse targetVolumeSegmentWithOptions(shared_ptr<TargetVolumeSegmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TargetVolumeSegmentResponse targetVolumeSegment(shared_ptr<TargetVolumeSegmentRequest> request);
  TargetVolumeSegmentResponse targetVolumeSegmentAdvance(shared_ptr<TargetVolumeSegmentAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TranslateMedResponse translateMedWithOptions(shared_ptr<TranslateMedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TranslateMedResponse translateMed(shared_ptr<TranslateMedRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Imageprocess20200320

#endif
