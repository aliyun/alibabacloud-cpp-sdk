// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ECD20200930_H_
#define ALIBABACLOUD_ECD20200930_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ecd20200930 {
class CreateADConnectorDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainUserName{};
  shared_ptr<string> domainPassword{};
  shared_ptr<string> directoryName{};
  shared_ptr<bool> enableAdminAccess{};
  shared_ptr<string> desktopAccessType{};
  shared_ptr<string> subDomainName{};
  shared_ptr<vector<string>> dnsAddress{};
  shared_ptr<vector<string>> vSwitchId{};
  shared_ptr<vector<string>> subDomainDnsAddress{};

  CreateADConnectorDirectoryRequest() {}

  explicit CreateADConnectorDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainUserName) {
      res["DomainUserName"] = boost::any(*domainUserName);
    }
    if (domainPassword) {
      res["DomainPassword"] = boost::any(*domainPassword);
    }
    if (directoryName) {
      res["DirectoryName"] = boost::any(*directoryName);
    }
    if (enableAdminAccess) {
      res["EnableAdminAccess"] = boost::any(*enableAdminAccess);
    }
    if (desktopAccessType) {
      res["DesktopAccessType"] = boost::any(*desktopAccessType);
    }
    if (subDomainName) {
      res["SubDomainName"] = boost::any(*subDomainName);
    }
    if (dnsAddress) {
      res["DnsAddress"] = boost::any(*dnsAddress);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (subDomainDnsAddress) {
      res["SubDomainDnsAddress"] = boost::any(*subDomainDnsAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainUserName") != m.end() && !m["DomainUserName"].empty()) {
      domainUserName = make_shared<string>(boost::any_cast<string>(m["DomainUserName"]));
    }
    if (m.find("DomainPassword") != m.end() && !m["DomainPassword"].empty()) {
      domainPassword = make_shared<string>(boost::any_cast<string>(m["DomainPassword"]));
    }
    if (m.find("DirectoryName") != m.end() && !m["DirectoryName"].empty()) {
      directoryName = make_shared<string>(boost::any_cast<string>(m["DirectoryName"]));
    }
    if (m.find("EnableAdminAccess") != m.end() && !m["EnableAdminAccess"].empty()) {
      enableAdminAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableAdminAccess"]));
    }
    if (m.find("DesktopAccessType") != m.end() && !m["DesktopAccessType"].empty()) {
      desktopAccessType = make_shared<string>(boost::any_cast<string>(m["DesktopAccessType"]));
    }
    if (m.find("SubDomainName") != m.end() && !m["SubDomainName"].empty()) {
      subDomainName = make_shared<string>(boost::any_cast<string>(m["SubDomainName"]));
    }
    if (m.find("DnsAddress") != m.end() && !m["DnsAddress"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DnsAddress"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DnsAddress"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dnsAddress = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubDomainDnsAddress") != m.end() && !m["SubDomainDnsAddress"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubDomainDnsAddress"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubDomainDnsAddress"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subDomainDnsAddress = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateADConnectorDirectoryRequest() = default;
};
class CreateADConnectorDirectoryResponseBodyAdConnectors : public Darabonba::Model {
public:
  shared_ptr<string> address{};

  CreateADConnectorDirectoryResponseBodyAdConnectors() {}

  explicit CreateADConnectorDirectoryResponseBodyAdConnectors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
  }


  virtual ~CreateADConnectorDirectoryResponseBodyAdConnectors() = default;
};
class CreateADConnectorDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> trustPassword{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<CreateADConnectorDirectoryResponseBodyAdConnectors>> adConnectors{};

  CreateADConnectorDirectoryResponseBody() {}

  explicit CreateADConnectorDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trustPassword) {
      res["TrustPassword"] = boost::any(*trustPassword);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (adConnectors) {
      vector<boost::any> temp1;
      for(auto item1:*adConnectors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdConnectors"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrustPassword") != m.end() && !m["TrustPassword"].empty()) {
      trustPassword = make_shared<string>(boost::any_cast<string>(m["TrustPassword"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AdConnectors") != m.end() && !m["AdConnectors"].empty()) {
      if (typeid(vector<boost::any>) == m["AdConnectors"].type()) {
        vector<CreateADConnectorDirectoryResponseBodyAdConnectors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdConnectors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateADConnectorDirectoryResponseBodyAdConnectors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        adConnectors = make_shared<vector<CreateADConnectorDirectoryResponseBodyAdConnectors>>(expect1);
      }
    }
  }


  virtual ~CreateADConnectorDirectoryResponseBody() = default;
};
class CreateADConnectorDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateADConnectorDirectoryResponseBody> body{};

  CreateADConnectorDirectoryResponse() {}

  explicit CreateADConnectorDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateADConnectorDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateADConnectorDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateADConnectorDirectoryResponse() = default;
};
class CreateBundleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> imageId{};
  shared_ptr<string> desktopType{};
  shared_ptr<long> rootDiskSizeGib{};
  shared_ptr<string> bundleName{};
  shared_ptr<string> description{};
  shared_ptr<vector<int>> userDiskSizeGib{};

  CreateBundleRequest() {}

  explicit CreateBundleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (desktopType) {
      res["DesktopType"] = boost::any(*desktopType);
    }
    if (rootDiskSizeGib) {
      res["RootDiskSizeGib"] = boost::any(*rootDiskSizeGib);
    }
    if (bundleName) {
      res["BundleName"] = boost::any(*bundleName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (userDiskSizeGib) {
      res["UserDiskSizeGib"] = boost::any(*userDiskSizeGib);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("DesktopType") != m.end() && !m["DesktopType"].empty()) {
      desktopType = make_shared<string>(boost::any_cast<string>(m["DesktopType"]));
    }
    if (m.find("RootDiskSizeGib") != m.end() && !m["RootDiskSizeGib"].empty()) {
      rootDiskSizeGib = make_shared<long>(boost::any_cast<long>(m["RootDiskSizeGib"]));
    }
    if (m.find("BundleName") != m.end() && !m["BundleName"].empty()) {
      bundleName = make_shared<string>(boost::any_cast<string>(m["BundleName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("UserDiskSizeGib") != m.end() && !m["UserDiskSizeGib"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["UserDiskSizeGib"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserDiskSizeGib"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      userDiskSizeGib = make_shared<vector<int>>(toVec1);
    }
  }


  virtual ~CreateBundleRequest() = default;
};
class CreateBundleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bundleId{};
  shared_ptr<string> requestId{};

  CreateBundleResponseBody() {}

  explicit CreateBundleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateBundleResponseBody() = default;
};
class CreateBundleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateBundleResponseBody> body{};

  CreateBundleResponse() {}

  explicit CreateBundleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBundleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBundleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBundleResponse() = default;
};
class CreateDesktopsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateDesktopsRequestTag() {}

  explicit CreateDesktopsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDesktopsRequestTag() = default;
};
class CreateDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> bundleId{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<long> dataDiskSize{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> userName{};
  shared_ptr<string> vpcId{};
  shared_ptr<long> amount{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<bool> autoPay{};
  shared_ptr<vector<string>> endUserId{};
  shared_ptr<vector<CreateDesktopsRequestTag>> tag{};

  CreateDesktopsRequest() {}

  explicit CreateDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (dataDiskSize) {
      res["DataDiskSize"] = boost::any(*dataDiskSize);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("DataDiskSize") != m.end() && !m["DataDiskSize"].empty()) {
      dataDiskSize = make_shared<long>(boost::any_cast<long>(m["DataDiskSize"]));
    }
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndUserId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndUserId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endUserId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateDesktopsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDesktopsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateDesktopsRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreateDesktopsRequest() = default;
};
class CreateDesktopsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> desktopId{};
  shared_ptr<string> orderId{};

  CreateDesktopsResponseBody() {}

  explicit CreateDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~CreateDesktopsResponseBody() = default;
};
class CreateDesktopsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDesktopsResponseBody> body{};

  CreateDesktopsResponse() {}

  explicit CreateDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDesktopsResponse() = default;
};
class CreateImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> description{};

  CreateImageRequest() {}

  explicit CreateImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~CreateImageRequest() = default;
};
class CreateImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> imageId{};

  CreateImageResponseBody() {}

  explicit CreateImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
  }


  virtual ~CreateImageResponseBody() = default;
};
class CreateImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateImageResponseBody> body{};

  CreateImageResponse() {}

  explicit CreateImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateImageResponseBody>(model1);
      }
    }
  }


  virtual ~CreateImageResponse() = default;
};
class CreatePolicyGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clipboard{};
  shared_ptr<string> localDrive{};
  shared_ptr<string> usbRedirect{};
  shared_ptr<string> watermark{};
  shared_ptr<string> name{};
  shared_ptr<string> watermarkType{};
  shared_ptr<string> watermarkCustomText{};
  shared_ptr<string> watermarkTransparency{};

  CreatePolicyGroupRequest() {}

  explicit CreatePolicyGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clipboard) {
      res["Clipboard"] = boost::any(*clipboard);
    }
    if (localDrive) {
      res["LocalDrive"] = boost::any(*localDrive);
    }
    if (usbRedirect) {
      res["UsbRedirect"] = boost::any(*usbRedirect);
    }
    if (watermark) {
      res["Watermark"] = boost::any(*watermark);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (watermarkType) {
      res["WatermarkType"] = boost::any(*watermarkType);
    }
    if (watermarkCustomText) {
      res["WatermarkCustomText"] = boost::any(*watermarkCustomText);
    }
    if (watermarkTransparency) {
      res["WatermarkTransparency"] = boost::any(*watermarkTransparency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Clipboard") != m.end() && !m["Clipboard"].empty()) {
      clipboard = make_shared<string>(boost::any_cast<string>(m["Clipboard"]));
    }
    if (m.find("LocalDrive") != m.end() && !m["LocalDrive"].empty()) {
      localDrive = make_shared<string>(boost::any_cast<string>(m["LocalDrive"]));
    }
    if (m.find("UsbRedirect") != m.end() && !m["UsbRedirect"].empty()) {
      usbRedirect = make_shared<string>(boost::any_cast<string>(m["UsbRedirect"]));
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      watermark = make_shared<string>(boost::any_cast<string>(m["Watermark"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("WatermarkType") != m.end() && !m["WatermarkType"].empty()) {
      watermarkType = make_shared<string>(boost::any_cast<string>(m["WatermarkType"]));
    }
    if (m.find("WatermarkCustomText") != m.end() && !m["WatermarkCustomText"].empty()) {
      watermarkCustomText = make_shared<string>(boost::any_cast<string>(m["WatermarkCustomText"]));
    }
    if (m.find("WatermarkTransparency") != m.end() && !m["WatermarkTransparency"].empty()) {
      watermarkTransparency = make_shared<string>(boost::any_cast<string>(m["WatermarkTransparency"]));
    }
  }


  virtual ~CreatePolicyGroupRequest() = default;
};
class CreatePolicyGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> policyGroupId{};

  CreatePolicyGroupResponseBody() {}

  explicit CreatePolicyGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
  }


  virtual ~CreatePolicyGroupResponseBody() = default;
};
class CreatePolicyGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreatePolicyGroupResponseBody> body{};

  CreatePolicyGroupResponse() {}

  explicit CreatePolicyGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePolicyGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolicyGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolicyGroupResponse() = default;
};
class CreateRAMDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> directoryName{};
  shared_ptr<bool> enableInternetAccess{};
  shared_ptr<bool> enableAdminAccess{};
  shared_ptr<string> desktopAccessType{};
  shared_ptr<vector<string>> vSwitchId{};

  CreateRAMDirectoryRequest() {}

  explicit CreateRAMDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (directoryName) {
      res["DirectoryName"] = boost::any(*directoryName);
    }
    if (enableInternetAccess) {
      res["EnableInternetAccess"] = boost::any(*enableInternetAccess);
    }
    if (enableAdminAccess) {
      res["EnableAdminAccess"] = boost::any(*enableAdminAccess);
    }
    if (desktopAccessType) {
      res["DesktopAccessType"] = boost::any(*desktopAccessType);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DirectoryName") != m.end() && !m["DirectoryName"].empty()) {
      directoryName = make_shared<string>(boost::any_cast<string>(m["DirectoryName"]));
    }
    if (m.find("EnableInternetAccess") != m.end() && !m["EnableInternetAccess"].empty()) {
      enableInternetAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableInternetAccess"]));
    }
    if (m.find("EnableAdminAccess") != m.end() && !m["EnableAdminAccess"].empty()) {
      enableAdminAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableAdminAccess"]));
    }
    if (m.find("DesktopAccessType") != m.end() && !m["DesktopAccessType"].empty()) {
      desktopAccessType = make_shared<string>(boost::any_cast<string>(m["DesktopAccessType"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateRAMDirectoryRequest() = default;
};
class CreateRAMDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> requestId{};

  CreateRAMDirectoryResponseBody() {}

  explicit CreateRAMDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRAMDirectoryResponseBody() = default;
};
class CreateRAMDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRAMDirectoryResponseBody> body{};

  CreateRAMDirectoryResponse() {}

  explicit CreateRAMDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRAMDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRAMDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRAMDirectoryResponse() = default;
};
class CreateSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> snapshotName{};
  shared_ptr<string> description{};
  shared_ptr<string> sourceDiskType{};

  CreateSnapshotRequest() {}

  explicit CreateSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (sourceDiskType) {
      res["SourceDiskType"] = boost::any(*sourceDiskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SourceDiskType") != m.end() && !m["SourceDiskType"].empty()) {
      sourceDiskType = make_shared<string>(boost::any_cast<string>(m["SourceDiskType"]));
    }
  }


  virtual ~CreateSnapshotRequest() = default;
};
class CreateSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> snapshotId{};
  shared_ptr<string> requestId{};

  CreateSnapshotResponseBody() {}

  explicit CreateSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSnapshotResponseBody() = default;
};
class CreateSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSnapshotResponseBody> body{};

  CreateSnapshotResponse() {}

  explicit CreateSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSnapshotResponse() = default;
};
class DeleteBundlesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> bundleId{};

  DeleteBundlesRequest() {}

  explicit DeleteBundlesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BundleId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BundleId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bundleId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteBundlesRequest() = default;
};
class DeleteBundlesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteBundlesResponseBody() {}

  explicit DeleteBundlesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteBundlesResponseBody() = default;
};
class DeleteBundlesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteBundlesResponseBody> body{};

  DeleteBundlesResponse() {}

  explicit DeleteBundlesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBundlesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBundlesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBundlesResponse() = default;
};
class DeleteDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> desktopId{};

  DeleteDesktopsRequest() {}

  explicit DeleteDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteDesktopsRequest() = default;
};
class DeleteDesktopsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDesktopsResponseBody() {}

  explicit DeleteDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDesktopsResponseBody() = default;
};
class DeleteDesktopsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDesktopsResponseBody> body{};

  DeleteDesktopsResponse() {}

  explicit DeleteDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDesktopsResponse() = default;
};
class DeleteDirectoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> directoryId{};

  DeleteDirectoriesRequest() {}

  explicit DeleteDirectoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DirectoryId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DirectoryId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      directoryId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteDirectoriesRequest() = default;
};
class DeleteDirectoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDirectoriesResponseBody() {}

  explicit DeleteDirectoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDirectoriesResponseBody() = default;
};
class DeleteDirectoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDirectoriesResponseBody> body{};

  DeleteDirectoriesResponse() {}

  explicit DeleteDirectoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDirectoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDirectoriesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDirectoriesResponse() = default;
};
class DeleteImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> imageId{};

  DeleteImagesRequest() {}

  explicit DeleteImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteImagesRequest() = default;
};
class DeleteImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteImagesResponseBody() {}

  explicit DeleteImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteImagesResponseBody() = default;
};
class DeleteImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteImagesResponseBody> body{};

  DeleteImagesResponse() {}

  explicit DeleteImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteImagesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteImagesResponse() = default;
};
class DeletePolicyGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> policyGroupId{};

  DeletePolicyGroupsRequest() {}

  explicit DeletePolicyGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyGroupId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyGroupId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyGroupId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeletePolicyGroupsRequest() = default;
};
class DeletePolicyGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePolicyGroupsResponseBody() {}

  explicit DeletePolicyGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePolicyGroupsResponseBody() = default;
};
class DeletePolicyGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeletePolicyGroupsResponseBody> body{};

  DeletePolicyGroupsResponse() {}

  explicit DeletePolicyGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePolicyGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePolicyGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePolicyGroupsResponse() = default;
};
class DeleteSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> snapshotId{};

  DeleteSnapshotRequest() {}

  explicit DeleteSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SnapshotId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SnapshotId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      snapshotId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteSnapshotRequest() = default;
};
class DeleteSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSnapshotResponseBody() {}

  explicit DeleteSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSnapshotResponseBody() = default;
};
class DeleteSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteSnapshotResponseBody> body{};

  DeleteSnapshotResponse() {}

  explicit DeleteSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSnapshotResponse() = default;
};
class DeleteVirtualMFADeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> serialNumber{};

  DeleteVirtualMFADeviceRequest() {}

  explicit DeleteVirtualMFADeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
  }


  virtual ~DeleteVirtualMFADeviceRequest() = default;
};
class DeleteVirtualMFADeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVirtualMFADeviceResponseBody() {}

  explicit DeleteVirtualMFADeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVirtualMFADeviceResponseBody() = default;
};
class DeleteVirtualMFADeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteVirtualMFADeviceResponseBody> body{};

  DeleteVirtualMFADeviceResponse() {}

  explicit DeleteVirtualMFADeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVirtualMFADeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVirtualMFADeviceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVirtualMFADeviceResponse() = default;
};
class DescribeBundlesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> userName{};
  shared_ptr<string> category{};
  shared_ptr<string> bundleType{};
  shared_ptr<vector<string>> bundleId{};

  DescribeBundlesRequest() {}

  explicit DescribeBundlesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (bundleType) {
      res["BundleType"] = boost::any(*bundleType);
    }
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("BundleType") != m.end() && !m["BundleType"].empty()) {
      bundleType = make_shared<string>(boost::any_cast<string>(m["BundleType"]));
    }
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BundleId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BundleId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bundleId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBundlesRequest() = default;
};
class DescribeBundlesResponseBodyBundlesDisks : public Darabonba::Model {
public:
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};

  DescribeBundlesResponseBodyBundlesDisks() {}

  explicit DescribeBundlesResponseBodyBundlesDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
  }


  virtual ~DescribeBundlesResponseBodyBundlesDisks() = default;
};
class DescribeBundlesResponseBodyBundlesDesktopTypeAttribute : public Darabonba::Model {
public:
  shared_ptr<long> cpuCount{};
  shared_ptr<long> gpuCount{};
  shared_ptr<string> gpuSpec{};
  shared_ptr<long> memorySize{};

  DescribeBundlesResponseBodyBundlesDesktopTypeAttribute() {}

  explicit DescribeBundlesResponseBodyBundlesDesktopTypeAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuCount) {
      res["CpuCount"] = boost::any(*cpuCount);
    }
    if (gpuCount) {
      res["GpuCount"] = boost::any(*gpuCount);
    }
    if (gpuSpec) {
      res["GpuSpec"] = boost::any(*gpuSpec);
    }
    if (memorySize) {
      res["MemorySize"] = boost::any(*memorySize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuCount") != m.end() && !m["CpuCount"].empty()) {
      cpuCount = make_shared<long>(boost::any_cast<long>(m["CpuCount"]));
    }
    if (m.find("GpuCount") != m.end() && !m["GpuCount"].empty()) {
      gpuCount = make_shared<long>(boost::any_cast<long>(m["GpuCount"]));
    }
    if (m.find("GpuSpec") != m.end() && !m["GpuSpec"].empty()) {
      gpuSpec = make_shared<string>(boost::any_cast<string>(m["GpuSpec"]));
    }
    if (m.find("MemorySize") != m.end() && !m["MemorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["MemorySize"]));
    }
  }


  virtual ~DescribeBundlesResponseBodyBundlesDesktopTypeAttribute() = default;
};
class DescribeBundlesResponseBodyBundles : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBundlesResponseBodyBundlesDisks>> disks{};
  shared_ptr<string> bundleType{};
  shared_ptr<string> description{};
  shared_ptr<string> desktopType{};
  shared_ptr<DescribeBundlesResponseBodyBundlesDesktopTypeAttribute> desktopTypeAttribute{};
  shared_ptr<string> bundleId{};
  shared_ptr<string> imageId{};
  shared_ptr<string> bundleName{};

  DescribeBundlesResponseBodyBundles() {}

  explicit DescribeBundlesResponseBodyBundles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disks) {
      vector<boost::any> temp1;
      for(auto item1:*disks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disks"] = boost::any(temp1);
    }
    if (bundleType) {
      res["BundleType"] = boost::any(*bundleType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (desktopType) {
      res["DesktopType"] = boost::any(*desktopType);
    }
    if (desktopTypeAttribute) {
      res["DesktopTypeAttribute"] = desktopTypeAttribute ? boost::any(desktopTypeAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (bundleName) {
      res["BundleName"] = boost::any(*bundleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Disks") != m.end() && !m["Disks"].empty()) {
      if (typeid(vector<boost::any>) == m["Disks"].type()) {
        vector<DescribeBundlesResponseBodyBundlesDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBundlesResponseBodyBundlesDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        disks = make_shared<vector<DescribeBundlesResponseBodyBundlesDisks>>(expect1);
      }
    }
    if (m.find("BundleType") != m.end() && !m["BundleType"].empty()) {
      bundleType = make_shared<string>(boost::any_cast<string>(m["BundleType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DesktopType") != m.end() && !m["DesktopType"].empty()) {
      desktopType = make_shared<string>(boost::any_cast<string>(m["DesktopType"]));
    }
    if (m.find("DesktopTypeAttribute") != m.end() && !m["DesktopTypeAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["DesktopTypeAttribute"].type()) {
        DescribeBundlesResponseBodyBundlesDesktopTypeAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DesktopTypeAttribute"]));
        desktopTypeAttribute = make_shared<DescribeBundlesResponseBodyBundlesDesktopTypeAttribute>(model1);
      }
    }
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("BundleName") != m.end() && !m["BundleName"].empty()) {
      bundleName = make_shared<string>(boost::any_cast<string>(m["BundleName"]));
    }
  }


  virtual ~DescribeBundlesResponseBodyBundles() = default;
};
class DescribeBundlesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeBundlesResponseBodyBundles>> bundles{};

  DescribeBundlesResponseBody() {}

  explicit DescribeBundlesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (bundles) {
      vector<boost::any> temp1;
      for(auto item1:*bundles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bundles"] = boost::any(temp1);
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
    if (m.find("Bundles") != m.end() && !m["Bundles"].empty()) {
      if (typeid(vector<boost::any>) == m["Bundles"].type()) {
        vector<DescribeBundlesResponseBodyBundles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bundles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBundlesResponseBodyBundles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bundles = make_shared<vector<DescribeBundlesResponseBodyBundles>>(expect1);
      }
    }
  }


  virtual ~DescribeBundlesResponseBody() = default;
};
class DescribeBundlesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBundlesResponseBody> body{};

  DescribeBundlesResponse() {}

  explicit DescribeBundlesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBundlesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBundlesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBundlesResponse() = default;
};
class DescribeClientEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> desktopIp{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> eventType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeClientEventsRequest() {}

  explicit DescribeClientEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (desktopIp) {
      res["DesktopIp"] = boost::any(*desktopIp);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("DesktopIp") != m.end() && !m["DesktopIp"].empty()) {
      desktopIp = make_shared<string>(boost::any_cast<string>(m["DesktopIp"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeClientEventsRequest() = default;
};
class DescribeClientEventsResponseBodyEvents : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> bytesReceived{};
  shared_ptr<string> desktopIp{};
  shared_ptr<string> eventTime{};
  shared_ptr<string> bytesSend{};
  shared_ptr<string> aliUid{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> eventId{};
  shared_ptr<string> directoryType{};
  shared_ptr<string> eventType{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> clientVersion{};

  DescribeClientEventsResponseBodyEvents() {}

  explicit DescribeClientEventsResponseBodyEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (bytesReceived) {
      res["BytesReceived"] = boost::any(*bytesReceived);
    }
    if (desktopIp) {
      res["DesktopIp"] = boost::any(*desktopIp);
    }
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    if (bytesSend) {
      res["BytesSend"] = boost::any(*bytesSend);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (directoryType) {
      res["DirectoryType"] = boost::any(*directoryType);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("BytesReceived") != m.end() && !m["BytesReceived"].empty()) {
      bytesReceived = make_shared<string>(boost::any_cast<string>(m["BytesReceived"]));
    }
    if (m.find("DesktopIp") != m.end() && !m["DesktopIp"].empty()) {
      desktopIp = make_shared<string>(boost::any_cast<string>(m["DesktopIp"]));
    }
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<string>(boost::any_cast<string>(m["EventTime"]));
    }
    if (m.find("BytesSend") != m.end() && !m["BytesSend"].empty()) {
      bytesSend = make_shared<string>(boost::any_cast<string>(m["BytesSend"]));
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("DirectoryType") != m.end() && !m["DirectoryType"].empty()) {
      directoryType = make_shared<string>(boost::any_cast<string>(m["DirectoryType"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
  }


  virtual ~DescribeClientEventsResponseBodyEvents() = default;
};
class DescribeClientEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeClientEventsResponseBodyEvents>> events{};

  DescribeClientEventsResponseBody() {}

  explicit DescribeClientEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Events"] = boost::any(temp1);
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
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<DescribeClientEventsResponseBodyEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClientEventsResponseBodyEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<DescribeClientEventsResponseBodyEvents>>(expect1);
      }
    }
  }


  virtual ~DescribeClientEventsResponseBody() = default;
};
class DescribeClientEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClientEventsResponseBody> body{};

  DescribeClientEventsResponse() {}

  explicit DescribeClientEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClientEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClientEventsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClientEventsResponse() = default;
};
class DescribeDesktopPolicysRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<vector<string>> desktopId{};

  DescribeDesktopPolicysRequest() {}

  explicit DescribeDesktopPolicysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDesktopPolicysRequest() = default;
};
class DescribeDesktopPolicysResponseBodyDescribeDesktopPolicys : public Darabonba::Model {
public:
  shared_ptr<string> usbRedirect{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> watermark{};
  shared_ptr<string> clipboard{};
  shared_ptr<string> localDrive{};

  DescribeDesktopPolicysResponseBodyDescribeDesktopPolicys() {}

  explicit DescribeDesktopPolicysResponseBodyDescribeDesktopPolicys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (usbRedirect) {
      res["UsbRedirect"] = boost::any(*usbRedirect);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (watermark) {
      res["Watermark"] = boost::any(*watermark);
    }
    if (clipboard) {
      res["Clipboard"] = boost::any(*clipboard);
    }
    if (localDrive) {
      res["LocalDrive"] = boost::any(*localDrive);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UsbRedirect") != m.end() && !m["UsbRedirect"].empty()) {
      usbRedirect = make_shared<string>(boost::any_cast<string>(m["UsbRedirect"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      watermark = make_shared<string>(boost::any_cast<string>(m["Watermark"]));
    }
    if (m.find("Clipboard") != m.end() && !m["Clipboard"].empty()) {
      clipboard = make_shared<string>(boost::any_cast<string>(m["Clipboard"]));
    }
    if (m.find("LocalDrive") != m.end() && !m["LocalDrive"].empty()) {
      localDrive = make_shared<string>(boost::any_cast<string>(m["LocalDrive"]));
    }
  }


  virtual ~DescribeDesktopPolicysResponseBodyDescribeDesktopPolicys() = default;
};
class DescribeDesktopPolicysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDesktopPolicysResponseBodyDescribeDesktopPolicys>> describeDesktopPolicys{};

  DescribeDesktopPolicysResponseBody() {}

  explicit DescribeDesktopPolicysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (describeDesktopPolicys) {
      vector<boost::any> temp1;
      for(auto item1:*describeDesktopPolicys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DescribeDesktopPolicys"] = boost::any(temp1);
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
    if (m.find("DescribeDesktopPolicys") != m.end() && !m["DescribeDesktopPolicys"].empty()) {
      if (typeid(vector<boost::any>) == m["DescribeDesktopPolicys"].type()) {
        vector<DescribeDesktopPolicysResponseBodyDescribeDesktopPolicys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DescribeDesktopPolicys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDesktopPolicysResponseBodyDescribeDesktopPolicys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        describeDesktopPolicys = make_shared<vector<DescribeDesktopPolicysResponseBodyDescribeDesktopPolicys>>(expect1);
      }
    }
  }


  virtual ~DescribeDesktopPolicysResponseBody() = default;
};
class DescribeDesktopPolicysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDesktopPolicysResponseBody> body{};

  DescribeDesktopPolicysResponse() {}

  explicit DescribeDesktopPolicysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDesktopPolicysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDesktopPolicysResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDesktopPolicysResponse() = default;
};
class DescribeDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> desktopStatus{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> userName{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<vector<string>> desktopId{};
  shared_ptr<vector<string>> endUserId{};

  DescribeDesktopsRequest() {}

  explicit DescribeDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (desktopStatus) {
      res["DesktopStatus"] = boost::any(*desktopStatus);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("DesktopStatus") != m.end() && !m["DesktopStatus"].empty()) {
      desktopStatus = make_shared<string>(boost::any_cast<string>(m["DesktopStatus"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndUserId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndUserId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endUserId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDesktopsRequest() = default;
};
class DescribeDesktopsResponseBodyDesktopsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDesktopsResponseBodyDesktopsTags() {}

  explicit DescribeDesktopsResponseBodyDesktopsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDesktopsResponseBodyDesktopsTags() = default;
};
class DescribeDesktopsResponseBodyDesktopsDisks : public Darabonba::Model {
public:
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};
  shared_ptr<string> diskId{};

  DescribeDesktopsResponseBodyDesktopsDisks() {}

  explicit DescribeDesktopsResponseBodyDesktopsDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
  }


  virtual ~DescribeDesktopsResponseBodyDesktopsDisks() = default;
};
class DescribeDesktopsResponseBodyDesktops : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> desktopName{};
  shared_ptr<vector<DescribeDesktopsResponseBodyDesktopsTags>> tags{};
  shared_ptr<vector<DescribeDesktopsResponseBodyDesktopsDisks>> disks{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> desktopStatus{};
  shared_ptr<string> desktopType{};
  shared_ptr<long> gpuCount{};
  shared_ptr<long> memory{};
  shared_ptr<string> gpuSpec{};
  shared_ptr<string> imageId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> dataDiskCategory{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<long> networkInterfaceId{};
  shared_ptr<string> dataDiskSize{};
  shared_ptr<string> desktopId{};
  shared_ptr<vector<string>> endUserIds{};
  shared_ptr<string> startTime{};
  shared_ptr<long> cpu{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> connectionStatus{};

  DescribeDesktopsResponseBodyDesktops() {}

  explicit DescribeDesktopsResponseBodyDesktops(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (disks) {
      vector<boost::any> temp1;
      for(auto item1:*disks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disks"] = boost::any(temp1);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (desktopStatus) {
      res["DesktopStatus"] = boost::any(*desktopStatus);
    }
    if (desktopType) {
      res["DesktopType"] = boost::any(*desktopType);
    }
    if (gpuCount) {
      res["GpuCount"] = boost::any(*gpuCount);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (gpuSpec) {
      res["GpuSpec"] = boost::any(*gpuSpec);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (dataDiskCategory) {
      res["DataDiskCategory"] = boost::any(*dataDiskCategory);
    }
    if (systemDiskCategory) {
      res["SystemDiskCategory"] = boost::any(*systemDiskCategory);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
    }
    if (dataDiskSize) {
      res["DataDiskSize"] = boost::any(*dataDiskSize);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (endUserIds) {
      res["EndUserIds"] = boost::any(*endUserIds);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (connectionStatus) {
      res["ConnectionStatus"] = boost::any(*connectionStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeDesktopsResponseBodyDesktopsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDesktopsResponseBodyDesktopsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeDesktopsResponseBodyDesktopsTags>>(expect1);
      }
    }
    if (m.find("Disks") != m.end() && !m["Disks"].empty()) {
      if (typeid(vector<boost::any>) == m["Disks"].type()) {
        vector<DescribeDesktopsResponseBodyDesktopsDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDesktopsResponseBodyDesktopsDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        disks = make_shared<vector<DescribeDesktopsResponseBodyDesktopsDisks>>(expect1);
      }
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("DesktopStatus") != m.end() && !m["DesktopStatus"].empty()) {
      desktopStatus = make_shared<string>(boost::any_cast<string>(m["DesktopStatus"]));
    }
    if (m.find("DesktopType") != m.end() && !m["DesktopType"].empty()) {
      desktopType = make_shared<string>(boost::any_cast<string>(m["DesktopType"]));
    }
    if (m.find("GpuCount") != m.end() && !m["GpuCount"].empty()) {
      gpuCount = make_shared<long>(boost::any_cast<long>(m["GpuCount"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("GpuSpec") != m.end() && !m["GpuSpec"].empty()) {
      gpuSpec = make_shared<string>(boost::any_cast<string>(m["GpuSpec"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DataDiskCategory") != m.end() && !m["DataDiskCategory"].empty()) {
      dataDiskCategory = make_shared<string>(boost::any_cast<string>(m["DataDiskCategory"]));
    }
    if (m.find("SystemDiskCategory") != m.end() && !m["SystemDiskCategory"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["SystemDiskCategory"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<long>(boost::any_cast<long>(m["NetworkInterfaceId"]));
    }
    if (m.find("DataDiskSize") != m.end() && !m["DataDiskSize"].empty()) {
      dataDiskSize = make_shared<string>(boost::any_cast<string>(m["DataDiskSize"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("EndUserIds") != m.end() && !m["EndUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endUserIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("ConnectionStatus") != m.end() && !m["ConnectionStatus"].empty()) {
      connectionStatus = make_shared<string>(boost::any_cast<string>(m["ConnectionStatus"]));
    }
  }


  virtual ~DescribeDesktopsResponseBodyDesktops() = default;
};
class DescribeDesktopsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDesktopsResponseBodyDesktops>> desktops{};

  DescribeDesktopsResponseBody() {}

  explicit DescribeDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (desktops) {
      vector<boost::any> temp1;
      for(auto item1:*desktops){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Desktops"] = boost::any(temp1);
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
    if (m.find("Desktops") != m.end() && !m["Desktops"].empty()) {
      if (typeid(vector<boost::any>) == m["Desktops"].type()) {
        vector<DescribeDesktopsResponseBodyDesktops> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Desktops"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDesktopsResponseBodyDesktops model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        desktops = make_shared<vector<DescribeDesktopsResponseBodyDesktops>>(expect1);
      }
    }
  }


  virtual ~DescribeDesktopsResponseBody() = default;
};
class DescribeDesktopsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDesktopsResponseBody> body{};

  DescribeDesktopsResponse() {}

  explicit DescribeDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDesktopsResponse() = default;
};
class DescribeDesktopTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopTypeId{};
  shared_ptr<string> instanceTypeFamily{};

  DescribeDesktopTypesRequest() {}

  explicit DescribeDesktopTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopTypeId) {
      res["DesktopTypeId"] = boost::any(*desktopTypeId);
    }
    if (instanceTypeFamily) {
      res["InstanceTypeFamily"] = boost::any(*instanceTypeFamily);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopTypeId") != m.end() && !m["DesktopTypeId"].empty()) {
      desktopTypeId = make_shared<string>(boost::any_cast<string>(m["DesktopTypeId"]));
    }
    if (m.find("InstanceTypeFamily") != m.end() && !m["InstanceTypeFamily"].empty()) {
      instanceTypeFamily = make_shared<string>(boost::any_cast<string>(m["InstanceTypeFamily"]));
    }
  }


  virtual ~DescribeDesktopTypesRequest() = default;
};
class DescribeDesktopTypesResponseBodyDesktopTypesAllowDiskSize : public Darabonba::Model {
public:
  shared_ptr<long> systemDiskSize{};
  shared_ptr<long> dataDiskSize{};

  DescribeDesktopTypesResponseBodyDesktopTypesAllowDiskSize() {}

  explicit DescribeDesktopTypesResponseBodyDesktopTypesAllowDiskSize(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (dataDiskSize) {
      res["DataDiskSize"] = boost::any(*dataDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("DataDiskSize") != m.end() && !m["DataDiskSize"].empty()) {
      dataDiskSize = make_shared<long>(boost::any_cast<long>(m["DataDiskSize"]));
    }
  }


  virtual ~DescribeDesktopTypesResponseBodyDesktopTypesAllowDiskSize() = default;
};
class DescribeDesktopTypesResponseBodyDesktopTypes : public Darabonba::Model {
public:
  shared_ptr<string> systemDiskSize{};
  shared_ptr<string> desktopTypeId{};
  shared_ptr<string> dataDiskSize{};
  shared_ptr<string> cpuCount{};
  shared_ptr<long> gpuCount{};
  shared_ptr<string> gpuSpec{};
  shared_ptr<string> instanceTypeFamily{};
  shared_ptr<string> memorySize{};
  shared_ptr<vector<DescribeDesktopTypesResponseBodyDesktopTypesAllowDiskSize>> allowDiskSize{};

  DescribeDesktopTypesResponseBodyDesktopTypes() {}

  explicit DescribeDesktopTypesResponseBodyDesktopTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (desktopTypeId) {
      res["DesktopTypeId"] = boost::any(*desktopTypeId);
    }
    if (dataDiskSize) {
      res["DataDiskSize"] = boost::any(*dataDiskSize);
    }
    if (cpuCount) {
      res["CpuCount"] = boost::any(*cpuCount);
    }
    if (gpuCount) {
      res["GpuCount"] = boost::any(*gpuCount);
    }
    if (gpuSpec) {
      res["GpuSpec"] = boost::any(*gpuSpec);
    }
    if (instanceTypeFamily) {
      res["InstanceTypeFamily"] = boost::any(*instanceTypeFamily);
    }
    if (memorySize) {
      res["MemorySize"] = boost::any(*memorySize);
    }
    if (allowDiskSize) {
      vector<boost::any> temp1;
      for(auto item1:*allowDiskSize){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AllowDiskSize"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<string>(boost::any_cast<string>(m["SystemDiskSize"]));
    }
    if (m.find("DesktopTypeId") != m.end() && !m["DesktopTypeId"].empty()) {
      desktopTypeId = make_shared<string>(boost::any_cast<string>(m["DesktopTypeId"]));
    }
    if (m.find("DataDiskSize") != m.end() && !m["DataDiskSize"].empty()) {
      dataDiskSize = make_shared<string>(boost::any_cast<string>(m["DataDiskSize"]));
    }
    if (m.find("CpuCount") != m.end() && !m["CpuCount"].empty()) {
      cpuCount = make_shared<string>(boost::any_cast<string>(m["CpuCount"]));
    }
    if (m.find("GpuCount") != m.end() && !m["GpuCount"].empty()) {
      gpuCount = make_shared<long>(boost::any_cast<long>(m["GpuCount"]));
    }
    if (m.find("GpuSpec") != m.end() && !m["GpuSpec"].empty()) {
      gpuSpec = make_shared<string>(boost::any_cast<string>(m["GpuSpec"]));
    }
    if (m.find("InstanceTypeFamily") != m.end() && !m["InstanceTypeFamily"].empty()) {
      instanceTypeFamily = make_shared<string>(boost::any_cast<string>(m["InstanceTypeFamily"]));
    }
    if (m.find("MemorySize") != m.end() && !m["MemorySize"].empty()) {
      memorySize = make_shared<string>(boost::any_cast<string>(m["MemorySize"]));
    }
    if (m.find("AllowDiskSize") != m.end() && !m["AllowDiskSize"].empty()) {
      if (typeid(vector<boost::any>) == m["AllowDiskSize"].type()) {
        vector<DescribeDesktopTypesResponseBodyDesktopTypesAllowDiskSize> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AllowDiskSize"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDesktopTypesResponseBodyDesktopTypesAllowDiskSize model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        allowDiskSize = make_shared<vector<DescribeDesktopTypesResponseBodyDesktopTypesAllowDiskSize>>(expect1);
      }
    }
  }


  virtual ~DescribeDesktopTypesResponseBodyDesktopTypes() = default;
};
class DescribeDesktopTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDesktopTypesResponseBodyDesktopTypes>> desktopTypes{};

  DescribeDesktopTypesResponseBody() {}

  explicit DescribeDesktopTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (desktopTypes) {
      vector<boost::any> temp1;
      for(auto item1:*desktopTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DesktopTypes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DesktopTypes") != m.end() && !m["DesktopTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["DesktopTypes"].type()) {
        vector<DescribeDesktopTypesResponseBodyDesktopTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DesktopTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDesktopTypesResponseBodyDesktopTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        desktopTypes = make_shared<vector<DescribeDesktopTypesResponseBodyDesktopTypes>>(expect1);
      }
    }
  }


  virtual ~DescribeDesktopTypesResponseBody() = default;
};
class DescribeDesktopTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDesktopTypesResponseBody> body{};

  DescribeDesktopTypesResponse() {}

  explicit DescribeDesktopTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDesktopTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDesktopTypesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDesktopTypesResponse() = default;
};
class DescribeDirectoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> directoryType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> directoryId{};

  DescribeDirectoriesRequest() {}

  explicit DescribeDirectoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (directoryType) {
      res["DirectoryType"] = boost::any(*directoryType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DirectoryType") != m.end() && !m["DirectoryType"].empty()) {
      directoryType = make_shared<string>(boost::any_cast<string>(m["DirectoryType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DirectoryId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DirectoryId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      directoryId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDirectoriesRequest() = default;
};
class DescribeDirectoriesResponseBodyDirectoriesLogs : public Darabonba::Model {
public:
  shared_ptr<string> step{};
  shared_ptr<string> message{};
  shared_ptr<string> timeStamp{};
  shared_ptr<string> level{};

  DescribeDirectoriesResponseBodyDirectoriesLogs() {}

  explicit DescribeDirectoriesResponseBodyDirectoriesLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (step) {
      res["Step"] = boost::any(*step);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<string>(boost::any_cast<string>(m["Step"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
  }


  virtual ~DescribeDirectoriesResponseBodyDirectoriesLogs() = default;
};
class DescribeDirectoriesResponseBodyDirectoriesADConnectors : public Darabonba::Model {
public:
  shared_ptr<string> connectorStatus{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> networkInterfaceId{};
  shared_ptr<string> ADConnectorAddress{};

  DescribeDirectoriesResponseBodyDirectoriesADConnectors() {}

  explicit DescribeDirectoriesResponseBodyDirectoriesADConnectors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectorStatus) {
      res["ConnectorStatus"] = boost::any(*connectorStatus);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
    }
    if (ADConnectorAddress) {
      res["ADConnectorAddress"] = boost::any(*ADConnectorAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectorStatus") != m.end() && !m["ConnectorStatus"].empty()) {
      connectorStatus = make_shared<string>(boost::any_cast<string>(m["ConnectorStatus"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
    if (m.find("ADConnectorAddress") != m.end() && !m["ADConnectorAddress"].empty()) {
      ADConnectorAddress = make_shared<string>(boost::any_cast<string>(m["ADConnectorAddress"]));
    }
  }


  virtual ~DescribeDirectoriesResponseBodyDirectoriesADConnectors() = default;
};
class DescribeDirectoriesResponseBodyDirectories : public Darabonba::Model {
public:
  shared_ptr<bool> enableInternetAccess{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> status{};
  shared_ptr<string> domainPassword{};
  shared_ptr<string> customSecurityGroupId{};
  shared_ptr<string> domainUserName{};
  shared_ptr<string> desktopVpcEndpoint{};
  shared_ptr<string> desktopAccessType{};
  shared_ptr<string> domainName{};
  shared_ptr<string> directoryType{};
  shared_ptr<string> dnsUserName{};
  shared_ptr<vector<DescribeDirectoriesResponseBodyDirectoriesLogs>> logs{};
  shared_ptr<string> trustPassword{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeDirectoriesResponseBodyDirectoriesADConnectors>> ADConnectors{};
  shared_ptr<vector<string>> dnsAddress{};
  shared_ptr<string> directoryId{};

  DescribeDirectoriesResponseBodyDirectories() {}

  explicit DescribeDirectoriesResponseBodyDirectories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableInternetAccess) {
      res["EnableInternetAccess"] = boost::any(*enableInternetAccess);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (domainPassword) {
      res["DomainPassword"] = boost::any(*domainPassword);
    }
    if (customSecurityGroupId) {
      res["CustomSecurityGroupId"] = boost::any(*customSecurityGroupId);
    }
    if (domainUserName) {
      res["DomainUserName"] = boost::any(*domainUserName);
    }
    if (desktopVpcEndpoint) {
      res["DesktopVpcEndpoint"] = boost::any(*desktopVpcEndpoint);
    }
    if (desktopAccessType) {
      res["DesktopAccessType"] = boost::any(*desktopAccessType);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (directoryType) {
      res["DirectoryType"] = boost::any(*directoryType);
    }
    if (dnsUserName) {
      res["DnsUserName"] = boost::any(*dnsUserName);
    }
    if (logs) {
      vector<boost::any> temp1;
      for(auto item1:*logs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Logs"] = boost::any(temp1);
    }
    if (trustPassword) {
      res["TrustPassword"] = boost::any(*trustPassword);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ADConnectors) {
      vector<boost::any> temp1;
      for(auto item1:*ADConnectors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ADConnectors"] = boost::any(temp1);
    }
    if (dnsAddress) {
      res["DnsAddress"] = boost::any(*dnsAddress);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableInternetAccess") != m.end() && !m["EnableInternetAccess"].empty()) {
      enableInternetAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableInternetAccess"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("DomainPassword") != m.end() && !m["DomainPassword"].empty()) {
      domainPassword = make_shared<string>(boost::any_cast<string>(m["DomainPassword"]));
    }
    if (m.find("CustomSecurityGroupId") != m.end() && !m["CustomSecurityGroupId"].empty()) {
      customSecurityGroupId = make_shared<string>(boost::any_cast<string>(m["CustomSecurityGroupId"]));
    }
    if (m.find("DomainUserName") != m.end() && !m["DomainUserName"].empty()) {
      domainUserName = make_shared<string>(boost::any_cast<string>(m["DomainUserName"]));
    }
    if (m.find("DesktopVpcEndpoint") != m.end() && !m["DesktopVpcEndpoint"].empty()) {
      desktopVpcEndpoint = make_shared<string>(boost::any_cast<string>(m["DesktopVpcEndpoint"]));
    }
    if (m.find("DesktopAccessType") != m.end() && !m["DesktopAccessType"].empty()) {
      desktopAccessType = make_shared<string>(boost::any_cast<string>(m["DesktopAccessType"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DirectoryType") != m.end() && !m["DirectoryType"].empty()) {
      directoryType = make_shared<string>(boost::any_cast<string>(m["DirectoryType"]));
    }
    if (m.find("DnsUserName") != m.end() && !m["DnsUserName"].empty()) {
      dnsUserName = make_shared<string>(boost::any_cast<string>(m["DnsUserName"]));
    }
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<DescribeDirectoriesResponseBodyDirectoriesLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Logs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDirectoriesResponseBodyDirectoriesLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logs = make_shared<vector<DescribeDirectoriesResponseBodyDirectoriesLogs>>(expect1);
      }
    }
    if (m.find("TrustPassword") != m.end() && !m["TrustPassword"].empty()) {
      trustPassword = make_shared<string>(boost::any_cast<string>(m["TrustPassword"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ADConnectors") != m.end() && !m["ADConnectors"].empty()) {
      if (typeid(vector<boost::any>) == m["ADConnectors"].type()) {
        vector<DescribeDirectoriesResponseBodyDirectoriesADConnectors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ADConnectors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDirectoriesResponseBodyDirectoriesADConnectors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ADConnectors = make_shared<vector<DescribeDirectoriesResponseBodyDirectoriesADConnectors>>(expect1);
      }
    }
    if (m.find("DnsAddress") != m.end() && !m["DnsAddress"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DnsAddress"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DnsAddress"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dnsAddress = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~DescribeDirectoriesResponseBodyDirectories() = default;
};
class DescribeDirectoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDirectoriesResponseBodyDirectories>> directories{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  DescribeDirectoriesResponseBody() {}

  explicit DescribeDirectoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directories) {
      vector<boost::any> temp1;
      for(auto item1:*directories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Directories"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Directories") != m.end() && !m["Directories"].empty()) {
      if (typeid(vector<boost::any>) == m["Directories"].type()) {
        vector<DescribeDirectoriesResponseBodyDirectories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Directories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDirectoriesResponseBodyDirectories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        directories = make_shared<vector<DescribeDirectoriesResponseBodyDirectories>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDirectoriesResponseBody() = default;
};
class DescribeDirectoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDirectoriesResponseBody> body{};

  DescribeDirectoriesResponse() {}

  explicit DescribeDirectoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDirectoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDirectoriesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDirectoriesResponse() = default;
};
class DescribeImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> imageType{};
  shared_ptr<string> imageStatus{};
  shared_ptr<bool> gpuCategory{};
  shared_ptr<vector<string>> imageId{};

  DescribeImagesRequest() {}

  explicit DescribeImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    if (imageStatus) {
      res["ImageStatus"] = boost::any(*imageStatus);
    }
    if (gpuCategory) {
      res["GpuCategory"] = boost::any(*gpuCategory);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
    }
    if (m.find("ImageStatus") != m.end() && !m["ImageStatus"].empty()) {
      imageStatus = make_shared<string>(boost::any_cast<string>(m["ImageStatus"]));
    }
    if (m.find("GpuCategory") != m.end() && !m["GpuCategory"].empty()) {
      gpuCategory = make_shared<bool>(boost::any_cast<bool>(m["GpuCategory"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeImagesRequest() = default;
};
class DescribeImagesResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> imageType{};
  shared_ptr<string> progress{};
  shared_ptr<string> description{};
  shared_ptr<long> size{};
  shared_ptr<string> osType{};
  shared_ptr<long> dataDiskSize{};
  shared_ptr<string> name{};
  shared_ptr<bool> gpuCategory{};
  shared_ptr<string> imageId{};

  DescribeImagesResponseBodyImages() {}

  explicit DescribeImagesResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (dataDiskSize) {
      res["DataDiskSize"] = boost::any(*dataDiskSize);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (gpuCategory) {
      res["GpuCategory"] = boost::any(*gpuCategory);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("DataDiskSize") != m.end() && !m["DataDiskSize"].empty()) {
      dataDiskSize = make_shared<long>(boost::any_cast<long>(m["DataDiskSize"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("GpuCategory") != m.end() && !m["GpuCategory"].empty()) {
      gpuCategory = make_shared<bool>(boost::any_cast<bool>(m["GpuCategory"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
  }


  virtual ~DescribeImagesResponseBodyImages() = default;
};
class DescribeImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeImagesResponseBodyImages>> images{};

  DescribeImagesResponseBody() {}

  explicit DescribeImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
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
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<DescribeImagesResponseBodyImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImagesResponseBodyImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<DescribeImagesResponseBodyImages>>(expect1);
      }
    }
  }


  virtual ~DescribeImagesResponseBody() = default;
};
class DescribeImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeImagesResponseBody> body{};

  DescribeImagesResponse() {}

  explicit DescribeImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeImagesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeImagesResponse() = default;
};
class DescribeInvocationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> invokeId{};
  shared_ptr<string> commandType{};
  shared_ptr<string> invokeStatus{};
  shared_ptr<string> desktopId{};
  shared_ptr<bool> includeOutput{};
  shared_ptr<string> contentEncoding{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeInvocationsRequest() {}

  explicit DescribeInvocationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (commandType) {
      res["CommandType"] = boost::any(*commandType);
    }
    if (invokeStatus) {
      res["InvokeStatus"] = boost::any(*invokeStatus);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (includeOutput) {
      res["IncludeOutput"] = boost::any(*includeOutput);
    }
    if (contentEncoding) {
      res["ContentEncoding"] = boost::any(*contentEncoding);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("CommandType") != m.end() && !m["CommandType"].empty()) {
      commandType = make_shared<string>(boost::any_cast<string>(m["CommandType"]));
    }
    if (m.find("InvokeStatus") != m.end() && !m["InvokeStatus"].empty()) {
      invokeStatus = make_shared<string>(boost::any_cast<string>(m["InvokeStatus"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("IncludeOutput") != m.end() && !m["IncludeOutput"].empty()) {
      includeOutput = make_shared<bool>(boost::any_cast<bool>(m["IncludeOutput"]));
    }
    if (m.find("ContentEncoding") != m.end() && !m["ContentEncoding"].empty()) {
      contentEncoding = make_shared<string>(boost::any_cast<string>(m["ContentEncoding"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeInvocationsRequest() = default;
};
class DescribeInvocationsResponseBodyInvocationsInvokeDesktops : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> invocationStatus{};
  shared_ptr<long> repeats{};
  shared_ptr<string> output{};
  shared_ptr<string> desktopId{};
  shared_ptr<long> dropped{};
  shared_ptr<string> stopTime{};
  shared_ptr<long> exitCode{};
  shared_ptr<string> startTime{};
  shared_ptr<string> errorInfo{};
  shared_ptr<string> errorCode{};

  DescribeInvocationsResponseBodyInvocationsInvokeDesktops() {}

  explicit DescribeInvocationsResponseBodyInvocationsInvokeDesktops(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (invocationStatus) {
      res["InvocationStatus"] = boost::any(*invocationStatus);
    }
    if (repeats) {
      res["Repeats"] = boost::any(*repeats);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (dropped) {
      res["Dropped"] = boost::any(*dropped);
    }
    if (stopTime) {
      res["StopTime"] = boost::any(*stopTime);
    }
    if (exitCode) {
      res["ExitCode"] = boost::any(*exitCode);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (errorInfo) {
      res["ErrorInfo"] = boost::any(*errorInfo);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("InvocationStatus") != m.end() && !m["InvocationStatus"].empty()) {
      invocationStatus = make_shared<string>(boost::any_cast<string>(m["InvocationStatus"]));
    }
    if (m.find("Repeats") != m.end() && !m["Repeats"].empty()) {
      repeats = make_shared<long>(boost::any_cast<long>(m["Repeats"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("Dropped") != m.end() && !m["Dropped"].empty()) {
      dropped = make_shared<long>(boost::any_cast<long>(m["Dropped"]));
    }
    if (m.find("StopTime") != m.end() && !m["StopTime"].empty()) {
      stopTime = make_shared<string>(boost::any_cast<string>(m["StopTime"]));
    }
    if (m.find("ExitCode") != m.end() && !m["ExitCode"].empty()) {
      exitCode = make_shared<long>(boost::any_cast<long>(m["ExitCode"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ErrorInfo") != m.end() && !m["ErrorInfo"].empty()) {
      errorInfo = make_shared<string>(boost::any_cast<string>(m["ErrorInfo"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~DescribeInvocationsResponseBodyInvocationsInvokeDesktops() = default;
};
class DescribeInvocationsResponseBodyInvocations : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> invocationStatus{};
  shared_ptr<vector<DescribeInvocationsResponseBodyInvocationsInvokeDesktops>> invokeDesktops{};
  shared_ptr<string> commandContent{};
  shared_ptr<string> invokeId{};
  shared_ptr<string> commandType{};

  DescribeInvocationsResponseBodyInvocations() {}

  explicit DescribeInvocationsResponseBodyInvocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (invocationStatus) {
      res["InvocationStatus"] = boost::any(*invocationStatus);
    }
    if (invokeDesktops) {
      vector<boost::any> temp1;
      for(auto item1:*invokeDesktops){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InvokeDesktops"] = boost::any(temp1);
    }
    if (commandContent) {
      res["CommandContent"] = boost::any(*commandContent);
    }
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (commandType) {
      res["CommandType"] = boost::any(*commandType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("InvocationStatus") != m.end() && !m["InvocationStatus"].empty()) {
      invocationStatus = make_shared<string>(boost::any_cast<string>(m["InvocationStatus"]));
    }
    if (m.find("InvokeDesktops") != m.end() && !m["InvokeDesktops"].empty()) {
      if (typeid(vector<boost::any>) == m["InvokeDesktops"].type()) {
        vector<DescribeInvocationsResponseBodyInvocationsInvokeDesktops> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InvokeDesktops"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInvocationsResponseBodyInvocationsInvokeDesktops model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invokeDesktops = make_shared<vector<DescribeInvocationsResponseBodyInvocationsInvokeDesktops>>(expect1);
      }
    }
    if (m.find("CommandContent") != m.end() && !m["CommandContent"].empty()) {
      commandContent = make_shared<string>(boost::any_cast<string>(m["CommandContent"]));
    }
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("CommandType") != m.end() && !m["CommandType"].empty()) {
      commandType = make_shared<string>(boost::any_cast<string>(m["CommandType"]));
    }
  }


  virtual ~DescribeInvocationsResponseBodyInvocations() = default;
};
class DescribeInvocationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeInvocationsResponseBodyInvocations>> invocations{};

  DescribeInvocationsResponseBody() {}

  explicit DescribeInvocationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (invocations) {
      vector<boost::any> temp1;
      for(auto item1:*invocations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Invocations"] = boost::any(temp1);
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
    if (m.find("Invocations") != m.end() && !m["Invocations"].empty()) {
      if (typeid(vector<boost::any>) == m["Invocations"].type()) {
        vector<DescribeInvocationsResponseBodyInvocations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Invocations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInvocationsResponseBodyInvocations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invocations = make_shared<vector<DescribeInvocationsResponseBodyInvocations>>(expect1);
      }
    }
  }


  virtual ~DescribeInvocationsResponseBody() = default;
};
class DescribeInvocationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInvocationsResponseBody> body{};

  DescribeInvocationsResponse() {}

  explicit DescribeInvocationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInvocationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInvocationsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInvocationsResponse() = default;
};
class DescribePolicyGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> policyGroupId{};

  DescribePolicyGroupsRequest() {}

  explicit DescribePolicyGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyGroupId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyGroupId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyGroupId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribePolicyGroupsRequest() = default;
};
class DescribePolicyGroupsResponseBodyDescribePolicyGroups : public Darabonba::Model {
public:
  shared_ptr<string> policyStatus{};
  shared_ptr<string> watermarkType{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> watermarkTransparency{};
  shared_ptr<string> usbRedirect{};
  shared_ptr<string> policyGroupType{};
  shared_ptr<string> watermarkCustomText{};
  shared_ptr<string> watermark{};
  shared_ptr<string> clipboard{};
  shared_ptr<string> name{};
  shared_ptr<string> localDrive{};

  DescribePolicyGroupsResponseBodyDescribePolicyGroups() {}

  explicit DescribePolicyGroupsResponseBodyDescribePolicyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyStatus) {
      res["PolicyStatus"] = boost::any(*policyStatus);
    }
    if (watermarkType) {
      res["WatermarkType"] = boost::any(*watermarkType);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (watermarkTransparency) {
      res["WatermarkTransparency"] = boost::any(*watermarkTransparency);
    }
    if (usbRedirect) {
      res["UsbRedirect"] = boost::any(*usbRedirect);
    }
    if (policyGroupType) {
      res["PolicyGroupType"] = boost::any(*policyGroupType);
    }
    if (watermarkCustomText) {
      res["WatermarkCustomText"] = boost::any(*watermarkCustomText);
    }
    if (watermark) {
      res["Watermark"] = boost::any(*watermark);
    }
    if (clipboard) {
      res["Clipboard"] = boost::any(*clipboard);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (localDrive) {
      res["LocalDrive"] = boost::any(*localDrive);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyStatus") != m.end() && !m["PolicyStatus"].empty()) {
      policyStatus = make_shared<string>(boost::any_cast<string>(m["PolicyStatus"]));
    }
    if (m.find("WatermarkType") != m.end() && !m["WatermarkType"].empty()) {
      watermarkType = make_shared<string>(boost::any_cast<string>(m["WatermarkType"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("WatermarkTransparency") != m.end() && !m["WatermarkTransparency"].empty()) {
      watermarkTransparency = make_shared<string>(boost::any_cast<string>(m["WatermarkTransparency"]));
    }
    if (m.find("UsbRedirect") != m.end() && !m["UsbRedirect"].empty()) {
      usbRedirect = make_shared<string>(boost::any_cast<string>(m["UsbRedirect"]));
    }
    if (m.find("PolicyGroupType") != m.end() && !m["PolicyGroupType"].empty()) {
      policyGroupType = make_shared<string>(boost::any_cast<string>(m["PolicyGroupType"]));
    }
    if (m.find("WatermarkCustomText") != m.end() && !m["WatermarkCustomText"].empty()) {
      watermarkCustomText = make_shared<string>(boost::any_cast<string>(m["WatermarkCustomText"]));
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      watermark = make_shared<string>(boost::any_cast<string>(m["Watermark"]));
    }
    if (m.find("Clipboard") != m.end() && !m["Clipboard"].empty()) {
      clipboard = make_shared<string>(boost::any_cast<string>(m["Clipboard"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("LocalDrive") != m.end() && !m["LocalDrive"].empty()) {
      localDrive = make_shared<string>(boost::any_cast<string>(m["LocalDrive"]));
    }
  }


  virtual ~DescribePolicyGroupsResponseBodyDescribePolicyGroups() = default;
};
class DescribePolicyGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribePolicyGroupsResponseBodyDescribePolicyGroups>> describePolicyGroups{};

  DescribePolicyGroupsResponseBody() {}

  explicit DescribePolicyGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (describePolicyGroups) {
      vector<boost::any> temp1;
      for(auto item1:*describePolicyGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DescribePolicyGroups"] = boost::any(temp1);
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
    if (m.find("DescribePolicyGroups") != m.end() && !m["DescribePolicyGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["DescribePolicyGroups"].type()) {
        vector<DescribePolicyGroupsResponseBodyDescribePolicyGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DescribePolicyGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyGroupsResponseBodyDescribePolicyGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        describePolicyGroups = make_shared<vector<DescribePolicyGroupsResponseBodyDescribePolicyGroups>>(expect1);
      }
    }
  }


  virtual ~DescribePolicyGroupsResponseBody() = default;
};
class DescribePolicyGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePolicyGroupsResponseBody> body{};

  DescribePolicyGroupsResponse() {}

  explicit DescribePolicyGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePolicyGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePolicyGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePolicyGroupsResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRegionsResponseBodyRegions>> regions{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<DescribeRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<DescribeRegionsResponseBodyRegions>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeSnapshotsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> snapshotId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeSnapshotsRequest() {}

  explicit DescribeSnapshotsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeSnapshotsRequest() = default;
};
class DescribeSnapshotsResponseBodySnapshots : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> status{};
  shared_ptr<string> snapshotType{};
  shared_ptr<string> snapshotName{};
  shared_ptr<string> progress{};
  shared_ptr<string> description{};
  shared_ptr<string> snapshotId{};
  shared_ptr<long> remainTime{};
  shared_ptr<string> sourceDiskSize{};
  shared_ptr<string> sourceDiskType{};
  shared_ptr<string> desktopId{};

  DescribeSnapshotsResponseBodySnapshots() {}

  explicit DescribeSnapshotsResponseBodySnapshots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (snapshotType) {
      res["SnapshotType"] = boost::any(*snapshotType);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (remainTime) {
      res["RemainTime"] = boost::any(*remainTime);
    }
    if (sourceDiskSize) {
      res["SourceDiskSize"] = boost::any(*sourceDiskSize);
    }
    if (sourceDiskType) {
      res["SourceDiskType"] = boost::any(*sourceDiskType);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SnapshotType") != m.end() && !m["SnapshotType"].empty()) {
      snapshotType = make_shared<string>(boost::any_cast<string>(m["SnapshotType"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("RemainTime") != m.end() && !m["RemainTime"].empty()) {
      remainTime = make_shared<long>(boost::any_cast<long>(m["RemainTime"]));
    }
    if (m.find("SourceDiskSize") != m.end() && !m["SourceDiskSize"].empty()) {
      sourceDiskSize = make_shared<string>(boost::any_cast<string>(m["SourceDiskSize"]));
    }
    if (m.find("SourceDiskType") != m.end() && !m["SourceDiskType"].empty()) {
      sourceDiskType = make_shared<string>(boost::any_cast<string>(m["SourceDiskType"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
  }


  virtual ~DescribeSnapshotsResponseBodySnapshots() = default;
};
class DescribeSnapshotsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSnapshotsResponseBodySnapshots>> snapshots{};

  DescribeSnapshotsResponseBody() {}

  explicit DescribeSnapshotsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (snapshots) {
      vector<boost::any> temp1;
      for(auto item1:*snapshots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Snapshots"] = boost::any(temp1);
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
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      if (typeid(vector<boost::any>) == m["Snapshots"].type()) {
        vector<DescribeSnapshotsResponseBodySnapshots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Snapshots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSnapshotsResponseBodySnapshots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        snapshots = make_shared<vector<DescribeSnapshotsResponseBodySnapshots>>(expect1);
      }
    }
  }


  virtual ~DescribeSnapshotsResponseBody() = default;
};
class DescribeSnapshotsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSnapshotsResponseBody> body{};

  DescribeSnapshotsResponse() {}

  explicit DescribeSnapshotsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSnapshotsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSnapshotsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSnapshotsResponse() = default;
};
class DescribeVirtualMFADevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> directoryId{};
  shared_ptr<vector<string>> endUserId{};

  DescribeVirtualMFADevicesRequest() {}

  explicit DescribeVirtualMFADevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndUserId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndUserId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endUserId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeVirtualMFADevicesRequest() = default;
};
class DescribeVirtualMFADevicesResponseBodyVirtualMFADevices : public Darabonba::Model {
public:
  shared_ptr<string> gmtUnlock{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> endUserId{};
  shared_ptr<long> consecutiveFails{};
  shared_ptr<string> status{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> gmtEnabled{};

  DescribeVirtualMFADevicesResponseBodyVirtualMFADevices() {}

  explicit DescribeVirtualMFADevicesResponseBodyVirtualMFADevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtUnlock) {
      res["GmtUnlock"] = boost::any(*gmtUnlock);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (consecutiveFails) {
      res["ConsecutiveFails"] = boost::any(*consecutiveFails);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (gmtEnabled) {
      res["GmtEnabled"] = boost::any(*gmtEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtUnlock") != m.end() && !m["GmtUnlock"].empty()) {
      gmtUnlock = make_shared<string>(boost::any_cast<string>(m["GmtUnlock"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("ConsecutiveFails") != m.end() && !m["ConsecutiveFails"].empty()) {
      consecutiveFails = make_shared<long>(boost::any_cast<long>(m["ConsecutiveFails"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("GmtEnabled") != m.end() && !m["GmtEnabled"].empty()) {
      gmtEnabled = make_shared<string>(boost::any_cast<string>(m["GmtEnabled"]));
    }
  }


  virtual ~DescribeVirtualMFADevicesResponseBodyVirtualMFADevices() = default;
};
class DescribeVirtualMFADevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVirtualMFADevicesResponseBodyVirtualMFADevices>> virtualMFADevices{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  DescribeVirtualMFADevicesResponseBody() {}

  explicit DescribeVirtualMFADevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (virtualMFADevices) {
      vector<boost::any> temp1;
      for(auto item1:*virtualMFADevices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VirtualMFADevices"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VirtualMFADevices") != m.end() && !m["VirtualMFADevices"].empty()) {
      if (typeid(vector<boost::any>) == m["VirtualMFADevices"].type()) {
        vector<DescribeVirtualMFADevicesResponseBodyVirtualMFADevices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VirtualMFADevices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVirtualMFADevicesResponseBodyVirtualMFADevices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        virtualMFADevices = make_shared<vector<DescribeVirtualMFADevicesResponseBodyVirtualMFADevices>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeVirtualMFADevicesResponseBody() = default;
};
class DescribeVirtualMFADevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVirtualMFADevicesResponseBody> body{};

  DescribeVirtualMFADevicesResponse() {}

  explicit DescribeVirtualMFADevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVirtualMFADevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVirtualMFADevicesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVirtualMFADevicesResponse() = default;
};
class DescribeZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeZonesRequest() {}

  explicit DescribeZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeZonesRequest() = default;
};
class DescribeZonesResponseBodyZones : public Darabonba::Model {
public:
  shared_ptr<string> zoneId{};

  DescribeZonesResponseBodyZones() {}

  explicit DescribeZonesResponseBodyZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeZonesResponseBodyZones() = default;
};
class DescribeZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeZonesResponseBodyZones>> zones{};

  DescribeZonesResponseBody() {}

  explicit DescribeZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zones) {
      vector<boost::any> temp1;
      for(auto item1:*zones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zones"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<DescribeZonesResponseBodyZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZonesResponseBodyZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<DescribeZonesResponseBodyZones>>(expect1);
      }
    }
  }


  virtual ~DescribeZonesResponseBody() = default;
};
class DescribeZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeZonesResponseBody> body{};

  DescribeZonesResponse() {}

  explicit DescribeZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeZonesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeZonesResponse() = default;
};
class DoCheckResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> invoker{};
  shared_ptr<string> pk{};
  shared_ptr<string> bid{};
  shared_ptr<long> hid{};
  shared_ptr<string> country{};
  shared_ptr<string> taskIdentifier{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> gmtWakeup{};
  shared_ptr<string> regionId{};

  DoCheckResourceRequest() {}

  explicit DoCheckResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invoker) {
      res["Invoker"] = boost::any(*invoker);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (hid) {
      res["Hid"] = boost::any(*hid);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (taskIdentifier) {
      res["TaskIdentifier"] = boost::any(*taskIdentifier);
    }
    if (taskExtraData) {
      res["TaskExtraData"] = boost::any(*taskExtraData);
    }
    if (gmtWakeup) {
      res["GmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Invoker") != m.end() && !m["Invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["Invoker"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Hid") != m.end() && !m["Hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["Hid"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("TaskIdentifier") != m.end() && !m["TaskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["TaskIdentifier"]));
    }
    if (m.find("TaskExtraData") != m.end() && !m["TaskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["TaskExtraData"]));
    }
    if (m.find("GmtWakeup") != m.end() && !m["GmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["GmtWakeup"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DoCheckResourceRequest() = default;
};
class DoCheckResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gmtWakeup{};
  shared_ptr<long> hid{};
  shared_ptr<string> message{};
  shared_ptr<string> taskIdentifier{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> url{};
  shared_ptr<bool> interrupt{};
  shared_ptr<string> invoker{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> country{};
  shared_ptr<string> prompt{};
  shared_ptr<long> level{};
  shared_ptr<string> pk{};
  shared_ptr<string> bid{};

  DoCheckResourceResponseBody() {}

  explicit DoCheckResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtWakeup) {
      res["GmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (hid) {
      res["Hid"] = boost::any(*hid);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (taskIdentifier) {
      res["TaskIdentifier"] = boost::any(*taskIdentifier);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (interrupt) {
      res["Interrupt"] = boost::any(*interrupt);
    }
    if (invoker) {
      res["Invoker"] = boost::any(*invoker);
    }
    if (taskExtraData) {
      res["TaskExtraData"] = boost::any(*taskExtraData);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtWakeup") != m.end() && !m["GmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["GmtWakeup"]));
    }
    if (m.find("Hid") != m.end() && !m["Hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["Hid"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TaskIdentifier") != m.end() && !m["TaskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["TaskIdentifier"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Interrupt") != m.end() && !m["Interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["Interrupt"]));
    }
    if (m.find("Invoker") != m.end() && !m["Invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["Invoker"]));
    }
    if (m.find("TaskExtraData") != m.end() && !m["TaskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["TaskExtraData"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
  }


  virtual ~DoCheckResourceResponseBody() = default;
};
class DoCheckResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DoCheckResourceResponseBody> body{};

  DoCheckResourceResponse() {}

  explicit DoCheckResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DoCheckResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DoCheckResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DoCheckResourceResponse() = default;
};
class DoLogicalDeleteResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> invoker{};
  shared_ptr<string> pk{};
  shared_ptr<string> bid{};
  shared_ptr<long> hid{};
  shared_ptr<string> country{};
  shared_ptr<string> taskIdentifier{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> gmtWakeup{};
  shared_ptr<string> regionId{};

  DoLogicalDeleteResourceRequest() {}

  explicit DoLogicalDeleteResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invoker) {
      res["Invoker"] = boost::any(*invoker);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (hid) {
      res["Hid"] = boost::any(*hid);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (taskIdentifier) {
      res["TaskIdentifier"] = boost::any(*taskIdentifier);
    }
    if (taskExtraData) {
      res["TaskExtraData"] = boost::any(*taskExtraData);
    }
    if (gmtWakeup) {
      res["GmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Invoker") != m.end() && !m["Invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["Invoker"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Hid") != m.end() && !m["Hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["Hid"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("TaskIdentifier") != m.end() && !m["TaskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["TaskIdentifier"]));
    }
    if (m.find("TaskExtraData") != m.end() && !m["TaskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["TaskExtraData"]));
    }
    if (m.find("GmtWakeup") != m.end() && !m["GmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["GmtWakeup"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DoLogicalDeleteResourceRequest() = default;
};
class DoLogicalDeleteResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gmtWakeup{};
  shared_ptr<long> hid{};
  shared_ptr<string> message{};
  shared_ptr<string> taskIdentifier{};
  shared_ptr<string> requestId{};
  shared_ptr<string> invoker{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> country{};
  shared_ptr<string> pk{};
  shared_ptr<string> bid{};
  shared_ptr<bool> success{};
  shared_ptr<bool> interrupt{};

  DoLogicalDeleteResourceResponseBody() {}

  explicit DoLogicalDeleteResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtWakeup) {
      res["GmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (hid) {
      res["Hid"] = boost::any(*hid);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (taskIdentifier) {
      res["TaskIdentifier"] = boost::any(*taskIdentifier);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (invoker) {
      res["Invoker"] = boost::any(*invoker);
    }
    if (taskExtraData) {
      res["TaskExtraData"] = boost::any(*taskExtraData);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (interrupt) {
      res["Interrupt"] = boost::any(*interrupt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtWakeup") != m.end() && !m["GmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["GmtWakeup"]));
    }
    if (m.find("Hid") != m.end() && !m["Hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["Hid"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TaskIdentifier") != m.end() && !m["TaskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["TaskIdentifier"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Invoker") != m.end() && !m["Invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["Invoker"]));
    }
    if (m.find("TaskExtraData") != m.end() && !m["TaskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["TaskExtraData"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Interrupt") != m.end() && !m["Interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["Interrupt"]));
    }
  }


  virtual ~DoLogicalDeleteResourceResponseBody() = default;
};
class DoLogicalDeleteResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DoLogicalDeleteResourceResponseBody> body{};

  DoLogicalDeleteResourceResponse() {}

  explicit DoLogicalDeleteResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DoLogicalDeleteResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DoLogicalDeleteResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DoLogicalDeleteResourceResponse() = default;
};
class DoPhysicalDeleteResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> invoker{};
  shared_ptr<string> pk{};
  shared_ptr<string> bid{};
  shared_ptr<long> hid{};
  shared_ptr<string> country{};
  shared_ptr<string> taskIdentifier{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> gmtWakeup{};
  shared_ptr<string> regionId{};

  DoPhysicalDeleteResourceRequest() {}

  explicit DoPhysicalDeleteResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invoker) {
      res["Invoker"] = boost::any(*invoker);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (hid) {
      res["Hid"] = boost::any(*hid);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (taskIdentifier) {
      res["TaskIdentifier"] = boost::any(*taskIdentifier);
    }
    if (taskExtraData) {
      res["TaskExtraData"] = boost::any(*taskExtraData);
    }
    if (gmtWakeup) {
      res["GmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Invoker") != m.end() && !m["Invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["Invoker"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Hid") != m.end() && !m["Hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["Hid"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("TaskIdentifier") != m.end() && !m["TaskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["TaskIdentifier"]));
    }
    if (m.find("TaskExtraData") != m.end() && !m["TaskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["TaskExtraData"]));
    }
    if (m.find("GmtWakeup") != m.end() && !m["GmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["GmtWakeup"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DoPhysicalDeleteResourceRequest() = default;
};
class DoPhysicalDeleteResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gmtWakeup{};
  shared_ptr<long> hid{};
  shared_ptr<string> message{};
  shared_ptr<string> taskIdentifier{};
  shared_ptr<string> requestId{};
  shared_ptr<string> invoker{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> country{};
  shared_ptr<string> pk{};
  shared_ptr<string> bid{};
  shared_ptr<bool> success{};
  shared_ptr<bool> interrupt{};

  DoPhysicalDeleteResourceResponseBody() {}

  explicit DoPhysicalDeleteResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtWakeup) {
      res["GmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (hid) {
      res["Hid"] = boost::any(*hid);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (taskIdentifier) {
      res["TaskIdentifier"] = boost::any(*taskIdentifier);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (invoker) {
      res["Invoker"] = boost::any(*invoker);
    }
    if (taskExtraData) {
      res["TaskExtraData"] = boost::any(*taskExtraData);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (interrupt) {
      res["Interrupt"] = boost::any(*interrupt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtWakeup") != m.end() && !m["GmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["GmtWakeup"]));
    }
    if (m.find("Hid") != m.end() && !m["Hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["Hid"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TaskIdentifier") != m.end() && !m["TaskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["TaskIdentifier"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Invoker") != m.end() && !m["Invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["Invoker"]));
    }
    if (m.find("TaskExtraData") != m.end() && !m["TaskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["TaskExtraData"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Interrupt") != m.end() && !m["Interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["Interrupt"]));
    }
  }


  virtual ~DoPhysicalDeleteResourceResponseBody() = default;
};
class DoPhysicalDeleteResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DoPhysicalDeleteResourceResponseBody> body{};

  DoPhysicalDeleteResourceResponse() {}

  explicit DoPhysicalDeleteResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DoPhysicalDeleteResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DoPhysicalDeleteResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DoPhysicalDeleteResourceResponse() = default;
};
class GetConnectionTicketRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> userName{};
  shared_ptr<string> password{};
  shared_ptr<string> taskId{};
  shared_ptr<string> desktopId{};

  GetConnectionTicketRequest() {}

  explicit GetConnectionTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
  }


  virtual ~GetConnectionTicketRequest() = default;
};
class GetConnectionTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ticket{};
  shared_ptr<string> taskId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskStatus{};

  GetConnectionTicketResponseBody() {}

  explicit GetConnectionTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ticket) {
      res["Ticket"] = boost::any(*ticket);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ticket") != m.end() && !m["Ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["Ticket"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~GetConnectionTicketResponseBody() = default;
};
class GetConnectionTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetConnectionTicketResponseBody> body{};

  GetConnectionTicketResponse() {}

  explicit GetConnectionTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConnectionTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConnectionTicketResponseBody>(model1);
      }
    }
  }


  virtual ~GetConnectionTicketResponse() = default;
};
class ListDirectoryUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> filter{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};

  ListDirectoryUsersRequest() {}

  explicit ListDirectoryUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
  }


  virtual ~ListDirectoryUsersRequest() = default;
};
class ListDirectoryUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<string> endUser{};

  ListDirectoryUsersResponseBodyUsers() {}

  explicit ListDirectoryUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUser) {
      res["EndUser"] = boost::any(*endUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUser") != m.end() && !m["EndUser"].empty()) {
      endUser = make_shared<string>(boost::any_cast<string>(m["EndUser"]));
    }
  }


  virtual ~ListDirectoryUsersResponseBodyUsers() = default;
};
class ListDirectoryUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDirectoryUsersResponseBodyUsers>> users{};

  ListDirectoryUsersResponseBody() {}

  explicit ListDirectoryUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
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
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<ListDirectoryUsersResponseBodyUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDirectoryUsersResponseBodyUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListDirectoryUsersResponseBodyUsers>>(expect1);
      }
    }
  }


  virtual ~ListDirectoryUsersResponseBody() = default;
};
class ListDirectoryUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDirectoryUsersResponseBody> body{};

  ListDirectoryUsersResponse() {}

  explicit ListDirectoryUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDirectoryUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDirectoryUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListDirectoryUsersResponse() = default;
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
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagValue{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tagKey{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
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
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class LockVirtualMFADeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> serialNumber{};

  LockVirtualMFADeviceRequest() {}

  explicit LockVirtualMFADeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
  }


  virtual ~LockVirtualMFADeviceRequest() = default;
};
class LockVirtualMFADeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  LockVirtualMFADeviceResponseBody() {}

  explicit LockVirtualMFADeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~LockVirtualMFADeviceResponseBody() = default;
};
class LockVirtualMFADeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<LockVirtualMFADeviceResponseBody> body{};

  LockVirtualMFADeviceResponse() {}

  explicit LockVirtualMFADeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LockVirtualMFADeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LockVirtualMFADeviceResponseBody>(model1);
      }
    }
  }


  virtual ~LockVirtualMFADeviceResponse() = default;
};
class ModifyADConnectorDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainUserName{};
  shared_ptr<string> domainPassword{};
  shared_ptr<string> directoryName{};
  shared_ptr<string> subDomainName{};
  shared_ptr<bool> mfaEnabled{};
  shared_ptr<vector<string>> dnsAddress{};
  shared_ptr<vector<string>> subDomainDnsAddress{};

  ModifyADConnectorDirectoryRequest() {}

  explicit ModifyADConnectorDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainUserName) {
      res["DomainUserName"] = boost::any(*domainUserName);
    }
    if (domainPassword) {
      res["DomainPassword"] = boost::any(*domainPassword);
    }
    if (directoryName) {
      res["DirectoryName"] = boost::any(*directoryName);
    }
    if (subDomainName) {
      res["SubDomainName"] = boost::any(*subDomainName);
    }
    if (mfaEnabled) {
      res["MfaEnabled"] = boost::any(*mfaEnabled);
    }
    if (dnsAddress) {
      res["DnsAddress"] = boost::any(*dnsAddress);
    }
    if (subDomainDnsAddress) {
      res["SubDomainDnsAddress"] = boost::any(*subDomainDnsAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainUserName") != m.end() && !m["DomainUserName"].empty()) {
      domainUserName = make_shared<string>(boost::any_cast<string>(m["DomainUserName"]));
    }
    if (m.find("DomainPassword") != m.end() && !m["DomainPassword"].empty()) {
      domainPassword = make_shared<string>(boost::any_cast<string>(m["DomainPassword"]));
    }
    if (m.find("DirectoryName") != m.end() && !m["DirectoryName"].empty()) {
      directoryName = make_shared<string>(boost::any_cast<string>(m["DirectoryName"]));
    }
    if (m.find("SubDomainName") != m.end() && !m["SubDomainName"].empty()) {
      subDomainName = make_shared<string>(boost::any_cast<string>(m["SubDomainName"]));
    }
    if (m.find("MfaEnabled") != m.end() && !m["MfaEnabled"].empty()) {
      mfaEnabled = make_shared<bool>(boost::any_cast<bool>(m["MfaEnabled"]));
    }
    if (m.find("DnsAddress") != m.end() && !m["DnsAddress"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DnsAddress"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DnsAddress"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dnsAddress = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubDomainDnsAddress") != m.end() && !m["SubDomainDnsAddress"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubDomainDnsAddress"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubDomainDnsAddress"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subDomainDnsAddress = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyADConnectorDirectoryRequest() = default;
};
class ModifyADConnectorDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyADConnectorDirectoryResponseBody() {}

  explicit ModifyADConnectorDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyADConnectorDirectoryResponseBody() = default;
};
class ModifyADConnectorDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyADConnectorDirectoryResponseBody> body{};

  ModifyADConnectorDirectoryResponse() {}

  explicit ModifyADConnectorDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyADConnectorDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyADConnectorDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyADConnectorDirectoryResponse() = default;
};
class ModifyDesktopNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> newDesktopName{};
  shared_ptr<string> desktopId{};

  ModifyDesktopNameRequest() {}

  explicit ModifyDesktopNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (newDesktopName) {
      res["NewDesktopName"] = boost::any(*newDesktopName);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("NewDesktopName") != m.end() && !m["NewDesktopName"].empty()) {
      newDesktopName = make_shared<string>(boost::any_cast<string>(m["NewDesktopName"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
  }


  virtual ~ModifyDesktopNameRequest() = default;
};
class ModifyDesktopNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDesktopNameResponseBody() {}

  explicit ModifyDesktopNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDesktopNameResponseBody() = default;
};
class ModifyDesktopNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDesktopNameResponseBody> body{};

  ModifyDesktopNameResponse() {}

  explicit ModifyDesktopNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDesktopNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDesktopNameResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDesktopNameResponse() = default;
};
class ModifyDesktopPolicysRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clipboard{};
  shared_ptr<string> localDrive{};
  shared_ptr<string> usbRedirect{};
  shared_ptr<string> watermark{};
  shared_ptr<vector<string>> desktopId{};

  ModifyDesktopPolicysRequest() {}

  explicit ModifyDesktopPolicysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clipboard) {
      res["Clipboard"] = boost::any(*clipboard);
    }
    if (localDrive) {
      res["LocalDrive"] = boost::any(*localDrive);
    }
    if (usbRedirect) {
      res["UsbRedirect"] = boost::any(*usbRedirect);
    }
    if (watermark) {
      res["Watermark"] = boost::any(*watermark);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Clipboard") != m.end() && !m["Clipboard"].empty()) {
      clipboard = make_shared<string>(boost::any_cast<string>(m["Clipboard"]));
    }
    if (m.find("LocalDrive") != m.end() && !m["LocalDrive"].empty()) {
      localDrive = make_shared<string>(boost::any_cast<string>(m["LocalDrive"]));
    }
    if (m.find("UsbRedirect") != m.end() && !m["UsbRedirect"].empty()) {
      usbRedirect = make_shared<string>(boost::any_cast<string>(m["UsbRedirect"]));
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      watermark = make_shared<string>(boost::any_cast<string>(m["Watermark"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyDesktopPolicysRequest() = default;
};
class ModifyDesktopPolicysResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> desktopId{};

  ModifyDesktopPolicysResponseBodyResults() {}

  explicit ModifyDesktopPolicysResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
  }


  virtual ~ModifyDesktopPolicysResponseBodyResults() = default;
};
class ModifyDesktopPolicysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ModifyDesktopPolicysResponseBodyResults>> results{};

  ModifyDesktopPolicysResponseBody() {}

  explicit ModifyDesktopPolicysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<ModifyDesktopPolicysResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyDesktopPolicysResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<ModifyDesktopPolicysResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~ModifyDesktopPolicysResponseBody() = default;
};
class ModifyDesktopPolicysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDesktopPolicysResponseBody> body{};

  ModifyDesktopPolicysResponse() {}

  explicit ModifyDesktopPolicysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDesktopPolicysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDesktopPolicysResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDesktopPolicysResponse() = default;
};
class ModifyDesktopsPolicyGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<vector<string>> desktopId{};

  ModifyDesktopsPolicyGroupRequest() {}

  explicit ModifyDesktopsPolicyGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyDesktopsPolicyGroupRequest() = default;
};
class ModifyDesktopsPolicyGroupResponseBodyModifyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> message{};
  shared_ptr<string> desktopId{};

  ModifyDesktopsPolicyGroupResponseBodyModifyResults() {}

  explicit ModifyDesktopsPolicyGroupResponseBodyModifyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<long>(boost::any_cast<long>(m["Message"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
  }


  virtual ~ModifyDesktopsPolicyGroupResponseBodyModifyResults() = default;
};
class ModifyDesktopsPolicyGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ModifyDesktopsPolicyGroupResponseBodyModifyResults>> modifyResults{};

  ModifyDesktopsPolicyGroupResponseBody() {}

  explicit ModifyDesktopsPolicyGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (modifyResults) {
      vector<boost::any> temp1;
      for(auto item1:*modifyResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModifyResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ModifyResults") != m.end() && !m["ModifyResults"].empty()) {
      if (typeid(vector<boost::any>) == m["ModifyResults"].type()) {
        vector<ModifyDesktopsPolicyGroupResponseBodyModifyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModifyResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyDesktopsPolicyGroupResponseBodyModifyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modifyResults = make_shared<vector<ModifyDesktopsPolicyGroupResponseBodyModifyResults>>(expect1);
      }
    }
  }


  virtual ~ModifyDesktopsPolicyGroupResponseBody() = default;
};
class ModifyDesktopsPolicyGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDesktopsPolicyGroupResponseBody> body{};

  ModifyDesktopsPolicyGroupResponse() {}

  explicit ModifyDesktopsPolicyGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDesktopsPolicyGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDesktopsPolicyGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDesktopsPolicyGroupResponse() = default;
};
class ModifyEntitlementRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopId{};
  shared_ptr<vector<string>> endUserId{};

  ModifyEntitlementRequest() {}

  explicit ModifyEntitlementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndUserId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndUserId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endUserId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyEntitlementRequest() = default;
};
class ModifyEntitlementResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyEntitlementResponseBody() {}

  explicit ModifyEntitlementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyEntitlementResponseBody() = default;
};
class ModifyEntitlementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyEntitlementResponseBody> body{};

  ModifyEntitlementResponse() {}

  explicit ModifyEntitlementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyEntitlementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyEntitlementResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyEntitlementResponse() = default;
};
class ModifyImageAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> imageId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};

  ModifyImageAttributeRequest() {}

  explicit ModifyImageAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~ModifyImageAttributeRequest() = default;
};
class ModifyImageAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyImageAttributeResponseBody() {}

  explicit ModifyImageAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyImageAttributeResponseBody() = default;
};
class ModifyImageAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyImageAttributeResponseBody> body{};

  ModifyImageAttributeResponse() {}

  explicit ModifyImageAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyImageAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyImageAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyImageAttributeResponse() = default;
};
class ModifyPolicyGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> name{};
  shared_ptr<string> clipboard{};
  shared_ptr<string> localDrive{};
  shared_ptr<string> usbRedirect{};
  shared_ptr<string> watermark{};
  shared_ptr<string> watermarkType{};
  shared_ptr<string> watermarkCustomText{};
  shared_ptr<string> watermarkTransparency{};

  ModifyPolicyGroupRequest() {}

  explicit ModifyPolicyGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (clipboard) {
      res["Clipboard"] = boost::any(*clipboard);
    }
    if (localDrive) {
      res["LocalDrive"] = boost::any(*localDrive);
    }
    if (usbRedirect) {
      res["UsbRedirect"] = boost::any(*usbRedirect);
    }
    if (watermark) {
      res["Watermark"] = boost::any(*watermark);
    }
    if (watermarkType) {
      res["WatermarkType"] = boost::any(*watermarkType);
    }
    if (watermarkCustomText) {
      res["WatermarkCustomText"] = boost::any(*watermarkCustomText);
    }
    if (watermarkTransparency) {
      res["WatermarkTransparency"] = boost::any(*watermarkTransparency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Clipboard") != m.end() && !m["Clipboard"].empty()) {
      clipboard = make_shared<string>(boost::any_cast<string>(m["Clipboard"]));
    }
    if (m.find("LocalDrive") != m.end() && !m["LocalDrive"].empty()) {
      localDrive = make_shared<string>(boost::any_cast<string>(m["LocalDrive"]));
    }
    if (m.find("UsbRedirect") != m.end() && !m["UsbRedirect"].empty()) {
      usbRedirect = make_shared<string>(boost::any_cast<string>(m["UsbRedirect"]));
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      watermark = make_shared<string>(boost::any_cast<string>(m["Watermark"]));
    }
    if (m.find("WatermarkType") != m.end() && !m["WatermarkType"].empty()) {
      watermarkType = make_shared<string>(boost::any_cast<string>(m["WatermarkType"]));
    }
    if (m.find("WatermarkCustomText") != m.end() && !m["WatermarkCustomText"].empty()) {
      watermarkCustomText = make_shared<string>(boost::any_cast<string>(m["WatermarkCustomText"]));
    }
    if (m.find("WatermarkTransparency") != m.end() && !m["WatermarkTransparency"].empty()) {
      watermarkTransparency = make_shared<string>(boost::any_cast<string>(m["WatermarkTransparency"]));
    }
  }


  virtual ~ModifyPolicyGroupRequest() = default;
};
class ModifyPolicyGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyPolicyGroupResponseBody() {}

  explicit ModifyPolicyGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyPolicyGroupResponseBody() = default;
};
class ModifyPolicyGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyPolicyGroupResponseBody> body{};

  ModifyPolicyGroupResponse() {}

  explicit ModifyPolicyGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPolicyGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPolicyGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPolicyGroupResponse() = default;
};
class PayOrderCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> data{};

  PayOrderCallbackRequest() {}

  explicit PayOrderCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~PayOrderCallbackRequest() = default;
};
class PayOrderCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PayOrderCallbackResponseBody() {}

  explicit PayOrderCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PayOrderCallbackResponseBody() = default;
};
class PayOrderCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PayOrderCallbackResponseBody> body{};

  PayOrderCallbackResponse() {}

  explicit PayOrderCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PayOrderCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PayOrderCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~PayOrderCallbackResponse() = default;
};
class RebootDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> desktopId{};

  RebootDesktopsRequest() {}

  explicit RebootDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RebootDesktopsRequest() = default;
};
class RebootDesktopsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RebootDesktopsResponseBody() {}

  explicit RebootDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RebootDesktopsResponseBody() = default;
};
class RebootDesktopsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RebootDesktopsResponseBody> body{};

  RebootDesktopsResponse() {}

  explicit RebootDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RebootDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RebootDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~RebootDesktopsResponse() = default;
};
class RenewDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<bool> autoPay{};
  shared_ptr<vector<string>> desktopId{};

  RenewDesktopsRequest() {}

  explicit RenewDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RenewDesktopsRequest() = default;
};
class RenewDesktopsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> orderId{};

  RenewDesktopsResponseBody() {}

  explicit RenewDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~RenewDesktopsResponseBody() = default;
};
class RenewDesktopsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RenewDesktopsResponseBody> body{};

  RenewDesktopsResponse() {}

  explicit RenewDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~RenewDesktopsResponse() = default;
};
class ResetSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> snapshotId{};

  ResetSnapshotRequest() {}

  explicit ResetSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
  }


  virtual ~ResetSnapshotRequest() = default;
};
class ResetSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetSnapshotResponseBody() {}

  explicit ResetSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetSnapshotResponseBody() = default;
};
class ResetSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResetSnapshotResponseBody> body{};

  ResetSnapshotResponse() {}

  explicit ResetSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~ResetSnapshotResponse() = default;
};
class RunCommandRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};
  shared_ptr<string> commandContent{};
  shared_ptr<long> timeout{};
  shared_ptr<string> contentEncoding{};
  shared_ptr<vector<string>> desktopId{};

  RunCommandRequest() {}

  explicit RunCommandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (commandContent) {
      res["CommandContent"] = boost::any(*commandContent);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (contentEncoding) {
      res["ContentEncoding"] = boost::any(*contentEncoding);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("CommandContent") != m.end() && !m["CommandContent"].empty()) {
      commandContent = make_shared<string>(boost::any_cast<string>(m["CommandContent"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("ContentEncoding") != m.end() && !m["ContentEncoding"].empty()) {
      contentEncoding = make_shared<string>(boost::any_cast<string>(m["ContentEncoding"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RunCommandRequest() = default;
};
class RunCommandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> invokeId{};

  RunCommandResponseBody() {}

  explicit RunCommandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
  }


  virtual ~RunCommandResponseBody() = default;
};
class RunCommandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RunCommandResponseBody> body{};

  RunCommandResponse() {}

  explicit RunCommandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunCommandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunCommandResponseBody>(model1);
      }
    }
  }


  virtual ~RunCommandResponse() = default;
};
class StartDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> desktopId{};

  StartDesktopsRequest() {}

  explicit StartDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~StartDesktopsRequest() = default;
};
class StartDesktopsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartDesktopsResponseBody() {}

  explicit StartDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartDesktopsResponseBody() = default;
};
class StartDesktopsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartDesktopsResponseBody> body{};

  StartDesktopsResponse() {}

  explicit StartDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~StartDesktopsResponse() = default;
};
class StopDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> desktopId{};

  StopDesktopsRequest() {}

  explicit StopDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~StopDesktopsRequest() = default;
};
class StopDesktopsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopDesktopsResponseBody() {}

  explicit StopDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopDesktopsResponseBody() = default;
};
class StopDesktopsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopDesktopsResponseBody> body{};

  StopDesktopsResponse() {}

  explicit StopDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~StopDesktopsResponse() = default;
};
class StopInvocationRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> invokeId{};
  shared_ptr<vector<string>> desktopId{};

  StopInvocationRequest() {}

  explicit StopInvocationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~StopInvocationRequest() = default;
};
class StopInvocationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopInvocationResponseBody() {}

  explicit StopInvocationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopInvocationResponseBody() = default;
};
class StopInvocationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopInvocationResponseBody> body{};

  StopInvocationResponse() {}

  explicit StopInvocationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopInvocationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopInvocationResponseBody>(model1);
      }
    }
  }


  virtual ~StopInvocationResponse() = default;
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
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UnlockVirtualMFADeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> serialNumber{};

  UnlockVirtualMFADeviceRequest() {}

  explicit UnlockVirtualMFADeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
  }


  virtual ~UnlockVirtualMFADeviceRequest() = default;
};
class UnlockVirtualMFADeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnlockVirtualMFADeviceResponseBody() {}

  explicit UnlockVirtualMFADeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnlockVirtualMFADeviceResponseBody() = default;
};
class UnlockVirtualMFADeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnlockVirtualMFADeviceResponseBody> body{};

  UnlockVirtualMFADeviceResponse() {}

  explicit UnlockVirtualMFADeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnlockVirtualMFADeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnlockVirtualMFADeviceResponseBody>(model1);
      }
    }
  }


  virtual ~UnlockVirtualMFADeviceResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<bool> all{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
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
  CreateADConnectorDirectoryResponse createADConnectorDirectoryWithOptions(shared_ptr<CreateADConnectorDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateADConnectorDirectoryResponse createADConnectorDirectory(shared_ptr<CreateADConnectorDirectoryRequest> request);
  CreateBundleResponse createBundleWithOptions(shared_ptr<CreateBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBundleResponse createBundle(shared_ptr<CreateBundleRequest> request);
  CreateDesktopsResponse createDesktopsWithOptions(shared_ptr<CreateDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDesktopsResponse createDesktops(shared_ptr<CreateDesktopsRequest> request);
  CreateImageResponse createImageWithOptions(shared_ptr<CreateImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateImageResponse createImage(shared_ptr<CreateImageRequest> request);
  CreatePolicyGroupResponse createPolicyGroupWithOptions(shared_ptr<CreatePolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyGroupResponse createPolicyGroup(shared_ptr<CreatePolicyGroupRequest> request);
  CreateRAMDirectoryResponse createRAMDirectoryWithOptions(shared_ptr<CreateRAMDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRAMDirectoryResponse createRAMDirectory(shared_ptr<CreateRAMDirectoryRequest> request);
  CreateSnapshotResponse createSnapshotWithOptions(shared_ptr<CreateSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSnapshotResponse createSnapshot(shared_ptr<CreateSnapshotRequest> request);
  DeleteBundlesResponse deleteBundlesWithOptions(shared_ptr<DeleteBundlesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBundlesResponse deleteBundles(shared_ptr<DeleteBundlesRequest> request);
  DeleteDesktopsResponse deleteDesktopsWithOptions(shared_ptr<DeleteDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDesktopsResponse deleteDesktops(shared_ptr<DeleteDesktopsRequest> request);
  DeleteDirectoriesResponse deleteDirectoriesWithOptions(shared_ptr<DeleteDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDirectoriesResponse deleteDirectories(shared_ptr<DeleteDirectoriesRequest> request);
  DeleteImagesResponse deleteImagesWithOptions(shared_ptr<DeleteImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImagesResponse deleteImages(shared_ptr<DeleteImagesRequest> request);
  DeletePolicyGroupsResponse deletePolicyGroupsWithOptions(shared_ptr<DeletePolicyGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyGroupsResponse deletePolicyGroups(shared_ptr<DeletePolicyGroupsRequest> request);
  DeleteSnapshotResponse deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSnapshotResponse deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request);
  DeleteVirtualMFADeviceResponse deleteVirtualMFADeviceWithOptions(shared_ptr<DeleteVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVirtualMFADeviceResponse deleteVirtualMFADevice(shared_ptr<DeleteVirtualMFADeviceRequest> request);
  DescribeBundlesResponse describeBundlesWithOptions(shared_ptr<DescribeBundlesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBundlesResponse describeBundles(shared_ptr<DescribeBundlesRequest> request);
  DescribeClientEventsResponse describeClientEventsWithOptions(shared_ptr<DescribeClientEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClientEventsResponse describeClientEvents(shared_ptr<DescribeClientEventsRequest> request);
  DescribeDesktopPolicysResponse describeDesktopPolicysWithOptions(shared_ptr<DescribeDesktopPolicysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDesktopPolicysResponse describeDesktopPolicys(shared_ptr<DescribeDesktopPolicysRequest> request);
  DescribeDesktopsResponse describeDesktopsWithOptions(shared_ptr<DescribeDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDesktopsResponse describeDesktops(shared_ptr<DescribeDesktopsRequest> request);
  DescribeDesktopTypesResponse describeDesktopTypesWithOptions(shared_ptr<DescribeDesktopTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDesktopTypesResponse describeDesktopTypes(shared_ptr<DescribeDesktopTypesRequest> request);
  DescribeDirectoriesResponse describeDirectoriesWithOptions(shared_ptr<DescribeDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDirectoriesResponse describeDirectories(shared_ptr<DescribeDirectoriesRequest> request);
  DescribeImagesResponse describeImagesWithOptions(shared_ptr<DescribeImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImagesResponse describeImages(shared_ptr<DescribeImagesRequest> request);
  DescribeInvocationsResponse describeInvocationsWithOptions(shared_ptr<DescribeInvocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInvocationsResponse describeInvocations(shared_ptr<DescribeInvocationsRequest> request);
  DescribePolicyGroupsResponse describePolicyGroupsWithOptions(shared_ptr<DescribePolicyGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePolicyGroupsResponse describePolicyGroups(shared_ptr<DescribePolicyGroupsRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeSnapshotsResponse describeSnapshotsWithOptions(shared_ptr<DescribeSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSnapshotsResponse describeSnapshots(shared_ptr<DescribeSnapshotsRequest> request);
  DescribeVirtualMFADevicesResponse describeVirtualMFADevicesWithOptions(shared_ptr<DescribeVirtualMFADevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVirtualMFADevicesResponse describeVirtualMFADevices(shared_ptr<DescribeVirtualMFADevicesRequest> request);
  DescribeZonesResponse describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZonesResponse describeZones(shared_ptr<DescribeZonesRequest> request);
  DoCheckResourceResponse doCheckResourceWithOptions(shared_ptr<DoCheckResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DoCheckResourceResponse doCheckResource(shared_ptr<DoCheckResourceRequest> request);
  DoLogicalDeleteResourceResponse doLogicalDeleteResourceWithOptions(shared_ptr<DoLogicalDeleteResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DoLogicalDeleteResourceResponse doLogicalDeleteResource(shared_ptr<DoLogicalDeleteResourceRequest> request);
  DoPhysicalDeleteResourceResponse doPhysicalDeleteResourceWithOptions(shared_ptr<DoPhysicalDeleteResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DoPhysicalDeleteResourceResponse doPhysicalDeleteResource(shared_ptr<DoPhysicalDeleteResourceRequest> request);
  GetConnectionTicketResponse getConnectionTicketWithOptions(shared_ptr<GetConnectionTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConnectionTicketResponse getConnectionTicket(shared_ptr<GetConnectionTicketRequest> request);
  ListDirectoryUsersResponse listDirectoryUsersWithOptions(shared_ptr<ListDirectoryUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDirectoryUsersResponse listDirectoryUsers(shared_ptr<ListDirectoryUsersRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  LockVirtualMFADeviceResponse lockVirtualMFADeviceWithOptions(shared_ptr<LockVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LockVirtualMFADeviceResponse lockVirtualMFADevice(shared_ptr<LockVirtualMFADeviceRequest> request);
  ModifyADConnectorDirectoryResponse modifyADConnectorDirectoryWithOptions(shared_ptr<ModifyADConnectorDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyADConnectorDirectoryResponse modifyADConnectorDirectory(shared_ptr<ModifyADConnectorDirectoryRequest> request);
  ModifyDesktopNameResponse modifyDesktopNameWithOptions(shared_ptr<ModifyDesktopNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDesktopNameResponse modifyDesktopName(shared_ptr<ModifyDesktopNameRequest> request);
  ModifyDesktopPolicysResponse modifyDesktopPolicysWithOptions(shared_ptr<ModifyDesktopPolicysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDesktopPolicysResponse modifyDesktopPolicys(shared_ptr<ModifyDesktopPolicysRequest> request);
  ModifyDesktopsPolicyGroupResponse modifyDesktopsPolicyGroupWithOptions(shared_ptr<ModifyDesktopsPolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDesktopsPolicyGroupResponse modifyDesktopsPolicyGroup(shared_ptr<ModifyDesktopsPolicyGroupRequest> request);
  ModifyEntitlementResponse modifyEntitlementWithOptions(shared_ptr<ModifyEntitlementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyEntitlementResponse modifyEntitlement(shared_ptr<ModifyEntitlementRequest> request);
  ModifyImageAttributeResponse modifyImageAttributeWithOptions(shared_ptr<ModifyImageAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyImageAttributeResponse modifyImageAttribute(shared_ptr<ModifyImageAttributeRequest> request);
  ModifyPolicyGroupResponse modifyPolicyGroupWithOptions(shared_ptr<ModifyPolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPolicyGroupResponse modifyPolicyGroup(shared_ptr<ModifyPolicyGroupRequest> request);
  PayOrderCallbackResponse payOrderCallbackWithOptions(shared_ptr<PayOrderCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PayOrderCallbackResponse payOrderCallback(shared_ptr<PayOrderCallbackRequest> request);
  RebootDesktopsResponse rebootDesktopsWithOptions(shared_ptr<RebootDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebootDesktopsResponse rebootDesktops(shared_ptr<RebootDesktopsRequest> request);
  RenewDesktopsResponse renewDesktopsWithOptions(shared_ptr<RenewDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewDesktopsResponse renewDesktops(shared_ptr<RenewDesktopsRequest> request);
  ResetSnapshotResponse resetSnapshotWithOptions(shared_ptr<ResetSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetSnapshotResponse resetSnapshot(shared_ptr<ResetSnapshotRequest> request);
  RunCommandResponse runCommandWithOptions(shared_ptr<RunCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunCommandResponse runCommand(shared_ptr<RunCommandRequest> request);
  StartDesktopsResponse startDesktopsWithOptions(shared_ptr<StartDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDesktopsResponse startDesktops(shared_ptr<StartDesktopsRequest> request);
  StopDesktopsResponse stopDesktopsWithOptions(shared_ptr<StopDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDesktopsResponse stopDesktops(shared_ptr<StopDesktopsRequest> request);
  StopInvocationResponse stopInvocationWithOptions(shared_ptr<StopInvocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopInvocationResponse stopInvocation(shared_ptr<StopInvocationRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UnlockVirtualMFADeviceResponse unlockVirtualMFADeviceWithOptions(shared_ptr<UnlockVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnlockVirtualMFADeviceResponse unlockVirtualMFADevice(shared_ptr<UnlockVirtualMFADeviceRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ecd20200930

#endif
