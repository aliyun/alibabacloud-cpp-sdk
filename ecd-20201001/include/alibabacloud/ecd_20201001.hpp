// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ECD20201001_H_
#define ALIBABACLOUD_ECD20201001_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ecd20201001 {
class DescribeDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> desktopId{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> desktopStatus{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> groupId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userName{};

  DescribeDesktopsRequest() {}

  explicit DescribeDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (desktopStatus) {
      res["DesktopStatus"] = boost::any(*desktopStatus);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("DesktopStatus") != m.end() && !m["DesktopStatus"].empty()) {
      desktopStatus = make_shared<string>(boost::any_cast<string>(m["DesktopStatus"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DescribeDesktopsRequest() = default;
};
class DescribeDesktopsResponseBodyDesktopsDisks : public Darabonba::Model {
public:
  shared_ptr<string> diskId{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};

  DescribeDesktopsResponseBodyDesktopsDisks() {}

  explicit DescribeDesktopsResponseBodyDesktopsDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
  }


  virtual ~DescribeDesktopsResponseBodyDesktopsDisks() = default;
};
class DescribeDesktopsResponseBodyDesktops : public Darabonba::Model {
public:
  shared_ptr<string> connectionStatus{};
  shared_ptr<long> cpu{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> dataDiskCategory{};
  shared_ptr<string> dataDiskSize{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> desktopStatus{};
  shared_ptr<string> desktopType{};
  shared_ptr<string> directoryId{};
  shared_ptr<vector<DescribeDesktopsResponseBodyDesktopsDisks>> disks{};
  shared_ptr<vector<string>> endUserIds{};
  shared_ptr<string> imageId{};
  shared_ptr<string> lastStartTime{};
  shared_ptr<long> memory{};
  shared_ptr<string> networkInterfaceId{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<long> systemDiskSize{};

  DescribeDesktopsResponseBodyDesktops() {}

  explicit DescribeDesktopsResponseBodyDesktops(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionStatus) {
      res["ConnectionStatus"] = boost::any(*connectionStatus);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (dataDiskCategory) {
      res["DataDiskCategory"] = boost::any(*dataDiskCategory);
    }
    if (dataDiskSize) {
      res["DataDiskSize"] = boost::any(*dataDiskSize);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (desktopStatus) {
      res["DesktopStatus"] = boost::any(*desktopStatus);
    }
    if (desktopType) {
      res["DesktopType"] = boost::any(*desktopType);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (disks) {
      vector<boost::any> temp1;
      for(auto item1:*disks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disks"] = boost::any(temp1);
    }
    if (endUserIds) {
      res["EndUserIds"] = boost::any(*endUserIds);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (lastStartTime) {
      res["LastStartTime"] = boost::any(*lastStartTime);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (systemDiskCategory) {
      res["SystemDiskCategory"] = boost::any(*systemDiskCategory);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionStatus") != m.end() && !m["ConnectionStatus"].empty()) {
      connectionStatus = make_shared<string>(boost::any_cast<string>(m["ConnectionStatus"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DataDiskCategory") != m.end() && !m["DataDiskCategory"].empty()) {
      dataDiskCategory = make_shared<string>(boost::any_cast<string>(m["DataDiskCategory"]));
    }
    if (m.find("DataDiskSize") != m.end() && !m["DataDiskSize"].empty()) {
      dataDiskSize = make_shared<string>(boost::any_cast<string>(m["DataDiskSize"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("DesktopStatus") != m.end() && !m["DesktopStatus"].empty()) {
      desktopStatus = make_shared<string>(boost::any_cast<string>(m["DesktopStatus"]));
    }
    if (m.find("DesktopType") != m.end() && !m["DesktopType"].empty()) {
      desktopType = make_shared<string>(boost::any_cast<string>(m["DesktopType"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
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
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("LastStartTime") != m.end() && !m["LastStartTime"].empty()) {
      lastStartTime = make_shared<string>(boost::any_cast<string>(m["LastStartTime"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("SystemDiskCategory") != m.end() && !m["SystemDiskCategory"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["SystemDiskCategory"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
  }


  virtual ~DescribeDesktopsResponseBodyDesktops() = default;
};
class DescribeDesktopsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDesktopsResponseBodyDesktops>> desktops{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  DescribeDesktopsResponseBody() {}

  explicit DescribeDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desktops) {
      vector<boost::any> temp1;
      for(auto item1:*desktops){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Desktops"] = boost::any(temp1);
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDesktopsResponseBody() = default;
};
class DescribeDesktopsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDesktopsResponseBody> body{};

  DescribeDesktopsResponse() {}

  explicit DescribeDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDesktopsResponse() = default;
};
class DescribeDirectoriesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> directoryId{};
  shared_ptr<string> directoryType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeDirectoriesRequest() {}

  explicit DescribeDirectoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("DirectoryType") != m.end() && !m["DirectoryType"].empty()) {
      directoryType = make_shared<string>(boost::any_cast<string>(m["DirectoryType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeDirectoriesRequest() = default;
};
class DescribeDirectoriesResponseBodyDirectoriesADConnectors : public Darabonba::Model {
public:
  shared_ptr<string> ADConnectorAddress{};
  shared_ptr<string> connectorStatus{};
  shared_ptr<string> vSwitchId{};

  DescribeDirectoriesResponseBodyDirectoriesADConnectors() {}

  explicit DescribeDirectoriesResponseBodyDirectoriesADConnectors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ADConnectorAddress) {
      res["ADConnectorAddress"] = boost::any(*ADConnectorAddress);
    }
    if (connectorStatus) {
      res["ConnectorStatus"] = boost::any(*connectorStatus);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ADConnectorAddress") != m.end() && !m["ADConnectorAddress"].empty()) {
      ADConnectorAddress = make_shared<string>(boost::any_cast<string>(m["ADConnectorAddress"]));
    }
    if (m.find("ConnectorStatus") != m.end() && !m["ConnectorStatus"].empty()) {
      connectorStatus = make_shared<string>(boost::any_cast<string>(m["ConnectorStatus"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~DescribeDirectoriesResponseBodyDirectoriesADConnectors() = default;
};
class DescribeDirectoriesResponseBodyDirectories : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDirectoriesResponseBodyDirectoriesADConnectors>> ADConnectors{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> customSecurityGroupId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> directoryType{};
  shared_ptr<vector<string>> dnsAddress{};
  shared_ptr<string> dnsUserName{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainPassword{};
  shared_ptr<string> domainUserName{};
  shared_ptr<bool> enableInternetAccess{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> trustPassword{};

  DescribeDirectoriesResponseBodyDirectories() {}

  explicit DescribeDirectoriesResponseBodyDirectories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ADConnectors) {
      vector<boost::any> temp1;
      for(auto item1:*ADConnectors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ADConnectors"] = boost::any(temp1);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (customSecurityGroupId) {
      res["CustomSecurityGroupId"] = boost::any(*customSecurityGroupId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (directoryType) {
      res["DirectoryType"] = boost::any(*directoryType);
    }
    if (dnsAddress) {
      res["DnsAddress"] = boost::any(*dnsAddress);
    }
    if (dnsUserName) {
      res["DnsUserName"] = boost::any(*dnsUserName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainPassword) {
      res["DomainPassword"] = boost::any(*domainPassword);
    }
    if (domainUserName) {
      res["DomainUserName"] = boost::any(*domainUserName);
    }
    if (enableInternetAccess) {
      res["EnableInternetAccess"] = boost::any(*enableInternetAccess);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (trustPassword) {
      res["TrustPassword"] = boost::any(*trustPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("CustomSecurityGroupId") != m.end() && !m["CustomSecurityGroupId"].empty()) {
      customSecurityGroupId = make_shared<string>(boost::any_cast<string>(m["CustomSecurityGroupId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DirectoryType") != m.end() && !m["DirectoryType"].empty()) {
      directoryType = make_shared<string>(boost::any_cast<string>(m["DirectoryType"]));
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
    if (m.find("DnsUserName") != m.end() && !m["DnsUserName"].empty()) {
      dnsUserName = make_shared<string>(boost::any_cast<string>(m["DnsUserName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainPassword") != m.end() && !m["DomainPassword"].empty()) {
      domainPassword = make_shared<string>(boost::any_cast<string>(m["DomainPassword"]));
    }
    if (m.find("DomainUserName") != m.end() && !m["DomainUserName"].empty()) {
      domainUserName = make_shared<string>(boost::any_cast<string>(m["DomainUserName"]));
    }
    if (m.find("EnableInternetAccess") != m.end() && !m["EnableInternetAccess"].empty()) {
      enableInternetAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableInternetAccess"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TrustPassword") != m.end() && !m["TrustPassword"].empty()) {
      trustPassword = make_shared<string>(boost::any_cast<string>(m["TrustPassword"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDirectoriesResponseBody> body{};

  DescribeDirectoriesResponse() {}

  explicit DescribeDirectoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDirectoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDirectoriesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDirectoriesResponse() = default;
};
class GetConnectionTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> password{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> userName{};

  GetConnectionTicketRequest() {}

  explicit GetConnectionTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GetConnectionTicketRequest() = default;
};
class GetConnectionTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> ticket{};

  GetConnectionTicketResponseBody() {}

  explicit GetConnectionTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (ticket) {
      res["Ticket"] = boost::any(*ticket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("Ticket") != m.end() && !m["Ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["Ticket"]));
    }
  }


  virtual ~GetConnectionTicketResponseBody() = default;
};
class GetConnectionTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConnectionTicketResponseBody> body{};

  GetConnectionTicketResponse() {}

  explicit GetConnectionTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConnectionTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConnectionTicketResponseBody>(model1);
      }
    }
  }


  virtual ~GetConnectionTicketResponse() = default;
};
class RebootDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<vector<string>> desktopId{};
  shared_ptr<string> regionId{};

  RebootDesktopsRequest() {}

  explicit RebootDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<RebootDesktopsResponseBody> body{};

  RebootDesktopsResponse() {}

  explicit RebootDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RebootDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RebootDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~RebootDesktopsResponse() = default;
};
class StartDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<vector<string>> desktopId{};
  shared_ptr<string> regionId{};

  StartDesktopsRequest() {}

  explicit StartDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<StartDesktopsResponseBody> body{};

  StartDesktopsResponse() {}

  explicit StartDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<vector<string>> desktopId{};
  shared_ptr<string> regionId{};

  StopDesktopsRequest() {}

  explicit StopDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<StopDesktopsResponseBody> body{};

  StopDesktopsResponse() {}

  explicit StopDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~StopDesktopsResponse() = default;
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
  DescribeDesktopsResponse describeDesktopsWithOptions(shared_ptr<DescribeDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDesktopsResponse describeDesktops(shared_ptr<DescribeDesktopsRequest> request);
  DescribeDirectoriesResponse describeDirectoriesWithOptions(shared_ptr<DescribeDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDirectoriesResponse describeDirectories(shared_ptr<DescribeDirectoriesRequest> request);
  GetConnectionTicketResponse getConnectionTicketWithOptions(shared_ptr<GetConnectionTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConnectionTicketResponse getConnectionTicket(shared_ptr<GetConnectionTicketRequest> request);
  RebootDesktopsResponse rebootDesktopsWithOptions(shared_ptr<RebootDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebootDesktopsResponse rebootDesktops(shared_ptr<RebootDesktopsRequest> request);
  StartDesktopsResponse startDesktopsWithOptions(shared_ptr<StartDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDesktopsResponse startDesktops(shared_ptr<StartDesktopsRequest> request);
  StopDesktopsResponse stopDesktopsWithOptions(shared_ptr<StopDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDesktopsResponse stopDesktops(shared_ptr<StopDesktopsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ecd20201001

#endif
