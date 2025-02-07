// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_WSS20211221_H_
#define ALIBABACLOUD_WSS20211221_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Wss20211221 {
class DescribeDeliveryAddressResponseBodyAddressesArea : public Darabonba::Model {
public:
  shared_ptr<long> areaId{};
  shared_ptr<string> areaName{};

  DescribeDeliveryAddressResponseBodyAddressesArea() {}

  explicit DescribeDeliveryAddressResponseBodyAddressesArea(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (areaId) {
      res["AreaId"] = boost::any(*areaId);
    }
    if (areaName) {
      res["AreaName"] = boost::any(*areaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AreaId") != m.end() && !m["AreaId"].empty()) {
      areaId = make_shared<long>(boost::any_cast<long>(m["AreaId"]));
    }
    if (m.find("AreaName") != m.end() && !m["AreaName"].empty()) {
      areaName = make_shared<string>(boost::any_cast<string>(m["AreaName"]));
    }
  }


  virtual ~DescribeDeliveryAddressResponseBodyAddressesArea() = default;
};
class DescribeDeliveryAddressResponseBodyAddressesCity : public Darabonba::Model {
public:
  shared_ptr<long> cityId{};
  shared_ptr<string> cityName{};

  DescribeDeliveryAddressResponseBodyAddressesCity() {}

  explicit DescribeDeliveryAddressResponseBodyAddressesCity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityId) {
      res["CityId"] = boost::any(*cityId);
    }
    if (cityName) {
      res["CityName"] = boost::any(*cityName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CityId") != m.end() && !m["CityId"].empty()) {
      cityId = make_shared<long>(boost::any_cast<long>(m["CityId"]));
    }
    if (m.find("CityName") != m.end() && !m["CityName"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["CityName"]));
    }
  }


  virtual ~DescribeDeliveryAddressResponseBodyAddressesCity() = default;
};
class DescribeDeliveryAddressResponseBodyAddressesProvince : public Darabonba::Model {
public:
  shared_ptr<long> provinceId{};
  shared_ptr<string> provinceName{};

  DescribeDeliveryAddressResponseBodyAddressesProvince() {}

  explicit DescribeDeliveryAddressResponseBodyAddressesProvince(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (provinceId) {
      res["ProvinceId"] = boost::any(*provinceId);
    }
    if (provinceName) {
      res["ProvinceName"] = boost::any(*provinceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProvinceId") != m.end() && !m["ProvinceId"].empty()) {
      provinceId = make_shared<long>(boost::any_cast<long>(m["ProvinceId"]));
    }
    if (m.find("ProvinceName") != m.end() && !m["ProvinceName"].empty()) {
      provinceName = make_shared<string>(boost::any_cast<string>(m["ProvinceName"]));
    }
  }


  virtual ~DescribeDeliveryAddressResponseBodyAddressesProvince() = default;
};
class DescribeDeliveryAddressResponseBodyAddressesTown : public Darabonba::Model {
public:
  shared_ptr<long> townId{};
  shared_ptr<string> townName{};

  DescribeDeliveryAddressResponseBodyAddressesTown() {}

  explicit DescribeDeliveryAddressResponseBodyAddressesTown(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (townId) {
      res["TownId"] = boost::any(*townId);
    }
    if (townName) {
      res["TownName"] = boost::any(*townName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TownId") != m.end() && !m["TownId"].empty()) {
      townId = make_shared<long>(boost::any_cast<long>(m["TownId"]));
    }
    if (m.find("TownName") != m.end() && !m["TownName"].empty()) {
      townName = make_shared<string>(boost::any_cast<string>(m["TownName"]));
    }
  }


  virtual ~DescribeDeliveryAddressResponseBodyAddressesTown() = default;
};
class DescribeDeliveryAddressResponseBodyAddresses : public Darabonba::Model {
public:
  shared_ptr<DescribeDeliveryAddressResponseBodyAddressesArea> area{};
  shared_ptr<DescribeDeliveryAddressResponseBodyAddressesCity> city{};
  shared_ptr<string> contacts{};
  shared_ptr<bool> defaultAddress{};
  shared_ptr<string> detail{};
  shared_ptr<string> mobile{};
  shared_ptr<string> postalCode{};
  shared_ptr<DescribeDeliveryAddressResponseBodyAddressesProvince> province{};
  shared_ptr<DescribeDeliveryAddressResponseBodyAddressesTown> town{};

  DescribeDeliveryAddressResponseBodyAddresses() {}

  explicit DescribeDeliveryAddressResponseBodyAddresses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (area) {
      res["Area"] = area ? boost::any(area->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (city) {
      res["City"] = city ? boost::any(city->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (contacts) {
      res["Contacts"] = boost::any(*contacts);
    }
    if (defaultAddress) {
      res["DefaultAddress"] = boost::any(*defaultAddress);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (postalCode) {
      res["PostalCode"] = boost::any(*postalCode);
    }
    if (province) {
      res["Province"] = province ? boost::any(province->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (town) {
      res["Town"] = town ? boost::any(town->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Area") != m.end() && !m["Area"].empty()) {
      if (typeid(map<string, boost::any>) == m["Area"].type()) {
        DescribeDeliveryAddressResponseBodyAddressesArea model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Area"]));
        area = make_shared<DescribeDeliveryAddressResponseBodyAddressesArea>(model1);
      }
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      if (typeid(map<string, boost::any>) == m["City"].type()) {
        DescribeDeliveryAddressResponseBodyAddressesCity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["City"]));
        city = make_shared<DescribeDeliveryAddressResponseBodyAddressesCity>(model1);
      }
    }
    if (m.find("Contacts") != m.end() && !m["Contacts"].empty()) {
      contacts = make_shared<string>(boost::any_cast<string>(m["Contacts"]));
    }
    if (m.find("DefaultAddress") != m.end() && !m["DefaultAddress"].empty()) {
      defaultAddress = make_shared<bool>(boost::any_cast<bool>(m["DefaultAddress"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("PostalCode") != m.end() && !m["PostalCode"].empty()) {
      postalCode = make_shared<string>(boost::any_cast<string>(m["PostalCode"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      if (typeid(map<string, boost::any>) == m["Province"].type()) {
        DescribeDeliveryAddressResponseBodyAddressesProvince model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Province"]));
        province = make_shared<DescribeDeliveryAddressResponseBodyAddressesProvince>(model1);
      }
    }
    if (m.find("Town") != m.end() && !m["Town"].empty()) {
      if (typeid(map<string, boost::any>) == m["Town"].type()) {
        DescribeDeliveryAddressResponseBodyAddressesTown model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Town"]));
        town = make_shared<DescribeDeliveryAddressResponseBodyAddressesTown>(model1);
      }
    }
  }


  virtual ~DescribeDeliveryAddressResponseBodyAddresses() = default;
};
class DescribeDeliveryAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDeliveryAddressResponseBodyAddresses>> addresses{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDeliveryAddressResponseBody() {}

  explicit DescribeDeliveryAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      vector<boost::any> temp1;
      for(auto item1:*addresses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Addresses"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      if (typeid(vector<boost::any>) == m["Addresses"].type()) {
        vector<DescribeDeliveryAddressResponseBodyAddresses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Addresses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeliveryAddressResponseBodyAddresses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addresses = make_shared<vector<DescribeDeliveryAddressResponseBodyAddresses>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDeliveryAddressResponseBody() = default;
};
class DescribeDeliveryAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDeliveryAddressResponseBody> body{};

  DescribeDeliveryAddressResponse() {}

  explicit DescribeDeliveryAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDeliveryAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDeliveryAddressResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDeliveryAddressResponse() = default;
};
class DescribePackageDeductionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<vector<string>> packageIds{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> startTime{};

  DescribePackageDeductionsRequest() {}

  explicit DescribePackageDeductionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (packageIds) {
      res["PackageIds"] = boost::any(*packageIds);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PackageIds") != m.end() && !m["PackageIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PackageIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PackageIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      packageIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribePackageDeductionsRequest() = default;
};
class DescribePackageDeductionsResponseBodyDeductions : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> desktopType{};
  shared_ptr<string> endTime{};
  shared_ptr<string> instanceState{};
  shared_ptr<long> memory{};
  shared_ptr<string> osType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> staTime{};
  shared_ptr<double> usedCoreTime{};
  shared_ptr<long> usedTime{};

  DescribePackageDeductionsResponseBodyDeductions() {}

  explicit DescribePackageDeductionsResponseBodyDeductions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (desktopType) {
      res["DesktopType"] = boost::any(*desktopType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceState) {
      res["InstanceState"] = boost::any(*instanceState);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (staTime) {
      res["StaTime"] = boost::any(*staTime);
    }
    if (usedCoreTime) {
      res["UsedCoreTime"] = boost::any(*usedCoreTime);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("DesktopType") != m.end() && !m["DesktopType"].empty()) {
      desktopType = make_shared<string>(boost::any_cast<string>(m["DesktopType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceState") != m.end() && !m["InstanceState"].empty()) {
      instanceState = make_shared<string>(boost::any_cast<string>(m["InstanceState"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StaTime") != m.end() && !m["StaTime"].empty()) {
      staTime = make_shared<string>(boost::any_cast<string>(m["StaTime"]));
    }
    if (m.find("UsedCoreTime") != m.end() && !m["UsedCoreTime"].empty()) {
      usedCoreTime = make_shared<double>(boost::any_cast<double>(m["UsedCoreTime"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
  }


  virtual ~DescribePackageDeductionsResponseBodyDeductions() = default;
};
class DescribePackageDeductionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePackageDeductionsResponseBodyDeductions>> deductions{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<double> totalUsedCoreTime{};
  shared_ptr<long> totalUsedTime{};

  DescribePackageDeductionsResponseBody() {}

  explicit DescribePackageDeductionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deductions) {
      vector<boost::any> temp1;
      for(auto item1:*deductions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Deductions"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalUsedCoreTime) {
      res["TotalUsedCoreTime"] = boost::any(*totalUsedCoreTime);
    }
    if (totalUsedTime) {
      res["TotalUsedTime"] = boost::any(*totalUsedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Deductions") != m.end() && !m["Deductions"].empty()) {
      if (typeid(vector<boost::any>) == m["Deductions"].type()) {
        vector<DescribePackageDeductionsResponseBodyDeductions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Deductions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePackageDeductionsResponseBodyDeductions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deductions = make_shared<vector<DescribePackageDeductionsResponseBodyDeductions>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalUsedCoreTime") != m.end() && !m["TotalUsedCoreTime"].empty()) {
      totalUsedCoreTime = make_shared<double>(boost::any_cast<double>(m["TotalUsedCoreTime"]));
    }
    if (m.find("TotalUsedTime") != m.end() && !m["TotalUsedTime"].empty()) {
      totalUsedTime = make_shared<long>(boost::any_cast<long>(m["TotalUsedTime"]));
    }
  }


  virtual ~DescribePackageDeductionsResponseBody() = default;
};
class DescribePackageDeductionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePackageDeductionsResponseBody> body{};

  DescribePackageDeductionsResponse() {}

  explicit DescribePackageDeductionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePackageDeductionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePackageDeductionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePackageDeductionsResponse() = default;
};
class ModifyInstancePropertiesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> key{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> value{};

  ModifyInstancePropertiesRequest() {}

  explicit ModifyInstancePropertiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ModifyInstancePropertiesRequest() = default;
};
class ModifyInstancePropertiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstancePropertiesResponseBody() {}

  explicit ModifyInstancePropertiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstancePropertiesResponseBody() = default;
};
class ModifyInstancePropertiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyInstancePropertiesResponseBody> body{};

  ModifyInstancePropertiesResponse() {}

  explicit ModifyInstancePropertiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstancePropertiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstancePropertiesResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstancePropertiesResponse() = default;
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
  DescribeDeliveryAddressResponse describeDeliveryAddressWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeliveryAddressResponse describeDeliveryAddress();
  DescribePackageDeductionsResponse describePackageDeductionsWithOptions(shared_ptr<DescribePackageDeductionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePackageDeductionsResponse describePackageDeductions(shared_ptr<DescribePackageDeductionsRequest> request);
  ModifyInstancePropertiesResponse modifyInstancePropertiesWithOptions(shared_ptr<ModifyInstancePropertiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstancePropertiesResponse modifyInstanceProperties(shared_ptr<ModifyInstancePropertiesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Wss20211221

#endif
