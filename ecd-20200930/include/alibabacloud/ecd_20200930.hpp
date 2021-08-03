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
class AddUserToDesktopGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopGroupId{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> endUserIds{};

  AddUserToDesktopGroupRequest() {}

  explicit AddUserToDesktopGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopGroupId) {
      res["DesktopGroupId"] = boost::any(*desktopGroupId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (endUserIds) {
      res["EndUserIds"] = boost::any(*endUserIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopGroupId") != m.end() && !m["DesktopGroupId"].empty()) {
      desktopGroupId = make_shared<string>(boost::any_cast<string>(m["DesktopGroupId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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
  }


  virtual ~AddUserToDesktopGroupRequest() = default;
};
class AddUserToDesktopGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddUserToDesktopGroupResponseBody() {}

  explicit AddUserToDesktopGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddUserToDesktopGroupResponseBody() = default;
};
class AddUserToDesktopGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddUserToDesktopGroupResponseBody> body{};

  AddUserToDesktopGroupResponse() {}

  explicit AddUserToDesktopGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUserToDesktopGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserToDesktopGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserToDesktopGroupResponse() = default;
};
class AddUserToSecurityCenterWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  AddUserToSecurityCenterWhiteListRequest() {}

  explicit AddUserToSecurityCenterWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddUserToSecurityCenterWhiteListRequest() = default;
};
class AddUserToSecurityCenterWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddUserToSecurityCenterWhiteListResponseBody() {}

  explicit AddUserToSecurityCenterWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddUserToSecurityCenterWhiteListResponseBody() = default;
};
class AddUserToSecurityCenterWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddUserToSecurityCenterWhiteListResponseBody> body{};

  AddUserToSecurityCenterWhiteListResponse() {}

  explicit AddUserToSecurityCenterWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUserToSecurityCenterWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserToSecurityCenterWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserToSecurityCenterWhiteListResponse() = default;
};
class AttachCenRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> cenId{};
  shared_ptr<string> officeSiteId{};

  AttachCenRequest() {}

  explicit AttachCenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
  }


  virtual ~AttachCenRequest() = default;
};
class AttachCenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachCenResponseBody() {}

  explicit AttachCenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachCenResponseBody() = default;
};
class AttachCenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachCenResponseBody> body{};

  AttachCenResponse() {}

  explicit AttachCenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachCenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachCenResponseBody>(model1);
      }
    }
  }


  virtual ~AttachCenResponse() = default;
};
class CheckUserInSecurityCenterWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  CheckUserInSecurityCenterWhiteListRequest() {}

  explicit CheckUserInSecurityCenterWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CheckUserInSecurityCenterWhiteListRequest() = default;
};
class CheckUserInSecurityCenterWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> inWhiteList{};
  shared_ptr<string> requestId{};

  CheckUserInSecurityCenterWhiteListResponseBody() {}

  explicit CheckUserInSecurityCenterWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inWhiteList) {
      res["InWhiteList"] = boost::any(*inWhiteList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InWhiteList") != m.end() && !m["InWhiteList"].empty()) {
      inWhiteList = make_shared<bool>(boost::any_cast<bool>(m["InWhiteList"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckUserInSecurityCenterWhiteListResponseBody() = default;
};
class CheckUserInSecurityCenterWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckUserInSecurityCenterWhiteListResponseBody> body{};

  CheckUserInSecurityCenterWhiteListResponse() {}

  explicit CheckUserInSecurityCenterWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckUserInSecurityCenterWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckUserInSecurityCenterWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~CheckUserInSecurityCenterWhiteListResponse() = default;
};
class ClonePolicyGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> name{};

  ClonePolicyGroupRequest() {}

  explicit ClonePolicyGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~ClonePolicyGroupRequest() = default;
};
class ClonePolicyGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> requestId{};

  ClonePolicyGroupResponseBody() {}

  explicit ClonePolicyGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ClonePolicyGroupResponseBody() = default;
};
class ClonePolicyGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ClonePolicyGroupResponseBody> body{};

  ClonePolicyGroupResponse() {}

  explicit ClonePolicyGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClonePolicyGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClonePolicyGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ClonePolicyGroupResponse() = default;
};
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
  shared_ptr<bool> mfaEnabled{};
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
    if (mfaEnabled) {
      res["MfaEnabled"] = boost::any(*mfaEnabled);
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
  shared_ptr<string> requestId{};
  shared_ptr<string> directoryId{};
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
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
class CreateADConnectorOfficeSiteRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> cenId{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainUserName{};
  shared_ptr<string> domainPassword{};
  shared_ptr<string> officeSiteName{};
  shared_ptr<bool> enableAdminAccess{};
  shared_ptr<string> desktopAccessType{};
  shared_ptr<bool> enableInternetAccess{};
  shared_ptr<string> subDomainName{};
  shared_ptr<bool> mfaEnabled{};
  shared_ptr<vector<string>> dnsAddress{};
  shared_ptr<vector<string>> subDomainDnsAddress{};

  CreateADConnectorOfficeSiteRequest() {}

  explicit CreateADConnectorOfficeSiteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
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
    if (officeSiteName) {
      res["OfficeSiteName"] = boost::any(*officeSiteName);
    }
    if (enableAdminAccess) {
      res["EnableAdminAccess"] = boost::any(*enableAdminAccess);
    }
    if (desktopAccessType) {
      res["DesktopAccessType"] = boost::any(*desktopAccessType);
    }
    if (enableInternetAccess) {
      res["EnableInternetAccess"] = boost::any(*enableInternetAccess);
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
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
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
    if (m.find("OfficeSiteName") != m.end() && !m["OfficeSiteName"].empty()) {
      officeSiteName = make_shared<string>(boost::any_cast<string>(m["OfficeSiteName"]));
    }
    if (m.find("EnableAdminAccess") != m.end() && !m["EnableAdminAccess"].empty()) {
      enableAdminAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableAdminAccess"]));
    }
    if (m.find("DesktopAccessType") != m.end() && !m["DesktopAccessType"].empty()) {
      desktopAccessType = make_shared<string>(boost::any_cast<string>(m["DesktopAccessType"]));
    }
    if (m.find("EnableInternetAccess") != m.end() && !m["EnableInternetAccess"].empty()) {
      enableInternetAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableInternetAccess"]));
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


  virtual ~CreateADConnectorOfficeSiteRequest() = default;
};
class CreateADConnectorOfficeSiteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> officeSiteId{};

  CreateADConnectorOfficeSiteResponseBody() {}

  explicit CreateADConnectorOfficeSiteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
  }


  virtual ~CreateADConnectorOfficeSiteResponseBody() = default;
};
class CreateADConnectorOfficeSiteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateADConnectorOfficeSiteResponseBody> body{};

  CreateADConnectorOfficeSiteResponse() {}

  explicit CreateADConnectorOfficeSiteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateADConnectorOfficeSiteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateADConnectorOfficeSiteResponseBody>(model1);
      }
    }
  }


  virtual ~CreateADConnectorOfficeSiteResponse() = default;
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
class CreateDesktopGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> bundleId{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> desktopGroupName{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> scaleStrategyId{};
  shared_ptr<string> vpcId{};
  shared_ptr<long> defaultInitDesktopCount{};
  shared_ptr<long> keepDuration{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<long> ownType{};
  shared_ptr<bool> autoPay{};
  shared_ptr<string> comments{};
  shared_ptr<long> minDesktopsCount{};
  shared_ptr<long> maxDesktopsCount{};
  shared_ptr<long> allowAutoSetup{};
  shared_ptr<long> allowBufferCount{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> endUserIds{};

  CreateDesktopGroupRequest() {}

  explicit CreateDesktopGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (desktopGroupName) {
      res["DesktopGroupName"] = boost::any(*desktopGroupName);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (scaleStrategyId) {
      res["ScaleStrategyId"] = boost::any(*scaleStrategyId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (defaultInitDesktopCount) {
      res["DefaultInitDesktopCount"] = boost::any(*defaultInitDesktopCount);
    }
    if (keepDuration) {
      res["KeepDuration"] = boost::any(*keepDuration);
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
    if (ownType) {
      res["OwnType"] = boost::any(*ownType);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (minDesktopsCount) {
      res["MinDesktopsCount"] = boost::any(*minDesktopsCount);
    }
    if (maxDesktopsCount) {
      res["MaxDesktopsCount"] = boost::any(*maxDesktopsCount);
    }
    if (allowAutoSetup) {
      res["AllowAutoSetup"] = boost::any(*allowAutoSetup);
    }
    if (allowBufferCount) {
      res["AllowBufferCount"] = boost::any(*allowBufferCount);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (endUserIds) {
      res["EndUserIds"] = boost::any(*endUserIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("DesktopGroupName") != m.end() && !m["DesktopGroupName"].empty()) {
      desktopGroupName = make_shared<string>(boost::any_cast<string>(m["DesktopGroupName"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("ScaleStrategyId") != m.end() && !m["ScaleStrategyId"].empty()) {
      scaleStrategyId = make_shared<string>(boost::any_cast<string>(m["ScaleStrategyId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("DefaultInitDesktopCount") != m.end() && !m["DefaultInitDesktopCount"].empty()) {
      defaultInitDesktopCount = make_shared<long>(boost::any_cast<long>(m["DefaultInitDesktopCount"]));
    }
    if (m.find("KeepDuration") != m.end() && !m["KeepDuration"].empty()) {
      keepDuration = make_shared<long>(boost::any_cast<long>(m["KeepDuration"]));
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
    if (m.find("OwnType") != m.end() && !m["OwnType"].empty()) {
      ownType = make_shared<long>(boost::any_cast<long>(m["OwnType"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("MinDesktopsCount") != m.end() && !m["MinDesktopsCount"].empty()) {
      minDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MinDesktopsCount"]));
    }
    if (m.find("MaxDesktopsCount") != m.end() && !m["MaxDesktopsCount"].empty()) {
      maxDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MaxDesktopsCount"]));
    }
    if (m.find("AllowAutoSetup") != m.end() && !m["AllowAutoSetup"].empty()) {
      allowAutoSetup = make_shared<long>(boost::any_cast<long>(m["AllowAutoSetup"]));
    }
    if (m.find("AllowBufferCount") != m.end() && !m["AllowBufferCount"].empty()) {
      allowBufferCount = make_shared<long>(boost::any_cast<long>(m["AllowBufferCount"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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
  }


  virtual ~CreateDesktopGroupRequest() = default;
};
class CreateDesktopGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> desktopGroupId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> orderIds{};

  CreateDesktopGroupResponseBody() {}

  explicit CreateDesktopGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desktopGroupId) {
      res["DesktopGroupId"] = boost::any(*desktopGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (orderIds) {
      res["OrderIds"] = boost::any(*orderIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DesktopGroupId") != m.end() && !m["DesktopGroupId"].empty()) {
      desktopGroupId = make_shared<string>(boost::any_cast<string>(m["DesktopGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderIds") != m.end() && !m["OrderIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      orderIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateDesktopGroupResponseBody() = default;
};
class CreateDesktopGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDesktopGroupResponseBody> body{};

  CreateDesktopGroupResponse() {}

  explicit CreateDesktopGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDesktopGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDesktopGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDesktopGroupResponse() = default;
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
  shared_ptr<string> desktopName{};
  shared_ptr<string> userName{};
  shared_ptr<string> vpcId{};
  shared_ptr<long> amount{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> promotionId{};
  shared_ptr<string> userAssignMode{};
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
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
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
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (userAssignMode) {
      res["UserAssignMode"] = boost::any(*userAssignMode);
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
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
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
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("UserAssignMode") != m.end() && !m["UserAssignMode"].empty()) {
      userAssignMode = make_shared<string>(boost::any_cast<string>(m["UserAssignMode"]));
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
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> desktopId{};

  CreateDesktopsResponseBody() {}

  explicit CreateDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
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
class CreateDesktopsLiteRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> bundleId{};
  shared_ptr<string> userAssignMode{};
  shared_ptr<long> amount{};
  shared_ptr<bool> enableInternetAccess{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> periodUnit{};
  shared_ptr<long> period{};
  shared_ptr<vector<string>> endUserId{};

  CreateDesktopsLiteRequest() {}

  explicit CreateDesktopsLiteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (userAssignMode) {
      res["UserAssignMode"] = boost::any(*userAssignMode);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (enableInternetAccess) {
      res["EnableInternetAccess"] = boost::any(*enableInternetAccess);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (period) {
      res["Period"] = boost::any(*period);
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
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("UserAssignMode") != m.end() && !m["UserAssignMode"].empty()) {
      userAssignMode = make_shared<string>(boost::any_cast<string>(m["UserAssignMode"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("EnableInternetAccess") != m.end() && !m["EnableInternetAccess"].empty()) {
      enableInternetAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableInternetAccess"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
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


  virtual ~CreateDesktopsLiteRequest() = default;
};
class CreateDesktopsLiteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> desktopId{};

  CreateDesktopsLiteResponseBody() {}

  explicit CreateDesktopsLiteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
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
  }


  virtual ~CreateDesktopsLiteResponseBody() = default;
};
class CreateDesktopsLiteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDesktopsLiteResponseBody> body{};

  CreateDesktopsLiteResponse() {}

  explicit CreateDesktopsLiteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDesktopsLiteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDesktopsLiteResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDesktopsLiteResponse() = default;
};
class CreateImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> description{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> imageResourceType{};
  shared_ptr<vector<string>> snapshotIds{};

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
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (imageResourceType) {
      res["ImageResourceType"] = boost::any(*imageResourceType);
    }
    if (snapshotIds) {
      res["SnapshotIds"] = boost::any(*snapshotIds);
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
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("ImageResourceType") != m.end() && !m["ImageResourceType"].empty()) {
      imageResourceType = make_shared<string>(boost::any_cast<string>(m["ImageResourceType"]));
    }
    if (m.find("SnapshotIds") != m.end() && !m["SnapshotIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SnapshotIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SnapshotIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      snapshotIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateImageRequest() = default;
};
class CreateImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> requestId{};

  CreateImageResponseBody() {}

  explicit CreateImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class CreateNASFileSystemRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};

  CreateNASFileSystemRequest() {}

  explicit CreateNASFileSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
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
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~CreateNASFileSystemRequest() = default;
};
class CreateNASFileSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemName{};
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<string> requestId{};
  shared_ptr<string> officeSiteId{};

  CreateNASFileSystemResponseBody() {}

  explicit CreateNASFileSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemName) {
      res["FileSystemName"] = boost::any(*fileSystemName);
    }
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemName") != m.end() && !m["FileSystemName"].empty()) {
      fileSystemName = make_shared<string>(boost::any_cast<string>(m["FileSystemName"]));
    }
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
  }


  virtual ~CreateNASFileSystemResponseBody() = default;
};
class CreateNASFileSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateNASFileSystemResponseBody> body{};

  CreateNASFileSystemResponse() {}

  explicit CreateNASFileSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateNASFileSystemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNASFileSystemResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNASFileSystemResponse() = default;
};
class CreateNetworkPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};

  CreateNetworkPackageRequest() {}

  explicit CreateNetworkPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
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
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
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
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
  }


  virtual ~CreateNetworkPackageRequest() = default;
};
class CreateNetworkPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> networkPackageId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> orderId{};

  CreateNetworkPackageResponseBody() {}

  explicit CreateNetworkPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkPackageId) {
      res["NetworkPackageId"] = boost::any(*networkPackageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkPackageId") != m.end() && !m["NetworkPackageId"].empty()) {
      networkPackageId = make_shared<string>(boost::any_cast<string>(m["NetworkPackageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~CreateNetworkPackageResponseBody() = default;
};
class CreateNetworkPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateNetworkPackageResponseBody> body{};

  CreateNetworkPackageResponse() {}

  explicit CreateNetworkPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateNetworkPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNetworkPackageResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNetworkPackageResponse() = default;
};
class CreatePolicyGroupRequestAuthorizeSecurityPolicyRule : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> policy{};
  shared_ptr<string> portRange{};
  shared_ptr<string> description{};
  shared_ptr<string> ipProtocol{};
  shared_ptr<string> priority{};
  shared_ptr<string> cidrIp{};

  CreatePolicyGroupRequestAuthorizeSecurityPolicyRule() {}

  explicit CreatePolicyGroupRequestAuthorizeSecurityPolicyRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (portRange) {
      res["PortRange"] = boost::any(*portRange);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ipProtocol) {
      res["IpProtocol"] = boost::any(*ipProtocol);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (cidrIp) {
      res["CidrIp"] = boost::any(*cidrIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("PortRange") != m.end() && !m["PortRange"].empty()) {
      portRange = make_shared<string>(boost::any_cast<string>(m["PortRange"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IpProtocol") != m.end() && !m["IpProtocol"].empty()) {
      ipProtocol = make_shared<string>(boost::any_cast<string>(m["IpProtocol"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("CidrIp") != m.end() && !m["CidrIp"].empty()) {
      cidrIp = make_shared<string>(boost::any_cast<string>(m["CidrIp"]));
    }
  }


  virtual ~CreatePolicyGroupRequestAuthorizeSecurityPolicyRule() = default;
};
class CreatePolicyGroupRequestAuthorizeAccessPolicyRule : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> cidrIp{};

  CreatePolicyGroupRequestAuthorizeAccessPolicyRule() {}

  explicit CreatePolicyGroupRequestAuthorizeAccessPolicyRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (cidrIp) {
      res["CidrIp"] = boost::any(*cidrIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CidrIp") != m.end() && !m["CidrIp"].empty()) {
      cidrIp = make_shared<string>(boost::any_cast<string>(m["CidrIp"]));
    }
  }


  virtual ~CreatePolicyGroupRequestAuthorizeAccessPolicyRule() = default;
};
class CreatePolicyGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clipboard{};
  shared_ptr<string> localDrive{};
  shared_ptr<string> usbRedirect{};
  shared_ptr<string> visualQuality{};
  shared_ptr<string> html5Access{};
  shared_ptr<string> html5FileTransfer{};
  shared_ptr<string> watermark{};
  shared_ptr<string> name{};
  shared_ptr<string> watermarkType{};
  shared_ptr<string> watermarkCustomText{};
  shared_ptr<string> watermarkTransparency{};
  shared_ptr<string> preemptLogin{};
  shared_ptr<string> domainList{};
  shared_ptr<vector<string>> preemptLoginUser{};
  shared_ptr<vector<CreatePolicyGroupRequestAuthorizeSecurityPolicyRule>> authorizeSecurityPolicyRule{};
  shared_ptr<vector<CreatePolicyGroupRequestAuthorizeAccessPolicyRule>> authorizeAccessPolicyRule{};

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
    if (visualQuality) {
      res["VisualQuality"] = boost::any(*visualQuality);
    }
    if (html5Access) {
      res["Html5Access"] = boost::any(*html5Access);
    }
    if (html5FileTransfer) {
      res["Html5FileTransfer"] = boost::any(*html5FileTransfer);
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
    if (preemptLogin) {
      res["PreemptLogin"] = boost::any(*preemptLogin);
    }
    if (domainList) {
      res["DomainList"] = boost::any(*domainList);
    }
    if (preemptLoginUser) {
      res["PreemptLoginUser"] = boost::any(*preemptLoginUser);
    }
    if (authorizeSecurityPolicyRule) {
      vector<boost::any> temp1;
      for(auto item1:*authorizeSecurityPolicyRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthorizeSecurityPolicyRule"] = boost::any(temp1);
    }
    if (authorizeAccessPolicyRule) {
      vector<boost::any> temp1;
      for(auto item1:*authorizeAccessPolicyRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthorizeAccessPolicyRule"] = boost::any(temp1);
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
    if (m.find("VisualQuality") != m.end() && !m["VisualQuality"].empty()) {
      visualQuality = make_shared<string>(boost::any_cast<string>(m["VisualQuality"]));
    }
    if (m.find("Html5Access") != m.end() && !m["Html5Access"].empty()) {
      html5Access = make_shared<string>(boost::any_cast<string>(m["Html5Access"]));
    }
    if (m.find("Html5FileTransfer") != m.end() && !m["Html5FileTransfer"].empty()) {
      html5FileTransfer = make_shared<string>(boost::any_cast<string>(m["Html5FileTransfer"]));
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
    if (m.find("PreemptLogin") != m.end() && !m["PreemptLogin"].empty()) {
      preemptLogin = make_shared<string>(boost::any_cast<string>(m["PreemptLogin"]));
    }
    if (m.find("DomainList") != m.end() && !m["DomainList"].empty()) {
      domainList = make_shared<string>(boost::any_cast<string>(m["DomainList"]));
    }
    if (m.find("PreemptLoginUser") != m.end() && !m["PreemptLoginUser"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PreemptLoginUser"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PreemptLoginUser"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      preemptLoginUser = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AuthorizeSecurityPolicyRule") != m.end() && !m["AuthorizeSecurityPolicyRule"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthorizeSecurityPolicyRule"].type()) {
        vector<CreatePolicyGroupRequestAuthorizeSecurityPolicyRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthorizeSecurityPolicyRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePolicyGroupRequestAuthorizeSecurityPolicyRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authorizeSecurityPolicyRule = make_shared<vector<CreatePolicyGroupRequestAuthorizeSecurityPolicyRule>>(expect1);
      }
    }
    if (m.find("AuthorizeAccessPolicyRule") != m.end() && !m["AuthorizeAccessPolicyRule"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthorizeAccessPolicyRule"].type()) {
        vector<CreatePolicyGroupRequestAuthorizeAccessPolicyRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthorizeAccessPolicyRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePolicyGroupRequestAuthorizeAccessPolicyRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authorizeAccessPolicyRule = make_shared<vector<CreatePolicyGroupRequestAuthorizeAccessPolicyRule>>(expect1);
      }
    }
  }


  virtual ~CreatePolicyGroupRequest() = default;
};
class CreatePolicyGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> requestId{};

  CreatePolicyGroupResponseBody() {}

  explicit CreatePolicyGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class CreateScaleStrategyRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> scaleStrategyName{};
  shared_ptr<string> scaleStrategyType{};
  shared_ptr<string> payType{};
  shared_ptr<long> minDesktopsCount{};
  shared_ptr<long> maxDesktopsCount{};
  shared_ptr<long> minAvailableDesktopsCount{};
  shared_ptr<long> maxAvailableDesktopsCount{};
  shared_ptr<long> scaleStep{};
  shared_ptr<string> clientToken{};

  CreateScaleStrategyRequest() {}

  explicit CreateScaleStrategyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scaleStrategyName) {
      res["ScaleStrategyName"] = boost::any(*scaleStrategyName);
    }
    if (scaleStrategyType) {
      res["ScaleStrategyType"] = boost::any(*scaleStrategyType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (minDesktopsCount) {
      res["MinDesktopsCount"] = boost::any(*minDesktopsCount);
    }
    if (maxDesktopsCount) {
      res["MaxDesktopsCount"] = boost::any(*maxDesktopsCount);
    }
    if (minAvailableDesktopsCount) {
      res["MinAvailableDesktopsCount"] = boost::any(*minAvailableDesktopsCount);
    }
    if (maxAvailableDesktopsCount) {
      res["MaxAvailableDesktopsCount"] = boost::any(*maxAvailableDesktopsCount);
    }
    if (scaleStep) {
      res["ScaleStep"] = boost::any(*scaleStep);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScaleStrategyName") != m.end() && !m["ScaleStrategyName"].empty()) {
      scaleStrategyName = make_shared<string>(boost::any_cast<string>(m["ScaleStrategyName"]));
    }
    if (m.find("ScaleStrategyType") != m.end() && !m["ScaleStrategyType"].empty()) {
      scaleStrategyType = make_shared<string>(boost::any_cast<string>(m["ScaleStrategyType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("MinDesktopsCount") != m.end() && !m["MinDesktopsCount"].empty()) {
      minDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MinDesktopsCount"]));
    }
    if (m.find("MaxDesktopsCount") != m.end() && !m["MaxDesktopsCount"].empty()) {
      maxDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MaxDesktopsCount"]));
    }
    if (m.find("MinAvailableDesktopsCount") != m.end() && !m["MinAvailableDesktopsCount"].empty()) {
      minAvailableDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MinAvailableDesktopsCount"]));
    }
    if (m.find("MaxAvailableDesktopsCount") != m.end() && !m["MaxAvailableDesktopsCount"].empty()) {
      maxAvailableDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MaxAvailableDesktopsCount"]));
    }
    if (m.find("ScaleStep") != m.end() && !m["ScaleStep"].empty()) {
      scaleStep = make_shared<long>(boost::any_cast<long>(m["ScaleStep"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~CreateScaleStrategyRequest() = default;
};
class CreateScaleStrategyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> scaleStrategyId{};
  shared_ptr<string> requestId{};

  CreateScaleStrategyResponseBody() {}

  explicit CreateScaleStrategyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scaleStrategyId) {
      res["ScaleStrategyId"] = boost::any(*scaleStrategyId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScaleStrategyId") != m.end() && !m["ScaleStrategyId"].empty()) {
      scaleStrategyId = make_shared<string>(boost::any_cast<string>(m["ScaleStrategyId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateScaleStrategyResponseBody() = default;
};
class CreateScaleStrategyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateScaleStrategyResponseBody> body{};

  CreateScaleStrategyResponse() {}

  explicit CreateScaleStrategyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScaleStrategyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScaleStrategyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScaleStrategyResponse() = default;
};
class CreateServiceLinkedRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  CreateServiceLinkedRoleRequest() {}

  explicit CreateServiceLinkedRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceLinkedRoleRequest() = default;
};
class CreateServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateServiceLinkedRoleResponseBody() {}

  explicit CreateServiceLinkedRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceLinkedRoleResponseBody() = default;
};
class CreateServiceLinkedRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateServiceLinkedRoleResponseBody> body{};

  CreateServiceLinkedRoleResponse() {}

  explicit CreateServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceLinkedRoleResponse() = default;
};
class CreateSimpleOfficeSiteRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> cenId{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> officeSiteName{};
  shared_ptr<bool> enableInternetAccess{};
  shared_ptr<bool> enableAdminAccess{};
  shared_ptr<string> desktopAccessType{};

  CreateSimpleOfficeSiteRequest() {}

  explicit CreateSimpleOfficeSiteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (officeSiteName) {
      res["OfficeSiteName"] = boost::any(*officeSiteName);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("OfficeSiteName") != m.end() && !m["OfficeSiteName"].empty()) {
      officeSiteName = make_shared<string>(boost::any_cast<string>(m["OfficeSiteName"]));
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
  }


  virtual ~CreateSimpleOfficeSiteRequest() = default;
};
class CreateSimpleOfficeSiteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> requestId{};

  CreateSimpleOfficeSiteResponseBody() {}

  explicit CreateSimpleOfficeSiteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSimpleOfficeSiteResponseBody() = default;
};
class CreateSimpleOfficeSiteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSimpleOfficeSiteResponseBody> body{};

  CreateSimpleOfficeSiteResponse() {}

  explicit CreateSimpleOfficeSiteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSimpleOfficeSiteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSimpleOfficeSiteResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSimpleOfficeSiteResponse() = default;
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
class DeleteDesktopGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopGroupId{};

  DeleteDesktopGroupRequest() {}

  explicit DeleteDesktopGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopGroupId) {
      res["DesktopGroupId"] = boost::any(*desktopGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopGroupId") != m.end() && !m["DesktopGroupId"].empty()) {
      desktopGroupId = make_shared<string>(boost::any_cast<string>(m["DesktopGroupId"]));
    }
  }


  virtual ~DeleteDesktopGroupRequest() = default;
};
class DeleteDesktopGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDesktopGroupResponseBody() {}

  explicit DeleteDesktopGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDesktopGroupResponseBody() = default;
};
class DeleteDesktopGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDesktopGroupResponseBody> body{};

  DeleteDesktopGroupResponse() {}

  explicit DeleteDesktopGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDesktopGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDesktopGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDesktopGroupResponse() = default;
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
class DeleteNASFileSystemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> fileSystemId{};

  DeleteNASFileSystemsRequest() {}

  explicit DeleteNASFileSystemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FileSystemId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FileSystemId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fileSystemId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteNASFileSystemsRequest() = default;
};
class DeleteNASFileSystemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteNASFileSystemsResponseBody() {}

  explicit DeleteNASFileSystemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteNASFileSystemsResponseBody() = default;
};
class DeleteNASFileSystemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteNASFileSystemsResponseBody> body{};

  DeleteNASFileSystemsResponse() {}

  explicit DeleteNASFileSystemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNASFileSystemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNASFileSystemsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNASFileSystemsResponse() = default;
};
class DeleteNetworkPackagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> networkPackageId{};

  DeleteNetworkPackagesRequest() {}

  explicit DeleteNetworkPackagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (networkPackageId) {
      res["NetworkPackageId"] = boost::any(*networkPackageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("NetworkPackageId") != m.end() && !m["NetworkPackageId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NetworkPackageId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NetworkPackageId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      networkPackageId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteNetworkPackagesRequest() = default;
};
class DeleteNetworkPackagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteNetworkPackagesResponseBody() {}

  explicit DeleteNetworkPackagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteNetworkPackagesResponseBody() = default;
};
class DeleteNetworkPackagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteNetworkPackagesResponseBody> body{};

  DeleteNetworkPackagesResponse() {}

  explicit DeleteNetworkPackagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNetworkPackagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNetworkPackagesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNetworkPackagesResponse() = default;
};
class DeleteOfficeSitesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> officeSiteId{};

  DeleteOfficeSitesRequest() {}

  explicit DeleteOfficeSitesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OfficeSiteId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OfficeSiteId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      officeSiteId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteOfficeSitesRequest() = default;
};
class DeleteOfficeSitesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteOfficeSitesResponseBody() {}

  explicit DeleteOfficeSitesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteOfficeSitesResponseBody() = default;
};
class DeleteOfficeSitesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteOfficeSitesResponseBody> body{};

  DeleteOfficeSitesResponse() {}

  explicit DeleteOfficeSitesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteOfficeSitesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteOfficeSitesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteOfficeSitesResponse() = default;
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
class DeleteScaleStrategyRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> scaleStrategyId{};

  DeleteScaleStrategyRequest() {}

  explicit DeleteScaleStrategyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scaleStrategyId) {
      res["ScaleStrategyId"] = boost::any(*scaleStrategyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScaleStrategyId") != m.end() && !m["ScaleStrategyId"].empty()) {
      scaleStrategyId = make_shared<string>(boost::any_cast<string>(m["ScaleStrategyId"]));
    }
  }


  virtual ~DeleteScaleStrategyRequest() = default;
};
class DeleteScaleStrategyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteScaleStrategyResponseBody() {}

  explicit DeleteScaleStrategyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteScaleStrategyResponseBody() = default;
};
class DeleteScaleStrategyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteScaleStrategyResponseBody> body{};

  DeleteScaleStrategyResponse() {}

  explicit DeleteScaleStrategyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScaleStrategyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScaleStrategyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScaleStrategyResponse() = default;
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
class DescribeAlarmEventStackInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> eventName{};
  shared_ptr<string> uniqueInfo{};
  shared_ptr<string> lang{};

  DescribeAlarmEventStackInfoRequest() {}

  explicit DescribeAlarmEventStackInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (uniqueInfo) {
      res["UniqueInfo"] = boost::any(*uniqueInfo);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
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
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("UniqueInfo") != m.end() && !m["UniqueInfo"].empty()) {
      uniqueInfo = make_shared<string>(boost::any_cast<string>(m["UniqueInfo"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeAlarmEventStackInfoRequest() = default;
};
class DescribeAlarmEventStackInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> stackInfo{};
  shared_ptr<string> requestId{};

  DescribeAlarmEventStackInfoResponseBody() {}

  explicit DescribeAlarmEventStackInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackInfo) {
      res["StackInfo"] = boost::any(*stackInfo);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackInfo") != m.end() && !m["StackInfo"].empty()) {
      stackInfo = make_shared<string>(boost::any_cast<string>(m["StackInfo"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAlarmEventStackInfoResponseBody() = default;
};
class DescribeAlarmEventStackInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAlarmEventStackInfoResponseBody> body{};

  DescribeAlarmEventStackInfoResponse() {}

  explicit DescribeAlarmEventStackInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlarmEventStackInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAlarmEventStackInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAlarmEventStackInfoResponse() = default;
};
class DescribeBundlesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> bundleType{};
  shared_ptr<string> desktopTypeFamily{};
  shared_ptr<long> cpuCount{};
  shared_ptr<long> memorySize{};
  shared_ptr<double> gpuCount{};
  shared_ptr<bool> checkStock{};
  shared_ptr<bool> fromDesktopGroup{};
  shared_ptr<string> protocolType{};
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
    if (bundleType) {
      res["BundleType"] = boost::any(*bundleType);
    }
    if (desktopTypeFamily) {
      res["DesktopTypeFamily"] = boost::any(*desktopTypeFamily);
    }
    if (cpuCount) {
      res["CpuCount"] = boost::any(*cpuCount);
    }
    if (memorySize) {
      res["MemorySize"] = boost::any(*memorySize);
    }
    if (gpuCount) {
      res["GpuCount"] = boost::any(*gpuCount);
    }
    if (checkStock) {
      res["CheckStock"] = boost::any(*checkStock);
    }
    if (fromDesktopGroup) {
      res["FromDesktopGroup"] = boost::any(*fromDesktopGroup);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
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
    if (m.find("BundleType") != m.end() && !m["BundleType"].empty()) {
      bundleType = make_shared<string>(boost::any_cast<string>(m["BundleType"]));
    }
    if (m.find("DesktopTypeFamily") != m.end() && !m["DesktopTypeFamily"].empty()) {
      desktopTypeFamily = make_shared<string>(boost::any_cast<string>(m["DesktopTypeFamily"]));
    }
    if (m.find("CpuCount") != m.end() && !m["CpuCount"].empty()) {
      cpuCount = make_shared<long>(boost::any_cast<long>(m["CpuCount"]));
    }
    if (m.find("MemorySize") != m.end() && !m["MemorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["MemorySize"]));
    }
    if (m.find("GpuCount") != m.end() && !m["GpuCount"].empty()) {
      gpuCount = make_shared<double>(boost::any_cast<double>(m["GpuCount"]));
    }
    if (m.find("CheckStock") != m.end() && !m["CheckStock"].empty()) {
      checkStock = make_shared<bool>(boost::any_cast<bool>(m["CheckStock"]));
    }
    if (m.find("FromDesktopGroup") != m.end() && !m["FromDesktopGroup"].empty()) {
      fromDesktopGroup = make_shared<bool>(boost::any_cast<bool>(m["FromDesktopGroup"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
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
  shared_ptr<string> diskType{};
  shared_ptr<long> diskSize{};

  DescribeBundlesResponseBodyBundlesDisks() {}

  explicit DescribeBundlesResponseBodyBundlesDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
  }


  virtual ~DescribeBundlesResponseBodyBundlesDisks() = default;
};
class DescribeBundlesResponseBodyBundlesDesktopTypeAttribute : public Darabonba::Model {
public:
  shared_ptr<long> cpuCount{};
  shared_ptr<double> gpuCount{};
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
      gpuCount = make_shared<double>(boost::any_cast<double>(m["GpuCount"]));
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
  shared_ptr<string> description{};
  shared_ptr<string> bundleType{};
  shared_ptr<string> osType{};
  shared_ptr<string> stockState{};
  shared_ptr<string> desktopType{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> bundleId{};
  shared_ptr<string> imageId{};
  shared_ptr<string> bundleName{};
  shared_ptr<vector<DescribeBundlesResponseBodyBundlesDisks>> disks{};
  shared_ptr<DescribeBundlesResponseBodyBundlesDesktopTypeAttribute> desktopTypeAttribute{};

  DescribeBundlesResponseBodyBundles() {}

  explicit DescribeBundlesResponseBodyBundles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (bundleType) {
      res["BundleType"] = boost::any(*bundleType);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (stockState) {
      res["StockState"] = boost::any(*stockState);
    }
    if (desktopType) {
      res["DesktopType"] = boost::any(*desktopType);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
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
    if (disks) {
      vector<boost::any> temp1;
      for(auto item1:*disks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disks"] = boost::any(temp1);
    }
    if (desktopTypeAttribute) {
      res["DesktopTypeAttribute"] = desktopTypeAttribute ? boost::any(desktopTypeAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("BundleType") != m.end() && !m["BundleType"].empty()) {
      bundleType = make_shared<string>(boost::any_cast<string>(m["BundleType"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("StockState") != m.end() && !m["StockState"].empty()) {
      stockState = make_shared<string>(boost::any_cast<string>(m["StockState"]));
    }
    if (m.find("DesktopType") != m.end() && !m["DesktopType"].empty()) {
      desktopType = make_shared<string>(boost::any_cast<string>(m["DesktopType"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
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
    if (m.find("DesktopTypeAttribute") != m.end() && !m["DesktopTypeAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["DesktopTypeAttribute"].type()) {
        DescribeBundlesResponseBodyBundlesDesktopTypeAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DesktopTypeAttribute"]));
        desktopTypeAttribute = make_shared<DescribeBundlesResponseBodyBundlesDesktopTypeAttribute>(model1);
      }
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
class DescribeCensRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeCensRequest() {}

  explicit DescribeCensRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeCensRequest() = default;
};
class DescribeCensResponseBodyCensTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeCensResponseBodyCensTags() {}

  explicit DescribeCensResponseBodyCensTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeCensResponseBodyCensTags() = default;
};
class DescribeCensResponseBodyCensPackageIds : public Darabonba::Model {
public:
  shared_ptr<string> packageId{};

  DescribeCensResponseBodyCensPackageIds() {}

  explicit DescribeCensResponseBodyCensPackageIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (packageId) {
      res["PackageId"] = boost::any(*packageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PackageId") != m.end() && !m["PackageId"].empty()) {
      packageId = make_shared<string>(boost::any_cast<string>(m["PackageId"]));
    }
  }


  virtual ~DescribeCensResponseBodyCensPackageIds() = default;
};
class DescribeCensResponseBodyCens : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> ipv6Level{};
  shared_ptr<string> description{};
  shared_ptr<string> cenId{};
  shared_ptr<string> protectionLevel{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeCensResponseBodyCensTags>> tags{};
  shared_ptr<vector<DescribeCensResponseBodyCensPackageIds>> packageIds{};

  DescribeCensResponseBodyCens() {}

  explicit DescribeCensResponseBodyCens(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ipv6Level) {
      res["Ipv6Level"] = boost::any(*ipv6Level);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (protectionLevel) {
      res["ProtectionLevel"] = boost::any(*protectionLevel);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (packageIds) {
      vector<boost::any> temp1;
      for(auto item1:*packageIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PackageIds"] = boost::any(temp1);
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
    if (m.find("Ipv6Level") != m.end() && !m["Ipv6Level"].empty()) {
      ipv6Level = make_shared<string>(boost::any_cast<string>(m["Ipv6Level"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ProtectionLevel") != m.end() && !m["ProtectionLevel"].empty()) {
      protectionLevel = make_shared<string>(boost::any_cast<string>(m["ProtectionLevel"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeCensResponseBodyCensTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCensResponseBodyCensTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeCensResponseBodyCensTags>>(expect1);
      }
    }
    if (m.find("PackageIds") != m.end() && !m["PackageIds"].empty()) {
      if (typeid(vector<boost::any>) == m["PackageIds"].type()) {
        vector<DescribeCensResponseBodyCensPackageIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PackageIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCensResponseBodyCensPackageIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        packageIds = make_shared<vector<DescribeCensResponseBodyCensPackageIds>>(expect1);
      }
    }
  }


  virtual ~DescribeCensResponseBodyCens() = default;
};
class DescribeCensResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeCensResponseBodyCens>> cens{};

  DescribeCensResponseBody() {}

  explicit DescribeCensResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (cens) {
      vector<boost::any> temp1;
      for(auto item1:*cens){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cens"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Cens") != m.end() && !m["Cens"].empty()) {
      if (typeid(vector<boost::any>) == m["Cens"].type()) {
        vector<DescribeCensResponseBodyCens> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cens"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCensResponseBodyCens model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cens = make_shared<vector<DescribeCensResponseBodyCens>>(expect1);
      }
    }
  }


  virtual ~DescribeCensResponseBody() = default;
};
class DescribeCensResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCensResponseBody> body{};

  DescribeCensResponse() {}

  explicit DescribeCensResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCensResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCensResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCensResponse() = default;
};
class DescribeClientEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> desktopIp{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> officeSiteId{};
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
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
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
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
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
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> aliUid{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> eventId{};
  shared_ptr<string> directoryType{};
  shared_ptr<string> eventType{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> officeSiteType{};
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
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
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
    if (officeSiteType) {
      res["OfficeSiteType"] = boost::any(*officeSiteType);
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
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
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
    if (m.find("OfficeSiteType") != m.end() && !m["OfficeSiteType"].empty()) {
      officeSiteType = make_shared<string>(boost::any_cast<string>(m["OfficeSiteType"]));
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
class DescribeDesktopIdsByVulNamesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> necessity{};
  shared_ptr<vector<string>> vulName{};

  DescribeDesktopIdsByVulNamesRequest() {}

  explicit DescribeDesktopIdsByVulNamesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (necessity) {
      res["Necessity"] = boost::any(*necessity);
    }
    if (vulName) {
      res["VulName"] = boost::any(*vulName);
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
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("Necessity") != m.end() && !m["Necessity"].empty()) {
      necessity = make_shared<string>(boost::any_cast<string>(m["Necessity"]));
    }
    if (m.find("VulName") != m.end() && !m["VulName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VulName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VulName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vulName = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDesktopIdsByVulNamesRequest() = default;
};
class DescribeDesktopIdsByVulNamesResponseBodyDesktopItems : public Darabonba::Model {
public:
  shared_ptr<string> desktopName{};
  shared_ptr<string> desktopId{};

  DescribeDesktopIdsByVulNamesResponseBodyDesktopItems() {}

  explicit DescribeDesktopIdsByVulNamesResponseBodyDesktopItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
  }


  virtual ~DescribeDesktopIdsByVulNamesResponseBodyDesktopItems() = default;
};
class DescribeDesktopIdsByVulNamesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDesktopIdsByVulNamesResponseBodyDesktopItems>> desktopItems{};

  DescribeDesktopIdsByVulNamesResponseBody() {}

  explicit DescribeDesktopIdsByVulNamesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (desktopItems) {
      vector<boost::any> temp1;
      for(auto item1:*desktopItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DesktopItems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DesktopItems") != m.end() && !m["DesktopItems"].empty()) {
      if (typeid(vector<boost::any>) == m["DesktopItems"].type()) {
        vector<DescribeDesktopIdsByVulNamesResponseBodyDesktopItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DesktopItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDesktopIdsByVulNamesResponseBodyDesktopItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        desktopItems = make_shared<vector<DescribeDesktopIdsByVulNamesResponseBodyDesktopItems>>(expect1);
      }
    }
  }


  virtual ~DescribeDesktopIdsByVulNamesResponseBody() = default;
};
class DescribeDesktopIdsByVulNamesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDesktopIdsByVulNamesResponseBody> body{};

  DescribeDesktopIdsByVulNamesResponse() {}

  explicit DescribeDesktopIdsByVulNamesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDesktopIdsByVulNamesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDesktopIdsByVulNamesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDesktopIdsByVulNamesResponse() = default;
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
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> expiredTime{};
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
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
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
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
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
class DescribeDesktopsResponseBodyDesktopsDisks : public Darabonba::Model {
public:
  shared_ptr<string> diskType{};
  shared_ptr<string> diskId{};
  shared_ptr<long> diskSize{};

  DescribeDesktopsResponseBodyDesktopsDisks() {}

  explicit DescribeDesktopsResponseBodyDesktopsDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
  }


  virtual ~DescribeDesktopsResponseBodyDesktopsDisks() = default;
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
class DescribeDesktopsResponseBodyDesktopsSessions : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<string> establishmentTime{};

  DescribeDesktopsResponseBodyDesktopsSessions() {}

  explicit DescribeDesktopsResponseBodyDesktopsSessions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (establishmentTime) {
      res["EstablishmentTime"] = boost::any(*establishmentTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("EstablishmentTime") != m.end() && !m["EstablishmentTime"].empty()) {
      establishmentTime = make_shared<string>(boost::any_cast<string>(m["EstablishmentTime"]));
    }
  }


  virtual ~DescribeDesktopsResponseBodyDesktopsSessions() = default;
};
class DescribeDesktopsResponseBodyDesktops : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> policyGroupName{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> desktopStatus{};
  shared_ptr<string> desktopType{};
  shared_ptr<double> gpuCount{};
  shared_ptr<long> memory{};
  shared_ptr<string> gpuSpec{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> imageId{};
  shared_ptr<string> managementFlag{};
  shared_ptr<string> dataDiskCategory{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> networkInterfaceId{};
  shared_ptr<string> dataDiskSize{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> officeSiteName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> directoryType{};
  shared_ptr<long> cpu{};
  shared_ptr<string> networkInterfaceIp{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> osType{};
  shared_ptr<string> connectionStatus{};
  shared_ptr<string> bundleId{};
  shared_ptr<string> officeSiteType{};
  shared_ptr<vector<DescribeDesktopsResponseBodyDesktopsDisks>> disks{};
  shared_ptr<vector<DescribeDesktopsResponseBodyDesktopsTags>> tags{};
  shared_ptr<vector<DescribeDesktopsResponseBodyDesktopsSessions>> sessions{};
  shared_ptr<vector<string>> endUserIds{};

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
    if (policyGroupName) {
      res["PolicyGroupName"] = boost::any(*policyGroupName);
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
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (managementFlag) {
      res["ManagementFlag"] = boost::any(*managementFlag);
    }
    if (dataDiskCategory) {
      res["DataDiskCategory"] = boost::any(*dataDiskCategory);
    }
    if (systemDiskCategory) {
      res["SystemDiskCategory"] = boost::any(*systemDiskCategory);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
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
    if (officeSiteName) {
      res["OfficeSiteName"] = boost::any(*officeSiteName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (directoryType) {
      res["DirectoryType"] = boost::any(*directoryType);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (networkInterfaceIp) {
      res["NetworkInterfaceIp"] = boost::any(*networkInterfaceIp);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (connectionStatus) {
      res["ConnectionStatus"] = boost::any(*connectionStatus);
    }
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (officeSiteType) {
      res["OfficeSiteType"] = boost::any(*officeSiteType);
    }
    if (disks) {
      vector<boost::any> temp1;
      for(auto item1:*disks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disks"] = boost::any(temp1);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (sessions) {
      vector<boost::any> temp1;
      for(auto item1:*sessions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sessions"] = boost::any(temp1);
    }
    if (endUserIds) {
      res["EndUserIds"] = boost::any(*endUserIds);
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
    if (m.find("PolicyGroupName") != m.end() && !m["PolicyGroupName"].empty()) {
      policyGroupName = make_shared<string>(boost::any_cast<string>(m["PolicyGroupName"]));
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
      gpuCount = make_shared<double>(boost::any_cast<double>(m["GpuCount"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("GpuSpec") != m.end() && !m["GpuSpec"].empty()) {
      gpuSpec = make_shared<string>(boost::any_cast<string>(m["GpuSpec"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ManagementFlag") != m.end() && !m["ManagementFlag"].empty()) {
      managementFlag = make_shared<string>(boost::any_cast<string>(m["ManagementFlag"]));
    }
    if (m.find("DataDiskCategory") != m.end() && !m["DataDiskCategory"].empty()) {
      dataDiskCategory = make_shared<string>(boost::any_cast<string>(m["DataDiskCategory"]));
    }
    if (m.find("SystemDiskCategory") != m.end() && !m["SystemDiskCategory"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["SystemDiskCategory"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
    if (m.find("DataDiskSize") != m.end() && !m["DataDiskSize"].empty()) {
      dataDiskSize = make_shared<string>(boost::any_cast<string>(m["DataDiskSize"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("OfficeSiteName") != m.end() && !m["OfficeSiteName"].empty()) {
      officeSiteName = make_shared<string>(boost::any_cast<string>(m["OfficeSiteName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DirectoryType") != m.end() && !m["DirectoryType"].empty()) {
      directoryType = make_shared<string>(boost::any_cast<string>(m["DirectoryType"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("NetworkInterfaceIp") != m.end() && !m["NetworkInterfaceIp"].empty()) {
      networkInterfaceIp = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceIp"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("ConnectionStatus") != m.end() && !m["ConnectionStatus"].empty()) {
      connectionStatus = make_shared<string>(boost::any_cast<string>(m["ConnectionStatus"]));
    }
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("OfficeSiteType") != m.end() && !m["OfficeSiteType"].empty()) {
      officeSiteType = make_shared<string>(boost::any_cast<string>(m["OfficeSiteType"]));
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
    if (m.find("Sessions") != m.end() && !m["Sessions"].empty()) {
      if (typeid(vector<boost::any>) == m["Sessions"].type()) {
        vector<DescribeDesktopsResponseBodyDesktopsSessions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sessions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDesktopsResponseBodyDesktopsSessions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sessions = make_shared<vector<DescribeDesktopsResponseBodyDesktopsSessions>>(expect1);
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
class DescribeDesktopsInGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopGroupId{};
  shared_ptr<string> payType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeDesktopsInGroupRequest() {}

  explicit DescribeDesktopsInGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopGroupId) {
      res["DesktopGroupId"] = boost::any(*desktopGroupId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
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
    if (m.find("DesktopGroupId") != m.end() && !m["DesktopGroupId"].empty()) {
      desktopGroupId = make_shared<string>(boost::any_cast<string>(m["DesktopGroupId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeDesktopsInGroupRequest() = default;
};
class DescribeDesktopsInGroupResponseBodyPaidDesktops : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<string> desktopStatus{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> connectionStatus{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> endUserName{};

  DescribeDesktopsInGroupResponseBodyPaidDesktops() {}

  explicit DescribeDesktopsInGroupResponseBodyPaidDesktops(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (desktopStatus) {
      res["DesktopStatus"] = boost::any(*desktopStatus);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (connectionStatus) {
      res["ConnectionStatus"] = boost::any(*connectionStatus);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (endUserName) {
      res["EndUserName"] = boost::any(*endUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("DesktopStatus") != m.end() && !m["DesktopStatus"].empty()) {
      desktopStatus = make_shared<string>(boost::any_cast<string>(m["DesktopStatus"]));
    }
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("ConnectionStatus") != m.end() && !m["ConnectionStatus"].empty()) {
      connectionStatus = make_shared<string>(boost::any_cast<string>(m["ConnectionStatus"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("EndUserName") != m.end() && !m["EndUserName"].empty()) {
      endUserName = make_shared<string>(boost::any_cast<string>(m["EndUserName"]));
    }
  }


  virtual ~DescribeDesktopsInGroupResponseBodyPaidDesktops() = default;
};
class DescribeDesktopsInGroupResponseBodyPostPaidDesktops : public Darabonba::Model {
public:
  shared_ptr<string> createDuration{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> desktopStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> releaseTime{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> connectionStatus{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> endUserName{};

  DescribeDesktopsInGroupResponseBodyPostPaidDesktops() {}

  explicit DescribeDesktopsInGroupResponseBodyPostPaidDesktops(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDuration) {
      res["CreateDuration"] = boost::any(*createDuration);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (desktopStatus) {
      res["DesktopStatus"] = boost::any(*desktopStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (releaseTime) {
      res["ReleaseTime"] = boost::any(*releaseTime);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (connectionStatus) {
      res["ConnectionStatus"] = boost::any(*connectionStatus);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (endUserName) {
      res["EndUserName"] = boost::any(*endUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDuration") != m.end() && !m["CreateDuration"].empty()) {
      createDuration = make_shared<string>(boost::any_cast<string>(m["CreateDuration"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("DesktopStatus") != m.end() && !m["DesktopStatus"].empty()) {
      desktopStatus = make_shared<string>(boost::any_cast<string>(m["DesktopStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ReleaseTime") != m.end() && !m["ReleaseTime"].empty()) {
      releaseTime = make_shared<string>(boost::any_cast<string>(m["ReleaseTime"]));
    }
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("ConnectionStatus") != m.end() && !m["ConnectionStatus"].empty()) {
      connectionStatus = make_shared<string>(boost::any_cast<string>(m["ConnectionStatus"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("EndUserName") != m.end() && !m["EndUserName"].empty()) {
      endUserName = make_shared<string>(boost::any_cast<string>(m["EndUserName"]));
    }
  }


  virtual ~DescribeDesktopsInGroupResponseBodyPostPaidDesktops() = default;
};
class DescribeDesktopsInGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> postPaidDesktopsCount{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> paidDesktopsCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> postPaidDesktopsTotalAmount{};
  shared_ptr<vector<DescribeDesktopsInGroupResponseBodyPaidDesktops>> paidDesktops{};
  shared_ptr<vector<DescribeDesktopsInGroupResponseBodyPostPaidDesktops>> postPaidDesktops{};

  DescribeDesktopsInGroupResponseBody() {}

  explicit DescribeDesktopsInGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (postPaidDesktopsCount) {
      res["PostPaidDesktopsCount"] = boost::any(*postPaidDesktopsCount);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (paidDesktopsCount) {
      res["PaidDesktopsCount"] = boost::any(*paidDesktopsCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (postPaidDesktopsTotalAmount) {
      res["PostPaidDesktopsTotalAmount"] = boost::any(*postPaidDesktopsTotalAmount);
    }
    if (paidDesktops) {
      vector<boost::any> temp1;
      for(auto item1:*paidDesktops){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PaidDesktops"] = boost::any(temp1);
    }
    if (postPaidDesktops) {
      vector<boost::any> temp1;
      for(auto item1:*postPaidDesktops){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PostPaidDesktops"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PostPaidDesktopsCount") != m.end() && !m["PostPaidDesktopsCount"].empty()) {
      postPaidDesktopsCount = make_shared<long>(boost::any_cast<long>(m["PostPaidDesktopsCount"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PaidDesktopsCount") != m.end() && !m["PaidDesktopsCount"].empty()) {
      paidDesktopsCount = make_shared<long>(boost::any_cast<long>(m["PaidDesktopsCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PostPaidDesktopsTotalAmount") != m.end() && !m["PostPaidDesktopsTotalAmount"].empty()) {
      postPaidDesktopsTotalAmount = make_shared<long>(boost::any_cast<long>(m["PostPaidDesktopsTotalAmount"]));
    }
    if (m.find("PaidDesktops") != m.end() && !m["PaidDesktops"].empty()) {
      if (typeid(vector<boost::any>) == m["PaidDesktops"].type()) {
        vector<DescribeDesktopsInGroupResponseBodyPaidDesktops> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PaidDesktops"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDesktopsInGroupResponseBodyPaidDesktops model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paidDesktops = make_shared<vector<DescribeDesktopsInGroupResponseBodyPaidDesktops>>(expect1);
      }
    }
    if (m.find("PostPaidDesktops") != m.end() && !m["PostPaidDesktops"].empty()) {
      if (typeid(vector<boost::any>) == m["PostPaidDesktops"].type()) {
        vector<DescribeDesktopsInGroupResponseBodyPostPaidDesktops> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PostPaidDesktops"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDesktopsInGroupResponseBodyPostPaidDesktops model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        postPaidDesktops = make_shared<vector<DescribeDesktopsInGroupResponseBodyPostPaidDesktops>>(expect1);
      }
    }
  }


  virtual ~DescribeDesktopsInGroupResponseBody() = default;
};
class DescribeDesktopsInGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDesktopsInGroupResponseBody> body{};

  DescribeDesktopsInGroupResponse() {}

  explicit DescribeDesktopsInGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDesktopsInGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDesktopsInGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDesktopsInGroupResponse() = default;
};
class DescribeDesktopTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopTypeId{};
  shared_ptr<string> instanceTypeFamily{};
  shared_ptr<long> cpuCount{};
  shared_ptr<long> memorySize{};
  shared_ptr<double> gpuCount{};

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
    if (cpuCount) {
      res["CpuCount"] = boost::any(*cpuCount);
    }
    if (memorySize) {
      res["MemorySize"] = boost::any(*memorySize);
    }
    if (gpuCount) {
      res["GpuCount"] = boost::any(*gpuCount);
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
    if (m.find("CpuCount") != m.end() && !m["CpuCount"].empty()) {
      cpuCount = make_shared<long>(boost::any_cast<long>(m["CpuCount"]));
    }
    if (m.find("MemorySize") != m.end() && !m["MemorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["MemorySize"]));
    }
    if (m.find("GpuCount") != m.end() && !m["GpuCount"].empty()) {
      gpuCount = make_shared<double>(boost::any_cast<double>(m["GpuCount"]));
    }
  }


  virtual ~DescribeDesktopTypesRequest() = default;
};
class DescribeDesktopTypesResponseBodyDesktopTypesAllowDiskSize : public Darabonba::Model {
public:
  shared_ptr<long> dataDiskSize{};
  shared_ptr<long> systemDiskSize{};

  DescribeDesktopTypesResponseBodyDesktopTypesAllowDiskSize() {}

  explicit DescribeDesktopTypesResponseBodyDesktopTypesAllowDiskSize(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDiskSize) {
      res["DataDiskSize"] = boost::any(*dataDiskSize);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataDiskSize") != m.end() && !m["DataDiskSize"].empty()) {
      dataDiskSize = make_shared<long>(boost::any_cast<long>(m["DataDiskSize"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
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
  shared_ptr<double> gpuCount{};
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
      gpuCount = make_shared<double>(boost::any_cast<double>(m["GpuCount"]));
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
  shared_ptr<string> directoryStatus{};
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
    if (directoryStatus) {
      res["DirectoryStatus"] = boost::any(*directoryStatus);
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
    if (m.find("DirectoryStatus") != m.end() && !m["DirectoryStatus"].empty()) {
      directoryStatus = make_shared<string>(boost::any_cast<string>(m["DirectoryStatus"]));
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
class DescribeDirectoriesResponseBodyDirectoriesADConnectors : public Darabonba::Model {
public:
  shared_ptr<string> connectorStatus{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> ADConnectorAddress{};
  shared_ptr<string> networkInterfaceId{};

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
    if (ADConnectorAddress) {
      res["ADConnectorAddress"] = boost::any(*ADConnectorAddress);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
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
    if (m.find("ADConnectorAddress") != m.end() && !m["ADConnectorAddress"].empty()) {
      ADConnectorAddress = make_shared<string>(boost::any_cast<string>(m["ADConnectorAddress"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
  }


  virtual ~DescribeDirectoriesResponseBodyDirectoriesADConnectors() = default;
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
class DescribeDirectoriesResponseBodyDirectories : public Darabonba::Model {
public:
  shared_ptr<bool> enableInternetAccess{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> status{};
  shared_ptr<string> domainPassword{};
  shared_ptr<bool> enableAdminAccess{};
  shared_ptr<string> subDomainName{};
  shared_ptr<string> domainUserName{};
  shared_ptr<bool> enableCrossDesktopAccess{};
  shared_ptr<string> customSecurityGroupId{};
  shared_ptr<string> desktopVpcEndpoint{};
  shared_ptr<bool> ssoEnabled{};
  shared_ptr<string> domainName{};
  shared_ptr<string> desktopAccessType{};
  shared_ptr<bool> mfaEnabled{};
  shared_ptr<string> directoryType{};
  shared_ptr<string> dnsUserName{};
  shared_ptr<string> trustPassword{};
  shared_ptr<string> name{};
  shared_ptr<string> directoryId{};
  shared_ptr<vector<DescribeDirectoriesResponseBodyDirectoriesADConnectors>> ADConnectors{};
  shared_ptr<vector<DescribeDirectoriesResponseBodyDirectoriesLogs>> logs{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<vector<string>> fileSystemIds{};
  shared_ptr<vector<string>> subDnsAddress{};
  shared_ptr<vector<string>> dnsAddress{};

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
    if (enableAdminAccess) {
      res["EnableAdminAccess"] = boost::any(*enableAdminAccess);
    }
    if (subDomainName) {
      res["SubDomainName"] = boost::any(*subDomainName);
    }
    if (domainUserName) {
      res["DomainUserName"] = boost::any(*domainUserName);
    }
    if (enableCrossDesktopAccess) {
      res["EnableCrossDesktopAccess"] = boost::any(*enableCrossDesktopAccess);
    }
    if (customSecurityGroupId) {
      res["CustomSecurityGroupId"] = boost::any(*customSecurityGroupId);
    }
    if (desktopVpcEndpoint) {
      res["DesktopVpcEndpoint"] = boost::any(*desktopVpcEndpoint);
    }
    if (ssoEnabled) {
      res["SsoEnabled"] = boost::any(*ssoEnabled);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (desktopAccessType) {
      res["DesktopAccessType"] = boost::any(*desktopAccessType);
    }
    if (mfaEnabled) {
      res["MfaEnabled"] = boost::any(*mfaEnabled);
    }
    if (directoryType) {
      res["DirectoryType"] = boost::any(*directoryType);
    }
    if (dnsUserName) {
      res["DnsUserName"] = boost::any(*dnsUserName);
    }
    if (trustPassword) {
      res["TrustPassword"] = boost::any(*trustPassword);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (ADConnectors) {
      vector<boost::any> temp1;
      for(auto item1:*ADConnectors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ADConnectors"] = boost::any(temp1);
    }
    if (logs) {
      vector<boost::any> temp1;
      for(auto item1:*logs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Logs"] = boost::any(temp1);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (fileSystemIds) {
      res["FileSystemIds"] = boost::any(*fileSystemIds);
    }
    if (subDnsAddress) {
      res["SubDnsAddress"] = boost::any(*subDnsAddress);
    }
    if (dnsAddress) {
      res["DnsAddress"] = boost::any(*dnsAddress);
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
    if (m.find("EnableAdminAccess") != m.end() && !m["EnableAdminAccess"].empty()) {
      enableAdminAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableAdminAccess"]));
    }
    if (m.find("SubDomainName") != m.end() && !m["SubDomainName"].empty()) {
      subDomainName = make_shared<string>(boost::any_cast<string>(m["SubDomainName"]));
    }
    if (m.find("DomainUserName") != m.end() && !m["DomainUserName"].empty()) {
      domainUserName = make_shared<string>(boost::any_cast<string>(m["DomainUserName"]));
    }
    if (m.find("EnableCrossDesktopAccess") != m.end() && !m["EnableCrossDesktopAccess"].empty()) {
      enableCrossDesktopAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableCrossDesktopAccess"]));
    }
    if (m.find("CustomSecurityGroupId") != m.end() && !m["CustomSecurityGroupId"].empty()) {
      customSecurityGroupId = make_shared<string>(boost::any_cast<string>(m["CustomSecurityGroupId"]));
    }
    if (m.find("DesktopVpcEndpoint") != m.end() && !m["DesktopVpcEndpoint"].empty()) {
      desktopVpcEndpoint = make_shared<string>(boost::any_cast<string>(m["DesktopVpcEndpoint"]));
    }
    if (m.find("SsoEnabled") != m.end() && !m["SsoEnabled"].empty()) {
      ssoEnabled = make_shared<bool>(boost::any_cast<bool>(m["SsoEnabled"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DesktopAccessType") != m.end() && !m["DesktopAccessType"].empty()) {
      desktopAccessType = make_shared<string>(boost::any_cast<string>(m["DesktopAccessType"]));
    }
    if (m.find("MfaEnabled") != m.end() && !m["MfaEnabled"].empty()) {
      mfaEnabled = make_shared<bool>(boost::any_cast<bool>(m["MfaEnabled"]));
    }
    if (m.find("DirectoryType") != m.end() && !m["DirectoryType"].empty()) {
      directoryType = make_shared<string>(boost::any_cast<string>(m["DirectoryType"]));
    }
    if (m.find("DnsUserName") != m.end() && !m["DnsUserName"].empty()) {
      dnsUserName = make_shared<string>(boost::any_cast<string>(m["DnsUserName"]));
    }
    if (m.find("TrustPassword") != m.end() && !m["TrustPassword"].empty()) {
      trustPassword = make_shared<string>(boost::any_cast<string>(m["TrustPassword"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
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
    if (m.find("FileSystemIds") != m.end() && !m["FileSystemIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FileSystemIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FileSystemIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fileSystemIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubDnsAddress") != m.end() && !m["SubDnsAddress"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubDnsAddress"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubDnsAddress"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subDnsAddress = make_shared<vector<string>>(toVec1);
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
  }


  virtual ~DescribeDirectoriesResponseBodyDirectories() = default;
};
class DescribeDirectoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDirectoriesResponseBodyDirectories>> directories{};

  DescribeDirectoriesResponseBody() {}

  explicit DescribeDirectoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (directories) {
      vector<boost::any> temp1;
      for(auto item1:*directories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Directories"] = boost::any(temp1);
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
class DescribeFrontVulPatchListRequestVulInfo : public Darabonba::Model {
public:
  shared_ptr<string> desktopId{};
  shared_ptr<string> tag{};
  shared_ptr<string> name{};

  DescribeFrontVulPatchListRequestVulInfo() {}

  explicit DescribeFrontVulPatchListRequestVulInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeFrontVulPatchListRequestVulInfo() = default;
};
class DescribeFrontVulPatchListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> operateType{};
  shared_ptr<string> type{};
  shared_ptr<vector<DescribeFrontVulPatchListRequestVulInfo>> vulInfo{};

  DescribeFrontVulPatchListRequest() {}

  explicit DescribeFrontVulPatchListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vulInfo) {
      vector<boost::any> temp1;
      for(auto item1:*vulInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VulInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VulInfo") != m.end() && !m["VulInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["VulInfo"].type()) {
        vector<DescribeFrontVulPatchListRequestVulInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VulInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFrontVulPatchListRequestVulInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vulInfo = make_shared<vector<DescribeFrontVulPatchListRequestVulInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeFrontVulPatchListRequest() = default;
};
class DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> aliasName{};

  DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList() {}

  explicit DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
  }


  virtual ~DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList() = default;
};
class DescribeFrontVulPatchListResponseBodyFrontPatchList : public Darabonba::Model {
public:
  shared_ptr<string> desktopId{};
  shared_ptr<vector<DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList>> patchList{};

  DescribeFrontVulPatchListResponseBodyFrontPatchList() {}

  explicit DescribeFrontVulPatchListResponseBodyFrontPatchList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (patchList) {
      vector<boost::any> temp1;
      for(auto item1:*patchList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PatchList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("PatchList") != m.end() && !m["PatchList"].empty()) {
      if (typeid(vector<boost::any>) == m["PatchList"].type()) {
        vector<DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PatchList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        patchList = make_shared<vector<DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList>>(expect1);
      }
    }
  }


  virtual ~DescribeFrontVulPatchListResponseBodyFrontPatchList() = default;
};
class DescribeFrontVulPatchListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeFrontVulPatchListResponseBodyFrontPatchList>> frontPatchList{};

  DescribeFrontVulPatchListResponseBody() {}

  explicit DescribeFrontVulPatchListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (frontPatchList) {
      vector<boost::any> temp1;
      for(auto item1:*frontPatchList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FrontPatchList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("FrontPatchList") != m.end() && !m["FrontPatchList"].empty()) {
      if (typeid(vector<boost::any>) == m["FrontPatchList"].type()) {
        vector<DescribeFrontVulPatchListResponseBodyFrontPatchList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FrontPatchList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFrontVulPatchListResponseBodyFrontPatchList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frontPatchList = make_shared<vector<DescribeFrontVulPatchListResponseBodyFrontPatchList>>(expect1);
      }
    }
  }


  virtual ~DescribeFrontVulPatchListResponseBody() = default;
};
class DescribeFrontVulPatchListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeFrontVulPatchListResponseBody> body{};

  DescribeFrontVulPatchListResponse() {}

  explicit DescribeFrontVulPatchListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFrontVulPatchListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFrontVulPatchListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFrontVulPatchListResponse() = default;
};
class DescribeGroupedVulRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> lang{};
  shared_ptr<string> type{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> necessity{};
  shared_ptr<string> dealed{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  DescribeGroupedVulRequest() {}

  explicit DescribeGroupedVulRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (necessity) {
      res["Necessity"] = boost::any(*necessity);
    }
    if (dealed) {
      res["Dealed"] = boost::any(*dealed);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("Necessity") != m.end() && !m["Necessity"].empty()) {
      necessity = make_shared<string>(boost::any_cast<string>(m["Necessity"]));
    }
    if (m.find("Dealed") != m.end() && !m["Dealed"].empty()) {
      dealed = make_shared<string>(boost::any_cast<string>(m["Dealed"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeGroupedVulRequest() = default;
};
class DescribeGroupedVulResponseBodyGroupedVulItems : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> nntfCount{};
  shared_ptr<long> handledCount{};
  shared_ptr<string> gmtLast{};
  shared_ptr<string> tags{};
  shared_ptr<long> laterCount{};
  shared_ptr<string> aliasName{};
  shared_ptr<string> name{};
  shared_ptr<long> asapCount{};

  DescribeGroupedVulResponseBodyGroupedVulItems() {}

  explicit DescribeGroupedVulResponseBodyGroupedVulItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (nntfCount) {
      res["NntfCount"] = boost::any(*nntfCount);
    }
    if (handledCount) {
      res["HandledCount"] = boost::any(*handledCount);
    }
    if (gmtLast) {
      res["GmtLast"] = boost::any(*gmtLast);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (laterCount) {
      res["LaterCount"] = boost::any(*laterCount);
    }
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (asapCount) {
      res["AsapCount"] = boost::any(*asapCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("NntfCount") != m.end() && !m["NntfCount"].empty()) {
      nntfCount = make_shared<long>(boost::any_cast<long>(m["NntfCount"]));
    }
    if (m.find("HandledCount") != m.end() && !m["HandledCount"].empty()) {
      handledCount = make_shared<long>(boost::any_cast<long>(m["HandledCount"]));
    }
    if (m.find("GmtLast") != m.end() && !m["GmtLast"].empty()) {
      gmtLast = make_shared<string>(boost::any_cast<string>(m["GmtLast"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("LaterCount") != m.end() && !m["LaterCount"].empty()) {
      laterCount = make_shared<long>(boost::any_cast<long>(m["LaterCount"]));
    }
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AsapCount") != m.end() && !m["AsapCount"].empty()) {
      asapCount = make_shared<long>(boost::any_cast<long>(m["AsapCount"]));
    }
  }


  virtual ~DescribeGroupedVulResponseBodyGroupedVulItems() = default;
};
class DescribeGroupedVulResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeGroupedVulResponseBodyGroupedVulItems>> groupedVulItems{};

  DescribeGroupedVulResponseBody() {}

  explicit DescribeGroupedVulResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (groupedVulItems) {
      vector<boost::any> temp1;
      for(auto item1:*groupedVulItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupedVulItems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("GroupedVulItems") != m.end() && !m["GroupedVulItems"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupedVulItems"].type()) {
        vector<DescribeGroupedVulResponseBodyGroupedVulItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupedVulItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGroupedVulResponseBodyGroupedVulItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupedVulItems = make_shared<vector<DescribeGroupedVulResponseBodyGroupedVulItems>>(expect1);
      }
    }
  }


  virtual ~DescribeGroupedVulResponseBody() = default;
};
class DescribeGroupedVulResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGroupedVulResponseBody> body{};

  DescribeGroupedVulResponse() {}

  explicit DescribeGroupedVulResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGroupedVulResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGroupedVulResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGroupedVulResponse() = default;
};
class DescribeImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> imageType{};
  shared_ptr<string> imageStatus{};
  shared_ptr<bool> gpuCategory{};
  shared_ptr<string> protocolType{};
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
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
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
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
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
  shared_ptr<string> creationTime{};
  shared_ptr<string> status{};
  shared_ptr<string> progress{};
  shared_ptr<long> dataDiskSize{};
  shared_ptr<string> imageType{};
  shared_ptr<string> description{};
  shared_ptr<long> size{};
  shared_ptr<string> osType{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> name{};
  shared_ptr<string> imageId{};
  shared_ptr<bool> gpuCategory{};

  DescribeImagesResponseBodyImages() {}

  explicit DescribeImagesResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (dataDiskSize) {
      res["DataDiskSize"] = boost::any(*dataDiskSize);
    }
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
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
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (gpuCategory) {
      res["GpuCategory"] = boost::any(*gpuCategory);
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
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("DataDiskSize") != m.end() && !m["DataDiskSize"].empty()) {
      dataDiskSize = make_shared<long>(boost::any_cast<long>(m["DataDiskSize"]));
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
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
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("GpuCategory") != m.end() && !m["GpuCategory"].empty()) {
      gpuCategory = make_shared<bool>(boost::any_cast<bool>(m["GpuCategory"]));
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
  shared_ptr<string> invocationStatus{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> repeats{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> output{};
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
    if (invocationStatus) {
      res["InvocationStatus"] = boost::any(*invocationStatus);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (repeats) {
      res["Repeats"] = boost::any(*repeats);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
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
    if (m.find("InvocationStatus") != m.end() && !m["InvocationStatus"].empty()) {
      invocationStatus = make_shared<string>(boost::any_cast<string>(m["InvocationStatus"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Repeats") != m.end() && !m["Repeats"].empty()) {
      repeats = make_shared<long>(boost::any_cast<long>(m["Repeats"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
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
  shared_ptr<string> invokeId{};
  shared_ptr<string> commandType{};
  shared_ptr<string> commandContent{};
  shared_ptr<vector<DescribeInvocationsResponseBodyInvocationsInvokeDesktops>> invokeDesktops{};

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
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (commandType) {
      res["CommandType"] = boost::any(*commandType);
    }
    if (commandContent) {
      res["CommandContent"] = boost::any(*commandContent);
    }
    if (invokeDesktops) {
      vector<boost::any> temp1;
      for(auto item1:*invokeDesktops){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InvokeDesktops"] = boost::any(temp1);
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
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("CommandType") != m.end() && !m["CommandType"].empty()) {
      commandType = make_shared<string>(boost::any_cast<string>(m["CommandType"]));
    }
    if (m.find("CommandContent") != m.end() && !m["CommandContent"].empty()) {
      commandContent = make_shared<string>(boost::any_cast<string>(m["CommandContent"]));
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
class DescribeModificationPriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> rootDiskSizeGib{};
  shared_ptr<long> userDiskSizeGib{};

  DescribeModificationPriceRequest() {}

  explicit DescribeModificationPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (rootDiskSizeGib) {
      res["RootDiskSizeGib"] = boost::any(*rootDiskSizeGib);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("RootDiskSizeGib") != m.end() && !m["RootDiskSizeGib"].empty()) {
      rootDiskSizeGib = make_shared<long>(boost::any_cast<long>(m["RootDiskSizeGib"]));
    }
    if (m.find("UserDiskSizeGib") != m.end() && !m["UserDiskSizeGib"].empty()) {
      userDiskSizeGib = make_shared<long>(boost::any_cast<long>(m["UserDiskSizeGib"]));
    }
  }


  virtual ~DescribeModificationPriceRequest() = default;
};
class DescribeModificationPriceResponseBodyPriceInfoRules : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> ruleId{};

  DescribeModificationPriceResponseBodyPriceInfoRules() {}

  explicit DescribeModificationPriceResponseBodyPriceInfoRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DescribeModificationPriceResponseBodyPriceInfoRules() = default;
};
class DescribeModificationPriceResponseBodyPriceInfoPricePromotions : public Darabonba::Model {
public:
  shared_ptr<string> promotionDesc{};
  shared_ptr<string> optionCode{};
  shared_ptr<bool> selected{};
  shared_ptr<string> promotionId{};
  shared_ptr<string> promotionName{};

  DescribeModificationPriceResponseBodyPriceInfoPricePromotions() {}

  explicit DescribeModificationPriceResponseBodyPriceInfoPricePromotions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promotionDesc) {
      res["PromotionDesc"] = boost::any(*promotionDesc);
    }
    if (optionCode) {
      res["OptionCode"] = boost::any(*optionCode);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromotionDesc") != m.end() && !m["PromotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["PromotionDesc"]));
    }
    if (m.find("OptionCode") != m.end() && !m["OptionCode"].empty()) {
      optionCode = make_shared<string>(boost::any_cast<string>(m["OptionCode"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
  }


  virtual ~DescribeModificationPriceResponseBodyPriceInfoPricePromotions() = default;
};
class DescribeModificationPriceResponseBodyPriceInfoPrice : public Darabonba::Model {
public:
  shared_ptr<double> originalPrice{};
  shared_ptr<double> discountPrice{};
  shared_ptr<string> currency{};
  shared_ptr<double> tradePrice{};
  shared_ptr<vector<DescribeModificationPriceResponseBodyPriceInfoPricePromotions>> promotions{};

  DescribeModificationPriceResponseBodyPriceInfoPrice() {}

  explicit DescribeModificationPriceResponseBodyPriceInfoPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    if (promotions) {
      vector<boost::any> temp1;
      for(auto item1:*promotions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Promotions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
    if (m.find("Promotions") != m.end() && !m["Promotions"].empty()) {
      if (typeid(vector<boost::any>) == m["Promotions"].type()) {
        vector<DescribeModificationPriceResponseBodyPriceInfoPricePromotions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Promotions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeModificationPriceResponseBodyPriceInfoPricePromotions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promotions = make_shared<vector<DescribeModificationPriceResponseBodyPriceInfoPricePromotions>>(expect1);
      }
    }
  }


  virtual ~DescribeModificationPriceResponseBodyPriceInfoPrice() = default;
};
class DescribeModificationPriceResponseBodyPriceInfo : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeModificationPriceResponseBodyPriceInfoRules>> rules{};
  shared_ptr<DescribeModificationPriceResponseBodyPriceInfoPrice> price{};

  DescribeModificationPriceResponseBodyPriceInfo() {}

  explicit DescribeModificationPriceResponseBodyPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (price) {
      res["Price"] = price ? boost::any(price->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<DescribeModificationPriceResponseBodyPriceInfoRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeModificationPriceResponseBodyPriceInfoRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<DescribeModificationPriceResponseBodyPriceInfoRules>>(expect1);
      }
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      if (typeid(map<string, boost::any>) == m["Price"].type()) {
        DescribeModificationPriceResponseBodyPriceInfoPrice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Price"]));
        price = make_shared<DescribeModificationPriceResponseBodyPriceInfoPrice>(model1);
      }
    }
  }


  virtual ~DescribeModificationPriceResponseBodyPriceInfo() = default;
};
class DescribeModificationPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeModificationPriceResponseBodyPriceInfo> priceInfo{};

  DescribeModificationPriceResponseBody() {}

  explicit DescribeModificationPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (priceInfo) {
      res["PriceInfo"] = priceInfo ? boost::any(priceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PriceInfo") != m.end() && !m["PriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PriceInfo"].type()) {
        DescribeModificationPriceResponseBodyPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PriceInfo"]));
        priceInfo = make_shared<DescribeModificationPriceResponseBodyPriceInfo>(model1);
      }
    }
  }


  virtual ~DescribeModificationPriceResponseBody() = default;
};
class DescribeModificationPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeModificationPriceResponseBody> body{};

  DescribeModificationPriceResponse() {}

  explicit DescribeModificationPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeModificationPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeModificationPriceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeModificationPriceResponse() = default;
};
class DescribeNASFileSystemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> fileSystemId{};

  DescribeNASFileSystemsRequest() {}

  explicit DescribeNASFileSystemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FileSystemId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FileSystemId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fileSystemId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeNASFileSystemsRequest() = default;
};
class DescribeNASFileSystemsResponseBodyFileSystems : public Darabonba::Model {
public:
  shared_ptr<long> capacity{};
  shared_ptr<string> mountTargetStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<bool> supportAcl{};
  shared_ptr<string> storageType{};
  shared_ptr<string> officeSiteName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<string> fileSystemName{};
  shared_ptr<long> meteredSize{};
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<string> description{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> fileSystemStatus{};

  DescribeNASFileSystemsResponseBodyFileSystems() {}

  explicit DescribeNASFileSystemsResponseBodyFileSystems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (mountTargetStatus) {
      res["MountTargetStatus"] = boost::any(*mountTargetStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (supportAcl) {
      res["SupportAcl"] = boost::any(*supportAcl);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (officeSiteName) {
      res["OfficeSiteName"] = boost::any(*officeSiteName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (fileSystemName) {
      res["FileSystemName"] = boost::any(*fileSystemName);
    }
    if (meteredSize) {
      res["MeteredSize"] = boost::any(*meteredSize);
    }
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (fileSystemStatus) {
      res["FileSystemStatus"] = boost::any(*fileSystemStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("MountTargetStatus") != m.end() && !m["MountTargetStatus"].empty()) {
      mountTargetStatus = make_shared<string>(boost::any_cast<string>(m["MountTargetStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("SupportAcl") != m.end() && !m["SupportAcl"].empty()) {
      supportAcl = make_shared<bool>(boost::any_cast<bool>(m["SupportAcl"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("OfficeSiteName") != m.end() && !m["OfficeSiteName"].empty()) {
      officeSiteName = make_shared<string>(boost::any_cast<string>(m["OfficeSiteName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("FileSystemName") != m.end() && !m["FileSystemName"].empty()) {
      fileSystemName = make_shared<string>(boost::any_cast<string>(m["FileSystemName"]));
    }
    if (m.find("MeteredSize") != m.end() && !m["MeteredSize"].empty()) {
      meteredSize = make_shared<long>(boost::any_cast<long>(m["MeteredSize"]));
    }
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("FileSystemStatus") != m.end() && !m["FileSystemStatus"].empty()) {
      fileSystemStatus = make_shared<string>(boost::any_cast<string>(m["FileSystemStatus"]));
    }
  }


  virtual ~DescribeNASFileSystemsResponseBodyFileSystems() = default;
};
class DescribeNASFileSystemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeNASFileSystemsResponseBodyFileSystems>> fileSystems{};

  DescribeNASFileSystemsResponseBody() {}

  explicit DescribeNASFileSystemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (fileSystems) {
      vector<boost::any> temp1;
      for(auto item1:*fileSystems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileSystems"] = boost::any(temp1);
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
    if (m.find("FileSystems") != m.end() && !m["FileSystems"].empty()) {
      if (typeid(vector<boost::any>) == m["FileSystems"].type()) {
        vector<DescribeNASFileSystemsResponseBodyFileSystems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileSystems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNASFileSystemsResponseBodyFileSystems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileSystems = make_shared<vector<DescribeNASFileSystemsResponseBodyFileSystems>>(expect1);
      }
    }
  }


  virtual ~DescribeNASFileSystemsResponseBody() = default;
};
class DescribeNASFileSystemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeNASFileSystemsResponseBody> body{};

  DescribeNASFileSystemsResponse() {}

  explicit DescribeNASFileSystemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNASFileSystemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNASFileSystemsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNASFileSystemsResponse() = default;
};
class DescribeNetworkPackagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> networkPackageId{};

  DescribeNetworkPackagesRequest() {}

  explicit DescribeNetworkPackagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (networkPackageId) {
      res["NetworkPackageId"] = boost::any(*networkPackageId);
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
    if (m.find("NetworkPackageId") != m.end() && !m["NetworkPackageId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NetworkPackageId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NetworkPackageId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      networkPackageId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeNetworkPackagesRequest() = default;
};
class DescribeNetworkPackagesResponseBodyNetworkPackages : public Darabonba::Model {
public:
  shared_ptr<string> networkPackageId{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<string> networkPackageStatus{};
  shared_ptr<string> officeSiteName{};
  shared_ptr<vector<string>> eipAddresses{};

  DescribeNetworkPackagesResponseBodyNetworkPackages() {}

  explicit DescribeNetworkPackagesResponseBodyNetworkPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkPackageId) {
      res["NetworkPackageId"] = boost::any(*networkPackageId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (networkPackageStatus) {
      res["NetworkPackageStatus"] = boost::any(*networkPackageStatus);
    }
    if (officeSiteName) {
      res["OfficeSiteName"] = boost::any(*officeSiteName);
    }
    if (eipAddresses) {
      res["EipAddresses"] = boost::any(*eipAddresses);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkPackageId") != m.end() && !m["NetworkPackageId"].empty()) {
      networkPackageId = make_shared<string>(boost::any_cast<string>(m["NetworkPackageId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("NetworkPackageStatus") != m.end() && !m["NetworkPackageStatus"].empty()) {
      networkPackageStatus = make_shared<string>(boost::any_cast<string>(m["NetworkPackageStatus"]));
    }
    if (m.find("OfficeSiteName") != m.end() && !m["OfficeSiteName"].empty()) {
      officeSiteName = make_shared<string>(boost::any_cast<string>(m["OfficeSiteName"]));
    }
    if (m.find("EipAddresses") != m.end() && !m["EipAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EipAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EipAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      eipAddresses = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeNetworkPackagesResponseBodyNetworkPackages() = default;
};
class DescribeNetworkPackagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeNetworkPackagesResponseBodyNetworkPackages>> networkPackages{};

  DescribeNetworkPackagesResponseBody() {}

  explicit DescribeNetworkPackagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (networkPackages) {
      vector<boost::any> temp1;
      for(auto item1:*networkPackages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NetworkPackages"] = boost::any(temp1);
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
    if (m.find("NetworkPackages") != m.end() && !m["NetworkPackages"].empty()) {
      if (typeid(vector<boost::any>) == m["NetworkPackages"].type()) {
        vector<DescribeNetworkPackagesResponseBodyNetworkPackages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetworkPackages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNetworkPackagesResponseBodyNetworkPackages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        networkPackages = make_shared<vector<DescribeNetworkPackagesResponseBodyNetworkPackages>>(expect1);
      }
    }
  }


  virtual ~DescribeNetworkPackagesResponseBody() = default;
};
class DescribeNetworkPackagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeNetworkPackagesResponseBody> body{};

  DescribeNetworkPackagesResponse() {}

  explicit DescribeNetworkPackagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNetworkPackagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNetworkPackagesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNetworkPackagesResponse() = default;
};
class DescribeOfficeSitesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> officeSiteType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> officeSiteId{};

  DescribeOfficeSitesRequest() {}

  explicit DescribeOfficeSitesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (officeSiteType) {
      res["OfficeSiteType"] = boost::any(*officeSiteType);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OfficeSiteType") != m.end() && !m["OfficeSiteType"].empty()) {
      officeSiteType = make_shared<string>(boost::any_cast<string>(m["OfficeSiteType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OfficeSiteId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OfficeSiteId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      officeSiteId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeOfficeSitesRequest() = default;
};
class DescribeOfficeSitesResponseBodyOfficeSitesADConnectors : public Darabonba::Model {
public:
  shared_ptr<string> connectorStatus{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> ADConnectorAddress{};
  shared_ptr<string> networkInterfaceId{};

  DescribeOfficeSitesResponseBodyOfficeSitesADConnectors() {}

  explicit DescribeOfficeSitesResponseBodyOfficeSitesADConnectors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ADConnectorAddress) {
      res["ADConnectorAddress"] = boost::any(*ADConnectorAddress);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
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
    if (m.find("ADConnectorAddress") != m.end() && !m["ADConnectorAddress"].empty()) {
      ADConnectorAddress = make_shared<string>(boost::any_cast<string>(m["ADConnectorAddress"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
  }


  virtual ~DescribeOfficeSitesResponseBodyOfficeSitesADConnectors() = default;
};
class DescribeOfficeSitesResponseBodyOfficeSitesLogs : public Darabonba::Model {
public:
  shared_ptr<string> step{};
  shared_ptr<string> message{};
  shared_ptr<string> timeStamp{};
  shared_ptr<string> level{};

  DescribeOfficeSitesResponseBodyOfficeSitesLogs() {}

  explicit DescribeOfficeSitesResponseBodyOfficeSitesLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeOfficeSitesResponseBodyOfficeSitesLogs() = default;
};
class DescribeOfficeSitesResponseBodyOfficeSites : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> vpcId{};
  shared_ptr<bool> enableAdminAccess{};
  shared_ptr<bool> enableCrossDesktopAccess{};
  shared_ptr<string> desktopVpcEndpoint{};
  shared_ptr<string> desktopAccessType{};
  shared_ptr<string> domainName{};
  shared_ptr<bool> ssoEnabled{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> trustPassword{};
  shared_ptr<string> name{};
  shared_ptr<bool> enableInternetAccess{};
  shared_ptr<string> domainPassword{};
  shared_ptr<string> customSecurityGroupId{};
  shared_ptr<string> domainUserName{};
  shared_ptr<string> subDomainName{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> cenId{};
  shared_ptr<bool> mfaEnabled{};
  shared_ptr<string> networkPackageId{};
  shared_ptr<string> dnsUserName{};
  shared_ptr<string> officeSiteType{};
  shared_ptr<vector<DescribeOfficeSitesResponseBodyOfficeSitesADConnectors>> ADConnectors{};
  shared_ptr<vector<DescribeOfficeSitesResponseBodyOfficeSitesLogs>> logs{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<vector<string>> fileSystemIds{};
  shared_ptr<vector<string>> subDnsAddress{};
  shared_ptr<vector<string>> dnsAddress{};

  DescribeOfficeSitesResponseBodyOfficeSites() {}

  explicit DescribeOfficeSitesResponseBodyOfficeSites(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (enableAdminAccess) {
      res["EnableAdminAccess"] = boost::any(*enableAdminAccess);
    }
    if (enableCrossDesktopAccess) {
      res["EnableCrossDesktopAccess"] = boost::any(*enableCrossDesktopAccess);
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
    if (ssoEnabled) {
      res["SsoEnabled"] = boost::any(*ssoEnabled);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (trustPassword) {
      res["TrustPassword"] = boost::any(*trustPassword);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (enableInternetAccess) {
      res["EnableInternetAccess"] = boost::any(*enableInternetAccess);
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
    if (subDomainName) {
      res["SubDomainName"] = boost::any(*subDomainName);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (mfaEnabled) {
      res["MfaEnabled"] = boost::any(*mfaEnabled);
    }
    if (networkPackageId) {
      res["NetworkPackageId"] = boost::any(*networkPackageId);
    }
    if (dnsUserName) {
      res["DnsUserName"] = boost::any(*dnsUserName);
    }
    if (officeSiteType) {
      res["OfficeSiteType"] = boost::any(*officeSiteType);
    }
    if (ADConnectors) {
      vector<boost::any> temp1;
      for(auto item1:*ADConnectors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ADConnectors"] = boost::any(temp1);
    }
    if (logs) {
      vector<boost::any> temp1;
      for(auto item1:*logs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Logs"] = boost::any(temp1);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (fileSystemIds) {
      res["FileSystemIds"] = boost::any(*fileSystemIds);
    }
    if (subDnsAddress) {
      res["SubDnsAddress"] = boost::any(*subDnsAddress);
    }
    if (dnsAddress) {
      res["DnsAddress"] = boost::any(*dnsAddress);
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
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("EnableAdminAccess") != m.end() && !m["EnableAdminAccess"].empty()) {
      enableAdminAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableAdminAccess"]));
    }
    if (m.find("EnableCrossDesktopAccess") != m.end() && !m["EnableCrossDesktopAccess"].empty()) {
      enableCrossDesktopAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableCrossDesktopAccess"]));
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
    if (m.find("SsoEnabled") != m.end() && !m["SsoEnabled"].empty()) {
      ssoEnabled = make_shared<bool>(boost::any_cast<bool>(m["SsoEnabled"]));
    }
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("TrustPassword") != m.end() && !m["TrustPassword"].empty()) {
      trustPassword = make_shared<string>(boost::any_cast<string>(m["TrustPassword"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("EnableInternetAccess") != m.end() && !m["EnableInternetAccess"].empty()) {
      enableInternetAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableInternetAccess"]));
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
    if (m.find("SubDomainName") != m.end() && !m["SubDomainName"].empty()) {
      subDomainName = make_shared<string>(boost::any_cast<string>(m["SubDomainName"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("MfaEnabled") != m.end() && !m["MfaEnabled"].empty()) {
      mfaEnabled = make_shared<bool>(boost::any_cast<bool>(m["MfaEnabled"]));
    }
    if (m.find("NetworkPackageId") != m.end() && !m["NetworkPackageId"].empty()) {
      networkPackageId = make_shared<string>(boost::any_cast<string>(m["NetworkPackageId"]));
    }
    if (m.find("DnsUserName") != m.end() && !m["DnsUserName"].empty()) {
      dnsUserName = make_shared<string>(boost::any_cast<string>(m["DnsUserName"]));
    }
    if (m.find("OfficeSiteType") != m.end() && !m["OfficeSiteType"].empty()) {
      officeSiteType = make_shared<string>(boost::any_cast<string>(m["OfficeSiteType"]));
    }
    if (m.find("ADConnectors") != m.end() && !m["ADConnectors"].empty()) {
      if (typeid(vector<boost::any>) == m["ADConnectors"].type()) {
        vector<DescribeOfficeSitesResponseBodyOfficeSitesADConnectors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ADConnectors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOfficeSitesResponseBodyOfficeSitesADConnectors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ADConnectors = make_shared<vector<DescribeOfficeSitesResponseBodyOfficeSitesADConnectors>>(expect1);
      }
    }
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<DescribeOfficeSitesResponseBodyOfficeSitesLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Logs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOfficeSitesResponseBodyOfficeSitesLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logs = make_shared<vector<DescribeOfficeSitesResponseBodyOfficeSitesLogs>>(expect1);
      }
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
    if (m.find("FileSystemIds") != m.end() && !m["FileSystemIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FileSystemIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FileSystemIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fileSystemIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubDnsAddress") != m.end() && !m["SubDnsAddress"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubDnsAddress"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubDnsAddress"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subDnsAddress = make_shared<vector<string>>(toVec1);
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
  }


  virtual ~DescribeOfficeSitesResponseBodyOfficeSites() = default;
};
class DescribeOfficeSitesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeOfficeSitesResponseBodyOfficeSites>> officeSites{};

  DescribeOfficeSitesResponseBody() {}

  explicit DescribeOfficeSitesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (officeSites) {
      vector<boost::any> temp1;
      for(auto item1:*officeSites){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OfficeSites"] = boost::any(temp1);
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
    if (m.find("OfficeSites") != m.end() && !m["OfficeSites"].empty()) {
      if (typeid(vector<boost::any>) == m["OfficeSites"].type()) {
        vector<DescribeOfficeSitesResponseBodyOfficeSites> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OfficeSites"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOfficeSitesResponseBodyOfficeSites model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        officeSites = make_shared<vector<DescribeOfficeSitesResponseBodyOfficeSites>>(expect1);
      }
    }
  }


  virtual ~DescribeOfficeSitesResponseBody() = default;
};
class DescribeOfficeSitesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeOfficeSitesResponseBody> body{};

  DescribeOfficeSitesResponse() {}

  explicit DescribeOfficeSitesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOfficeSitesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOfficeSitesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOfficeSitesResponse() = default;
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
class DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> policy{};
  shared_ptr<string> description{};
  shared_ptr<string> portRange{};
  shared_ptr<string> ipProtocol{};
  shared_ptr<string> priority{};
  shared_ptr<string> cidrIp{};

  DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules() {}

  explicit DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (portRange) {
      res["PortRange"] = boost::any(*portRange);
    }
    if (ipProtocol) {
      res["IpProtocol"] = boost::any(*ipProtocol);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (cidrIp) {
      res["CidrIp"] = boost::any(*cidrIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PortRange") != m.end() && !m["PortRange"].empty()) {
      portRange = make_shared<string>(boost::any_cast<string>(m["PortRange"]));
    }
    if (m.find("IpProtocol") != m.end() && !m["IpProtocol"].empty()) {
      ipProtocol = make_shared<string>(boost::any_cast<string>(m["IpProtocol"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("CidrIp") != m.end() && !m["CidrIp"].empty()) {
      cidrIp = make_shared<string>(boost::any_cast<string>(m["CidrIp"]));
    }
  }


  virtual ~DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules() = default;
};
class DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> cidrIp{};

  DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules() {}

  explicit DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (cidrIp) {
      res["CidrIp"] = boost::any(*cidrIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CidrIp") != m.end() && !m["CidrIp"].empty()) {
      cidrIp = make_shared<string>(boost::any_cast<string>(m["CidrIp"]));
    }
  }


  virtual ~DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules() = default;
};
class DescribePolicyGroupsResponseBodyDescribePolicyGroups : public Darabonba::Model {
public:
  shared_ptr<string> policyStatus{};
  shared_ptr<string> html5Access{};
  shared_ptr<string> watermarkType{};
  shared_ptr<string> preemptLogin{};
  shared_ptr<string> watermarkCustomText{};
  shared_ptr<string> clipboard{};
  shared_ptr<string> domainList{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> watermarkTransparency{};
  shared_ptr<string> html5FileTransfer{};
  shared_ptr<string> usbRedirect{};
  shared_ptr<string> policyGroupType{};
  shared_ptr<string> watermark{};
  shared_ptr<string> visualQuality{};
  shared_ptr<long> edsCount{};
  shared_ptr<string> name{};
  shared_ptr<string> localDrive{};
  shared_ptr<vector<DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules>> authorizeSecurityPolicyRules{};
  shared_ptr<vector<DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules>> authorizeAccessPolicyRules{};
  shared_ptr<vector<string>> preemptLoginUsers{};

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
    if (html5Access) {
      res["Html5Access"] = boost::any(*html5Access);
    }
    if (watermarkType) {
      res["WatermarkType"] = boost::any(*watermarkType);
    }
    if (preemptLogin) {
      res["PreemptLogin"] = boost::any(*preemptLogin);
    }
    if (watermarkCustomText) {
      res["WatermarkCustomText"] = boost::any(*watermarkCustomText);
    }
    if (clipboard) {
      res["Clipboard"] = boost::any(*clipboard);
    }
    if (domainList) {
      res["DomainList"] = boost::any(*domainList);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (watermarkTransparency) {
      res["WatermarkTransparency"] = boost::any(*watermarkTransparency);
    }
    if (html5FileTransfer) {
      res["Html5FileTransfer"] = boost::any(*html5FileTransfer);
    }
    if (usbRedirect) {
      res["UsbRedirect"] = boost::any(*usbRedirect);
    }
    if (policyGroupType) {
      res["PolicyGroupType"] = boost::any(*policyGroupType);
    }
    if (watermark) {
      res["Watermark"] = boost::any(*watermark);
    }
    if (visualQuality) {
      res["VisualQuality"] = boost::any(*visualQuality);
    }
    if (edsCount) {
      res["EdsCount"] = boost::any(*edsCount);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (localDrive) {
      res["LocalDrive"] = boost::any(*localDrive);
    }
    if (authorizeSecurityPolicyRules) {
      vector<boost::any> temp1;
      for(auto item1:*authorizeSecurityPolicyRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthorizeSecurityPolicyRules"] = boost::any(temp1);
    }
    if (authorizeAccessPolicyRules) {
      vector<boost::any> temp1;
      for(auto item1:*authorizeAccessPolicyRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthorizeAccessPolicyRules"] = boost::any(temp1);
    }
    if (preemptLoginUsers) {
      res["PreemptLoginUsers"] = boost::any(*preemptLoginUsers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyStatus") != m.end() && !m["PolicyStatus"].empty()) {
      policyStatus = make_shared<string>(boost::any_cast<string>(m["PolicyStatus"]));
    }
    if (m.find("Html5Access") != m.end() && !m["Html5Access"].empty()) {
      html5Access = make_shared<string>(boost::any_cast<string>(m["Html5Access"]));
    }
    if (m.find("WatermarkType") != m.end() && !m["WatermarkType"].empty()) {
      watermarkType = make_shared<string>(boost::any_cast<string>(m["WatermarkType"]));
    }
    if (m.find("PreemptLogin") != m.end() && !m["PreemptLogin"].empty()) {
      preemptLogin = make_shared<string>(boost::any_cast<string>(m["PreemptLogin"]));
    }
    if (m.find("WatermarkCustomText") != m.end() && !m["WatermarkCustomText"].empty()) {
      watermarkCustomText = make_shared<string>(boost::any_cast<string>(m["WatermarkCustomText"]));
    }
    if (m.find("Clipboard") != m.end() && !m["Clipboard"].empty()) {
      clipboard = make_shared<string>(boost::any_cast<string>(m["Clipboard"]));
    }
    if (m.find("DomainList") != m.end() && !m["DomainList"].empty()) {
      domainList = make_shared<string>(boost::any_cast<string>(m["DomainList"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("WatermarkTransparency") != m.end() && !m["WatermarkTransparency"].empty()) {
      watermarkTransparency = make_shared<string>(boost::any_cast<string>(m["WatermarkTransparency"]));
    }
    if (m.find("Html5FileTransfer") != m.end() && !m["Html5FileTransfer"].empty()) {
      html5FileTransfer = make_shared<string>(boost::any_cast<string>(m["Html5FileTransfer"]));
    }
    if (m.find("UsbRedirect") != m.end() && !m["UsbRedirect"].empty()) {
      usbRedirect = make_shared<string>(boost::any_cast<string>(m["UsbRedirect"]));
    }
    if (m.find("PolicyGroupType") != m.end() && !m["PolicyGroupType"].empty()) {
      policyGroupType = make_shared<string>(boost::any_cast<string>(m["PolicyGroupType"]));
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      watermark = make_shared<string>(boost::any_cast<string>(m["Watermark"]));
    }
    if (m.find("VisualQuality") != m.end() && !m["VisualQuality"].empty()) {
      visualQuality = make_shared<string>(boost::any_cast<string>(m["VisualQuality"]));
    }
    if (m.find("EdsCount") != m.end() && !m["EdsCount"].empty()) {
      edsCount = make_shared<long>(boost::any_cast<long>(m["EdsCount"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("LocalDrive") != m.end() && !m["LocalDrive"].empty()) {
      localDrive = make_shared<string>(boost::any_cast<string>(m["LocalDrive"]));
    }
    if (m.find("AuthorizeSecurityPolicyRules") != m.end() && !m["AuthorizeSecurityPolicyRules"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthorizeSecurityPolicyRules"].type()) {
        vector<DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthorizeSecurityPolicyRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authorizeSecurityPolicyRules = make_shared<vector<DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules>>(expect1);
      }
    }
    if (m.find("AuthorizeAccessPolicyRules") != m.end() && !m["AuthorizeAccessPolicyRules"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthorizeAccessPolicyRules"].type()) {
        vector<DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthorizeAccessPolicyRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authorizeAccessPolicyRules = make_shared<vector<DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules>>(expect1);
      }
    }
    if (m.find("PreemptLoginUsers") != m.end() && !m["PreemptLoginUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PreemptLoginUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PreemptLoginUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      preemptLoginUsers = make_shared<vector<string>>(toVec1);
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
class DescribePostPaidDesktopBillsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopGroupId{};
  shared_ptr<string> billStartTime{};
  shared_ptr<string> billEndTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribePostPaidDesktopBillsRequest() {}

  explicit DescribePostPaidDesktopBillsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopGroupId) {
      res["DesktopGroupId"] = boost::any(*desktopGroupId);
    }
    if (billStartTime) {
      res["BillStartTime"] = boost::any(*billStartTime);
    }
    if (billEndTime) {
      res["BillEndTime"] = boost::any(*billEndTime);
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
    if (m.find("DesktopGroupId") != m.end() && !m["DesktopGroupId"].empty()) {
      desktopGroupId = make_shared<string>(boost::any_cast<string>(m["DesktopGroupId"]));
    }
    if (m.find("BillStartTime") != m.end() && !m["BillStartTime"].empty()) {
      billStartTime = make_shared<string>(boost::any_cast<string>(m["BillStartTime"]));
    }
    if (m.find("BillEndTime") != m.end() && !m["BillEndTime"].empty()) {
      billEndTime = make_shared<string>(boost::any_cast<string>(m["BillEndTime"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribePostPaidDesktopBillsRequest() = default;
};
class DescribePostPaidDesktopBillsResponseBodyBills : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> discountPrice{};
  shared_ptr<string> product{};
  shared_ptr<string> priceUnit{};
  shared_ptr<string> cashPayment{};
  shared_ptr<string> payment{};
  shared_ptr<string> originalPrice{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> productDetail{};
  shared_ptr<string> usage{};
  shared_ptr<string> goldNote{};
  shared_ptr<string> usageUnit{};
  shared_ptr<string> price{};
  shared_ptr<string> billStartTime{};
  shared_ptr<string> billType{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> chargeItem{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<string> consumeTime{};
  shared_ptr<string> consumeType{};
  shared_ptr<string> billEndTime{};

  DescribePostPaidDesktopBillsResponseBodyBills() {}

  explicit DescribePostPaidDesktopBillsResponseBodyBills(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (priceUnit) {
      res["PriceUnit"] = boost::any(*priceUnit);
    }
    if (cashPayment) {
      res["CashPayment"] = boost::any(*cashPayment);
    }
    if (payment) {
      res["Payment"] = boost::any(*payment);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (productDetail) {
      res["ProductDetail"] = boost::any(*productDetail);
    }
    if (usage) {
      res["Usage"] = boost::any(*usage);
    }
    if (goldNote) {
      res["GoldNote"] = boost::any(*goldNote);
    }
    if (usageUnit) {
      res["UsageUnit"] = boost::any(*usageUnit);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (billStartTime) {
      res["BillStartTime"] = boost::any(*billStartTime);
    }
    if (billType) {
      res["BillType"] = boost::any(*billType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (chargeItem) {
      res["ChargeItem"] = boost::any(*chargeItem);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (consumeTime) {
      res["ConsumeTime"] = boost::any(*consumeTime);
    }
    if (consumeType) {
      res["ConsumeType"] = boost::any(*consumeType);
    }
    if (billEndTime) {
      res["BillEndTime"] = boost::any(*billEndTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<string>(boost::any_cast<string>(m["DiscountPrice"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("PriceUnit") != m.end() && !m["PriceUnit"].empty()) {
      priceUnit = make_shared<string>(boost::any_cast<string>(m["PriceUnit"]));
    }
    if (m.find("CashPayment") != m.end() && !m["CashPayment"].empty()) {
      cashPayment = make_shared<string>(boost::any_cast<string>(m["CashPayment"]));
    }
    if (m.find("Payment") != m.end() && !m["Payment"].empty()) {
      payment = make_shared<string>(boost::any_cast<string>(m["Payment"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<string>(boost::any_cast<string>(m["OriginalPrice"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ProductDetail") != m.end() && !m["ProductDetail"].empty()) {
      productDetail = make_shared<string>(boost::any_cast<string>(m["ProductDetail"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      usage = make_shared<string>(boost::any_cast<string>(m["Usage"]));
    }
    if (m.find("GoldNote") != m.end() && !m["GoldNote"].empty()) {
      goldNote = make_shared<string>(boost::any_cast<string>(m["GoldNote"]));
    }
    if (m.find("UsageUnit") != m.end() && !m["UsageUnit"].empty()) {
      usageUnit = make_shared<string>(boost::any_cast<string>(m["UsageUnit"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<string>(boost::any_cast<string>(m["Price"]));
    }
    if (m.find("BillStartTime") != m.end() && !m["BillStartTime"].empty()) {
      billStartTime = make_shared<string>(boost::any_cast<string>(m["BillStartTime"]));
    }
    if (m.find("BillType") != m.end() && !m["BillType"].empty()) {
      billType = make_shared<string>(boost::any_cast<string>(m["BillType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ChargeItem") != m.end() && !m["ChargeItem"].empty()) {
      chargeItem = make_shared<string>(boost::any_cast<string>(m["ChargeItem"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("ConsumeTime") != m.end() && !m["ConsumeTime"].empty()) {
      consumeTime = make_shared<string>(boost::any_cast<string>(m["ConsumeTime"]));
    }
    if (m.find("ConsumeType") != m.end() && !m["ConsumeType"].empty()) {
      consumeType = make_shared<string>(boost::any_cast<string>(m["ConsumeType"]));
    }
    if (m.find("BillEndTime") != m.end() && !m["BillEndTime"].empty()) {
      billEndTime = make_shared<string>(boost::any_cast<string>(m["BillEndTime"]));
    }
  }


  virtual ~DescribePostPaidDesktopBillsResponseBodyBills() = default;
};
class DescribePostPaidDesktopBillsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> postPaidDesktopsBillsUrl{};
  shared_ptr<long> postPaidDesktopsCount{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<double> postPaidDesktopsTotalAmount{};
  shared_ptr<vector<DescribePostPaidDesktopBillsResponseBodyBills>> bills{};

  DescribePostPaidDesktopBillsResponseBody() {}

  explicit DescribePostPaidDesktopBillsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (postPaidDesktopsBillsUrl) {
      res["PostPaidDesktopsBillsUrl"] = boost::any(*postPaidDesktopsBillsUrl);
    }
    if (postPaidDesktopsCount) {
      res["PostPaidDesktopsCount"] = boost::any(*postPaidDesktopsCount);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (postPaidDesktopsTotalAmount) {
      res["PostPaidDesktopsTotalAmount"] = boost::any(*postPaidDesktopsTotalAmount);
    }
    if (bills) {
      vector<boost::any> temp1;
      for(auto item1:*bills){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bills"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PostPaidDesktopsBillsUrl") != m.end() && !m["PostPaidDesktopsBillsUrl"].empty()) {
      postPaidDesktopsBillsUrl = make_shared<string>(boost::any_cast<string>(m["PostPaidDesktopsBillsUrl"]));
    }
    if (m.find("PostPaidDesktopsCount") != m.end() && !m["PostPaidDesktopsCount"].empty()) {
      postPaidDesktopsCount = make_shared<long>(boost::any_cast<long>(m["PostPaidDesktopsCount"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PostPaidDesktopsTotalAmount") != m.end() && !m["PostPaidDesktopsTotalAmount"].empty()) {
      postPaidDesktopsTotalAmount = make_shared<double>(boost::any_cast<double>(m["PostPaidDesktopsTotalAmount"]));
    }
    if (m.find("Bills") != m.end() && !m["Bills"].empty()) {
      if (typeid(vector<boost::any>) == m["Bills"].type()) {
        vector<DescribePostPaidDesktopBillsResponseBodyBills> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bills"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePostPaidDesktopBillsResponseBodyBills model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bills = make_shared<vector<DescribePostPaidDesktopBillsResponseBodyBills>>(expect1);
      }
    }
  }


  virtual ~DescribePostPaidDesktopBillsResponseBody() = default;
};
class DescribePostPaidDesktopBillsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePostPaidDesktopBillsResponseBody> body{};

  DescribePostPaidDesktopBillsResponse() {}

  explicit DescribePostPaidDesktopBillsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePostPaidDesktopBillsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePostPaidDesktopBillsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePostPaidDesktopBillsResponse() = default;
};
class DescribePriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> rootDiskSizeGib{};
  shared_ptr<long> userDiskSizeGib{};
  shared_ptr<string> osType{};
  shared_ptr<string> periodUnit{};
  shared_ptr<long> period{};
  shared_ptr<long> amount{};
  shared_ptr<string> promotionId{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> bandwidth{};

  DescribePriceRequest() {}

  explicit DescribePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (rootDiskSizeGib) {
      res["RootDiskSizeGib"] = boost::any(*rootDiskSizeGib);
    }
    if (userDiskSizeGib) {
      res["UserDiskSizeGib"] = boost::any(*userDiskSizeGib);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
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
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("RootDiskSizeGib") != m.end() && !m["RootDiskSizeGib"].empty()) {
      rootDiskSizeGib = make_shared<long>(boost::any_cast<long>(m["RootDiskSizeGib"]));
    }
    if (m.find("UserDiskSizeGib") != m.end() && !m["UserDiskSizeGib"].empty()) {
      userDiskSizeGib = make_shared<long>(boost::any_cast<long>(m["UserDiskSizeGib"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
  }


  virtual ~DescribePriceRequest() = default;
};
class DescribePriceResponseBodyPriceInfoRules : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> ruleId{};

  DescribePriceResponseBodyPriceInfoRules() {}

  explicit DescribePriceResponseBodyPriceInfoRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DescribePriceResponseBodyPriceInfoRules() = default;
};
class DescribePriceResponseBodyPriceInfoPricePromotions : public Darabonba::Model {
public:
  shared_ptr<string> promotionDesc{};
  shared_ptr<string> optionCode{};
  shared_ptr<bool> selected{};
  shared_ptr<string> promotionId{};
  shared_ptr<string> promotionName{};

  DescribePriceResponseBodyPriceInfoPricePromotions() {}

  explicit DescribePriceResponseBodyPriceInfoPricePromotions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promotionDesc) {
      res["PromotionDesc"] = boost::any(*promotionDesc);
    }
    if (optionCode) {
      res["OptionCode"] = boost::any(*optionCode);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromotionDesc") != m.end() && !m["PromotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["PromotionDesc"]));
    }
    if (m.find("OptionCode") != m.end() && !m["OptionCode"].empty()) {
      optionCode = make_shared<string>(boost::any_cast<string>(m["OptionCode"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
  }


  virtual ~DescribePriceResponseBodyPriceInfoPricePromotions() = default;
};
class DescribePriceResponseBodyPriceInfoPrice : public Darabonba::Model {
public:
  shared_ptr<double> originalPrice{};
  shared_ptr<double> discountPrice{};
  shared_ptr<string> currency{};
  shared_ptr<double> tradePrice{};
  shared_ptr<vector<DescribePriceResponseBodyPriceInfoPricePromotions>> promotions{};

  DescribePriceResponseBodyPriceInfoPrice() {}

  explicit DescribePriceResponseBodyPriceInfoPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    if (promotions) {
      vector<boost::any> temp1;
      for(auto item1:*promotions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Promotions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
    if (m.find("Promotions") != m.end() && !m["Promotions"].empty()) {
      if (typeid(vector<boost::any>) == m["Promotions"].type()) {
        vector<DescribePriceResponseBodyPriceInfoPricePromotions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Promotions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePriceResponseBodyPriceInfoPricePromotions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promotions = make_shared<vector<DescribePriceResponseBodyPriceInfoPricePromotions>>(expect1);
      }
    }
  }


  virtual ~DescribePriceResponseBodyPriceInfoPrice() = default;
};
class DescribePriceResponseBodyPriceInfo : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePriceResponseBodyPriceInfoRules>> rules{};
  shared_ptr<DescribePriceResponseBodyPriceInfoPrice> price{};

  DescribePriceResponseBodyPriceInfo() {}

  explicit DescribePriceResponseBodyPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (price) {
      res["Price"] = price ? boost::any(price->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<DescribePriceResponseBodyPriceInfoRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePriceResponseBodyPriceInfoRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<DescribePriceResponseBodyPriceInfoRules>>(expect1);
      }
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      if (typeid(map<string, boost::any>) == m["Price"].type()) {
        DescribePriceResponseBodyPriceInfoPrice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Price"]));
        price = make_shared<DescribePriceResponseBodyPriceInfoPrice>(model1);
      }
    }
  }


  virtual ~DescribePriceResponseBodyPriceInfo() = default;
};
class DescribePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribePriceResponseBodyPriceInfo> priceInfo{};

  DescribePriceResponseBody() {}

  explicit DescribePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (priceInfo) {
      res["PriceInfo"] = priceInfo ? boost::any(priceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PriceInfo") != m.end() && !m["PriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PriceInfo"].type()) {
        DescribePriceResponseBodyPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PriceInfo"]));
        priceInfo = make_shared<DescribePriceResponseBodyPriceInfo>(model1);
      }
    }
  }


  virtual ~DescribePriceResponseBody() = default;
};
class DescribePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePriceResponseBody> body{};

  DescribePriceResponse() {}

  explicit DescribePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePriceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePriceResponse() = default;
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
class DescribeScaleStrategysRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> scaleStrategyName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeScaleStrategysRequest() {}

  explicit DescribeScaleStrategysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scaleStrategyName) {
      res["ScaleStrategyName"] = boost::any(*scaleStrategyName);
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
    if (m.find("ScaleStrategyName") != m.end() && !m["ScaleStrategyName"].empty()) {
      scaleStrategyName = make_shared<string>(boost::any_cast<string>(m["ScaleStrategyName"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeScaleStrategysRequest() = default;
};
class DescribeScaleStrategysResponseBodyScaleStrategys : public Darabonba::Model {
public:
  shared_ptr<string> scaleStrategyId{};
  shared_ptr<long> maxDesktopsCount{};
  shared_ptr<long> maxAvailableDesktopsCount{};
  shared_ptr<string> scaleStrategyName{};
  shared_ptr<string> scaleStrategyType{};
  shared_ptr<long> minDesktopsCount{};
  shared_ptr<long> minAvailableDesktopsCount{};
  shared_ptr<long> scaleStep{};

  DescribeScaleStrategysResponseBodyScaleStrategys() {}

  explicit DescribeScaleStrategysResponseBodyScaleStrategys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scaleStrategyId) {
      res["ScaleStrategyId"] = boost::any(*scaleStrategyId);
    }
    if (maxDesktopsCount) {
      res["MaxDesktopsCount"] = boost::any(*maxDesktopsCount);
    }
    if (maxAvailableDesktopsCount) {
      res["MaxAvailableDesktopsCount"] = boost::any(*maxAvailableDesktopsCount);
    }
    if (scaleStrategyName) {
      res["ScaleStrategyName"] = boost::any(*scaleStrategyName);
    }
    if (scaleStrategyType) {
      res["ScaleStrategyType"] = boost::any(*scaleStrategyType);
    }
    if (minDesktopsCount) {
      res["MinDesktopsCount"] = boost::any(*minDesktopsCount);
    }
    if (minAvailableDesktopsCount) {
      res["MinAvailableDesktopsCount"] = boost::any(*minAvailableDesktopsCount);
    }
    if (scaleStep) {
      res["ScaleStep"] = boost::any(*scaleStep);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScaleStrategyId") != m.end() && !m["ScaleStrategyId"].empty()) {
      scaleStrategyId = make_shared<string>(boost::any_cast<string>(m["ScaleStrategyId"]));
    }
    if (m.find("MaxDesktopsCount") != m.end() && !m["MaxDesktopsCount"].empty()) {
      maxDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MaxDesktopsCount"]));
    }
    if (m.find("MaxAvailableDesktopsCount") != m.end() && !m["MaxAvailableDesktopsCount"].empty()) {
      maxAvailableDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MaxAvailableDesktopsCount"]));
    }
    if (m.find("ScaleStrategyName") != m.end() && !m["ScaleStrategyName"].empty()) {
      scaleStrategyName = make_shared<string>(boost::any_cast<string>(m["ScaleStrategyName"]));
    }
    if (m.find("ScaleStrategyType") != m.end() && !m["ScaleStrategyType"].empty()) {
      scaleStrategyType = make_shared<string>(boost::any_cast<string>(m["ScaleStrategyType"]));
    }
    if (m.find("MinDesktopsCount") != m.end() && !m["MinDesktopsCount"].empty()) {
      minDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MinDesktopsCount"]));
    }
    if (m.find("MinAvailableDesktopsCount") != m.end() && !m["MinAvailableDesktopsCount"].empty()) {
      minAvailableDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MinAvailableDesktopsCount"]));
    }
    if (m.find("ScaleStep") != m.end() && !m["ScaleStep"].empty()) {
      scaleStep = make_shared<long>(boost::any_cast<long>(m["ScaleStep"]));
    }
  }


  virtual ~DescribeScaleStrategysResponseBodyScaleStrategys() = default;
};
class DescribeScaleStrategysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeScaleStrategysResponseBodyScaleStrategys>> scaleStrategys{};

  DescribeScaleStrategysResponseBody() {}

  explicit DescribeScaleStrategysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (scaleStrategys) {
      vector<boost::any> temp1;
      for(auto item1:*scaleStrategys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScaleStrategys"] = boost::any(temp1);
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
    if (m.find("ScaleStrategys") != m.end() && !m["ScaleStrategys"].empty()) {
      if (typeid(vector<boost::any>) == m["ScaleStrategys"].type()) {
        vector<DescribeScaleStrategysResponseBodyScaleStrategys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScaleStrategys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScaleStrategysResponseBodyScaleStrategys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scaleStrategys = make_shared<vector<DescribeScaleStrategysResponseBodyScaleStrategys>>(expect1);
      }
    }
  }


  virtual ~DescribeScaleStrategysResponseBody() = default;
};
class DescribeScaleStrategysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScaleStrategysResponseBody> body{};

  DescribeScaleStrategysResponse() {}

  explicit DescribeScaleStrategysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScaleStrategysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScaleStrategysResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScaleStrategysResponse() = default;
};
class DescribeScanTaskProgressRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> taskId{};

  DescribeScanTaskProgressRequest() {}

  explicit DescribeScanTaskProgressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~DescribeScanTaskProgressRequest() = default;
};
class DescribeScanTaskProgressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> createTime{};

  DescribeScanTaskProgressResponseBody() {}

  explicit DescribeScanTaskProgressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
  }


  virtual ~DescribeScanTaskProgressResponseBody() = default;
};
class DescribeScanTaskProgressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScanTaskProgressResponseBody> body{};

  DescribeScanTaskProgressResponse() {}

  explicit DescribeScanTaskProgressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScanTaskProgressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScanTaskProgressResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScanTaskProgressResponse() = default;
};
class DescribeSecurityEventOperationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> securityEventId{};

  DescribeSecurityEventOperationsRequest() {}

  explicit DescribeSecurityEventOperationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityEventId) {
      res["SecurityEventId"] = boost::any(*securityEventId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityEventId") != m.end() && !m["SecurityEventId"].empty()) {
      securityEventId = make_shared<long>(boost::any_cast<long>(m["SecurityEventId"]));
    }
  }


  virtual ~DescribeSecurityEventOperationsRequest() = default;
};
class DescribeSecurityEventOperationsResponseBodySecurityEventOperations : public Darabonba::Model {
public:
  shared_ptr<string> operationParams{};
  shared_ptr<string> operationCode{};
  shared_ptr<bool> userCanOperate{};

  DescribeSecurityEventOperationsResponseBodySecurityEventOperations() {}

  explicit DescribeSecurityEventOperationsResponseBodySecurityEventOperations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationParams) {
      res["OperationParams"] = boost::any(*operationParams);
    }
    if (operationCode) {
      res["OperationCode"] = boost::any(*operationCode);
    }
    if (userCanOperate) {
      res["UserCanOperate"] = boost::any(*userCanOperate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationParams") != m.end() && !m["OperationParams"].empty()) {
      operationParams = make_shared<string>(boost::any_cast<string>(m["OperationParams"]));
    }
    if (m.find("OperationCode") != m.end() && !m["OperationCode"].empty()) {
      operationCode = make_shared<string>(boost::any_cast<string>(m["OperationCode"]));
    }
    if (m.find("UserCanOperate") != m.end() && !m["UserCanOperate"].empty()) {
      userCanOperate = make_shared<bool>(boost::any_cast<bool>(m["UserCanOperate"]));
    }
  }


  virtual ~DescribeSecurityEventOperationsResponseBodySecurityEventOperations() = default;
};
class DescribeSecurityEventOperationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSecurityEventOperationsResponseBodySecurityEventOperations>> securityEventOperations{};

  DescribeSecurityEventOperationsResponseBody() {}

  explicit DescribeSecurityEventOperationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityEventOperations) {
      vector<boost::any> temp1;
      for(auto item1:*securityEventOperations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityEventOperations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityEventOperations") != m.end() && !m["SecurityEventOperations"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityEventOperations"].type()) {
        vector<DescribeSecurityEventOperationsResponseBodySecurityEventOperations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityEventOperations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSecurityEventOperationsResponseBodySecurityEventOperations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityEventOperations = make_shared<vector<DescribeSecurityEventOperationsResponseBodySecurityEventOperations>>(expect1);
      }
    }
  }


  virtual ~DescribeSecurityEventOperationsResponseBody() = default;
};
class DescribeSecurityEventOperationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSecurityEventOperationsResponseBody> body{};

  DescribeSecurityEventOperationsResponse() {}

  explicit DescribeSecurityEventOperationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSecurityEventOperationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSecurityEventOperationsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSecurityEventOperationsResponse() = default;
};
class DescribeSecurityEventOperationStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> taskId{};
  shared_ptr<vector<string>> securityEventId{};

  DescribeSecurityEventOperationStatusRequest() {}

  explicit DescribeSecurityEventOperationStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (securityEventId) {
      res["SecurityEventId"] = boost::any(*securityEventId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("SecurityEventId") != m.end() && !m["SecurityEventId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityEventId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityEventId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityEventId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeSecurityEventOperationStatusRequest() = default;
};
class DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatuses : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<long> securityEventId{};
  shared_ptr<string> errorCode{};

  DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatuses() {}

  explicit DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatuses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (securityEventId) {
      res["SecurityEventId"] = boost::any(*securityEventId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SecurityEventId") != m.end() && !m["SecurityEventId"].empty()) {
      securityEventId = make_shared<long>(boost::any_cast<long>(m["SecurityEventId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatuses() = default;
};
class DescribeSecurityEventOperationStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> taskStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatuses>> securityEventOperationStatuses{};

  DescribeSecurityEventOperationStatusResponseBody() {}

  explicit DescribeSecurityEventOperationStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityEventOperationStatuses) {
      vector<boost::any> temp1;
      for(auto item1:*securityEventOperationStatuses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityEventOperationStatuses"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityEventOperationStatuses") != m.end() && !m["SecurityEventOperationStatuses"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityEventOperationStatuses"].type()) {
        vector<DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatuses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityEventOperationStatuses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatuses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityEventOperationStatuses = make_shared<vector<DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatuses>>(expect1);
      }
    }
  }


  virtual ~DescribeSecurityEventOperationStatusResponseBody() = default;
};
class DescribeSecurityEventOperationStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSecurityEventOperationStatusResponseBody> body{};

  DescribeSecurityEventOperationStatusResponse() {}

  explicit DescribeSecurityEventOperationStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSecurityEventOperationStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSecurityEventOperationStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSecurityEventOperationStatusResponse() = default;
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
class DescribeSuspEventOverviewRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeSuspEventOverviewRequest() {}

  explicit DescribeSuspEventOverviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeSuspEventOverviewRequest() = default;
};
class DescribeSuspEventOverviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> suspiciousCount{};
  shared_ptr<long> remindCount{};
  shared_ptr<long> seriousCount{};
  shared_ptr<string> requestId{};

  DescribeSuspEventOverviewResponseBody() {}

  explicit DescribeSuspEventOverviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (suspiciousCount) {
      res["SuspiciousCount"] = boost::any(*suspiciousCount);
    }
    if (remindCount) {
      res["RemindCount"] = boost::any(*remindCount);
    }
    if (seriousCount) {
      res["SeriousCount"] = boost::any(*seriousCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SuspiciousCount") != m.end() && !m["SuspiciousCount"].empty()) {
      suspiciousCount = make_shared<long>(boost::any_cast<long>(m["SuspiciousCount"]));
    }
    if (m.find("RemindCount") != m.end() && !m["RemindCount"].empty()) {
      remindCount = make_shared<long>(boost::any_cast<long>(m["RemindCount"]));
    }
    if (m.find("SeriousCount") != m.end() && !m["SeriousCount"].empty()) {
      seriousCount = make_shared<long>(boost::any_cast<long>(m["SeriousCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSuspEventOverviewResponseBody() = default;
};
class DescribeSuspEventOverviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSuspEventOverviewResponseBody> body{};

  DescribeSuspEventOverviewResponse() {}

  explicit DescribeSuspEventOverviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSuspEventOverviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSuspEventOverviewResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSuspEventOverviewResponse() = default;
};
class DescribeSuspEventQuaraFilesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  DescribeSuspEventQuaraFilesRequest() {}

  explicit DescribeSuspEventQuaraFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeSuspEventQuaraFilesRequest() = default;
};
class DescribeSuspEventQuaraFilesResponseBodyQuaraFiles : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> eventName{};
  shared_ptr<string> eventType{};
  shared_ptr<string> path{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> md5{};
  shared_ptr<string> tag{};
  shared_ptr<string> desktopId{};
  shared_ptr<long> id{};
  shared_ptr<string> modifyTime{};

  DescribeSuspEventQuaraFilesResponseBodyQuaraFiles() {}

  explicit DescribeSuspEventQuaraFilesResponseBodyQuaraFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
  }


  virtual ~DescribeSuspEventQuaraFilesResponseBodyQuaraFiles() = default;
};
class DescribeSuspEventQuaraFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeSuspEventQuaraFilesResponseBodyQuaraFiles>> quaraFiles{};

  DescribeSuspEventQuaraFilesResponseBody() {}

  explicit DescribeSuspEventQuaraFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (quaraFiles) {
      vector<boost::any> temp1;
      for(auto item1:*quaraFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QuaraFiles"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("QuaraFiles") != m.end() && !m["QuaraFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["QuaraFiles"].type()) {
        vector<DescribeSuspEventQuaraFilesResponseBodyQuaraFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QuaraFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSuspEventQuaraFilesResponseBodyQuaraFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quaraFiles = make_shared<vector<DescribeSuspEventQuaraFilesResponseBodyQuaraFiles>>(expect1);
      }
    }
  }


  virtual ~DescribeSuspEventQuaraFilesResponseBody() = default;
};
class DescribeSuspEventQuaraFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSuspEventQuaraFilesResponseBody> body{};

  DescribeSuspEventQuaraFilesResponse() {}

  explicit DescribeSuspEventQuaraFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSuspEventQuaraFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSuspEventQuaraFilesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSuspEventQuaraFilesResponse() = default;
};
class DescribeSuspEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> lang{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> dealed{};
  shared_ptr<string> levels{};
  shared_ptr<string> parentEventType{};
  shared_ptr<string> alarmUniqueInfo{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  DescribeSuspEventsRequest() {}

  explicit DescribeSuspEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (dealed) {
      res["Dealed"] = boost::any(*dealed);
    }
    if (levels) {
      res["Levels"] = boost::any(*levels);
    }
    if (parentEventType) {
      res["ParentEventType"] = boost::any(*parentEventType);
    }
    if (alarmUniqueInfo) {
      res["AlarmUniqueInfo"] = boost::any(*alarmUniqueInfo);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("Dealed") != m.end() && !m["Dealed"].empty()) {
      dealed = make_shared<string>(boost::any_cast<string>(m["Dealed"]));
    }
    if (m.find("Levels") != m.end() && !m["Levels"].empty()) {
      levels = make_shared<string>(boost::any_cast<string>(m["Levels"]));
    }
    if (m.find("ParentEventType") != m.end() && !m["ParentEventType"].empty()) {
      parentEventType = make_shared<string>(boost::any_cast<string>(m["ParentEventType"]));
    }
    if (m.find("AlarmUniqueInfo") != m.end() && !m["AlarmUniqueInfo"].empty()) {
      alarmUniqueInfo = make_shared<string>(boost::any_cast<string>(m["AlarmUniqueInfo"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeSuspEventsRequest() = default;
};
class DescribeSuspEventsResponseBodySuspEventsDetails : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};
  shared_ptr<string> nameDisplay{};
  shared_ptr<string> name{};
  shared_ptr<string> valueDisplay{};

  DescribeSuspEventsResponseBodySuspEventsDetails() {}

  explicit DescribeSuspEventsResponseBodySuspEventsDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (nameDisplay) {
      res["NameDisplay"] = boost::any(*nameDisplay);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (valueDisplay) {
      res["ValueDisplay"] = boost::any(*valueDisplay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("NameDisplay") != m.end() && !m["NameDisplay"].empty()) {
      nameDisplay = make_shared<string>(boost::any_cast<string>(m["NameDisplay"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ValueDisplay") != m.end() && !m["ValueDisplay"].empty()) {
      valueDisplay = make_shared<string>(boost::any_cast<string>(m["ValueDisplay"]));
    }
  }


  virtual ~DescribeSuspEventsResponseBodySuspEventsDetails() = default;
};
class DescribeSuspEventsResponseBodySuspEvents : public Darabonba::Model {
public:
  shared_ptr<string> dataSource{};
  shared_ptr<string> eventSubType{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> occurrenceTime{};
  shared_ptr<string> alarmEventTypeDisplay{};
  shared_ptr<string> alarmUniqueInfo{};
  shared_ptr<string> desc{};
  shared_ptr<string> alarmEventNameDisplay{};
  shared_ptr<bool> canCancelFault{};
  shared_ptr<string> lastTime{};
  shared_ptr<string> operateMsg{};
  shared_ptr<string> canBeDealOnLine{};
  shared_ptr<string> alarmEventType{};
  shared_ptr<long> eventStatus{};
  shared_ptr<string> operateErrorCode{};
  shared_ptr<string> alarmEventName{};
  shared_ptr<string> name{};
  shared_ptr<string> uniqueInfo{};
  shared_ptr<string> level{};
  shared_ptr<long> id{};
  shared_ptr<vector<DescribeSuspEventsResponseBodySuspEventsDetails>> details{};

  DescribeSuspEventsResponseBodySuspEvents() {}

  explicit DescribeSuspEventsResponseBodySuspEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSource) {
      res["DataSource"] = boost::any(*dataSource);
    }
    if (eventSubType) {
      res["EventSubType"] = boost::any(*eventSubType);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (occurrenceTime) {
      res["OccurrenceTime"] = boost::any(*occurrenceTime);
    }
    if (alarmEventTypeDisplay) {
      res["AlarmEventTypeDisplay"] = boost::any(*alarmEventTypeDisplay);
    }
    if (alarmUniqueInfo) {
      res["AlarmUniqueInfo"] = boost::any(*alarmUniqueInfo);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (alarmEventNameDisplay) {
      res["AlarmEventNameDisplay"] = boost::any(*alarmEventNameDisplay);
    }
    if (canCancelFault) {
      res["CanCancelFault"] = boost::any(*canCancelFault);
    }
    if (lastTime) {
      res["LastTime"] = boost::any(*lastTime);
    }
    if (operateMsg) {
      res["OperateMsg"] = boost::any(*operateMsg);
    }
    if (canBeDealOnLine) {
      res["CanBeDealOnLine"] = boost::any(*canBeDealOnLine);
    }
    if (alarmEventType) {
      res["AlarmEventType"] = boost::any(*alarmEventType);
    }
    if (eventStatus) {
      res["EventStatus"] = boost::any(*eventStatus);
    }
    if (operateErrorCode) {
      res["OperateErrorCode"] = boost::any(*operateErrorCode);
    }
    if (alarmEventName) {
      res["AlarmEventName"] = boost::any(*alarmEventName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (uniqueInfo) {
      res["UniqueInfo"] = boost::any(*uniqueInfo);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (details) {
      vector<boost::any> temp1;
      for(auto item1:*details){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Details"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      dataSource = make_shared<string>(boost::any_cast<string>(m["DataSource"]));
    }
    if (m.find("EventSubType") != m.end() && !m["EventSubType"].empty()) {
      eventSubType = make_shared<string>(boost::any_cast<string>(m["EventSubType"]));
    }
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("OccurrenceTime") != m.end() && !m["OccurrenceTime"].empty()) {
      occurrenceTime = make_shared<string>(boost::any_cast<string>(m["OccurrenceTime"]));
    }
    if (m.find("AlarmEventTypeDisplay") != m.end() && !m["AlarmEventTypeDisplay"].empty()) {
      alarmEventTypeDisplay = make_shared<string>(boost::any_cast<string>(m["AlarmEventTypeDisplay"]));
    }
    if (m.find("AlarmUniqueInfo") != m.end() && !m["AlarmUniqueInfo"].empty()) {
      alarmUniqueInfo = make_shared<string>(boost::any_cast<string>(m["AlarmUniqueInfo"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("AlarmEventNameDisplay") != m.end() && !m["AlarmEventNameDisplay"].empty()) {
      alarmEventNameDisplay = make_shared<string>(boost::any_cast<string>(m["AlarmEventNameDisplay"]));
    }
    if (m.find("CanCancelFault") != m.end() && !m["CanCancelFault"].empty()) {
      canCancelFault = make_shared<bool>(boost::any_cast<bool>(m["CanCancelFault"]));
    }
    if (m.find("LastTime") != m.end() && !m["LastTime"].empty()) {
      lastTime = make_shared<string>(boost::any_cast<string>(m["LastTime"]));
    }
    if (m.find("OperateMsg") != m.end() && !m["OperateMsg"].empty()) {
      operateMsg = make_shared<string>(boost::any_cast<string>(m["OperateMsg"]));
    }
    if (m.find("CanBeDealOnLine") != m.end() && !m["CanBeDealOnLine"].empty()) {
      canBeDealOnLine = make_shared<string>(boost::any_cast<string>(m["CanBeDealOnLine"]));
    }
    if (m.find("AlarmEventType") != m.end() && !m["AlarmEventType"].empty()) {
      alarmEventType = make_shared<string>(boost::any_cast<string>(m["AlarmEventType"]));
    }
    if (m.find("EventStatus") != m.end() && !m["EventStatus"].empty()) {
      eventStatus = make_shared<long>(boost::any_cast<long>(m["EventStatus"]));
    }
    if (m.find("OperateErrorCode") != m.end() && !m["OperateErrorCode"].empty()) {
      operateErrorCode = make_shared<string>(boost::any_cast<string>(m["OperateErrorCode"]));
    }
    if (m.find("AlarmEventName") != m.end() && !m["AlarmEventName"].empty()) {
      alarmEventName = make_shared<string>(boost::any_cast<string>(m["AlarmEventName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UniqueInfo") != m.end() && !m["UniqueInfo"].empty()) {
      uniqueInfo = make_shared<string>(boost::any_cast<string>(m["UniqueInfo"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      if (typeid(vector<boost::any>) == m["Details"].type()) {
        vector<DescribeSuspEventsResponseBodySuspEventsDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSuspEventsResponseBodySuspEventsDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        details = make_shared<vector<DescribeSuspEventsResponseBodySuspEventsDetails>>(expect1);
      }
    }
  }


  virtual ~DescribeSuspEventsResponseBodySuspEvents() = default;
};
class DescribeSuspEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeSuspEventsResponseBodySuspEvents>> suspEvents{};

  DescribeSuspEventsResponseBody() {}

  explicit DescribeSuspEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (suspEvents) {
      vector<boost::any> temp1;
      for(auto item1:*suspEvents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SuspEvents"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("SuspEvents") != m.end() && !m["SuspEvents"].empty()) {
      if (typeid(vector<boost::any>) == m["SuspEvents"].type()) {
        vector<DescribeSuspEventsResponseBodySuspEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SuspEvents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSuspEventsResponseBodySuspEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        suspEvents = make_shared<vector<DescribeSuspEventsResponseBodySuspEvents>>(expect1);
      }
    }
  }


  virtual ~DescribeSuspEventsResponseBody() = default;
};
class DescribeSuspEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSuspEventsResponseBody> body{};

  DescribeSuspEventsResponse() {}

  explicit DescribeSuspEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSuspEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSuspEventsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSuspEventsResponse() = default;
};
class DescribeUserConnectionRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopGroupId{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> endUserType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeUserConnectionRecordsRequest() {}

  explicit DescribeUserConnectionRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopGroupId) {
      res["DesktopGroupId"] = boost::any(*desktopGroupId);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (endUserType) {
      res["EndUserType"] = boost::any(*endUserType);
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
    if (m.find("DesktopGroupId") != m.end() && !m["DesktopGroupId"].empty()) {
      desktopGroupId = make_shared<string>(boost::any_cast<string>(m["DesktopGroupId"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("EndUserType") != m.end() && !m["EndUserType"].empty()) {
      endUserType = make_shared<string>(boost::any_cast<string>(m["EndUserType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeUserConnectionRecordsRequest() = default;
};
class DescribeUserConnectionRecordsResponseBodyConnectionRecords : public Darabonba::Model {
public:
  shared_ptr<string> connectionRecordId{};
  shared_ptr<string> connectStartTime{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> connectDuration{};
  shared_ptr<string> connectEndTime{};
  shared_ptr<string> desktopId{};

  DescribeUserConnectionRecordsResponseBodyConnectionRecords() {}

  explicit DescribeUserConnectionRecordsResponseBodyConnectionRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionRecordId) {
      res["ConnectionRecordId"] = boost::any(*connectionRecordId);
    }
    if (connectStartTime) {
      res["ConnectStartTime"] = boost::any(*connectStartTime);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (connectDuration) {
      res["ConnectDuration"] = boost::any(*connectDuration);
    }
    if (connectEndTime) {
      res["ConnectEndTime"] = boost::any(*connectEndTime);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionRecordId") != m.end() && !m["ConnectionRecordId"].empty()) {
      connectionRecordId = make_shared<string>(boost::any_cast<string>(m["ConnectionRecordId"]));
    }
    if (m.find("ConnectStartTime") != m.end() && !m["ConnectStartTime"].empty()) {
      connectStartTime = make_shared<string>(boost::any_cast<string>(m["ConnectStartTime"]));
    }
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("ConnectDuration") != m.end() && !m["ConnectDuration"].empty()) {
      connectDuration = make_shared<string>(boost::any_cast<string>(m["ConnectDuration"]));
    }
    if (m.find("ConnectEndTime") != m.end() && !m["ConnectEndTime"].empty()) {
      connectEndTime = make_shared<string>(boost::any_cast<string>(m["ConnectEndTime"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
  }


  virtual ~DescribeUserConnectionRecordsResponseBodyConnectionRecords() = default;
};
class DescribeUserConnectionRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeUserConnectionRecordsResponseBodyConnectionRecords>> connectionRecords{};

  DescribeUserConnectionRecordsResponseBody() {}

  explicit DescribeUserConnectionRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (connectionRecords) {
      vector<boost::any> temp1;
      for(auto item1:*connectionRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnectionRecords"] = boost::any(temp1);
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
    if (m.find("ConnectionRecords") != m.end() && !m["ConnectionRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnectionRecords"].type()) {
        vector<DescribeUserConnectionRecordsResponseBodyConnectionRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnectionRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserConnectionRecordsResponseBodyConnectionRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connectionRecords = make_shared<vector<DescribeUserConnectionRecordsResponseBodyConnectionRecords>>(expect1);
      }
    }
  }


  virtual ~DescribeUserConnectionRecordsResponseBody() = default;
};
class DescribeUserConnectionRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeUserConnectionRecordsResponseBody> body{};

  DescribeUserConnectionRecordsResponse() {}

  explicit DescribeUserConnectionRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserConnectionRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserConnectionRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserConnectionRecordsResponse() = default;
};
class DescribeUsersInGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopGroupId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeUsersInGroupRequest() {}

  explicit DescribeUsersInGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopGroupId) {
      res["DesktopGroupId"] = boost::any(*desktopGroupId);
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
    if (m.find("DesktopGroupId") != m.end() && !m["DesktopGroupId"].empty()) {
      desktopGroupId = make_shared<string>(boost::any_cast<string>(m["DesktopGroupId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeUsersInGroupRequest() = default;
};
class DescribeUsersInGroupResponseBodyEndUsers : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<string> endUserEmail{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> connectionStatus{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> endUserType{};
  shared_ptr<string> endUserPhone{};
  shared_ptr<string> endUserName{};

  DescribeUsersInGroupResponseBodyEndUsers() {}

  explicit DescribeUsersInGroupResponseBodyEndUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (endUserEmail) {
      res["EndUserEmail"] = boost::any(*endUserEmail);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (connectionStatus) {
      res["ConnectionStatus"] = boost::any(*connectionStatus);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (endUserType) {
      res["EndUserType"] = boost::any(*endUserType);
    }
    if (endUserPhone) {
      res["EndUserPhone"] = boost::any(*endUserPhone);
    }
    if (endUserName) {
      res["EndUserName"] = boost::any(*endUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("EndUserEmail") != m.end() && !m["EndUserEmail"].empty()) {
      endUserEmail = make_shared<string>(boost::any_cast<string>(m["EndUserEmail"]));
    }
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("ConnectionStatus") != m.end() && !m["ConnectionStatus"].empty()) {
      connectionStatus = make_shared<string>(boost::any_cast<string>(m["ConnectionStatus"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("EndUserType") != m.end() && !m["EndUserType"].empty()) {
      endUserType = make_shared<string>(boost::any_cast<string>(m["EndUserType"]));
    }
    if (m.find("EndUserPhone") != m.end() && !m["EndUserPhone"].empty()) {
      endUserPhone = make_shared<string>(boost::any_cast<string>(m["EndUserPhone"]));
    }
    if (m.find("EndUserName") != m.end() && !m["EndUserName"].empty()) {
      endUserName = make_shared<string>(boost::any_cast<string>(m["EndUserName"]));
    }
  }


  virtual ~DescribeUsersInGroupResponseBodyEndUsers() = default;
};
class DescribeUsersInGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> usersCount{};
  shared_ptr<long> onlineUsersCount{};
  shared_ptr<vector<DescribeUsersInGroupResponseBodyEndUsers>> endUsers{};

  DescribeUsersInGroupResponseBody() {}

  explicit DescribeUsersInGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (usersCount) {
      res["UsersCount"] = boost::any(*usersCount);
    }
    if (onlineUsersCount) {
      res["OnlineUsersCount"] = boost::any(*onlineUsersCount);
    }
    if (endUsers) {
      vector<boost::any> temp1;
      for(auto item1:*endUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EndUsers"] = boost::any(temp1);
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
    if (m.find("UsersCount") != m.end() && !m["UsersCount"].empty()) {
      usersCount = make_shared<long>(boost::any_cast<long>(m["UsersCount"]));
    }
    if (m.find("OnlineUsersCount") != m.end() && !m["OnlineUsersCount"].empty()) {
      onlineUsersCount = make_shared<long>(boost::any_cast<long>(m["OnlineUsersCount"]));
    }
    if (m.find("EndUsers") != m.end() && !m["EndUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["EndUsers"].type()) {
        vector<DescribeUsersInGroupResponseBodyEndUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EndUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsersInGroupResponseBodyEndUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endUsers = make_shared<vector<DescribeUsersInGroupResponseBodyEndUsers>>(expect1);
      }
    }
  }


  virtual ~DescribeUsersInGroupResponseBody() = default;
};
class DescribeUsersInGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeUsersInGroupResponseBody> body{};

  DescribeUsersInGroupResponse() {}

  explicit DescribeUsersInGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUsersInGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUsersInGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUsersInGroupResponse() = default;
};
class DescribeVirtualMFADevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> officeSiteId{};
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
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
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
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
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
  shared_ptr<string> serialNumber{};
  shared_ptr<string> gmtUnlock{};
  shared_ptr<string> endUserId{};
  shared_ptr<long> consecutiveFails{};
  shared_ptr<string> officeSiteId{};
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
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (gmtUnlock) {
      res["GmtUnlock"] = boost::any(*gmtUnlock);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (consecutiveFails) {
      res["ConsecutiveFails"] = boost::any(*consecutiveFails);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
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
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("GmtUnlock") != m.end() && !m["GmtUnlock"].empty()) {
      gmtUnlock = make_shared<string>(boost::any_cast<string>(m["GmtUnlock"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("ConsecutiveFails") != m.end() && !m["ConsecutiveFails"].empty()) {
      consecutiveFails = make_shared<long>(boost::any_cast<long>(m["ConsecutiveFails"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
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
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeVirtualMFADevicesResponseBodyVirtualMFADevices>> virtualMFADevices{};

  DescribeVirtualMFADevicesResponseBody() {}

  explicit DescribeVirtualMFADevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualMFADevices) {
      vector<boost::any> temp1;
      for(auto item1:*virtualMFADevices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VirtualMFADevices"] = boost::any(temp1);
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
class DescribeVulDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> lang{};
  shared_ptr<string> type{};
  shared_ptr<string> name{};
  shared_ptr<string> aliasName{};

  DescribeVulDetailsRequest() {}

  explicit DescribeVulDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
  }


  virtual ~DescribeVulDetailsRequest() = default;
};
class DescribeVulDetailsResponseBodyCves : public Darabonba::Model {
public:
  shared_ptr<string> cveId{};
  shared_ptr<string> summary{};
  shared_ptr<string> title{};
  shared_ptr<string> cvssScore{};

  DescribeVulDetailsResponseBodyCves() {}

  explicit DescribeVulDetailsResponseBodyCves(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cveId) {
      res["CveId"] = boost::any(*cveId);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (cvssScore) {
      res["CvssScore"] = boost::any(*cvssScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CveId") != m.end() && !m["CveId"].empty()) {
      cveId = make_shared<string>(boost::any_cast<string>(m["CveId"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("CvssScore") != m.end() && !m["CvssScore"].empty()) {
      cvssScore = make_shared<string>(boost::any_cast<string>(m["CvssScore"]));
    }
  }


  virtual ~DescribeVulDetailsResponseBodyCves() = default;
};
class DescribeVulDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeVulDetailsResponseBodyCves>> cves{};

  DescribeVulDetailsResponseBody() {}

  explicit DescribeVulDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (cves) {
      vector<boost::any> temp1;
      for(auto item1:*cves){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cves"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Cves") != m.end() && !m["Cves"].empty()) {
      if (typeid(vector<boost::any>) == m["Cves"].type()) {
        vector<DescribeVulDetailsResponseBodyCves> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cves"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVulDetailsResponseBodyCves model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cves = make_shared<vector<DescribeVulDetailsResponseBodyCves>>(expect1);
      }
    }
  }


  virtual ~DescribeVulDetailsResponseBody() = default;
};
class DescribeVulDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVulDetailsResponseBody> body{};

  DescribeVulDetailsResponse() {}

  explicit DescribeVulDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVulDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVulDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVulDetailsResponse() = default;
};
class DescribeVulListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> lang{};
  shared_ptr<string> type{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> necessity{};
  shared_ptr<string> aliasName{};
  shared_ptr<string> dealed{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  DescribeVulListRequest() {}

  explicit DescribeVulListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (necessity) {
      res["Necessity"] = boost::any(*necessity);
    }
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (dealed) {
      res["Dealed"] = boost::any(*dealed);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("Necessity") != m.end() && !m["Necessity"].empty()) {
      necessity = make_shared<string>(boost::any_cast<string>(m["Necessity"]));
    }
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("Dealed") != m.end() && !m["Dealed"].empty()) {
      dealed = make_shared<string>(boost::any_cast<string>(m["Dealed"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeVulListRequest() = default;
};
class DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<string> updateCmd{};
  shared_ptr<string> name{};
  shared_ptr<string> fullVersion{};
  shared_ptr<string> matchDetail{};

  DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList() {}

  explicit DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (updateCmd) {
      res["UpdateCmd"] = boost::any(*updateCmd);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (fullVersion) {
      res["FullVersion"] = boost::any(*fullVersion);
    }
    if (matchDetail) {
      res["MatchDetail"] = boost::any(*matchDetail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("UpdateCmd") != m.end() && !m["UpdateCmd"].empty()) {
      updateCmd = make_shared<string>(boost::any_cast<string>(m["UpdateCmd"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("FullVersion") != m.end() && !m["FullVersion"].empty()) {
      fullVersion = make_shared<string>(boost::any_cast<string>(m["FullVersion"]));
    }
    if (m.find("MatchDetail") != m.end() && !m["MatchDetail"].empty()) {
      matchDetail = make_shared<string>(boost::any_cast<string>(m["MatchDetail"]));
    }
  }


  virtual ~DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList() = default;
};
class DescribeVulListResponseBodyVulRecordsExtendContentJson : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList>> rpmEntityList{};

  DescribeVulListResponseBodyVulRecordsExtendContentJson() {}

  explicit DescribeVulListResponseBodyVulRecordsExtendContentJson(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rpmEntityList) {
      vector<boost::any> temp1;
      for(auto item1:*rpmEntityList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RpmEntityList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RpmEntityList") != m.end() && !m["RpmEntityList"].empty()) {
      if (typeid(vector<boost::any>) == m["RpmEntityList"].type()) {
        vector<DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RpmEntityList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rpmEntityList = make_shared<vector<DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList>>(expect1);
      }
    }
  }


  virtual ~DescribeVulListResponseBodyVulRecordsExtendContentJson() = default;
};
class DescribeVulListResponseBodyVulRecords : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> type{};
  shared_ptr<long> modifyTs{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> tag{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> related{};
  shared_ptr<long> lastTs{};
  shared_ptr<long> firstTs{};
  shared_ptr<string> necessity{};
  shared_ptr<long> repairTs{};
  shared_ptr<bool> online{};
  shared_ptr<string> resultMessage{};
  shared_ptr<string> osVersion{};
  shared_ptr<string> aliasName{};
  shared_ptr<string> name{};
  shared_ptr<DescribeVulListResponseBodyVulRecordsExtendContentJson> extendContentJson{};

  DescribeVulListResponseBodyVulRecords() {}

  explicit DescribeVulListResponseBodyVulRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (modifyTs) {
      res["ModifyTs"] = boost::any(*modifyTs);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (related) {
      res["Related"] = boost::any(*related);
    }
    if (lastTs) {
      res["LastTs"] = boost::any(*lastTs);
    }
    if (firstTs) {
      res["FirstTs"] = boost::any(*firstTs);
    }
    if (necessity) {
      res["Necessity"] = boost::any(*necessity);
    }
    if (repairTs) {
      res["RepairTs"] = boost::any(*repairTs);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (resultMessage) {
      res["ResultMessage"] = boost::any(*resultMessage);
    }
    if (osVersion) {
      res["OsVersion"] = boost::any(*osVersion);
    }
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (extendContentJson) {
      res["ExtendContentJson"] = extendContentJson ? boost::any(extendContentJson->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ModifyTs") != m.end() && !m["ModifyTs"].empty()) {
      modifyTs = make_shared<long>(boost::any_cast<long>(m["ModifyTs"]));
    }
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("Related") != m.end() && !m["Related"].empty()) {
      related = make_shared<string>(boost::any_cast<string>(m["Related"]));
    }
    if (m.find("LastTs") != m.end() && !m["LastTs"].empty()) {
      lastTs = make_shared<long>(boost::any_cast<long>(m["LastTs"]));
    }
    if (m.find("FirstTs") != m.end() && !m["FirstTs"].empty()) {
      firstTs = make_shared<long>(boost::any_cast<long>(m["FirstTs"]));
    }
    if (m.find("Necessity") != m.end() && !m["Necessity"].empty()) {
      necessity = make_shared<string>(boost::any_cast<string>(m["Necessity"]));
    }
    if (m.find("RepairTs") != m.end() && !m["RepairTs"].empty()) {
      repairTs = make_shared<long>(boost::any_cast<long>(m["RepairTs"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("ResultMessage") != m.end() && !m["ResultMessage"].empty()) {
      resultMessage = make_shared<string>(boost::any_cast<string>(m["ResultMessage"]));
    }
    if (m.find("OsVersion") != m.end() && !m["OsVersion"].empty()) {
      osVersion = make_shared<string>(boost::any_cast<string>(m["OsVersion"]));
    }
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ExtendContentJson") != m.end() && !m["ExtendContentJson"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtendContentJson"].type()) {
        DescribeVulListResponseBodyVulRecordsExtendContentJson model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtendContentJson"]));
        extendContentJson = make_shared<DescribeVulListResponseBodyVulRecordsExtendContentJson>(model1);
      }
    }
  }


  virtual ~DescribeVulListResponseBodyVulRecords() = default;
};
class DescribeVulListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeVulListResponseBodyVulRecords>> vulRecords{};

  DescribeVulListResponseBody() {}

  explicit DescribeVulListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (vulRecords) {
      vector<boost::any> temp1;
      for(auto item1:*vulRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VulRecords"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("VulRecords") != m.end() && !m["VulRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["VulRecords"].type()) {
        vector<DescribeVulListResponseBodyVulRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VulRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVulListResponseBodyVulRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vulRecords = make_shared<vector<DescribeVulListResponseBodyVulRecords>>(expect1);
      }
    }
  }


  virtual ~DescribeVulListResponseBody() = default;
};
class DescribeVulListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVulListResponseBody> body{};

  DescribeVulListResponse() {}

  explicit DescribeVulListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVulListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVulListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVulListResponse() = default;
};
class DescribeVulOverviewRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeVulOverviewRequest() {}

  explicit DescribeVulOverviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeVulOverviewRequest() = default;
};
class DescribeVulOverviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> nntfCount{};
  shared_ptr<long> laterCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> asapCount{};

  DescribeVulOverviewResponseBody() {}

  explicit DescribeVulOverviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nntfCount) {
      res["NntfCount"] = boost::any(*nntfCount);
    }
    if (laterCount) {
      res["LaterCount"] = boost::any(*laterCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (asapCount) {
      res["AsapCount"] = boost::any(*asapCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NntfCount") != m.end() && !m["NntfCount"].empty()) {
      nntfCount = make_shared<long>(boost::any_cast<long>(m["NntfCount"]));
    }
    if (m.find("LaterCount") != m.end() && !m["LaterCount"].empty()) {
      laterCount = make_shared<long>(boost::any_cast<long>(m["LaterCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AsapCount") != m.end() && !m["AsapCount"].empty()) {
      asapCount = make_shared<long>(boost::any_cast<long>(m["AsapCount"]));
    }
  }


  virtual ~DescribeVulOverviewResponseBody() = default;
};
class DescribeVulOverviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVulOverviewResponseBody> body{};

  DescribeVulOverviewResponse() {}

  explicit DescribeVulOverviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVulOverviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVulOverviewResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVulOverviewResponse() = default;
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
class DetachCenRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> officeSiteId{};

  DetachCenRequest() {}

  explicit DetachCenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
  }


  virtual ~DetachCenRequest() = default;
};
class DetachCenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachCenResponseBody() {}

  explicit DetachCenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachCenResponseBody() = default;
};
class DetachCenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachCenResponseBody> body{};

  DetachCenResponse() {}

  explicit DetachCenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachCenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachCenResponseBody>(model1);
      }
    }
  }


  virtual ~DetachCenResponse() = default;
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
class GetDesktopGroupDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopGroupId{};

  GetDesktopGroupDetailRequest() {}

  explicit GetDesktopGroupDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopGroupId) {
      res["DesktopGroupId"] = boost::any(*desktopGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopGroupId") != m.end() && !m["DesktopGroupId"].empty()) {
      desktopGroupId = make_shared<string>(boost::any_cast<string>(m["DesktopGroupId"]));
    }
  }


  virtual ~GetDesktopGroupDetailRequest() = default;
};
class GetDesktopGroupDetailResponseBodyDesktops : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> payType{};
  shared_ptr<string> policyGroupName{};
  shared_ptr<string> creator{};
  shared_ptr<long> maxDesktopsCount{};
  shared_ptr<long> allowAutoSetup{};
  shared_ptr<long> resType{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> ownBundleId{};
  shared_ptr<double> gpuCount{};
  shared_ptr<long> allowBufferCount{};
  shared_ptr<long> memory{};
  shared_ptr<string> gpuSpec{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> ownBundleName{};
  shared_ptr<string> dataDiskCategory{};
  shared_ptr<string> desktopGroupName{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<long> keepDuration{};
  shared_ptr<long> minDesktopsCount{};
  shared_ptr<string> dataDiskSize{};
  shared_ptr<string> desktopGroupId{};
  shared_ptr<string> officeSiteName{};
  shared_ptr<string> directoryType{};
  shared_ptr<long> cpu{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> comments{};
  shared_ptr<string> officeSiteType{};

  GetDesktopGroupDetailResponseBodyDesktops() {}

  explicit GetDesktopGroupDetailResponseBodyDesktops(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (policyGroupName) {
      res["PolicyGroupName"] = boost::any(*policyGroupName);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (maxDesktopsCount) {
      res["MaxDesktopsCount"] = boost::any(*maxDesktopsCount);
    }
    if (allowAutoSetup) {
      res["AllowAutoSetup"] = boost::any(*allowAutoSetup);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (ownBundleId) {
      res["OwnBundleId"] = boost::any(*ownBundleId);
    }
    if (gpuCount) {
      res["GpuCount"] = boost::any(*gpuCount);
    }
    if (allowBufferCount) {
      res["AllowBufferCount"] = boost::any(*allowBufferCount);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (gpuSpec) {
      res["GpuSpec"] = boost::any(*gpuSpec);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (ownBundleName) {
      res["OwnBundleName"] = boost::any(*ownBundleName);
    }
    if (dataDiskCategory) {
      res["DataDiskCategory"] = boost::any(*dataDiskCategory);
    }
    if (desktopGroupName) {
      res["DesktopGroupName"] = boost::any(*desktopGroupName);
    }
    if (systemDiskCategory) {
      res["SystemDiskCategory"] = boost::any(*systemDiskCategory);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (keepDuration) {
      res["KeepDuration"] = boost::any(*keepDuration);
    }
    if (minDesktopsCount) {
      res["MinDesktopsCount"] = boost::any(*minDesktopsCount);
    }
    if (dataDiskSize) {
      res["DataDiskSize"] = boost::any(*dataDiskSize);
    }
    if (desktopGroupId) {
      res["DesktopGroupId"] = boost::any(*desktopGroupId);
    }
    if (officeSiteName) {
      res["OfficeSiteName"] = boost::any(*officeSiteName);
    }
    if (directoryType) {
      res["DirectoryType"] = boost::any(*directoryType);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (officeSiteType) {
      res["OfficeSiteType"] = boost::any(*officeSiteType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PolicyGroupName") != m.end() && !m["PolicyGroupName"].empty()) {
      policyGroupName = make_shared<string>(boost::any_cast<string>(m["PolicyGroupName"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("MaxDesktopsCount") != m.end() && !m["MaxDesktopsCount"].empty()) {
      maxDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MaxDesktopsCount"]));
    }
    if (m.find("AllowAutoSetup") != m.end() && !m["AllowAutoSetup"].empty()) {
      allowAutoSetup = make_shared<long>(boost::any_cast<long>(m["AllowAutoSetup"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("OwnBundleId") != m.end() && !m["OwnBundleId"].empty()) {
      ownBundleId = make_shared<string>(boost::any_cast<string>(m["OwnBundleId"]));
    }
    if (m.find("GpuCount") != m.end() && !m["GpuCount"].empty()) {
      gpuCount = make_shared<double>(boost::any_cast<double>(m["GpuCount"]));
    }
    if (m.find("AllowBufferCount") != m.end() && !m["AllowBufferCount"].empty()) {
      allowBufferCount = make_shared<long>(boost::any_cast<long>(m["AllowBufferCount"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("GpuSpec") != m.end() && !m["GpuSpec"].empty()) {
      gpuSpec = make_shared<string>(boost::any_cast<string>(m["GpuSpec"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("OwnBundleName") != m.end() && !m["OwnBundleName"].empty()) {
      ownBundleName = make_shared<string>(boost::any_cast<string>(m["OwnBundleName"]));
    }
    if (m.find("DataDiskCategory") != m.end() && !m["DataDiskCategory"].empty()) {
      dataDiskCategory = make_shared<string>(boost::any_cast<string>(m["DataDiskCategory"]));
    }
    if (m.find("DesktopGroupName") != m.end() && !m["DesktopGroupName"].empty()) {
      desktopGroupName = make_shared<string>(boost::any_cast<string>(m["DesktopGroupName"]));
    }
    if (m.find("SystemDiskCategory") != m.end() && !m["SystemDiskCategory"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["SystemDiskCategory"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("KeepDuration") != m.end() && !m["KeepDuration"].empty()) {
      keepDuration = make_shared<long>(boost::any_cast<long>(m["KeepDuration"]));
    }
    if (m.find("MinDesktopsCount") != m.end() && !m["MinDesktopsCount"].empty()) {
      minDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MinDesktopsCount"]));
    }
    if (m.find("DataDiskSize") != m.end() && !m["DataDiskSize"].empty()) {
      dataDiskSize = make_shared<string>(boost::any_cast<string>(m["DataDiskSize"]));
    }
    if (m.find("DesktopGroupId") != m.end() && !m["DesktopGroupId"].empty()) {
      desktopGroupId = make_shared<string>(boost::any_cast<string>(m["DesktopGroupId"]));
    }
    if (m.find("OfficeSiteName") != m.end() && !m["OfficeSiteName"].empty()) {
      officeSiteName = make_shared<string>(boost::any_cast<string>(m["OfficeSiteName"]));
    }
    if (m.find("DirectoryType") != m.end() && !m["DirectoryType"].empty()) {
      directoryType = make_shared<string>(boost::any_cast<string>(m["DirectoryType"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("OfficeSiteType") != m.end() && !m["OfficeSiteType"].empty()) {
      officeSiteType = make_shared<string>(boost::any_cast<string>(m["OfficeSiteType"]));
    }
  }


  virtual ~GetDesktopGroupDetailResponseBodyDesktops() = default;
};
class GetDesktopGroupDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetDesktopGroupDetailResponseBodyDesktops>> desktops{};

  GetDesktopGroupDetailResponseBody() {}

  explicit GetDesktopGroupDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Desktops") != m.end() && !m["Desktops"].empty()) {
      if (typeid(vector<boost::any>) == m["Desktops"].type()) {
        vector<GetDesktopGroupDetailResponseBodyDesktops> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Desktops"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDesktopGroupDetailResponseBodyDesktops model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        desktops = make_shared<vector<GetDesktopGroupDetailResponseBodyDesktops>>(expect1);
      }
    }
  }


  virtual ~GetDesktopGroupDetailResponseBody() = default;
};
class GetDesktopGroupDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDesktopGroupDetailResponseBody> body{};

  GetDesktopGroupDetailResponse() {}

  explicit GetDesktopGroupDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDesktopGroupDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDesktopGroupDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetDesktopGroupDetailResponse() = default;
};
class GetDesktopUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopId{};

  GetDesktopUsersRequest() {}

  explicit GetDesktopUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
  }


  virtual ~GetDesktopUsersRequest() = default;
};
class GetDesktopUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> endUserIds{};

  GetDesktopUsersResponseBody() {}

  explicit GetDesktopUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (endUserIds) {
      res["EndUserIds"] = boost::any(*endUserIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  }


  virtual ~GetDesktopUsersResponseBody() = default;
};
class GetDesktopUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDesktopUsersResponseBody> body{};

  GetDesktopUsersResponse() {}

  explicit GetDesktopUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDesktopUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDesktopUsersResponseBody>(model1);
      }
    }
  }


  virtual ~GetDesktopUsersResponse() = default;
};
class GetDirectorySsoStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> directoryId{};

  GetDirectorySsoStatusRequest() {}

  explicit GetDirectorySsoStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~GetDirectorySsoStatusRequest() = default;
};
class GetDirectorySsoStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> ssoStatus{};
  shared_ptr<string> requestId{};

  GetDirectorySsoStatusResponseBody() {}

  explicit GetDirectorySsoStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ssoStatus) {
      res["SsoStatus"] = boost::any(*ssoStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SsoStatus") != m.end() && !m["SsoStatus"].empty()) {
      ssoStatus = make_shared<bool>(boost::any_cast<bool>(m["SsoStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDirectorySsoStatusResponseBody() = default;
};
class GetDirectorySsoStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDirectorySsoStatusResponseBody> body{};

  GetDirectorySsoStatusResponse() {}

  explicit GetDirectorySsoStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDirectorySsoStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDirectorySsoStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetDirectorySsoStatusResponse() = default;
};
class GetOfficeSiteSsoStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> officeSiteId{};

  GetOfficeSiteSsoStatusRequest() {}

  explicit GetOfficeSiteSsoStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
  }


  virtual ~GetOfficeSiteSsoStatusRequest() = default;
};
class GetOfficeSiteSsoStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> ssoStatus{};
  shared_ptr<string> requestId{};

  GetOfficeSiteSsoStatusResponseBody() {}

  explicit GetOfficeSiteSsoStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ssoStatus) {
      res["SsoStatus"] = boost::any(*ssoStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SsoStatus") != m.end() && !m["SsoStatus"].empty()) {
      ssoStatus = make_shared<bool>(boost::any_cast<bool>(m["SsoStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetOfficeSiteSsoStatusResponseBody() = default;
};
class GetOfficeSiteSsoStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOfficeSiteSsoStatusResponseBody> body{};

  GetOfficeSiteSsoStatusResponse() {}

  explicit GetOfficeSiteSsoStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOfficeSiteSsoStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOfficeSiteSsoStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetOfficeSiteSsoStatusResponse() = default;
};
class GetSpMetadataRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> officeSiteId{};

  GetSpMetadataRequest() {}

  explicit GetSpMetadataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
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
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
  }


  virtual ~GetSpMetadataRequest() = default;
};
class GetSpMetadataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> spMetadata{};
  shared_ptr<string> requestId{};

  GetSpMetadataResponseBody() {}

  explicit GetSpMetadataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spMetadata) {
      res["SpMetadata"] = boost::any(*spMetadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpMetadata") != m.end() && !m["SpMetadata"].empty()) {
      spMetadata = make_shared<string>(boost::any_cast<string>(m["SpMetadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSpMetadataResponseBody() = default;
};
class GetSpMetadataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSpMetadataResponseBody> body{};

  GetSpMetadataResponse() {}

  explicit GetSpMetadataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSpMetadataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSpMetadataResponseBody>(model1);
      }
    }
  }


  virtual ~GetSpMetadataResponse() = default;
};
class HandleSecurityEventsRequestSecurityEvent : public Darabonba::Model {
public:
  shared_ptr<string> securityEventId{};
  shared_ptr<string> desktopId{};

  HandleSecurityEventsRequestSecurityEvent() {}

  explicit HandleSecurityEventsRequestSecurityEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityEventId) {
      res["SecurityEventId"] = boost::any(*securityEventId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityEventId") != m.end() && !m["SecurityEventId"].empty()) {
      securityEventId = make_shared<string>(boost::any_cast<string>(m["SecurityEventId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
  }


  virtual ~HandleSecurityEventsRequestSecurityEvent() = default;
};
class HandleSecurityEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> operationCode{};
  shared_ptr<string> operationParams{};
  shared_ptr<vector<HandleSecurityEventsRequestSecurityEvent>> securityEvent{};

  HandleSecurityEventsRequest() {}

  explicit HandleSecurityEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (operationCode) {
      res["OperationCode"] = boost::any(*operationCode);
    }
    if (operationParams) {
      res["OperationParams"] = boost::any(*operationParams);
    }
    if (securityEvent) {
      vector<boost::any> temp1;
      for(auto item1:*securityEvent){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityEvent"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OperationCode") != m.end() && !m["OperationCode"].empty()) {
      operationCode = make_shared<string>(boost::any_cast<string>(m["OperationCode"]));
    }
    if (m.find("OperationParams") != m.end() && !m["OperationParams"].empty()) {
      operationParams = make_shared<string>(boost::any_cast<string>(m["OperationParams"]));
    }
    if (m.find("SecurityEvent") != m.end() && !m["SecurityEvent"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityEvent"].type()) {
        vector<HandleSecurityEventsRequestSecurityEvent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityEvent"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HandleSecurityEventsRequestSecurityEvent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityEvent = make_shared<vector<HandleSecurityEventsRequestSecurityEvent>>(expect1);
      }
    }
  }


  virtual ~HandleSecurityEventsRequest() = default;
};
class HandleSecurityEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};
  shared_ptr<string> requestId{};

  HandleSecurityEventsResponseBody() {}

  explicit HandleSecurityEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~HandleSecurityEventsResponseBody() = default;
};
class HandleSecurityEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<HandleSecurityEventsResponseBody> body{};

  HandleSecurityEventsResponse() {}

  explicit HandleSecurityEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HandleSecurityEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HandleSecurityEventsResponseBody>(model1);
      }
    }
  }


  virtual ~HandleSecurityEventsResponse() = default;
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
class ListOfficeSiteOverviewRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<bool> forceRefresh{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> officeSiteId{};

  ListOfficeSiteOverviewRequest() {}

  explicit ListOfficeSiteOverviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (forceRefresh) {
      res["ForceRefresh"] = boost::any(*forceRefresh);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ForceRefresh") != m.end() && !m["ForceRefresh"].empty()) {
      forceRefresh = make_shared<bool>(boost::any_cast<bool>(m["ForceRefresh"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OfficeSiteId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OfficeSiteId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      officeSiteId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListOfficeSiteOverviewRequest() = default;
};
class ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults : public Darabonba::Model {
public:
  shared_ptr<string> officeSiteStatus{};
  shared_ptr<long> totalEdsCount{};
  shared_ptr<long> willExpiredEdsCount{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<long> runningEdsCount{};
  shared_ptr<string> officeSiteName{};
  shared_ptr<long> hasExpiredEdsCount{};
  shared_ptr<string> regionId{};

  ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults() {}

  explicit ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (officeSiteStatus) {
      res["OfficeSiteStatus"] = boost::any(*officeSiteStatus);
    }
    if (totalEdsCount) {
      res["TotalEdsCount"] = boost::any(*totalEdsCount);
    }
    if (willExpiredEdsCount) {
      res["WillExpiredEdsCount"] = boost::any(*willExpiredEdsCount);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (runningEdsCount) {
      res["RunningEdsCount"] = boost::any(*runningEdsCount);
    }
    if (officeSiteName) {
      res["OfficeSiteName"] = boost::any(*officeSiteName);
    }
    if (hasExpiredEdsCount) {
      res["HasExpiredEdsCount"] = boost::any(*hasExpiredEdsCount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OfficeSiteStatus") != m.end() && !m["OfficeSiteStatus"].empty()) {
      officeSiteStatus = make_shared<string>(boost::any_cast<string>(m["OfficeSiteStatus"]));
    }
    if (m.find("TotalEdsCount") != m.end() && !m["TotalEdsCount"].empty()) {
      totalEdsCount = make_shared<long>(boost::any_cast<long>(m["TotalEdsCount"]));
    }
    if (m.find("WillExpiredEdsCount") != m.end() && !m["WillExpiredEdsCount"].empty()) {
      willExpiredEdsCount = make_shared<long>(boost::any_cast<long>(m["WillExpiredEdsCount"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("RunningEdsCount") != m.end() && !m["RunningEdsCount"].empty()) {
      runningEdsCount = make_shared<long>(boost::any_cast<long>(m["RunningEdsCount"]));
    }
    if (m.find("OfficeSiteName") != m.end() && !m["OfficeSiteName"].empty()) {
      officeSiteName = make_shared<string>(boost::any_cast<string>(m["OfficeSiteName"]));
    }
    if (m.find("HasExpiredEdsCount") != m.end() && !m["HasExpiredEdsCount"].empty()) {
      hasExpiredEdsCount = make_shared<long>(boost::any_cast<long>(m["HasExpiredEdsCount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults() = default;
};
class ListOfficeSiteOverviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults>> officeSiteOverviewResults{};

  ListOfficeSiteOverviewResponseBody() {}

  explicit ListOfficeSiteOverviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (officeSiteOverviewResults) {
      vector<boost::any> temp1;
      for(auto item1:*officeSiteOverviewResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OfficeSiteOverviewResults"] = boost::any(temp1);
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
    if (m.find("OfficeSiteOverviewResults") != m.end() && !m["OfficeSiteOverviewResults"].empty()) {
      if (typeid(vector<boost::any>) == m["OfficeSiteOverviewResults"].type()) {
        vector<ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OfficeSiteOverviewResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        officeSiteOverviewResults = make_shared<vector<ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults>>(expect1);
      }
    }
  }


  virtual ~ListOfficeSiteOverviewResponseBody() = default;
};
class ListOfficeSiteOverviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOfficeSiteOverviewResponseBody> body{};

  ListOfficeSiteOverviewResponse() {}

  explicit ListOfficeSiteOverviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOfficeSiteOverviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOfficeSiteOverviewResponseBody>(model1);
      }
    }
  }


  virtual ~ListOfficeSiteOverviewResponse() = default;
};
class ListOfficeSiteUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> filter{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};

  ListOfficeSiteUsersRequest() {}

  explicit ListOfficeSiteUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
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
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
  }


  virtual ~ListOfficeSiteUsersRequest() = default;
};
class ListOfficeSiteUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<string> endUser{};

  ListOfficeSiteUsersResponseBodyUsers() {}

  explicit ListOfficeSiteUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListOfficeSiteUsersResponseBodyUsers() = default;
};
class ListOfficeSiteUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListOfficeSiteUsersResponseBodyUsers>> users{};

  ListOfficeSiteUsersResponseBody() {}

  explicit ListOfficeSiteUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListOfficeSiteUsersResponseBodyUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOfficeSiteUsersResponseBodyUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListOfficeSiteUsersResponseBodyUsers>>(expect1);
      }
    }
  }


  virtual ~ListOfficeSiteUsersResponseBody() = default;
};
class ListOfficeSiteUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOfficeSiteUsersResponseBody> body{};

  ListOfficeSiteUsersResponse() {}

  explicit ListOfficeSiteUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOfficeSiteUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOfficeSiteUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListOfficeSiteUsersResponse() = default;
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
  shared_ptr<long> maxResults{};
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
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
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
  shared_ptr<string> tagValue{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tagKey{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
class ModifyADConnectorOfficeSiteRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainUserName{};
  shared_ptr<string> domainPassword{};
  shared_ptr<string> officeSiteName{};
  shared_ptr<string> subDomainName{};
  shared_ptr<bool> mfaEnabled{};
  shared_ptr<vector<string>> dnsAddress{};
  shared_ptr<vector<string>> subDomainDnsAddress{};

  ModifyADConnectorOfficeSiteRequest() {}

  explicit ModifyADConnectorOfficeSiteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
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
    if (officeSiteName) {
      res["OfficeSiteName"] = boost::any(*officeSiteName);
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
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
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
    if (m.find("OfficeSiteName") != m.end() && !m["OfficeSiteName"].empty()) {
      officeSiteName = make_shared<string>(boost::any_cast<string>(m["OfficeSiteName"]));
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


  virtual ~ModifyADConnectorOfficeSiteRequest() = default;
};
class ModifyADConnectorOfficeSiteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyADConnectorOfficeSiteResponseBody() {}

  explicit ModifyADConnectorOfficeSiteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyADConnectorOfficeSiteResponseBody() = default;
};
class ModifyADConnectorOfficeSiteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyADConnectorOfficeSiteResponseBody> body{};

  ModifyADConnectorOfficeSiteResponse() {}

  explicit ModifyADConnectorOfficeSiteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyADConnectorOfficeSiteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyADConnectorOfficeSiteResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyADConnectorOfficeSiteResponse() = default;
};
class ModifyBundleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> bundleId{};
  shared_ptr<string> imageId{};
  shared_ptr<string> bundleName{};
  shared_ptr<string> description{};

  ModifyBundleRequest() {}

  explicit ModifyBundleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (bundleName) {
      res["BundleName"] = boost::any(*bundleName);
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
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("BundleName") != m.end() && !m["BundleName"].empty()) {
      bundleName = make_shared<string>(boost::any_cast<string>(m["BundleName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~ModifyBundleRequest() = default;
};
class ModifyBundleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyBundleResponseBody() {}

  explicit ModifyBundleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyBundleResponseBody() = default;
};
class ModifyBundleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyBundleResponseBody> body{};

  ModifyBundleResponse() {}

  explicit ModifyBundleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyBundleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBundleResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBundleResponse() = default;
};
class ModifyDesktopGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopGroupId{};
  shared_ptr<string> ownBundleId{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> desktopGroupName{};
  shared_ptr<string> scaleStrategyId{};
  shared_ptr<long> keepDuration{};
  shared_ptr<string> comments{};
  shared_ptr<long> minDesktopsCount{};
  shared_ptr<long> maxDesktopsCount{};
  shared_ptr<long> allowAutoSetup{};
  shared_ptr<long> allowBufferCount{};

  ModifyDesktopGroupRequest() {}

  explicit ModifyDesktopGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopGroupId) {
      res["DesktopGroupId"] = boost::any(*desktopGroupId);
    }
    if (ownBundleId) {
      res["OwnBundleId"] = boost::any(*ownBundleId);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (desktopGroupName) {
      res["DesktopGroupName"] = boost::any(*desktopGroupName);
    }
    if (scaleStrategyId) {
      res["ScaleStrategyId"] = boost::any(*scaleStrategyId);
    }
    if (keepDuration) {
      res["KeepDuration"] = boost::any(*keepDuration);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (minDesktopsCount) {
      res["MinDesktopsCount"] = boost::any(*minDesktopsCount);
    }
    if (maxDesktopsCount) {
      res["MaxDesktopsCount"] = boost::any(*maxDesktopsCount);
    }
    if (allowAutoSetup) {
      res["AllowAutoSetup"] = boost::any(*allowAutoSetup);
    }
    if (allowBufferCount) {
      res["AllowBufferCount"] = boost::any(*allowBufferCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopGroupId") != m.end() && !m["DesktopGroupId"].empty()) {
      desktopGroupId = make_shared<string>(boost::any_cast<string>(m["DesktopGroupId"]));
    }
    if (m.find("OwnBundleId") != m.end() && !m["OwnBundleId"].empty()) {
      ownBundleId = make_shared<string>(boost::any_cast<string>(m["OwnBundleId"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("DesktopGroupName") != m.end() && !m["DesktopGroupName"].empty()) {
      desktopGroupName = make_shared<string>(boost::any_cast<string>(m["DesktopGroupName"]));
    }
    if (m.find("ScaleStrategyId") != m.end() && !m["ScaleStrategyId"].empty()) {
      scaleStrategyId = make_shared<string>(boost::any_cast<string>(m["ScaleStrategyId"]));
    }
    if (m.find("KeepDuration") != m.end() && !m["KeepDuration"].empty()) {
      keepDuration = make_shared<long>(boost::any_cast<long>(m["KeepDuration"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("MinDesktopsCount") != m.end() && !m["MinDesktopsCount"].empty()) {
      minDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MinDesktopsCount"]));
    }
    if (m.find("MaxDesktopsCount") != m.end() && !m["MaxDesktopsCount"].empty()) {
      maxDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MaxDesktopsCount"]));
    }
    if (m.find("AllowAutoSetup") != m.end() && !m["AllowAutoSetup"].empty()) {
      allowAutoSetup = make_shared<long>(boost::any_cast<long>(m["AllowAutoSetup"]));
    }
    if (m.find("AllowBufferCount") != m.end() && !m["AllowBufferCount"].empty()) {
      allowBufferCount = make_shared<long>(boost::any_cast<long>(m["AllowBufferCount"]));
    }
  }


  virtual ~ModifyDesktopGroupRequest() = default;
};
class ModifyDesktopGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDesktopGroupResponseBody() {}

  explicit ModifyDesktopGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDesktopGroupResponseBody() = default;
};
class ModifyDesktopGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDesktopGroupResponseBody> body{};

  ModifyDesktopGroupResponse() {}

  explicit ModifyDesktopGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDesktopGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDesktopGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDesktopGroupResponse() = default;
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
class ModifyDesktopSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> desktopType{};
  shared_ptr<long> rootDiskSizeGib{};
  shared_ptr<long> userDiskSizeGib{};
  shared_ptr<bool> autoPay{};

  ModifyDesktopSpecRequest() {}

  explicit ModifyDesktopSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (desktopType) {
      res["DesktopType"] = boost::any(*desktopType);
    }
    if (rootDiskSizeGib) {
      res["RootDiskSizeGib"] = boost::any(*rootDiskSizeGib);
    }
    if (userDiskSizeGib) {
      res["UserDiskSizeGib"] = boost::any(*userDiskSizeGib);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
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
    if (m.find("DesktopType") != m.end() && !m["DesktopType"].empty()) {
      desktopType = make_shared<string>(boost::any_cast<string>(m["DesktopType"]));
    }
    if (m.find("RootDiskSizeGib") != m.end() && !m["RootDiskSizeGib"].empty()) {
      rootDiskSizeGib = make_shared<long>(boost::any_cast<long>(m["RootDiskSizeGib"]));
    }
    if (m.find("UserDiskSizeGib") != m.end() && !m["UserDiskSizeGib"].empty()) {
      userDiskSizeGib = make_shared<long>(boost::any_cast<long>(m["UserDiskSizeGib"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
  }


  virtual ~ModifyDesktopSpecRequest() = default;
};
class ModifyDesktopSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ModifyDesktopSpecResponseBody() {}

  explicit ModifyDesktopSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDesktopSpecResponseBody() = default;
};
class ModifyDesktopSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDesktopSpecResponseBody> body{};

  ModifyDesktopSpecResponse() {}

  explicit ModifyDesktopSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDesktopSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDesktopSpecResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDesktopSpecResponse() = default;
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
  shared_ptr<string> message{};
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
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
class ModifyNASDefaultMountTargetRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> mountTargetDomain{};

  ModifyNASDefaultMountTargetRequest() {}

  explicit ModifyNASDefaultMountTargetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
    }
  }


  virtual ~ModifyNASDefaultMountTargetRequest() = default;
};
class ModifyNASDefaultMountTargetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyNASDefaultMountTargetResponseBody() {}

  explicit ModifyNASDefaultMountTargetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyNASDefaultMountTargetResponseBody() = default;
};
class ModifyNASDefaultMountTargetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyNASDefaultMountTargetResponseBody> body{};

  ModifyNASDefaultMountTargetResponse() {}

  explicit ModifyNASDefaultMountTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyNASDefaultMountTargetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNASDefaultMountTargetResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNASDefaultMountTargetResponse() = default;
};
class ModifyNetworkPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> networkPackageId{};
  shared_ptr<long> bandwidth{};

  ModifyNetworkPackageRequest() {}

  explicit ModifyNetworkPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (networkPackageId) {
      res["NetworkPackageId"] = boost::any(*networkPackageId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("NetworkPackageId") != m.end() && !m["NetworkPackageId"].empty()) {
      networkPackageId = make_shared<string>(boost::any_cast<string>(m["NetworkPackageId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
  }


  virtual ~ModifyNetworkPackageRequest() = default;
};
class ModifyNetworkPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyNetworkPackageResponseBody() {}

  explicit ModifyNetworkPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyNetworkPackageResponseBody() = default;
};
class ModifyNetworkPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyNetworkPackageResponseBody> body{};

  ModifyNetworkPackageResponse() {}

  explicit ModifyNetworkPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyNetworkPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNetworkPackageResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNetworkPackageResponse() = default;
};
class ModifyNetworkPackageEnabledRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> networkPackageId{};
  shared_ptr<bool> enabled{};

  ModifyNetworkPackageEnabledRequest() {}

  explicit ModifyNetworkPackageEnabledRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (networkPackageId) {
      res["NetworkPackageId"] = boost::any(*networkPackageId);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("NetworkPackageId") != m.end() && !m["NetworkPackageId"].empty()) {
      networkPackageId = make_shared<string>(boost::any_cast<string>(m["NetworkPackageId"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
  }


  virtual ~ModifyNetworkPackageEnabledRequest() = default;
};
class ModifyNetworkPackageEnabledResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyNetworkPackageEnabledResponseBody() {}

  explicit ModifyNetworkPackageEnabledResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyNetworkPackageEnabledResponseBody() = default;
};
class ModifyNetworkPackageEnabledResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyNetworkPackageEnabledResponseBody> body{};

  ModifyNetworkPackageEnabledResponse() {}

  explicit ModifyNetworkPackageEnabledResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyNetworkPackageEnabledResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNetworkPackageEnabledResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNetworkPackageEnabledResponse() = default;
};
class ModifyOfficeSiteAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> desktopAccessType{};
  shared_ptr<string> officeSiteName{};

  ModifyOfficeSiteAttributeRequest() {}

  explicit ModifyOfficeSiteAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (desktopAccessType) {
      res["DesktopAccessType"] = boost::any(*desktopAccessType);
    }
    if (officeSiteName) {
      res["OfficeSiteName"] = boost::any(*officeSiteName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("DesktopAccessType") != m.end() && !m["DesktopAccessType"].empty()) {
      desktopAccessType = make_shared<string>(boost::any_cast<string>(m["DesktopAccessType"]));
    }
    if (m.find("OfficeSiteName") != m.end() && !m["OfficeSiteName"].empty()) {
      officeSiteName = make_shared<string>(boost::any_cast<string>(m["OfficeSiteName"]));
    }
  }


  virtual ~ModifyOfficeSiteAttributeRequest() = default;
};
class ModifyOfficeSiteAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyOfficeSiteAttributeResponseBody() {}

  explicit ModifyOfficeSiteAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyOfficeSiteAttributeResponseBody() = default;
};
class ModifyOfficeSiteAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyOfficeSiteAttributeResponseBody> body{};

  ModifyOfficeSiteAttributeResponse() {}

  explicit ModifyOfficeSiteAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyOfficeSiteAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyOfficeSiteAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyOfficeSiteAttributeResponse() = default;
};
class ModifyOfficeSiteCrossDesktopAccessRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<bool> enableCrossDesktopAccess{};

  ModifyOfficeSiteCrossDesktopAccessRequest() {}

  explicit ModifyOfficeSiteCrossDesktopAccessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (enableCrossDesktopAccess) {
      res["EnableCrossDesktopAccess"] = boost::any(*enableCrossDesktopAccess);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("EnableCrossDesktopAccess") != m.end() && !m["EnableCrossDesktopAccess"].empty()) {
      enableCrossDesktopAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableCrossDesktopAccess"]));
    }
  }


  virtual ~ModifyOfficeSiteCrossDesktopAccessRequest() = default;
};
class ModifyOfficeSiteCrossDesktopAccessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyOfficeSiteCrossDesktopAccessResponseBody() {}

  explicit ModifyOfficeSiteCrossDesktopAccessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyOfficeSiteCrossDesktopAccessResponseBody() = default;
};
class ModifyOfficeSiteCrossDesktopAccessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyOfficeSiteCrossDesktopAccessResponseBody> body{};

  ModifyOfficeSiteCrossDesktopAccessResponse() {}

  explicit ModifyOfficeSiteCrossDesktopAccessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyOfficeSiteCrossDesktopAccessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyOfficeSiteCrossDesktopAccessResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyOfficeSiteCrossDesktopAccessResponse() = default;
};
class ModifyOfficeSiteMfaEnabledRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<bool> mfaEnabled{};

  ModifyOfficeSiteMfaEnabledRequest() {}

  explicit ModifyOfficeSiteMfaEnabledRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (mfaEnabled) {
      res["MfaEnabled"] = boost::any(*mfaEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("MfaEnabled") != m.end() && !m["MfaEnabled"].empty()) {
      mfaEnabled = make_shared<bool>(boost::any_cast<bool>(m["MfaEnabled"]));
    }
  }


  virtual ~ModifyOfficeSiteMfaEnabledRequest() = default;
};
class ModifyOfficeSiteMfaEnabledResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyOfficeSiteMfaEnabledResponseBody() {}

  explicit ModifyOfficeSiteMfaEnabledResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyOfficeSiteMfaEnabledResponseBody() = default;
};
class ModifyOfficeSiteMfaEnabledResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyOfficeSiteMfaEnabledResponseBody> body{};

  ModifyOfficeSiteMfaEnabledResponse() {}

  explicit ModifyOfficeSiteMfaEnabledResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyOfficeSiteMfaEnabledResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyOfficeSiteMfaEnabledResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyOfficeSiteMfaEnabledResponse() = default;
};
class ModifyOperateVulRequestVulInfo : public Darabonba::Model {
public:
  shared_ptr<string> desktopId{};
  shared_ptr<string> tag{};
  shared_ptr<string> name{};

  ModifyOperateVulRequestVulInfo() {}

  explicit ModifyOperateVulRequestVulInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ModifyOperateVulRequestVulInfo() = default;
};
class ModifyOperateVulRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};
  shared_ptr<string> operateType{};
  shared_ptr<string> reason{};
  shared_ptr<vector<ModifyOperateVulRequestVulInfo>> vulInfo{};

  ModifyOperateVulRequest() {}

  explicit ModifyOperateVulRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (vulInfo) {
      vector<boost::any> temp1;
      for(auto item1:*vulInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VulInfo"] = boost::any(temp1);
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
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("VulInfo") != m.end() && !m["VulInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["VulInfo"].type()) {
        vector<ModifyOperateVulRequestVulInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VulInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyOperateVulRequestVulInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vulInfo = make_shared<vector<ModifyOperateVulRequestVulInfo>>(expect1);
      }
    }
  }


  virtual ~ModifyOperateVulRequest() = default;
};
class ModifyOperateVulResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyOperateVulResponseBody() {}

  explicit ModifyOperateVulResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyOperateVulResponseBody() = default;
};
class ModifyOperateVulResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyOperateVulResponseBody> body{};

  ModifyOperateVulResponse() {}

  explicit ModifyOperateVulResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyOperateVulResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyOperateVulResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyOperateVulResponse() = default;
};
class ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> policy{};
  shared_ptr<string> portRange{};
  shared_ptr<string> description{};
  shared_ptr<string> ipProtocol{};
  shared_ptr<string> priority{};
  shared_ptr<string> cidrIp{};

  ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule() {}

  explicit ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (portRange) {
      res["PortRange"] = boost::any(*portRange);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ipProtocol) {
      res["IpProtocol"] = boost::any(*ipProtocol);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (cidrIp) {
      res["CidrIp"] = boost::any(*cidrIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("PortRange") != m.end() && !m["PortRange"].empty()) {
      portRange = make_shared<string>(boost::any_cast<string>(m["PortRange"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IpProtocol") != m.end() && !m["IpProtocol"].empty()) {
      ipProtocol = make_shared<string>(boost::any_cast<string>(m["IpProtocol"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("CidrIp") != m.end() && !m["CidrIp"].empty()) {
      cidrIp = make_shared<string>(boost::any_cast<string>(m["CidrIp"]));
    }
  }


  virtual ~ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule() = default;
};
class ModifyPolicyGroupRequestRevokeSecurityPolicyRule : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> policy{};
  shared_ptr<string> portRange{};
  shared_ptr<string> description{};
  shared_ptr<string> ipProtocol{};
  shared_ptr<string> priority{};
  shared_ptr<string> cidrIp{};

  ModifyPolicyGroupRequestRevokeSecurityPolicyRule() {}

  explicit ModifyPolicyGroupRequestRevokeSecurityPolicyRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (portRange) {
      res["PortRange"] = boost::any(*portRange);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ipProtocol) {
      res["IpProtocol"] = boost::any(*ipProtocol);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (cidrIp) {
      res["CidrIp"] = boost::any(*cidrIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("PortRange") != m.end() && !m["PortRange"].empty()) {
      portRange = make_shared<string>(boost::any_cast<string>(m["PortRange"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IpProtocol") != m.end() && !m["IpProtocol"].empty()) {
      ipProtocol = make_shared<string>(boost::any_cast<string>(m["IpProtocol"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("CidrIp") != m.end() && !m["CidrIp"].empty()) {
      cidrIp = make_shared<string>(boost::any_cast<string>(m["CidrIp"]));
    }
  }


  virtual ~ModifyPolicyGroupRequestRevokeSecurityPolicyRule() = default;
};
class ModifyPolicyGroupRequestAuthorizeAccessPolicyRule : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> cidrIp{};

  ModifyPolicyGroupRequestAuthorizeAccessPolicyRule() {}

  explicit ModifyPolicyGroupRequestAuthorizeAccessPolicyRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (cidrIp) {
      res["CidrIp"] = boost::any(*cidrIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CidrIp") != m.end() && !m["CidrIp"].empty()) {
      cidrIp = make_shared<string>(boost::any_cast<string>(m["CidrIp"]));
    }
  }


  virtual ~ModifyPolicyGroupRequestAuthorizeAccessPolicyRule() = default;
};
class ModifyPolicyGroupRequestRevokeAccessPolicyRule : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> cidrIp{};

  ModifyPolicyGroupRequestRevokeAccessPolicyRule() {}

  explicit ModifyPolicyGroupRequestRevokeAccessPolicyRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (cidrIp) {
      res["CidrIp"] = boost::any(*cidrIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CidrIp") != m.end() && !m["CidrIp"].empty()) {
      cidrIp = make_shared<string>(boost::any_cast<string>(m["CidrIp"]));
    }
  }


  virtual ~ModifyPolicyGroupRequestRevokeAccessPolicyRule() = default;
};
class ModifyPolicyGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> name{};
  shared_ptr<string> clipboard{};
  shared_ptr<string> localDrive{};
  shared_ptr<string> usbRedirect{};
  shared_ptr<string> visualQuality{};
  shared_ptr<string> html5Access{};
  shared_ptr<string> html5FileTransfer{};
  shared_ptr<string> watermark{};
  shared_ptr<string> watermarkType{};
  shared_ptr<string> watermarkCustomText{};
  shared_ptr<string> watermarkTransparency{};
  shared_ptr<string> preemptLogin{};
  shared_ptr<string> domainList{};
  shared_ptr<vector<string>> preemptLoginUser{};
  shared_ptr<vector<ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule>> authorizeSecurityPolicyRule{};
  shared_ptr<vector<ModifyPolicyGroupRequestRevokeSecurityPolicyRule>> revokeSecurityPolicyRule{};
  shared_ptr<vector<ModifyPolicyGroupRequestAuthorizeAccessPolicyRule>> authorizeAccessPolicyRule{};
  shared_ptr<vector<ModifyPolicyGroupRequestRevokeAccessPolicyRule>> revokeAccessPolicyRule{};

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
    if (visualQuality) {
      res["VisualQuality"] = boost::any(*visualQuality);
    }
    if (html5Access) {
      res["Html5Access"] = boost::any(*html5Access);
    }
    if (html5FileTransfer) {
      res["Html5FileTransfer"] = boost::any(*html5FileTransfer);
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
    if (preemptLogin) {
      res["PreemptLogin"] = boost::any(*preemptLogin);
    }
    if (domainList) {
      res["DomainList"] = boost::any(*domainList);
    }
    if (preemptLoginUser) {
      res["PreemptLoginUser"] = boost::any(*preemptLoginUser);
    }
    if (authorizeSecurityPolicyRule) {
      vector<boost::any> temp1;
      for(auto item1:*authorizeSecurityPolicyRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthorizeSecurityPolicyRule"] = boost::any(temp1);
    }
    if (revokeSecurityPolicyRule) {
      vector<boost::any> temp1;
      for(auto item1:*revokeSecurityPolicyRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RevokeSecurityPolicyRule"] = boost::any(temp1);
    }
    if (authorizeAccessPolicyRule) {
      vector<boost::any> temp1;
      for(auto item1:*authorizeAccessPolicyRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthorizeAccessPolicyRule"] = boost::any(temp1);
    }
    if (revokeAccessPolicyRule) {
      vector<boost::any> temp1;
      for(auto item1:*revokeAccessPolicyRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RevokeAccessPolicyRule"] = boost::any(temp1);
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
    if (m.find("VisualQuality") != m.end() && !m["VisualQuality"].empty()) {
      visualQuality = make_shared<string>(boost::any_cast<string>(m["VisualQuality"]));
    }
    if (m.find("Html5Access") != m.end() && !m["Html5Access"].empty()) {
      html5Access = make_shared<string>(boost::any_cast<string>(m["Html5Access"]));
    }
    if (m.find("Html5FileTransfer") != m.end() && !m["Html5FileTransfer"].empty()) {
      html5FileTransfer = make_shared<string>(boost::any_cast<string>(m["Html5FileTransfer"]));
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
    if (m.find("PreemptLogin") != m.end() && !m["PreemptLogin"].empty()) {
      preemptLogin = make_shared<string>(boost::any_cast<string>(m["PreemptLogin"]));
    }
    if (m.find("DomainList") != m.end() && !m["DomainList"].empty()) {
      domainList = make_shared<string>(boost::any_cast<string>(m["DomainList"]));
    }
    if (m.find("PreemptLoginUser") != m.end() && !m["PreemptLoginUser"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PreemptLoginUser"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PreemptLoginUser"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      preemptLoginUser = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AuthorizeSecurityPolicyRule") != m.end() && !m["AuthorizeSecurityPolicyRule"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthorizeSecurityPolicyRule"].type()) {
        vector<ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthorizeSecurityPolicyRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authorizeSecurityPolicyRule = make_shared<vector<ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule>>(expect1);
      }
    }
    if (m.find("RevokeSecurityPolicyRule") != m.end() && !m["RevokeSecurityPolicyRule"].empty()) {
      if (typeid(vector<boost::any>) == m["RevokeSecurityPolicyRule"].type()) {
        vector<ModifyPolicyGroupRequestRevokeSecurityPolicyRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RevokeSecurityPolicyRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyPolicyGroupRequestRevokeSecurityPolicyRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        revokeSecurityPolicyRule = make_shared<vector<ModifyPolicyGroupRequestRevokeSecurityPolicyRule>>(expect1);
      }
    }
    if (m.find("AuthorizeAccessPolicyRule") != m.end() && !m["AuthorizeAccessPolicyRule"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthorizeAccessPolicyRule"].type()) {
        vector<ModifyPolicyGroupRequestAuthorizeAccessPolicyRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthorizeAccessPolicyRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyPolicyGroupRequestAuthorizeAccessPolicyRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authorizeAccessPolicyRule = make_shared<vector<ModifyPolicyGroupRequestAuthorizeAccessPolicyRule>>(expect1);
      }
    }
    if (m.find("RevokeAccessPolicyRule") != m.end() && !m["RevokeAccessPolicyRule"].empty()) {
      if (typeid(vector<boost::any>) == m["RevokeAccessPolicyRule"].type()) {
        vector<ModifyPolicyGroupRequestRevokeAccessPolicyRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RevokeAccessPolicyRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyPolicyGroupRequestRevokeAccessPolicyRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        revokeAccessPolicyRule = make_shared<vector<ModifyPolicyGroupRequestRevokeAccessPolicyRule>>(expect1);
      }
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
class ModifyScaleStrategyRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> scaleStrategyId{};
  shared_ptr<string> scaleStrategyName{};
  shared_ptr<string> scaleStrategyType{};
  shared_ptr<long> minDesktopsCount{};
  shared_ptr<long> maxDesktopsCount{};
  shared_ptr<long> minAvailableDesktopsCount{};
  shared_ptr<long> maxAvailableDesktopsCount{};
  shared_ptr<long> scaleStep{};

  ModifyScaleStrategyRequest() {}

  explicit ModifyScaleStrategyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scaleStrategyId) {
      res["ScaleStrategyId"] = boost::any(*scaleStrategyId);
    }
    if (scaleStrategyName) {
      res["ScaleStrategyName"] = boost::any(*scaleStrategyName);
    }
    if (scaleStrategyType) {
      res["ScaleStrategyType"] = boost::any(*scaleStrategyType);
    }
    if (minDesktopsCount) {
      res["MinDesktopsCount"] = boost::any(*minDesktopsCount);
    }
    if (maxDesktopsCount) {
      res["MaxDesktopsCount"] = boost::any(*maxDesktopsCount);
    }
    if (minAvailableDesktopsCount) {
      res["MinAvailableDesktopsCount"] = boost::any(*minAvailableDesktopsCount);
    }
    if (maxAvailableDesktopsCount) {
      res["MaxAvailableDesktopsCount"] = boost::any(*maxAvailableDesktopsCount);
    }
    if (scaleStep) {
      res["ScaleStep"] = boost::any(*scaleStep);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScaleStrategyId") != m.end() && !m["ScaleStrategyId"].empty()) {
      scaleStrategyId = make_shared<string>(boost::any_cast<string>(m["ScaleStrategyId"]));
    }
    if (m.find("ScaleStrategyName") != m.end() && !m["ScaleStrategyName"].empty()) {
      scaleStrategyName = make_shared<string>(boost::any_cast<string>(m["ScaleStrategyName"]));
    }
    if (m.find("ScaleStrategyType") != m.end() && !m["ScaleStrategyType"].empty()) {
      scaleStrategyType = make_shared<string>(boost::any_cast<string>(m["ScaleStrategyType"]));
    }
    if (m.find("MinDesktopsCount") != m.end() && !m["MinDesktopsCount"].empty()) {
      minDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MinDesktopsCount"]));
    }
    if (m.find("MaxDesktopsCount") != m.end() && !m["MaxDesktopsCount"].empty()) {
      maxDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MaxDesktopsCount"]));
    }
    if (m.find("MinAvailableDesktopsCount") != m.end() && !m["MinAvailableDesktopsCount"].empty()) {
      minAvailableDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MinAvailableDesktopsCount"]));
    }
    if (m.find("MaxAvailableDesktopsCount") != m.end() && !m["MaxAvailableDesktopsCount"].empty()) {
      maxAvailableDesktopsCount = make_shared<long>(boost::any_cast<long>(m["MaxAvailableDesktopsCount"]));
    }
    if (m.find("ScaleStep") != m.end() && !m["ScaleStep"].empty()) {
      scaleStep = make_shared<long>(boost::any_cast<long>(m["ScaleStep"]));
    }
  }


  virtual ~ModifyScaleStrategyRequest() = default;
};
class ModifyScaleStrategyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyScaleStrategyResponseBody() {}

  explicit ModifyScaleStrategyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyScaleStrategyResponseBody() = default;
};
class ModifyScaleStrategyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyScaleStrategyResponseBody> body{};

  ModifyScaleStrategyResponse() {}

  explicit ModifyScaleStrategyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyScaleStrategyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyScaleStrategyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyScaleStrategyResponse() = default;
};
class ModifyUserToDesktopGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopGroupId{};
  shared_ptr<vector<string>> oldEndUserIds{};
  shared_ptr<vector<string>> newEndUserIds{};

  ModifyUserToDesktopGroupRequest() {}

  explicit ModifyUserToDesktopGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopGroupId) {
      res["DesktopGroupId"] = boost::any(*desktopGroupId);
    }
    if (oldEndUserIds) {
      res["OldEndUserIds"] = boost::any(*oldEndUserIds);
    }
    if (newEndUserIds) {
      res["NewEndUserIds"] = boost::any(*newEndUserIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopGroupId") != m.end() && !m["DesktopGroupId"].empty()) {
      desktopGroupId = make_shared<string>(boost::any_cast<string>(m["DesktopGroupId"]));
    }
    if (m.find("OldEndUserIds") != m.end() && !m["OldEndUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OldEndUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OldEndUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      oldEndUserIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NewEndUserIds") != m.end() && !m["NewEndUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NewEndUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NewEndUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      newEndUserIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyUserToDesktopGroupRequest() = default;
};
class ModifyUserToDesktopGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyUserToDesktopGroupResponseBody() {}

  explicit ModifyUserToDesktopGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyUserToDesktopGroupResponseBody() = default;
};
class ModifyUserToDesktopGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyUserToDesktopGroupResponseBody> body{};

  ModifyUserToDesktopGroupResponse() {}

  explicit ModifyUserToDesktopGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyUserToDesktopGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyUserToDesktopGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyUserToDesktopGroupResponse() = default;
};
class OperateVulsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};
  shared_ptr<string> operateType{};
  shared_ptr<string> reason{};
  shared_ptr<long> precondition{};
  shared_ptr<vector<string>> vulName{};
  shared_ptr<vector<string>> desktopId{};

  OperateVulsRequest() {}

  explicit OperateVulsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (precondition) {
      res["Precondition"] = boost::any(*precondition);
    }
    if (vulName) {
      res["VulName"] = boost::any(*vulName);
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
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Precondition") != m.end() && !m["Precondition"].empty()) {
      precondition = make_shared<long>(boost::any_cast<long>(m["Precondition"]));
    }
    if (m.find("VulName") != m.end() && !m["VulName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VulName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VulName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vulName = make_shared<vector<string>>(toVec1);
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


  virtual ~OperateVulsRequest() = default;
};
class OperateVulsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OperateVulsResponseBody() {}

  explicit OperateVulsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OperateVulsResponseBody() = default;
};
class OperateVulsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OperateVulsResponseBody> body{};

  OperateVulsResponse() {}

  explicit OperateVulsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateVulsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateVulsResponseBody>(model1);
      }
    }
  }


  virtual ~OperateVulsResponse() = default;
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
class RebuildDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> desktopId{};

  RebuildDesktopsRequest() {}

  explicit RebuildDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RebuildDesktopsRequest() = default;
};
class RebuildDesktopsResponseBodyRebuildResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> desktopId{};

  RebuildDesktopsResponseBodyRebuildResults() {}

  explicit RebuildDesktopsResponseBodyRebuildResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
  }


  virtual ~RebuildDesktopsResponseBodyRebuildResults() = default;
};
class RebuildDesktopsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<RebuildDesktopsResponseBodyRebuildResults>> rebuildResults{};

  RebuildDesktopsResponseBody() {}

  explicit RebuildDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rebuildResults) {
      vector<boost::any> temp1;
      for(auto item1:*rebuildResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RebuildResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RebuildResults") != m.end() && !m["RebuildResults"].empty()) {
      if (typeid(vector<boost::any>) == m["RebuildResults"].type()) {
        vector<RebuildDesktopsResponseBodyRebuildResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RebuildResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RebuildDesktopsResponseBodyRebuildResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rebuildResults = make_shared<vector<RebuildDesktopsResponseBodyRebuildResults>>(expect1);
      }
    }
  }


  virtual ~RebuildDesktopsResponseBody() = default;
};
class RebuildDesktopsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RebuildDesktopsResponseBody> body{};

  RebuildDesktopsResponse() {}

  explicit RebuildDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RebuildDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RebuildDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~RebuildDesktopsResponse() = default;
};
class RecreateDesktopGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopGroupId{};
  shared_ptr<string> ownBundleId{};

  RecreateDesktopGroupRequest() {}

  explicit RecreateDesktopGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopGroupId) {
      res["DesktopGroupId"] = boost::any(*desktopGroupId);
    }
    if (ownBundleId) {
      res["OwnBundleId"] = boost::any(*ownBundleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopGroupId") != m.end() && !m["DesktopGroupId"].empty()) {
      desktopGroupId = make_shared<string>(boost::any_cast<string>(m["DesktopGroupId"]));
    }
    if (m.find("OwnBundleId") != m.end() && !m["OwnBundleId"].empty()) {
      ownBundleId = make_shared<string>(boost::any_cast<string>(m["OwnBundleId"]));
    }
  }


  virtual ~RecreateDesktopGroupRequest() = default;
};
class RecreateDesktopGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RecreateDesktopGroupResponseBody() {}

  explicit RecreateDesktopGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecreateDesktopGroupResponseBody() = default;
};
class RecreateDesktopGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecreateDesktopGroupResponseBody> body{};

  RecreateDesktopGroupResponse() {}

  explicit RecreateDesktopGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecreateDesktopGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecreateDesktopGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RecreateDesktopGroupResponse() = default;
};
class RemoveUserFromDesktopGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> desktopGroupId{};
  shared_ptr<vector<string>> endUserIds{};

  RemoveUserFromDesktopGroupRequest() {}

  explicit RemoveUserFromDesktopGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (desktopGroupId) {
      res["DesktopGroupId"] = boost::any(*desktopGroupId);
    }
    if (endUserIds) {
      res["EndUserIds"] = boost::any(*endUserIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DesktopGroupId") != m.end() && !m["DesktopGroupId"].empty()) {
      desktopGroupId = make_shared<string>(boost::any_cast<string>(m["DesktopGroupId"]));
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
  }


  virtual ~RemoveUserFromDesktopGroupRequest() = default;
};
class RemoveUserFromDesktopGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveUserFromDesktopGroupResponseBody() {}

  explicit RemoveUserFromDesktopGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveUserFromDesktopGroupResponseBody() = default;
};
class RemoveUserFromDesktopGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveUserFromDesktopGroupResponseBody> body{};

  RemoveUserFromDesktopGroupResponse() {}

  explicit RemoveUserFromDesktopGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveUserFromDesktopGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveUserFromDesktopGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveUserFromDesktopGroupResponse() = default;
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
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  RenewDesktopsResponseBody() {}

  explicit RenewDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class ResetNASDefaultMountTargetRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> fileSystemId{};

  ResetNASDefaultMountTargetRequest() {}

  explicit ResetNASDefaultMountTargetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~ResetNASDefaultMountTargetRequest() = default;
};
class ResetNASDefaultMountTargetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetNASDefaultMountTargetResponseBody() {}

  explicit ResetNASDefaultMountTargetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetNASDefaultMountTargetResponseBody() = default;
};
class ResetNASDefaultMountTargetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResetNASDefaultMountTargetResponseBody> body{};

  ResetNASDefaultMountTargetResponse() {}

  explicit ResetNASDefaultMountTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetNASDefaultMountTargetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetNASDefaultMountTargetResponseBody>(model1);
      }
    }
  }


  virtual ~ResetNASDefaultMountTargetResponse() = default;
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
class RollbackSuspEventQuaraFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> quaraFieldId{};
  shared_ptr<string> desktopId{};

  RollbackSuspEventQuaraFileRequest() {}

  explicit RollbackSuspEventQuaraFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (quaraFieldId) {
      res["QuaraFieldId"] = boost::any(*quaraFieldId);
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
    if (m.find("QuaraFieldId") != m.end() && !m["QuaraFieldId"].empty()) {
      quaraFieldId = make_shared<long>(boost::any_cast<long>(m["QuaraFieldId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
  }


  virtual ~RollbackSuspEventQuaraFileRequest() = default;
};
class RollbackSuspEventQuaraFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RollbackSuspEventQuaraFileResponseBody() {}

  explicit RollbackSuspEventQuaraFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RollbackSuspEventQuaraFileResponseBody() = default;
};
class RollbackSuspEventQuaraFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RollbackSuspEventQuaraFileResponseBody> body{};

  RollbackSuspEventQuaraFileResponse() {}

  explicit RollbackSuspEventQuaraFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RollbackSuspEventQuaraFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RollbackSuspEventQuaraFileResponseBody>(model1);
      }
    }
  }


  virtual ~RollbackSuspEventQuaraFileResponse() = default;
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
  shared_ptr<string> invokeId{};
  shared_ptr<string> requestId{};

  RunCommandResponseBody() {}

  explicit RunCommandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class SetDirectorySsoStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> directoryId{};
  shared_ptr<bool> enableSso{};

  SetDirectorySsoStatusRequest() {}

  explicit SetDirectorySsoStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (enableSso) {
      res["EnableSso"] = boost::any(*enableSso);
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
    if (m.find("EnableSso") != m.end() && !m["EnableSso"].empty()) {
      enableSso = make_shared<bool>(boost::any_cast<bool>(m["EnableSso"]));
    }
  }


  virtual ~SetDirectorySsoStatusRequest() = default;
};
class SetDirectorySsoStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetDirectorySsoStatusResponseBody() {}

  explicit SetDirectorySsoStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetDirectorySsoStatusResponseBody() = default;
};
class SetDirectorySsoStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetDirectorySsoStatusResponseBody> body{};

  SetDirectorySsoStatusResponse() {}

  explicit SetDirectorySsoStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDirectorySsoStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDirectorySsoStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetDirectorySsoStatusResponse() = default;
};
class SetIdpMetadataRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> idpMetadata{};

  SetIdpMetadataRequest() {}

  explicit SetIdpMetadataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (idpMetadata) {
      res["IdpMetadata"] = boost::any(*idpMetadata);
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
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("IdpMetadata") != m.end() && !m["IdpMetadata"].empty()) {
      idpMetadata = make_shared<string>(boost::any_cast<string>(m["IdpMetadata"]));
    }
  }


  virtual ~SetIdpMetadataRequest() = default;
};
class SetIdpMetadataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> idpEntityId{};
  shared_ptr<string> requestId{};

  SetIdpMetadataResponseBody() {}

  explicit SetIdpMetadataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idpEntityId) {
      res["IdpEntityId"] = boost::any(*idpEntityId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdpEntityId") != m.end() && !m["IdpEntityId"].empty()) {
      idpEntityId = make_shared<string>(boost::any_cast<string>(m["IdpEntityId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetIdpMetadataResponseBody() = default;
};
class SetIdpMetadataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetIdpMetadataResponseBody> body{};

  SetIdpMetadataResponse() {}

  explicit SetIdpMetadataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetIdpMetadataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetIdpMetadataResponseBody>(model1);
      }
    }
  }


  virtual ~SetIdpMetadataResponse() = default;
};
class SetOfficeSiteSsoStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<bool> enableSso{};

  SetOfficeSiteSsoStatusRequest() {}

  explicit SetOfficeSiteSsoStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (enableSso) {
      res["EnableSso"] = boost::any(*enableSso);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("EnableSso") != m.end() && !m["EnableSso"].empty()) {
      enableSso = make_shared<bool>(boost::any_cast<bool>(m["EnableSso"]));
    }
  }


  virtual ~SetOfficeSiteSsoStatusRequest() = default;
};
class SetOfficeSiteSsoStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetOfficeSiteSsoStatusResponseBody() {}

  explicit SetOfficeSiteSsoStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetOfficeSiteSsoStatusResponseBody() = default;
};
class SetOfficeSiteSsoStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetOfficeSiteSsoStatusResponseBody> body{};

  SetOfficeSiteSsoStatusResponse() {}

  explicit SetOfficeSiteSsoStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetOfficeSiteSsoStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetOfficeSiteSsoStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetOfficeSiteSsoStatusResponse() = default;
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
class StartVirusScanTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> officeSiteId{};
  shared_ptr<vector<string>> desktopId{};

  StartVirusScanTaskRequest() {}

  explicit StartVirusScanTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
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
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OfficeSiteId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OfficeSiteId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      officeSiteId = make_shared<vector<string>>(toVec1);
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


  virtual ~StartVirusScanTaskRequest() = default;
};
class StartVirusScanTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> scanTaskId{};
  shared_ptr<string> requestId{};

  StartVirusScanTaskResponseBody() {}

  explicit StartVirusScanTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scanTaskId) {
      res["ScanTaskId"] = boost::any(*scanTaskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScanTaskId") != m.end() && !m["ScanTaskId"].empty()) {
      scanTaskId = make_shared<long>(boost::any_cast<long>(m["ScanTaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartVirusScanTaskResponseBody() = default;
};
class StartVirusScanTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartVirusScanTaskResponseBody> body{};

  StartVirusScanTaskResponse() {}

  explicit StartVirusScanTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartVirusScanTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartVirusScanTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StartVirusScanTaskResponse() = default;
};
class StopDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> stoppedMode{};
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
    if (stoppedMode) {
      res["StoppedMode"] = boost::any(*stoppedMode);
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
    if (m.find("StoppedMode") != m.end() && !m["StoppedMode"].empty()) {
      stoppedMode = make_shared<string>(boost::any_cast<string>(m["StoppedMode"]));
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
  AddUserToDesktopGroupResponse addUserToDesktopGroupWithOptions(shared_ptr<AddUserToDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserToDesktopGroupResponse addUserToDesktopGroup(shared_ptr<AddUserToDesktopGroupRequest> request);
  AddUserToSecurityCenterWhiteListResponse addUserToSecurityCenterWhiteListWithOptions(shared_ptr<AddUserToSecurityCenterWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserToSecurityCenterWhiteListResponse addUserToSecurityCenterWhiteList(shared_ptr<AddUserToSecurityCenterWhiteListRequest> request);
  AttachCenResponse attachCenWithOptions(shared_ptr<AttachCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachCenResponse attachCen(shared_ptr<AttachCenRequest> request);
  CheckUserInSecurityCenterWhiteListResponse checkUserInSecurityCenterWhiteListWithOptions(shared_ptr<CheckUserInSecurityCenterWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckUserInSecurityCenterWhiteListResponse checkUserInSecurityCenterWhiteList(shared_ptr<CheckUserInSecurityCenterWhiteListRequest> request);
  ClonePolicyGroupResponse clonePolicyGroupWithOptions(shared_ptr<ClonePolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClonePolicyGroupResponse clonePolicyGroup(shared_ptr<ClonePolicyGroupRequest> request);
  CreateADConnectorDirectoryResponse createADConnectorDirectoryWithOptions(shared_ptr<CreateADConnectorDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateADConnectorDirectoryResponse createADConnectorDirectory(shared_ptr<CreateADConnectorDirectoryRequest> request);
  CreateADConnectorOfficeSiteResponse createADConnectorOfficeSiteWithOptions(shared_ptr<CreateADConnectorOfficeSiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateADConnectorOfficeSiteResponse createADConnectorOfficeSite(shared_ptr<CreateADConnectorOfficeSiteRequest> request);
  CreateBundleResponse createBundleWithOptions(shared_ptr<CreateBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBundleResponse createBundle(shared_ptr<CreateBundleRequest> request);
  CreateDesktopGroupResponse createDesktopGroupWithOptions(shared_ptr<CreateDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDesktopGroupResponse createDesktopGroup(shared_ptr<CreateDesktopGroupRequest> request);
  CreateDesktopsResponse createDesktopsWithOptions(shared_ptr<CreateDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDesktopsResponse createDesktops(shared_ptr<CreateDesktopsRequest> request);
  CreateDesktopsLiteResponse createDesktopsLiteWithOptions(shared_ptr<CreateDesktopsLiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDesktopsLiteResponse createDesktopsLite(shared_ptr<CreateDesktopsLiteRequest> request);
  CreateImageResponse createImageWithOptions(shared_ptr<CreateImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateImageResponse createImage(shared_ptr<CreateImageRequest> request);
  CreateNASFileSystemResponse createNASFileSystemWithOptions(shared_ptr<CreateNASFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNASFileSystemResponse createNASFileSystem(shared_ptr<CreateNASFileSystemRequest> request);
  CreateNetworkPackageResponse createNetworkPackageWithOptions(shared_ptr<CreateNetworkPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNetworkPackageResponse createNetworkPackage(shared_ptr<CreateNetworkPackageRequest> request);
  CreatePolicyGroupResponse createPolicyGroupWithOptions(shared_ptr<CreatePolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyGroupResponse createPolicyGroup(shared_ptr<CreatePolicyGroupRequest> request);
  CreateRAMDirectoryResponse createRAMDirectoryWithOptions(shared_ptr<CreateRAMDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRAMDirectoryResponse createRAMDirectory(shared_ptr<CreateRAMDirectoryRequest> request);
  CreateScaleStrategyResponse createScaleStrategyWithOptions(shared_ptr<CreateScaleStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScaleStrategyResponse createScaleStrategy(shared_ptr<CreateScaleStrategyRequest> request);
  CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(shared_ptr<CreateServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceLinkedRoleResponse createServiceLinkedRole(shared_ptr<CreateServiceLinkedRoleRequest> request);
  CreateSimpleOfficeSiteResponse createSimpleOfficeSiteWithOptions(shared_ptr<CreateSimpleOfficeSiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSimpleOfficeSiteResponse createSimpleOfficeSite(shared_ptr<CreateSimpleOfficeSiteRequest> request);
  CreateSnapshotResponse createSnapshotWithOptions(shared_ptr<CreateSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSnapshotResponse createSnapshot(shared_ptr<CreateSnapshotRequest> request);
  DeleteBundlesResponse deleteBundlesWithOptions(shared_ptr<DeleteBundlesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBundlesResponse deleteBundles(shared_ptr<DeleteBundlesRequest> request);
  DeleteDesktopGroupResponse deleteDesktopGroupWithOptions(shared_ptr<DeleteDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDesktopGroupResponse deleteDesktopGroup(shared_ptr<DeleteDesktopGroupRequest> request);
  DeleteDesktopsResponse deleteDesktopsWithOptions(shared_ptr<DeleteDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDesktopsResponse deleteDesktops(shared_ptr<DeleteDesktopsRequest> request);
  DeleteDirectoriesResponse deleteDirectoriesWithOptions(shared_ptr<DeleteDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDirectoriesResponse deleteDirectories(shared_ptr<DeleteDirectoriesRequest> request);
  DeleteImagesResponse deleteImagesWithOptions(shared_ptr<DeleteImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImagesResponse deleteImages(shared_ptr<DeleteImagesRequest> request);
  DeleteNASFileSystemsResponse deleteNASFileSystemsWithOptions(shared_ptr<DeleteNASFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNASFileSystemsResponse deleteNASFileSystems(shared_ptr<DeleteNASFileSystemsRequest> request);
  DeleteNetworkPackagesResponse deleteNetworkPackagesWithOptions(shared_ptr<DeleteNetworkPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNetworkPackagesResponse deleteNetworkPackages(shared_ptr<DeleteNetworkPackagesRequest> request);
  DeleteOfficeSitesResponse deleteOfficeSitesWithOptions(shared_ptr<DeleteOfficeSitesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteOfficeSitesResponse deleteOfficeSites(shared_ptr<DeleteOfficeSitesRequest> request);
  DeletePolicyGroupsResponse deletePolicyGroupsWithOptions(shared_ptr<DeletePolicyGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyGroupsResponse deletePolicyGroups(shared_ptr<DeletePolicyGroupsRequest> request);
  DeleteScaleStrategyResponse deleteScaleStrategyWithOptions(shared_ptr<DeleteScaleStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScaleStrategyResponse deleteScaleStrategy(shared_ptr<DeleteScaleStrategyRequest> request);
  DeleteSnapshotResponse deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSnapshotResponse deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request);
  DeleteVirtualMFADeviceResponse deleteVirtualMFADeviceWithOptions(shared_ptr<DeleteVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVirtualMFADeviceResponse deleteVirtualMFADevice(shared_ptr<DeleteVirtualMFADeviceRequest> request);
  DescribeAlarmEventStackInfoResponse describeAlarmEventStackInfoWithOptions(shared_ptr<DescribeAlarmEventStackInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlarmEventStackInfoResponse describeAlarmEventStackInfo(shared_ptr<DescribeAlarmEventStackInfoRequest> request);
  DescribeBundlesResponse describeBundlesWithOptions(shared_ptr<DescribeBundlesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBundlesResponse describeBundles(shared_ptr<DescribeBundlesRequest> request);
  DescribeCensResponse describeCensWithOptions(shared_ptr<DescribeCensRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCensResponse describeCens(shared_ptr<DescribeCensRequest> request);
  DescribeClientEventsResponse describeClientEventsWithOptions(shared_ptr<DescribeClientEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClientEventsResponse describeClientEvents(shared_ptr<DescribeClientEventsRequest> request);
  DescribeDesktopIdsByVulNamesResponse describeDesktopIdsByVulNamesWithOptions(shared_ptr<DescribeDesktopIdsByVulNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDesktopIdsByVulNamesResponse describeDesktopIdsByVulNames(shared_ptr<DescribeDesktopIdsByVulNamesRequest> request);
  DescribeDesktopPolicysResponse describeDesktopPolicysWithOptions(shared_ptr<DescribeDesktopPolicysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDesktopPolicysResponse describeDesktopPolicys(shared_ptr<DescribeDesktopPolicysRequest> request);
  DescribeDesktopsResponse describeDesktopsWithOptions(shared_ptr<DescribeDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDesktopsResponse describeDesktops(shared_ptr<DescribeDesktopsRequest> request);
  DescribeDesktopsInGroupResponse describeDesktopsInGroupWithOptions(shared_ptr<DescribeDesktopsInGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDesktopsInGroupResponse describeDesktopsInGroup(shared_ptr<DescribeDesktopsInGroupRequest> request);
  DescribeDesktopTypesResponse describeDesktopTypesWithOptions(shared_ptr<DescribeDesktopTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDesktopTypesResponse describeDesktopTypes(shared_ptr<DescribeDesktopTypesRequest> request);
  DescribeDirectoriesResponse describeDirectoriesWithOptions(shared_ptr<DescribeDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDirectoriesResponse describeDirectories(shared_ptr<DescribeDirectoriesRequest> request);
  DescribeFrontVulPatchListResponse describeFrontVulPatchListWithOptions(shared_ptr<DescribeFrontVulPatchListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFrontVulPatchListResponse describeFrontVulPatchList(shared_ptr<DescribeFrontVulPatchListRequest> request);
  DescribeGroupedVulResponse describeGroupedVulWithOptions(shared_ptr<DescribeGroupedVulRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGroupedVulResponse describeGroupedVul(shared_ptr<DescribeGroupedVulRequest> request);
  DescribeImagesResponse describeImagesWithOptions(shared_ptr<DescribeImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImagesResponse describeImages(shared_ptr<DescribeImagesRequest> request);
  DescribeInvocationsResponse describeInvocationsWithOptions(shared_ptr<DescribeInvocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInvocationsResponse describeInvocations(shared_ptr<DescribeInvocationsRequest> request);
  DescribeModificationPriceResponse describeModificationPriceWithOptions(shared_ptr<DescribeModificationPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeModificationPriceResponse describeModificationPrice(shared_ptr<DescribeModificationPriceRequest> request);
  DescribeNASFileSystemsResponse describeNASFileSystemsWithOptions(shared_ptr<DescribeNASFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNASFileSystemsResponse describeNASFileSystems(shared_ptr<DescribeNASFileSystemsRequest> request);
  DescribeNetworkPackagesResponse describeNetworkPackagesWithOptions(shared_ptr<DescribeNetworkPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNetworkPackagesResponse describeNetworkPackages(shared_ptr<DescribeNetworkPackagesRequest> request);
  DescribeOfficeSitesResponse describeOfficeSitesWithOptions(shared_ptr<DescribeOfficeSitesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOfficeSitesResponse describeOfficeSites(shared_ptr<DescribeOfficeSitesRequest> request);
  DescribePolicyGroupsResponse describePolicyGroupsWithOptions(shared_ptr<DescribePolicyGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePolicyGroupsResponse describePolicyGroups(shared_ptr<DescribePolicyGroupsRequest> request);
  DescribePostPaidDesktopBillsResponse describePostPaidDesktopBillsWithOptions(shared_ptr<DescribePostPaidDesktopBillsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePostPaidDesktopBillsResponse describePostPaidDesktopBills(shared_ptr<DescribePostPaidDesktopBillsRequest> request);
  DescribePriceResponse describePriceWithOptions(shared_ptr<DescribePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePriceResponse describePrice(shared_ptr<DescribePriceRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeScaleStrategysResponse describeScaleStrategysWithOptions(shared_ptr<DescribeScaleStrategysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScaleStrategysResponse describeScaleStrategys(shared_ptr<DescribeScaleStrategysRequest> request);
  DescribeScanTaskProgressResponse describeScanTaskProgressWithOptions(shared_ptr<DescribeScanTaskProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScanTaskProgressResponse describeScanTaskProgress(shared_ptr<DescribeScanTaskProgressRequest> request);
  DescribeSecurityEventOperationsResponse describeSecurityEventOperationsWithOptions(shared_ptr<DescribeSecurityEventOperationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSecurityEventOperationsResponse describeSecurityEventOperations(shared_ptr<DescribeSecurityEventOperationsRequest> request);
  DescribeSecurityEventOperationStatusResponse describeSecurityEventOperationStatusWithOptions(shared_ptr<DescribeSecurityEventOperationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSecurityEventOperationStatusResponse describeSecurityEventOperationStatus(shared_ptr<DescribeSecurityEventOperationStatusRequest> request);
  DescribeSnapshotsResponse describeSnapshotsWithOptions(shared_ptr<DescribeSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSnapshotsResponse describeSnapshots(shared_ptr<DescribeSnapshotsRequest> request);
  DescribeSuspEventOverviewResponse describeSuspEventOverviewWithOptions(shared_ptr<DescribeSuspEventOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSuspEventOverviewResponse describeSuspEventOverview(shared_ptr<DescribeSuspEventOverviewRequest> request);
  DescribeSuspEventQuaraFilesResponse describeSuspEventQuaraFilesWithOptions(shared_ptr<DescribeSuspEventQuaraFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSuspEventQuaraFilesResponse describeSuspEventQuaraFiles(shared_ptr<DescribeSuspEventQuaraFilesRequest> request);
  DescribeSuspEventsResponse describeSuspEventsWithOptions(shared_ptr<DescribeSuspEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSuspEventsResponse describeSuspEvents(shared_ptr<DescribeSuspEventsRequest> request);
  DescribeUserConnectionRecordsResponse describeUserConnectionRecordsWithOptions(shared_ptr<DescribeUserConnectionRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserConnectionRecordsResponse describeUserConnectionRecords(shared_ptr<DescribeUserConnectionRecordsRequest> request);
  DescribeUsersInGroupResponse describeUsersInGroupWithOptions(shared_ptr<DescribeUsersInGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUsersInGroupResponse describeUsersInGroup(shared_ptr<DescribeUsersInGroupRequest> request);
  DescribeVirtualMFADevicesResponse describeVirtualMFADevicesWithOptions(shared_ptr<DescribeVirtualMFADevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVirtualMFADevicesResponse describeVirtualMFADevices(shared_ptr<DescribeVirtualMFADevicesRequest> request);
  DescribeVulDetailsResponse describeVulDetailsWithOptions(shared_ptr<DescribeVulDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVulDetailsResponse describeVulDetails(shared_ptr<DescribeVulDetailsRequest> request);
  DescribeVulListResponse describeVulListWithOptions(shared_ptr<DescribeVulListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVulListResponse describeVulList(shared_ptr<DescribeVulListRequest> request);
  DescribeVulOverviewResponse describeVulOverviewWithOptions(shared_ptr<DescribeVulOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVulOverviewResponse describeVulOverview(shared_ptr<DescribeVulOverviewRequest> request);
  DescribeZonesResponse describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZonesResponse describeZones(shared_ptr<DescribeZonesRequest> request);
  DetachCenResponse detachCenWithOptions(shared_ptr<DetachCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachCenResponse detachCen(shared_ptr<DetachCenRequest> request);
  DoCheckResourceResponse doCheckResourceWithOptions(shared_ptr<DoCheckResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DoCheckResourceResponse doCheckResource(shared_ptr<DoCheckResourceRequest> request);
  DoLogicalDeleteResourceResponse doLogicalDeleteResourceWithOptions(shared_ptr<DoLogicalDeleteResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DoLogicalDeleteResourceResponse doLogicalDeleteResource(shared_ptr<DoLogicalDeleteResourceRequest> request);
  DoPhysicalDeleteResourceResponse doPhysicalDeleteResourceWithOptions(shared_ptr<DoPhysicalDeleteResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DoPhysicalDeleteResourceResponse doPhysicalDeleteResource(shared_ptr<DoPhysicalDeleteResourceRequest> request);
  GetConnectionTicketResponse getConnectionTicketWithOptions(shared_ptr<GetConnectionTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConnectionTicketResponse getConnectionTicket(shared_ptr<GetConnectionTicketRequest> request);
  GetDesktopGroupDetailResponse getDesktopGroupDetailWithOptions(shared_ptr<GetDesktopGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDesktopGroupDetailResponse getDesktopGroupDetail(shared_ptr<GetDesktopGroupDetailRequest> request);
  GetDesktopUsersResponse getDesktopUsersWithOptions(shared_ptr<GetDesktopUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDesktopUsersResponse getDesktopUsers(shared_ptr<GetDesktopUsersRequest> request);
  GetDirectorySsoStatusResponse getDirectorySsoStatusWithOptions(shared_ptr<GetDirectorySsoStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDirectorySsoStatusResponse getDirectorySsoStatus(shared_ptr<GetDirectorySsoStatusRequest> request);
  GetOfficeSiteSsoStatusResponse getOfficeSiteSsoStatusWithOptions(shared_ptr<GetOfficeSiteSsoStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOfficeSiteSsoStatusResponse getOfficeSiteSsoStatus(shared_ptr<GetOfficeSiteSsoStatusRequest> request);
  GetSpMetadataResponse getSpMetadataWithOptions(shared_ptr<GetSpMetadataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSpMetadataResponse getSpMetadata(shared_ptr<GetSpMetadataRequest> request);
  HandleSecurityEventsResponse handleSecurityEventsWithOptions(shared_ptr<HandleSecurityEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HandleSecurityEventsResponse handleSecurityEvents(shared_ptr<HandleSecurityEventsRequest> request);
  ListDirectoryUsersResponse listDirectoryUsersWithOptions(shared_ptr<ListDirectoryUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDirectoryUsersResponse listDirectoryUsers(shared_ptr<ListDirectoryUsersRequest> request);
  ListOfficeSiteOverviewResponse listOfficeSiteOverviewWithOptions(shared_ptr<ListOfficeSiteOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOfficeSiteOverviewResponse listOfficeSiteOverview(shared_ptr<ListOfficeSiteOverviewRequest> request);
  ListOfficeSiteUsersResponse listOfficeSiteUsersWithOptions(shared_ptr<ListOfficeSiteUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOfficeSiteUsersResponse listOfficeSiteUsers(shared_ptr<ListOfficeSiteUsersRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  LockVirtualMFADeviceResponse lockVirtualMFADeviceWithOptions(shared_ptr<LockVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LockVirtualMFADeviceResponse lockVirtualMFADevice(shared_ptr<LockVirtualMFADeviceRequest> request);
  ModifyADConnectorDirectoryResponse modifyADConnectorDirectoryWithOptions(shared_ptr<ModifyADConnectorDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyADConnectorDirectoryResponse modifyADConnectorDirectory(shared_ptr<ModifyADConnectorDirectoryRequest> request);
  ModifyADConnectorOfficeSiteResponse modifyADConnectorOfficeSiteWithOptions(shared_ptr<ModifyADConnectorOfficeSiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyADConnectorOfficeSiteResponse modifyADConnectorOfficeSite(shared_ptr<ModifyADConnectorOfficeSiteRequest> request);
  ModifyBundleResponse modifyBundleWithOptions(shared_ptr<ModifyBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBundleResponse modifyBundle(shared_ptr<ModifyBundleRequest> request);
  ModifyDesktopGroupResponse modifyDesktopGroupWithOptions(shared_ptr<ModifyDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDesktopGroupResponse modifyDesktopGroup(shared_ptr<ModifyDesktopGroupRequest> request);
  ModifyDesktopNameResponse modifyDesktopNameWithOptions(shared_ptr<ModifyDesktopNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDesktopNameResponse modifyDesktopName(shared_ptr<ModifyDesktopNameRequest> request);
  ModifyDesktopPolicysResponse modifyDesktopPolicysWithOptions(shared_ptr<ModifyDesktopPolicysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDesktopPolicysResponse modifyDesktopPolicys(shared_ptr<ModifyDesktopPolicysRequest> request);
  ModifyDesktopSpecResponse modifyDesktopSpecWithOptions(shared_ptr<ModifyDesktopSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDesktopSpecResponse modifyDesktopSpec(shared_ptr<ModifyDesktopSpecRequest> request);
  ModifyDesktopsPolicyGroupResponse modifyDesktopsPolicyGroupWithOptions(shared_ptr<ModifyDesktopsPolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDesktopsPolicyGroupResponse modifyDesktopsPolicyGroup(shared_ptr<ModifyDesktopsPolicyGroupRequest> request);
  ModifyEntitlementResponse modifyEntitlementWithOptions(shared_ptr<ModifyEntitlementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyEntitlementResponse modifyEntitlement(shared_ptr<ModifyEntitlementRequest> request);
  ModifyImageAttributeResponse modifyImageAttributeWithOptions(shared_ptr<ModifyImageAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyImageAttributeResponse modifyImageAttribute(shared_ptr<ModifyImageAttributeRequest> request);
  ModifyNASDefaultMountTargetResponse modifyNASDefaultMountTargetWithOptions(shared_ptr<ModifyNASDefaultMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNASDefaultMountTargetResponse modifyNASDefaultMountTarget(shared_ptr<ModifyNASDefaultMountTargetRequest> request);
  ModifyNetworkPackageResponse modifyNetworkPackageWithOptions(shared_ptr<ModifyNetworkPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNetworkPackageResponse modifyNetworkPackage(shared_ptr<ModifyNetworkPackageRequest> request);
  ModifyNetworkPackageEnabledResponse modifyNetworkPackageEnabledWithOptions(shared_ptr<ModifyNetworkPackageEnabledRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNetworkPackageEnabledResponse modifyNetworkPackageEnabled(shared_ptr<ModifyNetworkPackageEnabledRequest> request);
  ModifyOfficeSiteAttributeResponse modifyOfficeSiteAttributeWithOptions(shared_ptr<ModifyOfficeSiteAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyOfficeSiteAttributeResponse modifyOfficeSiteAttribute(shared_ptr<ModifyOfficeSiteAttributeRequest> request);
  ModifyOfficeSiteCrossDesktopAccessResponse modifyOfficeSiteCrossDesktopAccessWithOptions(shared_ptr<ModifyOfficeSiteCrossDesktopAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyOfficeSiteCrossDesktopAccessResponse modifyOfficeSiteCrossDesktopAccess(shared_ptr<ModifyOfficeSiteCrossDesktopAccessRequest> request);
  ModifyOfficeSiteMfaEnabledResponse modifyOfficeSiteMfaEnabledWithOptions(shared_ptr<ModifyOfficeSiteMfaEnabledRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyOfficeSiteMfaEnabledResponse modifyOfficeSiteMfaEnabled(shared_ptr<ModifyOfficeSiteMfaEnabledRequest> request);
  ModifyOperateVulResponse modifyOperateVulWithOptions(shared_ptr<ModifyOperateVulRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyOperateVulResponse modifyOperateVul(shared_ptr<ModifyOperateVulRequest> request);
  ModifyPolicyGroupResponse modifyPolicyGroupWithOptions(shared_ptr<ModifyPolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPolicyGroupResponse modifyPolicyGroup(shared_ptr<ModifyPolicyGroupRequest> request);
  ModifyScaleStrategyResponse modifyScaleStrategyWithOptions(shared_ptr<ModifyScaleStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyScaleStrategyResponse modifyScaleStrategy(shared_ptr<ModifyScaleStrategyRequest> request);
  ModifyUserToDesktopGroupResponse modifyUserToDesktopGroupWithOptions(shared_ptr<ModifyUserToDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyUserToDesktopGroupResponse modifyUserToDesktopGroup(shared_ptr<ModifyUserToDesktopGroupRequest> request);
  OperateVulsResponse operateVulsWithOptions(shared_ptr<OperateVulsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateVulsResponse operateVuls(shared_ptr<OperateVulsRequest> request);
  PayOrderCallbackResponse payOrderCallbackWithOptions(shared_ptr<PayOrderCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PayOrderCallbackResponse payOrderCallback(shared_ptr<PayOrderCallbackRequest> request);
  RebootDesktopsResponse rebootDesktopsWithOptions(shared_ptr<RebootDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebootDesktopsResponse rebootDesktops(shared_ptr<RebootDesktopsRequest> request);
  RebuildDesktopsResponse rebuildDesktopsWithOptions(shared_ptr<RebuildDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebuildDesktopsResponse rebuildDesktops(shared_ptr<RebuildDesktopsRequest> request);
  RecreateDesktopGroupResponse recreateDesktopGroupWithOptions(shared_ptr<RecreateDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecreateDesktopGroupResponse recreateDesktopGroup(shared_ptr<RecreateDesktopGroupRequest> request);
  RemoveUserFromDesktopGroupResponse removeUserFromDesktopGroupWithOptions(shared_ptr<RemoveUserFromDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveUserFromDesktopGroupResponse removeUserFromDesktopGroup(shared_ptr<RemoveUserFromDesktopGroupRequest> request);
  RenewDesktopsResponse renewDesktopsWithOptions(shared_ptr<RenewDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewDesktopsResponse renewDesktops(shared_ptr<RenewDesktopsRequest> request);
  ResetNASDefaultMountTargetResponse resetNASDefaultMountTargetWithOptions(shared_ptr<ResetNASDefaultMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetNASDefaultMountTargetResponse resetNASDefaultMountTarget(shared_ptr<ResetNASDefaultMountTargetRequest> request);
  ResetSnapshotResponse resetSnapshotWithOptions(shared_ptr<ResetSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetSnapshotResponse resetSnapshot(shared_ptr<ResetSnapshotRequest> request);
  RollbackSuspEventQuaraFileResponse rollbackSuspEventQuaraFileWithOptions(shared_ptr<RollbackSuspEventQuaraFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RollbackSuspEventQuaraFileResponse rollbackSuspEventQuaraFile(shared_ptr<RollbackSuspEventQuaraFileRequest> request);
  RunCommandResponse runCommandWithOptions(shared_ptr<RunCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunCommandResponse runCommand(shared_ptr<RunCommandRequest> request);
  SetDirectorySsoStatusResponse setDirectorySsoStatusWithOptions(shared_ptr<SetDirectorySsoStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDirectorySsoStatusResponse setDirectorySsoStatus(shared_ptr<SetDirectorySsoStatusRequest> request);
  SetIdpMetadataResponse setIdpMetadataWithOptions(shared_ptr<SetIdpMetadataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetIdpMetadataResponse setIdpMetadata(shared_ptr<SetIdpMetadataRequest> request);
  SetOfficeSiteSsoStatusResponse setOfficeSiteSsoStatusWithOptions(shared_ptr<SetOfficeSiteSsoStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetOfficeSiteSsoStatusResponse setOfficeSiteSsoStatus(shared_ptr<SetOfficeSiteSsoStatusRequest> request);
  StartDesktopsResponse startDesktopsWithOptions(shared_ptr<StartDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDesktopsResponse startDesktops(shared_ptr<StartDesktopsRequest> request);
  StartVirusScanTaskResponse startVirusScanTaskWithOptions(shared_ptr<StartVirusScanTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartVirusScanTaskResponse startVirusScanTask(shared_ptr<StartVirusScanTaskRequest> request);
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
