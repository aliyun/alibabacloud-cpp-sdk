// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ECS-WORKBENCH20220220_H_
#define ALIBABACLOUD_ECS-WORKBENCH20220220_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ecs-workbench20220220 {
class LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> containerName{};
  shared_ptr<string> deployment{};
  shared_ptr<string> endpoint{};
  shared_ptr<map<string, boost::any>> headers{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> podName{};

  LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo() {}

  explicit LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (containerName) {
      res["ContainerName"] = boost::any(*containerName);
    }
    if (deployment) {
      res["Deployment"] = boost::any(*deployment);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (headers) {
      res["Headers"] = boost::any(*headers);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (podName) {
      res["PodName"] = boost::any(*podName);
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
    if (m.find("ContainerName") != m.end() && !m["ContainerName"].empty()) {
      containerName = make_shared<string>(boost::any_cast<string>(m["ContainerName"]));
    }
    if (m.find("Deployment") != m.end() && !m["Deployment"].empty()) {
      deployment = make_shared<string>(boost::any_cast<string>(m["Deployment"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("Headers") != m.end() && !m["Headers"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Headers"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("PodName") != m.end() && !m["PodName"].empty()) {
      podName = make_shared<string>(boost::any_cast<string>(m["PodName"]));
    }
  }


  virtual ~LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo() = default;
};
class LoginInstanceRequestInstanceLoginInfoOptions : public Darabonba::Model {
public:
  shared_ptr<long> audioMuteSeconds{};
  shared_ptr<LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo> containerInfo{};
  shared_ptr<long> fixedHeight{};
  shared_ptr<long> fixedWidth{};
  shared_ptr<string> notificationEventTypes{};
  shared_ptr<string> notificationRecipientUrl{};
  shared_ptr<long> notificationRetryIntervalSeconds{};
  shared_ptr<long> notificationRetryLimit{};
  shared_ptr<long> operationDisableSeconds{};
  shared_ptr<string> sessionControl{};
  shared_ptr<long> videoFreezeSeconds{};

  LoginInstanceRequestInstanceLoginInfoOptions() {}

  explicit LoginInstanceRequestInstanceLoginInfoOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioMuteSeconds) {
      res["AudioMuteSeconds"] = boost::any(*audioMuteSeconds);
    }
    if (containerInfo) {
      res["ContainerInfo"] = containerInfo ? boost::any(containerInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fixedHeight) {
      res["FixedHeight"] = boost::any(*fixedHeight);
    }
    if (fixedWidth) {
      res["FixedWidth"] = boost::any(*fixedWidth);
    }
    if (notificationEventTypes) {
      res["NotificationEventTypes"] = boost::any(*notificationEventTypes);
    }
    if (notificationRecipientUrl) {
      res["NotificationRecipientUrl"] = boost::any(*notificationRecipientUrl);
    }
    if (notificationRetryIntervalSeconds) {
      res["NotificationRetryIntervalSeconds"] = boost::any(*notificationRetryIntervalSeconds);
    }
    if (notificationRetryLimit) {
      res["NotificationRetryLimit"] = boost::any(*notificationRetryLimit);
    }
    if (operationDisableSeconds) {
      res["OperationDisableSeconds"] = boost::any(*operationDisableSeconds);
    }
    if (sessionControl) {
      res["SessionControl"] = boost::any(*sessionControl);
    }
    if (videoFreezeSeconds) {
      res["VideoFreezeSeconds"] = boost::any(*videoFreezeSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioMuteSeconds") != m.end() && !m["AudioMuteSeconds"].empty()) {
      audioMuteSeconds = make_shared<long>(boost::any_cast<long>(m["AudioMuteSeconds"]));
    }
    if (m.find("ContainerInfo") != m.end() && !m["ContainerInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ContainerInfo"].type()) {
        LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ContainerInfo"]));
        containerInfo = make_shared<LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo>(model1);
      }
    }
    if (m.find("FixedHeight") != m.end() && !m["FixedHeight"].empty()) {
      fixedHeight = make_shared<long>(boost::any_cast<long>(m["FixedHeight"]));
    }
    if (m.find("FixedWidth") != m.end() && !m["FixedWidth"].empty()) {
      fixedWidth = make_shared<long>(boost::any_cast<long>(m["FixedWidth"]));
    }
    if (m.find("NotificationEventTypes") != m.end() && !m["NotificationEventTypes"].empty()) {
      notificationEventTypes = make_shared<string>(boost::any_cast<string>(m["NotificationEventTypes"]));
    }
    if (m.find("NotificationRecipientUrl") != m.end() && !m["NotificationRecipientUrl"].empty()) {
      notificationRecipientUrl = make_shared<string>(boost::any_cast<string>(m["NotificationRecipientUrl"]));
    }
    if (m.find("NotificationRetryIntervalSeconds") != m.end() && !m["NotificationRetryIntervalSeconds"].empty()) {
      notificationRetryIntervalSeconds = make_shared<long>(boost::any_cast<long>(m["NotificationRetryIntervalSeconds"]));
    }
    if (m.find("NotificationRetryLimit") != m.end() && !m["NotificationRetryLimit"].empty()) {
      notificationRetryLimit = make_shared<long>(boost::any_cast<long>(m["NotificationRetryLimit"]));
    }
    if (m.find("OperationDisableSeconds") != m.end() && !m["OperationDisableSeconds"].empty()) {
      operationDisableSeconds = make_shared<long>(boost::any_cast<long>(m["OperationDisableSeconds"]));
    }
    if (m.find("SessionControl") != m.end() && !m["SessionControl"].empty()) {
      sessionControl = make_shared<string>(boost::any_cast<string>(m["SessionControl"]));
    }
    if (m.find("VideoFreezeSeconds") != m.end() && !m["VideoFreezeSeconds"].empty()) {
      videoFreezeSeconds = make_shared<long>(boost::any_cast<long>(m["VideoFreezeSeconds"]));
    }
  }


  virtual ~LoginInstanceRequestInstanceLoginInfoOptions() = default;
};
class LoginInstanceRequestInstanceLoginInfo : public Darabonba::Model {
public:
  shared_ptr<string> authenticationType{};
  shared_ptr<string> certificate{};
  shared_ptr<string> credentialToken{};
  shared_ptr<string> dockerContainerName{};
  shared_ptr<string> dockerExec{};
  shared_ptr<long> durationSeconds{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> host{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<bool> loginByInstanceCredential{};
  shared_ptr<bool> loginByInstanceShortcut{};
  shared_ptr<string> networkAccessMode{};
  shared_ptr<LoginInstanceRequestInstanceLoginInfoOptions> options{};
  shared_ptr<string> passPhrase{};
  shared_ptr<string> password{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shortcutToken{};
  shared_ptr<string> username{};
  shared_ptr<string> vpcId{};

  LoginInstanceRequestInstanceLoginInfo() {}

  explicit LoginInstanceRequestInstanceLoginInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationType) {
      res["AuthenticationType"] = boost::any(*authenticationType);
    }
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (credentialToken) {
      res["CredentialToken"] = boost::any(*credentialToken);
    }
    if (dockerContainerName) {
      res["DockerContainerName"] = boost::any(*dockerContainerName);
    }
    if (dockerExec) {
      res["DockerExec"] = boost::any(*dockerExec);
    }
    if (durationSeconds) {
      res["DurationSeconds"] = boost::any(*durationSeconds);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (loginByInstanceCredential) {
      res["LoginByInstanceCredential"] = boost::any(*loginByInstanceCredential);
    }
    if (loginByInstanceShortcut) {
      res["LoginByInstanceShortcut"] = boost::any(*loginByInstanceShortcut);
    }
    if (networkAccessMode) {
      res["NetworkAccessMode"] = boost::any(*networkAccessMode);
    }
    if (options) {
      res["Options"] = options ? boost::any(options->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (passPhrase) {
      res["PassPhrase"] = boost::any(*passPhrase);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shortcutToken) {
      res["ShortcutToken"] = boost::any(*shortcutToken);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthenticationType") != m.end() && !m["AuthenticationType"].empty()) {
      authenticationType = make_shared<string>(boost::any_cast<string>(m["AuthenticationType"]));
    }
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("CredentialToken") != m.end() && !m["CredentialToken"].empty()) {
      credentialToken = make_shared<string>(boost::any_cast<string>(m["CredentialToken"]));
    }
    if (m.find("DockerContainerName") != m.end() && !m["DockerContainerName"].empty()) {
      dockerContainerName = make_shared<string>(boost::any_cast<string>(m["DockerContainerName"]));
    }
    if (m.find("DockerExec") != m.end() && !m["DockerExec"].empty()) {
      dockerExec = make_shared<string>(boost::any_cast<string>(m["DockerExec"]));
    }
    if (m.find("DurationSeconds") != m.end() && !m["DurationSeconds"].empty()) {
      durationSeconds = make_shared<long>(boost::any_cast<long>(m["DurationSeconds"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("LoginByInstanceCredential") != m.end() && !m["LoginByInstanceCredential"].empty()) {
      loginByInstanceCredential = make_shared<bool>(boost::any_cast<bool>(m["LoginByInstanceCredential"]));
    }
    if (m.find("LoginByInstanceShortcut") != m.end() && !m["LoginByInstanceShortcut"].empty()) {
      loginByInstanceShortcut = make_shared<bool>(boost::any_cast<bool>(m["LoginByInstanceShortcut"]));
    }
    if (m.find("NetworkAccessMode") != m.end() && !m["NetworkAccessMode"].empty()) {
      networkAccessMode = make_shared<string>(boost::any_cast<string>(m["NetworkAccessMode"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      if (typeid(map<string, boost::any>) == m["Options"].type()) {
        LoginInstanceRequestInstanceLoginInfoOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Options"]));
        options = make_shared<LoginInstanceRequestInstanceLoginInfoOptions>(model1);
      }
    }
    if (m.find("PassPhrase") != m.end() && !m["PassPhrase"].empty()) {
      passPhrase = make_shared<string>(boost::any_cast<string>(m["PassPhrase"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShortcutToken") != m.end() && !m["ShortcutToken"].empty()) {
      shortcutToken = make_shared<string>(boost::any_cast<string>(m["ShortcutToken"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~LoginInstanceRequestInstanceLoginInfo() = default;
};
class LoginInstanceRequestPartnerInfo : public Darabonba::Model {
public:
  shared_ptr<string> partnerId{};
  shared_ptr<string> partnerName{};

  LoginInstanceRequestPartnerInfo() {}

  explicit LoginInstanceRequestPartnerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (partnerId) {
      res["PartnerId"] = boost::any(*partnerId);
    }
    if (partnerName) {
      res["PartnerName"] = boost::any(*partnerName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PartnerId") != m.end() && !m["PartnerId"].empty()) {
      partnerId = make_shared<string>(boost::any_cast<string>(m["PartnerId"]));
    }
    if (m.find("PartnerName") != m.end() && !m["PartnerName"].empty()) {
      partnerName = make_shared<string>(boost::any_cast<string>(m["PartnerName"]));
    }
  }


  virtual ~LoginInstanceRequestPartnerInfo() = default;
};
class LoginInstanceRequestUserAccountOptions : public Darabonba::Model {
public:
  shared_ptr<long> loginLimit{};

  LoginInstanceRequestUserAccountOptions() {}

  explicit LoginInstanceRequestUserAccountOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginLimit) {
      res["LoginLimit"] = boost::any(*loginLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginLimit") != m.end() && !m["LoginLimit"].empty()) {
      loginLimit = make_shared<long>(boost::any_cast<long>(m["LoginLimit"]));
    }
  }


  virtual ~LoginInstanceRequestUserAccountOptions() = default;
};
class LoginInstanceRequestUserAccount : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> accountPlatform{};
  shared_ptr<string> accountStructure{};
  shared_ptr<long> durationSeconds{};
  shared_ptr<string> empId{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> loginName{};
  shared_ptr<LoginInstanceRequestUserAccountOptions> options{};
  shared_ptr<long> parentId{};

  LoginInstanceRequestUserAccount() {}

  explicit LoginInstanceRequestUserAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountPlatform) {
      res["AccountPlatform"] = boost::any(*accountPlatform);
    }
    if (accountStructure) {
      res["AccountStructure"] = boost::any(*accountStructure);
    }
    if (durationSeconds) {
      res["DurationSeconds"] = boost::any(*durationSeconds);
    }
    if (empId) {
      res["EmpId"] = boost::any(*empId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (loginName) {
      res["LoginName"] = boost::any(*loginName);
    }
    if (options) {
      res["Options"] = options ? boost::any(options->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("AccountPlatform") != m.end() && !m["AccountPlatform"].empty()) {
      accountPlatform = make_shared<string>(boost::any_cast<string>(m["AccountPlatform"]));
    }
    if (m.find("AccountStructure") != m.end() && !m["AccountStructure"].empty()) {
      accountStructure = make_shared<string>(boost::any_cast<string>(m["AccountStructure"]));
    }
    if (m.find("DurationSeconds") != m.end() && !m["DurationSeconds"].empty()) {
      durationSeconds = make_shared<long>(boost::any_cast<long>(m["DurationSeconds"]));
    }
    if (m.find("EmpId") != m.end() && !m["EmpId"].empty()) {
      empId = make_shared<string>(boost::any_cast<string>(m["EmpId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("LoginName") != m.end() && !m["LoginName"].empty()) {
      loginName = make_shared<string>(boost::any_cast<string>(m["LoginName"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      if (typeid(map<string, boost::any>) == m["Options"].type()) {
        LoginInstanceRequestUserAccountOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Options"]));
        options = make_shared<LoginInstanceRequestUserAccountOptions>(model1);
      }
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<long>(boost::any_cast<long>(m["ParentId"]));
    }
  }


  virtual ~LoginInstanceRequestUserAccount() = default;
};
class LoginInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<LoginInstanceRequestInstanceLoginInfo> instanceLoginInfo{};
  shared_ptr<LoginInstanceRequestPartnerInfo> partnerInfo{};
  shared_ptr<LoginInstanceRequestUserAccount> userAccount{};

  LoginInstanceRequest() {}

  explicit LoginInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceLoginInfo) {
      res["InstanceLoginInfo"] = instanceLoginInfo ? boost::any(instanceLoginInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (partnerInfo) {
      res["PartnerInfo"] = partnerInfo ? boost::any(partnerInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userAccount) {
      res["UserAccount"] = userAccount ? boost::any(userAccount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceLoginInfo") != m.end() && !m["InstanceLoginInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceLoginInfo"].type()) {
        LoginInstanceRequestInstanceLoginInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceLoginInfo"]));
        instanceLoginInfo = make_shared<LoginInstanceRequestInstanceLoginInfo>(model1);
      }
    }
    if (m.find("PartnerInfo") != m.end() && !m["PartnerInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PartnerInfo"].type()) {
        LoginInstanceRequestPartnerInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PartnerInfo"]));
        partnerInfo = make_shared<LoginInstanceRequestPartnerInfo>(model1);
      }
    }
    if (m.find("UserAccount") != m.end() && !m["UserAccount"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserAccount"].type()) {
        LoginInstanceRequestUserAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserAccount"]));
        userAccount = make_shared<LoginInstanceRequestUserAccount>(model1);
      }
    }
  }


  virtual ~LoginInstanceRequest() = default;
};
class LoginInstanceResponseBodyRootDisposableAccount : public Darabonba::Model {
public:
  shared_ptr<string> loginFormActionUrl{};
  shared_ptr<string> loginUrl{};

  LoginInstanceResponseBodyRootDisposableAccount() {}

  explicit LoginInstanceResponseBodyRootDisposableAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginFormActionUrl) {
      res["LoginFormActionUrl"] = boost::any(*loginFormActionUrl);
    }
    if (loginUrl) {
      res["LoginUrl"] = boost::any(*loginUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginFormActionUrl") != m.end() && !m["LoginFormActionUrl"].empty()) {
      loginFormActionUrl = make_shared<string>(boost::any_cast<string>(m["LoginFormActionUrl"]));
    }
    if (m.find("LoginUrl") != m.end() && !m["LoginUrl"].empty()) {
      loginUrl = make_shared<string>(boost::any_cast<string>(m["LoginUrl"]));
    }
  }


  virtual ~LoginInstanceResponseBodyRootDisposableAccount() = default;
};
class LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView : public Darabonba::Model {
public:
  shared_ptr<string> defaultViewUrl{};

  LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView() {}

  explicit LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultViewUrl) {
      res["DefaultViewUrl"] = boost::any(*defaultViewUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultViewUrl") != m.end() && !m["DefaultViewUrl"].empty()) {
      defaultViewUrl = make_shared<string>(boost::any_cast<string>(m["DefaultViewUrl"]));
    }
  }


  virtual ~LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView() = default;
};
class LoginInstanceResponseBodyRootInstanceLoginInfoList : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceLoginToken{};
  shared_ptr<LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView> instanceLoginView{};
  shared_ptr<bool> loginSuccess{};

  LoginInstanceResponseBodyRootInstanceLoginInfoList() {}

  explicit LoginInstanceResponseBodyRootInstanceLoginInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceLoginToken) {
      res["InstanceLoginToken"] = boost::any(*instanceLoginToken);
    }
    if (instanceLoginView) {
      res["InstanceLoginView"] = instanceLoginView ? boost::any(instanceLoginView->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (loginSuccess) {
      res["LoginSuccess"] = boost::any(*loginSuccess);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceLoginToken") != m.end() && !m["InstanceLoginToken"].empty()) {
      instanceLoginToken = make_shared<string>(boost::any_cast<string>(m["InstanceLoginToken"]));
    }
    if (m.find("InstanceLoginView") != m.end() && !m["InstanceLoginView"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceLoginView"].type()) {
        LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceLoginView"]));
        instanceLoginView = make_shared<LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView>(model1);
      }
    }
    if (m.find("LoginSuccess") != m.end() && !m["LoginSuccess"].empty()) {
      loginSuccess = make_shared<bool>(boost::any_cast<bool>(m["LoginSuccess"]));
    }
  }


  virtual ~LoginInstanceResponseBodyRootInstanceLoginInfoList() = default;
};
class LoginInstanceResponseBodyRootSessionControl : public Darabonba::Model {
public:
  shared_ptr<string> baseUrl{};

  LoginInstanceResponseBodyRootSessionControl() {}

  explicit LoginInstanceResponseBodyRootSessionControl(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseUrl) {
      res["BaseUrl"] = boost::any(*baseUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseUrl") != m.end() && !m["BaseUrl"].empty()) {
      baseUrl = make_shared<string>(boost::any_cast<string>(m["BaseUrl"]));
    }
  }


  virtual ~LoginInstanceResponseBodyRootSessionControl() = default;
};
class LoginInstanceResponseBodyRoot : public Darabonba::Model {
public:
  shared_ptr<LoginInstanceResponseBodyRootDisposableAccount> disposableAccount{};
  shared_ptr<vector<LoginInstanceResponseBodyRootInstanceLoginInfoList>> instanceLoginInfoList{};
  shared_ptr<LoginInstanceResponseBodyRootSessionControl> sessionControl{};

  LoginInstanceResponseBodyRoot() {}

  explicit LoginInstanceResponseBodyRoot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disposableAccount) {
      res["DisposableAccount"] = disposableAccount ? boost::any(disposableAccount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceLoginInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceLoginInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceLoginInfoList"] = boost::any(temp1);
    }
    if (sessionControl) {
      res["SessionControl"] = sessionControl ? boost::any(sessionControl->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisposableAccount") != m.end() && !m["DisposableAccount"].empty()) {
      if (typeid(map<string, boost::any>) == m["DisposableAccount"].type()) {
        LoginInstanceResponseBodyRootDisposableAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DisposableAccount"]));
        disposableAccount = make_shared<LoginInstanceResponseBodyRootDisposableAccount>(model1);
      }
    }
    if (m.find("InstanceLoginInfoList") != m.end() && !m["InstanceLoginInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceLoginInfoList"].type()) {
        vector<LoginInstanceResponseBodyRootInstanceLoginInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceLoginInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LoginInstanceResponseBodyRootInstanceLoginInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceLoginInfoList = make_shared<vector<LoginInstanceResponseBodyRootInstanceLoginInfoList>>(expect1);
      }
    }
    if (m.find("SessionControl") != m.end() && !m["SessionControl"].empty()) {
      if (typeid(map<string, boost::any>) == m["SessionControl"].type()) {
        LoginInstanceResponseBodyRootSessionControl model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SessionControl"]));
        sessionControl = make_shared<LoginInstanceResponseBodyRootSessionControl>(model1);
      }
    }
  }


  virtual ~LoginInstanceResponseBodyRoot() = default;
};
class LoginInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<LoginInstanceResponseBodyRoot> root{};
  shared_ptr<string> success{};

  LoginInstanceResponseBody() {}

  explicit LoginInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (root) {
      res["Root"] = root ? boost::any(root->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Root") != m.end() && !m["Root"].empty()) {
      if (typeid(map<string, boost::any>) == m["Root"].type()) {
        LoginInstanceResponseBodyRoot model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Root"]));
        root = make_shared<LoginInstanceResponseBodyRoot>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~LoginInstanceResponseBody() = default;
};
class LoginInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LoginInstanceResponseBody> body{};

  LoginInstanceResponse() {}

  explicit LoginInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LoginInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LoginInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~LoginInstanceResponse() = default;
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
  LoginInstanceResponse loginInstanceWithOptions(shared_ptr<LoginInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LoginInstanceResponse loginInstance(shared_ptr<LoginInstanceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ecs-workbench20220220

#endif
