// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DDI20200617_H_
#define ALIBABACLOUD_DDI20200617_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ddi20200617 {
class CreateClusterV2RequestBootstrapAction : public Darabonba::Model {
public:
  shared_ptr<string> arg{};
  shared_ptr<string> name{};
  shared_ptr<string> path{};

  CreateClusterV2RequestBootstrapAction() {}

  explicit CreateClusterV2RequestBootstrapAction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arg) {
      res["Arg"] = boost::any(*arg);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arg") != m.end() && !m["Arg"].empty()) {
      arg = make_shared<string>(boost::any_cast<string>(m["Arg"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~CreateClusterV2RequestBootstrapAction() = default;
};
class CreateClusterV2RequestConfig : public Darabonba::Model {
public:
  shared_ptr<string> configKey{};
  shared_ptr<string> configValue{};
  shared_ptr<string> encrypt{};
  shared_ptr<string> fileName{};
  shared_ptr<string> replace{};
  shared_ptr<string> serviceName{};

  CreateClusterV2RequestConfig() {}

  explicit CreateClusterV2RequestConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configKey) {
      res["ConfigKey"] = boost::any(*configKey);
    }
    if (configValue) {
      res["ConfigValue"] = boost::any(*configValue);
    }
    if (encrypt) {
      res["Encrypt"] = boost::any(*encrypt);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (replace) {
      res["Replace"] = boost::any(*replace);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigKey") != m.end() && !m["ConfigKey"].empty()) {
      configKey = make_shared<string>(boost::any_cast<string>(m["ConfigKey"]));
    }
    if (m.find("ConfigValue") != m.end() && !m["ConfigValue"].empty()) {
      configValue = make_shared<string>(boost::any_cast<string>(m["ConfigValue"]));
    }
    if (m.find("Encrypt") != m.end() && !m["Encrypt"].empty()) {
      encrypt = make_shared<string>(boost::any_cast<string>(m["Encrypt"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Replace") != m.end() && !m["Replace"].empty()) {
      replace = make_shared<string>(boost::any_cast<string>(m["Replace"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~CreateClusterV2RequestConfig() = default;
};
class CreateClusterV2RequestHostComponentInfo : public Darabonba::Model {
public:
  shared_ptr<vector<string>> componentNameList{};
  shared_ptr<string> hostName{};
  shared_ptr<string> serviceName{};

  CreateClusterV2RequestHostComponentInfo() {}

  explicit CreateClusterV2RequestHostComponentInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentNameList) {
      res["ComponentNameList"] = boost::any(*componentNameList);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentNameList") != m.end() && !m["ComponentNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ComponentNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ComponentNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      componentNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~CreateClusterV2RequestHostComponentInfo() = default;
};
class CreateClusterV2RequestHostGroup : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> comment{};
  shared_ptr<string> createType{};
  shared_ptr<long> diskCapacity{};
  shared_ptr<long> diskCount{};
  shared_ptr<string> diskType{};
  shared_ptr<string> gpuDriver{};
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> hostGroupName{};
  shared_ptr<string> hostGroupType{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> nodeCount{};
  shared_ptr<long> period{};
  shared_ptr<long> sysDiskCapacity{};
  shared_ptr<string> sysDiskType{};
  shared_ptr<string> vSwitchId{};

  CreateClusterV2RequestHostGroup() {}

  explicit CreateClusterV2RequestHostGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (createType) {
      res["CreateType"] = boost::any(*createType);
    }
    if (diskCapacity) {
      res["DiskCapacity"] = boost::any(*diskCapacity);
    }
    if (diskCount) {
      res["DiskCount"] = boost::any(*diskCount);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (gpuDriver) {
      res["GpuDriver"] = boost::any(*gpuDriver);
    }
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (hostGroupName) {
      res["HostGroupName"] = boost::any(*hostGroupName);
    }
    if (hostGroupType) {
      res["HostGroupType"] = boost::any(*hostGroupType);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (sysDiskCapacity) {
      res["SysDiskCapacity"] = boost::any(*sysDiskCapacity);
    }
    if (sysDiskType) {
      res["SysDiskType"] = boost::any(*sysDiskType);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("CreateType") != m.end() && !m["CreateType"].empty()) {
      createType = make_shared<string>(boost::any_cast<string>(m["CreateType"]));
    }
    if (m.find("DiskCapacity") != m.end() && !m["DiskCapacity"].empty()) {
      diskCapacity = make_shared<long>(boost::any_cast<long>(m["DiskCapacity"]));
    }
    if (m.find("DiskCount") != m.end() && !m["DiskCount"].empty()) {
      diskCount = make_shared<long>(boost::any_cast<long>(m["DiskCount"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("GpuDriver") != m.end() && !m["GpuDriver"].empty()) {
      gpuDriver = make_shared<string>(boost::any_cast<string>(m["GpuDriver"]));
    }
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("HostGroupName") != m.end() && !m["HostGroupName"].empty()) {
      hostGroupName = make_shared<string>(boost::any_cast<string>(m["HostGroupName"]));
    }
    if (m.find("HostGroupType") != m.end() && !m["HostGroupType"].empty()) {
      hostGroupType = make_shared<string>(boost::any_cast<string>(m["HostGroupType"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("SysDiskCapacity") != m.end() && !m["SysDiskCapacity"].empty()) {
      sysDiskCapacity = make_shared<long>(boost::any_cast<long>(m["SysDiskCapacity"]));
    }
    if (m.find("SysDiskType") != m.end() && !m["SysDiskType"].empty()) {
      sysDiskType = make_shared<string>(boost::any_cast<string>(m["SysDiskType"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateClusterV2RequestHostGroup() = default;
};
class CreateClusterV2RequestPromotionInfo : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<string> promotionOptionCode{};
  shared_ptr<string> promotionOptionNo{};

  CreateClusterV2RequestPromotionInfo() {}

  explicit CreateClusterV2RequestPromotionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (promotionOptionCode) {
      res["PromotionOptionCode"] = boost::any(*promotionOptionCode);
    }
    if (promotionOptionNo) {
      res["PromotionOptionNo"] = boost::any(*promotionOptionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("PromotionOptionCode") != m.end() && !m["PromotionOptionCode"].empty()) {
      promotionOptionCode = make_shared<string>(boost::any_cast<string>(m["PromotionOptionCode"]));
    }
    if (m.find("PromotionOptionNo") != m.end() && !m["PromotionOptionNo"].empty()) {
      promotionOptionNo = make_shared<string>(boost::any_cast<string>(m["PromotionOptionNo"]));
    }
  }


  virtual ~CreateClusterV2RequestPromotionInfo() = default;
};
class CreateClusterV2RequestServiceInfo : public Darabonba::Model {
public:
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceVersion{};

  CreateClusterV2RequestServiceInfo() {}

  explicit CreateClusterV2RequestServiceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~CreateClusterV2RequestServiceInfo() = default;
};
class CreateClusterV2RequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateClusterV2RequestTag() {}

  explicit CreateClusterV2RequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateClusterV2RequestTag() = default;
};
class CreateClusterV2RequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  CreateClusterV2RequestUserInfo() {}

  explicit CreateClusterV2RequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateClusterV2RequestUserInfo() = default;
};
class CreateClusterV2Request : public Darabonba::Model {
public:
  shared_ptr<string> authorizeContent{};
  shared_ptr<bool> auto_{};
  shared_ptr<bool> autoPayOrder{};
  shared_ptr<vector<CreateClusterV2RequestBootstrapAction>> bootstrapAction{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clickHouseConf{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterType{};
  shared_ptr<vector<CreateClusterV2RequestConfig>> config{};
  shared_ptr<string> configurations{};
  shared_ptr<string> depositType{};
  shared_ptr<string> emrVer{};
  shared_ptr<bool> enableEas{};
  shared_ptr<bool> enableHighAvailability{};
  shared_ptr<bool> enableSsh{};
  shared_ptr<string> extraAttributes{};
  shared_ptr<vector<CreateClusterV2RequestHostComponentInfo>> hostComponentInfo{};
  shared_ptr<vector<CreateClusterV2RequestHostGroup>> hostGroup{};
  shared_ptr<bool> initCustomHiveMetaDB{};
  shared_ptr<string> instanceGeneration{};
  shared_ptr<bool> isOpenPublicIp{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> logPath{};
  shared_ptr<string> machineType{};
  shared_ptr<string> masterPwd{};
  shared_ptr<string> metaStoreConf{};
  shared_ptr<string> metaStoreType{};
  shared_ptr<string> name{};
  shared_ptr<string> netType{};
  shared_ptr<long> period{};
  shared_ptr<vector<CreateClusterV2RequestPromotionInfo>> promotionInfo{};
  shared_ptr<string> regionId{};
  shared_ptr<string> relatedClusterId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> securityGroupName{};
  shared_ptr<vector<CreateClusterV2RequestServiceInfo>> serviceInfo{};
  shared_ptr<vector<CreateClusterV2RequestTag>> tag{};
  shared_ptr<bool> useCustomHiveMetaDB{};
  shared_ptr<bool> useLocalMetaDb{};
  shared_ptr<string> userDefinedEmrEcsRole{};
  shared_ptr<vector<CreateClusterV2RequestUserInfo>> userInfo{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> whiteListType{};
  shared_ptr<string> zoneId{};

  CreateClusterV2Request() {}

  explicit CreateClusterV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizeContent) {
      res["AuthorizeContent"] = boost::any(*authorizeContent);
    }
    if (auto_) {
      res["Auto"] = boost::any(*auto_);
    }
    if (autoPayOrder) {
      res["AutoPayOrder"] = boost::any(*autoPayOrder);
    }
    if (bootstrapAction) {
      vector<boost::any> temp1;
      for(auto item1:*bootstrapAction){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BootstrapAction"] = boost::any(temp1);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clickHouseConf) {
      res["ClickHouseConf"] = boost::any(*clickHouseConf);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (config) {
      vector<boost::any> temp1;
      for(auto item1:*config){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Config"] = boost::any(temp1);
    }
    if (configurations) {
      res["Configurations"] = boost::any(*configurations);
    }
    if (depositType) {
      res["DepositType"] = boost::any(*depositType);
    }
    if (emrVer) {
      res["EmrVer"] = boost::any(*emrVer);
    }
    if (enableEas) {
      res["EnableEas"] = boost::any(*enableEas);
    }
    if (enableHighAvailability) {
      res["EnableHighAvailability"] = boost::any(*enableHighAvailability);
    }
    if (enableSsh) {
      res["EnableSsh"] = boost::any(*enableSsh);
    }
    if (extraAttributes) {
      res["ExtraAttributes"] = boost::any(*extraAttributes);
    }
    if (hostComponentInfo) {
      vector<boost::any> temp1;
      for(auto item1:*hostComponentInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostComponentInfo"] = boost::any(temp1);
    }
    if (hostGroup) {
      vector<boost::any> temp1;
      for(auto item1:*hostGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostGroup"] = boost::any(temp1);
    }
    if (initCustomHiveMetaDB) {
      res["InitCustomHiveMetaDB"] = boost::any(*initCustomHiveMetaDB);
    }
    if (instanceGeneration) {
      res["InstanceGeneration"] = boost::any(*instanceGeneration);
    }
    if (isOpenPublicIp) {
      res["IsOpenPublicIp"] = boost::any(*isOpenPublicIp);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (logPath) {
      res["LogPath"] = boost::any(*logPath);
    }
    if (machineType) {
      res["MachineType"] = boost::any(*machineType);
    }
    if (masterPwd) {
      res["MasterPwd"] = boost::any(*masterPwd);
    }
    if (metaStoreConf) {
      res["MetaStoreConf"] = boost::any(*metaStoreConf);
    }
    if (metaStoreType) {
      res["MetaStoreType"] = boost::any(*metaStoreType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (promotionInfo) {
      vector<boost::any> temp1;
      for(auto item1:*promotionInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PromotionInfo"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (relatedClusterId) {
      res["RelatedClusterId"] = boost::any(*relatedClusterId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (securityGroupName) {
      res["SecurityGroupName"] = boost::any(*securityGroupName);
    }
    if (serviceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfo"] = boost::any(temp1);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (useCustomHiveMetaDB) {
      res["UseCustomHiveMetaDB"] = boost::any(*useCustomHiveMetaDB);
    }
    if (useLocalMetaDb) {
      res["UseLocalMetaDb"] = boost::any(*useLocalMetaDb);
    }
    if (userDefinedEmrEcsRole) {
      res["UserDefinedEmrEcsRole"] = boost::any(*userDefinedEmrEcsRole);
    }
    if (userInfo) {
      vector<boost::any> temp1;
      for(auto item1:*userInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserInfo"] = boost::any(temp1);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (whiteListType) {
      res["WhiteListType"] = boost::any(*whiteListType);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizeContent") != m.end() && !m["AuthorizeContent"].empty()) {
      authorizeContent = make_shared<string>(boost::any_cast<string>(m["AuthorizeContent"]));
    }
    if (m.find("Auto") != m.end() && !m["Auto"].empty()) {
      auto_ = make_shared<bool>(boost::any_cast<bool>(m["Auto"]));
    }
    if (m.find("AutoPayOrder") != m.end() && !m["AutoPayOrder"].empty()) {
      autoPayOrder = make_shared<bool>(boost::any_cast<bool>(m["AutoPayOrder"]));
    }
    if (m.find("BootstrapAction") != m.end() && !m["BootstrapAction"].empty()) {
      if (typeid(vector<boost::any>) == m["BootstrapAction"].type()) {
        vector<CreateClusterV2RequestBootstrapAction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BootstrapAction"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterV2RequestBootstrapAction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bootstrapAction = make_shared<vector<CreateClusterV2RequestBootstrapAction>>(expect1);
      }
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClickHouseConf") != m.end() && !m["ClickHouseConf"].empty()) {
      clickHouseConf = make_shared<string>(boost::any_cast<string>(m["ClickHouseConf"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      if (typeid(vector<boost::any>) == m["Config"].type()) {
        vector<CreateClusterV2RequestConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Config"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterV2RequestConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        config = make_shared<vector<CreateClusterV2RequestConfig>>(expect1);
      }
    }
    if (m.find("Configurations") != m.end() && !m["Configurations"].empty()) {
      configurations = make_shared<string>(boost::any_cast<string>(m["Configurations"]));
    }
    if (m.find("DepositType") != m.end() && !m["DepositType"].empty()) {
      depositType = make_shared<string>(boost::any_cast<string>(m["DepositType"]));
    }
    if (m.find("EmrVer") != m.end() && !m["EmrVer"].empty()) {
      emrVer = make_shared<string>(boost::any_cast<string>(m["EmrVer"]));
    }
    if (m.find("EnableEas") != m.end() && !m["EnableEas"].empty()) {
      enableEas = make_shared<bool>(boost::any_cast<bool>(m["EnableEas"]));
    }
    if (m.find("EnableHighAvailability") != m.end() && !m["EnableHighAvailability"].empty()) {
      enableHighAvailability = make_shared<bool>(boost::any_cast<bool>(m["EnableHighAvailability"]));
    }
    if (m.find("EnableSsh") != m.end() && !m["EnableSsh"].empty()) {
      enableSsh = make_shared<bool>(boost::any_cast<bool>(m["EnableSsh"]));
    }
    if (m.find("ExtraAttributes") != m.end() && !m["ExtraAttributes"].empty()) {
      extraAttributes = make_shared<string>(boost::any_cast<string>(m["ExtraAttributes"]));
    }
    if (m.find("HostComponentInfo") != m.end() && !m["HostComponentInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["HostComponentInfo"].type()) {
        vector<CreateClusterV2RequestHostComponentInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostComponentInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterV2RequestHostComponentInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostComponentInfo = make_shared<vector<CreateClusterV2RequestHostComponentInfo>>(expect1);
      }
    }
    if (m.find("HostGroup") != m.end() && !m["HostGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["HostGroup"].type()) {
        vector<CreateClusterV2RequestHostGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterV2RequestHostGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostGroup = make_shared<vector<CreateClusterV2RequestHostGroup>>(expect1);
      }
    }
    if (m.find("InitCustomHiveMetaDB") != m.end() && !m["InitCustomHiveMetaDB"].empty()) {
      initCustomHiveMetaDB = make_shared<bool>(boost::any_cast<bool>(m["InitCustomHiveMetaDB"]));
    }
    if (m.find("InstanceGeneration") != m.end() && !m["InstanceGeneration"].empty()) {
      instanceGeneration = make_shared<string>(boost::any_cast<string>(m["InstanceGeneration"]));
    }
    if (m.find("IsOpenPublicIp") != m.end() && !m["IsOpenPublicIp"].empty()) {
      isOpenPublicIp = make_shared<bool>(boost::any_cast<bool>(m["IsOpenPublicIp"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("LogPath") != m.end() && !m["LogPath"].empty()) {
      logPath = make_shared<string>(boost::any_cast<string>(m["LogPath"]));
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      machineType = make_shared<string>(boost::any_cast<string>(m["MachineType"]));
    }
    if (m.find("MasterPwd") != m.end() && !m["MasterPwd"].empty()) {
      masterPwd = make_shared<string>(boost::any_cast<string>(m["MasterPwd"]));
    }
    if (m.find("MetaStoreConf") != m.end() && !m["MetaStoreConf"].empty()) {
      metaStoreConf = make_shared<string>(boost::any_cast<string>(m["MetaStoreConf"]));
    }
    if (m.find("MetaStoreType") != m.end() && !m["MetaStoreType"].empty()) {
      metaStoreType = make_shared<string>(boost::any_cast<string>(m["MetaStoreType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PromotionInfo") != m.end() && !m["PromotionInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["PromotionInfo"].type()) {
        vector<CreateClusterV2RequestPromotionInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PromotionInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterV2RequestPromotionInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promotionInfo = make_shared<vector<CreateClusterV2RequestPromotionInfo>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RelatedClusterId") != m.end() && !m["RelatedClusterId"].empty()) {
      relatedClusterId = make_shared<string>(boost::any_cast<string>(m["RelatedClusterId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SecurityGroupName") != m.end() && !m["SecurityGroupName"].empty()) {
      securityGroupName = make_shared<string>(boost::any_cast<string>(m["SecurityGroupName"]));
    }
    if (m.find("ServiceInfo") != m.end() && !m["ServiceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfo"].type()) {
        vector<CreateClusterV2RequestServiceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterV2RequestServiceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfo = make_shared<vector<CreateClusterV2RequestServiceInfo>>(expect1);
      }
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateClusterV2RequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterV2RequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateClusterV2RequestTag>>(expect1);
      }
    }
    if (m.find("UseCustomHiveMetaDB") != m.end() && !m["UseCustomHiveMetaDB"].empty()) {
      useCustomHiveMetaDB = make_shared<bool>(boost::any_cast<bool>(m["UseCustomHiveMetaDB"]));
    }
    if (m.find("UseLocalMetaDb") != m.end() && !m["UseLocalMetaDb"].empty()) {
      useLocalMetaDb = make_shared<bool>(boost::any_cast<bool>(m["UseLocalMetaDb"]));
    }
    if (m.find("UserDefinedEmrEcsRole") != m.end() && !m["UserDefinedEmrEcsRole"].empty()) {
      userDefinedEmrEcsRole = make_shared<string>(boost::any_cast<string>(m["UserDefinedEmrEcsRole"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["UserInfo"].type()) {
        vector<CreateClusterV2RequestUserInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterV2RequestUserInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userInfo = make_shared<vector<CreateClusterV2RequestUserInfo>>(expect1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("WhiteListType") != m.end() && !m["WhiteListType"].empty()) {
      whiteListType = make_shared<string>(boost::any_cast<string>(m["WhiteListType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateClusterV2Request() = default;
};
class CreateClusterV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> coreOrderId{};
  shared_ptr<string> emrOrderId{};
  shared_ptr<string> masterOrderId{};
  shared_ptr<string> requestId{};

  CreateClusterV2ResponseBody() {}

  explicit CreateClusterV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (coreOrderId) {
      res["CoreOrderId"] = boost::any(*coreOrderId);
    }
    if (emrOrderId) {
      res["EmrOrderId"] = boost::any(*emrOrderId);
    }
    if (masterOrderId) {
      res["MasterOrderId"] = boost::any(*masterOrderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CoreOrderId") != m.end() && !m["CoreOrderId"].empty()) {
      coreOrderId = make_shared<string>(boost::any_cast<string>(m["CoreOrderId"]));
    }
    if (m.find("EmrOrderId") != m.end() && !m["EmrOrderId"].empty()) {
      emrOrderId = make_shared<string>(boost::any_cast<string>(m["EmrOrderId"]));
    }
    if (m.find("MasterOrderId") != m.end() && !m["MasterOrderId"].empty()) {
      masterOrderId = make_shared<string>(boost::any_cast<string>(m["MasterOrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateClusterV2ResponseBody() = default;
};
class CreateClusterV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateClusterV2ResponseBody> body{};

  CreateClusterV2Response() {}

  explicit CreateClusterV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateClusterV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClusterV2ResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClusterV2Response() = default;
};
class CreateFlowJobRequestResourceList : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> path{};

  CreateFlowJobRequestResourceList() {}

  explicit CreateFlowJobRequestResourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~CreateFlowJobRequestResourceList() = default;
};
class CreateFlowJobRequest : public Darabonba::Model {
public:
  shared_ptr<bool> adhoc{};
  shared_ptr<string> alertConf{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> customVariables{};
  shared_ptr<string> description{};
  shared_ptr<string> envConf{};
  shared_ptr<string> failAct{};
  shared_ptr<string> mode{};
  shared_ptr<string> monitorConf{};
  shared_ptr<string> name{};
  shared_ptr<string> paramConf{};
  shared_ptr<string> params{};
  shared_ptr<string> parentCategory{};
  shared_ptr<string> projectId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<CreateFlowJobRequestResourceList>> resourceList{};
  shared_ptr<string> retryPolicy{};
  shared_ptr<string> runConf{};
  shared_ptr<string> type{};

  CreateFlowJobRequest() {}

  explicit CreateFlowJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adhoc) {
      res["Adhoc"] = boost::any(*adhoc);
    }
    if (alertConf) {
      res["AlertConf"] = boost::any(*alertConf);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (customVariables) {
      res["CustomVariables"] = boost::any(*customVariables);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (envConf) {
      res["EnvConf"] = boost::any(*envConf);
    }
    if (failAct) {
      res["FailAct"] = boost::any(*failAct);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (monitorConf) {
      res["MonitorConf"] = boost::any(*monitorConf);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (paramConf) {
      res["ParamConf"] = boost::any(*paramConf);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (parentCategory) {
      res["ParentCategory"] = boost::any(*parentCategory);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceList) {
      vector<boost::any> temp1;
      for(auto item1:*resourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceList"] = boost::any(temp1);
    }
    if (retryPolicy) {
      res["RetryPolicy"] = boost::any(*retryPolicy);
    }
    if (runConf) {
      res["RunConf"] = boost::any(*runConf);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Adhoc") != m.end() && !m["Adhoc"].empty()) {
      adhoc = make_shared<bool>(boost::any_cast<bool>(m["Adhoc"]));
    }
    if (m.find("AlertConf") != m.end() && !m["AlertConf"].empty()) {
      alertConf = make_shared<string>(boost::any_cast<string>(m["AlertConf"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CustomVariables") != m.end() && !m["CustomVariables"].empty()) {
      customVariables = make_shared<string>(boost::any_cast<string>(m["CustomVariables"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnvConf") != m.end() && !m["EnvConf"].empty()) {
      envConf = make_shared<string>(boost::any_cast<string>(m["EnvConf"]));
    }
    if (m.find("FailAct") != m.end() && !m["FailAct"].empty()) {
      failAct = make_shared<string>(boost::any_cast<string>(m["FailAct"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("MonitorConf") != m.end() && !m["MonitorConf"].empty()) {
      monitorConf = make_shared<string>(boost::any_cast<string>(m["MonitorConf"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParamConf") != m.end() && !m["ParamConf"].empty()) {
      paramConf = make_shared<string>(boost::any_cast<string>(m["ParamConf"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("ParentCategory") != m.end() && !m["ParentCategory"].empty()) {
      parentCategory = make_shared<string>(boost::any_cast<string>(m["ParentCategory"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceList") != m.end() && !m["ResourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceList"].type()) {
        vector<CreateFlowJobRequestResourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateFlowJobRequestResourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceList = make_shared<vector<CreateFlowJobRequestResourceList>>(expect1);
      }
    }
    if (m.find("RetryPolicy") != m.end() && !m["RetryPolicy"].empty()) {
      retryPolicy = make_shared<string>(boost::any_cast<string>(m["RetryPolicy"]));
    }
    if (m.find("RunConf") != m.end() && !m["RunConf"].empty()) {
      runConf = make_shared<string>(boost::any_cast<string>(m["RunConf"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateFlowJobRequest() = default;
};
class CreateFlowJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateFlowJobResponseBody() {}

  explicit CreateFlowJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFlowJobResponseBody() = default;
};
class CreateFlowJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateFlowJobResponseBody> body{};

  CreateFlowJobResponse() {}

  explicit CreateFlowJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFlowJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFlowJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFlowJobResponse() = default;
};
class CreateFlowProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> productType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  CreateFlowProjectRequest() {}

  explicit CreateFlowProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~CreateFlowProjectRequest() = default;
};
class CreateFlowProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateFlowProjectResponseBody() {}

  explicit CreateFlowProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFlowProjectResponseBody() = default;
};
class CreateFlowProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateFlowProjectResponseBody> body{};

  CreateFlowProjectResponse() {}

  explicit CreateFlowProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFlowProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFlowProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFlowProjectResponse() = default;
};
class DescribeClusterV2Request : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  DescribeClusterV2Request() {}

  explicit DescribeClusterV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeClusterV2Request() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoAccessInfoZKLinksZKLink : public Darabonba::Model {
public:
  shared_ptr<string> link{};
  shared_ptr<string> port{};

  DescribeClusterV2ResponseBodyClusterInfoAccessInfoZKLinksZKLink() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoAccessInfoZKLinksZKLink(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (link) {
      res["Link"] = boost::any(*link);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Link") != m.end() && !m["Link"].empty()) {
      link = make_shared<string>(boost::any_cast<string>(m["Link"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoAccessInfoZKLinksZKLink() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoAccessInfoZKLinks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterV2ResponseBodyClusterInfoAccessInfoZKLinksZKLink>> ZKLink{};

  DescribeClusterV2ResponseBodyClusterInfoAccessInfoZKLinks() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoAccessInfoZKLinks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ZKLink) {
      vector<boost::any> temp1;
      for(auto item1:*ZKLink){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZKLink"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZKLink") != m.end() && !m["ZKLink"].empty()) {
      if (typeid(vector<boost::any>) == m["ZKLink"].type()) {
        vector<DescribeClusterV2ResponseBodyClusterInfoAccessInfoZKLinksZKLink> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZKLink"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterV2ResponseBodyClusterInfoAccessInfoZKLinksZKLink model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ZKLink = make_shared<vector<DescribeClusterV2ResponseBodyClusterInfoAccessInfoZKLinksZKLink>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoAccessInfoZKLinks() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoAccessInfo : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterV2ResponseBodyClusterInfoAccessInfoZKLinks> ZKLinks{};

  DescribeClusterV2ResponseBodyClusterInfoAccessInfo() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoAccessInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ZKLinks) {
      res["ZKLinks"] = ZKLinks ? boost::any(ZKLinks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZKLinks") != m.end() && !m["ZKLinks"].empty()) {
      if (typeid(map<string, boost::any>) == m["ZKLinks"].type()) {
        DescribeClusterV2ResponseBodyClusterInfoAccessInfoZKLinks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ZKLinks"]));
        ZKLinks = make_shared<DescribeClusterV2ResponseBodyClusterInfoAccessInfoZKLinks>(model1);
      }
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoAccessInfo() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoBootstrapActionListBootstrapAction : public Darabonba::Model {
public:
  shared_ptr<string> arg{};
  shared_ptr<string> name{};
  shared_ptr<string> path{};

  DescribeClusterV2ResponseBodyClusterInfoBootstrapActionListBootstrapAction() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoBootstrapActionListBootstrapAction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arg) {
      res["Arg"] = boost::any(*arg);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arg") != m.end() && !m["Arg"].empty()) {
      arg = make_shared<string>(boost::any_cast<string>(m["Arg"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoBootstrapActionListBootstrapAction() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoBootstrapActionList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterV2ResponseBodyClusterInfoBootstrapActionListBootstrapAction>> bootstrapAction{};

  DescribeClusterV2ResponseBodyClusterInfoBootstrapActionList() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoBootstrapActionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bootstrapAction) {
      vector<boost::any> temp1;
      for(auto item1:*bootstrapAction){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BootstrapAction"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BootstrapAction") != m.end() && !m["BootstrapAction"].empty()) {
      if (typeid(vector<boost::any>) == m["BootstrapAction"].type()) {
        vector<DescribeClusterV2ResponseBodyClusterInfoBootstrapActionListBootstrapAction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BootstrapAction"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterV2ResponseBodyClusterInfoBootstrapActionListBootstrapAction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bootstrapAction = make_shared<vector<DescribeClusterV2ResponseBodyClusterInfoBootstrapActionListBootstrapAction>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoBootstrapActionList() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoFailReason : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};

  DescribeClusterV2ResponseBodyClusterInfoFailReason() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoFailReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoFailReason() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoGatewayClusterInfoListGatewayClusterInfo : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> status{};

  DescribeClusterV2ResponseBodyClusterInfoGatewayClusterInfoListGatewayClusterInfo() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoGatewayClusterInfoListGatewayClusterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoGatewayClusterInfoListGatewayClusterInfo() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoGatewayClusterInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterV2ResponseBodyClusterInfoGatewayClusterInfoListGatewayClusterInfo>> gatewayClusterInfo{};

  DescribeClusterV2ResponseBodyClusterInfoGatewayClusterInfoList() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoGatewayClusterInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayClusterInfo) {
      vector<boost::any> temp1;
      for(auto item1:*gatewayClusterInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GatewayClusterInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayClusterInfo") != m.end() && !m["GatewayClusterInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["GatewayClusterInfo"].type()) {
        vector<DescribeClusterV2ResponseBodyClusterInfoGatewayClusterInfoListGatewayClusterInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GatewayClusterInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterV2ResponseBodyClusterInfoGatewayClusterInfoListGatewayClusterInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        gatewayClusterInfo = make_shared<vector<DescribeClusterV2ResponseBodyClusterInfoGatewayClusterInfoListGatewayClusterInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoGatewayClusterInfoList() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDaemonInfosDaemonInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDaemonInfosDaemonInfo() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDaemonInfosDaemonInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDaemonInfosDaemonInfo() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDaemonInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDaemonInfosDaemonInfo>> daemonInfo{};

  DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDaemonInfos() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDaemonInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (daemonInfo) {
      vector<boost::any> temp1;
      for(auto item1:*daemonInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DaemonInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DaemonInfo") != m.end() && !m["DaemonInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DaemonInfo"].type()) {
        vector<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDaemonInfosDaemonInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DaemonInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDaemonInfosDaemonInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        daemonInfo = make_shared<vector<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDaemonInfosDaemonInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDaemonInfos() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDiskInfosDiskInfo : public Darabonba::Model {
public:
  shared_ptr<string> device{};
  shared_ptr<string> diskId{};
  shared_ptr<string> diskName{};
  shared_ptr<long> size{};
  shared_ptr<string> type{};

  DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDiskInfosDiskInfo() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDiskInfosDiskInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (diskName) {
      res["DiskName"] = boost::any(*diskName);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("DiskName") != m.end() && !m["DiskName"].empty()) {
      diskName = make_shared<string>(boost::any_cast<string>(m["DiskName"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDiskInfosDiskInfo() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDiskInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDiskInfosDiskInfo>> diskInfo{};

  DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDiskInfos() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDiskInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskInfo) {
      vector<boost::any> temp1;
      for(auto item1:*diskInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DiskInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskInfo") != m.end() && !m["DiskInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DiskInfo"].type()) {
        vector<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDiskInfosDiskInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DiskInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDiskInfosDiskInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        diskInfo = make_shared<vector<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDiskInfosDiskInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDiskInfos() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNode : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDaemonInfos> daemonInfos{};
  shared_ptr<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDiskInfos> diskInfos{};
  shared_ptr<string> emrExpiredTime{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> innerIp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> pubIp{};
  shared_ptr<string> status{};
  shared_ptr<bool> supportIpV6{};
  shared_ptr<string> zoneId{};

  DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNode() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (daemonInfos) {
      res["DaemonInfos"] = daemonInfos ? boost::any(daemonInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (diskInfos) {
      res["DiskInfos"] = diskInfos ? boost::any(diskInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (emrExpiredTime) {
      res["EmrExpiredTime"] = boost::any(*emrExpiredTime);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (innerIp) {
      res["InnerIp"] = boost::any(*innerIp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pubIp) {
      res["PubIp"] = boost::any(*pubIp);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supportIpV6) {
      res["SupportIpV6"] = boost::any(*supportIpV6);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DaemonInfos") != m.end() && !m["DaemonInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["DaemonInfos"].type()) {
        DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDaemonInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DaemonInfos"]));
        daemonInfos = make_shared<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDaemonInfos>(model1);
      }
    }
    if (m.find("DiskInfos") != m.end() && !m["DiskInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["DiskInfos"].type()) {
        DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDiskInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DiskInfos"]));
        diskInfos = make_shared<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNodeDiskInfos>(model1);
      }
    }
    if (m.find("EmrExpiredTime") != m.end() && !m["EmrExpiredTime"].empty()) {
      emrExpiredTime = make_shared<string>(boost::any_cast<string>(m["EmrExpiredTime"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("InnerIp") != m.end() && !m["InnerIp"].empty()) {
      innerIp = make_shared<string>(boost::any_cast<string>(m["InnerIp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PubIp") != m.end() && !m["PubIp"].empty()) {
      pubIp = make_shared<string>(boost::any_cast<string>(m["PubIp"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupportIpV6") != m.end() && !m["SupportIpV6"].empty()) {
      supportIpV6 = make_shared<bool>(boost::any_cast<bool>(m["SupportIpV6"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNode() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNode>> node{};

  DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodes() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (node) {
      vector<boost::any> temp1;
      for(auto item1:*node){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Node"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      if (typeid(vector<boost::any>) == m["Node"].type()) {
        vector<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Node"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        node = make_shared<vector<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodesNode>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodes() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroup : public Darabonba::Model {
public:
  shared_ptr<string> bandWidth{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> cpuCore{};
  shared_ptr<long> diskCapacity{};
  shared_ptr<long> diskCount{};
  shared_ptr<string> diskType{};
  shared_ptr<string> hostGroupChangeStatus{};
  shared_ptr<string> hostGroupChangeType{};
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> hostGroupName{};
  shared_ptr<string> hostGroupSubType{};
  shared_ptr<string> hostGroupType{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> lockType{};
  shared_ptr<long> memoryCapacity{};
  shared_ptr<long> nodeCount{};
  shared_ptr<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodes> nodes{};
  shared_ptr<string> period{};

  DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroup() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandWidth) {
      res["BandWidth"] = boost::any(*bandWidth);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (cpuCore) {
      res["CpuCore"] = boost::any(*cpuCore);
    }
    if (diskCapacity) {
      res["DiskCapacity"] = boost::any(*diskCapacity);
    }
    if (diskCount) {
      res["DiskCount"] = boost::any(*diskCount);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (hostGroupChangeStatus) {
      res["HostGroupChangeStatus"] = boost::any(*hostGroupChangeStatus);
    }
    if (hostGroupChangeType) {
      res["HostGroupChangeType"] = boost::any(*hostGroupChangeType);
    }
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (hostGroupName) {
      res["HostGroupName"] = boost::any(*hostGroupName);
    }
    if (hostGroupSubType) {
      res["HostGroupSubType"] = boost::any(*hostGroupSubType);
    }
    if (hostGroupType) {
      res["HostGroupType"] = boost::any(*hostGroupType);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (lockType) {
      res["LockType"] = boost::any(*lockType);
    }
    if (memoryCapacity) {
      res["MemoryCapacity"] = boost::any(*memoryCapacity);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (nodes) {
      res["Nodes"] = nodes ? boost::any(nodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandWidth") != m.end() && !m["BandWidth"].empty()) {
      bandWidth = make_shared<string>(boost::any_cast<string>(m["BandWidth"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CpuCore") != m.end() && !m["CpuCore"].empty()) {
      cpuCore = make_shared<long>(boost::any_cast<long>(m["CpuCore"]));
    }
    if (m.find("DiskCapacity") != m.end() && !m["DiskCapacity"].empty()) {
      diskCapacity = make_shared<long>(boost::any_cast<long>(m["DiskCapacity"]));
    }
    if (m.find("DiskCount") != m.end() && !m["DiskCount"].empty()) {
      diskCount = make_shared<long>(boost::any_cast<long>(m["DiskCount"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("HostGroupChangeStatus") != m.end() && !m["HostGroupChangeStatus"].empty()) {
      hostGroupChangeStatus = make_shared<string>(boost::any_cast<string>(m["HostGroupChangeStatus"]));
    }
    if (m.find("HostGroupChangeType") != m.end() && !m["HostGroupChangeType"].empty()) {
      hostGroupChangeType = make_shared<string>(boost::any_cast<string>(m["HostGroupChangeType"]));
    }
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("HostGroupName") != m.end() && !m["HostGroupName"].empty()) {
      hostGroupName = make_shared<string>(boost::any_cast<string>(m["HostGroupName"]));
    }
    if (m.find("HostGroupSubType") != m.end() && !m["HostGroupSubType"].empty()) {
      hostGroupSubType = make_shared<string>(boost::any_cast<string>(m["HostGroupSubType"]));
    }
    if (m.find("HostGroupType") != m.end() && !m["HostGroupType"].empty()) {
      hostGroupType = make_shared<string>(boost::any_cast<string>(m["HostGroupType"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("LockType") != m.end() && !m["LockType"].empty()) {
      lockType = make_shared<string>(boost::any_cast<string>(m["LockType"]));
    }
    if (m.find("MemoryCapacity") != m.end() && !m["MemoryCapacity"].empty()) {
      memoryCapacity = make_shared<long>(boost::any_cast<long>(m["MemoryCapacity"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Nodes"].type()) {
        DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Nodes"]));
        nodes = make_shared<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroupNodes>(model1);
      }
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroup() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoHostGroupList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroup>> hostGroup{};

  DescribeClusterV2ResponseBodyClusterInfoHostGroupList() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoHostGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostGroup) {
      vector<boost::any> temp1;
      for(auto item1:*hostGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostGroup") != m.end() && !m["HostGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["HostGroup"].type()) {
        vector<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostGroup = make_shared<vector<DescribeClusterV2ResponseBodyClusterInfoHostGroupListHostGroup>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoHostGroupList() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoHostPoolInfo : public Darabonba::Model {
public:
  shared_ptr<string> hpBizId{};
  shared_ptr<string> hpName{};

  DescribeClusterV2ResponseBodyClusterInfoHostPoolInfo() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoHostPoolInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hpBizId) {
      res["HpBizId"] = boost::any(*hpBizId);
    }
    if (hpName) {
      res["HpName"] = boost::any(*hpName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HpBizId") != m.end() && !m["HpBizId"].empty()) {
      hpBizId = make_shared<string>(boost::any_cast<string>(m["HpBizId"]));
    }
    if (m.find("HpName") != m.end() && !m["HpName"].empty()) {
      hpName = make_shared<string>(boost::any_cast<string>(m["HpName"]));
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoHostPoolInfo() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoRelateClusterInfo : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> status{};

  DescribeClusterV2ResponseBodyClusterInfoRelateClusterInfo() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoRelateClusterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoRelateClusterInfo() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoSoftwareInfoSoftwaresSoftware : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};
  shared_ptr<bool> onlyDisplay{};
  shared_ptr<long> startTpe{};
  shared_ptr<string> version{};

  DescribeClusterV2ResponseBodyClusterInfoSoftwareInfoSoftwaresSoftware() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoSoftwareInfoSoftwaresSoftware(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (onlyDisplay) {
      res["OnlyDisplay"] = boost::any(*onlyDisplay);
    }
    if (startTpe) {
      res["StartTpe"] = boost::any(*startTpe);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OnlyDisplay") != m.end() && !m["OnlyDisplay"].empty()) {
      onlyDisplay = make_shared<bool>(boost::any_cast<bool>(m["OnlyDisplay"]));
    }
    if (m.find("StartTpe") != m.end() && !m["StartTpe"].empty()) {
      startTpe = make_shared<long>(boost::any_cast<long>(m["StartTpe"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoSoftwareInfoSoftwaresSoftware() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoSoftwareInfoSoftwares : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterV2ResponseBodyClusterInfoSoftwareInfoSoftwaresSoftware>> software{};

  DescribeClusterV2ResponseBodyClusterInfoSoftwareInfoSoftwares() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoSoftwareInfoSoftwares(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (software) {
      vector<boost::any> temp1;
      for(auto item1:*software){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Software"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Software") != m.end() && !m["Software"].empty()) {
      if (typeid(vector<boost::any>) == m["Software"].type()) {
        vector<DescribeClusterV2ResponseBodyClusterInfoSoftwareInfoSoftwaresSoftware> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Software"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterV2ResponseBodyClusterInfoSoftwareInfoSoftwaresSoftware model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        software = make_shared<vector<DescribeClusterV2ResponseBodyClusterInfoSoftwareInfoSoftwaresSoftware>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoSoftwareInfoSoftwares() = default;
};
class DescribeClusterV2ResponseBodyClusterInfoSoftwareInfo : public Darabonba::Model {
public:
  shared_ptr<string> clusterType{};
  shared_ptr<string> emrVer{};
  shared_ptr<DescribeClusterV2ResponseBodyClusterInfoSoftwareInfoSoftwares> softwares{};

  DescribeClusterV2ResponseBodyClusterInfoSoftwareInfo() {}

  explicit DescribeClusterV2ResponseBodyClusterInfoSoftwareInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (emrVer) {
      res["EmrVer"] = boost::any(*emrVer);
    }
    if (softwares) {
      res["Softwares"] = softwares ? boost::any(softwares->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("EmrVer") != m.end() && !m["EmrVer"].empty()) {
      emrVer = make_shared<string>(boost::any_cast<string>(m["EmrVer"]));
    }
    if (m.find("Softwares") != m.end() && !m["Softwares"].empty()) {
      if (typeid(map<string, boost::any>) == m["Softwares"].type()) {
        DescribeClusterV2ResponseBodyClusterInfoSoftwareInfoSoftwares model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Softwares"]));
        softwares = make_shared<DescribeClusterV2ResponseBodyClusterInfoSoftwareInfoSoftwares>(model1);
      }
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfoSoftwareInfo() = default;
};
class DescribeClusterV2ResponseBodyClusterInfo : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterV2ResponseBodyClusterInfoAccessInfo> accessInfo{};
  shared_ptr<bool> autoScalingAllowed{};
  shared_ptr<bool> autoScalingByLoadAllowed{};
  shared_ptr<bool> autoScalingEnable{};
  shared_ptr<bool> autoScalingSpotWithLimitAllowed{};
  shared_ptr<string> autoScalingVersion{};
  shared_ptr<bool> autoScalingWithGraceAllowed{};
  shared_ptr<DescribeClusterV2ResponseBodyClusterInfoBootstrapActionList> bootstrapActionList{};
  shared_ptr<bool> bootstrapFailed{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> configurations{};
  shared_ptr<long> coreNodeInService{};
  shared_ptr<long> coreNodeTotal{};
  shared_ptr<string> createResource{};
  shared_ptr<string> createType{};
  shared_ptr<string> depositType{};
  shared_ptr<bool> easEnable{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> extraInfo{};
  shared_ptr<DescribeClusterV2ResponseBodyClusterInfoFailReason> failReason{};
  shared_ptr<string> gatewayClusterIds{};
  shared_ptr<DescribeClusterV2ResponseBodyClusterInfoGatewayClusterInfoList> gatewayClusterInfoList{};
  shared_ptr<bool> highAvailabilityEnable{};
  shared_ptr<DescribeClusterV2ResponseBodyClusterInfoHostGroupList> hostGroupList{};
  shared_ptr<DescribeClusterV2ResponseBodyClusterInfoHostPoolInfo> hostPoolInfo{};
  shared_ptr<string> id{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceGeneration{};
  shared_ptr<bool> ioOptimized{};
  shared_ptr<string> k8sClusterId{};
  shared_ptr<bool> localMetaDb{};
  shared_ptr<bool> logEnable{};
  shared_ptr<string> logPath{};
  shared_ptr<string> machineType{};
  shared_ptr<long> masterNodeInService{};
  shared_ptr<long> masterNodeTotal{};
  shared_ptr<string> metaStoreType{};
  shared_ptr<string> name{};
  shared_ptr<string> netType{};
  shared_ptr<long> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> relateClusterId{};
  shared_ptr<DescribeClusterV2ResponseBodyClusterInfoRelateClusterInfo> relateClusterInfo{};
  shared_ptr<bool> resizeDiskEnable{};
  shared_ptr<long> runningTime{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> securityGroupName{};
  shared_ptr<bool> showSoftwareInterface{};
  shared_ptr<DescribeClusterV2ResponseBodyClusterInfoSoftwareInfo> softwareInfo{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> stopTime{};
  shared_ptr<long> taskNodeInService{};
  shared_ptr<long> taskNodeTotal{};
  shared_ptr<string> userDefinedEmrEcsRole{};
  shared_ptr<string> userId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeClusterV2ResponseBodyClusterInfo() {}

  explicit DescribeClusterV2ResponseBodyClusterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessInfo) {
      res["AccessInfo"] = accessInfo ? boost::any(accessInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (autoScalingAllowed) {
      res["AutoScalingAllowed"] = boost::any(*autoScalingAllowed);
    }
    if (autoScalingByLoadAllowed) {
      res["AutoScalingByLoadAllowed"] = boost::any(*autoScalingByLoadAllowed);
    }
    if (autoScalingEnable) {
      res["AutoScalingEnable"] = boost::any(*autoScalingEnable);
    }
    if (autoScalingSpotWithLimitAllowed) {
      res["AutoScalingSpotWithLimitAllowed"] = boost::any(*autoScalingSpotWithLimitAllowed);
    }
    if (autoScalingVersion) {
      res["AutoScalingVersion"] = boost::any(*autoScalingVersion);
    }
    if (autoScalingWithGraceAllowed) {
      res["AutoScalingWithGraceAllowed"] = boost::any(*autoScalingWithGraceAllowed);
    }
    if (bootstrapActionList) {
      res["BootstrapActionList"] = bootstrapActionList ? boost::any(bootstrapActionList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bootstrapFailed) {
      res["BootstrapFailed"] = boost::any(*bootstrapFailed);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (configurations) {
      res["Configurations"] = boost::any(*configurations);
    }
    if (coreNodeInService) {
      res["CoreNodeInService"] = boost::any(*coreNodeInService);
    }
    if (coreNodeTotal) {
      res["CoreNodeTotal"] = boost::any(*coreNodeTotal);
    }
    if (createResource) {
      res["CreateResource"] = boost::any(*createResource);
    }
    if (createType) {
      res["CreateType"] = boost::any(*createType);
    }
    if (depositType) {
      res["DepositType"] = boost::any(*depositType);
    }
    if (easEnable) {
      res["EasEnable"] = boost::any(*easEnable);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (failReason) {
      res["FailReason"] = failReason ? boost::any(failReason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gatewayClusterIds) {
      res["GatewayClusterIds"] = boost::any(*gatewayClusterIds);
    }
    if (gatewayClusterInfoList) {
      res["GatewayClusterInfoList"] = gatewayClusterInfoList ? boost::any(gatewayClusterInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (highAvailabilityEnable) {
      res["HighAvailabilityEnable"] = boost::any(*highAvailabilityEnable);
    }
    if (hostGroupList) {
      res["HostGroupList"] = hostGroupList ? boost::any(hostGroupList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hostPoolInfo) {
      res["HostPoolInfo"] = hostPoolInfo ? boost::any(hostPoolInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (instanceGeneration) {
      res["InstanceGeneration"] = boost::any(*instanceGeneration);
    }
    if (ioOptimized) {
      res["IoOptimized"] = boost::any(*ioOptimized);
    }
    if (k8sClusterId) {
      res["K8sClusterId"] = boost::any(*k8sClusterId);
    }
    if (localMetaDb) {
      res["LocalMetaDb"] = boost::any(*localMetaDb);
    }
    if (logEnable) {
      res["LogEnable"] = boost::any(*logEnable);
    }
    if (logPath) {
      res["LogPath"] = boost::any(*logPath);
    }
    if (machineType) {
      res["MachineType"] = boost::any(*machineType);
    }
    if (masterNodeInService) {
      res["MasterNodeInService"] = boost::any(*masterNodeInService);
    }
    if (masterNodeTotal) {
      res["MasterNodeTotal"] = boost::any(*masterNodeTotal);
    }
    if (metaStoreType) {
      res["MetaStoreType"] = boost::any(*metaStoreType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (relateClusterId) {
      res["RelateClusterId"] = boost::any(*relateClusterId);
    }
    if (relateClusterInfo) {
      res["RelateClusterInfo"] = relateClusterInfo ? boost::any(relateClusterInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resizeDiskEnable) {
      res["ResizeDiskEnable"] = boost::any(*resizeDiskEnable);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (securityGroupName) {
      res["SecurityGroupName"] = boost::any(*securityGroupName);
    }
    if (showSoftwareInterface) {
      res["ShowSoftwareInterface"] = boost::any(*showSoftwareInterface);
    }
    if (softwareInfo) {
      res["SoftwareInfo"] = softwareInfo ? boost::any(softwareInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stopTime) {
      res["StopTime"] = boost::any(*stopTime);
    }
    if (taskNodeInService) {
      res["TaskNodeInService"] = boost::any(*taskNodeInService);
    }
    if (taskNodeTotal) {
      res["TaskNodeTotal"] = boost::any(*taskNodeTotal);
    }
    if (userDefinedEmrEcsRole) {
      res["UserDefinedEmrEcsRole"] = boost::any(*userDefinedEmrEcsRole);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessInfo") != m.end() && !m["AccessInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessInfo"].type()) {
        DescribeClusterV2ResponseBodyClusterInfoAccessInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessInfo"]));
        accessInfo = make_shared<DescribeClusterV2ResponseBodyClusterInfoAccessInfo>(model1);
      }
    }
    if (m.find("AutoScalingAllowed") != m.end() && !m["AutoScalingAllowed"].empty()) {
      autoScalingAllowed = make_shared<bool>(boost::any_cast<bool>(m["AutoScalingAllowed"]));
    }
    if (m.find("AutoScalingByLoadAllowed") != m.end() && !m["AutoScalingByLoadAllowed"].empty()) {
      autoScalingByLoadAllowed = make_shared<bool>(boost::any_cast<bool>(m["AutoScalingByLoadAllowed"]));
    }
    if (m.find("AutoScalingEnable") != m.end() && !m["AutoScalingEnable"].empty()) {
      autoScalingEnable = make_shared<bool>(boost::any_cast<bool>(m["AutoScalingEnable"]));
    }
    if (m.find("AutoScalingSpotWithLimitAllowed") != m.end() && !m["AutoScalingSpotWithLimitAllowed"].empty()) {
      autoScalingSpotWithLimitAllowed = make_shared<bool>(boost::any_cast<bool>(m["AutoScalingSpotWithLimitAllowed"]));
    }
    if (m.find("AutoScalingVersion") != m.end() && !m["AutoScalingVersion"].empty()) {
      autoScalingVersion = make_shared<string>(boost::any_cast<string>(m["AutoScalingVersion"]));
    }
    if (m.find("AutoScalingWithGraceAllowed") != m.end() && !m["AutoScalingWithGraceAllowed"].empty()) {
      autoScalingWithGraceAllowed = make_shared<bool>(boost::any_cast<bool>(m["AutoScalingWithGraceAllowed"]));
    }
    if (m.find("BootstrapActionList") != m.end() && !m["BootstrapActionList"].empty()) {
      if (typeid(map<string, boost::any>) == m["BootstrapActionList"].type()) {
        DescribeClusterV2ResponseBodyClusterInfoBootstrapActionList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BootstrapActionList"]));
        bootstrapActionList = make_shared<DescribeClusterV2ResponseBodyClusterInfoBootstrapActionList>(model1);
      }
    }
    if (m.find("BootstrapFailed") != m.end() && !m["BootstrapFailed"].empty()) {
      bootstrapFailed = make_shared<bool>(boost::any_cast<bool>(m["BootstrapFailed"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Configurations") != m.end() && !m["Configurations"].empty()) {
      configurations = make_shared<string>(boost::any_cast<string>(m["Configurations"]));
    }
    if (m.find("CoreNodeInService") != m.end() && !m["CoreNodeInService"].empty()) {
      coreNodeInService = make_shared<long>(boost::any_cast<long>(m["CoreNodeInService"]));
    }
    if (m.find("CoreNodeTotal") != m.end() && !m["CoreNodeTotal"].empty()) {
      coreNodeTotal = make_shared<long>(boost::any_cast<long>(m["CoreNodeTotal"]));
    }
    if (m.find("CreateResource") != m.end() && !m["CreateResource"].empty()) {
      createResource = make_shared<string>(boost::any_cast<string>(m["CreateResource"]));
    }
    if (m.find("CreateType") != m.end() && !m["CreateType"].empty()) {
      createType = make_shared<string>(boost::any_cast<string>(m["CreateType"]));
    }
    if (m.find("DepositType") != m.end() && !m["DepositType"].empty()) {
      depositType = make_shared<string>(boost::any_cast<string>(m["DepositType"]));
    }
    if (m.find("EasEnable") != m.end() && !m["EasEnable"].empty()) {
      easEnable = make_shared<bool>(boost::any_cast<bool>(m["EasEnable"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("FailReason") != m.end() && !m["FailReason"].empty()) {
      if (typeid(map<string, boost::any>) == m["FailReason"].type()) {
        DescribeClusterV2ResponseBodyClusterInfoFailReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FailReason"]));
        failReason = make_shared<DescribeClusterV2ResponseBodyClusterInfoFailReason>(model1);
      }
    }
    if (m.find("GatewayClusterIds") != m.end() && !m["GatewayClusterIds"].empty()) {
      gatewayClusterIds = make_shared<string>(boost::any_cast<string>(m["GatewayClusterIds"]));
    }
    if (m.find("GatewayClusterInfoList") != m.end() && !m["GatewayClusterInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["GatewayClusterInfoList"].type()) {
        DescribeClusterV2ResponseBodyClusterInfoGatewayClusterInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GatewayClusterInfoList"]));
        gatewayClusterInfoList = make_shared<DescribeClusterV2ResponseBodyClusterInfoGatewayClusterInfoList>(model1);
      }
    }
    if (m.find("HighAvailabilityEnable") != m.end() && !m["HighAvailabilityEnable"].empty()) {
      highAvailabilityEnable = make_shared<bool>(boost::any_cast<bool>(m["HighAvailabilityEnable"]));
    }
    if (m.find("HostGroupList") != m.end() && !m["HostGroupList"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostGroupList"].type()) {
        DescribeClusterV2ResponseBodyClusterInfoHostGroupList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostGroupList"]));
        hostGroupList = make_shared<DescribeClusterV2ResponseBodyClusterInfoHostGroupList>(model1);
      }
    }
    if (m.find("HostPoolInfo") != m.end() && !m["HostPoolInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostPoolInfo"].type()) {
        DescribeClusterV2ResponseBodyClusterInfoHostPoolInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostPoolInfo"]));
        hostPoolInfo = make_shared<DescribeClusterV2ResponseBodyClusterInfoHostPoolInfo>(model1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("InstanceGeneration") != m.end() && !m["InstanceGeneration"].empty()) {
      instanceGeneration = make_shared<string>(boost::any_cast<string>(m["InstanceGeneration"]));
    }
    if (m.find("IoOptimized") != m.end() && !m["IoOptimized"].empty()) {
      ioOptimized = make_shared<bool>(boost::any_cast<bool>(m["IoOptimized"]));
    }
    if (m.find("K8sClusterId") != m.end() && !m["K8sClusterId"].empty()) {
      k8sClusterId = make_shared<string>(boost::any_cast<string>(m["K8sClusterId"]));
    }
    if (m.find("LocalMetaDb") != m.end() && !m["LocalMetaDb"].empty()) {
      localMetaDb = make_shared<bool>(boost::any_cast<bool>(m["LocalMetaDb"]));
    }
    if (m.find("LogEnable") != m.end() && !m["LogEnable"].empty()) {
      logEnable = make_shared<bool>(boost::any_cast<bool>(m["LogEnable"]));
    }
    if (m.find("LogPath") != m.end() && !m["LogPath"].empty()) {
      logPath = make_shared<string>(boost::any_cast<string>(m["LogPath"]));
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      machineType = make_shared<string>(boost::any_cast<string>(m["MachineType"]));
    }
    if (m.find("MasterNodeInService") != m.end() && !m["MasterNodeInService"].empty()) {
      masterNodeInService = make_shared<long>(boost::any_cast<long>(m["MasterNodeInService"]));
    }
    if (m.find("MasterNodeTotal") != m.end() && !m["MasterNodeTotal"].empty()) {
      masterNodeTotal = make_shared<long>(boost::any_cast<long>(m["MasterNodeTotal"]));
    }
    if (m.find("MetaStoreType") != m.end() && !m["MetaStoreType"].empty()) {
      metaStoreType = make_shared<string>(boost::any_cast<string>(m["MetaStoreType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RelateClusterId") != m.end() && !m["RelateClusterId"].empty()) {
      relateClusterId = make_shared<string>(boost::any_cast<string>(m["RelateClusterId"]));
    }
    if (m.find("RelateClusterInfo") != m.end() && !m["RelateClusterInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["RelateClusterInfo"].type()) {
        DescribeClusterV2ResponseBodyClusterInfoRelateClusterInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RelateClusterInfo"]));
        relateClusterInfo = make_shared<DescribeClusterV2ResponseBodyClusterInfoRelateClusterInfo>(model1);
      }
    }
    if (m.find("ResizeDiskEnable") != m.end() && !m["ResizeDiskEnable"].empty()) {
      resizeDiskEnable = make_shared<bool>(boost::any_cast<bool>(m["ResizeDiskEnable"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<long>(boost::any_cast<long>(m["RunningTime"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SecurityGroupName") != m.end() && !m["SecurityGroupName"].empty()) {
      securityGroupName = make_shared<string>(boost::any_cast<string>(m["SecurityGroupName"]));
    }
    if (m.find("ShowSoftwareInterface") != m.end() && !m["ShowSoftwareInterface"].empty()) {
      showSoftwareInterface = make_shared<bool>(boost::any_cast<bool>(m["ShowSoftwareInterface"]));
    }
    if (m.find("SoftwareInfo") != m.end() && !m["SoftwareInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SoftwareInfo"].type()) {
        DescribeClusterV2ResponseBodyClusterInfoSoftwareInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SoftwareInfo"]));
        softwareInfo = make_shared<DescribeClusterV2ResponseBodyClusterInfoSoftwareInfo>(model1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StopTime") != m.end() && !m["StopTime"].empty()) {
      stopTime = make_shared<long>(boost::any_cast<long>(m["StopTime"]));
    }
    if (m.find("TaskNodeInService") != m.end() && !m["TaskNodeInService"].empty()) {
      taskNodeInService = make_shared<long>(boost::any_cast<long>(m["TaskNodeInService"]));
    }
    if (m.find("TaskNodeTotal") != m.end() && !m["TaskNodeTotal"].empty()) {
      taskNodeTotal = make_shared<long>(boost::any_cast<long>(m["TaskNodeTotal"]));
    }
    if (m.find("UserDefinedEmrEcsRole") != m.end() && !m["UserDefinedEmrEcsRole"].empty()) {
      userDefinedEmrEcsRole = make_shared<string>(boost::any_cast<string>(m["UserDefinedEmrEcsRole"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeClusterV2ResponseBodyClusterInfo() = default;
};
class DescribeClusterV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterV2ResponseBodyClusterInfo> clusterInfo{};
  shared_ptr<string> requestId{};

  DescribeClusterV2ResponseBody() {}

  explicit DescribeClusterV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterInfo) {
      res["ClusterInfo"] = clusterInfo ? boost::any(clusterInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterInfo") != m.end() && !m["ClusterInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterInfo"].type()) {
        DescribeClusterV2ResponseBodyClusterInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterInfo"]));
        clusterInfo = make_shared<DescribeClusterV2ResponseBodyClusterInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeClusterV2ResponseBody() = default;
};
class DescribeClusterV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClusterV2ResponseBody> body{};

  DescribeClusterV2Response() {}

  explicit DescribeClusterV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterV2ResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterV2Response() = default;
};
class ListClustersRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListClustersRequestTag() {}

  explicit ListClustersRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListClustersRequestTag() = default;
};
class ListClustersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clusterTypeList{};
  shared_ptr<string> createType{};
  shared_ptr<bool> defaultStatus{};
  shared_ptr<string> depositType{};
  shared_ptr<vector<string>> expiredTagList{};
  shared_ptr<bool> isDesc{};
  shared_ptr<string> machineType{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<string>> statusList{};
  shared_ptr<vector<ListClustersRequestTag>> tag{};

  ListClustersRequest() {}

  explicit ListClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterTypeList) {
      res["ClusterTypeList"] = boost::any(*clusterTypeList);
    }
    if (createType) {
      res["CreateType"] = boost::any(*createType);
    }
    if (defaultStatus) {
      res["DefaultStatus"] = boost::any(*defaultStatus);
    }
    if (depositType) {
      res["DepositType"] = boost::any(*depositType);
    }
    if (expiredTagList) {
      res["ExpiredTagList"] = boost::any(*expiredTagList);
    }
    if (isDesc) {
      res["IsDesc"] = boost::any(*isDesc);
    }
    if (machineType) {
      res["MachineType"] = boost::any(*machineType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (statusList) {
      res["StatusList"] = boost::any(*statusList);
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
    if (m.find("ClusterTypeList") != m.end() && !m["ClusterTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClusterTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClusterTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusterTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateType") != m.end() && !m["CreateType"].empty()) {
      createType = make_shared<string>(boost::any_cast<string>(m["CreateType"]));
    }
    if (m.find("DefaultStatus") != m.end() && !m["DefaultStatus"].empty()) {
      defaultStatus = make_shared<bool>(boost::any_cast<bool>(m["DefaultStatus"]));
    }
    if (m.find("DepositType") != m.end() && !m["DepositType"].empty()) {
      depositType = make_shared<string>(boost::any_cast<string>(m["DepositType"]));
    }
    if (m.find("ExpiredTagList") != m.end() && !m["ExpiredTagList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExpiredTagList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExpiredTagList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      expiredTagList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IsDesc") != m.end() && !m["IsDesc"].empty()) {
      isDesc = make_shared<bool>(boost::any_cast<bool>(m["IsDesc"]));
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      machineType = make_shared<string>(boost::any_cast<string>(m["MachineType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StatusList") != m.end() && !m["StatusList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StatusList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StatusList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statusList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListClustersRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListClustersRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListClustersRequest() = default;
};
class ListClustersResponseBodyClustersClusterInfoFailReason : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};

  ListClustersResponseBodyClustersClusterInfoFailReason() {}

  explicit ListClustersResponseBodyClustersClusterInfoFailReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersClusterInfoFailReason() = default;
};
class ListClustersResponseBodyClustersClusterInfoOrderTaskInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentCount{};
  shared_ptr<string> orderIdList{};
  shared_ptr<long> targetCount{};

  ListClustersResponseBodyClustersClusterInfoOrderTaskInfo() {}

  explicit ListClustersResponseBodyClustersClusterInfoOrderTaskInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentCount) {
      res["CurrentCount"] = boost::any(*currentCount);
    }
    if (orderIdList) {
      res["OrderIdList"] = boost::any(*orderIdList);
    }
    if (targetCount) {
      res["TargetCount"] = boost::any(*targetCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentCount") != m.end() && !m["CurrentCount"].empty()) {
      currentCount = make_shared<long>(boost::any_cast<long>(m["CurrentCount"]));
    }
    if (m.find("OrderIdList") != m.end() && !m["OrderIdList"].empty()) {
      orderIdList = make_shared<string>(boost::any_cast<string>(m["OrderIdList"]));
    }
    if (m.find("TargetCount") != m.end() && !m["TargetCount"].empty()) {
      targetCount = make_shared<long>(boost::any_cast<long>(m["TargetCount"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersClusterInfoOrderTaskInfo() = default;
};
class ListClustersResponseBodyClustersClusterInfoTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListClustersResponseBodyClustersClusterInfoTagsTag() {}

  explicit ListClustersResponseBodyClustersClusterInfoTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersClusterInfoTagsTag() = default;
};
class ListClustersResponseBodyClustersClusterInfoTags : public Darabonba::Model {
public:
  shared_ptr<vector<ListClustersResponseBodyClustersClusterInfoTagsTag>> tag{};

  ListClustersResponseBodyClustersClusterInfoTags() {}

  explicit ListClustersResponseBodyClustersClusterInfoTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListClustersResponseBodyClustersClusterInfoTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyClustersClusterInfoTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListClustersResponseBodyClustersClusterInfoTagsTag>>(expect1);
      }
    }
  }


  virtual ~ListClustersResponseBodyClustersClusterInfoTags() = default;
};
class ListClustersResponseBodyClustersClusterInfo : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> createResource{};
  shared_ptr<long> createTime{};
  shared_ptr<string> depositType{};
  shared_ptr<long> expiredTime{};
  shared_ptr<ListClustersResponseBodyClustersClusterInfoFailReason> failReason{};
  shared_ptr<bool> hasUncompletedOrder{};
  shared_ptr<string> id{};
  shared_ptr<string> k8sClusterId{};
  shared_ptr<string> machineType{};
  shared_ptr<string> metaStoreType{};
  shared_ptr<string> name{};
  shared_ptr<string> orderList{};
  shared_ptr<ListClustersResponseBodyClustersClusterInfoOrderTaskInfo> orderTaskInfo{};
  shared_ptr<long> period{};
  shared_ptr<long> runningTime{};
  shared_ptr<string> status{};
  shared_ptr<ListClustersResponseBodyClustersClusterInfoTags> tags{};
  shared_ptr<string> type{};

  ListClustersResponseBodyClustersClusterInfo() {}

  explicit ListClustersResponseBodyClustersClusterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (createResource) {
      res["CreateResource"] = boost::any(*createResource);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (depositType) {
      res["DepositType"] = boost::any(*depositType);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (failReason) {
      res["FailReason"] = failReason ? boost::any(failReason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hasUncompletedOrder) {
      res["HasUncompletedOrder"] = boost::any(*hasUncompletedOrder);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (k8sClusterId) {
      res["K8sClusterId"] = boost::any(*k8sClusterId);
    }
    if (machineType) {
      res["MachineType"] = boost::any(*machineType);
    }
    if (metaStoreType) {
      res["MetaStoreType"] = boost::any(*metaStoreType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (orderList) {
      res["OrderList"] = boost::any(*orderList);
    }
    if (orderTaskInfo) {
      res["OrderTaskInfo"] = orderTaskInfo ? boost::any(orderTaskInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CreateResource") != m.end() && !m["CreateResource"].empty()) {
      createResource = make_shared<string>(boost::any_cast<string>(m["CreateResource"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DepositType") != m.end() && !m["DepositType"].empty()) {
      depositType = make_shared<string>(boost::any_cast<string>(m["DepositType"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("FailReason") != m.end() && !m["FailReason"].empty()) {
      if (typeid(map<string, boost::any>) == m["FailReason"].type()) {
        ListClustersResponseBodyClustersClusterInfoFailReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FailReason"]));
        failReason = make_shared<ListClustersResponseBodyClustersClusterInfoFailReason>(model1);
      }
    }
    if (m.find("HasUncompletedOrder") != m.end() && !m["HasUncompletedOrder"].empty()) {
      hasUncompletedOrder = make_shared<bool>(boost::any_cast<bool>(m["HasUncompletedOrder"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("K8sClusterId") != m.end() && !m["K8sClusterId"].empty()) {
      k8sClusterId = make_shared<string>(boost::any_cast<string>(m["K8sClusterId"]));
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      machineType = make_shared<string>(boost::any_cast<string>(m["MachineType"]));
    }
    if (m.find("MetaStoreType") != m.end() && !m["MetaStoreType"].empty()) {
      metaStoreType = make_shared<string>(boost::any_cast<string>(m["MetaStoreType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OrderList") != m.end() && !m["OrderList"].empty()) {
      orderList = make_shared<string>(boost::any_cast<string>(m["OrderList"]));
    }
    if (m.find("OrderTaskInfo") != m.end() && !m["OrderTaskInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrderTaskInfo"].type()) {
        ListClustersResponseBodyClustersClusterInfoOrderTaskInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrderTaskInfo"]));
        orderTaskInfo = make_shared<ListClustersResponseBodyClustersClusterInfoOrderTaskInfo>(model1);
      }
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<long>(boost::any_cast<long>(m["RunningTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        ListClustersResponseBodyClustersClusterInfoTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<ListClustersResponseBodyClustersClusterInfoTags>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersClusterInfo() = default;
};
class ListClustersResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<vector<ListClustersResponseBodyClustersClusterInfo>> clusterInfo{};

  ListClustersResponseBodyClusters() {}

  explicit ListClustersResponseBodyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterInfo) {
      vector<boost::any> temp1;
      for(auto item1:*clusterInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClusterInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterInfo") != m.end() && !m["ClusterInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ClusterInfo"].type()) {
        vector<ListClustersResponseBodyClustersClusterInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClusterInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyClustersClusterInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusterInfo = make_shared<vector<ListClustersResponseBodyClustersClusterInfo>>(expect1);
      }
    }
  }


  virtual ~ListClustersResponseBodyClusters() = default;
};
class ListClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListClustersResponseBodyClusters> clusters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListClustersResponseBody() {}

  explicit ListClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      res["Clusters"] = clusters ? boost::any(clusters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(map<string, boost::any>) == m["Clusters"].type()) {
        ListClustersResponseBodyClusters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Clusters"]));
        clusters = make_shared<ListClustersResponseBodyClusters>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~ListClustersResponseBody() = default;
};
class ListClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListClustersResponseBody> body{};

  ListClustersResponse() {}

  explicit ListClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListClustersResponse() = default;
};
class ListMainVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceOwnerId{};

  ListMainVersionsRequest() {}

  explicit ListMainVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListMainVersionsRequest() = default;
};
class ListMainVersionsResponseBodyMainVersionListClusterTypeInfoList : public Darabonba::Model {
public:
  shared_ptr<string> clusterType{};

  ListMainVersionsResponseBodyMainVersionListClusterTypeInfoList() {}

  explicit ListMainVersionsResponseBodyMainVersionListClusterTypeInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
  }


  virtual ~ListMainVersionsResponseBodyMainVersionListClusterTypeInfoList() = default;
};
class ListMainVersionsResponseBodyMainVersionList : public Darabonba::Model {
public:
  shared_ptr<vector<ListMainVersionsResponseBodyMainVersionListClusterTypeInfoList>> clusterTypeInfoList{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> mainVersionName{};
  shared_ptr<string> regionId{};

  ListMainVersionsResponseBodyMainVersionList() {}

  explicit ListMainVersionsResponseBodyMainVersionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterTypeInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*clusterTypeInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClusterTypeInfoList"] = boost::any(temp1);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (mainVersionName) {
      res["MainVersionName"] = boost::any(*mainVersionName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterTypeInfoList") != m.end() && !m["ClusterTypeInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["ClusterTypeInfoList"].type()) {
        vector<ListMainVersionsResponseBodyMainVersionListClusterTypeInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClusterTypeInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMainVersionsResponseBodyMainVersionListClusterTypeInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusterTypeInfoList = make_shared<vector<ListMainVersionsResponseBodyMainVersionListClusterTypeInfoList>>(expect1);
      }
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("MainVersionName") != m.end() && !m["MainVersionName"].empty()) {
      mainVersionName = make_shared<string>(boost::any_cast<string>(m["MainVersionName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListMainVersionsResponseBodyMainVersionList() = default;
};
class ListMainVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListMainVersionsResponseBodyMainVersionList>> mainVersionList{};
  shared_ptr<string> requestId{};

  ListMainVersionsResponseBody() {}

  explicit ListMainVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mainVersionList) {
      vector<boost::any> temp1;
      for(auto item1:*mainVersionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MainVersionList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MainVersionList") != m.end() && !m["MainVersionList"].empty()) {
      if (typeid(vector<boost::any>) == m["MainVersionList"].type()) {
        vector<ListMainVersionsResponseBodyMainVersionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MainVersionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMainVersionsResponseBodyMainVersionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mainVersionList = make_shared<vector<ListMainVersionsResponseBodyMainVersionList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListMainVersionsResponseBody() = default;
};
class ListMainVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListMainVersionsResponseBody> body{};

  ListMainVersionsResponse() {}

  explicit ListMainVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMainVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMainVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMainVersionsResponse() = default;
};
class ReleaseClusterRequest : public Darabonba::Model {
public:
  shared_ptr<bool> forceRelease{};
  shared_ptr<string> id{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  ReleaseClusterRequest() {}

  explicit ReleaseClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forceRelease) {
      res["ForceRelease"] = boost::any(*forceRelease);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForceRelease") != m.end() && !m["ForceRelease"].empty()) {
      forceRelease = make_shared<bool>(boost::any_cast<bool>(m["ForceRelease"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ReleaseClusterRequest() = default;
};
class ReleaseClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseClusterResponseBody() {}

  explicit ReleaseClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseClusterResponseBody() = default;
};
class ReleaseClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReleaseClusterResponseBody> body{};

  ReleaseClusterResponse() {}

  explicit ReleaseClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseClusterResponse() = default;
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
  CreateClusterV2Response createClusterV2WithOptions(shared_ptr<CreateClusterV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterV2Response createClusterV2(shared_ptr<CreateClusterV2Request> request);
  CreateFlowJobResponse createFlowJobWithOptions(shared_ptr<CreateFlowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFlowJobResponse createFlowJob(shared_ptr<CreateFlowJobRequest> request);
  CreateFlowProjectResponse createFlowProjectWithOptions(shared_ptr<CreateFlowProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFlowProjectResponse createFlowProject(shared_ptr<CreateFlowProjectRequest> request);
  DescribeClusterV2Response describeClusterV2WithOptions(shared_ptr<DescribeClusterV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterV2Response describeClusterV2(shared_ptr<DescribeClusterV2Request> request);
  ListClustersResponse listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClustersResponse listClusters(shared_ptr<ListClustersRequest> request);
  ListMainVersionsResponse listMainVersionsWithOptions(shared_ptr<ListMainVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMainVersionsResponse listMainVersions(shared_ptr<ListMainVersionsRequest> request);
  ReleaseClusterResponse releaseClusterWithOptions(shared_ptr<ReleaseClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseClusterResponse releaseCluster(shared_ptr<ReleaseClusterRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ddi20200617

#endif
