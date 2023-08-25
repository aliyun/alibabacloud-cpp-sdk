// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EIPANYCAST20200309_H_
#define ALIBABACLOUD_EIPANYCAST20200309_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Eipanycast20200309 {
class AllocateAnycastEipAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> bandwidth{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceLocation{};

  AllocateAnycastEipAddressRequest() {}

  explicit AllocateAnycastEipAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceLocation) {
      res["ServiceLocation"] = boost::any(*serviceLocation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<string>(boost::any_cast<string>(m["Bandwidth"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceLocation") != m.end() && !m["ServiceLocation"].empty()) {
      serviceLocation = make_shared<string>(boost::any_cast<string>(m["ServiceLocation"]));
    }
  }


  virtual ~AllocateAnycastEipAddressRequest() = default;
};
class AllocateAnycastEipAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> anycastId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  AllocateAnycastEipAddressResponseBody() {}

  explicit AllocateAnycastEipAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anycastId) {
      res["AnycastId"] = boost::any(*anycastId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnycastId") != m.end() && !m["AnycastId"].empty()) {
      anycastId = make_shared<string>(boost::any_cast<string>(m["AnycastId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AllocateAnycastEipAddressResponseBody() = default;
};
class AllocateAnycastEipAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AllocateAnycastEipAddressResponseBody> body{};

  AllocateAnycastEipAddressResponse() {}

  explicit AllocateAnycastEipAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AllocateAnycastEipAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocateAnycastEipAddressResponseBody>(model1);
      }
    }
  }


  virtual ~AllocateAnycastEipAddressResponse() = default;
};
class AssociateAnycastEipAddressRequestPopLocations : public Darabonba::Model {
public:
  shared_ptr<string> popLocation{};

  AssociateAnycastEipAddressRequestPopLocations() {}

  explicit AssociateAnycastEipAddressRequestPopLocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (popLocation) {
      res["PopLocation"] = boost::any(*popLocation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PopLocation") != m.end() && !m["PopLocation"].empty()) {
      popLocation = make_shared<string>(boost::any_cast<string>(m["PopLocation"]));
    }
  }


  virtual ~AssociateAnycastEipAddressRequestPopLocations() = default;
};
class AssociateAnycastEipAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> anycastId{};
  shared_ptr<string> associationMode{};
  shared_ptr<string> bindInstanceId{};
  shared_ptr<string> bindInstanceRegionId{};
  shared_ptr<string> bindInstanceType{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<AssociateAnycastEipAddressRequestPopLocations>> popLocations{};
  shared_ptr<string> privateIpAddress{};

  AssociateAnycastEipAddressRequest() {}

  explicit AssociateAnycastEipAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anycastId) {
      res["AnycastId"] = boost::any(*anycastId);
    }
    if (associationMode) {
      res["AssociationMode"] = boost::any(*associationMode);
    }
    if (bindInstanceId) {
      res["BindInstanceId"] = boost::any(*bindInstanceId);
    }
    if (bindInstanceRegionId) {
      res["BindInstanceRegionId"] = boost::any(*bindInstanceRegionId);
    }
    if (bindInstanceType) {
      res["BindInstanceType"] = boost::any(*bindInstanceType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (popLocations) {
      vector<boost::any> temp1;
      for(auto item1:*popLocations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PopLocations"] = boost::any(temp1);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnycastId") != m.end() && !m["AnycastId"].empty()) {
      anycastId = make_shared<string>(boost::any_cast<string>(m["AnycastId"]));
    }
    if (m.find("AssociationMode") != m.end() && !m["AssociationMode"].empty()) {
      associationMode = make_shared<string>(boost::any_cast<string>(m["AssociationMode"]));
    }
    if (m.find("BindInstanceId") != m.end() && !m["BindInstanceId"].empty()) {
      bindInstanceId = make_shared<string>(boost::any_cast<string>(m["BindInstanceId"]));
    }
    if (m.find("BindInstanceRegionId") != m.end() && !m["BindInstanceRegionId"].empty()) {
      bindInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["BindInstanceRegionId"]));
    }
    if (m.find("BindInstanceType") != m.end() && !m["BindInstanceType"].empty()) {
      bindInstanceType = make_shared<string>(boost::any_cast<string>(m["BindInstanceType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("PopLocations") != m.end() && !m["PopLocations"].empty()) {
      if (typeid(vector<boost::any>) == m["PopLocations"].type()) {
        vector<AssociateAnycastEipAddressRequestPopLocations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PopLocations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AssociateAnycastEipAddressRequestPopLocations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        popLocations = make_shared<vector<AssociateAnycastEipAddressRequestPopLocations>>(expect1);
      }
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
  }


  virtual ~AssociateAnycastEipAddressRequest() = default;
};
class AssociateAnycastEipAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AssociateAnycastEipAddressResponseBody() {}

  explicit AssociateAnycastEipAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AssociateAnycastEipAddressResponseBody() = default;
};
class AssociateAnycastEipAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateAnycastEipAddressResponseBody> body{};

  AssociateAnycastEipAddressResponse() {}

  explicit AssociateAnycastEipAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateAnycastEipAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateAnycastEipAddressResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateAnycastEipAddressResponse() = default;
};
class DescribeAnycastEipAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> anycastId{};
  shared_ptr<string> bindInstanceId{};
  shared_ptr<string> ip{};

  DescribeAnycastEipAddressRequest() {}

  explicit DescribeAnycastEipAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anycastId) {
      res["AnycastId"] = boost::any(*anycastId);
    }
    if (bindInstanceId) {
      res["BindInstanceId"] = boost::any(*bindInstanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnycastId") != m.end() && !m["AnycastId"].empty()) {
      anycastId = make_shared<string>(boost::any_cast<string>(m["AnycastId"]));
    }
    if (m.find("BindInstanceId") != m.end() && !m["BindInstanceId"].empty()) {
      bindInstanceId = make_shared<string>(boost::any_cast<string>(m["BindInstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
  }


  virtual ~DescribeAnycastEipAddressRequest() = default;
};
class DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations : public Darabonba::Model {
public:
  shared_ptr<string> popLocation{};

  DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations() {}

  explicit DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (popLocation) {
      res["PopLocation"] = boost::any(*popLocation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PopLocation") != m.end() && !m["PopLocation"].empty()) {
      popLocation = make_shared<string>(boost::any_cast<string>(m["PopLocation"]));
    }
  }


  virtual ~DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations() = default;
};
class DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList : public Darabonba::Model {
public:
  shared_ptr<string> associationMode{};
  shared_ptr<string> bindInstanceId{};
  shared_ptr<string> bindInstanceRegionId{};
  shared_ptr<string> bindInstanceType{};
  shared_ptr<string> bindTime{};
  shared_ptr<vector<DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations>> popLocations{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> status{};

  DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList() {}

  explicit DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associationMode) {
      res["AssociationMode"] = boost::any(*associationMode);
    }
    if (bindInstanceId) {
      res["BindInstanceId"] = boost::any(*bindInstanceId);
    }
    if (bindInstanceRegionId) {
      res["BindInstanceRegionId"] = boost::any(*bindInstanceRegionId);
    }
    if (bindInstanceType) {
      res["BindInstanceType"] = boost::any(*bindInstanceType);
    }
    if (bindTime) {
      res["BindTime"] = boost::any(*bindTime);
    }
    if (popLocations) {
      vector<boost::any> temp1;
      for(auto item1:*popLocations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PopLocations"] = boost::any(temp1);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociationMode") != m.end() && !m["AssociationMode"].empty()) {
      associationMode = make_shared<string>(boost::any_cast<string>(m["AssociationMode"]));
    }
    if (m.find("BindInstanceId") != m.end() && !m["BindInstanceId"].empty()) {
      bindInstanceId = make_shared<string>(boost::any_cast<string>(m["BindInstanceId"]));
    }
    if (m.find("BindInstanceRegionId") != m.end() && !m["BindInstanceRegionId"].empty()) {
      bindInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["BindInstanceRegionId"]));
    }
    if (m.find("BindInstanceType") != m.end() && !m["BindInstanceType"].empty()) {
      bindInstanceType = make_shared<string>(boost::any_cast<string>(m["BindInstanceType"]));
    }
    if (m.find("BindTime") != m.end() && !m["BindTime"].empty()) {
      bindTime = make_shared<string>(boost::any_cast<string>(m["BindTime"]));
    }
    if (m.find("PopLocations") != m.end() && !m["PopLocations"].empty()) {
      if (typeid(vector<boost::any>) == m["PopLocations"].type()) {
        vector<DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PopLocations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        popLocations = make_shared<vector<DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations>>(expect1);
      }
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList() = default;
};
class DescribeAnycastEipAddressResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeAnycastEipAddressResponseBodyTags() {}

  explicit DescribeAnycastEipAddressResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeAnycastEipAddressResponseBodyTags() = default;
};
class DescribeAnycastEipAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<vector<DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList>> anycastEipBindInfoList{};
  shared_ptr<string> anycastId{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> bid{};
  shared_ptr<string> businessStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<string> ipAddress{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceLocation{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeAnycastEipAddressResponseBodyTags>> tags{};

  DescribeAnycastEipAddressResponseBody() {}

  explicit DescribeAnycastEipAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (anycastEipBindInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*anycastEipBindInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AnycastEipBindInfoList"] = boost::any(temp1);
    }
    if (anycastId) {
      res["AnycastId"] = boost::any(*anycastId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (businessStatus) {
      res["BusinessStatus"] = boost::any(*businessStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceLocation) {
      res["ServiceLocation"] = boost::any(*serviceLocation);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("AnycastEipBindInfoList") != m.end() && !m["AnycastEipBindInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AnycastEipBindInfoList"].type()) {
        vector<DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AnycastEipBindInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        anycastEipBindInfoList = make_shared<vector<DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList>>(expect1);
      }
    }
    if (m.find("AnycastId") != m.end() && !m["AnycastId"].empty()) {
      anycastId = make_shared<string>(boost::any_cast<string>(m["AnycastId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("BusinessStatus") != m.end() && !m["BusinessStatus"].empty()) {
      businessStatus = make_shared<string>(boost::any_cast<string>(m["BusinessStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceLocation") != m.end() && !m["ServiceLocation"].empty()) {
      serviceLocation = make_shared<string>(boost::any_cast<string>(m["ServiceLocation"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeAnycastEipAddressResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAnycastEipAddressResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeAnycastEipAddressResponseBodyTags>>(expect1);
      }
    }
  }


  virtual ~DescribeAnycastEipAddressResponseBody() = default;
};
class DescribeAnycastEipAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAnycastEipAddressResponseBody> body{};

  DescribeAnycastEipAddressResponse() {}

  explicit DescribeAnycastEipAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAnycastEipAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAnycastEipAddressResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAnycastEipAddressResponse() = default;
};
class DescribeAnycastPopLocationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceLocation{};

  DescribeAnycastPopLocationsRequest() {}

  explicit DescribeAnycastPopLocationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceLocation) {
      res["ServiceLocation"] = boost::any(*serviceLocation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceLocation") != m.end() && !m["ServiceLocation"].empty()) {
      serviceLocation = make_shared<string>(boost::any_cast<string>(m["ServiceLocation"]));
    }
  }


  virtual ~DescribeAnycastPopLocationsRequest() = default;
};
class DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};

  DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList() {}

  explicit DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
  }


  virtual ~DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList() = default;
};
class DescribeAnycastPopLocationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList>> anycastPopLocationList{};
  shared_ptr<string> count{};
  shared_ptr<string> requestId{};

  DescribeAnycastPopLocationsResponseBody() {}

  explicit DescribeAnycastPopLocationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anycastPopLocationList) {
      vector<boost::any> temp1;
      for(auto item1:*anycastPopLocationList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AnycastPopLocationList"] = boost::any(temp1);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnycastPopLocationList") != m.end() && !m["AnycastPopLocationList"].empty()) {
      if (typeid(vector<boost::any>) == m["AnycastPopLocationList"].type()) {
        vector<DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AnycastPopLocationList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        anycastPopLocationList = make_shared<vector<DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList>>(expect1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAnycastPopLocationsResponseBody() = default;
};
class DescribeAnycastPopLocationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAnycastPopLocationsResponseBody> body{};

  DescribeAnycastPopLocationsResponse() {}

  explicit DescribeAnycastPopLocationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAnycastPopLocationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAnycastPopLocationsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAnycastPopLocationsResponse() = default;
};
class DescribeAnycastServerRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceLocation{};

  DescribeAnycastServerRegionsRequest() {}

  explicit DescribeAnycastServerRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceLocation) {
      res["ServiceLocation"] = boost::any(*serviceLocation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceLocation") != m.end() && !m["ServiceLocation"].empty()) {
      serviceLocation = make_shared<string>(boost::any_cast<string>(m["ServiceLocation"]));
    }
  }


  virtual ~DescribeAnycastServerRegionsRequest() = default;
};
class DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};

  DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList() {}

  explicit DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
  }


  virtual ~DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList() = default;
};
class DescribeAnycastServerRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList>> anycastServerRegionList{};
  shared_ptr<string> count{};
  shared_ptr<string> requestId{};

  DescribeAnycastServerRegionsResponseBody() {}

  explicit DescribeAnycastServerRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anycastServerRegionList) {
      vector<boost::any> temp1;
      for(auto item1:*anycastServerRegionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AnycastServerRegionList"] = boost::any(temp1);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnycastServerRegionList") != m.end() && !m["AnycastServerRegionList"].empty()) {
      if (typeid(vector<boost::any>) == m["AnycastServerRegionList"].type()) {
        vector<DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AnycastServerRegionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        anycastServerRegionList = make_shared<vector<DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList>>(expect1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAnycastServerRegionsResponseBody() = default;
};
class DescribeAnycastServerRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAnycastServerRegionsResponseBody> body{};

  DescribeAnycastServerRegionsResponse() {}

  explicit DescribeAnycastServerRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAnycastServerRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAnycastServerRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAnycastServerRegionsResponse() = default;
};
class ListAnycastEipAddressesRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListAnycastEipAddressesRequestTags() {}

  explicit ListAnycastEipAddressesRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListAnycastEipAddressesRequestTags() = default;
};
class ListAnycastEipAddressesRequest : public Darabonba::Model {
public:
  shared_ptr<string> anycastEipAddress{};
  shared_ptr<string> anycastId{};
  shared_ptr<vector<string>> anycastIds{};
  shared_ptr<vector<string>> bindInstanceIds{};
  shared_ptr<string> businessStatus{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceLocation{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListAnycastEipAddressesRequestTags>> tags{};

  ListAnycastEipAddressesRequest() {}

  explicit ListAnycastEipAddressesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anycastEipAddress) {
      res["AnycastEipAddress"] = boost::any(*anycastEipAddress);
    }
    if (anycastId) {
      res["AnycastId"] = boost::any(*anycastId);
    }
    if (anycastIds) {
      res["AnycastIds"] = boost::any(*anycastIds);
    }
    if (bindInstanceIds) {
      res["BindInstanceIds"] = boost::any(*bindInstanceIds);
    }
    if (businessStatus) {
      res["BusinessStatus"] = boost::any(*businessStatus);
    }
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceLocation) {
      res["ServiceLocation"] = boost::any(*serviceLocation);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnycastEipAddress") != m.end() && !m["AnycastEipAddress"].empty()) {
      anycastEipAddress = make_shared<string>(boost::any_cast<string>(m["AnycastEipAddress"]));
    }
    if (m.find("AnycastId") != m.end() && !m["AnycastId"].empty()) {
      anycastId = make_shared<string>(boost::any_cast<string>(m["AnycastId"]));
    }
    if (m.find("AnycastIds") != m.end() && !m["AnycastIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AnycastIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AnycastIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      anycastIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BindInstanceIds") != m.end() && !m["BindInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BindInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BindInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bindInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BusinessStatus") != m.end() && !m["BusinessStatus"].empty()) {
      businessStatus = make_shared<string>(boost::any_cast<string>(m["BusinessStatus"]));
    }
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceLocation") != m.end() && !m["ServiceLocation"].empty()) {
      serviceLocation = make_shared<string>(boost::any_cast<string>(m["ServiceLocation"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListAnycastEipAddressesRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAnycastEipAddressesRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListAnycastEipAddressesRequestTags>>(expect1);
      }
    }
  }


  virtual ~ListAnycastEipAddressesRequest() = default;
};
class ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList : public Darabonba::Model {
public:
  shared_ptr<string> bindInstanceId{};
  shared_ptr<string> bindInstanceRegionId{};
  shared_ptr<string> bindInstanceType{};
  shared_ptr<string> bindTime{};

  ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList() {}

  explicit ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindInstanceId) {
      res["BindInstanceId"] = boost::any(*bindInstanceId);
    }
    if (bindInstanceRegionId) {
      res["BindInstanceRegionId"] = boost::any(*bindInstanceRegionId);
    }
    if (bindInstanceType) {
      res["BindInstanceType"] = boost::any(*bindInstanceType);
    }
    if (bindTime) {
      res["BindTime"] = boost::any(*bindTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindInstanceId") != m.end() && !m["BindInstanceId"].empty()) {
      bindInstanceId = make_shared<string>(boost::any_cast<string>(m["BindInstanceId"]));
    }
    if (m.find("BindInstanceRegionId") != m.end() && !m["BindInstanceRegionId"].empty()) {
      bindInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["BindInstanceRegionId"]));
    }
    if (m.find("BindInstanceType") != m.end() && !m["BindInstanceType"].empty()) {
      bindInstanceType = make_shared<string>(boost::any_cast<string>(m["BindInstanceType"]));
    }
    if (m.find("BindTime") != m.end() && !m["BindTime"].empty()) {
      bindTime = make_shared<string>(boost::any_cast<string>(m["BindTime"]));
    }
  }


  virtual ~ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList() = default;
};
class ListAnycastEipAddressesResponseBodyAnycastListTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListAnycastEipAddressesResponseBodyAnycastListTags() {}

  explicit ListAnycastEipAddressesResponseBodyAnycastListTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListAnycastEipAddressesResponseBodyAnycastListTags() = default;
};
class ListAnycastEipAddressesResponseBodyAnycastList : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<vector<ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList>> anycastEipBindInfoList{};
  shared_ptr<string> anycastId{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> businessStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<string> ipAddress{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceLocation{};
  shared_ptr<long> serviceManaged{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListAnycastEipAddressesResponseBodyAnycastListTags>> tags{};

  ListAnycastEipAddressesResponseBodyAnycastList() {}

  explicit ListAnycastEipAddressesResponseBodyAnycastList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (anycastEipBindInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*anycastEipBindInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AnycastEipBindInfoList"] = boost::any(temp1);
    }
    if (anycastId) {
      res["AnycastId"] = boost::any(*anycastId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (businessStatus) {
      res["BusinessStatus"] = boost::any(*businessStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceLocation) {
      res["ServiceLocation"] = boost::any(*serviceLocation);
    }
    if (serviceManaged) {
      res["ServiceManaged"] = boost::any(*serviceManaged);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("AnycastEipBindInfoList") != m.end() && !m["AnycastEipBindInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AnycastEipBindInfoList"].type()) {
        vector<ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AnycastEipBindInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        anycastEipBindInfoList = make_shared<vector<ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList>>(expect1);
      }
    }
    if (m.find("AnycastId") != m.end() && !m["AnycastId"].empty()) {
      anycastId = make_shared<string>(boost::any_cast<string>(m["AnycastId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("BusinessStatus") != m.end() && !m["BusinessStatus"].empty()) {
      businessStatus = make_shared<string>(boost::any_cast<string>(m["BusinessStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceLocation") != m.end() && !m["ServiceLocation"].empty()) {
      serviceLocation = make_shared<string>(boost::any_cast<string>(m["ServiceLocation"]));
    }
    if (m.find("ServiceManaged") != m.end() && !m["ServiceManaged"].empty()) {
      serviceManaged = make_shared<long>(boost::any_cast<long>(m["ServiceManaged"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListAnycastEipAddressesResponseBodyAnycastListTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAnycastEipAddressesResponseBodyAnycastListTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListAnycastEipAddressesResponseBodyAnycastListTags>>(expect1);
      }
    }
  }


  virtual ~ListAnycastEipAddressesResponseBodyAnycastList() = default;
};
class ListAnycastEipAddressesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAnycastEipAddressesResponseBodyAnycastList>> anycastList{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAnycastEipAddressesResponseBody() {}

  explicit ListAnycastEipAddressesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anycastList) {
      vector<boost::any> temp1;
      for(auto item1:*anycastList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AnycastList"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("AnycastList") != m.end() && !m["AnycastList"].empty()) {
      if (typeid(vector<boost::any>) == m["AnycastList"].type()) {
        vector<ListAnycastEipAddressesResponseBodyAnycastList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AnycastList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAnycastEipAddressesResponseBodyAnycastList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        anycastList = make_shared<vector<ListAnycastEipAddressesResponseBodyAnycastList>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAnycastEipAddressesResponseBody() = default;
};
class ListAnycastEipAddressesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAnycastEipAddressesResponseBody> body{};

  ListAnycastEipAddressesResponse() {}

  explicit ListAnycastEipAddressesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAnycastEipAddressesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAnycastEipAddressesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAnycastEipAddressesResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      vector<boost::any> temp1;
      for(auto item1:*tagResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResources"].type()) {
        vector<ListTagResourcesResponseBodyTagResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResources = make_shared<vector<ListTagResourcesResponseBodyTagResources>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ModifyAnycastEipAddressAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> anycastId{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  ModifyAnycastEipAddressAttributeRequest() {}

  explicit ModifyAnycastEipAddressAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anycastId) {
      res["AnycastId"] = boost::any(*anycastId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnycastId") != m.end() && !m["AnycastId"].empty()) {
      anycastId = make_shared<string>(boost::any_cast<string>(m["AnycastId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ModifyAnycastEipAddressAttributeRequest() = default;
};
class ModifyAnycastEipAddressAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAnycastEipAddressAttributeResponseBody() {}

  explicit ModifyAnycastEipAddressAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAnycastEipAddressAttributeResponseBody() = default;
};
class ModifyAnycastEipAddressAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAnycastEipAddressAttributeResponseBody> body{};

  ModifyAnycastEipAddressAttributeResponse() {}

  explicit ModifyAnycastEipAddressAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAnycastEipAddressAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAnycastEipAddressAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAnycastEipAddressAttributeResponse() = default;
};
class ModifyAnycastEipAddressSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> anycastId{};
  shared_ptr<string> bandwidth{};

  ModifyAnycastEipAddressSpecRequest() {}

  explicit ModifyAnycastEipAddressSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anycastId) {
      res["AnycastId"] = boost::any(*anycastId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnycastId") != m.end() && !m["AnycastId"].empty()) {
      anycastId = make_shared<string>(boost::any_cast<string>(m["AnycastId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<string>(boost::any_cast<string>(m["Bandwidth"]));
    }
  }


  virtual ~ModifyAnycastEipAddressSpecRequest() = default;
};
class ModifyAnycastEipAddressSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAnycastEipAddressSpecResponseBody() {}

  explicit ModifyAnycastEipAddressSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAnycastEipAddressSpecResponseBody() = default;
};
class ModifyAnycastEipAddressSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAnycastEipAddressSpecResponseBody> body{};

  ModifyAnycastEipAddressSpecResponse() {}

  explicit ModifyAnycastEipAddressSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAnycastEipAddressSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAnycastEipAddressSpecResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAnycastEipAddressSpecResponse() = default;
};
class ReleaseAnycastEipAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> anycastId{};
  shared_ptr<string> clientToken{};

  ReleaseAnycastEipAddressRequest() {}

  explicit ReleaseAnycastEipAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anycastId) {
      res["AnycastId"] = boost::any(*anycastId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnycastId") != m.end() && !m["AnycastId"].empty()) {
      anycastId = make_shared<string>(boost::any_cast<string>(m["AnycastId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~ReleaseAnycastEipAddressRequest() = default;
};
class ReleaseAnycastEipAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseAnycastEipAddressResponseBody() {}

  explicit ReleaseAnycastEipAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseAnycastEipAddressResponseBody() = default;
};
class ReleaseAnycastEipAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseAnycastEipAddressResponseBody> body{};

  ReleaseAnycastEipAddressResponse() {}

  explicit ReleaseAnycastEipAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseAnycastEipAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseAnycastEipAddressResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseAnycastEipAddressResponse() = default;
};
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UnassociateAnycastEipAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> anycastId{};
  shared_ptr<string> bindInstanceId{};
  shared_ptr<string> bindInstanceRegionId{};
  shared_ptr<string> bindInstanceType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> dryRun{};
  shared_ptr<string> privateIpAddress{};

  UnassociateAnycastEipAddressRequest() {}

  explicit UnassociateAnycastEipAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anycastId) {
      res["AnycastId"] = boost::any(*anycastId);
    }
    if (bindInstanceId) {
      res["BindInstanceId"] = boost::any(*bindInstanceId);
    }
    if (bindInstanceRegionId) {
      res["BindInstanceRegionId"] = boost::any(*bindInstanceRegionId);
    }
    if (bindInstanceType) {
      res["BindInstanceType"] = boost::any(*bindInstanceType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnycastId") != m.end() && !m["AnycastId"].empty()) {
      anycastId = make_shared<string>(boost::any_cast<string>(m["AnycastId"]));
    }
    if (m.find("BindInstanceId") != m.end() && !m["BindInstanceId"].empty()) {
      bindInstanceId = make_shared<string>(boost::any_cast<string>(m["BindInstanceId"]));
    }
    if (m.find("BindInstanceRegionId") != m.end() && !m["BindInstanceRegionId"].empty()) {
      bindInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["BindInstanceRegionId"]));
    }
    if (m.find("BindInstanceType") != m.end() && !m["BindInstanceType"].empty()) {
      bindInstanceType = make_shared<string>(boost::any_cast<string>(m["BindInstanceType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<string>(boost::any_cast<string>(m["DryRun"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
  }


  virtual ~UnassociateAnycastEipAddressRequest() = default;
};
class UnassociateAnycastEipAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnassociateAnycastEipAddressResponseBody() {}

  explicit UnassociateAnycastEipAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnassociateAnycastEipAddressResponseBody() = default;
};
class UnassociateAnycastEipAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnassociateAnycastEipAddressResponseBody> body{};

  UnassociateAnycastEipAddressResponse() {}

  explicit UnassociateAnycastEipAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnassociateAnycastEipAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnassociateAnycastEipAddressResponseBody>(model1);
      }
    }
  }


  virtual ~UnassociateAnycastEipAddressResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateAnycastEipAddressAssociationsRequestPopLocationAddList : public Darabonba::Model {
public:
  shared_ptr<string> popLocation{};

  UpdateAnycastEipAddressAssociationsRequestPopLocationAddList() {}

  explicit UpdateAnycastEipAddressAssociationsRequestPopLocationAddList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (popLocation) {
      res["PopLocation"] = boost::any(*popLocation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PopLocation") != m.end() && !m["PopLocation"].empty()) {
      popLocation = make_shared<string>(boost::any_cast<string>(m["PopLocation"]));
    }
  }


  virtual ~UpdateAnycastEipAddressAssociationsRequestPopLocationAddList() = default;
};
class UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList : public Darabonba::Model {
public:
  shared_ptr<string> popLocation{};

  UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList() {}

  explicit UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (popLocation) {
      res["PopLocation"] = boost::any(*popLocation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PopLocation") != m.end() && !m["PopLocation"].empty()) {
      popLocation = make_shared<string>(boost::any_cast<string>(m["PopLocation"]));
    }
  }


  virtual ~UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList() = default;
};
class UpdateAnycastEipAddressAssociationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> anycastId{};
  shared_ptr<string> associationMode{};
  shared_ptr<string> bindInstanceId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<UpdateAnycastEipAddressAssociationsRequestPopLocationAddList>> popLocationAddList{};
  shared_ptr<vector<UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList>> popLocationDeleteList{};

  UpdateAnycastEipAddressAssociationsRequest() {}

  explicit UpdateAnycastEipAddressAssociationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anycastId) {
      res["AnycastId"] = boost::any(*anycastId);
    }
    if (associationMode) {
      res["AssociationMode"] = boost::any(*associationMode);
    }
    if (bindInstanceId) {
      res["BindInstanceId"] = boost::any(*bindInstanceId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (popLocationAddList) {
      vector<boost::any> temp1;
      for(auto item1:*popLocationAddList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PopLocationAddList"] = boost::any(temp1);
    }
    if (popLocationDeleteList) {
      vector<boost::any> temp1;
      for(auto item1:*popLocationDeleteList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PopLocationDeleteList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnycastId") != m.end() && !m["AnycastId"].empty()) {
      anycastId = make_shared<string>(boost::any_cast<string>(m["AnycastId"]));
    }
    if (m.find("AssociationMode") != m.end() && !m["AssociationMode"].empty()) {
      associationMode = make_shared<string>(boost::any_cast<string>(m["AssociationMode"]));
    }
    if (m.find("BindInstanceId") != m.end() && !m["BindInstanceId"].empty()) {
      bindInstanceId = make_shared<string>(boost::any_cast<string>(m["BindInstanceId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("PopLocationAddList") != m.end() && !m["PopLocationAddList"].empty()) {
      if (typeid(vector<boost::any>) == m["PopLocationAddList"].type()) {
        vector<UpdateAnycastEipAddressAssociationsRequestPopLocationAddList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PopLocationAddList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAnycastEipAddressAssociationsRequestPopLocationAddList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        popLocationAddList = make_shared<vector<UpdateAnycastEipAddressAssociationsRequestPopLocationAddList>>(expect1);
      }
    }
    if (m.find("PopLocationDeleteList") != m.end() && !m["PopLocationDeleteList"].empty()) {
      if (typeid(vector<boost::any>) == m["PopLocationDeleteList"].type()) {
        vector<UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PopLocationDeleteList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        popLocationDeleteList = make_shared<vector<UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList>>(expect1);
      }
    }
  }


  virtual ~UpdateAnycastEipAddressAssociationsRequest() = default;
};
class UpdateAnycastEipAddressAssociationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAnycastEipAddressAssociationsResponseBody() {}

  explicit UpdateAnycastEipAddressAssociationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAnycastEipAddressAssociationsResponseBody() = default;
};
class UpdateAnycastEipAddressAssociationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAnycastEipAddressAssociationsResponseBody> body{};

  UpdateAnycastEipAddressAssociationsResponse() {}

  explicit UpdateAnycastEipAddressAssociationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAnycastEipAddressAssociationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAnycastEipAddressAssociationsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAnycastEipAddressAssociationsResponse() = default;
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
  AllocateAnycastEipAddressResponse allocateAnycastEipAddressWithOptions(shared_ptr<AllocateAnycastEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateAnycastEipAddressResponse allocateAnycastEipAddress(shared_ptr<AllocateAnycastEipAddressRequest> request);
  AssociateAnycastEipAddressResponse associateAnycastEipAddressWithOptions(shared_ptr<AssociateAnycastEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateAnycastEipAddressResponse associateAnycastEipAddress(shared_ptr<AssociateAnycastEipAddressRequest> request);
  DescribeAnycastEipAddressResponse describeAnycastEipAddressWithOptions(shared_ptr<DescribeAnycastEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAnycastEipAddressResponse describeAnycastEipAddress(shared_ptr<DescribeAnycastEipAddressRequest> request);
  DescribeAnycastPopLocationsResponse describeAnycastPopLocationsWithOptions(shared_ptr<DescribeAnycastPopLocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAnycastPopLocationsResponse describeAnycastPopLocations(shared_ptr<DescribeAnycastPopLocationsRequest> request);
  DescribeAnycastServerRegionsResponse describeAnycastServerRegionsWithOptions(shared_ptr<DescribeAnycastServerRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAnycastServerRegionsResponse describeAnycastServerRegions(shared_ptr<DescribeAnycastServerRegionsRequest> request);
  ListAnycastEipAddressesResponse listAnycastEipAddressesWithOptions(shared_ptr<ListAnycastEipAddressesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAnycastEipAddressesResponse listAnycastEipAddresses(shared_ptr<ListAnycastEipAddressesRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyAnycastEipAddressAttributeResponse modifyAnycastEipAddressAttributeWithOptions(shared_ptr<ModifyAnycastEipAddressAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAnycastEipAddressAttributeResponse modifyAnycastEipAddressAttribute(shared_ptr<ModifyAnycastEipAddressAttributeRequest> request);
  ModifyAnycastEipAddressSpecResponse modifyAnycastEipAddressSpecWithOptions(shared_ptr<ModifyAnycastEipAddressSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAnycastEipAddressSpecResponse modifyAnycastEipAddressSpec(shared_ptr<ModifyAnycastEipAddressSpecRequest> request);
  ReleaseAnycastEipAddressResponse releaseAnycastEipAddressWithOptions(shared_ptr<ReleaseAnycastEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseAnycastEipAddressResponse releaseAnycastEipAddress(shared_ptr<ReleaseAnycastEipAddressRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UnassociateAnycastEipAddressResponse unassociateAnycastEipAddressWithOptions(shared_ptr<UnassociateAnycastEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnassociateAnycastEipAddressResponse unassociateAnycastEipAddress(shared_ptr<UnassociateAnycastEipAddressRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateAnycastEipAddressAssociationsResponse updateAnycastEipAddressAssociationsWithOptions(shared_ptr<UpdateAnycastEipAddressAssociationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAnycastEipAddressAssociationsResponse updateAnycastEipAddressAssociations(shared_ptr<UpdateAnycastEipAddressAssociationsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eipanycast20200309

#endif
