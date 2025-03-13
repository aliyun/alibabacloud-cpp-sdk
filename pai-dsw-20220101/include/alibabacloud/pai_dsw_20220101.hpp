// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PAI-DSW20220101_H_
#define ALIBABACLOUD_PAI-DSW20220101_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Pai-dsw20220101 {
class CredentialConfigConfigsRolesUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> id{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> type{};

  CredentialConfigConfigsRolesUserInfo() {}

  explicit CredentialConfigConfigsRolesUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CredentialConfigConfigsRolesUserInfo() = default;
};
class CredentialConfigConfigsRoles : public Darabonba::Model {
public:
  shared_ptr<string> assumeRoleFor{};
  shared_ptr<string> policy{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> roleType{};
  shared_ptr<CredentialConfigConfigsRolesUserInfo> userInfo{};

  CredentialConfigConfigsRoles() {}

  explicit CredentialConfigConfigsRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeRoleFor) {
      res["AssumeRoleFor"] = boost::any(*assumeRoleFor);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeRoleFor") != m.end() && !m["AssumeRoleFor"].empty()) {
      assumeRoleFor = make_shared<string>(boost::any_cast<string>(m["AssumeRoleFor"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        CredentialConfigConfigsRolesUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<CredentialConfigConfigsRolesUserInfo>(model1);
      }
    }
  }


  virtual ~CredentialConfigConfigsRoles() = default;
};
class CredentialConfigConfigs : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<CredentialConfigConfigsRoles>> roles{};
  shared_ptr<string> type{};

  CredentialConfigConfigs() {}

  explicit CredentialConfigConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (roles) {
      vector<boost::any> temp1;
      for(auto item1:*roles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Roles"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<CredentialConfigConfigsRoles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Roles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CredentialConfigConfigsRoles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roles = make_shared<vector<CredentialConfigConfigsRoles>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CredentialConfigConfigs() = default;
};
class CredentialConfig : public Darabonba::Model {
public:
  shared_ptr<string> aliyunEnvRoleKey{};
  shared_ptr<vector<CredentialConfigConfigs>> configs{};
  shared_ptr<bool> enable{};

  CredentialConfig() {}

  explicit CredentialConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunEnvRoleKey) {
      res["AliyunEnvRoleKey"] = boost::any(*aliyunEnvRoleKey);
    }
    if (configs) {
      vector<boost::any> temp1;
      for(auto item1:*configs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Configs"] = boost::any(temp1);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunEnvRoleKey") != m.end() && !m["AliyunEnvRoleKey"].empty()) {
      aliyunEnvRoleKey = make_shared<string>(boost::any_cast<string>(m["AliyunEnvRoleKey"]));
    }
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      if (typeid(vector<boost::any>) == m["Configs"].type()) {
        vector<CredentialConfigConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CredentialConfigConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<CredentialConfigConfigs>>(expect1);
      }
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
  }


  virtual ~CredentialConfig() = default;
};
class DemoCategory : public Darabonba::Model {
public:
  shared_ptr<string> categoryCode{};
  shared_ptr<string> categoryName{};
  shared_ptr<long> order{};
  shared_ptr<vector<DemoCategory>> subCategories{};

  DemoCategory() {}

  explicit DemoCategory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryCode) {
      res["CategoryCode"] = boost::any(*categoryCode);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (subCategories) {
      vector<boost::any> temp1;
      for(auto item1:*subCategories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubCategories"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryCode") != m.end() && !m["CategoryCode"].empty()) {
      categoryCode = make_shared<string>(boost::any_cast<string>(m["CategoryCode"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("SubCategories") != m.end() && !m["SubCategories"].empty()) {
      if (typeid(vector<boost::any>) == m["SubCategories"].type()) {
        vector<DemoCategory> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubCategories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DemoCategory model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subCategories = make_shared<vector<DemoCategory>>(expect1);
      }
    }
  }


  virtual ~DemoCategory() = default;
};
class ForwardInfo : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accessType{};
  shared_ptr<string> containerName{};
  shared_ptr<string> eipAllocationId{};
  shared_ptr<bool> enable{};
  shared_ptr<string> externalPort{};
  shared_ptr<string> forwardPort{};
  shared_ptr<string> name{};
  shared_ptr<string> natGatewayId{};
  shared_ptr<string> SSHPublicKey{};

  ForwardInfo() {}

  explicit ForwardInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (containerName) {
      res["ContainerName"] = boost::any(*containerName);
    }
    if (eipAllocationId) {
      res["EipAllocationId"] = boost::any(*eipAllocationId);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (externalPort) {
      res["ExternalPort"] = boost::any(*externalPort);
    }
    if (forwardPort) {
      res["ForwardPort"] = boost::any(*forwardPort);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    if (SSHPublicKey) {
      res["SSHPublicKey"] = boost::any(*SSHPublicKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccessType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccessType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accessType = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ContainerName") != m.end() && !m["ContainerName"].empty()) {
      containerName = make_shared<string>(boost::any_cast<string>(m["ContainerName"]));
    }
    if (m.find("EipAllocationId") != m.end() && !m["EipAllocationId"].empty()) {
      eipAllocationId = make_shared<string>(boost::any_cast<string>(m["EipAllocationId"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("ExternalPort") != m.end() && !m["ExternalPort"].empty()) {
      externalPort = make_shared<string>(boost::any_cast<string>(m["ExternalPort"]));
    }
    if (m.find("ForwardPort") != m.end() && !m["ForwardPort"].empty()) {
      forwardPort = make_shared<string>(boost::any_cast<string>(m["ForwardPort"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
    if (m.find("SSHPublicKey") != m.end() && !m["SSHPublicKey"].empty()) {
      SSHPublicKey = make_shared<string>(boost::any_cast<string>(m["SSHPublicKey"]));
    }
  }


  virtual ~ForwardInfo() = default;
};
class ForwardInfoResponseConnectInfoInternet : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> port{};

  ForwardInfoResponseConnectInfoInternet() {}

  explicit ForwardInfoResponseConnectInfoInternet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
  }


  virtual ~ForwardInfoResponseConnectInfoInternet() = default;
};
class ForwardInfoResponseConnectInfoIntranet : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> port{};

  ForwardInfoResponseConnectInfoIntranet() {}

  explicit ForwardInfoResponseConnectInfoIntranet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
  }


  virtual ~ForwardInfoResponseConnectInfoIntranet() = default;
};
class ForwardInfoResponseConnectInfo : public Darabonba::Model {
public:
  shared_ptr<ForwardInfoResponseConnectInfoInternet> internet{};
  shared_ptr<ForwardInfoResponseConnectInfoIntranet> intranet{};
  shared_ptr<string> message{};
  shared_ptr<string> phase{};

  ForwardInfoResponseConnectInfo() {}

  explicit ForwardInfoResponseConnectInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (internet) {
      res["Internet"] = internet ? boost::any(internet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (intranet) {
      res["Intranet"] = intranet ? boost::any(intranet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (phase) {
      res["Phase"] = boost::any(*phase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Internet") != m.end() && !m["Internet"].empty()) {
      if (typeid(map<string, boost::any>) == m["Internet"].type()) {
        ForwardInfoResponseConnectInfoInternet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Internet"]));
        internet = make_shared<ForwardInfoResponseConnectInfoInternet>(model1);
      }
    }
    if (m.find("Intranet") != m.end() && !m["Intranet"].empty()) {
      if (typeid(map<string, boost::any>) == m["Intranet"].type()) {
        ForwardInfoResponseConnectInfoIntranet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Intranet"]));
        intranet = make_shared<ForwardInfoResponseConnectInfoIntranet>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Phase") != m.end() && !m["Phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["Phase"]));
    }
  }


  virtual ~ForwardInfoResponseConnectInfo() = default;
};
class ForwardInfoResponse : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accessType{};
  shared_ptr<ForwardInfoResponseConnectInfo> connectInfo{};
  shared_ptr<string> containerName{};
  shared_ptr<string> eipAllocationId{};
  shared_ptr<bool> enable{};
  shared_ptr<string> externalPort{};
  shared_ptr<string> forwardPort{};
  shared_ptr<string> name{};
  shared_ptr<string> natGatewayId{};
  shared_ptr<string> SSHPublicKey{};

  ForwardInfoResponse() {}

  explicit ForwardInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (connectInfo) {
      res["ConnectInfo"] = connectInfo ? boost::any(connectInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (containerName) {
      res["ContainerName"] = boost::any(*containerName);
    }
    if (eipAllocationId) {
      res["EipAllocationId"] = boost::any(*eipAllocationId);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (externalPort) {
      res["ExternalPort"] = boost::any(*externalPort);
    }
    if (forwardPort) {
      res["ForwardPort"] = boost::any(*forwardPort);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    if (SSHPublicKey) {
      res["SSHPublicKey"] = boost::any(*SSHPublicKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccessType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccessType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accessType = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ConnectInfo") != m.end() && !m["ConnectInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConnectInfo"].type()) {
        ForwardInfoResponseConnectInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConnectInfo"]));
        connectInfo = make_shared<ForwardInfoResponseConnectInfo>(model1);
      }
    }
    if (m.find("ContainerName") != m.end() && !m["ContainerName"].empty()) {
      containerName = make_shared<string>(boost::any_cast<string>(m["ContainerName"]));
    }
    if (m.find("EipAllocationId") != m.end() && !m["EipAllocationId"].empty()) {
      eipAllocationId = make_shared<string>(boost::any_cast<string>(m["EipAllocationId"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("ExternalPort") != m.end() && !m["ExternalPort"].empty()) {
      externalPort = make_shared<string>(boost::any_cast<string>(m["ExternalPort"]));
    }
    if (m.find("ForwardPort") != m.end() && !m["ForwardPort"].empty()) {
      forwardPort = make_shared<string>(boost::any_cast<string>(m["ForwardPort"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
    if (m.find("SSHPublicKey") != m.end() && !m["SSHPublicKey"].empty()) {
      SSHPublicKey = make_shared<string>(boost::any_cast<string>(m["SSHPublicKey"]));
    }
  }


  virtual ~ForwardInfoResponse() = default;
};
class CreateIdleInstanceCullerRequest : public Darabonba::Model {
public:
  shared_ptr<long> cpuPercentThreshold{};
  shared_ptr<long> gpuPercentThreshold{};
  shared_ptr<long> maxIdleTimeInMinutes{};

  CreateIdleInstanceCullerRequest() {}

  explicit CreateIdleInstanceCullerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuPercentThreshold) {
      res["CpuPercentThreshold"] = boost::any(*cpuPercentThreshold);
    }
    if (gpuPercentThreshold) {
      res["GpuPercentThreshold"] = boost::any(*gpuPercentThreshold);
    }
    if (maxIdleTimeInMinutes) {
      res["MaxIdleTimeInMinutes"] = boost::any(*maxIdleTimeInMinutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuPercentThreshold") != m.end() && !m["CpuPercentThreshold"].empty()) {
      cpuPercentThreshold = make_shared<long>(boost::any_cast<long>(m["CpuPercentThreshold"]));
    }
    if (m.find("GpuPercentThreshold") != m.end() && !m["GpuPercentThreshold"].empty()) {
      gpuPercentThreshold = make_shared<long>(boost::any_cast<long>(m["GpuPercentThreshold"]));
    }
    if (m.find("MaxIdleTimeInMinutes") != m.end() && !m["MaxIdleTimeInMinutes"].empty()) {
      maxIdleTimeInMinutes = make_shared<long>(boost::any_cast<long>(m["MaxIdleTimeInMinutes"]));
    }
  }


  virtual ~CreateIdleInstanceCullerRequest() = default;
};
class CreateIdleInstanceCullerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateIdleInstanceCullerResponseBody() {}

  explicit CreateIdleInstanceCullerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateIdleInstanceCullerResponseBody() = default;
};
class CreateIdleInstanceCullerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateIdleInstanceCullerResponseBody> body{};

  CreateIdleInstanceCullerResponse() {}

  explicit CreateIdleInstanceCullerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateIdleInstanceCullerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIdleInstanceCullerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIdleInstanceCullerResponse() = default;
};
class CreateInstanceRequestAffinityCPU : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};

  CreateInstanceRequestAffinityCPU() {}

  explicit CreateInstanceRequestAffinityCPU(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
  }


  virtual ~CreateInstanceRequestAffinityCPU() = default;
};
class CreateInstanceRequestAffinity : public Darabonba::Model {
public:
  shared_ptr<CreateInstanceRequestAffinityCPU> CPU{};

  CreateInstanceRequestAffinity() {}

  explicit CreateInstanceRequestAffinity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = CPU ? boost::any(CPU->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      if (typeid(map<string, boost::any>) == m["CPU"].type()) {
        CreateInstanceRequestAffinityCPU model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CPU"]));
        CPU = make_shared<CreateInstanceRequestAffinityCPU>(model1);
      }
    }
  }


  virtual ~CreateInstanceRequestAffinity() = default;
};
class CreateInstanceRequestCloudDisksStatus : public Darabonba::Model {
public:
  shared_ptr<long> available{};
  shared_ptr<long> capacity{};
  shared_ptr<long> usage{};

  CreateInstanceRequestCloudDisksStatus() {}

  explicit CreateInstanceRequestCloudDisksStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (available) {
      res["Available"] = boost::any(*available);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (usage) {
      res["Usage"] = boost::any(*usage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Available") != m.end() && !m["Available"].empty()) {
      available = make_shared<long>(boost::any_cast<long>(m["Available"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      usage = make_shared<long>(boost::any_cast<long>(m["Usage"]));
    }
  }


  virtual ~CreateInstanceRequestCloudDisksStatus() = default;
};
class CreateInstanceRequestCloudDisks : public Darabonba::Model {
public:
  shared_ptr<string> capacity{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> path{};
  shared_ptr<CreateInstanceRequestCloudDisksStatus> status{};
  shared_ptr<string> subType{};

  CreateInstanceRequestCloudDisks() {}

  explicit CreateInstanceRequestCloudDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (status) {
      res["Status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<string>(boost::any_cast<string>(m["Capacity"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      if (typeid(map<string, boost::any>) == m["Status"].type()) {
        CreateInstanceRequestCloudDisksStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Status"]));
        status = make_shared<CreateInstanceRequestCloudDisksStatus>(model1);
      }
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
  }


  virtual ~CreateInstanceRequestCloudDisks() = default;
};
class CreateInstanceRequestDatasets : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> mountAccess{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> optionType{};
  shared_ptr<string> options{};
  shared_ptr<string> uri{};

  CreateInstanceRequestDatasets() {}

  explicit CreateInstanceRequestDatasets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (mountAccess) {
      res["MountAccess"] = boost::any(*mountAccess);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (optionType) {
      res["OptionType"] = boost::any(*optionType);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("MountAccess") != m.end() && !m["MountAccess"].empty()) {
      mountAccess = make_shared<string>(boost::any_cast<string>(m["MountAccess"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("OptionType") != m.end() && !m["OptionType"].empty()) {
      optionType = make_shared<string>(boost::any_cast<string>(m["OptionType"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~CreateInstanceRequestDatasets() = default;
};
class CreateInstanceRequestLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateInstanceRequestLabels() {}

  explicit CreateInstanceRequestLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateInstanceRequestLabels() = default;
};
class CreateInstanceRequestRequestedResource : public Darabonba::Model {
public:
  shared_ptr<string> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> memory{};
  shared_ptr<string> sharedMemory{};

  CreateInstanceRequestRequestedResource() {}

  explicit CreateInstanceRequestRequestedResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (sharedMemory) {
      res["SharedMemory"] = boost::any(*sharedMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("SharedMemory") != m.end() && !m["SharedMemory"].empty()) {
      sharedMemory = make_shared<string>(boost::any_cast<string>(m["SharedMemory"]));
    }
  }


  virtual ~CreateInstanceRequestRequestedResource() = default;
};
class CreateInstanceRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateInstanceRequestTag() {}

  explicit CreateInstanceRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateInstanceRequestTag() = default;
};
class CreateInstanceRequestUserVpc : public Darabonba::Model {
public:
  shared_ptr<string> defaultRoute{};
  shared_ptr<vector<string>> extendedCIDRs{};
  shared_ptr<vector<ForwardInfo>> forwardInfos{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  CreateInstanceRequestUserVpc() {}

  explicit CreateInstanceRequestUserVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultRoute) {
      res["DefaultRoute"] = boost::any(*defaultRoute);
    }
    if (extendedCIDRs) {
      res["ExtendedCIDRs"] = boost::any(*extendedCIDRs);
    }
    if (forwardInfos) {
      vector<boost::any> temp1;
      for(auto item1:*forwardInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ForwardInfos"] = boost::any(temp1);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultRoute") != m.end() && !m["DefaultRoute"].empty()) {
      defaultRoute = make_shared<string>(boost::any_cast<string>(m["DefaultRoute"]));
    }
    if (m.find("ExtendedCIDRs") != m.end() && !m["ExtendedCIDRs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExtendedCIDRs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExtendedCIDRs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      extendedCIDRs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ForwardInfos") != m.end() && !m["ForwardInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ForwardInfos"].type()) {
        vector<ForwardInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ForwardInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ForwardInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        forwardInfos = make_shared<vector<ForwardInfo>>(expect1);
      }
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateInstanceRequestUserVpc() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<CreateInstanceRequestAffinity> affinity{};
  shared_ptr<vector<CreateInstanceRequestCloudDisks>> cloudDisks{};
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<vector<CreateInstanceRequestDatasets>> datasets{};
  shared_ptr<string> driver{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<map<string, string>> environmentVariables{};
  shared_ptr<string> imageAuth{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceName{};
  shared_ptr<vector<CreateInstanceRequestLabels>> labels{};
  shared_ptr<long> priority{};
  shared_ptr<CreateInstanceRequestRequestedResource> requestedResource{};
  shared_ptr<string> resourceId{};
  shared_ptr<vector<CreateInstanceRequestTag>> tag{};
  shared_ptr<string> userId{};
  shared_ptr<CreateInstanceRequestUserVpc> userVpc{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceSource{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (affinity) {
      res["Affinity"] = affinity ? boost::any(affinity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cloudDisks) {
      vector<boost::any> temp1;
      for(auto item1:*cloudDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CloudDisks"] = boost::any(temp1);
    }
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (datasets) {
      vector<boost::any> temp1;
      for(auto item1:*datasets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Datasets"] = boost::any(temp1);
    }
    if (driver) {
      res["Driver"] = boost::any(*driver);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (environmentVariables) {
      res["EnvironmentVariables"] = boost::any(*environmentVariables);
    }
    if (imageAuth) {
      res["ImageAuth"] = boost::any(*imageAuth);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (requestedResource) {
      res["RequestedResource"] = requestedResource ? boost::any(requestedResource->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceSource) {
      res["WorkspaceSource"] = boost::any(*workspaceSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Affinity") != m.end() && !m["Affinity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Affinity"].type()) {
        CreateInstanceRequestAffinity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Affinity"]));
        affinity = make_shared<CreateInstanceRequestAffinity>(model1);
      }
    }
    if (m.find("CloudDisks") != m.end() && !m["CloudDisks"].empty()) {
      if (typeid(vector<boost::any>) == m["CloudDisks"].type()) {
        vector<CreateInstanceRequestCloudDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CloudDisks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceRequestCloudDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cloudDisks = make_shared<vector<CreateInstanceRequestCloudDisks>>(expect1);
      }
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("Datasets") != m.end() && !m["Datasets"].empty()) {
      if (typeid(vector<boost::any>) == m["Datasets"].type()) {
        vector<CreateInstanceRequestDatasets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Datasets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceRequestDatasets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasets = make_shared<vector<CreateInstanceRequestDatasets>>(expect1);
      }
    }
    if (m.find("Driver") != m.end() && !m["Driver"].empty()) {
      driver = make_shared<string>(boost::any_cast<string>(m["Driver"]));
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
    }
    if (m.find("EnvironmentVariables") != m.end() && !m["EnvironmentVariables"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EnvironmentVariables"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ImageAuth") != m.end() && !m["ImageAuth"].empty()) {
      imageAuth = make_shared<string>(boost::any_cast<string>(m["ImageAuth"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<CreateInstanceRequestLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceRequestLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<CreateInstanceRequestLabels>>(expect1);
      }
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RequestedResource") != m.end() && !m["RequestedResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestedResource"].type()) {
        CreateInstanceRequestRequestedResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestedResource"]));
        requestedResource = make_shared<CreateInstanceRequestRequestedResource>(model1);
      }
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateInstanceRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateInstanceRequestTag>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        CreateInstanceRequestUserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<CreateInstanceRequestUserVpc>(model1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceSource") != m.end() && !m["WorkspaceSource"].empty()) {
      workspaceSource = make_shared<string>(boost::any_cast<string>(m["WorkspaceSource"]));
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateInstanceResponseBody() = default;
};
class CreateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceResponseBody> body{};

  CreateInstanceResponse() {}

  explicit CreateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class CreateInstanceShutdownTimerRequest : public Darabonba::Model {
public:
  shared_ptr<string> dueTime{};
  shared_ptr<long> remainingTimeInMs{};

  CreateInstanceShutdownTimerRequest() {}

  explicit CreateInstanceShutdownTimerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dueTime) {
      res["DueTime"] = boost::any(*dueTime);
    }
    if (remainingTimeInMs) {
      res["RemainingTimeInMs"] = boost::any(*remainingTimeInMs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DueTime") != m.end() && !m["DueTime"].empty()) {
      dueTime = make_shared<string>(boost::any_cast<string>(m["DueTime"]));
    }
    if (m.find("RemainingTimeInMs") != m.end() && !m["RemainingTimeInMs"].empty()) {
      remainingTimeInMs = make_shared<long>(boost::any_cast<long>(m["RemainingTimeInMs"]));
    }
  }


  virtual ~CreateInstanceShutdownTimerRequest() = default;
};
class CreateInstanceShutdownTimerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateInstanceShutdownTimerResponseBody() {}

  explicit CreateInstanceShutdownTimerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateInstanceShutdownTimerResponseBody() = default;
};
class CreateInstanceShutdownTimerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceShutdownTimerResponseBody> body{};

  CreateInstanceShutdownTimerResponse() {}

  explicit CreateInstanceShutdownTimerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceShutdownTimerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceShutdownTimerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceShutdownTimerResponse() = default;
};
class CreateInstanceSnapshotRequestLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateInstanceSnapshotRequestLabels() {}

  explicit CreateInstanceSnapshotRequestLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateInstanceSnapshotRequestLabels() = default;
};
class CreateInstanceSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> excludePaths{};
  shared_ptr<string> imageUrl{};
  shared_ptr<vector<CreateInstanceSnapshotRequestLabels>> labels{};
  shared_ptr<bool> overwrite{};
  shared_ptr<string> snapshotDescription{};
  shared_ptr<string> snapshotName{};

  CreateInstanceSnapshotRequest() {}

  explicit CreateInstanceSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludePaths) {
      res["ExcludePaths"] = boost::any(*excludePaths);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    if (snapshotDescription) {
      res["SnapshotDescription"] = boost::any(*snapshotDescription);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludePaths") != m.end() && !m["ExcludePaths"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExcludePaths"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExcludePaths"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludePaths = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<CreateInstanceSnapshotRequestLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceSnapshotRequestLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<CreateInstanceSnapshotRequestLabels>>(expect1);
      }
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<bool>(boost::any_cast<bool>(m["Overwrite"]));
    }
    if (m.find("SnapshotDescription") != m.end() && !m["SnapshotDescription"].empty()) {
      snapshotDescription = make_shared<string>(boost::any_cast<string>(m["SnapshotDescription"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
  }


  virtual ~CreateInstanceSnapshotRequest() = default;
};
class CreateInstanceSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> snapshotId{};
  shared_ptr<bool> success{};

  CreateInstanceSnapshotResponseBody() {}

  explicit CreateInstanceSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateInstanceSnapshotResponseBody() = default;
};
class CreateInstanceSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceSnapshotResponseBody> body{};

  CreateInstanceSnapshotResponse() {}

  explicit CreateInstanceSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceSnapshotResponse() = default;
};
class DeleteIdleInstanceCullerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteIdleInstanceCullerResponseBody() {}

  explicit DeleteIdleInstanceCullerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteIdleInstanceCullerResponseBody() = default;
};
class DeleteIdleInstanceCullerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIdleInstanceCullerResponseBody> body{};

  DeleteIdleInstanceCullerResponse() {}

  explicit DeleteIdleInstanceCullerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteIdleInstanceCullerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIdleInstanceCullerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIdleInstanceCullerResponse() = default;
};
class DeleteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteInstanceResponseBody() = default;
};
class DeleteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceResponseBody> body{};

  DeleteInstanceResponse() {}

  explicit DeleteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResponse() = default;
};
class DeleteInstanceLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelKeys{};

  DeleteInstanceLabelsRequest() {}

  explicit DeleteInstanceLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelKeys) {
      res["LabelKeys"] = boost::any(*labelKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelKeys") != m.end() && !m["LabelKeys"].empty()) {
      labelKeys = make_shared<string>(boost::any_cast<string>(m["LabelKeys"]));
    }
  }


  virtual ~DeleteInstanceLabelsRequest() = default;
};
class DeleteInstanceLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteInstanceLabelsResponseBody() {}

  explicit DeleteInstanceLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteInstanceLabelsResponseBody() = default;
};
class DeleteInstanceLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceLabelsResponseBody> body{};

  DeleteInstanceLabelsResponse() {}

  explicit DeleteInstanceLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceLabelsResponse() = default;
};
class DeleteInstanceShutdownTimerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteInstanceShutdownTimerResponseBody() {}

  explicit DeleteInstanceShutdownTimerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteInstanceShutdownTimerResponseBody() = default;
};
class DeleteInstanceShutdownTimerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceShutdownTimerResponseBody> body{};

  DeleteInstanceShutdownTimerResponse() {}

  explicit DeleteInstanceShutdownTimerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceShutdownTimerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceShutdownTimerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceShutdownTimerResponse() = default;
};
class DeleteInstanceSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> snapshotId{};
  shared_ptr<bool> success{};

  DeleteInstanceSnapshotResponseBody() {}

  explicit DeleteInstanceSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteInstanceSnapshotResponseBody() = default;
};
class DeleteInstanceSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceSnapshotResponseBody> body{};

  DeleteInstanceSnapshotResponse() {}

  explicit DeleteInstanceSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceSnapshotResponse() = default;
};
class GetIdleInstanceCullerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> cpuPercentThreshold{};
  shared_ptr<long> gpuPercentThreshold{};
  shared_ptr<long> idleTimeInMinutes{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxIdleTimeInMinutes{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetIdleInstanceCullerResponseBody() {}

  explicit GetIdleInstanceCullerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (cpuPercentThreshold) {
      res["CpuPercentThreshold"] = boost::any(*cpuPercentThreshold);
    }
    if (gpuPercentThreshold) {
      res["GpuPercentThreshold"] = boost::any(*gpuPercentThreshold);
    }
    if (idleTimeInMinutes) {
      res["IdleTimeInMinutes"] = boost::any(*idleTimeInMinutes);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxIdleTimeInMinutes) {
      res["MaxIdleTimeInMinutes"] = boost::any(*maxIdleTimeInMinutes);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CpuPercentThreshold") != m.end() && !m["CpuPercentThreshold"].empty()) {
      cpuPercentThreshold = make_shared<long>(boost::any_cast<long>(m["CpuPercentThreshold"]));
    }
    if (m.find("GpuPercentThreshold") != m.end() && !m["GpuPercentThreshold"].empty()) {
      gpuPercentThreshold = make_shared<long>(boost::any_cast<long>(m["GpuPercentThreshold"]));
    }
    if (m.find("IdleTimeInMinutes") != m.end() && !m["IdleTimeInMinutes"].empty()) {
      idleTimeInMinutes = make_shared<long>(boost::any_cast<long>(m["IdleTimeInMinutes"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxIdleTimeInMinutes") != m.end() && !m["MaxIdleTimeInMinutes"].empty()) {
      maxIdleTimeInMinutes = make_shared<long>(boost::any_cast<long>(m["MaxIdleTimeInMinutes"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetIdleInstanceCullerResponseBody() = default;
};
class GetIdleInstanceCullerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetIdleInstanceCullerResponseBody> body{};

  GetIdleInstanceCullerResponse() {}

  explicit GetIdleInstanceCullerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetIdleInstanceCullerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIdleInstanceCullerResponseBody>(model1);
      }
    }
  }


  virtual ~GetIdleInstanceCullerResponse() = default;
};
class GetInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> token{};

  GetInstanceRequest() {}

  explicit GetInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetInstanceRequest() = default;
};
class GetInstanceResponseBodyAffinityCPU : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};

  GetInstanceResponseBodyAffinityCPU() {}

  explicit GetInstanceResponseBodyAffinityCPU(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
  }


  virtual ~GetInstanceResponseBodyAffinityCPU() = default;
};
class GetInstanceResponseBodyAffinity : public Darabonba::Model {
public:
  shared_ptr<GetInstanceResponseBodyAffinityCPU> CPU{};

  GetInstanceResponseBodyAffinity() {}

  explicit GetInstanceResponseBodyAffinity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = CPU ? boost::any(CPU->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      if (typeid(map<string, boost::any>) == m["CPU"].type()) {
        GetInstanceResponseBodyAffinityCPU model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CPU"]));
        CPU = make_shared<GetInstanceResponseBodyAffinityCPU>(model1);
      }
    }
  }


  virtual ~GetInstanceResponseBodyAffinity() = default;
};
class GetInstanceResponseBodyCloudDisks : public Darabonba::Model {
public:
  shared_ptr<string> capacity{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> path{};
  shared_ptr<string> subType{};

  GetInstanceResponseBodyCloudDisks() {}

  explicit GetInstanceResponseBodyCloudDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<string>(boost::any_cast<string>(m["Capacity"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
  }


  virtual ~GetInstanceResponseBodyCloudDisks() = default;
};
class GetInstanceResponseBodyDatasets : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> mountAccess{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> optionType{};
  shared_ptr<string> options{};
  shared_ptr<string> uri{};

  GetInstanceResponseBodyDatasets() {}

  explicit GetInstanceResponseBodyDatasets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (mountAccess) {
      res["MountAccess"] = boost::any(*mountAccess);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (optionType) {
      res["OptionType"] = boost::any(*optionType);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("MountAccess") != m.end() && !m["MountAccess"].empty()) {
      mountAccess = make_shared<string>(boost::any_cast<string>(m["MountAccess"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("OptionType") != m.end() && !m["OptionType"].empty()) {
      optionType = make_shared<string>(boost::any_cast<string>(m["OptionType"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~GetInstanceResponseBodyDatasets() = default;
};
class GetInstanceResponseBodyIdleInstanceCuller : public Darabonba::Model {
public:
  shared_ptr<long> cpuPercentThreshold{};
  shared_ptr<long> gpuPercentThreshold{};
  shared_ptr<long> idleTimeInMinutes{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxIdleTimeInMinutes{};

  GetInstanceResponseBodyIdleInstanceCuller() {}

  explicit GetInstanceResponseBodyIdleInstanceCuller(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuPercentThreshold) {
      res["CpuPercentThreshold"] = boost::any(*cpuPercentThreshold);
    }
    if (gpuPercentThreshold) {
      res["GpuPercentThreshold"] = boost::any(*gpuPercentThreshold);
    }
    if (idleTimeInMinutes) {
      res["IdleTimeInMinutes"] = boost::any(*idleTimeInMinutes);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxIdleTimeInMinutes) {
      res["MaxIdleTimeInMinutes"] = boost::any(*maxIdleTimeInMinutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuPercentThreshold") != m.end() && !m["CpuPercentThreshold"].empty()) {
      cpuPercentThreshold = make_shared<long>(boost::any_cast<long>(m["CpuPercentThreshold"]));
    }
    if (m.find("GpuPercentThreshold") != m.end() && !m["GpuPercentThreshold"].empty()) {
      gpuPercentThreshold = make_shared<long>(boost::any_cast<long>(m["GpuPercentThreshold"]));
    }
    if (m.find("IdleTimeInMinutes") != m.end() && !m["IdleTimeInMinutes"].empty()) {
      idleTimeInMinutes = make_shared<long>(boost::any_cast<long>(m["IdleTimeInMinutes"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxIdleTimeInMinutes") != m.end() && !m["MaxIdleTimeInMinutes"].empty()) {
      maxIdleTimeInMinutes = make_shared<long>(boost::any_cast<long>(m["MaxIdleTimeInMinutes"]));
    }
  }


  virtual ~GetInstanceResponseBodyIdleInstanceCuller() = default;
};
class GetInstanceResponseBodyInstanceShutdownTimer : public Darabonba::Model {
public:
  shared_ptr<string> dueTime{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> remainingTimeInMs{};

  GetInstanceResponseBodyInstanceShutdownTimer() {}

  explicit GetInstanceResponseBodyInstanceShutdownTimer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dueTime) {
      res["DueTime"] = boost::any(*dueTime);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (remainingTimeInMs) {
      res["RemainingTimeInMs"] = boost::any(*remainingTimeInMs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DueTime") != m.end() && !m["DueTime"].empty()) {
      dueTime = make_shared<string>(boost::any_cast<string>(m["DueTime"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RemainingTimeInMs") != m.end() && !m["RemainingTimeInMs"].empty()) {
      remainingTimeInMs = make_shared<long>(boost::any_cast<long>(m["RemainingTimeInMs"]));
    }
  }


  virtual ~GetInstanceResponseBodyInstanceShutdownTimer() = default;
};
class GetInstanceResponseBodyInstanceSnapshotList : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> repositoryUrl{};
  shared_ptr<string> status{};

  GetInstanceResponseBodyInstanceSnapshotList() {}

  explicit GetInstanceResponseBodyInstanceSnapshotList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (repositoryUrl) {
      res["RepositoryUrl"] = boost::any(*repositoryUrl);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RepositoryUrl") != m.end() && !m["RepositoryUrl"].empty()) {
      repositoryUrl = make_shared<string>(boost::any_cast<string>(m["RepositoryUrl"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetInstanceResponseBodyInstanceSnapshotList() = default;
};
class GetInstanceResponseBodyLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetInstanceResponseBodyLabels() {}

  explicit GetInstanceResponseBodyLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetInstanceResponseBodyLabels() = default;
};
class GetInstanceResponseBodyLatestSnapshot : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> repositoryUrl{};
  shared_ptr<string> status{};

  GetInstanceResponseBodyLatestSnapshot() {}

  explicit GetInstanceResponseBodyLatestSnapshot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (repositoryUrl) {
      res["RepositoryUrl"] = boost::any(*repositoryUrl);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RepositoryUrl") != m.end() && !m["RepositoryUrl"].empty()) {
      repositoryUrl = make_shared<string>(boost::any_cast<string>(m["RepositoryUrl"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetInstanceResponseBodyLatestSnapshot() = default;
};
class GetInstanceResponseBodyNodeErrorRecovery : public Darabonba::Model {
public:
  shared_ptr<long> autoSwitchCountdownSeconds{};
  shared_ptr<bool> enableAutoSwitchOnNodeError{};
  shared_ptr<bool> hasNodeError{};

  GetInstanceResponseBodyNodeErrorRecovery() {}

  explicit GetInstanceResponseBodyNodeErrorRecovery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSwitchCountdownSeconds) {
      res["autoSwitchCountdownSeconds"] = boost::any(*autoSwitchCountdownSeconds);
    }
    if (enableAutoSwitchOnNodeError) {
      res["enableAutoSwitchOnNodeError"] = boost::any(*enableAutoSwitchOnNodeError);
    }
    if (hasNodeError) {
      res["hasNodeError"] = boost::any(*hasNodeError);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoSwitchCountdownSeconds") != m.end() && !m["autoSwitchCountdownSeconds"].empty()) {
      autoSwitchCountdownSeconds = make_shared<long>(boost::any_cast<long>(m["autoSwitchCountdownSeconds"]));
    }
    if (m.find("enableAutoSwitchOnNodeError") != m.end() && !m["enableAutoSwitchOnNodeError"].empty()) {
      enableAutoSwitchOnNodeError = make_shared<bool>(boost::any_cast<bool>(m["enableAutoSwitchOnNodeError"]));
    }
    if (m.find("hasNodeError") != m.end() && !m["hasNodeError"].empty()) {
      hasNodeError = make_shared<bool>(boost::any_cast<bool>(m["hasNodeError"]));
    }
  }


  virtual ~GetInstanceResponseBodyNodeErrorRecovery() = default;
};
class GetInstanceResponseBodyRequestedResource : public Darabonba::Model {
public:
  shared_ptr<string> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> memory{};
  shared_ptr<string> sharedMemory{};

  GetInstanceResponseBodyRequestedResource() {}

  explicit GetInstanceResponseBodyRequestedResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (sharedMemory) {
      res["SharedMemory"] = boost::any(*sharedMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("SharedMemory") != m.end() && !m["SharedMemory"].empty()) {
      sharedMemory = make_shared<string>(boost::any_cast<string>(m["SharedMemory"]));
    }
  }


  virtual ~GetInstanceResponseBodyRequestedResource() = default;
};
class GetInstanceResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetInstanceResponseBodyTags() {}

  explicit GetInstanceResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetInstanceResponseBodyTags() = default;
};
class GetInstanceResponseBodyUserVpc : public Darabonba::Model {
public:
  shared_ptr<string> defaultRoute{};
  shared_ptr<vector<string>> extendedCIDRs{};
  shared_ptr<vector<ForwardInfoResponse>> forwardInfos{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  GetInstanceResponseBodyUserVpc() {}

  explicit GetInstanceResponseBodyUserVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultRoute) {
      res["DefaultRoute"] = boost::any(*defaultRoute);
    }
    if (extendedCIDRs) {
      res["ExtendedCIDRs"] = boost::any(*extendedCIDRs);
    }
    if (forwardInfos) {
      vector<boost::any> temp1;
      for(auto item1:*forwardInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ForwardInfos"] = boost::any(temp1);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultRoute") != m.end() && !m["DefaultRoute"].empty()) {
      defaultRoute = make_shared<string>(boost::any_cast<string>(m["DefaultRoute"]));
    }
    if (m.find("ExtendedCIDRs") != m.end() && !m["ExtendedCIDRs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExtendedCIDRs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExtendedCIDRs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      extendedCIDRs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ForwardInfos") != m.end() && !m["ForwardInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ForwardInfos"].type()) {
        vector<ForwardInfoResponse> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ForwardInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ForwardInfoResponse model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        forwardInfos = make_shared<vector<ForwardInfoResponse>>(expect1);
      }
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~GetInstanceResponseBodyUserVpc() = default;
};
class GetInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<string> accessibility{};
  shared_ptr<long> accumulatedRunningTimeInMs{};
  shared_ptr<GetInstanceResponseBodyAffinity> affinity{};
  shared_ptr<vector<GetInstanceResponseBodyCloudDisks>> cloudDisks{};
  shared_ptr<string> code{};
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<vector<GetInstanceResponseBodyDatasets>> datasets{};
  shared_ptr<string> driver{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<map<string, string>> environmentVariables{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<GetInstanceResponseBodyIdleInstanceCuller> idleInstanceCuller{};
  shared_ptr<string> imageAuth{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<GetInstanceResponseBodyInstanceShutdownTimer> instanceShutdownTimer{};
  shared_ptr<vector<GetInstanceResponseBodyInstanceSnapshotList>> instanceSnapshotList{};
  shared_ptr<string> instanceUrl{};
  shared_ptr<string> jupyterlabUrl{};
  shared_ptr<vector<GetInstanceResponseBodyLabels>> labels{};
  shared_ptr<GetInstanceResponseBodyLatestSnapshot> latestSnapshot{};
  shared_ptr<string> message{};
  shared_ptr<GetInstanceResponseBodyNodeErrorRecovery> nodeErrorRecovery{};
  shared_ptr<string> paymentType{};
  shared_ptr<long> priority{};
  shared_ptr<string> proxyPath{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<GetInstanceResponseBodyRequestedResource> requestedResource{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};
  shared_ptr<vector<GetInstanceResponseBodyTags>> tags{};
  shared_ptr<string> terminalUrl{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<GetInstanceResponseBodyUserVpc> userVpc{};
  shared_ptr<string> webIDEUrl{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};
  shared_ptr<string> workspaceSource{};

  GetInstanceResponseBody() {}

  explicit GetInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (accumulatedRunningTimeInMs) {
      res["AccumulatedRunningTimeInMs"] = boost::any(*accumulatedRunningTimeInMs);
    }
    if (affinity) {
      res["Affinity"] = affinity ? boost::any(affinity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cloudDisks) {
      vector<boost::any> temp1;
      for(auto item1:*cloudDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CloudDisks"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (datasets) {
      vector<boost::any> temp1;
      for(auto item1:*datasets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Datasets"] = boost::any(temp1);
    }
    if (driver) {
      res["Driver"] = boost::any(*driver);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (environmentVariables) {
      res["EnvironmentVariables"] = boost::any(*environmentVariables);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (idleInstanceCuller) {
      res["IdleInstanceCuller"] = idleInstanceCuller ? boost::any(idleInstanceCuller->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageAuth) {
      res["ImageAuth"] = boost::any(*imageAuth);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceShutdownTimer) {
      res["InstanceShutdownTimer"] = instanceShutdownTimer ? boost::any(instanceShutdownTimer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceSnapshotList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceSnapshotList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceSnapshotList"] = boost::any(temp1);
    }
    if (instanceUrl) {
      res["InstanceUrl"] = boost::any(*instanceUrl);
    }
    if (jupyterlabUrl) {
      res["JupyterlabUrl"] = boost::any(*jupyterlabUrl);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestSnapshot) {
      res["LatestSnapshot"] = latestSnapshot ? boost::any(latestSnapshot->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nodeErrorRecovery) {
      res["NodeErrorRecovery"] = nodeErrorRecovery ? boost::any(nodeErrorRecovery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (proxyPath) {
      res["ProxyPath"] = boost::any(*proxyPath);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (requestedResource) {
      res["RequestedResource"] = requestedResource ? boost::any(requestedResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (terminalUrl) {
      res["TerminalUrl"] = boost::any(*terminalUrl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (webIDEUrl) {
      res["WebIDEUrl"] = boost::any(*webIDEUrl);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    if (workspaceSource) {
      res["WorkspaceSource"] = boost::any(*workspaceSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("AccumulatedRunningTimeInMs") != m.end() && !m["AccumulatedRunningTimeInMs"].empty()) {
      accumulatedRunningTimeInMs = make_shared<long>(boost::any_cast<long>(m["AccumulatedRunningTimeInMs"]));
    }
    if (m.find("Affinity") != m.end() && !m["Affinity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Affinity"].type()) {
        GetInstanceResponseBodyAffinity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Affinity"]));
        affinity = make_shared<GetInstanceResponseBodyAffinity>(model1);
      }
    }
    if (m.find("CloudDisks") != m.end() && !m["CloudDisks"].empty()) {
      if (typeid(vector<boost::any>) == m["CloudDisks"].type()) {
        vector<GetInstanceResponseBodyCloudDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CloudDisks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyCloudDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cloudDisks = make_shared<vector<GetInstanceResponseBodyCloudDisks>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("Datasets") != m.end() && !m["Datasets"].empty()) {
      if (typeid(vector<boost::any>) == m["Datasets"].type()) {
        vector<GetInstanceResponseBodyDatasets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Datasets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyDatasets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasets = make_shared<vector<GetInstanceResponseBodyDatasets>>(expect1);
      }
    }
    if (m.find("Driver") != m.end() && !m["Driver"].empty()) {
      driver = make_shared<string>(boost::any_cast<string>(m["Driver"]));
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
    }
    if (m.find("EnvironmentVariables") != m.end() && !m["EnvironmentVariables"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EnvironmentVariables"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("IdleInstanceCuller") != m.end() && !m["IdleInstanceCuller"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdleInstanceCuller"].type()) {
        GetInstanceResponseBodyIdleInstanceCuller model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdleInstanceCuller"]));
        idleInstanceCuller = make_shared<GetInstanceResponseBodyIdleInstanceCuller>(model1);
      }
    }
    if (m.find("ImageAuth") != m.end() && !m["ImageAuth"].empty()) {
      imageAuth = make_shared<string>(boost::any_cast<string>(m["ImageAuth"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceShutdownTimer") != m.end() && !m["InstanceShutdownTimer"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceShutdownTimer"].type()) {
        GetInstanceResponseBodyInstanceShutdownTimer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceShutdownTimer"]));
        instanceShutdownTimer = make_shared<GetInstanceResponseBodyInstanceShutdownTimer>(model1);
      }
    }
    if (m.find("InstanceSnapshotList") != m.end() && !m["InstanceSnapshotList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceSnapshotList"].type()) {
        vector<GetInstanceResponseBodyInstanceSnapshotList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceSnapshotList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyInstanceSnapshotList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceSnapshotList = make_shared<vector<GetInstanceResponseBodyInstanceSnapshotList>>(expect1);
      }
    }
    if (m.find("InstanceUrl") != m.end() && !m["InstanceUrl"].empty()) {
      instanceUrl = make_shared<string>(boost::any_cast<string>(m["InstanceUrl"]));
    }
    if (m.find("JupyterlabUrl") != m.end() && !m["JupyterlabUrl"].empty()) {
      jupyterlabUrl = make_shared<string>(boost::any_cast<string>(m["JupyterlabUrl"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<GetInstanceResponseBodyLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<GetInstanceResponseBodyLabels>>(expect1);
      }
    }
    if (m.find("LatestSnapshot") != m.end() && !m["LatestSnapshot"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestSnapshot"].type()) {
        GetInstanceResponseBodyLatestSnapshot model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestSnapshot"]));
        latestSnapshot = make_shared<GetInstanceResponseBodyLatestSnapshot>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NodeErrorRecovery") != m.end() && !m["NodeErrorRecovery"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeErrorRecovery"].type()) {
        GetInstanceResponseBodyNodeErrorRecovery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeErrorRecovery"]));
        nodeErrorRecovery = make_shared<GetInstanceResponseBodyNodeErrorRecovery>(model1);
      }
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ProxyPath") != m.end() && !m["ProxyPath"].empty()) {
      proxyPath = make_shared<string>(boost::any_cast<string>(m["ProxyPath"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RequestedResource") != m.end() && !m["RequestedResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestedResource"].type()) {
        GetInstanceResponseBodyRequestedResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestedResource"]));
        requestedResource = make_shared<GetInstanceResponseBodyRequestedResource>(model1);
      }
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetInstanceResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetInstanceResponseBodyTags>>(expect1);
      }
    }
    if (m.find("TerminalUrl") != m.end() && !m["TerminalUrl"].empty()) {
      terminalUrl = make_shared<string>(boost::any_cast<string>(m["TerminalUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        GetInstanceResponseBodyUserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<GetInstanceResponseBodyUserVpc>(model1);
      }
    }
    if (m.find("WebIDEUrl") != m.end() && !m["WebIDEUrl"].empty()) {
      webIDEUrl = make_shared<string>(boost::any_cast<string>(m["WebIDEUrl"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
    if (m.find("WorkspaceSource") != m.end() && !m["WorkspaceSource"].empty()) {
      workspaceSource = make_shared<string>(boost::any_cast<string>(m["WorkspaceSource"]));
    }
  }


  virtual ~GetInstanceResponseBody() = default;
};
class GetInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceResponseBody> body{};

  GetInstanceResponse() {}

  explicit GetInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceResponse() = default;
};
class GetInstanceEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> maxEventsNum{};
  shared_ptr<string> startTime{};
  shared_ptr<string> token{};

  GetInstanceEventsRequest() {}

  explicit GetInstanceEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (maxEventsNum) {
      res["MaxEventsNum"] = boost::any(*maxEventsNum);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("MaxEventsNum") != m.end() && !m["MaxEventsNum"].empty()) {
      maxEventsNum = make_shared<long>(boost::any_cast<long>(m["MaxEventsNum"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetInstanceEventsRequest() = default;
};
class GetInstanceEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<string>> events{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInstanceEventsResponseBody() {}

  explicit GetInstanceEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (events) {
      res["Events"] = boost::any(*events);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Events"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      events = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetInstanceEventsResponseBody() = default;
};
class GetInstanceEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceEventsResponseBody> body{};

  GetInstanceEventsResponse() {}

  explicit GetInstanceEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceEventsResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceEventsResponse() = default;
};
class GetInstanceMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> metricType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timeStep{};

  GetInstanceMetricsRequest() {}

  explicit GetInstanceMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (metricType) {
      res["MetricType"] = boost::any(*metricType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timeStep) {
      res["TimeStep"] = boost::any(*timeStep);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("MetricType") != m.end() && !m["MetricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["MetricType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TimeStep") != m.end() && !m["TimeStep"].empty()) {
      timeStep = make_shared<string>(boost::any_cast<string>(m["TimeStep"]));
    }
  }


  virtual ~GetInstanceMetricsRequest() = default;
};
class GetInstanceMetricsResponseBodyPodMetricsMetrics : public Darabonba::Model {
public:
  shared_ptr<long> time{};
  shared_ptr<double> value{};

  GetInstanceMetricsResponseBodyPodMetricsMetrics() {}

  explicit GetInstanceMetricsResponseBodyPodMetricsMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~GetInstanceMetricsResponseBodyPodMetricsMetrics() = default;
};
class GetInstanceMetricsResponseBodyPodMetrics : public Darabonba::Model {
public:
  shared_ptr<vector<GetInstanceMetricsResponseBodyPodMetricsMetrics>> metrics{};
  shared_ptr<string> podId{};

  GetInstanceMetricsResponseBodyPodMetrics() {}

  explicit GetInstanceMetricsResponseBodyPodMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (podId) {
      res["PodId"] = boost::any(*podId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<GetInstanceMetricsResponseBodyPodMetricsMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceMetricsResponseBodyPodMetricsMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<GetInstanceMetricsResponseBodyPodMetricsMetrics>>(expect1);
      }
    }
    if (m.find("PodId") != m.end() && !m["PodId"].empty()) {
      podId = make_shared<string>(boost::any_cast<string>(m["PodId"]));
    }
  }


  virtual ~GetInstanceMetricsResponseBodyPodMetrics() = default;
};
class GetInstanceMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<vector<GetInstanceMetricsResponseBodyPodMetrics>> podMetrics{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInstanceMetricsResponseBody() {}

  explicit GetInstanceMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (podMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*podMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PodMetrics"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PodMetrics") != m.end() && !m["PodMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["PodMetrics"].type()) {
        vector<GetInstanceMetricsResponseBodyPodMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PodMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceMetricsResponseBodyPodMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        podMetrics = make_shared<vector<GetInstanceMetricsResponseBodyPodMetrics>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetInstanceMetricsResponseBody() = default;
};
class GetInstanceMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceMetricsResponseBody> body{};

  GetInstanceMetricsResponse() {}

  explicit GetInstanceMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceMetricsResponse() = default;
};
class GetInstanceShutdownTimerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dueTime{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<long> remainingTimeInMs{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInstanceShutdownTimerResponseBody() {}

  explicit GetInstanceShutdownTimerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dueTime) {
      res["DueTime"] = boost::any(*dueTime);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (remainingTimeInMs) {
      res["RemainingTimeInMs"] = boost::any(*remainingTimeInMs);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DueTime") != m.end() && !m["DueTime"].empty()) {
      dueTime = make_shared<string>(boost::any_cast<string>(m["DueTime"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RemainingTimeInMs") != m.end() && !m["RemainingTimeInMs"].empty()) {
      remainingTimeInMs = make_shared<long>(boost::any_cast<long>(m["RemainingTimeInMs"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetInstanceShutdownTimerResponseBody() = default;
};
class GetInstanceShutdownTimerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceShutdownTimerResponseBody> body{};

  GetInstanceShutdownTimerResponse() {}

  explicit GetInstanceShutdownTimerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceShutdownTimerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceShutdownTimerResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceShutdownTimerResponse() = default;
};
class GetInstanceSnapshotResponseBodyLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetInstanceSnapshotResponseBodyLabels() {}

  explicit GetInstanceSnapshotResponseBodyLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetInstanceSnapshotResponseBodyLabels() = default;
};
class GetInstanceSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<string>> excludePaths{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<GetInstanceSnapshotResponseBodyLabels>> labels{};
  shared_ptr<string> message{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> snapshotName{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  GetInstanceSnapshotResponseBody() {}

  explicit GetInstanceSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (excludePaths) {
      res["ExcludePaths"] = boost::any(*excludePaths);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ExcludePaths") != m.end() && !m["ExcludePaths"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExcludePaths"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExcludePaths"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludePaths = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<GetInstanceSnapshotResponseBodyLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceSnapshotResponseBodyLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<GetInstanceSnapshotResponseBodyLabels>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetInstanceSnapshotResponseBody() = default;
};
class GetInstanceSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceSnapshotResponseBody> body{};

  GetInstanceSnapshotResponse() {}

  explicit GetInstanceSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceSnapshotResponse() = default;
};
class GetLifecycleRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> limit{};
  shared_ptr<string> order{};
  shared_ptr<long> sessionNumber{};
  shared_ptr<string> startTime{};
  shared_ptr<string> token{};

  GetLifecycleRequest() {}

  explicit GetLifecycleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (sessionNumber) {
      res["SessionNumber"] = boost::any(*sessionNumber);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("SessionNumber") != m.end() && !m["SessionNumber"].empty()) {
      sessionNumber = make_shared<long>(boost::any_cast<long>(m["SessionNumber"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetLifecycleRequest() = default;
};
class GetLifecycleResponseBodyLifecycle : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> gmtCreateTime{};

  GetLifecycleResponseBodyLifecycle() {}

  explicit GetLifecycleResponseBodyLifecycle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
  }


  virtual ~GetLifecycleResponseBodyLifecycle() = default;
};
class GetLifecycleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<vector<undefined>>> lifecycle{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  GetLifecycleResponseBody() {}

  explicit GetLifecycleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (lifecycle) {
      vector<boost::any> temp1;
      for(auto item1:*lifecycle){
        vector<boost::any> temp2;
        for(auto item2:item1){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1 = boost::any(temp2);
      }
      res["Lifecycle"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Lifecycle") != m.end() && !m["Lifecycle"].empty()) {
      if (typeid(vector<boost::any>) == m["Lifecycle"].type()) {
        vector<vector<undefined>> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Lifecycle"])){
          if (typeid(vector<boost::any>) == item1.type()) {
            vector<undefined> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                undefined model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1.push_back(expect2);
          }
        }
        lifecycle = make_shared<vector<vector<undefined>>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetLifecycleResponseBody() = default;
};
class GetLifecycleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLifecycleResponseBody> body{};

  GetLifecycleResponse() {}

  explicit GetLifecycleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLifecycleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLifecycleResponseBody>(model1);
      }
    }
  }


  virtual ~GetLifecycleResponse() = default;
};
class GetMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> dimensions{};
  shared_ptr<string> endTime{};
  shared_ptr<string> length{};
  shared_ptr<string> metricName{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> period{};
  shared_ptr<string> startTime{};

  GetMetricsRequest() {}

  explicit GetMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (length) {
      res["Length"] = boost::any(*length);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      dimensions = make_shared<string>(boost::any_cast<string>(m["Dimensions"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Length") != m.end() && !m["Length"].empty()) {
      length = make_shared<string>(boost::any_cast<string>(m["Length"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~GetMetricsRequest() = default;
};
class GetMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> datapoints{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> period{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetMetricsResponseBody() {}

  explicit GetMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (datapoints) {
      res["Datapoints"] = boost::any(*datapoints);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Datapoints") != m.end() && !m["Datapoints"].empty()) {
      datapoints = make_shared<string>(boost::any_cast<string>(m["Datapoints"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetMetricsResponseBody() = default;
};
class GetMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMetricsResponseBody> body{};

  GetMetricsResponse() {}

  explicit GetMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~GetMetricsResponse() = default;
};
class GetResourceGroupStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> workspaceIds{};

  GetResourceGroupStatisticsRequest() {}

  explicit GetResourceGroupStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (workspaceIds) {
      res["WorkspaceIds"] = boost::any(*workspaceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("WorkspaceIds") != m.end() && !m["WorkspaceIds"].empty()) {
      workspaceIds = make_shared<string>(boost::any_cast<string>(m["WorkspaceIds"]));
    }
  }


  virtual ~GetResourceGroupStatisticsRequest() = default;
};
class GetResourceGroupStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, map<string, boost::any>>> statistics{};
  shared_ptr<bool> success{};

  GetResourceGroupStatisticsResponseBody() {}

  explicit GetResourceGroupStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statistics) {
      res["Statistics"] = boost::any(*statistics);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      map<string, map<string, boost::any>> map1 = boost::any_cast<map<string, map<string, boost::any>>>(m["Statistics"]);
      map<string, map<string, boost::any>> toMap1;
      for (auto item:map1) {
        map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item.second);
        map<string, boost::any> toMap2;
        for (auto item:map2) {
           toMap2[item.first] = item.second;
        }
         toMap1[item.first] = toMap2;
      }
      statistics = make_shared<map<string, map<string, boost::any>>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetResourceGroupStatisticsResponseBody() = default;
};
class GetResourceGroupStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceGroupStatisticsResponseBody> body{};

  GetResourceGroupStatisticsResponse() {}

  explicit GetResourceGroupStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceGroupStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceGroupStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceGroupStatisticsResponse() = default;
};
class GetTokenRequest : public Darabonba::Model {
public:
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};

  GetTokenRequest() {}

  explicit GetTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetTokenRequest() = default;
};
class GetTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> token{};

  GetTokenResponseBody() {}

  explicit GetTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetTokenResponseBody() = default;
};
class GetTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTokenResponseBody> body{};

  GetTokenResponse() {}

  explicit GetTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetTokenResponse() = default;
};
class GetUserConfigResponseBodyFreeTier : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> initBaseUnit{};
  shared_ptr<double> initBaseValue{};
  shared_ptr<string> initShowUnit{};
  shared_ptr<string> initShowValue{};
  shared_ptr<bool> isFreeTierUser{};
  shared_ptr<string> periodBaseUnit{};
  shared_ptr<double> periodBaseValue{};
  shared_ptr<string> periodShowUnit{};
  shared_ptr<string> periodShowValue{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  GetUserConfigResponseBodyFreeTier() {}

  explicit GetUserConfigResponseBodyFreeTier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (initBaseUnit) {
      res["InitBaseUnit"] = boost::any(*initBaseUnit);
    }
    if (initBaseValue) {
      res["InitBaseValue"] = boost::any(*initBaseValue);
    }
    if (initShowUnit) {
      res["InitShowUnit"] = boost::any(*initShowUnit);
    }
    if (initShowValue) {
      res["InitShowValue"] = boost::any(*initShowValue);
    }
    if (isFreeTierUser) {
      res["IsFreeTierUser"] = boost::any(*isFreeTierUser);
    }
    if (periodBaseUnit) {
      res["PeriodBaseUnit"] = boost::any(*periodBaseUnit);
    }
    if (periodBaseValue) {
      res["PeriodBaseValue"] = boost::any(*periodBaseValue);
    }
    if (periodShowUnit) {
      res["PeriodShowUnit"] = boost::any(*periodShowUnit);
    }
    if (periodShowValue) {
      res["PeriodShowValue"] = boost::any(*periodShowValue);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InitBaseUnit") != m.end() && !m["InitBaseUnit"].empty()) {
      initBaseUnit = make_shared<string>(boost::any_cast<string>(m["InitBaseUnit"]));
    }
    if (m.find("InitBaseValue") != m.end() && !m["InitBaseValue"].empty()) {
      initBaseValue = make_shared<double>(boost::any_cast<double>(m["InitBaseValue"]));
    }
    if (m.find("InitShowUnit") != m.end() && !m["InitShowUnit"].empty()) {
      initShowUnit = make_shared<string>(boost::any_cast<string>(m["InitShowUnit"]));
    }
    if (m.find("InitShowValue") != m.end() && !m["InitShowValue"].empty()) {
      initShowValue = make_shared<string>(boost::any_cast<string>(m["InitShowValue"]));
    }
    if (m.find("IsFreeTierUser") != m.end() && !m["IsFreeTierUser"].empty()) {
      isFreeTierUser = make_shared<bool>(boost::any_cast<bool>(m["IsFreeTierUser"]));
    }
    if (m.find("PeriodBaseUnit") != m.end() && !m["PeriodBaseUnit"].empty()) {
      periodBaseUnit = make_shared<string>(boost::any_cast<string>(m["PeriodBaseUnit"]));
    }
    if (m.find("PeriodBaseValue") != m.end() && !m["PeriodBaseValue"].empty()) {
      periodBaseValue = make_shared<double>(boost::any_cast<double>(m["PeriodBaseValue"]));
    }
    if (m.find("PeriodShowUnit") != m.end() && !m["PeriodShowUnit"].empty()) {
      periodShowUnit = make_shared<string>(boost::any_cast<string>(m["PeriodShowUnit"]));
    }
    if (m.find("PeriodShowValue") != m.end() && !m["PeriodShowValue"].empty()) {
      periodShowValue = make_shared<string>(boost::any_cast<string>(m["PeriodShowValue"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetUserConfigResponseBodyFreeTier() = default;
};
class GetUserConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> accountSufficient{};
  shared_ptr<string> code{};
  shared_ptr<bool> enableEciDisk{};
  shared_ptr<GetUserConfigResponseBodyFreeTier> freeTier{};
  shared_ptr<bool> freeTierSpecAvailable{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetUserConfigResponseBody() {}

  explicit GetUserConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountSufficient) {
      res["AccountSufficient"] = boost::any(*accountSufficient);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (enableEciDisk) {
      res["EnableEciDisk"] = boost::any(*enableEciDisk);
    }
    if (freeTier) {
      res["FreeTier"] = freeTier ? boost::any(freeTier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (freeTierSpecAvailable) {
      res["FreeTierSpecAvailable"] = boost::any(*freeTierSpecAvailable);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountSufficient") != m.end() && !m["AccountSufficient"].empty()) {
      accountSufficient = make_shared<bool>(boost::any_cast<bool>(m["AccountSufficient"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EnableEciDisk") != m.end() && !m["EnableEciDisk"].empty()) {
      enableEciDisk = make_shared<bool>(boost::any_cast<bool>(m["EnableEciDisk"]));
    }
    if (m.find("FreeTier") != m.end() && !m["FreeTier"].empty()) {
      if (typeid(map<string, boost::any>) == m["FreeTier"].type()) {
        GetUserConfigResponseBodyFreeTier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FreeTier"]));
        freeTier = make_shared<GetUserConfigResponseBodyFreeTier>(model1);
      }
    }
    if (m.find("FreeTierSpecAvailable") != m.end() && !m["FreeTierSpecAvailable"].empty()) {
      freeTierSpecAvailable = make_shared<bool>(boost::any_cast<bool>(m["FreeTierSpecAvailable"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetUserConfigResponseBody() = default;
};
class GetUserConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserConfigResponseBody> body{};

  GetUserConfigResponse() {}

  explicit GetUserConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserConfigResponse() = default;
};
class ListEcsSpecsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};

  ListEcsSpecsRequest() {}

  explicit ListEcsSpecsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListEcsSpecsRequest() = default;
};
class ListEcsSpecsResponseBodyEcsSpecsLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListEcsSpecsResponseBodyEcsSpecsLabels() {}

  explicit ListEcsSpecsResponseBodyEcsSpecsLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListEcsSpecsResponseBodyEcsSpecsLabels() = default;
};
class ListEcsSpecsResponseBodyEcsSpecs : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<long> CPU{};
  shared_ptr<string> currency{};
  shared_ptr<long> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<long> instanceBandwidthRx{};
  shared_ptr<string> instanceType{};
  shared_ptr<bool> isAvailable{};
  shared_ptr<vector<ListEcsSpecsResponseBodyEcsSpecsLabels>> labels{};
  shared_ptr<double> memory{};
  shared_ptr<double> price{};
  shared_ptr<long> systemDiskCapacity{};

  ListEcsSpecsResponseBodyEcsSpecs() {}

  explicit ListEcsSpecsResponseBodyEcsSpecs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (instanceBandwidthRx) {
      res["InstanceBandwidthRx"] = boost::any(*instanceBandwidthRx);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (isAvailable) {
      res["IsAvailable"] = boost::any(*isAvailable);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (systemDiskCapacity) {
      res["SystemDiskCapacity"] = boost::any(*systemDiskCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<long>(boost::any_cast<long>(m["CPU"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<long>(boost::any_cast<long>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("InstanceBandwidthRx") != m.end() && !m["InstanceBandwidthRx"].empty()) {
      instanceBandwidthRx = make_shared<long>(boost::any_cast<long>(m["InstanceBandwidthRx"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("IsAvailable") != m.end() && !m["IsAvailable"].empty()) {
      isAvailable = make_shared<bool>(boost::any_cast<bool>(m["IsAvailable"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ListEcsSpecsResponseBodyEcsSpecsLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEcsSpecsResponseBodyEcsSpecsLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ListEcsSpecsResponseBodyEcsSpecsLabels>>(expect1);
      }
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["Price"]));
    }
    if (m.find("SystemDiskCapacity") != m.end() && !m["SystemDiskCapacity"].empty()) {
      systemDiskCapacity = make_shared<long>(boost::any_cast<long>(m["SystemDiskCapacity"]));
    }
  }


  virtual ~ListEcsSpecsResponseBodyEcsSpecs() = default;
};
class ListEcsSpecsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListEcsSpecsResponseBodyEcsSpecs>> ecsSpecs{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListEcsSpecsResponseBody() {}

  explicit ListEcsSpecsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (ecsSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*ecsSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsSpecs"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EcsSpecs") != m.end() && !m["EcsSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsSpecs"].type()) {
        vector<ListEcsSpecsResponseBodyEcsSpecs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEcsSpecsResponseBodyEcsSpecs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsSpecs = make_shared<vector<ListEcsSpecsResponseBodyEcsSpecs>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListEcsSpecsResponseBody() = default;
};
class ListEcsSpecsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEcsSpecsResponseBody> body{};

  ListEcsSpecsResponse() {}

  explicit ListEcsSpecsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEcsSpecsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEcsSpecsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEcsSpecsResponse() = default;
};
class ListInstanceSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};

  ListInstanceSnapshotRequest() {}

  explicit ListInstanceSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListInstanceSnapshotRequest() = default;
};
class ListInstanceSnapshotResponseBodySnapshotsLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListInstanceSnapshotResponseBodySnapshotsLabels() {}

  explicit ListInstanceSnapshotResponseBodySnapshotsLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInstanceSnapshotResponseBodySnapshotsLabels() = default;
};
class ListInstanceSnapshotResponseBodySnapshots : public Darabonba::Model {
public:
  shared_ptr<vector<string>> excludePaths{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<ListInstanceSnapshotResponseBodySnapshotsLabels>> labels{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> snapshotName{};
  shared_ptr<string> status{};

  ListInstanceSnapshotResponseBodySnapshots() {}

  explicit ListInstanceSnapshotResponseBodySnapshots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludePaths) {
      res["ExcludePaths"] = boost::any(*excludePaths);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludePaths") != m.end() && !m["ExcludePaths"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExcludePaths"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExcludePaths"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludePaths = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ListInstanceSnapshotResponseBodySnapshotsLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceSnapshotResponseBodySnapshotsLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ListInstanceSnapshotResponseBodySnapshotsLabels>>(expect1);
      }
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListInstanceSnapshotResponseBodySnapshots() = default;
};
class ListInstanceSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListInstanceSnapshotResponseBodySnapshots>> snapshots{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListInstanceSnapshotResponseBody() {}

  explicit ListInstanceSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      if (typeid(vector<boost::any>) == m["Snapshots"].type()) {
        vector<ListInstanceSnapshotResponseBodySnapshots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Snapshots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceSnapshotResponseBodySnapshots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        snapshots = make_shared<vector<ListInstanceSnapshotResponseBodySnapshots>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListInstanceSnapshotResponseBody() = default;
};
class ListInstanceSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceSnapshotResponseBody> body{};

  ListInstanceSnapshotResponse() {}

  explicit ListInstanceSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceSnapshotResponse() = default;
};
class ListInstanceStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceIds{};

  ListInstanceStatisticsRequest() {}

  explicit ListInstanceStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceIds) {
      res["WorkspaceIds"] = boost::any(*workspaceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkspaceIds") != m.end() && !m["WorkspaceIds"].empty()) {
      workspaceIds = make_shared<string>(boost::any_cast<string>(m["WorkspaceIds"]));
    }
  }


  virtual ~ListInstanceStatisticsRequest() = default;
};
class ListInstanceStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, map<string, boost::any>>> statistics{};
  shared_ptr<bool> success{};

  ListInstanceStatisticsResponseBody() {}

  explicit ListInstanceStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statistics) {
      res["Statistics"] = boost::any(*statistics);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      map<string, map<string, boost::any>> map1 = boost::any_cast<map<string, map<string, boost::any>>>(m["Statistics"]);
      map<string, map<string, boost::any>> toMap1;
      for (auto item:map1) {
        map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item.second);
        map<string, boost::any> toMap2;
        for (auto item:map2) {
           toMap2[item.first] = item.second;
        }
         toMap1[item.first] = toMap2;
      }
      statistics = make_shared<map<string, map<string, boost::any>>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListInstanceStatisticsResponseBody() = default;
};
class ListInstanceStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceStatisticsResponseBody> body{};

  ListInstanceStatisticsResponse() {}

  explicit ListInstanceStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceStatisticsResponse() = default;
};
class ListInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListInstancesRequestTag() {}

  explicit ListInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInstancesRequestTag() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<string> accessibility{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> gpuType{};
  shared_ptr<string> imageName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<map<string, boost::any>> labels{};
  shared_ptr<string> maxCpu{};
  shared_ptr<string> maxGpu{};
  shared_ptr<string> maxGpuMemory{};
  shared_ptr<string> maxMemory{};
  shared_ptr<string> minCpu{};
  shared_ptr<string> minGpu{};
  shared_ptr<string> minGpuMemory{};
  shared_ptr<string> minMemory{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListInstancesRequestTag>> tag{};
  shared_ptr<string> workspaceId{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (gpuType) {
      res["GpuType"] = boost::any(*gpuType);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (maxCpu) {
      res["MaxCpu"] = boost::any(*maxCpu);
    }
    if (maxGpu) {
      res["MaxGpu"] = boost::any(*maxGpu);
    }
    if (maxGpuMemory) {
      res["MaxGpuMemory"] = boost::any(*maxGpuMemory);
    }
    if (maxMemory) {
      res["MaxMemory"] = boost::any(*maxMemory);
    }
    if (minCpu) {
      res["MinCpu"] = boost::any(*minCpu);
    }
    if (minGpu) {
      res["MinGpu"] = boost::any(*minGpu);
    }
    if (minGpuMemory) {
      res["MinGpuMemory"] = boost::any(*minGpuMemory);
    }
    if (minMemory) {
      res["MinMemory"] = boost::any(*minMemory);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("GpuType") != m.end() && !m["GpuType"].empty()) {
      gpuType = make_shared<string>(boost::any_cast<string>(m["GpuType"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Labels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("MaxCpu") != m.end() && !m["MaxCpu"].empty()) {
      maxCpu = make_shared<string>(boost::any_cast<string>(m["MaxCpu"]));
    }
    if (m.find("MaxGpu") != m.end() && !m["MaxGpu"].empty()) {
      maxGpu = make_shared<string>(boost::any_cast<string>(m["MaxGpu"]));
    }
    if (m.find("MaxGpuMemory") != m.end() && !m["MaxGpuMemory"].empty()) {
      maxGpuMemory = make_shared<string>(boost::any_cast<string>(m["MaxGpuMemory"]));
    }
    if (m.find("MaxMemory") != m.end() && !m["MaxMemory"].empty()) {
      maxMemory = make_shared<string>(boost::any_cast<string>(m["MaxMemory"]));
    }
    if (m.find("MinCpu") != m.end() && !m["MinCpu"].empty()) {
      minCpu = make_shared<string>(boost::any_cast<string>(m["MinCpu"]));
    }
    if (m.find("MinGpu") != m.end() && !m["MinGpu"].empty()) {
      minGpu = make_shared<string>(boost::any_cast<string>(m["MinGpu"]));
    }
    if (m.find("MinGpuMemory") != m.end() && !m["MinGpuMemory"].empty()) {
      minGpuMemory = make_shared<string>(boost::any_cast<string>(m["MinGpuMemory"]));
    }
    if (m.find("MinMemory") != m.end() && !m["MinMemory"].empty()) {
      minMemory = make_shared<string>(boost::any_cast<string>(m["MinMemory"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListInstancesRequestTag>>(expect1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<string> accessibility{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> gpuType{};
  shared_ptr<string> imageName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> labelsShrink{};
  shared_ptr<string> maxCpu{};
  shared_ptr<string> maxGpu{};
  shared_ptr<string> maxGpuMemory{};
  shared_ptr<string> maxMemory{};
  shared_ptr<string> minCpu{};
  shared_ptr<string> minGpu{};
  shared_ptr<string> minGpuMemory{};
  shared_ptr<string> minMemory{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> status{};
  shared_ptr<string> tagShrink{};
  shared_ptr<string> workspaceId{};

  ListInstancesShrinkRequest() {}

  explicit ListInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (gpuType) {
      res["GpuType"] = boost::any(*gpuType);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (labelsShrink) {
      res["Labels"] = boost::any(*labelsShrink);
    }
    if (maxCpu) {
      res["MaxCpu"] = boost::any(*maxCpu);
    }
    if (maxGpu) {
      res["MaxGpu"] = boost::any(*maxGpu);
    }
    if (maxGpuMemory) {
      res["MaxGpuMemory"] = boost::any(*maxGpuMemory);
    }
    if (maxMemory) {
      res["MaxMemory"] = boost::any(*maxMemory);
    }
    if (minCpu) {
      res["MinCpu"] = boost::any(*minCpu);
    }
    if (minGpu) {
      res["MinGpu"] = boost::any(*minGpu);
    }
    if (minGpuMemory) {
      res["MinGpuMemory"] = boost::any(*minGpuMemory);
    }
    if (minMemory) {
      res["MinMemory"] = boost::any(*minMemory);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagShrink) {
      res["Tag"] = boost::any(*tagShrink);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("GpuType") != m.end() && !m["GpuType"].empty()) {
      gpuType = make_shared<string>(boost::any_cast<string>(m["GpuType"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labelsShrink = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("MaxCpu") != m.end() && !m["MaxCpu"].empty()) {
      maxCpu = make_shared<string>(boost::any_cast<string>(m["MaxCpu"]));
    }
    if (m.find("MaxGpu") != m.end() && !m["MaxGpu"].empty()) {
      maxGpu = make_shared<string>(boost::any_cast<string>(m["MaxGpu"]));
    }
    if (m.find("MaxGpuMemory") != m.end() && !m["MaxGpuMemory"].empty()) {
      maxGpuMemory = make_shared<string>(boost::any_cast<string>(m["MaxGpuMemory"]));
    }
    if (m.find("MaxMemory") != m.end() && !m["MaxMemory"].empty()) {
      maxMemory = make_shared<string>(boost::any_cast<string>(m["MaxMemory"]));
    }
    if (m.find("MinCpu") != m.end() && !m["MinCpu"].empty()) {
      minCpu = make_shared<string>(boost::any_cast<string>(m["MinCpu"]));
    }
    if (m.find("MinGpu") != m.end() && !m["MinGpu"].empty()) {
      minGpu = make_shared<string>(boost::any_cast<string>(m["MinGpu"]));
    }
    if (m.find("MinGpuMemory") != m.end() && !m["MinGpuMemory"].empty()) {
      minGpuMemory = make_shared<string>(boost::any_cast<string>(m["MinGpuMemory"]));
    }
    if (m.find("MinMemory") != m.end() && !m["MinMemory"].empty()) {
      minMemory = make_shared<string>(boost::any_cast<string>(m["MinMemory"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListInstancesShrinkRequest() = default;
};
class ListInstancesResponseBodyInstancesAffinityCPU : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};

  ListInstancesResponseBodyInstancesAffinityCPU() {}

  explicit ListInstancesResponseBodyInstancesAffinityCPU(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesAffinityCPU() = default;
};
class ListInstancesResponseBodyInstancesAffinity : public Darabonba::Model {
public:
  shared_ptr<ListInstancesResponseBodyInstancesAffinityCPU> CPU{};

  ListInstancesResponseBodyInstancesAffinity() {}

  explicit ListInstancesResponseBodyInstancesAffinity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = CPU ? boost::any(CPU->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      if (typeid(map<string, boost::any>) == m["CPU"].type()) {
        ListInstancesResponseBodyInstancesAffinityCPU model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CPU"]));
        CPU = make_shared<ListInstancesResponseBodyInstancesAffinityCPU>(model1);
      }
    }
  }


  virtual ~ListInstancesResponseBodyInstancesAffinity() = default;
};
class ListInstancesResponseBodyInstancesCloudDisks : public Darabonba::Model {
public:
  shared_ptr<string> capacity{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> path{};
  shared_ptr<string> subType{};

  ListInstancesResponseBodyInstancesCloudDisks() {}

  explicit ListInstancesResponseBodyInstancesCloudDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<string>(boost::any_cast<string>(m["Capacity"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesCloudDisks() = default;
};
class ListInstancesResponseBodyInstancesDatasets : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> mountAccess{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> optionType{};
  shared_ptr<string> options{};
  shared_ptr<string> uri{};

  ListInstancesResponseBodyInstancesDatasets() {}

  explicit ListInstancesResponseBodyInstancesDatasets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (mountAccess) {
      res["MountAccess"] = boost::any(*mountAccess);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (optionType) {
      res["OptionType"] = boost::any(*optionType);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("MountAccess") != m.end() && !m["MountAccess"].empty()) {
      mountAccess = make_shared<string>(boost::any_cast<string>(m["MountAccess"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("OptionType") != m.end() && !m["OptionType"].empty()) {
      optionType = make_shared<string>(boost::any_cast<string>(m["OptionType"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesDatasets() = default;
};
class ListInstancesResponseBodyInstancesIdleInstanceCuller : public Darabonba::Model {
public:
  shared_ptr<long> cpuPercentThreshold{};
  shared_ptr<long> gpuPercentThreshold{};
  shared_ptr<long> idleTimeInMinutes{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxIdleTimeInMinutes{};

  ListInstancesResponseBodyInstancesIdleInstanceCuller() {}

  explicit ListInstancesResponseBodyInstancesIdleInstanceCuller(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuPercentThreshold) {
      res["CpuPercentThreshold"] = boost::any(*cpuPercentThreshold);
    }
    if (gpuPercentThreshold) {
      res["GpuPercentThreshold"] = boost::any(*gpuPercentThreshold);
    }
    if (idleTimeInMinutes) {
      res["IdleTimeInMinutes"] = boost::any(*idleTimeInMinutes);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxIdleTimeInMinutes) {
      res["MaxIdleTimeInMinutes"] = boost::any(*maxIdleTimeInMinutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuPercentThreshold") != m.end() && !m["CpuPercentThreshold"].empty()) {
      cpuPercentThreshold = make_shared<long>(boost::any_cast<long>(m["CpuPercentThreshold"]));
    }
    if (m.find("GpuPercentThreshold") != m.end() && !m["GpuPercentThreshold"].empty()) {
      gpuPercentThreshold = make_shared<long>(boost::any_cast<long>(m["GpuPercentThreshold"]));
    }
    if (m.find("IdleTimeInMinutes") != m.end() && !m["IdleTimeInMinutes"].empty()) {
      idleTimeInMinutes = make_shared<long>(boost::any_cast<long>(m["IdleTimeInMinutes"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxIdleTimeInMinutes") != m.end() && !m["MaxIdleTimeInMinutes"].empty()) {
      maxIdleTimeInMinutes = make_shared<long>(boost::any_cast<long>(m["MaxIdleTimeInMinutes"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesIdleInstanceCuller() = default;
};
class ListInstancesResponseBodyInstancesInstanceShutdownTimer : public Darabonba::Model {
public:
  shared_ptr<string> dueTime{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> remainingTimeInMs{};

  ListInstancesResponseBodyInstancesInstanceShutdownTimer() {}

  explicit ListInstancesResponseBodyInstancesInstanceShutdownTimer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dueTime) {
      res["DueTime"] = boost::any(*dueTime);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (remainingTimeInMs) {
      res["RemainingTimeInMs"] = boost::any(*remainingTimeInMs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DueTime") != m.end() && !m["DueTime"].empty()) {
      dueTime = make_shared<string>(boost::any_cast<string>(m["DueTime"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RemainingTimeInMs") != m.end() && !m["RemainingTimeInMs"].empty()) {
      remainingTimeInMs = make_shared<long>(boost::any_cast<long>(m["RemainingTimeInMs"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesInstanceShutdownTimer() = default;
};
class ListInstancesResponseBodyInstancesInstanceSnapshotList : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> repositoryUrl{};
  shared_ptr<string> status{};

  ListInstancesResponseBodyInstancesInstanceSnapshotList() {}

  explicit ListInstancesResponseBodyInstancesInstanceSnapshotList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (repositoryUrl) {
      res["RepositoryUrl"] = boost::any(*repositoryUrl);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RepositoryUrl") != m.end() && !m["RepositoryUrl"].empty()) {
      repositoryUrl = make_shared<string>(boost::any_cast<string>(m["RepositoryUrl"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesInstanceSnapshotList() = default;
};
class ListInstancesResponseBodyInstancesLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListInstancesResponseBodyInstancesLabels() {}

  explicit ListInstancesResponseBodyInstancesLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInstancesResponseBodyInstancesLabels() = default;
};
class ListInstancesResponseBodyInstancesLatestSnapshot : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> repositoryUrl{};
  shared_ptr<string> status{};

  ListInstancesResponseBodyInstancesLatestSnapshot() {}

  explicit ListInstancesResponseBodyInstancesLatestSnapshot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (repositoryUrl) {
      res["RepositoryUrl"] = boost::any(*repositoryUrl);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RepositoryUrl") != m.end() && !m["RepositoryUrl"].empty()) {
      repositoryUrl = make_shared<string>(boost::any_cast<string>(m["RepositoryUrl"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesLatestSnapshot() = default;
};
class ListInstancesResponseBodyInstancesRequestedResource : public Darabonba::Model {
public:
  shared_ptr<string> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> memory{};
  shared_ptr<string> sharedMemory{};

  ListInstancesResponseBodyInstancesRequestedResource() {}

  explicit ListInstancesResponseBodyInstancesRequestedResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (sharedMemory) {
      res["SharedMemory"] = boost::any(*sharedMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("SharedMemory") != m.end() && !m["SharedMemory"].empty()) {
      sharedMemory = make_shared<string>(boost::any_cast<string>(m["SharedMemory"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesRequestedResource() = default;
};
class ListInstancesResponseBodyInstancesTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListInstancesResponseBodyInstancesTags() {}

  explicit ListInstancesResponseBodyInstancesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInstancesResponseBodyInstancesTags() = default;
};
class ListInstancesResponseBodyInstancesUserVpc : public Darabonba::Model {
public:
  shared_ptr<string> defaultRoute{};
  shared_ptr<vector<string>> extendedCIDRs{};
  shared_ptr<vector<ForwardInfoResponse>> forwardInfos{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  ListInstancesResponseBodyInstancesUserVpc() {}

  explicit ListInstancesResponseBodyInstancesUserVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultRoute) {
      res["DefaultRoute"] = boost::any(*defaultRoute);
    }
    if (extendedCIDRs) {
      res["ExtendedCIDRs"] = boost::any(*extendedCIDRs);
    }
    if (forwardInfos) {
      vector<boost::any> temp1;
      for(auto item1:*forwardInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ForwardInfos"] = boost::any(temp1);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultRoute") != m.end() && !m["DefaultRoute"].empty()) {
      defaultRoute = make_shared<string>(boost::any_cast<string>(m["DefaultRoute"]));
    }
    if (m.find("ExtendedCIDRs") != m.end() && !m["ExtendedCIDRs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExtendedCIDRs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExtendedCIDRs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      extendedCIDRs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ForwardInfos") != m.end() && !m["ForwardInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ForwardInfos"].type()) {
        vector<ForwardInfoResponse> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ForwardInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ForwardInfoResponse model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        forwardInfos = make_shared<vector<ForwardInfoResponse>>(expect1);
      }
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesUserVpc() = default;
};
class ListInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<string> accessibility{};
  shared_ptr<long> accumulatedRunningTimeInMs{};
  shared_ptr<ListInstancesResponseBodyInstancesAffinity> affinity{};
  shared_ptr<vector<ListInstancesResponseBodyInstancesCloudDisks>> cloudDisks{};
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<vector<ListInstancesResponseBodyInstancesDatasets>> datasets{};
  shared_ptr<string> driver{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<map<string, string>> environmentVariables{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<ListInstancesResponseBodyInstancesIdleInstanceCuller> idleInstanceCuller{};
  shared_ptr<string> imageAuth{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<ListInstancesResponseBodyInstancesInstanceShutdownTimer> instanceShutdownTimer{};
  shared_ptr<vector<ListInstancesResponseBodyInstancesInstanceSnapshotList>> instanceSnapshotList{};
  shared_ptr<string> instanceUrl{};
  shared_ptr<string> jupyterlabUrl{};
  shared_ptr<vector<ListInstancesResponseBodyInstancesLabels>> labels{};
  shared_ptr<ListInstancesResponseBodyInstancesLatestSnapshot> latestSnapshot{};
  shared_ptr<string> paymentType{};
  shared_ptr<long> priority{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<ListInstancesResponseBodyInstancesRequestedResource> requestedResource{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListInstancesResponseBodyInstancesTags>> tags{};
  shared_ptr<string> terminalUrl{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<ListInstancesResponseBodyInstancesUserVpc> userVpc{};
  shared_ptr<string> webIDEUrl{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};
  shared_ptr<string> workspaceSource{};

  ListInstancesResponseBodyInstances() {}

  explicit ListInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (accumulatedRunningTimeInMs) {
      res["AccumulatedRunningTimeInMs"] = boost::any(*accumulatedRunningTimeInMs);
    }
    if (affinity) {
      res["Affinity"] = affinity ? boost::any(affinity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cloudDisks) {
      vector<boost::any> temp1;
      for(auto item1:*cloudDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CloudDisks"] = boost::any(temp1);
    }
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (datasets) {
      vector<boost::any> temp1;
      for(auto item1:*datasets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Datasets"] = boost::any(temp1);
    }
    if (driver) {
      res["Driver"] = boost::any(*driver);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (environmentVariables) {
      res["EnvironmentVariables"] = boost::any(*environmentVariables);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (idleInstanceCuller) {
      res["IdleInstanceCuller"] = idleInstanceCuller ? boost::any(idleInstanceCuller->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageAuth) {
      res["ImageAuth"] = boost::any(*imageAuth);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceShutdownTimer) {
      res["InstanceShutdownTimer"] = instanceShutdownTimer ? boost::any(instanceShutdownTimer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceSnapshotList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceSnapshotList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceSnapshotList"] = boost::any(temp1);
    }
    if (instanceUrl) {
      res["InstanceUrl"] = boost::any(*instanceUrl);
    }
    if (jupyterlabUrl) {
      res["JupyterlabUrl"] = boost::any(*jupyterlabUrl);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestSnapshot) {
      res["LatestSnapshot"] = latestSnapshot ? boost::any(latestSnapshot->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (requestedResource) {
      res["RequestedResource"] = requestedResource ? boost::any(requestedResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
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
    if (terminalUrl) {
      res["TerminalUrl"] = boost::any(*terminalUrl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (webIDEUrl) {
      res["WebIDEUrl"] = boost::any(*webIDEUrl);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    if (workspaceSource) {
      res["WorkspaceSource"] = boost::any(*workspaceSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("AccumulatedRunningTimeInMs") != m.end() && !m["AccumulatedRunningTimeInMs"].empty()) {
      accumulatedRunningTimeInMs = make_shared<long>(boost::any_cast<long>(m["AccumulatedRunningTimeInMs"]));
    }
    if (m.find("Affinity") != m.end() && !m["Affinity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Affinity"].type()) {
        ListInstancesResponseBodyInstancesAffinity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Affinity"]));
        affinity = make_shared<ListInstancesResponseBodyInstancesAffinity>(model1);
      }
    }
    if (m.find("CloudDisks") != m.end() && !m["CloudDisks"].empty()) {
      if (typeid(vector<boost::any>) == m["CloudDisks"].type()) {
        vector<ListInstancesResponseBodyInstancesCloudDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CloudDisks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstancesCloudDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cloudDisks = make_shared<vector<ListInstancesResponseBodyInstancesCloudDisks>>(expect1);
      }
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("Datasets") != m.end() && !m["Datasets"].empty()) {
      if (typeid(vector<boost::any>) == m["Datasets"].type()) {
        vector<ListInstancesResponseBodyInstancesDatasets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Datasets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstancesDatasets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasets = make_shared<vector<ListInstancesResponseBodyInstancesDatasets>>(expect1);
      }
    }
    if (m.find("Driver") != m.end() && !m["Driver"].empty()) {
      driver = make_shared<string>(boost::any_cast<string>(m["Driver"]));
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
    }
    if (m.find("EnvironmentVariables") != m.end() && !m["EnvironmentVariables"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EnvironmentVariables"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("IdleInstanceCuller") != m.end() && !m["IdleInstanceCuller"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdleInstanceCuller"].type()) {
        ListInstancesResponseBodyInstancesIdleInstanceCuller model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdleInstanceCuller"]));
        idleInstanceCuller = make_shared<ListInstancesResponseBodyInstancesIdleInstanceCuller>(model1);
      }
    }
    if (m.find("ImageAuth") != m.end() && !m["ImageAuth"].empty()) {
      imageAuth = make_shared<string>(boost::any_cast<string>(m["ImageAuth"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceShutdownTimer") != m.end() && !m["InstanceShutdownTimer"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceShutdownTimer"].type()) {
        ListInstancesResponseBodyInstancesInstanceShutdownTimer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceShutdownTimer"]));
        instanceShutdownTimer = make_shared<ListInstancesResponseBodyInstancesInstanceShutdownTimer>(model1);
      }
    }
    if (m.find("InstanceSnapshotList") != m.end() && !m["InstanceSnapshotList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceSnapshotList"].type()) {
        vector<ListInstancesResponseBodyInstancesInstanceSnapshotList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceSnapshotList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstancesInstanceSnapshotList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceSnapshotList = make_shared<vector<ListInstancesResponseBodyInstancesInstanceSnapshotList>>(expect1);
      }
    }
    if (m.find("InstanceUrl") != m.end() && !m["InstanceUrl"].empty()) {
      instanceUrl = make_shared<string>(boost::any_cast<string>(m["InstanceUrl"]));
    }
    if (m.find("JupyterlabUrl") != m.end() && !m["JupyterlabUrl"].empty()) {
      jupyterlabUrl = make_shared<string>(boost::any_cast<string>(m["JupyterlabUrl"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ListInstancesResponseBodyInstancesLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstancesLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ListInstancesResponseBodyInstancesLabels>>(expect1);
      }
    }
    if (m.find("LatestSnapshot") != m.end() && !m["LatestSnapshot"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestSnapshot"].type()) {
        ListInstancesResponseBodyInstancesLatestSnapshot model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestSnapshot"]));
        latestSnapshot = make_shared<ListInstancesResponseBodyInstancesLatestSnapshot>(model1);
      }
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RequestedResource") != m.end() && !m["RequestedResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestedResource"].type()) {
        ListInstancesResponseBodyInstancesRequestedResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestedResource"]));
        requestedResource = make_shared<ListInstancesResponseBodyInstancesRequestedResource>(model1);
      }
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListInstancesResponseBodyInstancesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstancesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListInstancesResponseBodyInstancesTags>>(expect1);
      }
    }
    if (m.find("TerminalUrl") != m.end() && !m["TerminalUrl"].empty()) {
      terminalUrl = make_shared<string>(boost::any_cast<string>(m["TerminalUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        ListInstancesResponseBodyInstancesUserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<ListInstancesResponseBodyInstancesUserVpc>(model1);
      }
    }
    if (m.find("WebIDEUrl") != m.end() && !m["WebIDEUrl"].empty()) {
      webIDEUrl = make_shared<string>(boost::any_cast<string>(m["WebIDEUrl"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
    if (m.find("WorkspaceSource") != m.end() && !m["WorkspaceSource"].empty()) {
      workspaceSource = make_shared<string>(boost::any_cast<string>(m["WorkspaceSource"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstances() = default;
};
class ListInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<ListInstancesResponseBodyInstances>> instances{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListInstancesResponseBody() {}

  explicit ListInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<ListInstancesResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ListInstancesResponseBodyInstances>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListInstancesResponseBody() = default;
};
class ListInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancesResponseBody> body{};

  ListInstancesResponse() {}

  explicit ListInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class StartInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartInstanceResponseBody() {}

  explicit StartInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartInstanceResponseBody() = default;
};
class StartInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartInstanceResponseBody> body{};

  StartInstanceResponse() {}

  explicit StartInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StartInstanceResponse() = default;
};
class StopInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> saveImage{};

  StopInstanceRequest() {}

  explicit StopInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (saveImage) {
      res["SaveImage"] = boost::any(*saveImage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SaveImage") != m.end() && !m["SaveImage"].empty()) {
      saveImage = make_shared<bool>(boost::any_cast<bool>(m["SaveImage"]));
    }
  }


  virtual ~StopInstanceRequest() = default;
};
class StopInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopInstanceResponseBody() {}

  explicit StopInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StopInstanceResponseBody() = default;
};
class StopInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopInstanceResponseBody> body{};

  StopInstanceResponse() {}

  explicit StopInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StopInstanceResponse() = default;
};
class UpdateInstanceRequestAffinityCPU : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};

  UpdateInstanceRequestAffinityCPU() {}

  explicit UpdateInstanceRequestAffinityCPU(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
  }


  virtual ~UpdateInstanceRequestAffinityCPU() = default;
};
class UpdateInstanceRequestAffinity : public Darabonba::Model {
public:
  shared_ptr<UpdateInstanceRequestAffinityCPU> CPU{};

  UpdateInstanceRequestAffinity() {}

  explicit UpdateInstanceRequestAffinity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = CPU ? boost::any(CPU->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      if (typeid(map<string, boost::any>) == m["CPU"].type()) {
        UpdateInstanceRequestAffinityCPU model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CPU"]));
        CPU = make_shared<UpdateInstanceRequestAffinityCPU>(model1);
      }
    }
  }


  virtual ~UpdateInstanceRequestAffinity() = default;
};
class UpdateInstanceRequestCloudDisks : public Darabonba::Model {
public:
  shared_ptr<string> capacity{};
  shared_ptr<string> subType{};

  UpdateInstanceRequestCloudDisks() {}

  explicit UpdateInstanceRequestCloudDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<string>(boost::any_cast<string>(m["Capacity"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
  }


  virtual ~UpdateInstanceRequestCloudDisks() = default;
};
class UpdateInstanceRequestDatasets : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> mountAccess{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> optionType{};
  shared_ptr<string> options{};
  shared_ptr<string> uri{};

  UpdateInstanceRequestDatasets() {}

  explicit UpdateInstanceRequestDatasets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (mountAccess) {
      res["MountAccess"] = boost::any(*mountAccess);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (optionType) {
      res["OptionType"] = boost::any(*optionType);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("MountAccess") != m.end() && !m["MountAccess"].empty()) {
      mountAccess = make_shared<string>(boost::any_cast<string>(m["MountAccess"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("OptionType") != m.end() && !m["OptionType"].empty()) {
      optionType = make_shared<string>(boost::any_cast<string>(m["OptionType"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~UpdateInstanceRequestDatasets() = default;
};
class UpdateInstanceRequestRequestedResource : public Darabonba::Model {
public:
  shared_ptr<string> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> memory{};
  shared_ptr<string> sharedMemory{};

  UpdateInstanceRequestRequestedResource() {}

  explicit UpdateInstanceRequestRequestedResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (sharedMemory) {
      res["SharedMemory"] = boost::any(*sharedMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("SharedMemory") != m.end() && !m["SharedMemory"].empty()) {
      sharedMemory = make_shared<string>(boost::any_cast<string>(m["SharedMemory"]));
    }
  }


  virtual ~UpdateInstanceRequestRequestedResource() = default;
};
class UpdateInstanceRequestUserVpc : public Darabonba::Model {
public:
  shared_ptr<string> defaultRoute{};
  shared_ptr<vector<string>> extendedCIDRs{};
  shared_ptr<vector<ForwardInfo>> forwardInfos{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  UpdateInstanceRequestUserVpc() {}

  explicit UpdateInstanceRequestUserVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultRoute) {
      res["DefaultRoute"] = boost::any(*defaultRoute);
    }
    if (extendedCIDRs) {
      res["ExtendedCIDRs"] = boost::any(*extendedCIDRs);
    }
    if (forwardInfos) {
      vector<boost::any> temp1;
      for(auto item1:*forwardInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ForwardInfos"] = boost::any(temp1);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultRoute") != m.end() && !m["DefaultRoute"].empty()) {
      defaultRoute = make_shared<string>(boost::any_cast<string>(m["DefaultRoute"]));
    }
    if (m.find("ExtendedCIDRs") != m.end() && !m["ExtendedCIDRs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExtendedCIDRs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExtendedCIDRs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      extendedCIDRs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ForwardInfos") != m.end() && !m["ForwardInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ForwardInfos"].type()) {
        vector<ForwardInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ForwardInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ForwardInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        forwardInfos = make_shared<vector<ForwardInfo>>(expect1);
      }
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~UpdateInstanceRequestUserVpc() = default;
};
class UpdateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<UpdateInstanceRequestAffinity> affinity{};
  shared_ptr<vector<UpdateInstanceRequestCloudDisks>> cloudDisks{};
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<vector<UpdateInstanceRequestDatasets>> datasets{};
  shared_ptr<bool> disassociateCredential{};
  shared_ptr<bool> disassociateDatasets{};
  shared_ptr<bool> disassociateDriver{};
  shared_ptr<bool> disassociateForwardInfos{};
  shared_ptr<bool> disassociateVpc{};
  shared_ptr<string> driver{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<string> imageAuth{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> priority{};
  shared_ptr<UpdateInstanceRequestRequestedResource> requestedResource{};
  shared_ptr<string> userId{};
  shared_ptr<UpdateInstanceRequestUserVpc> userVpc{};
  shared_ptr<string> workspaceSource{};

  UpdateInstanceRequest() {}

  explicit UpdateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (affinity) {
      res["Affinity"] = affinity ? boost::any(affinity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cloudDisks) {
      vector<boost::any> temp1;
      for(auto item1:*cloudDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CloudDisks"] = boost::any(temp1);
    }
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (datasets) {
      vector<boost::any> temp1;
      for(auto item1:*datasets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Datasets"] = boost::any(temp1);
    }
    if (disassociateCredential) {
      res["DisassociateCredential"] = boost::any(*disassociateCredential);
    }
    if (disassociateDatasets) {
      res["DisassociateDatasets"] = boost::any(*disassociateDatasets);
    }
    if (disassociateDriver) {
      res["DisassociateDriver"] = boost::any(*disassociateDriver);
    }
    if (disassociateForwardInfos) {
      res["DisassociateForwardInfos"] = boost::any(*disassociateForwardInfos);
    }
    if (disassociateVpc) {
      res["DisassociateVpc"] = boost::any(*disassociateVpc);
    }
    if (driver) {
      res["Driver"] = boost::any(*driver);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (imageAuth) {
      res["ImageAuth"] = boost::any(*imageAuth);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (requestedResource) {
      res["RequestedResource"] = requestedResource ? boost::any(requestedResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceSource) {
      res["WorkspaceSource"] = boost::any(*workspaceSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Affinity") != m.end() && !m["Affinity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Affinity"].type()) {
        UpdateInstanceRequestAffinity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Affinity"]));
        affinity = make_shared<UpdateInstanceRequestAffinity>(model1);
      }
    }
    if (m.find("CloudDisks") != m.end() && !m["CloudDisks"].empty()) {
      if (typeid(vector<boost::any>) == m["CloudDisks"].type()) {
        vector<UpdateInstanceRequestCloudDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CloudDisks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateInstanceRequestCloudDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cloudDisks = make_shared<vector<UpdateInstanceRequestCloudDisks>>(expect1);
      }
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("Datasets") != m.end() && !m["Datasets"].empty()) {
      if (typeid(vector<boost::any>) == m["Datasets"].type()) {
        vector<UpdateInstanceRequestDatasets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Datasets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateInstanceRequestDatasets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasets = make_shared<vector<UpdateInstanceRequestDatasets>>(expect1);
      }
    }
    if (m.find("DisassociateCredential") != m.end() && !m["DisassociateCredential"].empty()) {
      disassociateCredential = make_shared<bool>(boost::any_cast<bool>(m["DisassociateCredential"]));
    }
    if (m.find("DisassociateDatasets") != m.end() && !m["DisassociateDatasets"].empty()) {
      disassociateDatasets = make_shared<bool>(boost::any_cast<bool>(m["DisassociateDatasets"]));
    }
    if (m.find("DisassociateDriver") != m.end() && !m["DisassociateDriver"].empty()) {
      disassociateDriver = make_shared<bool>(boost::any_cast<bool>(m["DisassociateDriver"]));
    }
    if (m.find("DisassociateForwardInfos") != m.end() && !m["DisassociateForwardInfos"].empty()) {
      disassociateForwardInfos = make_shared<bool>(boost::any_cast<bool>(m["DisassociateForwardInfos"]));
    }
    if (m.find("DisassociateVpc") != m.end() && !m["DisassociateVpc"].empty()) {
      disassociateVpc = make_shared<bool>(boost::any_cast<bool>(m["DisassociateVpc"]));
    }
    if (m.find("Driver") != m.end() && !m["Driver"].empty()) {
      driver = make_shared<string>(boost::any_cast<string>(m["Driver"]));
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
    }
    if (m.find("ImageAuth") != m.end() && !m["ImageAuth"].empty()) {
      imageAuth = make_shared<string>(boost::any_cast<string>(m["ImageAuth"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RequestedResource") != m.end() && !m["RequestedResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestedResource"].type()) {
        UpdateInstanceRequestRequestedResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestedResource"]));
        requestedResource = make_shared<UpdateInstanceRequestRequestedResource>(model1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        UpdateInstanceRequestUserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<UpdateInstanceRequestUserVpc>(model1);
      }
    }
    if (m.find("WorkspaceSource") != m.end() && !m["WorkspaceSource"].empty()) {
      workspaceSource = make_shared<string>(boost::any_cast<string>(m["WorkspaceSource"]));
    }
  }


  virtual ~UpdateInstanceRequest() = default;
};
class UpdateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateInstanceResponseBody() {}

  explicit UpdateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateInstanceResponseBody() = default;
};
class UpdateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceResponseBody> body{};

  UpdateInstanceResponse() {}

  explicit UpdateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceResponse() = default;
};
class UpdateInstanceLabelsRequestLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateInstanceLabelsRequestLabels() {}

  explicit UpdateInstanceLabelsRequestLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateInstanceLabelsRequestLabels() = default;
};
class UpdateInstanceLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateInstanceLabelsRequestLabels>> labels{};

  UpdateInstanceLabelsRequest() {}

  explicit UpdateInstanceLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<UpdateInstanceLabelsRequestLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateInstanceLabelsRequestLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<UpdateInstanceLabelsRequestLabels>>(expect1);
      }
    }
  }


  virtual ~UpdateInstanceLabelsRequest() = default;
};
class UpdateInstanceLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateInstanceLabelsResponseBody() {}

  explicit UpdateInstanceLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateInstanceLabelsResponseBody() = default;
};
class UpdateInstanceLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceLabelsResponseBody> body{};

  UpdateInstanceLabelsResponse() {}

  explicit UpdateInstanceLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceLabelsResponse() = default;
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
  CreateIdleInstanceCullerResponse createIdleInstanceCullerWithOptions(shared_ptr<string> InstanceId,
                                                                       shared_ptr<CreateIdleInstanceCullerRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIdleInstanceCullerResponse createIdleInstanceCuller(shared_ptr<string> InstanceId, shared_ptr<CreateIdleInstanceCullerRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  CreateInstanceShutdownTimerResponse createInstanceShutdownTimerWithOptions(shared_ptr<string> InstanceId,
                                                                             shared_ptr<CreateInstanceShutdownTimerRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceShutdownTimerResponse createInstanceShutdownTimer(shared_ptr<string> InstanceId, shared_ptr<CreateInstanceShutdownTimerRequest> request);
  CreateInstanceSnapshotResponse createInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                   shared_ptr<CreateInstanceSnapshotRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceSnapshotResponse createInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<CreateInstanceSnapshotRequest> request);
  DeleteIdleInstanceCullerResponse deleteIdleInstanceCullerWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIdleInstanceCullerResponse deleteIdleInstanceCuller(shared_ptr<string> InstanceId);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<string> InstanceId);
  DeleteInstanceLabelsResponse deleteInstanceLabelsWithOptions(shared_ptr<string> InstanceId,
                                                               shared_ptr<DeleteInstanceLabelsRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceLabelsResponse deleteInstanceLabels(shared_ptr<string> InstanceId, shared_ptr<DeleteInstanceLabelsRequest> request);
  DeleteInstanceShutdownTimerResponse deleteInstanceShutdownTimerWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceShutdownTimerResponse deleteInstanceShutdownTimer(shared_ptr<string> InstanceId);
  DeleteInstanceSnapshotResponse deleteInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                   shared_ptr<string> SnapshotId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceSnapshotResponse deleteInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<string> SnapshotId);
  GetIdleInstanceCullerResponse getIdleInstanceCullerWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIdleInstanceCullerResponse getIdleInstanceCuller(shared_ptr<string> InstanceId);
  GetInstanceResponse getInstanceWithOptions(shared_ptr<string> InstanceId,
                                             shared_ptr<GetInstanceRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResponse getInstance(shared_ptr<string> InstanceId, shared_ptr<GetInstanceRequest> request);
  GetInstanceEventsResponse getInstanceEventsWithOptions(shared_ptr<string> InstanceId,
                                                         shared_ptr<GetInstanceEventsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceEventsResponse getInstanceEvents(shared_ptr<string> InstanceId, shared_ptr<GetInstanceEventsRequest> request);
  GetInstanceMetricsResponse getInstanceMetricsWithOptions(shared_ptr<string> InstanceId,
                                                           shared_ptr<GetInstanceMetricsRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceMetricsResponse getInstanceMetrics(shared_ptr<string> InstanceId, shared_ptr<GetInstanceMetricsRequest> request);
  GetInstanceShutdownTimerResponse getInstanceShutdownTimerWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceShutdownTimerResponse getInstanceShutdownTimer(shared_ptr<string> InstanceId);
  GetInstanceSnapshotResponse getInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                             shared_ptr<string> SnapshotId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceSnapshotResponse getInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<string> SnapshotId);
  GetLifecycleResponse getLifecycleWithOptions(shared_ptr<string> InstanceId,
                                               shared_ptr<GetLifecycleRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLifecycleResponse getLifecycle(shared_ptr<string> InstanceId, shared_ptr<GetLifecycleRequest> request);
  GetMetricsResponse getMetricsWithOptions(shared_ptr<string> InstanceId,
                                           shared_ptr<GetMetricsRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMetricsResponse getMetrics(shared_ptr<string> InstanceId, shared_ptr<GetMetricsRequest> request);
  GetResourceGroupStatisticsResponse getResourceGroupStatisticsWithOptions(shared_ptr<GetResourceGroupStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceGroupStatisticsResponse getResourceGroupStatistics(shared_ptr<GetResourceGroupStatisticsRequest> request);
  GetTokenResponse getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTokenResponse getToken(shared_ptr<GetTokenRequest> request);
  GetUserConfigResponse getUserConfigWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserConfigResponse getUserConfig();
  ListEcsSpecsResponse listEcsSpecsWithOptions(shared_ptr<ListEcsSpecsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEcsSpecsResponse listEcsSpecs(shared_ptr<ListEcsSpecsRequest> request);
  ListInstanceSnapshotResponse listInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                               shared_ptr<ListInstanceSnapshotRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceSnapshotResponse listInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<ListInstanceSnapshotRequest> request);
  ListInstanceStatisticsResponse listInstanceStatisticsWithOptions(shared_ptr<ListInstanceStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceStatisticsResponse listInstanceStatistics(shared_ptr<ListInstanceStatisticsRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<ListInstancesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<ListInstancesRequest> request);
  StartInstanceResponse startInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartInstanceResponse startInstance(shared_ptr<string> InstanceId);
  StopInstanceResponse stopInstanceWithOptions(shared_ptr<string> InstanceId,
                                               shared_ptr<StopInstanceRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopInstanceResponse stopInstance(shared_ptr<string> InstanceId, shared_ptr<StopInstanceRequest> request);
  UpdateInstanceResponse updateInstanceWithOptions(shared_ptr<string> InstanceId,
                                                   shared_ptr<UpdateInstanceRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceResponse updateInstance(shared_ptr<string> InstanceId, shared_ptr<UpdateInstanceRequest> request);
  UpdateInstanceLabelsResponse updateInstanceLabelsWithOptions(shared_ptr<string> InstanceId,
                                                               shared_ptr<UpdateInstanceLabelsRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceLabelsResponse updateInstanceLabels(shared_ptr<string> InstanceId, shared_ptr<UpdateInstanceLabelsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Pai-dsw20220101

#endif
