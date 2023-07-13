// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ENERGYEXPERTEXTERNAL20220923_H_
#define ALIBABACLOUD_ENERGYEXPERTEXTERNAL20220923_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_EnergyExpertExternal20220923 {
class GetDeviceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> ds{};
  shared_ptr<string> factoryId{};

  GetDeviceInfoRequest() {}

  explicit GetDeviceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["deviceId"] = boost::any(*deviceId);
    }
    if (ds) {
      res["ds"] = boost::any(*ds);
    }
    if (factoryId) {
      res["factoryId"] = boost::any(*factoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceId") != m.end() && !m["deviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["deviceId"]));
    }
    if (m.find("ds") != m.end() && !m["ds"].empty()) {
      ds = make_shared<string>(boost::any_cast<string>(m["ds"]));
    }
    if (m.find("factoryId") != m.end() && !m["factoryId"].empty()) {
      factoryId = make_shared<string>(boost::any_cast<string>(m["factoryId"]));
    }
  }


  virtual ~GetDeviceInfoRequest() = default;
};
class GetDeviceInfoResponseBodyDataRecordList : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};
  shared_ptr<string> paramName{};
  shared_ptr<string> statisticsDate{};
  shared_ptr<string> type{};
  shared_ptr<string> unit{};
  shared_ptr<double> value{};

  GetDeviceInfoResponseBodyDataRecordList() {}

  explicit GetDeviceInfoResponseBodyDataRecordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (paramName) {
      res["paramName"] = boost::any(*paramName);
    }
    if (statisticsDate) {
      res["statisticsDate"] = boost::any(*statisticsDate);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("paramName") != m.end() && !m["paramName"].empty()) {
      paramName = make_shared<string>(boost::any_cast<string>(m["paramName"]));
    }
    if (m.find("statisticsDate") != m.end() && !m["statisticsDate"].empty()) {
      statisticsDate = make_shared<string>(boost::any_cast<string>(m["statisticsDate"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["value"]));
    }
  }


  virtual ~GetDeviceInfoResponseBodyDataRecordList() = default;
};
class GetDeviceInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> firstTypeName{};
  shared_ptr<vector<GetDeviceInfoResponseBodyDataRecordList>> recordList{};
  shared_ptr<string> secondTypeName{};

  GetDeviceInfoResponseBodyData() {}

  explicit GetDeviceInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["deviceId"] = boost::any(*deviceId);
    }
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (firstTypeName) {
      res["firstTypeName"] = boost::any(*firstTypeName);
    }
    if (recordList) {
      vector<boost::any> temp1;
      for(auto item1:*recordList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["recordList"] = boost::any(temp1);
    }
    if (secondTypeName) {
      res["secondTypeName"] = boost::any(*secondTypeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceId") != m.end() && !m["deviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["deviceId"]));
    }
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("firstTypeName") != m.end() && !m["firstTypeName"].empty()) {
      firstTypeName = make_shared<string>(boost::any_cast<string>(m["firstTypeName"]));
    }
    if (m.find("recordList") != m.end() && !m["recordList"].empty()) {
      if (typeid(vector<boost::any>) == m["recordList"].type()) {
        vector<GetDeviceInfoResponseBodyDataRecordList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["recordList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeviceInfoResponseBodyDataRecordList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recordList = make_shared<vector<GetDeviceInfoResponseBodyDataRecordList>>(expect1);
      }
    }
    if (m.find("secondTypeName") != m.end() && !m["secondTypeName"].empty()) {
      secondTypeName = make_shared<string>(boost::any_cast<string>(m["secondTypeName"]));
    }
  }


  virtual ~GetDeviceInfoResponseBodyData() = default;
};
class GetDeviceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDeviceInfoResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDeviceInfoResponseBody() {}

  explicit GetDeviceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
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
        GetDeviceInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDeviceInfoResponseBodyData>(model1);
      }
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetDeviceInfoResponseBody() = default;
};
class GetDeviceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceInfoResponseBody> body{};

  GetDeviceInfoResponse() {}

  explicit GetDeviceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceInfoResponse() = default;
};
class GetDeviceListRequest : public Darabonba::Model {
public:
  shared_ptr<string> factoryId{};

  GetDeviceListRequest() {}

  explicit GetDeviceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (factoryId) {
      res["factoryId"] = boost::any(*factoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("factoryId") != m.end() && !m["factoryId"].empty()) {
      factoryId = make_shared<string>(boost::any_cast<string>(m["factoryId"]));
    }
  }


  virtual ~GetDeviceListRequest() = default;
};
class GetDeviceListResponseBodyDataDeviceListInfo : public Darabonba::Model {
public:
  shared_ptr<long> constKva{};
  shared_ptr<long> ct{};
  shared_ptr<long> magnification{};
  shared_ptr<long> pressure{};
  shared_ptr<long> pt{};

  GetDeviceListResponseBodyDataDeviceListInfo() {}

  explicit GetDeviceListResponseBodyDataDeviceListInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constKva) {
      res["constKva"] = boost::any(*constKva);
    }
    if (ct) {
      res["ct"] = boost::any(*ct);
    }
    if (magnification) {
      res["magnification"] = boost::any(*magnification);
    }
    if (pressure) {
      res["pressure"] = boost::any(*pressure);
    }
    if (pt) {
      res["pt"] = boost::any(*pt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("constKva") != m.end() && !m["constKva"].empty()) {
      constKva = make_shared<long>(boost::any_cast<long>(m["constKva"]));
    }
    if (m.find("ct") != m.end() && !m["ct"].empty()) {
      ct = make_shared<long>(boost::any_cast<long>(m["ct"]));
    }
    if (m.find("magnification") != m.end() && !m["magnification"].empty()) {
      magnification = make_shared<long>(boost::any_cast<long>(m["magnification"]));
    }
    if (m.find("pressure") != m.end() && !m["pressure"].empty()) {
      pressure = make_shared<long>(boost::any_cast<long>(m["pressure"]));
    }
    if (m.find("pt") != m.end() && !m["pt"].empty()) {
      pt = make_shared<long>(boost::any_cast<long>(m["pt"]));
    }
  }


  virtual ~GetDeviceListResponseBodyDataDeviceListInfo() = default;
};
class GetDeviceListResponseBodyDataDeviceList : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> firstTypeName{};
  shared_ptr<GetDeviceListResponseBodyDataDeviceListInfo> info{};
  shared_ptr<string> parentDevice{};
  shared_ptr<string> secondTypeName{};

  GetDeviceListResponseBodyDataDeviceList() {}

  explicit GetDeviceListResponseBodyDataDeviceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["deviceId"] = boost::any(*deviceId);
    }
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (firstTypeName) {
      res["firstTypeName"] = boost::any(*firstTypeName);
    }
    if (info) {
      res["info"] = info ? boost::any(info->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parentDevice) {
      res["parentDevice"] = boost::any(*parentDevice);
    }
    if (secondTypeName) {
      res["secondTypeName"] = boost::any(*secondTypeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceId") != m.end() && !m["deviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["deviceId"]));
    }
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("firstTypeName") != m.end() && !m["firstTypeName"].empty()) {
      firstTypeName = make_shared<string>(boost::any_cast<string>(m["firstTypeName"]));
    }
    if (m.find("info") != m.end() && !m["info"].empty()) {
      if (typeid(map<string, boost::any>) == m["info"].type()) {
        GetDeviceListResponseBodyDataDeviceListInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["info"]));
        info = make_shared<GetDeviceListResponseBodyDataDeviceListInfo>(model1);
      }
    }
    if (m.find("parentDevice") != m.end() && !m["parentDevice"].empty()) {
      parentDevice = make_shared<string>(boost::any_cast<string>(m["parentDevice"]));
    }
    if (m.find("secondTypeName") != m.end() && !m["secondTypeName"].empty()) {
      secondTypeName = make_shared<string>(boost::any_cast<string>(m["secondTypeName"]));
    }
  }


  virtual ~GetDeviceListResponseBodyDataDeviceList() = default;
};
class GetDeviceListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetDeviceListResponseBodyDataDeviceList>> deviceList{};
  shared_ptr<string> factoryId{};
  shared_ptr<long> httpCode{};
  shared_ptr<bool> success{};

  GetDeviceListResponseBodyData() {}

  explicit GetDeviceListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (deviceList) {
      vector<boost::any> temp1;
      for(auto item1:*deviceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["deviceList"] = boost::any(temp1);
    }
    if (factoryId) {
      res["factoryId"] = boost::any(*factoryId);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
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
    if (m.find("deviceList") != m.end() && !m["deviceList"].empty()) {
      if (typeid(vector<boost::any>) == m["deviceList"].type()) {
        vector<GetDeviceListResponseBodyDataDeviceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["deviceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeviceListResponseBodyDataDeviceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceList = make_shared<vector<GetDeviceListResponseBodyDataDeviceList>>(expect1);
      }
    }
    if (m.find("factoryId") != m.end() && !m["factoryId"].empty()) {
      factoryId = make_shared<string>(boost::any_cast<string>(m["factoryId"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetDeviceListResponseBodyData() = default;
};
class GetDeviceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDeviceListResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDeviceListResponseBody() {}

  explicit GetDeviceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
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
        GetDeviceListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDeviceListResponseBodyData>(model1);
      }
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetDeviceListResponseBody() = default;
};
class GetDeviceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceListResponseBody> body{};

  GetDeviceListResponse() {}

  explicit GetDeviceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceListResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceListResponse() = default;
};
class GetOrgAndFactoryResponseBodyDataFactoryList : public Darabonba::Model {
public:
  shared_ptr<string> factoryId{};
  shared_ptr<string> factoryName{};

  GetOrgAndFactoryResponseBodyDataFactoryList() {}

  explicit GetOrgAndFactoryResponseBodyDataFactoryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (factoryId) {
      res["factoryId"] = boost::any(*factoryId);
    }
    if (factoryName) {
      res["factoryName"] = boost::any(*factoryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("factoryId") != m.end() && !m["factoryId"].empty()) {
      factoryId = make_shared<string>(boost::any_cast<string>(m["factoryId"]));
    }
    if (m.find("factoryName") != m.end() && !m["factoryName"].empty()) {
      factoryName = make_shared<string>(boost::any_cast<string>(m["factoryName"]));
    }
  }


  virtual ~GetOrgAndFactoryResponseBodyDataFactoryList() = default;
};
class GetOrgAndFactoryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aliyunPk{};
  shared_ptr<vector<GetOrgAndFactoryResponseBodyDataFactoryList>> factoryList{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> organizationName{};

  GetOrgAndFactoryResponseBodyData() {}

  explicit GetOrgAndFactoryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunPk) {
      res["aliyunPk"] = boost::any(*aliyunPk);
    }
    if (factoryList) {
      vector<boost::any> temp1;
      for(auto item1:*factoryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["factoryList"] = boost::any(temp1);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    if (organizationName) {
      res["organizationName"] = boost::any(*organizationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunPk") != m.end() && !m["aliyunPk"].empty()) {
      aliyunPk = make_shared<string>(boost::any_cast<string>(m["aliyunPk"]));
    }
    if (m.find("factoryList") != m.end() && !m["factoryList"].empty()) {
      if (typeid(vector<boost::any>) == m["factoryList"].type()) {
        vector<GetOrgAndFactoryResponseBodyDataFactoryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["factoryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOrgAndFactoryResponseBodyDataFactoryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        factoryList = make_shared<vector<GetOrgAndFactoryResponseBodyDataFactoryList>>(expect1);
      }
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
    if (m.find("organizationName") != m.end() && !m["organizationName"].empty()) {
      organizationName = make_shared<string>(boost::any_cast<string>(m["organizationName"]));
    }
  }


  virtual ~GetOrgAndFactoryResponseBodyData() = default;
};
class GetOrgAndFactoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOrgAndFactoryResponseBodyData>> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetOrgAndFactoryResponseBody() {}

  explicit GetOrgAndFactoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
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
        vector<GetOrgAndFactoryResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOrgAndFactoryResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOrgAndFactoryResponseBodyData>>(expect1);
      }
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetOrgAndFactoryResponseBody() = default;
};
class GetOrgAndFactoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOrgAndFactoryResponseBody> body{};

  GetOrgAndFactoryResponse() {}

  explicit GetOrgAndFactoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrgAndFactoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrgAndFactoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrgAndFactoryResponse() = default;
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
  GetDeviceInfoResponse getDeviceInfoWithOptions(shared_ptr<GetDeviceInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceInfoResponse getDeviceInfo(shared_ptr<GetDeviceInfoRequest> request);
  GetDeviceListResponse getDeviceListWithOptions(shared_ptr<GetDeviceListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceListResponse getDeviceList(shared_ptr<GetDeviceListRequest> request);
  GetOrgAndFactoryResponse getOrgAndFactoryWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrgAndFactoryResponse getOrgAndFactory();

  virtual ~Client() = default;
};
} // namespace Alibabacloud_EnergyExpertExternal20220923

#endif
