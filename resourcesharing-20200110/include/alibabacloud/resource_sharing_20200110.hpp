// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_RESOURCESHARING20200110_H_
#define ALIBABACLOUD_RESOURCESHARING20200110_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ResourceSharing20200110 {
class AcceptResourceShareInvitationRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceShareInvitationId{};

  AcceptResourceShareInvitationRequest() {}

  explicit AcceptResourceShareInvitationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceShareInvitationId) {
      res["ResourceShareInvitationId"] = boost::any(*resourceShareInvitationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceShareInvitationId") != m.end() && !m["ResourceShareInvitationId"].empty()) {
      resourceShareInvitationId = make_shared<string>(boost::any_cast<string>(m["ResourceShareInvitationId"]));
    }
  }


  virtual ~AcceptResourceShareInvitationRequest() = default;
};
class AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails : public Darabonba::Model {
public:
  shared_ptr<string> associateType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};

  AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails() {}

  explicit AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associateType) {
      res["AssociateType"] = boost::any(*associateType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociateType") != m.end() && !m["AssociateType"].empty()) {
      associateType = make_shared<string>(boost::any_cast<string>(m["AssociateType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
  }


  virtual ~AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails() = default;
};
class AcceptResourceShareInvitationResponseBodyResourceShareInvitation : public Darabonba::Model {
public:
  shared_ptr<vector<AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails>> acceptInvitationFailedDetails{};
  shared_ptr<string> createTime{};
  shared_ptr<string> receiverAccountId{};
  shared_ptr<string> resourceShareId{};
  shared_ptr<string> resourceShareInvitationId{};
  shared_ptr<string> resourceShareName{};
  shared_ptr<string> senderAccountId{};
  shared_ptr<string> status{};

  AcceptResourceShareInvitationResponseBodyResourceShareInvitation() {}

  explicit AcceptResourceShareInvitationResponseBodyResourceShareInvitation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptInvitationFailedDetails) {
      vector<boost::any> temp1;
      for(auto item1:*acceptInvitationFailedDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AcceptInvitationFailedDetails"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (receiverAccountId) {
      res["ReceiverAccountId"] = boost::any(*receiverAccountId);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    if (resourceShareInvitationId) {
      res["ResourceShareInvitationId"] = boost::any(*resourceShareInvitationId);
    }
    if (resourceShareName) {
      res["ResourceShareName"] = boost::any(*resourceShareName);
    }
    if (senderAccountId) {
      res["SenderAccountId"] = boost::any(*senderAccountId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptInvitationFailedDetails") != m.end() && !m["AcceptInvitationFailedDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["AcceptInvitationFailedDetails"].type()) {
        vector<AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AcceptInvitationFailedDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        acceptInvitationFailedDetails = make_shared<vector<AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ReceiverAccountId") != m.end() && !m["ReceiverAccountId"].empty()) {
      receiverAccountId = make_shared<string>(boost::any_cast<string>(m["ReceiverAccountId"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
    if (m.find("ResourceShareInvitationId") != m.end() && !m["ResourceShareInvitationId"].empty()) {
      resourceShareInvitationId = make_shared<string>(boost::any_cast<string>(m["ResourceShareInvitationId"]));
    }
    if (m.find("ResourceShareName") != m.end() && !m["ResourceShareName"].empty()) {
      resourceShareName = make_shared<string>(boost::any_cast<string>(m["ResourceShareName"]));
    }
    if (m.find("SenderAccountId") != m.end() && !m["SenderAccountId"].empty()) {
      senderAccountId = make_shared<string>(boost::any_cast<string>(m["SenderAccountId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~AcceptResourceShareInvitationResponseBodyResourceShareInvitation() = default;
};
class AcceptResourceShareInvitationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AcceptResourceShareInvitationResponseBodyResourceShareInvitation> resourceShareInvitation{};

  AcceptResourceShareInvitationResponseBody() {}

  explicit AcceptResourceShareInvitationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceShareInvitation) {
      res["ResourceShareInvitation"] = resourceShareInvitation ? boost::any(resourceShareInvitation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceShareInvitation") != m.end() && !m["ResourceShareInvitation"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceShareInvitation"].type()) {
        AcceptResourceShareInvitationResponseBodyResourceShareInvitation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceShareInvitation"]));
        resourceShareInvitation = make_shared<AcceptResourceShareInvitationResponseBodyResourceShareInvitation>(model1);
      }
    }
  }


  virtual ~AcceptResourceShareInvitationResponseBody() = default;
};
class AcceptResourceShareInvitationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AcceptResourceShareInvitationResponseBody> body{};

  AcceptResourceShareInvitationResponse() {}

  explicit AcceptResourceShareInvitationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AcceptResourceShareInvitationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AcceptResourceShareInvitationResponseBody>(model1);
      }
    }
  }


  virtual ~AcceptResourceShareInvitationResponse() = default;
};
class AssociateResourceShareRequestResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  AssociateResourceShareRequestResources() {}

  explicit AssociateResourceShareRequestResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~AssociateResourceShareRequestResources() = default;
};
class AssociateResourceShareRequestTargetProperties : public Darabonba::Model {
public:
  shared_ptr<string> property{};
  shared_ptr<string> targetId{};

  AssociateResourceShareRequestTargetProperties() {}

  explicit AssociateResourceShareRequestTargetProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (property) {
      res["Property"] = boost::any(*property);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      property = make_shared<string>(boost::any_cast<string>(m["Property"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
  }


  virtual ~AssociateResourceShareRequestTargetProperties() = default;
};
class AssociateResourceShareRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> permissionNames{};
  shared_ptr<string> resourceShareId{};
  shared_ptr<vector<AssociateResourceShareRequestResources>> resources{};
  shared_ptr<vector<AssociateResourceShareRequestTargetProperties>> targetProperties{};
  shared_ptr<vector<string>> targets{};

  AssociateResourceShareRequest() {}

  explicit AssociateResourceShareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionNames) {
      res["PermissionNames"] = boost::any(*permissionNames);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (targetProperties) {
      vector<boost::any> temp1;
      for(auto item1:*targetProperties){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TargetProperties"] = boost::any(temp1);
    }
    if (targets) {
      res["Targets"] = boost::any(*targets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionNames") != m.end() && !m["PermissionNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PermissionNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PermissionNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissionNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<AssociateResourceShareRequestResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AssociateResourceShareRequestResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<AssociateResourceShareRequestResources>>(expect1);
      }
    }
    if (m.find("TargetProperties") != m.end() && !m["TargetProperties"].empty()) {
      if (typeid(vector<boost::any>) == m["TargetProperties"].type()) {
        vector<AssociateResourceShareRequestTargetProperties> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TargetProperties"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AssociateResourceShareRequestTargetProperties model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targetProperties = make_shared<vector<AssociateResourceShareRequestTargetProperties>>(expect1);
      }
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Targets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      targets = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AssociateResourceShareRequest() = default;
};
class AssociateResourceShareResponseBodyResourceShareAssociations : public Darabonba::Model {
public:
  shared_ptr<string> associationStatus{};
  shared_ptr<string> associationStatusMessage{};
  shared_ptr<string> associationType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> entityId{};
  shared_ptr<string> entityType{};
  shared_ptr<string> resourceShareId{};
  shared_ptr<string> resourceShareName{};
  shared_ptr<string> targetProperty{};
  shared_ptr<string> updateTime{};

  AssociateResourceShareResponseBodyResourceShareAssociations() {}

  explicit AssociateResourceShareResponseBodyResourceShareAssociations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associationStatus) {
      res["AssociationStatus"] = boost::any(*associationStatus);
    }
    if (associationStatusMessage) {
      res["AssociationStatusMessage"] = boost::any(*associationStatusMessage);
    }
    if (associationType) {
      res["AssociationType"] = boost::any(*associationType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    if (resourceShareName) {
      res["ResourceShareName"] = boost::any(*resourceShareName);
    }
    if (targetProperty) {
      res["TargetProperty"] = boost::any(*targetProperty);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociationStatus") != m.end() && !m["AssociationStatus"].empty()) {
      associationStatus = make_shared<string>(boost::any_cast<string>(m["AssociationStatus"]));
    }
    if (m.find("AssociationStatusMessage") != m.end() && !m["AssociationStatusMessage"].empty()) {
      associationStatusMessage = make_shared<string>(boost::any_cast<string>(m["AssociationStatusMessage"]));
    }
    if (m.find("AssociationType") != m.end() && !m["AssociationType"].empty()) {
      associationType = make_shared<string>(boost::any_cast<string>(m["AssociationType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
    if (m.find("ResourceShareName") != m.end() && !m["ResourceShareName"].empty()) {
      resourceShareName = make_shared<string>(boost::any_cast<string>(m["ResourceShareName"]));
    }
    if (m.find("TargetProperty") != m.end() && !m["TargetProperty"].empty()) {
      targetProperty = make_shared<string>(boost::any_cast<string>(m["TargetProperty"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~AssociateResourceShareResponseBodyResourceShareAssociations() = default;
};
class AssociateResourceShareResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<AssociateResourceShareResponseBodyResourceShareAssociations>> resourceShareAssociations{};

  AssociateResourceShareResponseBody() {}

  explicit AssociateResourceShareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceShareAssociations) {
      vector<boost::any> temp1;
      for(auto item1:*resourceShareAssociations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceShareAssociations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceShareAssociations") != m.end() && !m["ResourceShareAssociations"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceShareAssociations"].type()) {
        vector<AssociateResourceShareResponseBodyResourceShareAssociations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceShareAssociations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AssociateResourceShareResponseBodyResourceShareAssociations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceShareAssociations = make_shared<vector<AssociateResourceShareResponseBodyResourceShareAssociations>>(expect1);
      }
    }
  }


  virtual ~AssociateResourceShareResponseBody() = default;
};
class AssociateResourceShareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateResourceShareResponseBody> body{};

  AssociateResourceShareResponse() {}

  explicit AssociateResourceShareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateResourceShareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateResourceShareResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateResourceShareResponse() = default;
};
class AssociateResourceSharePermissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> permissionName{};
  shared_ptr<bool> replace{};
  shared_ptr<string> resourceShareId{};

  AssociateResourceSharePermissionRequest() {}

  explicit AssociateResourceSharePermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionName) {
      res["PermissionName"] = boost::any(*permissionName);
    }
    if (replace) {
      res["Replace"] = boost::any(*replace);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionName") != m.end() && !m["PermissionName"].empty()) {
      permissionName = make_shared<string>(boost::any_cast<string>(m["PermissionName"]));
    }
    if (m.find("Replace") != m.end() && !m["Replace"].empty()) {
      replace = make_shared<bool>(boost::any_cast<bool>(m["Replace"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
  }


  virtual ~AssociateResourceSharePermissionRequest() = default;
};
class AssociateResourceSharePermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AssociateResourceSharePermissionResponseBody() {}

  explicit AssociateResourceSharePermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AssociateResourceSharePermissionResponseBody() = default;
};
class AssociateResourceSharePermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateResourceSharePermissionResponseBody> body{};

  AssociateResourceSharePermissionResponse() {}

  explicit AssociateResourceSharePermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateResourceSharePermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateResourceSharePermissionResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateResourceSharePermissionResponse() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceRegionId{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
  }


  virtual ~ChangeResourceGroupRequest() = default;
};
class ChangeResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ChangeResourceGroupResponseBody() {}

  explicit ChangeResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeResourceGroupResponseBody() = default;
};
class ChangeResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeResourceGroupResponseBody> body{};

  ChangeResourceGroupResponse() {}

  explicit ChangeResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeResourceGroupResponse() = default;
};
class CheckSharingWithResourceDirectoryStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> enableSharingWithRd{};
  shared_ptr<string> requestId{};

  CheckSharingWithResourceDirectoryStatusResponseBody() {}

  explicit CheckSharingWithResourceDirectoryStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableSharingWithRd) {
      res["EnableSharingWithRd"] = boost::any(*enableSharingWithRd);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableSharingWithRd") != m.end() && !m["EnableSharingWithRd"].empty()) {
      enableSharingWithRd = make_shared<bool>(boost::any_cast<bool>(m["EnableSharingWithRd"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckSharingWithResourceDirectoryStatusResponseBody() = default;
};
class CheckSharingWithResourceDirectoryStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckSharingWithResourceDirectoryStatusResponseBody> body{};

  CheckSharingWithResourceDirectoryStatusResponse() {}

  explicit CheckSharingWithResourceDirectoryStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckSharingWithResourceDirectoryStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckSharingWithResourceDirectoryStatusResponseBody>(model1);
      }
    }
  }


  virtual ~CheckSharingWithResourceDirectoryStatusResponse() = default;
};
class CreateResourceShareRequestResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  CreateResourceShareRequestResources() {}

  explicit CreateResourceShareRequestResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~CreateResourceShareRequestResources() = default;
};
class CreateResourceShareRequestTargetProperties : public Darabonba::Model {
public:
  shared_ptr<string> property{};
  shared_ptr<string> targetId{};

  CreateResourceShareRequestTargetProperties() {}

  explicit CreateResourceShareRequestTargetProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (property) {
      res["Property"] = boost::any(*property);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      property = make_shared<string>(boost::any_cast<string>(m["Property"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
  }


  virtual ~CreateResourceShareRequestTargetProperties() = default;
};
class CreateResourceShareRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allowExternalTargets{};
  shared_ptr<vector<string>> permissionNames{};
  shared_ptr<string> resourceShareName{};
  shared_ptr<vector<CreateResourceShareRequestResources>> resources{};
  shared_ptr<vector<CreateResourceShareRequestTargetProperties>> targetProperties{};
  shared_ptr<vector<string>> targets{};

  CreateResourceShareRequest() {}

  explicit CreateResourceShareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowExternalTargets) {
      res["AllowExternalTargets"] = boost::any(*allowExternalTargets);
    }
    if (permissionNames) {
      res["PermissionNames"] = boost::any(*permissionNames);
    }
    if (resourceShareName) {
      res["ResourceShareName"] = boost::any(*resourceShareName);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (targetProperties) {
      vector<boost::any> temp1;
      for(auto item1:*targetProperties){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TargetProperties"] = boost::any(temp1);
    }
    if (targets) {
      res["Targets"] = boost::any(*targets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowExternalTargets") != m.end() && !m["AllowExternalTargets"].empty()) {
      allowExternalTargets = make_shared<bool>(boost::any_cast<bool>(m["AllowExternalTargets"]));
    }
    if (m.find("PermissionNames") != m.end() && !m["PermissionNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PermissionNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PermissionNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissionNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceShareName") != m.end() && !m["ResourceShareName"].empty()) {
      resourceShareName = make_shared<string>(boost::any_cast<string>(m["ResourceShareName"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<CreateResourceShareRequestResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateResourceShareRequestResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<CreateResourceShareRequestResources>>(expect1);
      }
    }
    if (m.find("TargetProperties") != m.end() && !m["TargetProperties"].empty()) {
      if (typeid(vector<boost::any>) == m["TargetProperties"].type()) {
        vector<CreateResourceShareRequestTargetProperties> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TargetProperties"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateResourceShareRequestTargetProperties model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targetProperties = make_shared<vector<CreateResourceShareRequestTargetProperties>>(expect1);
      }
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Targets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      targets = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateResourceShareRequest() = default;
};
class CreateResourceShareResponseBodyResourceShare : public Darabonba::Model {
public:
  shared_ptr<bool> allowExternalTargets{};
  shared_ptr<string> createTime{};
  shared_ptr<string> resourceShareId{};
  shared_ptr<string> resourceShareName{};
  shared_ptr<string> resourceShareOwner{};
  shared_ptr<string> resourceShareStatus{};
  shared_ptr<string> updateTime{};

  CreateResourceShareResponseBodyResourceShare() {}

  explicit CreateResourceShareResponseBodyResourceShare(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowExternalTargets) {
      res["AllowExternalTargets"] = boost::any(*allowExternalTargets);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    if (resourceShareName) {
      res["ResourceShareName"] = boost::any(*resourceShareName);
    }
    if (resourceShareOwner) {
      res["ResourceShareOwner"] = boost::any(*resourceShareOwner);
    }
    if (resourceShareStatus) {
      res["ResourceShareStatus"] = boost::any(*resourceShareStatus);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowExternalTargets") != m.end() && !m["AllowExternalTargets"].empty()) {
      allowExternalTargets = make_shared<bool>(boost::any_cast<bool>(m["AllowExternalTargets"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
    if (m.find("ResourceShareName") != m.end() && !m["ResourceShareName"].empty()) {
      resourceShareName = make_shared<string>(boost::any_cast<string>(m["ResourceShareName"]));
    }
    if (m.find("ResourceShareOwner") != m.end() && !m["ResourceShareOwner"].empty()) {
      resourceShareOwner = make_shared<string>(boost::any_cast<string>(m["ResourceShareOwner"]));
    }
    if (m.find("ResourceShareStatus") != m.end() && !m["ResourceShareStatus"].empty()) {
      resourceShareStatus = make_shared<string>(boost::any_cast<string>(m["ResourceShareStatus"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~CreateResourceShareResponseBodyResourceShare() = default;
};
class CreateResourceShareResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateResourceShareResponseBodyResourceShare> resourceShare{};

  CreateResourceShareResponseBody() {}

  explicit CreateResourceShareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceShare) {
      res["ResourceShare"] = resourceShare ? boost::any(resourceShare->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceShare") != m.end() && !m["ResourceShare"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceShare"].type()) {
        CreateResourceShareResponseBodyResourceShare model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceShare"]));
        resourceShare = make_shared<CreateResourceShareResponseBodyResourceShare>(model1);
      }
    }
  }


  virtual ~CreateResourceShareResponseBody() = default;
};
class CreateResourceShareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateResourceShareResponseBody> body{};

  CreateResourceShareResponse() {}

  explicit CreateResourceShareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateResourceShareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceShareResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceShareResponse() = default;
};
class DeleteResourceShareRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceShareId{};

  DeleteResourceShareRequest() {}

  explicit DeleteResourceShareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
  }


  virtual ~DeleteResourceShareRequest() = default;
};
class DeleteResourceShareResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteResourceShareResponseBody() {}

  explicit DeleteResourceShareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteResourceShareResponseBody() = default;
};
class DeleteResourceShareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceShareResponseBody> body{};

  DeleteResourceShareResponse() {}

  explicit DeleteResourceShareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteResourceShareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceShareResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceShareResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DisassociateResourceShareRequestResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  DisassociateResourceShareRequestResources() {}

  explicit DisassociateResourceShareRequestResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~DisassociateResourceShareRequestResources() = default;
};
class DisassociateResourceShareRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceOwner{};
  shared_ptr<string> resourceShareId{};
  shared_ptr<vector<DisassociateResourceShareRequestResources>> resources{};
  shared_ptr<vector<string>> targets{};

  DisassociateResourceShareRequest() {}

  explicit DisassociateResourceShareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwner) {
      res["ResourceOwner"] = boost::any(*resourceOwner);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (targets) {
      res["Targets"] = boost::any(*targets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwner") != m.end() && !m["ResourceOwner"].empty()) {
      resourceOwner = make_shared<string>(boost::any_cast<string>(m["ResourceOwner"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<DisassociateResourceShareRequestResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DisassociateResourceShareRequestResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<DisassociateResourceShareRequestResources>>(expect1);
      }
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Targets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      targets = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DisassociateResourceShareRequest() = default;
};
class DisassociateResourceShareResponseBodyResourceShareAssociations : public Darabonba::Model {
public:
  shared_ptr<string> associationStatus{};
  shared_ptr<string> associationStatusMessage{};
  shared_ptr<string> associationType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> entityId{};
  shared_ptr<string> entityType{};
  shared_ptr<string> resourceShareId{};
  shared_ptr<string> resourceShareName{};
  shared_ptr<string> targetProperty{};
  shared_ptr<string> updateTime{};

  DisassociateResourceShareResponseBodyResourceShareAssociations() {}

  explicit DisassociateResourceShareResponseBodyResourceShareAssociations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associationStatus) {
      res["AssociationStatus"] = boost::any(*associationStatus);
    }
    if (associationStatusMessage) {
      res["AssociationStatusMessage"] = boost::any(*associationStatusMessage);
    }
    if (associationType) {
      res["AssociationType"] = boost::any(*associationType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    if (resourceShareName) {
      res["ResourceShareName"] = boost::any(*resourceShareName);
    }
    if (targetProperty) {
      res["TargetProperty"] = boost::any(*targetProperty);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociationStatus") != m.end() && !m["AssociationStatus"].empty()) {
      associationStatus = make_shared<string>(boost::any_cast<string>(m["AssociationStatus"]));
    }
    if (m.find("AssociationStatusMessage") != m.end() && !m["AssociationStatusMessage"].empty()) {
      associationStatusMessage = make_shared<string>(boost::any_cast<string>(m["AssociationStatusMessage"]));
    }
    if (m.find("AssociationType") != m.end() && !m["AssociationType"].empty()) {
      associationType = make_shared<string>(boost::any_cast<string>(m["AssociationType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
    if (m.find("ResourceShareName") != m.end() && !m["ResourceShareName"].empty()) {
      resourceShareName = make_shared<string>(boost::any_cast<string>(m["ResourceShareName"]));
    }
    if (m.find("TargetProperty") != m.end() && !m["TargetProperty"].empty()) {
      targetProperty = make_shared<string>(boost::any_cast<string>(m["TargetProperty"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~DisassociateResourceShareResponseBodyResourceShareAssociations() = default;
};
class DisassociateResourceShareResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DisassociateResourceShareResponseBodyResourceShareAssociations>> resourceShareAssociations{};

  DisassociateResourceShareResponseBody() {}

  explicit DisassociateResourceShareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceShareAssociations) {
      vector<boost::any> temp1;
      for(auto item1:*resourceShareAssociations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceShareAssociations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceShareAssociations") != m.end() && !m["ResourceShareAssociations"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceShareAssociations"].type()) {
        vector<DisassociateResourceShareResponseBodyResourceShareAssociations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceShareAssociations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DisassociateResourceShareResponseBodyResourceShareAssociations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceShareAssociations = make_shared<vector<DisassociateResourceShareResponseBodyResourceShareAssociations>>(expect1);
      }
    }
  }


  virtual ~DisassociateResourceShareResponseBody() = default;
};
class DisassociateResourceShareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisassociateResourceShareResponseBody> body{};

  DisassociateResourceShareResponse() {}

  explicit DisassociateResourceShareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisassociateResourceShareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisassociateResourceShareResponseBody>(model1);
      }
    }
  }


  virtual ~DisassociateResourceShareResponse() = default;
};
class DisassociateResourceSharePermissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> permissionName{};
  shared_ptr<string> resourceShareId{};

  DisassociateResourceSharePermissionRequest() {}

  explicit DisassociateResourceSharePermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionName) {
      res["PermissionName"] = boost::any(*permissionName);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionName") != m.end() && !m["PermissionName"].empty()) {
      permissionName = make_shared<string>(boost::any_cast<string>(m["PermissionName"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
  }


  virtual ~DisassociateResourceSharePermissionRequest() = default;
};
class DisassociateResourceSharePermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisassociateResourceSharePermissionResponseBody() {}

  explicit DisassociateResourceSharePermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisassociateResourceSharePermissionResponseBody() = default;
};
class DisassociateResourceSharePermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisassociateResourceSharePermissionResponseBody> body{};

  DisassociateResourceSharePermissionResponse() {}

  explicit DisassociateResourceSharePermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisassociateResourceSharePermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisassociateResourceSharePermissionResponseBody>(model1);
      }
    }
  }


  virtual ~DisassociateResourceSharePermissionResponse() = default;
};
class EnableSharingWithResourceDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableSharingWithResourceDirectoryResponseBody() {}

  explicit EnableSharingWithResourceDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableSharingWithResourceDirectoryResponseBody() = default;
};
class EnableSharingWithResourceDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableSharingWithResourceDirectoryResponseBody> body{};

  EnableSharingWithResourceDirectoryResponse() {}

  explicit EnableSharingWithResourceDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableSharingWithResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableSharingWithResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~EnableSharingWithResourceDirectoryResponse() = default;
};
class GetPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> permissionName{};
  shared_ptr<string> permissionVersion{};

  GetPermissionRequest() {}

  explicit GetPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionName) {
      res["PermissionName"] = boost::any(*permissionName);
    }
    if (permissionVersion) {
      res["PermissionVersion"] = boost::any(*permissionVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionName") != m.end() && !m["PermissionName"].empty()) {
      permissionName = make_shared<string>(boost::any_cast<string>(m["PermissionName"]));
    }
    if (m.find("PermissionVersion") != m.end() && !m["PermissionVersion"].empty()) {
      permissionVersion = make_shared<string>(boost::any_cast<string>(m["PermissionVersion"]));
    }
  }


  virtual ~GetPermissionRequest() = default;
};
class GetPermissionResponseBodyPermission : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> defaultPermission{};
  shared_ptr<bool> defaultVersion{};
  shared_ptr<string> permission{};
  shared_ptr<string> permissionName{};
  shared_ptr<string> permissionVersion{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> updateTime{};

  GetPermissionResponseBodyPermission() {}

  explicit GetPermissionResponseBodyPermission(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultPermission) {
      res["DefaultPermission"] = boost::any(*defaultPermission);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (permission) {
      res["Permission"] = boost::any(*permission);
    }
    if (permissionName) {
      res["PermissionName"] = boost::any(*permissionName);
    }
    if (permissionVersion) {
      res["PermissionVersion"] = boost::any(*permissionVersion);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DefaultPermission") != m.end() && !m["DefaultPermission"].empty()) {
      defaultPermission = make_shared<bool>(boost::any_cast<bool>(m["DefaultPermission"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<bool>(boost::any_cast<bool>(m["DefaultVersion"]));
    }
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      permission = make_shared<string>(boost::any_cast<string>(m["Permission"]));
    }
    if (m.find("PermissionName") != m.end() && !m["PermissionName"].empty()) {
      permissionName = make_shared<string>(boost::any_cast<string>(m["PermissionName"]));
    }
    if (m.find("PermissionVersion") != m.end() && !m["PermissionVersion"].empty()) {
      permissionVersion = make_shared<string>(boost::any_cast<string>(m["PermissionVersion"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetPermissionResponseBodyPermission() = default;
};
class GetPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPermissionResponseBodyPermission> permission{};
  shared_ptr<string> requestId{};

  GetPermissionResponseBody() {}

  explicit GetPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permission) {
      res["Permission"] = permission ? boost::any(permission->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      if (typeid(map<string, boost::any>) == m["Permission"].type()) {
        GetPermissionResponseBodyPermission model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Permission"]));
        permission = make_shared<GetPermissionResponseBodyPermission>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPermissionResponseBody() = default;
};
class GetPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPermissionResponseBody> body{};

  GetPermissionResponse() {}

  explicit GetPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~GetPermissionResponse() = default;
};
class ListPermissionVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> permissionName{};

  ListPermissionVersionsRequest() {}

  explicit ListPermissionVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (permissionName) {
      res["PermissionName"] = boost::any(*permissionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PermissionName") != m.end() && !m["PermissionName"].empty()) {
      permissionName = make_shared<string>(boost::any_cast<string>(m["PermissionName"]));
    }
  }


  virtual ~ListPermissionVersionsRequest() = default;
};
class ListPermissionVersionsResponseBodyPermissions : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> defaultPermission{};
  shared_ptr<bool> defaultVersion{};
  shared_ptr<string> permissionName{};
  shared_ptr<string> permissionVersion{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> updateTime{};

  ListPermissionVersionsResponseBodyPermissions() {}

  explicit ListPermissionVersionsResponseBodyPermissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultPermission) {
      res["DefaultPermission"] = boost::any(*defaultPermission);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (permissionName) {
      res["PermissionName"] = boost::any(*permissionName);
    }
    if (permissionVersion) {
      res["PermissionVersion"] = boost::any(*permissionVersion);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DefaultPermission") != m.end() && !m["DefaultPermission"].empty()) {
      defaultPermission = make_shared<bool>(boost::any_cast<bool>(m["DefaultPermission"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<bool>(boost::any_cast<bool>(m["DefaultVersion"]));
    }
    if (m.find("PermissionName") != m.end() && !m["PermissionName"].empty()) {
      permissionName = make_shared<string>(boost::any_cast<string>(m["PermissionName"]));
    }
    if (m.find("PermissionVersion") != m.end() && !m["PermissionVersion"].empty()) {
      permissionVersion = make_shared<string>(boost::any_cast<string>(m["PermissionVersion"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListPermissionVersionsResponseBodyPermissions() = default;
};
class ListPermissionVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPermissionVersionsResponseBodyPermissions>> permissions{};
  shared_ptr<string> requestId{};

  ListPermissionVersionsResponseBody() {}

  explicit ListPermissionVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (permissions) {
      vector<boost::any> temp1;
      for(auto item1:*permissions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Permissions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      if (typeid(vector<boost::any>) == m["Permissions"].type()) {
        vector<ListPermissionVersionsResponseBodyPermissions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Permissions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPermissionVersionsResponseBodyPermissions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissions = make_shared<vector<ListPermissionVersionsResponseBodyPermissions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPermissionVersionsResponseBody() = default;
};
class ListPermissionVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPermissionVersionsResponseBody> body{};

  ListPermissionVersionsResponse() {}

  explicit ListPermissionVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPermissionVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPermissionVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPermissionVersionsResponse() = default;
};
class ListPermissionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceType{};

  ListPermissionsRequest() {}

  explicit ListPermissionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListPermissionsRequest() = default;
};
class ListPermissionsResponseBodyPermissions : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> defaultPermission{};
  shared_ptr<bool> defaultVersion{};
  shared_ptr<string> permissionName{};
  shared_ptr<string> permissionVersion{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> updateTime{};

  ListPermissionsResponseBodyPermissions() {}

  explicit ListPermissionsResponseBodyPermissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultPermission) {
      res["DefaultPermission"] = boost::any(*defaultPermission);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (permissionName) {
      res["PermissionName"] = boost::any(*permissionName);
    }
    if (permissionVersion) {
      res["PermissionVersion"] = boost::any(*permissionVersion);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DefaultPermission") != m.end() && !m["DefaultPermission"].empty()) {
      defaultPermission = make_shared<bool>(boost::any_cast<bool>(m["DefaultPermission"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<bool>(boost::any_cast<bool>(m["DefaultVersion"]));
    }
    if (m.find("PermissionName") != m.end() && !m["PermissionName"].empty()) {
      permissionName = make_shared<string>(boost::any_cast<string>(m["PermissionName"]));
    }
    if (m.find("PermissionVersion") != m.end() && !m["PermissionVersion"].empty()) {
      permissionVersion = make_shared<string>(boost::any_cast<string>(m["PermissionVersion"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListPermissionsResponseBodyPermissions() = default;
};
class ListPermissionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPermissionsResponseBodyPermissions>> permissions{};
  shared_ptr<string> requestId{};

  ListPermissionsResponseBody() {}

  explicit ListPermissionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (permissions) {
      vector<boost::any> temp1;
      for(auto item1:*permissions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Permissions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      if (typeid(vector<boost::any>) == m["Permissions"].type()) {
        vector<ListPermissionsResponseBodyPermissions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Permissions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPermissionsResponseBodyPermissions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissions = make_shared<vector<ListPermissionsResponseBodyPermissions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPermissionsResponseBody() = default;
};
class ListPermissionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPermissionsResponseBody> body{};

  ListPermissionsResponse() {}

  explicit ListPermissionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPermissionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPermissionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPermissionsResponse() = default;
};
class ListResourceShareAssociationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> associationStatus{};
  shared_ptr<string> associationType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceId{};
  shared_ptr<vector<string>> resourceShareIds{};
  shared_ptr<string> target{};

  ListResourceShareAssociationsRequest() {}

  explicit ListResourceShareAssociationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associationStatus) {
      res["AssociationStatus"] = boost::any(*associationStatus);
    }
    if (associationType) {
      res["AssociationType"] = boost::any(*associationType);
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
    if (resourceShareIds) {
      res["ResourceShareIds"] = boost::any(*resourceShareIds);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociationStatus") != m.end() && !m["AssociationStatus"].empty()) {
      associationStatus = make_shared<string>(boost::any_cast<string>(m["AssociationStatus"]));
    }
    if (m.find("AssociationType") != m.end() && !m["AssociationType"].empty()) {
      associationType = make_shared<string>(boost::any_cast<string>(m["AssociationType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceShareIds") != m.end() && !m["ResourceShareIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceShareIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceShareIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceShareIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
  }


  virtual ~ListResourceShareAssociationsRequest() = default;
};
class ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails : public Darabonba::Model {
public:
  shared_ptr<string> associateType{};
  shared_ptr<string> entityId{};
  shared_ptr<string> entityType{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};

  ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails() {}

  explicit ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associateType) {
      res["AssociateType"] = boost::any(*associateType);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociateType") != m.end() && !m["AssociateType"].empty()) {
      associateType = make_shared<string>(boost::any_cast<string>(m["AssociateType"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
  }


  virtual ~ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails() = default;
};
class ListResourceShareAssociationsResponseBodyResourceShareAssociations : public Darabonba::Model {
public:
  shared_ptr<vector<ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails>> associationFailedDetails{};
  shared_ptr<string> associationStatus{};
  shared_ptr<string> associationStatusMessage{};
  shared_ptr<string> associationType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> entityId{};
  shared_ptr<string> entityType{};
  shared_ptr<bool> external{};
  shared_ptr<string> resourceShareId{};
  shared_ptr<string> resourceShareName{};
  shared_ptr<string> targetProperty{};
  shared_ptr<string> updateTime{};

  ListResourceShareAssociationsResponseBodyResourceShareAssociations() {}

  explicit ListResourceShareAssociationsResponseBodyResourceShareAssociations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associationFailedDetails) {
      vector<boost::any> temp1;
      for(auto item1:*associationFailedDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AssociationFailedDetails"] = boost::any(temp1);
    }
    if (associationStatus) {
      res["AssociationStatus"] = boost::any(*associationStatus);
    }
    if (associationStatusMessage) {
      res["AssociationStatusMessage"] = boost::any(*associationStatusMessage);
    }
    if (associationType) {
      res["AssociationType"] = boost::any(*associationType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (external) {
      res["External"] = boost::any(*external);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    if (resourceShareName) {
      res["ResourceShareName"] = boost::any(*resourceShareName);
    }
    if (targetProperty) {
      res["TargetProperty"] = boost::any(*targetProperty);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociationFailedDetails") != m.end() && !m["AssociationFailedDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["AssociationFailedDetails"].type()) {
        vector<ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AssociationFailedDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        associationFailedDetails = make_shared<vector<ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails>>(expect1);
      }
    }
    if (m.find("AssociationStatus") != m.end() && !m["AssociationStatus"].empty()) {
      associationStatus = make_shared<string>(boost::any_cast<string>(m["AssociationStatus"]));
    }
    if (m.find("AssociationStatusMessage") != m.end() && !m["AssociationStatusMessage"].empty()) {
      associationStatusMessage = make_shared<string>(boost::any_cast<string>(m["AssociationStatusMessage"]));
    }
    if (m.find("AssociationType") != m.end() && !m["AssociationType"].empty()) {
      associationType = make_shared<string>(boost::any_cast<string>(m["AssociationType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("External") != m.end() && !m["External"].empty()) {
      external = make_shared<bool>(boost::any_cast<bool>(m["External"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
    if (m.find("ResourceShareName") != m.end() && !m["ResourceShareName"].empty()) {
      resourceShareName = make_shared<string>(boost::any_cast<string>(m["ResourceShareName"]));
    }
    if (m.find("TargetProperty") != m.end() && !m["TargetProperty"].empty()) {
      targetProperty = make_shared<string>(boost::any_cast<string>(m["TargetProperty"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListResourceShareAssociationsResponseBodyResourceShareAssociations() = default;
};
class ListResourceShareAssociationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListResourceShareAssociationsResponseBodyResourceShareAssociations>> resourceShareAssociations{};

  ListResourceShareAssociationsResponseBody() {}

  explicit ListResourceShareAssociationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceShareAssociations) {
      vector<boost::any> temp1;
      for(auto item1:*resourceShareAssociations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceShareAssociations"] = boost::any(temp1);
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
    if (m.find("ResourceShareAssociations") != m.end() && !m["ResourceShareAssociations"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceShareAssociations"].type()) {
        vector<ListResourceShareAssociationsResponseBodyResourceShareAssociations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceShareAssociations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceShareAssociationsResponseBodyResourceShareAssociations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceShareAssociations = make_shared<vector<ListResourceShareAssociationsResponseBodyResourceShareAssociations>>(expect1);
      }
    }
  }


  virtual ~ListResourceShareAssociationsResponseBody() = default;
};
class ListResourceShareAssociationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceShareAssociationsResponseBody> body{};

  ListResourceShareAssociationsResponse() {}

  explicit ListResourceShareAssociationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceShareAssociationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceShareAssociationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceShareAssociationsResponse() = default;
};
class ListResourceShareInvitationsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceShareIds{};
  shared_ptr<vector<string>> resourceShareInvitationIds{};

  ListResourceShareInvitationsRequest() {}

  explicit ListResourceShareInvitationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceShareIds) {
      res["ResourceShareIds"] = boost::any(*resourceShareIds);
    }
    if (resourceShareInvitationIds) {
      res["ResourceShareInvitationIds"] = boost::any(*resourceShareInvitationIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceShareIds") != m.end() && !m["ResourceShareIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceShareIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceShareIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceShareIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceShareInvitationIds") != m.end() && !m["ResourceShareInvitationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceShareInvitationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceShareInvitationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceShareInvitationIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListResourceShareInvitationsRequest() = default;
};
class ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails : public Darabonba::Model {
public:
  shared_ptr<string> associateType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};

  ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails() {}

  explicit ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associateType) {
      res["AssociateType"] = boost::any(*associateType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociateType") != m.end() && !m["AssociateType"].empty()) {
      associateType = make_shared<string>(boost::any_cast<string>(m["AssociateType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
  }


  virtual ~ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails() = default;
};
class ListResourceShareInvitationsResponseBodyResourceShareInvitations : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<vector<ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails>> invitationFailedDetails{};
  shared_ptr<string> receiverAccountId{};
  shared_ptr<string> resourceShareId{};
  shared_ptr<string> resourceShareInvitationId{};
  shared_ptr<string> resourceShareName{};
  shared_ptr<string> senderAccountId{};
  shared_ptr<string> status{};

  ListResourceShareInvitationsResponseBodyResourceShareInvitations() {}

  explicit ListResourceShareInvitationsResponseBodyResourceShareInvitations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (invitationFailedDetails) {
      vector<boost::any> temp1;
      for(auto item1:*invitationFailedDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InvitationFailedDetails"] = boost::any(temp1);
    }
    if (receiverAccountId) {
      res["ReceiverAccountId"] = boost::any(*receiverAccountId);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    if (resourceShareInvitationId) {
      res["ResourceShareInvitationId"] = boost::any(*resourceShareInvitationId);
    }
    if (resourceShareName) {
      res["ResourceShareName"] = boost::any(*resourceShareName);
    }
    if (senderAccountId) {
      res["SenderAccountId"] = boost::any(*senderAccountId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("InvitationFailedDetails") != m.end() && !m["InvitationFailedDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["InvitationFailedDetails"].type()) {
        vector<ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InvitationFailedDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invitationFailedDetails = make_shared<vector<ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails>>(expect1);
      }
    }
    if (m.find("ReceiverAccountId") != m.end() && !m["ReceiverAccountId"].empty()) {
      receiverAccountId = make_shared<string>(boost::any_cast<string>(m["ReceiverAccountId"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
    if (m.find("ResourceShareInvitationId") != m.end() && !m["ResourceShareInvitationId"].empty()) {
      resourceShareInvitationId = make_shared<string>(boost::any_cast<string>(m["ResourceShareInvitationId"]));
    }
    if (m.find("ResourceShareName") != m.end() && !m["ResourceShareName"].empty()) {
      resourceShareName = make_shared<string>(boost::any_cast<string>(m["ResourceShareName"]));
    }
    if (m.find("SenderAccountId") != m.end() && !m["SenderAccountId"].empty()) {
      senderAccountId = make_shared<string>(boost::any_cast<string>(m["SenderAccountId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListResourceShareInvitationsResponseBodyResourceShareInvitations() = default;
};
class ListResourceShareInvitationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListResourceShareInvitationsResponseBodyResourceShareInvitations>> resourceShareInvitations{};

  ListResourceShareInvitationsResponseBody() {}

  explicit ListResourceShareInvitationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceShareInvitations) {
      vector<boost::any> temp1;
      for(auto item1:*resourceShareInvitations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceShareInvitations"] = boost::any(temp1);
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
    if (m.find("ResourceShareInvitations") != m.end() && !m["ResourceShareInvitations"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceShareInvitations"].type()) {
        vector<ListResourceShareInvitationsResponseBodyResourceShareInvitations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceShareInvitations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceShareInvitationsResponseBodyResourceShareInvitations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceShareInvitations = make_shared<vector<ListResourceShareInvitationsResponseBodyResourceShareInvitations>>(expect1);
      }
    }
  }


  virtual ~ListResourceShareInvitationsResponseBody() = default;
};
class ListResourceShareInvitationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceShareInvitationsResponseBody> body{};

  ListResourceShareInvitationsResponse() {}

  explicit ListResourceShareInvitationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceShareInvitationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceShareInvitationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceShareInvitationsResponse() = default;
};
class ListResourceSharePermissionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceOwner{};
  shared_ptr<string> resourceShareId{};

  ListResourceSharePermissionsRequest() {}

  explicit ListResourceSharePermissionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceOwner) {
      res["ResourceOwner"] = boost::any(*resourceOwner);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceOwner") != m.end() && !m["ResourceOwner"].empty()) {
      resourceOwner = make_shared<string>(boost::any_cast<string>(m["ResourceOwner"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
  }


  virtual ~ListResourceSharePermissionsRequest() = default;
};
class ListResourceSharePermissionsResponseBodyPermissions : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> defaultPermission{};
  shared_ptr<bool> defaultVersion{};
  shared_ptr<string> permissionName{};
  shared_ptr<string> permissionVersion{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> updateTime{};

  ListResourceSharePermissionsResponseBodyPermissions() {}

  explicit ListResourceSharePermissionsResponseBodyPermissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultPermission) {
      res["DefaultPermission"] = boost::any(*defaultPermission);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (permissionName) {
      res["PermissionName"] = boost::any(*permissionName);
    }
    if (permissionVersion) {
      res["PermissionVersion"] = boost::any(*permissionVersion);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DefaultPermission") != m.end() && !m["DefaultPermission"].empty()) {
      defaultPermission = make_shared<bool>(boost::any_cast<bool>(m["DefaultPermission"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<bool>(boost::any_cast<bool>(m["DefaultVersion"]));
    }
    if (m.find("PermissionName") != m.end() && !m["PermissionName"].empty()) {
      permissionName = make_shared<string>(boost::any_cast<string>(m["PermissionName"]));
    }
    if (m.find("PermissionVersion") != m.end() && !m["PermissionVersion"].empty()) {
      permissionVersion = make_shared<string>(boost::any_cast<string>(m["PermissionVersion"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListResourceSharePermissionsResponseBodyPermissions() = default;
};
class ListResourceSharePermissionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListResourceSharePermissionsResponseBodyPermissions>> permissions{};
  shared_ptr<string> requestId{};

  ListResourceSharePermissionsResponseBody() {}

  explicit ListResourceSharePermissionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (permissions) {
      vector<boost::any> temp1;
      for(auto item1:*permissions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Permissions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      if (typeid(vector<boost::any>) == m["Permissions"].type()) {
        vector<ListResourceSharePermissionsResponseBodyPermissions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Permissions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceSharePermissionsResponseBodyPermissions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissions = make_shared<vector<ListResourceSharePermissionsResponseBodyPermissions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListResourceSharePermissionsResponseBody() = default;
};
class ListResourceSharePermissionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceSharePermissionsResponseBody> body{};

  ListResourceSharePermissionsResponse() {}

  explicit ListResourceSharePermissionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceSharePermissionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceSharePermissionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceSharePermissionsResponse() = default;
};
class ListResourceSharesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> permissionName{};
  shared_ptr<string> resourceOwner{};
  shared_ptr<vector<string>> resourceShareIds{};
  shared_ptr<string> resourceShareName{};
  shared_ptr<string> resourceShareStatus{};

  ListResourceSharesRequest() {}

  explicit ListResourceSharesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (permissionName) {
      res["PermissionName"] = boost::any(*permissionName);
    }
    if (resourceOwner) {
      res["ResourceOwner"] = boost::any(*resourceOwner);
    }
    if (resourceShareIds) {
      res["ResourceShareIds"] = boost::any(*resourceShareIds);
    }
    if (resourceShareName) {
      res["ResourceShareName"] = boost::any(*resourceShareName);
    }
    if (resourceShareStatus) {
      res["ResourceShareStatus"] = boost::any(*resourceShareStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PermissionName") != m.end() && !m["PermissionName"].empty()) {
      permissionName = make_shared<string>(boost::any_cast<string>(m["PermissionName"]));
    }
    if (m.find("ResourceOwner") != m.end() && !m["ResourceOwner"].empty()) {
      resourceOwner = make_shared<string>(boost::any_cast<string>(m["ResourceOwner"]));
    }
    if (m.find("ResourceShareIds") != m.end() && !m["ResourceShareIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceShareIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceShareIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceShareIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceShareName") != m.end() && !m["ResourceShareName"].empty()) {
      resourceShareName = make_shared<string>(boost::any_cast<string>(m["ResourceShareName"]));
    }
    if (m.find("ResourceShareStatus") != m.end() && !m["ResourceShareStatus"].empty()) {
      resourceShareStatus = make_shared<string>(boost::any_cast<string>(m["ResourceShareStatus"]));
    }
  }


  virtual ~ListResourceSharesRequest() = default;
};
class ListResourceSharesResponseBodyResourceShares : public Darabonba::Model {
public:
  shared_ptr<bool> allowExternalTargets{};
  shared_ptr<string> createTime{};
  shared_ptr<string> resourceShareId{};
  shared_ptr<string> resourceShareName{};
  shared_ptr<string> resourceShareOwner{};
  shared_ptr<string> resourceShareStatus{};
  shared_ptr<string> updateTime{};

  ListResourceSharesResponseBodyResourceShares() {}

  explicit ListResourceSharesResponseBodyResourceShares(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowExternalTargets) {
      res["AllowExternalTargets"] = boost::any(*allowExternalTargets);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    if (resourceShareName) {
      res["ResourceShareName"] = boost::any(*resourceShareName);
    }
    if (resourceShareOwner) {
      res["ResourceShareOwner"] = boost::any(*resourceShareOwner);
    }
    if (resourceShareStatus) {
      res["ResourceShareStatus"] = boost::any(*resourceShareStatus);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowExternalTargets") != m.end() && !m["AllowExternalTargets"].empty()) {
      allowExternalTargets = make_shared<bool>(boost::any_cast<bool>(m["AllowExternalTargets"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
    if (m.find("ResourceShareName") != m.end() && !m["ResourceShareName"].empty()) {
      resourceShareName = make_shared<string>(boost::any_cast<string>(m["ResourceShareName"]));
    }
    if (m.find("ResourceShareOwner") != m.end() && !m["ResourceShareOwner"].empty()) {
      resourceShareOwner = make_shared<string>(boost::any_cast<string>(m["ResourceShareOwner"]));
    }
    if (m.find("ResourceShareStatus") != m.end() && !m["ResourceShareStatus"].empty()) {
      resourceShareStatus = make_shared<string>(boost::any_cast<string>(m["ResourceShareStatus"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListResourceSharesResponseBodyResourceShares() = default;
};
class ListResourceSharesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListResourceSharesResponseBodyResourceShares>> resourceShares{};

  ListResourceSharesResponseBody() {}

  explicit ListResourceSharesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceShares) {
      vector<boost::any> temp1;
      for(auto item1:*resourceShares){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceShares"] = boost::any(temp1);
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
    if (m.find("ResourceShares") != m.end() && !m["ResourceShares"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceShares"].type()) {
        vector<ListResourceSharesResponseBodyResourceShares> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceShares"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceSharesResponseBodyResourceShares model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceShares = make_shared<vector<ListResourceSharesResponseBodyResourceShares>>(expect1);
      }
    }
  }


  virtual ~ListResourceSharesResponseBody() = default;
};
class ListResourceSharesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceSharesResponseBody> body{};

  ListResourceSharesResponse() {}

  explicit ListResourceSharesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceSharesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceSharesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceSharesResponse() = default;
};
class ListSharedResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceOwner{};
  shared_ptr<vector<string>> resourceShareIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> target{};

  ListSharedResourcesRequest() {}

  explicit ListSharedResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceOwner) {
      res["ResourceOwner"] = boost::any(*resourceOwner);
    }
    if (resourceShareIds) {
      res["ResourceShareIds"] = boost::any(*resourceShareIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwner") != m.end() && !m["ResourceOwner"].empty()) {
      resourceOwner = make_shared<string>(boost::any_cast<string>(m["ResourceOwner"]));
    }
    if (m.find("ResourceShareIds") != m.end() && !m["ResourceShareIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceShareIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceShareIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceShareIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
  }


  virtual ~ListSharedResourcesRequest() = default;
};
class ListSharedResourcesResponseBodySharedResources : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceShareId{};
  shared_ptr<string> resourceStatus{};
  shared_ptr<string> resourceStatusMessage{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> updateTime{};

  ListSharedResourcesResponseBodySharedResources() {}

  explicit ListSharedResourcesResponseBodySharedResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
    }
    if (resourceStatusMessage) {
      res["ResourceStatusMessage"] = boost::any(*resourceStatusMessage);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<string>(boost::any_cast<string>(m["ResourceStatus"]));
    }
    if (m.find("ResourceStatusMessage") != m.end() && !m["ResourceStatusMessage"].empty()) {
      resourceStatusMessage = make_shared<string>(boost::any_cast<string>(m["ResourceStatusMessage"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListSharedResourcesResponseBodySharedResources() = default;
};
class ListSharedResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSharedResourcesResponseBodySharedResources>> sharedResources{};

  ListSharedResourcesResponseBody() {}

  explicit ListSharedResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (sharedResources) {
      vector<boost::any> temp1;
      for(auto item1:*sharedResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SharedResources"] = boost::any(temp1);
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
    if (m.find("SharedResources") != m.end() && !m["SharedResources"].empty()) {
      if (typeid(vector<boost::any>) == m["SharedResources"].type()) {
        vector<ListSharedResourcesResponseBodySharedResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SharedResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSharedResourcesResponseBodySharedResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sharedResources = make_shared<vector<ListSharedResourcesResponseBodySharedResources>>(expect1);
      }
    }
  }


  virtual ~ListSharedResourcesResponseBody() = default;
};
class ListSharedResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSharedResourcesResponseBody> body{};

  ListSharedResourcesResponse() {}

  explicit ListSharedResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSharedResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSharedResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSharedResourcesResponse() = default;
};
class ListSharedTargetsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceOwner{};
  shared_ptr<vector<string>> resourceShareIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> targets{};

  ListSharedTargetsRequest() {}

  explicit ListSharedTargetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceOwner) {
      res["ResourceOwner"] = boost::any(*resourceOwner);
    }
    if (resourceShareIds) {
      res["ResourceShareIds"] = boost::any(*resourceShareIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (targets) {
      res["Targets"] = boost::any(*targets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceOwner") != m.end() && !m["ResourceOwner"].empty()) {
      resourceOwner = make_shared<string>(boost::any_cast<string>(m["ResourceOwner"]));
    }
    if (m.find("ResourceShareIds") != m.end() && !m["ResourceShareIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceShareIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceShareIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceShareIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Targets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      targets = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListSharedTargetsRequest() = default;
};
class ListSharedTargetsResponseBodySharedTargets : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> external{};
  shared_ptr<string> resourceShareId{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetProperty{};
  shared_ptr<string> updateTime{};

  ListSharedTargetsResponseBodySharedTargets() {}

  explicit ListSharedTargetsResponseBodySharedTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (external) {
      res["External"] = boost::any(*external);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetProperty) {
      res["TargetProperty"] = boost::any(*targetProperty);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("External") != m.end() && !m["External"].empty()) {
      external = make_shared<bool>(boost::any_cast<bool>(m["External"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetProperty") != m.end() && !m["TargetProperty"].empty()) {
      targetProperty = make_shared<string>(boost::any_cast<string>(m["TargetProperty"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListSharedTargetsResponseBodySharedTargets() = default;
};
class ListSharedTargetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSharedTargetsResponseBodySharedTargets>> sharedTargets{};

  ListSharedTargetsResponseBody() {}

  explicit ListSharedTargetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (sharedTargets) {
      vector<boost::any> temp1;
      for(auto item1:*sharedTargets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SharedTargets"] = boost::any(temp1);
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
    if (m.find("SharedTargets") != m.end() && !m["SharedTargets"].empty()) {
      if (typeid(vector<boost::any>) == m["SharedTargets"].type()) {
        vector<ListSharedTargetsResponseBodySharedTargets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SharedTargets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSharedTargetsResponseBodySharedTargets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sharedTargets = make_shared<vector<ListSharedTargetsResponseBodySharedTargets>>(expect1);
      }
    }
  }


  virtual ~ListSharedTargetsResponseBody() = default;
};
class ListSharedTargetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSharedTargetsResponseBody> body{};

  ListSharedTargetsResponse() {}

  explicit ListSharedTargetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSharedTargetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSharedTargetsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSharedTargetsResponse() = default;
};
class RejectResourceShareInvitationRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceShareInvitationId{};

  RejectResourceShareInvitationRequest() {}

  explicit RejectResourceShareInvitationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceShareInvitationId) {
      res["ResourceShareInvitationId"] = boost::any(*resourceShareInvitationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceShareInvitationId") != m.end() && !m["ResourceShareInvitationId"].empty()) {
      resourceShareInvitationId = make_shared<string>(boost::any_cast<string>(m["ResourceShareInvitationId"]));
    }
  }


  virtual ~RejectResourceShareInvitationRequest() = default;
};
class RejectResourceShareInvitationResponseBodyResourceShareInvitation : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> receiverAccountId{};
  shared_ptr<string> resourceShareId{};
  shared_ptr<string> resourceShareInvitationId{};
  shared_ptr<string> resourceShareName{};
  shared_ptr<string> senderAccountId{};
  shared_ptr<string> status{};

  RejectResourceShareInvitationResponseBodyResourceShareInvitation() {}

  explicit RejectResourceShareInvitationResponseBodyResourceShareInvitation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (receiverAccountId) {
      res["ReceiverAccountId"] = boost::any(*receiverAccountId);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    if (resourceShareInvitationId) {
      res["ResourceShareInvitationId"] = boost::any(*resourceShareInvitationId);
    }
    if (resourceShareName) {
      res["ResourceShareName"] = boost::any(*resourceShareName);
    }
    if (senderAccountId) {
      res["SenderAccountId"] = boost::any(*senderAccountId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ReceiverAccountId") != m.end() && !m["ReceiverAccountId"].empty()) {
      receiverAccountId = make_shared<string>(boost::any_cast<string>(m["ReceiverAccountId"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
    if (m.find("ResourceShareInvitationId") != m.end() && !m["ResourceShareInvitationId"].empty()) {
      resourceShareInvitationId = make_shared<string>(boost::any_cast<string>(m["ResourceShareInvitationId"]));
    }
    if (m.find("ResourceShareName") != m.end() && !m["ResourceShareName"].empty()) {
      resourceShareName = make_shared<string>(boost::any_cast<string>(m["ResourceShareName"]));
    }
    if (m.find("SenderAccountId") != m.end() && !m["SenderAccountId"].empty()) {
      senderAccountId = make_shared<string>(boost::any_cast<string>(m["SenderAccountId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~RejectResourceShareInvitationResponseBodyResourceShareInvitation() = default;
};
class RejectResourceShareInvitationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RejectResourceShareInvitationResponseBodyResourceShareInvitation> resourceShareInvitation{};

  RejectResourceShareInvitationResponseBody() {}

  explicit RejectResourceShareInvitationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceShareInvitation) {
      res["ResourceShareInvitation"] = resourceShareInvitation ? boost::any(resourceShareInvitation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceShareInvitation") != m.end() && !m["ResourceShareInvitation"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceShareInvitation"].type()) {
        RejectResourceShareInvitationResponseBodyResourceShareInvitation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceShareInvitation"]));
        resourceShareInvitation = make_shared<RejectResourceShareInvitationResponseBodyResourceShareInvitation>(model1);
      }
    }
  }


  virtual ~RejectResourceShareInvitationResponseBody() = default;
};
class RejectResourceShareInvitationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RejectResourceShareInvitationResponseBody> body{};

  RejectResourceShareInvitationResponse() {}

  explicit RejectResourceShareInvitationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RejectResourceShareInvitationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RejectResourceShareInvitationResponseBody>(model1);
      }
    }
  }


  virtual ~RejectResourceShareInvitationResponse() = default;
};
class UpdateResourceShareRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allowExternalTargets{};
  shared_ptr<string> resourceShareId{};
  shared_ptr<string> resourceShareName{};

  UpdateResourceShareRequest() {}

  explicit UpdateResourceShareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowExternalTargets) {
      res["AllowExternalTargets"] = boost::any(*allowExternalTargets);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    if (resourceShareName) {
      res["ResourceShareName"] = boost::any(*resourceShareName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowExternalTargets") != m.end() && !m["AllowExternalTargets"].empty()) {
      allowExternalTargets = make_shared<bool>(boost::any_cast<bool>(m["AllowExternalTargets"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
    if (m.find("ResourceShareName") != m.end() && !m["ResourceShareName"].empty()) {
      resourceShareName = make_shared<string>(boost::any_cast<string>(m["ResourceShareName"]));
    }
  }


  virtual ~UpdateResourceShareRequest() = default;
};
class UpdateResourceShareResponseBodyResourceShare : public Darabonba::Model {
public:
  shared_ptr<bool> allowExternalTargets{};
  shared_ptr<string> createTime{};
  shared_ptr<string> resourceShareId{};
  shared_ptr<string> resourceShareName{};
  shared_ptr<string> resourceShareOwner{};
  shared_ptr<string> resourceShareStatus{};
  shared_ptr<string> updateTime{};

  UpdateResourceShareResponseBodyResourceShare() {}

  explicit UpdateResourceShareResponseBodyResourceShare(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowExternalTargets) {
      res["AllowExternalTargets"] = boost::any(*allowExternalTargets);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (resourceShareId) {
      res["ResourceShareId"] = boost::any(*resourceShareId);
    }
    if (resourceShareName) {
      res["ResourceShareName"] = boost::any(*resourceShareName);
    }
    if (resourceShareOwner) {
      res["ResourceShareOwner"] = boost::any(*resourceShareOwner);
    }
    if (resourceShareStatus) {
      res["ResourceShareStatus"] = boost::any(*resourceShareStatus);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowExternalTargets") != m.end() && !m["AllowExternalTargets"].empty()) {
      allowExternalTargets = make_shared<bool>(boost::any_cast<bool>(m["AllowExternalTargets"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ResourceShareId") != m.end() && !m["ResourceShareId"].empty()) {
      resourceShareId = make_shared<string>(boost::any_cast<string>(m["ResourceShareId"]));
    }
    if (m.find("ResourceShareName") != m.end() && !m["ResourceShareName"].empty()) {
      resourceShareName = make_shared<string>(boost::any_cast<string>(m["ResourceShareName"]));
    }
    if (m.find("ResourceShareOwner") != m.end() && !m["ResourceShareOwner"].empty()) {
      resourceShareOwner = make_shared<string>(boost::any_cast<string>(m["ResourceShareOwner"]));
    }
    if (m.find("ResourceShareStatus") != m.end() && !m["ResourceShareStatus"].empty()) {
      resourceShareStatus = make_shared<string>(boost::any_cast<string>(m["ResourceShareStatus"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~UpdateResourceShareResponseBodyResourceShare() = default;
};
class UpdateResourceShareResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateResourceShareResponseBodyResourceShare> resourceShare{};

  UpdateResourceShareResponseBody() {}

  explicit UpdateResourceShareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceShare) {
      res["ResourceShare"] = resourceShare ? boost::any(resourceShare->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceShare") != m.end() && !m["ResourceShare"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceShare"].type()) {
        UpdateResourceShareResponseBodyResourceShare model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceShare"]));
        resourceShare = make_shared<UpdateResourceShareResponseBodyResourceShare>(model1);
      }
    }
  }


  virtual ~UpdateResourceShareResponseBody() = default;
};
class UpdateResourceShareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourceShareResponseBody> body{};

  UpdateResourceShareResponse() {}

  explicit UpdateResourceShareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourceShareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceShareResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceShareResponse() = default;
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
  AcceptResourceShareInvitationResponse acceptResourceShareInvitationWithOptions(shared_ptr<AcceptResourceShareInvitationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AcceptResourceShareInvitationResponse acceptResourceShareInvitation(shared_ptr<AcceptResourceShareInvitationRequest> request);
  AssociateResourceShareResponse associateResourceShareWithOptions(shared_ptr<AssociateResourceShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateResourceShareResponse associateResourceShare(shared_ptr<AssociateResourceShareRequest> request);
  AssociateResourceSharePermissionResponse associateResourceSharePermissionWithOptions(shared_ptr<AssociateResourceSharePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateResourceSharePermissionResponse associateResourceSharePermission(shared_ptr<AssociateResourceSharePermissionRequest> request);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CheckSharingWithResourceDirectoryStatusResponse checkSharingWithResourceDirectoryStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckSharingWithResourceDirectoryStatusResponse checkSharingWithResourceDirectoryStatus();
  CreateResourceShareResponse createResourceShareWithOptions(shared_ptr<CreateResourceShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceShareResponse createResourceShare(shared_ptr<CreateResourceShareRequest> request);
  DeleteResourceShareResponse deleteResourceShareWithOptions(shared_ptr<DeleteResourceShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceShareResponse deleteResourceShare(shared_ptr<DeleteResourceShareRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DisassociateResourceShareResponse disassociateResourceShareWithOptions(shared_ptr<DisassociateResourceShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisassociateResourceShareResponse disassociateResourceShare(shared_ptr<DisassociateResourceShareRequest> request);
  DisassociateResourceSharePermissionResponse disassociateResourceSharePermissionWithOptions(shared_ptr<DisassociateResourceSharePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisassociateResourceSharePermissionResponse disassociateResourceSharePermission(shared_ptr<DisassociateResourceSharePermissionRequest> request);
  EnableSharingWithResourceDirectoryResponse enableSharingWithResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableSharingWithResourceDirectoryResponse enableSharingWithResourceDirectory();
  GetPermissionResponse getPermissionWithOptions(shared_ptr<GetPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPermissionResponse getPermission(shared_ptr<GetPermissionRequest> request);
  ListPermissionVersionsResponse listPermissionVersionsWithOptions(shared_ptr<ListPermissionVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPermissionVersionsResponse listPermissionVersions(shared_ptr<ListPermissionVersionsRequest> request);
  ListPermissionsResponse listPermissionsWithOptions(shared_ptr<ListPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPermissionsResponse listPermissions(shared_ptr<ListPermissionsRequest> request);
  ListResourceShareAssociationsResponse listResourceShareAssociationsWithOptions(shared_ptr<ListResourceShareAssociationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceShareAssociationsResponse listResourceShareAssociations(shared_ptr<ListResourceShareAssociationsRequest> request);
  ListResourceShareInvitationsResponse listResourceShareInvitationsWithOptions(shared_ptr<ListResourceShareInvitationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceShareInvitationsResponse listResourceShareInvitations(shared_ptr<ListResourceShareInvitationsRequest> request);
  ListResourceSharePermissionsResponse listResourceSharePermissionsWithOptions(shared_ptr<ListResourceSharePermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceSharePermissionsResponse listResourceSharePermissions(shared_ptr<ListResourceSharePermissionsRequest> request);
  ListResourceSharesResponse listResourceSharesWithOptions(shared_ptr<ListResourceSharesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceSharesResponse listResourceShares(shared_ptr<ListResourceSharesRequest> request);
  ListSharedResourcesResponse listSharedResourcesWithOptions(shared_ptr<ListSharedResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSharedResourcesResponse listSharedResources(shared_ptr<ListSharedResourcesRequest> request);
  ListSharedTargetsResponse listSharedTargetsWithOptions(shared_ptr<ListSharedTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSharedTargetsResponse listSharedTargets(shared_ptr<ListSharedTargetsRequest> request);
  RejectResourceShareInvitationResponse rejectResourceShareInvitationWithOptions(shared_ptr<RejectResourceShareInvitationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RejectResourceShareInvitationResponse rejectResourceShareInvitation(shared_ptr<RejectResourceShareInvitationRequest> request);
  UpdateResourceShareResponse updateResourceShareWithOptions(shared_ptr<UpdateResourceShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceShareResponse updateResourceShare(shared_ptr<UpdateResourceShareRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ResourceSharing20200110

#endif
