// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DFS20180620_H_
#define ALIBABACLOUD_DFS20180620_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_DFS20180620 {
class AttachVscMountPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<map<string, boost::any>> instanceIds{};
  shared_ptr<string> mountPointId{};
  shared_ptr<vector<string>> vscIds{};
  shared_ptr<string> vscType{};

  AttachVscMountPointRequest() {}

  explicit AttachVscMountPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (mountPointId) {
      res["MountPointId"] = boost::any(*mountPointId);
    }
    if (vscIds) {
      res["VscIds"] = boost::any(*vscIds);
    }
    if (vscType) {
      res["VscType"] = boost::any(*vscType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InstanceIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      instanceIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("MountPointId") != m.end() && !m["MountPointId"].empty()) {
      mountPointId = make_shared<string>(boost::any_cast<string>(m["MountPointId"]));
    }
    if (m.find("VscIds") != m.end() && !m["VscIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VscIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VscIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vscIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VscType") != m.end() && !m["VscType"].empty()) {
      vscType = make_shared<string>(boost::any_cast<string>(m["VscType"]));
    }
  }


  virtual ~AttachVscMountPointRequest() = default;
};
class AttachVscMountPointShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> instanceIdsShrink{};
  shared_ptr<string> mountPointId{};
  shared_ptr<string> vscIdsShrink{};
  shared_ptr<string> vscType{};

  AttachVscMountPointShrinkRequest() {}

  explicit AttachVscMountPointShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (instanceIdsShrink) {
      res["InstanceIds"] = boost::any(*instanceIdsShrink);
    }
    if (mountPointId) {
      res["MountPointId"] = boost::any(*mountPointId);
    }
    if (vscIdsShrink) {
      res["VscIds"] = boost::any(*vscIdsShrink);
    }
    if (vscType) {
      res["VscType"] = boost::any(*vscType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIdsShrink = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("MountPointId") != m.end() && !m["MountPointId"].empty()) {
      mountPointId = make_shared<string>(boost::any_cast<string>(m["MountPointId"]));
    }
    if (m.find("VscIds") != m.end() && !m["VscIds"].empty()) {
      vscIdsShrink = make_shared<string>(boost::any_cast<string>(m["VscIds"]));
    }
    if (m.find("VscType") != m.end() && !m["VscType"].empty()) {
      vscType = make_shared<string>(boost::any_cast<string>(m["VscType"]));
    }
  }


  virtual ~AttachVscMountPointShrinkRequest() = default;
};
class AttachVscMountPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachVscMountPointResponseBody() {}

  explicit AttachVscMountPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachVscMountPointResponseBody() = default;
};
class AttachVscMountPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachVscMountPointResponseBody> body{};

  AttachVscMountPointResponse() {}

  explicit AttachVscMountPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachVscMountPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachVscMountPointResponseBody>(model1);
      }
    }
  }


  virtual ~AttachVscMountPointResponse() = default;
};
class BindVscMountPointAliasRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliasPrefix{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> mountPointId{};

  BindVscMountPointAliasRequest() {}

  explicit BindVscMountPointAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasPrefix) {
      res["AliasPrefix"] = boost::any(*aliasPrefix);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (mountPointId) {
      res["MountPointId"] = boost::any(*mountPointId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasPrefix") != m.end() && !m["AliasPrefix"].empty()) {
      aliasPrefix = make_shared<string>(boost::any_cast<string>(m["AliasPrefix"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("MountPointId") != m.end() && !m["MountPointId"].empty()) {
      mountPointId = make_shared<string>(boost::any_cast<string>(m["MountPointId"]));
    }
  }


  virtual ~BindVscMountPointAliasRequest() = default;
};
class BindVscMountPointAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> mountPointAlias{};
  shared_ptr<string> requestId{};

  BindVscMountPointAliasResponseBody() {}

  explicit BindVscMountPointAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountPointAlias) {
      res["MountPointAlias"] = boost::any(*mountPointAlias);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountPointAlias") != m.end() && !m["MountPointAlias"].empty()) {
      mountPointAlias = make_shared<string>(boost::any_cast<string>(m["MountPointAlias"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BindVscMountPointAliasResponseBody() = default;
};
class BindVscMountPointAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindVscMountPointAliasResponseBody> body{};

  BindVscMountPointAliasResponse() {}

  explicit BindVscMountPointAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindVscMountPointAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindVscMountPointAliasResponseBody>(model1);
      }
    }
  }


  virtual ~BindVscMountPointAliasResponse() = default;
};
class CreateAccessGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> description{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> networkType{};

  CreateAccessGroupRequest() {}

  explicit CreateAccessGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
  }


  virtual ~CreateAccessGroupRequest() = default;
};
class CreateAccessGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> requestId{};

  CreateAccessGroupResponseBody() {}

  explicit CreateAccessGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAccessGroupResponseBody() = default;
};
class CreateAccessGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccessGroupResponseBody> body{};

  CreateAccessGroupResponse() {}

  explicit CreateAccessGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccessGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccessGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccessGroupResponse() = default;
};
class CreateAccessRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> description{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> networkSegment{};
  shared_ptr<long> priority{};
  shared_ptr<string> RWAccessType{};

  CreateAccessRuleRequest() {}

  explicit CreateAccessRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (networkSegment) {
      res["NetworkSegment"] = boost::any(*networkSegment);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (RWAccessType) {
      res["RWAccessType"] = boost::any(*RWAccessType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("NetworkSegment") != m.end() && !m["NetworkSegment"].empty()) {
      networkSegment = make_shared<string>(boost::any_cast<string>(m["NetworkSegment"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RWAccessType") != m.end() && !m["RWAccessType"].empty()) {
      RWAccessType = make_shared<string>(boost::any_cast<string>(m["RWAccessType"]));
    }
  }


  virtual ~CreateAccessRuleRequest() = default;
};
class CreateAccessRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessRuleId{};
  shared_ptr<string> requestId{};

  CreateAccessRuleResponseBody() {}

  explicit CreateAccessRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessRuleId) {
      res["AccessRuleId"] = boost::any(*accessRuleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessRuleId") != m.end() && !m["AccessRuleId"].empty()) {
      accessRuleId = make_shared<string>(boost::any_cast<string>(m["AccessRuleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAccessRuleResponseBody() = default;
};
class CreateAccessRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccessRuleResponseBody> body{};

  CreateAccessRuleResponse() {}

  explicit CreateAccessRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccessRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccessRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccessRuleResponse() = default;
};
class CreateFileSystemRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataRedundancyType{};
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemName{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<long> partitionNumber{};
  shared_ptr<string> protocolType{};
  shared_ptr<long> provisionedThroughputInMiBps{};
  shared_ptr<long> spaceCapacity{};
  shared_ptr<string> storageSetName{};
  shared_ptr<string> storageType{};
  shared_ptr<string> throughputMode{};
  shared_ptr<string> zoneId{};

  CreateFileSystemRequest() {}

  explicit CreateFileSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataRedundancyType) {
      res["DataRedundancyType"] = boost::any(*dataRedundancyType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemName) {
      res["FileSystemName"] = boost::any(*fileSystemName);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (partitionNumber) {
      res["PartitionNumber"] = boost::any(*partitionNumber);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (provisionedThroughputInMiBps) {
      res["ProvisionedThroughputInMiBps"] = boost::any(*provisionedThroughputInMiBps);
    }
    if (spaceCapacity) {
      res["SpaceCapacity"] = boost::any(*spaceCapacity);
    }
    if (storageSetName) {
      res["StorageSetName"] = boost::any(*storageSetName);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (throughputMode) {
      res["ThroughputMode"] = boost::any(*throughputMode);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataRedundancyType") != m.end() && !m["DataRedundancyType"].empty()) {
      dataRedundancyType = make_shared<string>(boost::any_cast<string>(m["DataRedundancyType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemName") != m.end() && !m["FileSystemName"].empty()) {
      fileSystemName = make_shared<string>(boost::any_cast<string>(m["FileSystemName"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("PartitionNumber") != m.end() && !m["PartitionNumber"].empty()) {
      partitionNumber = make_shared<long>(boost::any_cast<long>(m["PartitionNumber"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("ProvisionedThroughputInMiBps") != m.end() && !m["ProvisionedThroughputInMiBps"].empty()) {
      provisionedThroughputInMiBps = make_shared<long>(boost::any_cast<long>(m["ProvisionedThroughputInMiBps"]));
    }
    if (m.find("SpaceCapacity") != m.end() && !m["SpaceCapacity"].empty()) {
      spaceCapacity = make_shared<long>(boost::any_cast<long>(m["SpaceCapacity"]));
    }
    if (m.find("StorageSetName") != m.end() && !m["StorageSetName"].empty()) {
      storageSetName = make_shared<string>(boost::any_cast<string>(m["StorageSetName"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("ThroughputMode") != m.end() && !m["ThroughputMode"].empty()) {
      throughputMode = make_shared<string>(boost::any_cast<string>(m["ThroughputMode"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateFileSystemRequest() = default;
};
class CreateFileSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> requestId{};

  CreateFileSystemResponseBody() {}

  explicit CreateFileSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFileSystemResponseBody() = default;
};
class CreateFileSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFileSystemResponseBody> body{};

  CreateFileSystemResponse() {}

  explicit CreateFileSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFileSystemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFileSystemResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFileSystemResponse() = default;
};
class CreateMountPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> networkType{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  CreateMountPointRequest() {}

  explicit CreateMountPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
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
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateMountPointRequest() = default;
};
class CreateMountPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> mountPointId{};
  shared_ptr<string> requestId{};

  CreateMountPointResponseBody() {}

  explicit CreateMountPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountPointId) {
      res["MountPointId"] = boost::any(*mountPointId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountPointId") != m.end() && !m["MountPointId"].empty()) {
      mountPointId = make_shared<string>(boost::any_cast<string>(m["MountPointId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateMountPointResponseBody() = default;
};
class CreateMountPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMountPointResponseBody> body{};

  CreateMountPointResponse() {}

  explicit CreateMountPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMountPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMountPointResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMountPointResponse() = default;
};
class CreateUserGroupsMappingRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<vector<string>> groupNames{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> userName{};

  CreateUserGroupsMappingRequest() {}

  explicit CreateUserGroupsMappingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (groupNames) {
      res["GroupNames"] = boost::any(*groupNames);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("GroupNames") != m.end() && !m["GroupNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GroupNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groupNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateUserGroupsMappingRequest() = default;
};
class CreateUserGroupsMappingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> groupNamesShrink{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> userName{};

  CreateUserGroupsMappingShrinkRequest() {}

  explicit CreateUserGroupsMappingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (groupNamesShrink) {
      res["GroupNames"] = boost::any(*groupNamesShrink);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("GroupNames") != m.end() && !m["GroupNames"].empty()) {
      groupNamesShrink = make_shared<string>(boost::any_cast<string>(m["GroupNames"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateUserGroupsMappingShrinkRequest() = default;
};
class CreateUserGroupsMappingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateUserGroupsMappingResponseBody() {}

  explicit CreateUserGroupsMappingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateUserGroupsMappingResponseBody() = default;
};
class CreateUserGroupsMappingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUserGroupsMappingResponseBody> body{};

  CreateUserGroupsMappingResponse() {}

  explicit CreateUserGroupsMappingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUserGroupsMappingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserGroupsMappingResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserGroupsMappingResponse() = default;
};
class CreateVscMountPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<map<string, boost::any>> instanceIds{};

  CreateVscMountPointRequest() {}

  explicit CreateVscMountPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InstanceIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      instanceIds = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateVscMountPointRequest() = default;
};
class CreateVscMountPointShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> instanceIdsShrink{};

  CreateVscMountPointShrinkRequest() {}

  explicit CreateVscMountPointShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (instanceIdsShrink) {
      res["InstanceIds"] = boost::any(*instanceIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIdsShrink = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
  }


  virtual ~CreateVscMountPointShrinkRequest() = default;
};
class CreateVscMountPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> mountPointId{};
  shared_ptr<string> requestId{};

  CreateVscMountPointResponseBody() {}

  explicit CreateVscMountPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountPointId) {
      res["MountPointId"] = boost::any(*mountPointId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountPointId") != m.end() && !m["MountPointId"].empty()) {
      mountPointId = make_shared<string>(boost::any_cast<string>(m["MountPointId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateVscMountPointResponseBody() = default;
};
class CreateVscMountPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVscMountPointResponseBody> body{};

  CreateVscMountPointResponse() {}

  explicit CreateVscMountPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVscMountPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVscMountPointResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVscMountPointResponse() = default;
};
class DeleteAccessGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> inputRegionId{};

  DeleteAccessGroupRequest() {}

  explicit DeleteAccessGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
  }


  virtual ~DeleteAccessGroupRequest() = default;
};
class DeleteAccessGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAccessGroupResponseBody() {}

  explicit DeleteAccessGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAccessGroupResponseBody() = default;
};
class DeleteAccessGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAccessGroupResponseBody> body{};

  DeleteAccessGroupResponse() {}

  explicit DeleteAccessGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccessGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccessGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccessGroupResponse() = default;
};
class DeleteAccessRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> accessRuleId{};
  shared_ptr<string> inputRegionId{};

  DeleteAccessRuleRequest() {}

  explicit DeleteAccessRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (accessRuleId) {
      res["AccessRuleId"] = boost::any(*accessRuleId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("AccessRuleId") != m.end() && !m["AccessRuleId"].empty()) {
      accessRuleId = make_shared<string>(boost::any_cast<string>(m["AccessRuleId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
  }


  virtual ~DeleteAccessRuleRequest() = default;
};
class DeleteAccessRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAccessRuleResponseBody() {}

  explicit DeleteAccessRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAccessRuleResponseBody() = default;
};
class DeleteAccessRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAccessRuleResponseBody> body{};

  DeleteAccessRuleResponse() {}

  explicit DeleteAccessRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccessRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccessRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccessRuleResponse() = default;
};
class DeleteFileSystemRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};

  DeleteFileSystemRequest() {}

  explicit DeleteFileSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
  }


  virtual ~DeleteFileSystemRequest() = default;
};
class DeleteFileSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFileSystemResponseBody() {}

  explicit DeleteFileSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFileSystemResponseBody() = default;
};
class DeleteFileSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFileSystemResponseBody> body{};

  DeleteFileSystemResponse() {}

  explicit DeleteFileSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFileSystemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFileSystemResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFileSystemResponse() = default;
};
class DeleteMountPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> mountPointId{};

  DeleteMountPointRequest() {}

  explicit DeleteMountPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (mountPointId) {
      res["MountPointId"] = boost::any(*mountPointId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("MountPointId") != m.end() && !m["MountPointId"].empty()) {
      mountPointId = make_shared<string>(boost::any_cast<string>(m["MountPointId"]));
    }
  }


  virtual ~DeleteMountPointRequest() = default;
};
class DeleteMountPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteMountPointResponseBody() {}

  explicit DeleteMountPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteMountPointResponseBody() = default;
};
class DeleteMountPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMountPointResponseBody> body{};

  DeleteMountPointResponse() {}

  explicit DeleteMountPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMountPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMountPointResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMountPointResponse() = default;
};
class DeleteUserGroupsMappingRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<map<string, boost::any>> groupNames{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> userName{};

  DeleteUserGroupsMappingRequest() {}

  explicit DeleteUserGroupsMappingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (groupNames) {
      res["GroupNames"] = boost::any(*groupNames);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("GroupNames") != m.end() && !m["GroupNames"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["GroupNames"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      groupNames = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DeleteUserGroupsMappingRequest() = default;
};
class DeleteUserGroupsMappingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> groupNamesShrink{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> userName{};

  DeleteUserGroupsMappingShrinkRequest() {}

  explicit DeleteUserGroupsMappingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (groupNamesShrink) {
      res["GroupNames"] = boost::any(*groupNamesShrink);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("GroupNames") != m.end() && !m["GroupNames"].empty()) {
      groupNamesShrink = make_shared<string>(boost::any_cast<string>(m["GroupNames"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DeleteUserGroupsMappingShrinkRequest() = default;
};
class DeleteUserGroupsMappingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserGroupsMappingResponseBody() {}

  explicit DeleteUserGroupsMappingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserGroupsMappingResponseBody() = default;
};
class DeleteUserGroupsMappingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserGroupsMappingResponseBody> body{};

  DeleteUserGroupsMappingResponse() {}

  explicit DeleteUserGroupsMappingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserGroupsMappingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserGroupsMappingResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserGroupsMappingResponse() = default;
};
class DeleteVscMountPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> mountPointId{};

  DeleteVscMountPointRequest() {}

  explicit DeleteVscMountPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (mountPointId) {
      res["MountPointId"] = boost::any(*mountPointId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("MountPointId") != m.end() && !m["MountPointId"].empty()) {
      mountPointId = make_shared<string>(boost::any_cast<string>(m["MountPointId"]));
    }
  }


  virtual ~DeleteVscMountPointRequest() = default;
};
class DeleteVscMountPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVscMountPointResponseBody() {}

  explicit DeleteVscMountPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVscMountPointResponseBody() = default;
};
class DeleteVscMountPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVscMountPointResponseBody> body{};

  DeleteVscMountPointResponse() {}

  explicit DeleteVscMountPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVscMountPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVscMountPointResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVscMountPointResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> inputRegionId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegion() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegion>> region{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      vector<boost::any> temp1;
      for(auto item1:*region){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Region"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<DescribeRegionsResponseBodyRegionsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeVscMountPointsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> mountPointId{};
  shared_ptr<string> status{};
  shared_ptr<string> vscId{};

  DescribeVscMountPointsRequest() {}

  explicit DescribeVscMountPointsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mountPointId) {
      res["MountPointId"] = boost::any(*mountPointId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vscId) {
      res["VscId"] = boost::any(*vscId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MountPointId") != m.end() && !m["MountPointId"].empty()) {
      mountPointId = make_shared<string>(boost::any_cast<string>(m["MountPointId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VscId") != m.end() && !m["VscId"].empty()) {
      vscId = make_shared<string>(boost::any_cast<string>(m["VscId"]));
    }
  }


  virtual ~DescribeVscMountPointsRequest() = default;
};
class DescribeVscMountPointsResponseBodyMountPointsInstancesVscs : public Darabonba::Model {
public:
  shared_ptr<string> vscId{};
  shared_ptr<string> vscStatus{};
  shared_ptr<string> vscType{};

  DescribeVscMountPointsResponseBodyMountPointsInstancesVscs() {}

  explicit DescribeVscMountPointsResponseBodyMountPointsInstancesVscs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vscId) {
      res["VscId"] = boost::any(*vscId);
    }
    if (vscStatus) {
      res["VscStatus"] = boost::any(*vscStatus);
    }
    if (vscType) {
      res["VscType"] = boost::any(*vscType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VscId") != m.end() && !m["VscId"].empty()) {
      vscId = make_shared<string>(boost::any_cast<string>(m["VscId"]));
    }
    if (m.find("VscStatus") != m.end() && !m["VscStatus"].empty()) {
      vscStatus = make_shared<string>(boost::any_cast<string>(m["VscStatus"]));
    }
    if (m.find("VscType") != m.end() && !m["VscType"].empty()) {
      vscType = make_shared<string>(boost::any_cast<string>(m["VscType"]));
    }
  }


  virtual ~DescribeVscMountPointsResponseBodyMountPointsInstancesVscs() = default;
};
class DescribeVscMountPointsResponseBodyMountPointsInstances : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeVscMountPointsResponseBodyMountPointsInstancesVscs>> vscs{};

  DescribeVscMountPointsResponseBodyMountPointsInstances() {}

  explicit DescribeVscMountPointsResponseBodyMountPointsInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vscs) {
      vector<boost::any> temp1;
      for(auto item1:*vscs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vscs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Vscs") != m.end() && !m["Vscs"].empty()) {
      if (typeid(vector<boost::any>) == m["Vscs"].type()) {
        vector<DescribeVscMountPointsResponseBodyMountPointsInstancesVscs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vscs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVscMountPointsResponseBodyMountPointsInstancesVscs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vscs = make_shared<vector<DescribeVscMountPointsResponseBodyMountPointsInstancesVscs>>(expect1);
      }
    }
  }


  virtual ~DescribeVscMountPointsResponseBodyMountPointsInstances() = default;
};
class DescribeVscMountPointsResponseBodyMountPoints : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> instanceTotalCount{};
  shared_ptr<vector<DescribeVscMountPointsResponseBodyMountPointsInstances>> instances{};
  shared_ptr<string> mountPointAlias{};
  shared_ptr<string> mountPointId{};

  DescribeVscMountPointsResponseBodyMountPoints() {}

  explicit DescribeVscMountPointsResponseBodyMountPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceTotalCount) {
      res["InstanceTotalCount"] = boost::any(*instanceTotalCount);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (mountPointAlias) {
      res["MountPointAlias"] = boost::any(*mountPointAlias);
    }
    if (mountPointId) {
      res["MountPointId"] = boost::any(*mountPointId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceTotalCount") != m.end() && !m["InstanceTotalCount"].empty()) {
      instanceTotalCount = make_shared<long>(boost::any_cast<long>(m["InstanceTotalCount"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<DescribeVscMountPointsResponseBodyMountPointsInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVscMountPointsResponseBodyMountPointsInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<DescribeVscMountPointsResponseBodyMountPointsInstances>>(expect1);
      }
    }
    if (m.find("MountPointAlias") != m.end() && !m["MountPointAlias"].empty()) {
      mountPointAlias = make_shared<string>(boost::any_cast<string>(m["MountPointAlias"]));
    }
    if (m.find("MountPointId") != m.end() && !m["MountPointId"].empty()) {
      mountPointId = make_shared<string>(boost::any_cast<string>(m["MountPointId"]));
    }
  }


  virtual ~DescribeVscMountPointsResponseBodyMountPoints() = default;
};
class DescribeVscMountPointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVscMountPointsResponseBodyMountPoints>> mountPoints{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeVscMountPointsResponseBody() {}

  explicit DescribeVscMountPointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountPoints) {
      vector<boost::any> temp1;
      for(auto item1:*mountPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MountPoints"] = boost::any(temp1);
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
    if (m.find("MountPoints") != m.end() && !m["MountPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["MountPoints"].type()) {
        vector<DescribeVscMountPointsResponseBodyMountPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MountPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVscMountPointsResponseBodyMountPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mountPoints = make_shared<vector<DescribeVscMountPointsResponseBodyMountPoints>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeVscMountPointsResponseBody() = default;
};
class DescribeVscMountPointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVscMountPointsResponseBody> body{};

  DescribeVscMountPointsResponse() {}

  explicit DescribeVscMountPointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVscMountPointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVscMountPointsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVscMountPointsResponse() = default;
};
class DetachVscMountPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<map<string, boost::any>> instanceIds{};
  shared_ptr<string> mountPointId{};
  shared_ptr<vector<string>> vscIds{};

  DetachVscMountPointRequest() {}

  explicit DetachVscMountPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (mountPointId) {
      res["MountPointId"] = boost::any(*mountPointId);
    }
    if (vscIds) {
      res["VscIds"] = boost::any(*vscIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InstanceIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      instanceIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("MountPointId") != m.end() && !m["MountPointId"].empty()) {
      mountPointId = make_shared<string>(boost::any_cast<string>(m["MountPointId"]));
    }
    if (m.find("VscIds") != m.end() && !m["VscIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VscIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VscIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vscIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DetachVscMountPointRequest() = default;
};
class DetachVscMountPointShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> instanceIdsShrink{};
  shared_ptr<string> mountPointId{};
  shared_ptr<string> vscIdsShrink{};

  DetachVscMountPointShrinkRequest() {}

  explicit DetachVscMountPointShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (instanceIdsShrink) {
      res["InstanceIds"] = boost::any(*instanceIdsShrink);
    }
    if (mountPointId) {
      res["MountPointId"] = boost::any(*mountPointId);
    }
    if (vscIdsShrink) {
      res["VscIds"] = boost::any(*vscIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIdsShrink = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("MountPointId") != m.end() && !m["MountPointId"].empty()) {
      mountPointId = make_shared<string>(boost::any_cast<string>(m["MountPointId"]));
    }
    if (m.find("VscIds") != m.end() && !m["VscIds"].empty()) {
      vscIdsShrink = make_shared<string>(boost::any_cast<string>(m["VscIds"]));
    }
  }


  virtual ~DetachVscMountPointShrinkRequest() = default;
};
class DetachVscMountPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachVscMountPointResponseBody() {}

  explicit DetachVscMountPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachVscMountPointResponseBody() = default;
};
class DetachVscMountPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachVscMountPointResponseBody> body{};

  DetachVscMountPointResponse() {}

  explicit DetachVscMountPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachVscMountPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachVscMountPointResponseBody>(model1);
      }
    }
  }


  virtual ~DetachVscMountPointResponse() = default;
};
class GetAccessGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> inputRegionId{};

  GetAccessGroupRequest() {}

  explicit GetAccessGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
  }


  virtual ~GetAccessGroupRequest() = default;
};
class GetAccessGroupResponseBodyAccessGroup : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> isDefault{};
  shared_ptr<long> mountPointCount{};
  shared_ptr<string> networkType{};
  shared_ptr<string> regionId{};
  shared_ptr<long> ruleCount{};

  GetAccessGroupResponseBodyAccessGroup() {}

  explicit GetAccessGroupResponseBodyAccessGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (mountPointCount) {
      res["MountPointCount"] = boost::any(*mountPointCount);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ruleCount) {
      res["RuleCount"] = boost::any(*ruleCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("MountPointCount") != m.end() && !m["MountPointCount"].empty()) {
      mountPointCount = make_shared<long>(boost::any_cast<long>(m["MountPointCount"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RuleCount") != m.end() && !m["RuleCount"].empty()) {
      ruleCount = make_shared<long>(boost::any_cast<long>(m["RuleCount"]));
    }
  }


  virtual ~GetAccessGroupResponseBodyAccessGroup() = default;
};
class GetAccessGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAccessGroupResponseBodyAccessGroup> accessGroup{};
  shared_ptr<string> requestId{};

  GetAccessGroupResponseBody() {}

  explicit GetAccessGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroup) {
      res["AccessGroup"] = accessGroup ? boost::any(accessGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroup") != m.end() && !m["AccessGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessGroup"].type()) {
        GetAccessGroupResponseBodyAccessGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessGroup"]));
        accessGroup = make_shared<GetAccessGroupResponseBodyAccessGroup>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccessGroupResponseBody() = default;
};
class GetAccessGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccessGroupResponseBody> body{};

  GetAccessGroupResponse() {}

  explicit GetAccessGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccessGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccessGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccessGroupResponse() = default;
};
class GetAccessRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> accessRuleId{};
  shared_ptr<string> inputRegionId{};

  GetAccessRuleRequest() {}

  explicit GetAccessRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (accessRuleId) {
      res["AccessRuleId"] = boost::any(*accessRuleId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("AccessRuleId") != m.end() && !m["AccessRuleId"].empty()) {
      accessRuleId = make_shared<string>(boost::any_cast<string>(m["AccessRuleId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
  }


  virtual ~GetAccessRuleRequest() = default;
};
class GetAccessRuleResponseBodyAccessRule : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> accessRuleId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> networkSegment{};
  shared_ptr<long> priority{};
  shared_ptr<string> RWAccessType{};
  shared_ptr<string> regionId{};

  GetAccessRuleResponseBodyAccessRule() {}

  explicit GetAccessRuleResponseBodyAccessRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (accessRuleId) {
      res["AccessRuleId"] = boost::any(*accessRuleId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (networkSegment) {
      res["NetworkSegment"] = boost::any(*networkSegment);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (RWAccessType) {
      res["RWAccessType"] = boost::any(*RWAccessType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("AccessRuleId") != m.end() && !m["AccessRuleId"].empty()) {
      accessRuleId = make_shared<string>(boost::any_cast<string>(m["AccessRuleId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NetworkSegment") != m.end() && !m["NetworkSegment"].empty()) {
      networkSegment = make_shared<string>(boost::any_cast<string>(m["NetworkSegment"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RWAccessType") != m.end() && !m["RWAccessType"].empty()) {
      RWAccessType = make_shared<string>(boost::any_cast<string>(m["RWAccessType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetAccessRuleResponseBodyAccessRule() = default;
};
class GetAccessRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAccessRuleResponseBodyAccessRule> accessRule{};
  shared_ptr<string> requestId{};

  GetAccessRuleResponseBody() {}

  explicit GetAccessRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessRule) {
      res["AccessRule"] = accessRule ? boost::any(accessRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessRule") != m.end() && !m["AccessRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessRule"].type()) {
        GetAccessRuleResponseBodyAccessRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessRule"]));
        accessRule = make_shared<GetAccessRuleResponseBodyAccessRule>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccessRuleResponseBody() = default;
};
class GetAccessRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccessRuleResponseBody> body{};

  GetAccessRuleResponse() {}

  explicit GetAccessRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccessRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccessRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccessRuleResponse() = default;
};
class GetFileSystemRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};

  GetFileSystemRequest() {}

  explicit GetFileSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
  }


  virtual ~GetFileSystemRequest() = default;
};
class GetFileSystemResponseBodyFileSystem : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemName{};
  shared_ptr<double> meteringSpaceSize{};
  shared_ptr<long> mountPointCount{};
  shared_ptr<long> numberOfDirectories{};
  shared_ptr<long> numberOfFiles{};
  shared_ptr<string> protocolType{};
  shared_ptr<long> provisionedThroughputInMiBps{};
  shared_ptr<string> regionId{};
  shared_ptr<long> spaceCapacity{};
  shared_ptr<string> storagePackageId{};
  shared_ptr<string> storageType{};
  shared_ptr<string> throughputMode{};
  shared_ptr<double> usedSpaceSize{};
  shared_ptr<string> version{};
  shared_ptr<string> zoneId{};

  GetFileSystemResponseBodyFileSystem() {}

  explicit GetFileSystemResponseBodyFileSystem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemName) {
      res["FileSystemName"] = boost::any(*fileSystemName);
    }
    if (meteringSpaceSize) {
      res["MeteringSpaceSize"] = boost::any(*meteringSpaceSize);
    }
    if (mountPointCount) {
      res["MountPointCount"] = boost::any(*mountPointCount);
    }
    if (numberOfDirectories) {
      res["NumberOfDirectories"] = boost::any(*numberOfDirectories);
    }
    if (numberOfFiles) {
      res["NumberOfFiles"] = boost::any(*numberOfFiles);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (provisionedThroughputInMiBps) {
      res["ProvisionedThroughputInMiBps"] = boost::any(*provisionedThroughputInMiBps);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (spaceCapacity) {
      res["SpaceCapacity"] = boost::any(*spaceCapacity);
    }
    if (storagePackageId) {
      res["StoragePackageId"] = boost::any(*storagePackageId);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (throughputMode) {
      res["ThroughputMode"] = boost::any(*throughputMode);
    }
    if (usedSpaceSize) {
      res["UsedSpaceSize"] = boost::any(*usedSpaceSize);
    }
    if (version) {
      res["Version"] = boost::any(*version);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemName") != m.end() && !m["FileSystemName"].empty()) {
      fileSystemName = make_shared<string>(boost::any_cast<string>(m["FileSystemName"]));
    }
    if (m.find("MeteringSpaceSize") != m.end() && !m["MeteringSpaceSize"].empty()) {
      meteringSpaceSize = make_shared<double>(boost::any_cast<double>(m["MeteringSpaceSize"]));
    }
    if (m.find("MountPointCount") != m.end() && !m["MountPointCount"].empty()) {
      mountPointCount = make_shared<long>(boost::any_cast<long>(m["MountPointCount"]));
    }
    if (m.find("NumberOfDirectories") != m.end() && !m["NumberOfDirectories"].empty()) {
      numberOfDirectories = make_shared<long>(boost::any_cast<long>(m["NumberOfDirectories"]));
    }
    if (m.find("NumberOfFiles") != m.end() && !m["NumberOfFiles"].empty()) {
      numberOfFiles = make_shared<long>(boost::any_cast<long>(m["NumberOfFiles"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("ProvisionedThroughputInMiBps") != m.end() && !m["ProvisionedThroughputInMiBps"].empty()) {
      provisionedThroughputInMiBps = make_shared<long>(boost::any_cast<long>(m["ProvisionedThroughputInMiBps"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SpaceCapacity") != m.end() && !m["SpaceCapacity"].empty()) {
      spaceCapacity = make_shared<long>(boost::any_cast<long>(m["SpaceCapacity"]));
    }
    if (m.find("StoragePackageId") != m.end() && !m["StoragePackageId"].empty()) {
      storagePackageId = make_shared<string>(boost::any_cast<string>(m["StoragePackageId"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("ThroughputMode") != m.end() && !m["ThroughputMode"].empty()) {
      throughputMode = make_shared<string>(boost::any_cast<string>(m["ThroughputMode"]));
    }
    if (m.find("UsedSpaceSize") != m.end() && !m["UsedSpaceSize"].empty()) {
      usedSpaceSize = make_shared<double>(boost::any_cast<double>(m["UsedSpaceSize"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetFileSystemResponseBodyFileSystem() = default;
};
class GetFileSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetFileSystemResponseBodyFileSystem> fileSystem{};
  shared_ptr<string> requestId{};

  GetFileSystemResponseBody() {}

  explicit GetFileSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystem) {
      res["FileSystem"] = fileSystem ? boost::any(fileSystem->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystem") != m.end() && !m["FileSystem"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileSystem"].type()) {
        GetFileSystemResponseBodyFileSystem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileSystem"]));
        fileSystem = make_shared<GetFileSystemResponseBodyFileSystem>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetFileSystemResponseBody() = default;
};
class GetFileSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFileSystemResponseBody> body{};

  GetFileSystemResponse() {}

  explicit GetFileSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFileSystemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFileSystemResponseBody>(model1);
      }
    }
  }


  virtual ~GetFileSystemResponse() = default;
};
class GetMountPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> mountPointId{};

  GetMountPointRequest() {}

  explicit GetMountPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (mountPointId) {
      res["MountPointId"] = boost::any(*mountPointId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("MountPointId") != m.end() && !m["MountPointId"].empty()) {
      mountPointId = make_shared<string>(boost::any_cast<string>(m["MountPointId"]));
    }
  }


  virtual ~GetMountPointRequest() = default;
};
class GetMountPointResponseBodyMountPoint : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> mountPointDomain{};
  shared_ptr<string> mountPointId{};
  shared_ptr<string> networkType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  GetMountPointResponseBodyMountPoint() {}

  explicit GetMountPointResponseBodyMountPoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (mountPointDomain) {
      res["MountPointDomain"] = boost::any(*mountPointDomain);
    }
    if (mountPointId) {
      res["MountPointId"] = boost::any(*mountPointId);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MountPointDomain") != m.end() && !m["MountPointDomain"].empty()) {
      mountPointDomain = make_shared<string>(boost::any_cast<string>(m["MountPointDomain"]));
    }
    if (m.find("MountPointId") != m.end() && !m["MountPointId"].empty()) {
      mountPointId = make_shared<string>(boost::any_cast<string>(m["MountPointId"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~GetMountPointResponseBodyMountPoint() = default;
};
class GetMountPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMountPointResponseBodyMountPoint> mountPoint{};
  shared_ptr<string> requestId{};

  GetMountPointResponseBody() {}

  explicit GetMountPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountPoint) {
      res["MountPoint"] = mountPoint ? boost::any(mountPoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountPoint") != m.end() && !m["MountPoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["MountPoint"].type()) {
        GetMountPointResponseBodyMountPoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MountPoint"]));
        mountPoint = make_shared<GetMountPointResponseBodyMountPoint>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMountPointResponseBody() = default;
};
class GetMountPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMountPointResponseBody> body{};

  GetMountPointResponse() {}

  explicit GetMountPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMountPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMountPointResponseBody>(model1);
      }
    }
  }


  virtual ~GetMountPointResponse() = default;
};
class GetRegionRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputRegionId{};

  GetRegionRequest() {}

  explicit GetRegionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
  }


  virtual ~GetRegionRequest() = default;
};
class GetRegionResponseBodyAvailableZonesOptions : public Darabonba::Model {
public:
  shared_ptr<string> protocolType{};
  shared_ptr<string> storageType{};

  GetRegionResponseBodyAvailableZonesOptions() {}

  explicit GetRegionResponseBodyAvailableZonesOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~GetRegionResponseBodyAvailableZonesOptions() = default;
};
class GetRegionResponseBodyAvailableZones : public Darabonba::Model {
public:
  shared_ptr<vector<GetRegionResponseBodyAvailableZonesOptions>> options{};
  shared_ptr<string> zoneId{};

  GetRegionResponseBodyAvailableZones() {}

  explicit GetRegionResponseBodyAvailableZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (options) {
      vector<boost::any> temp1;
      for(auto item1:*options){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Options"] = boost::any(temp1);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      if (typeid(vector<boost::any>) == m["Options"].type()) {
        vector<GetRegionResponseBodyAvailableZonesOptions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Options"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRegionResponseBodyAvailableZonesOptions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        options = make_shared<vector<GetRegionResponseBodyAvailableZonesOptions>>(expect1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetRegionResponseBodyAvailableZones() = default;
};
class GetRegionResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetRegionResponseBodyAvailableZones>> availableZones{};
  shared_ptr<string> requestId{};

  GetRegionResponseBody() {}

  explicit GetRegionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableZones) {
      vector<boost::any> temp1;
      for(auto item1:*availableZones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableZones"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableZones") != m.end() && !m["AvailableZones"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableZones"].type()) {
        vector<GetRegionResponseBodyAvailableZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableZones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRegionResponseBodyAvailableZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableZones = make_shared<vector<GetRegionResponseBodyAvailableZones>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRegionResponseBody() = default;
};
class GetRegionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRegionResponseBody> body{};

  GetRegionResponse() {}

  explicit GetRegionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRegionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRegionResponseBody>(model1);
      }
    }
  }


  virtual ~GetRegionResponse() = default;
};
class ListAccessGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputRegionId{};
  shared_ptr<long> limit{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> orderType{};
  shared_ptr<long> startOffset{};

  ListAccessGroupsRequest() {}

  explicit ListAccessGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (startOffset) {
      res["StartOffset"] = boost::any(*startOffset);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("StartOffset") != m.end() && !m["StartOffset"].empty()) {
      startOffset = make_shared<long>(boost::any_cast<long>(m["StartOffset"]));
    }
  }


  virtual ~ListAccessGroupsRequest() = default;
};
class ListAccessGroupsResponseBodyAccessGroups : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> isDefault{};
  shared_ptr<long> mountPointCount{};
  shared_ptr<string> networkType{};
  shared_ptr<string> regionId{};
  shared_ptr<long> ruleCount{};

  ListAccessGroupsResponseBodyAccessGroups() {}

  explicit ListAccessGroupsResponseBodyAccessGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (mountPointCount) {
      res["MountPointCount"] = boost::any(*mountPointCount);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ruleCount) {
      res["RuleCount"] = boost::any(*ruleCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("MountPointCount") != m.end() && !m["MountPointCount"].empty()) {
      mountPointCount = make_shared<long>(boost::any_cast<long>(m["MountPointCount"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RuleCount") != m.end() && !m["RuleCount"].empty()) {
      ruleCount = make_shared<long>(boost::any_cast<long>(m["RuleCount"]));
    }
  }


  virtual ~ListAccessGroupsResponseBodyAccessGroups() = default;
};
class ListAccessGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccessGroupsResponseBodyAccessGroups>> accessGroups{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAccessGroupsResponseBody() {}

  explicit ListAccessGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroups) {
      vector<boost::any> temp1;
      for(auto item1:*accessGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccessGroups"] = boost::any(temp1);
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
    if (m.find("AccessGroups") != m.end() && !m["AccessGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["AccessGroups"].type()) {
        vector<ListAccessGroupsResponseBodyAccessGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccessGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccessGroupsResponseBodyAccessGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accessGroups = make_shared<vector<ListAccessGroupsResponseBodyAccessGroups>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAccessGroupsResponseBody() = default;
};
class ListAccessGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccessGroupsResponseBody> body{};

  ListAccessGroupsResponse() {}

  explicit ListAccessGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccessGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccessGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccessGroupsResponse() = default;
};
class ListAccessRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<long> limit{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> orderType{};
  shared_ptr<long> startOffset{};

  ListAccessRulesRequest() {}

  explicit ListAccessRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (startOffset) {
      res["StartOffset"] = boost::any(*startOffset);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("StartOffset") != m.end() && !m["StartOffset"].empty()) {
      startOffset = make_shared<long>(boost::any_cast<long>(m["StartOffset"]));
    }
  }


  virtual ~ListAccessRulesRequest() = default;
};
class ListAccessRulesResponseBodyAccessRules : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> accessRuleId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> networkSegment{};
  shared_ptr<long> priority{};
  shared_ptr<string> RWAccessType{};
  shared_ptr<string> regionId{};

  ListAccessRulesResponseBodyAccessRules() {}

  explicit ListAccessRulesResponseBodyAccessRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (accessRuleId) {
      res["AccessRuleId"] = boost::any(*accessRuleId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (networkSegment) {
      res["NetworkSegment"] = boost::any(*networkSegment);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (RWAccessType) {
      res["RWAccessType"] = boost::any(*RWAccessType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("AccessRuleId") != m.end() && !m["AccessRuleId"].empty()) {
      accessRuleId = make_shared<string>(boost::any_cast<string>(m["AccessRuleId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NetworkSegment") != m.end() && !m["NetworkSegment"].empty()) {
      networkSegment = make_shared<string>(boost::any_cast<string>(m["NetworkSegment"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RWAccessType") != m.end() && !m["RWAccessType"].empty()) {
      RWAccessType = make_shared<string>(boost::any_cast<string>(m["RWAccessType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListAccessRulesResponseBodyAccessRules() = default;
};
class ListAccessRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccessRulesResponseBodyAccessRules>> accessRules{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAccessRulesResponseBody() {}

  explicit ListAccessRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessRules) {
      vector<boost::any> temp1;
      for(auto item1:*accessRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccessRules"] = boost::any(temp1);
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
    if (m.find("AccessRules") != m.end() && !m["AccessRules"].empty()) {
      if (typeid(vector<boost::any>) == m["AccessRules"].type()) {
        vector<ListAccessRulesResponseBodyAccessRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccessRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccessRulesResponseBodyAccessRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accessRules = make_shared<vector<ListAccessRulesResponseBodyAccessRules>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAccessRulesResponseBody() = default;
};
class ListAccessRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccessRulesResponseBody> body{};

  ListAccessRulesResponse() {}

  explicit ListAccessRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccessRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccessRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccessRulesResponse() = default;
};
class ListFileSystemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputRegionId{};
  shared_ptr<long> limit{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> orderType{};
  shared_ptr<long> startOffset{};

  ListFileSystemsRequest() {}

  explicit ListFileSystemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (startOffset) {
      res["StartOffset"] = boost::any(*startOffset);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("StartOffset") != m.end() && !m["StartOffset"].empty()) {
      startOffset = make_shared<long>(boost::any_cast<long>(m["StartOffset"]));
    }
  }


  virtual ~ListFileSystemsRequest() = default;
};
class ListFileSystemsResponseBodyFileSystems : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemName{};
  shared_ptr<double> meteringSpaceSize{};
  shared_ptr<long> mountPointCount{};
  shared_ptr<long> numberOfDirectories{};
  shared_ptr<long> numberOfFiles{};
  shared_ptr<string> protocolType{};
  shared_ptr<long> provisionedThroughputInMiBps{};
  shared_ptr<string> regionId{};
  shared_ptr<long> spaceCapacity{};
  shared_ptr<string> storagePackageId{};
  shared_ptr<string> storageType{};
  shared_ptr<string> throughputMode{};
  shared_ptr<double> usedSpaceSize{};
  shared_ptr<string> version{};
  shared_ptr<string> zoneId{};

  ListFileSystemsResponseBodyFileSystems() {}

  explicit ListFileSystemsResponseBodyFileSystems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemName) {
      res["FileSystemName"] = boost::any(*fileSystemName);
    }
    if (meteringSpaceSize) {
      res["MeteringSpaceSize"] = boost::any(*meteringSpaceSize);
    }
    if (mountPointCount) {
      res["MountPointCount"] = boost::any(*mountPointCount);
    }
    if (numberOfDirectories) {
      res["NumberOfDirectories"] = boost::any(*numberOfDirectories);
    }
    if (numberOfFiles) {
      res["NumberOfFiles"] = boost::any(*numberOfFiles);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (provisionedThroughputInMiBps) {
      res["ProvisionedThroughputInMiBps"] = boost::any(*provisionedThroughputInMiBps);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (spaceCapacity) {
      res["SpaceCapacity"] = boost::any(*spaceCapacity);
    }
    if (storagePackageId) {
      res["StoragePackageId"] = boost::any(*storagePackageId);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (throughputMode) {
      res["ThroughputMode"] = boost::any(*throughputMode);
    }
    if (usedSpaceSize) {
      res["UsedSpaceSize"] = boost::any(*usedSpaceSize);
    }
    if (version) {
      res["Version"] = boost::any(*version);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemName") != m.end() && !m["FileSystemName"].empty()) {
      fileSystemName = make_shared<string>(boost::any_cast<string>(m["FileSystemName"]));
    }
    if (m.find("MeteringSpaceSize") != m.end() && !m["MeteringSpaceSize"].empty()) {
      meteringSpaceSize = make_shared<double>(boost::any_cast<double>(m["MeteringSpaceSize"]));
    }
    if (m.find("MountPointCount") != m.end() && !m["MountPointCount"].empty()) {
      mountPointCount = make_shared<long>(boost::any_cast<long>(m["MountPointCount"]));
    }
    if (m.find("NumberOfDirectories") != m.end() && !m["NumberOfDirectories"].empty()) {
      numberOfDirectories = make_shared<long>(boost::any_cast<long>(m["NumberOfDirectories"]));
    }
    if (m.find("NumberOfFiles") != m.end() && !m["NumberOfFiles"].empty()) {
      numberOfFiles = make_shared<long>(boost::any_cast<long>(m["NumberOfFiles"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("ProvisionedThroughputInMiBps") != m.end() && !m["ProvisionedThroughputInMiBps"].empty()) {
      provisionedThroughputInMiBps = make_shared<long>(boost::any_cast<long>(m["ProvisionedThroughputInMiBps"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SpaceCapacity") != m.end() && !m["SpaceCapacity"].empty()) {
      spaceCapacity = make_shared<long>(boost::any_cast<long>(m["SpaceCapacity"]));
    }
    if (m.find("StoragePackageId") != m.end() && !m["StoragePackageId"].empty()) {
      storagePackageId = make_shared<string>(boost::any_cast<string>(m["StoragePackageId"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("ThroughputMode") != m.end() && !m["ThroughputMode"].empty()) {
      throughputMode = make_shared<string>(boost::any_cast<string>(m["ThroughputMode"]));
    }
    if (m.find("UsedSpaceSize") != m.end() && !m["UsedSpaceSize"].empty()) {
      usedSpaceSize = make_shared<double>(boost::any_cast<double>(m["UsedSpaceSize"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListFileSystemsResponseBodyFileSystems() = default;
};
class ListFileSystemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFileSystemsResponseBodyFileSystems>> fileSystems{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListFileSystemsResponseBody() {}

  explicit ListFileSystemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystems) {
      vector<boost::any> temp1;
      for(auto item1:*fileSystems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileSystems"] = boost::any(temp1);
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
    if (m.find("FileSystems") != m.end() && !m["FileSystems"].empty()) {
      if (typeid(vector<boost::any>) == m["FileSystems"].type()) {
        vector<ListFileSystemsResponseBodyFileSystems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileSystems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFileSystemsResponseBodyFileSystems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileSystems = make_shared<vector<ListFileSystemsResponseBodyFileSystems>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListFileSystemsResponseBody() = default;
};
class ListFileSystemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFileSystemsResponseBody> body{};

  ListFileSystemsResponse() {}

  explicit ListFileSystemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFileSystemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFileSystemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFileSystemsResponse() = default;
};
class ListMountPointsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<long> limit{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> orderType{};
  shared_ptr<long> startOffset{};

  ListMountPointsRequest() {}

  explicit ListMountPointsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (startOffset) {
      res["StartOffset"] = boost::any(*startOffset);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("StartOffset") != m.end() && !m["StartOffset"].empty()) {
      startOffset = make_shared<long>(boost::any_cast<long>(m["StartOffset"]));
    }
  }


  virtual ~ListMountPointsRequest() = default;
};
class ListMountPointsResponseBodyMountPoints : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> mountPointDomain{};
  shared_ptr<string> mountPointId{};
  shared_ptr<string> networkType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  ListMountPointsResponseBodyMountPoints() {}

  explicit ListMountPointsResponseBodyMountPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (mountPointDomain) {
      res["MountPointDomain"] = boost::any(*mountPointDomain);
    }
    if (mountPointId) {
      res["MountPointId"] = boost::any(*mountPointId);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MountPointDomain") != m.end() && !m["MountPointDomain"].empty()) {
      mountPointDomain = make_shared<string>(boost::any_cast<string>(m["MountPointDomain"]));
    }
    if (m.find("MountPointId") != m.end() && !m["MountPointId"].empty()) {
      mountPointId = make_shared<string>(boost::any_cast<string>(m["MountPointId"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListMountPointsResponseBodyMountPoints() = default;
};
class ListMountPointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListMountPointsResponseBodyMountPoints>> mountPoints{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListMountPointsResponseBody() {}

  explicit ListMountPointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountPoints) {
      vector<boost::any> temp1;
      for(auto item1:*mountPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MountPoints"] = boost::any(temp1);
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
    if (m.find("MountPoints") != m.end() && !m["MountPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["MountPoints"].type()) {
        vector<ListMountPointsResponseBodyMountPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MountPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMountPointsResponseBodyMountPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mountPoints = make_shared<vector<ListMountPointsResponseBodyMountPoints>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListMountPointsResponseBody() = default;
};
class ListMountPointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMountPointsResponseBody> body{};

  ListMountPointsResponse() {}

  explicit ListMountPointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMountPointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMountPointsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMountPointsResponse() = default;
};
class ListUserGroupsMappingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> filesystemId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};

  ListUserGroupsMappingsRequest() {}

  explicit ListUserGroupsMappingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filesystemId) {
      res["FilesystemId"] = boost::any(*filesystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilesystemId") != m.end() && !m["FilesystemId"].empty()) {
      filesystemId = make_shared<string>(boost::any_cast<string>(m["FilesystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListUserGroupsMappingsRequest() = default;
};
class ListUserGroupsMappingsResponseBodyUserGroupsMappings : public Darabonba::Model {
public:
  shared_ptr<vector<string>> groupNames{};
  shared_ptr<string> userName{};

  ListUserGroupsMappingsResponseBodyUserGroupsMappings() {}

  explicit ListUserGroupsMappingsResponseBodyUserGroupsMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupNames) {
      res["GroupNames"] = boost::any(*groupNames);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupNames") != m.end() && !m["GroupNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GroupNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groupNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ListUserGroupsMappingsResponseBodyUserGroupsMappings() = default;
};
class ListUserGroupsMappingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> hasMore{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListUserGroupsMappingsResponseBodyUserGroupsMappings>> userGroupsMappings{};

  ListUserGroupsMappingsResponseBody() {}

  explicit ListUserGroupsMappingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userGroupsMappings) {
      vector<boost::any> temp1;
      for(auto item1:*userGroupsMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserGroupsMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserGroupsMappings") != m.end() && !m["UserGroupsMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["UserGroupsMappings"].type()) {
        vector<ListUserGroupsMappingsResponseBodyUserGroupsMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserGroupsMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserGroupsMappingsResponseBodyUserGroupsMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userGroupsMappings = make_shared<vector<ListUserGroupsMappingsResponseBodyUserGroupsMappings>>(expect1);
      }
    }
  }


  virtual ~ListUserGroupsMappingsResponseBody() = default;
};
class ListUserGroupsMappingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserGroupsMappingsResponseBody> body{};

  ListUserGroupsMappingsResponse() {}

  explicit ListUserGroupsMappingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserGroupsMappingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserGroupsMappingsResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserGroupsMappingsResponse() = default;
};
class ModifyAccessGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> description{};
  shared_ptr<string> inputRegionId{};

  ModifyAccessGroupRequest() {}

  explicit ModifyAccessGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
  }


  virtual ~ModifyAccessGroupRequest() = default;
};
class ModifyAccessGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAccessGroupResponseBody() {}

  explicit ModifyAccessGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAccessGroupResponseBody() = default;
};
class ModifyAccessGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAccessGroupResponseBody> body{};

  ModifyAccessGroupResponse() {}

  explicit ModifyAccessGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAccessGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAccessGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAccessGroupResponse() = default;
};
class ModifyAccessRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> accessRuleId{};
  shared_ptr<string> description{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<long> priority{};
  shared_ptr<string> RWAccessType{};

  ModifyAccessRuleRequest() {}

  explicit ModifyAccessRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (accessRuleId) {
      res["AccessRuleId"] = boost::any(*accessRuleId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (RWAccessType) {
      res["RWAccessType"] = boost::any(*RWAccessType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("AccessRuleId") != m.end() && !m["AccessRuleId"].empty()) {
      accessRuleId = make_shared<string>(boost::any_cast<string>(m["AccessRuleId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RWAccessType") != m.end() && !m["RWAccessType"].empty()) {
      RWAccessType = make_shared<string>(boost::any_cast<string>(m["RWAccessType"]));
    }
  }


  virtual ~ModifyAccessRuleRequest() = default;
};
class ModifyAccessRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAccessRuleResponseBody() {}

  explicit ModifyAccessRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAccessRuleResponseBody() = default;
};
class ModifyAccessRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAccessRuleResponseBody> body{};

  ModifyAccessRuleResponse() {}

  explicit ModifyAccessRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAccessRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAccessRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAccessRuleResponse() = default;
};
class ModifyFileSystemRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemName{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<long> provisionedThroughputInMiBps{};
  shared_ptr<long> spaceCapacity{};
  shared_ptr<string> throughputMode{};

  ModifyFileSystemRequest() {}

  explicit ModifyFileSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemName) {
      res["FileSystemName"] = boost::any(*fileSystemName);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (provisionedThroughputInMiBps) {
      res["ProvisionedThroughputInMiBps"] = boost::any(*provisionedThroughputInMiBps);
    }
    if (spaceCapacity) {
      res["SpaceCapacity"] = boost::any(*spaceCapacity);
    }
    if (throughputMode) {
      res["ThroughputMode"] = boost::any(*throughputMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemName") != m.end() && !m["FileSystemName"].empty()) {
      fileSystemName = make_shared<string>(boost::any_cast<string>(m["FileSystemName"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("ProvisionedThroughputInMiBps") != m.end() && !m["ProvisionedThroughputInMiBps"].empty()) {
      provisionedThroughputInMiBps = make_shared<long>(boost::any_cast<long>(m["ProvisionedThroughputInMiBps"]));
    }
    if (m.find("SpaceCapacity") != m.end() && !m["SpaceCapacity"].empty()) {
      spaceCapacity = make_shared<long>(boost::any_cast<long>(m["SpaceCapacity"]));
    }
    if (m.find("ThroughputMode") != m.end() && !m["ThroughputMode"].empty()) {
      throughputMode = make_shared<string>(boost::any_cast<string>(m["ThroughputMode"]));
    }
  }


  virtual ~ModifyFileSystemRequest() = default;
};
class ModifyFileSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyFileSystemResponseBody() {}

  explicit ModifyFileSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyFileSystemResponseBody() = default;
};
class ModifyFileSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyFileSystemResponseBody> body{};

  ModifyFileSystemResponse() {}

  explicit ModifyFileSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyFileSystemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyFileSystemResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyFileSystemResponse() = default;
};
class ModifyMountPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupId{};
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> inputRegionId{};
  shared_ptr<string> mountPointId{};
  shared_ptr<string> status{};

  ModifyMountPointRequest() {}

  explicit ModifyMountPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupId) {
      res["AccessGroupId"] = boost::any(*accessGroupId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (inputRegionId) {
      res["InputRegionId"] = boost::any(*inputRegionId);
    }
    if (mountPointId) {
      res["MountPointId"] = boost::any(*mountPointId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupId") != m.end() && !m["AccessGroupId"].empty()) {
      accessGroupId = make_shared<string>(boost::any_cast<string>(m["AccessGroupId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InputRegionId") != m.end() && !m["InputRegionId"].empty()) {
      inputRegionId = make_shared<string>(boost::any_cast<string>(m["InputRegionId"]));
    }
    if (m.find("MountPointId") != m.end() && !m["MountPointId"].empty()) {
      mountPointId = make_shared<string>(boost::any_cast<string>(m["MountPointId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ModifyMountPointRequest() = default;
};
class ModifyMountPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyMountPointResponseBody() {}

  explicit ModifyMountPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyMountPointResponseBody() = default;
};
class ModifyMountPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyMountPointResponseBody> body{};

  ModifyMountPointResponse() {}

  explicit ModifyMountPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyMountPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyMountPointResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyMountPointResponse() = default;
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
  AttachVscMountPointResponse attachVscMountPointWithOptions(shared_ptr<AttachVscMountPointRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachVscMountPointResponse attachVscMountPoint(shared_ptr<AttachVscMountPointRequest> request);
  BindVscMountPointAliasResponse bindVscMountPointAliasWithOptions(shared_ptr<BindVscMountPointAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindVscMountPointAliasResponse bindVscMountPointAlias(shared_ptr<BindVscMountPointAliasRequest> request);
  CreateAccessGroupResponse createAccessGroupWithOptions(shared_ptr<CreateAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessGroupResponse createAccessGroup(shared_ptr<CreateAccessGroupRequest> request);
  CreateAccessRuleResponse createAccessRuleWithOptions(shared_ptr<CreateAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessRuleResponse createAccessRule(shared_ptr<CreateAccessRuleRequest> request);
  CreateFileSystemResponse createFileSystemWithOptions(shared_ptr<CreateFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFileSystemResponse createFileSystem(shared_ptr<CreateFileSystemRequest> request);
  CreateMountPointResponse createMountPointWithOptions(shared_ptr<CreateMountPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMountPointResponse createMountPoint(shared_ptr<CreateMountPointRequest> request);
  CreateUserGroupsMappingResponse createUserGroupsMappingWithOptions(shared_ptr<CreateUserGroupsMappingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserGroupsMappingResponse createUserGroupsMapping(shared_ptr<CreateUserGroupsMappingRequest> request);
  CreateVscMountPointResponse createVscMountPointWithOptions(shared_ptr<CreateVscMountPointRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVscMountPointResponse createVscMountPoint(shared_ptr<CreateVscMountPointRequest> request);
  DeleteAccessGroupResponse deleteAccessGroupWithOptions(shared_ptr<DeleteAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessGroupResponse deleteAccessGroup(shared_ptr<DeleteAccessGroupRequest> request);
  DeleteAccessRuleResponse deleteAccessRuleWithOptions(shared_ptr<DeleteAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessRuleResponse deleteAccessRule(shared_ptr<DeleteAccessRuleRequest> request);
  DeleteFileSystemResponse deleteFileSystemWithOptions(shared_ptr<DeleteFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFileSystemResponse deleteFileSystem(shared_ptr<DeleteFileSystemRequest> request);
  DeleteMountPointResponse deleteMountPointWithOptions(shared_ptr<DeleteMountPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMountPointResponse deleteMountPoint(shared_ptr<DeleteMountPointRequest> request);
  DeleteUserGroupsMappingResponse deleteUserGroupsMappingWithOptions(shared_ptr<DeleteUserGroupsMappingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserGroupsMappingResponse deleteUserGroupsMapping(shared_ptr<DeleteUserGroupsMappingRequest> request);
  DeleteVscMountPointResponse deleteVscMountPointWithOptions(shared_ptr<DeleteVscMountPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVscMountPointResponse deleteVscMountPoint(shared_ptr<DeleteVscMountPointRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeVscMountPointsResponse describeVscMountPointsWithOptions(shared_ptr<DescribeVscMountPointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVscMountPointsResponse describeVscMountPoints(shared_ptr<DescribeVscMountPointsRequest> request);
  DetachVscMountPointResponse detachVscMountPointWithOptions(shared_ptr<DetachVscMountPointRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachVscMountPointResponse detachVscMountPoint(shared_ptr<DetachVscMountPointRequest> request);
  GetAccessGroupResponse getAccessGroupWithOptions(shared_ptr<GetAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccessGroupResponse getAccessGroup(shared_ptr<GetAccessGroupRequest> request);
  GetAccessRuleResponse getAccessRuleWithOptions(shared_ptr<GetAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccessRuleResponse getAccessRule(shared_ptr<GetAccessRuleRequest> request);
  GetFileSystemResponse getFileSystemWithOptions(shared_ptr<GetFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFileSystemResponse getFileSystem(shared_ptr<GetFileSystemRequest> request);
  GetMountPointResponse getMountPointWithOptions(shared_ptr<GetMountPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMountPointResponse getMountPoint(shared_ptr<GetMountPointRequest> request);
  GetRegionResponse getRegionWithOptions(shared_ptr<GetRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRegionResponse getRegion(shared_ptr<GetRegionRequest> request);
  ListAccessGroupsResponse listAccessGroupsWithOptions(shared_ptr<ListAccessGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccessGroupsResponse listAccessGroups(shared_ptr<ListAccessGroupsRequest> request);
  ListAccessRulesResponse listAccessRulesWithOptions(shared_ptr<ListAccessRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccessRulesResponse listAccessRules(shared_ptr<ListAccessRulesRequest> request);
  ListFileSystemsResponse listFileSystemsWithOptions(shared_ptr<ListFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFileSystemsResponse listFileSystems(shared_ptr<ListFileSystemsRequest> request);
  ListMountPointsResponse listMountPointsWithOptions(shared_ptr<ListMountPointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMountPointsResponse listMountPoints(shared_ptr<ListMountPointsRequest> request);
  ListUserGroupsMappingsResponse listUserGroupsMappingsWithOptions(shared_ptr<ListUserGroupsMappingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserGroupsMappingsResponse listUserGroupsMappings(shared_ptr<ListUserGroupsMappingsRequest> request);
  ModifyAccessGroupResponse modifyAccessGroupWithOptions(shared_ptr<ModifyAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccessGroupResponse modifyAccessGroup(shared_ptr<ModifyAccessGroupRequest> request);
  ModifyAccessRuleResponse modifyAccessRuleWithOptions(shared_ptr<ModifyAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccessRuleResponse modifyAccessRule(shared_ptr<ModifyAccessRuleRequest> request);
  ModifyFileSystemResponse modifyFileSystemWithOptions(shared_ptr<ModifyFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyFileSystemResponse modifyFileSystem(shared_ptr<ModifyFileSystemRequest> request);
  ModifyMountPointResponse modifyMountPointWithOptions(shared_ptr<ModifyMountPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMountPointResponse modifyMountPoint(shared_ptr<ModifyMountPointRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_DFS20180620

#endif
