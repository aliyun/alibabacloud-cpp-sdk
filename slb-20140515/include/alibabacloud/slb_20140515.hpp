// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SLB20140515_H_
#define ALIBABACLOUD_SLB20140515_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Slb20140515 {
class AddAccessControlListEntryRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> aclId{};
  shared_ptr<string> aclEntrys{};

  AddAccessControlListEntryRequest() {}

  explicit AddAccessControlListEntryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclEntrys) {
      res["AclEntrys"] = boost::any(*aclEntrys);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclEntrys") != m.end() && !m["AclEntrys"].empty()) {
      aclEntrys = make_shared<string>(boost::any_cast<string>(m["AclEntrys"]));
    }
  }


  virtual ~AddAccessControlListEntryRequest() = default;
};
class AddAccessControlListEntryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddAccessControlListEntryResponseBody() {}

  explicit AddAccessControlListEntryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddAccessControlListEntryResponseBody() = default;
};
class AddAccessControlListEntryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddAccessControlListEntryResponseBody> body{};

  AddAccessControlListEntryResponse() {}

  explicit AddAccessControlListEntryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddAccessControlListEntryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddAccessControlListEntryResponseBody>(model1);
      }
    }
  }


  virtual ~AddAccessControlListEntryResponse() = default;
};
class AddBackendServersRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> backendServers{};
  shared_ptr<string> ownerAccount{};

  AddBackendServersRequest() {}

  explicit AddBackendServersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (backendServers) {
      res["BackendServers"] = boost::any(*backendServers);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      backendServers = make_shared<string>(boost::any_cast<string>(m["BackendServers"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~AddBackendServersRequest() = default;
};
class AddBackendServersResponseBodyBackendServersBackendServer : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> weight{};
  shared_ptr<string> description{};
  shared_ptr<string> serverId{};

  AddBackendServersResponseBodyBackendServersBackendServer() {}

  explicit AddBackendServersResponseBodyBackendServersBackendServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<string>(boost::any_cast<string>(m["Weight"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
  }


  virtual ~AddBackendServersResponseBodyBackendServersBackendServer() = default;
};
class AddBackendServersResponseBodyBackendServers : public Darabonba::Model {
public:
  shared_ptr<vector<AddBackendServersResponseBodyBackendServersBackendServer>> backendServer{};

  AddBackendServersResponseBodyBackendServers() {}

  explicit AddBackendServersResponseBodyBackendServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendServer) {
      vector<boost::any> temp1;
      for(auto item1:*backendServer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackendServer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendServer") != m.end() && !m["BackendServer"].empty()) {
      if (typeid(vector<boost::any>) == m["BackendServer"].type()) {
        vector<AddBackendServersResponseBodyBackendServersBackendServer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackendServer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddBackendServersResponseBodyBackendServersBackendServer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backendServer = make_shared<vector<AddBackendServersResponseBodyBackendServersBackendServer>>(expect1);
      }
    }
  }


  virtual ~AddBackendServersResponseBodyBackendServers() = default;
};
class AddBackendServersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> requestId{};
  shared_ptr<AddBackendServersResponseBodyBackendServers> backendServers{};

  AddBackendServersResponseBody() {}

  explicit AddBackendServersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (backendServers) {
      res["BackendServers"] = backendServers ? boost::any(backendServers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackendServers"].type()) {
        AddBackendServersResponseBodyBackendServers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackendServers"]));
        backendServers = make_shared<AddBackendServersResponseBodyBackendServers>(model1);
      }
    }
  }


  virtual ~AddBackendServersResponseBody() = default;
};
class AddBackendServersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddBackendServersResponseBody> body{};

  AddBackendServersResponse() {}

  explicit AddBackendServersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddBackendServersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddBackendServersResponseBody>(model1);
      }
    }
  }


  virtual ~AddBackendServersResponse() = default;
};
class AddListenerWhiteListItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> sourceItems{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> listenerProtocol{};

  AddListenerWhiteListItemRequest() {}

  explicit AddListenerWhiteListItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (sourceItems) {
      res["SourceItems"] = boost::any(*sourceItems);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("SourceItems") != m.end() && !m["SourceItems"].empty()) {
      sourceItems = make_shared<string>(boost::any_cast<string>(m["SourceItems"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
  }


  virtual ~AddListenerWhiteListItemRequest() = default;
};
class AddListenerWhiteListItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddListenerWhiteListItemResponseBody() {}

  explicit AddListenerWhiteListItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddListenerWhiteListItemResponseBody() = default;
};
class AddListenerWhiteListItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddListenerWhiteListItemResponseBody> body{};

  AddListenerWhiteListItemResponse() {}

  explicit AddListenerWhiteListItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddListenerWhiteListItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddListenerWhiteListItemResponseBody>(model1);
      }
    }
  }


  virtual ~AddListenerWhiteListItemResponse() = default;
};
class AddTagsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> tags{};

  AddTagsRequest() {}

  explicit AddTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~AddTagsRequest() = default;
};
class AddTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddTagsResponseBody() {}

  explicit AddTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddTagsResponseBody() = default;
};
class AddTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddTagsResponseBody> body{};

  AddTagsResponse() {}

  explicit AddTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddTagsResponseBody>(model1);
      }
    }
  }


  virtual ~AddTagsResponse() = default;
};
class AddVServerGroupBackendServersRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> backendServers{};

  AddVServerGroupBackendServersRequest() {}

  explicit AddVServerGroupBackendServersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (backendServers) {
      res["BackendServers"] = boost::any(*backendServers);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      backendServers = make_shared<string>(boost::any_cast<string>(m["BackendServers"]));
    }
  }


  virtual ~AddVServerGroupBackendServersRequest() = default;
};
class AddVServerGroupBackendServersResponseBodyBackendServersBackendServer : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> weight{};
  shared_ptr<string> description{};
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};

  AddVServerGroupBackendServersResponseBodyBackendServersBackendServer() {}

  explicit AddVServerGroupBackendServersResponseBodyBackendServersBackendServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
  }


  virtual ~AddVServerGroupBackendServersResponseBodyBackendServersBackendServer() = default;
};
class AddVServerGroupBackendServersResponseBodyBackendServers : public Darabonba::Model {
public:
  shared_ptr<vector<AddVServerGroupBackendServersResponseBodyBackendServersBackendServer>> backendServer{};

  AddVServerGroupBackendServersResponseBodyBackendServers() {}

  explicit AddVServerGroupBackendServersResponseBodyBackendServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendServer) {
      vector<boost::any> temp1;
      for(auto item1:*backendServer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackendServer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendServer") != m.end() && !m["BackendServer"].empty()) {
      if (typeid(vector<boost::any>) == m["BackendServer"].type()) {
        vector<AddVServerGroupBackendServersResponseBodyBackendServersBackendServer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackendServer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddVServerGroupBackendServersResponseBodyBackendServersBackendServer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backendServer = make_shared<vector<AddVServerGroupBackendServersResponseBodyBackendServersBackendServer>>(expect1);
      }
    }
  }


  virtual ~AddVServerGroupBackendServersResponseBodyBackendServers() = default;
};
class AddVServerGroupBackendServersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> requestId{};
  shared_ptr<AddVServerGroupBackendServersResponseBodyBackendServers> backendServers{};

  AddVServerGroupBackendServersResponseBody() {}

  explicit AddVServerGroupBackendServersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (backendServers) {
      res["BackendServers"] = backendServers ? boost::any(backendServers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackendServers"].type()) {
        AddVServerGroupBackendServersResponseBodyBackendServers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackendServers"]));
        backendServers = make_shared<AddVServerGroupBackendServersResponseBodyBackendServers>(model1);
      }
    }
  }


  virtual ~AddVServerGroupBackendServersResponseBody() = default;
};
class AddVServerGroupBackendServersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddVServerGroupBackendServersResponseBody> body{};

  AddVServerGroupBackendServersResponse() {}

  explicit AddVServerGroupBackendServersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddVServerGroupBackendServersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddVServerGroupBackendServersResponseBody>(model1);
      }
    }
  }


  virtual ~AddVServerGroupBackendServersResponse() = default;
};
class CreateAccessControlListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> aclName{};
  shared_ptr<string> addressIPVersion{};
  shared_ptr<string> resourceGroupId{};

  CreateAccessControlListRequest() {}

  explicit CreateAccessControlListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclName) {
      res["AclName"] = boost::any(*aclName);
    }
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclName") != m.end() && !m["AclName"].empty()) {
      aclName = make_shared<string>(boost::any_cast<string>(m["AclName"]));
    }
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~CreateAccessControlListRequest() = default;
};
class CreateAccessControlListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<string> requestId{};

  CreateAccessControlListResponseBody() {}

  explicit CreateAccessControlListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAccessControlListResponseBody() = default;
};
class CreateAccessControlListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAccessControlListResponseBody> body{};

  CreateAccessControlListResponse() {}

  explicit CreateAccessControlListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccessControlListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccessControlListResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccessControlListResponse() = default;
};
class CreateDomainExtensionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> domain{};
  shared_ptr<string> serverCertificateId{};

  CreateDomainExtensionRequest() {}

  explicit CreateDomainExtensionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (serverCertificateId) {
      res["ServerCertificateId"] = boost::any(*serverCertificateId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ServerCertificateId") != m.end() && !m["ServerCertificateId"].empty()) {
      serverCertificateId = make_shared<string>(boost::any_cast<string>(m["ServerCertificateId"]));
    }
  }


  virtual ~CreateDomainExtensionRequest() = default;
};
class CreateDomainExtensionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> listenerPort{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainExtensionId{};

  CreateDomainExtensionResponseBody() {}

  explicit CreateDomainExtensionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainExtensionId) {
      res["DomainExtensionId"] = boost::any(*domainExtensionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainExtensionId") != m.end() && !m["DomainExtensionId"].empty()) {
      domainExtensionId = make_shared<string>(boost::any_cast<string>(m["DomainExtensionId"]));
    }
  }


  virtual ~CreateDomainExtensionResponseBody() = default;
};
class CreateDomainExtensionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDomainExtensionResponseBody> body{};

  CreateDomainExtensionResponse() {}

  explicit CreateDomainExtensionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDomainExtensionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDomainExtensionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDomainExtensionResponse() = default;
};
class CreateLoadBalancerRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> addressType{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> masterZoneId{};
  shared_ptr<string> slaveZoneId{};
  shared_ptr<string> loadBalancerSpec{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> payType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<long> duration{};
  shared_ptr<bool> autoPay{};
  shared_ptr<string> addressIPVersion{};
  shared_ptr<string> address{};
  shared_ptr<string> deleteProtection{};
  shared_ptr<string> modificationProtectionStatus{};
  shared_ptr<string> modificationProtectionReason{};

  CreateLoadBalancerRequest() {}

  explicit CreateLoadBalancerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (masterZoneId) {
      res["MasterZoneId"] = boost::any(*masterZoneId);
    }
    if (slaveZoneId) {
      res["SlaveZoneId"] = boost::any(*slaveZoneId);
    }
    if (loadBalancerSpec) {
      res["LoadBalancerSpec"] = boost::any(*loadBalancerSpec);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (deleteProtection) {
      res["DeleteProtection"] = boost::any(*deleteProtection);
    }
    if (modificationProtectionStatus) {
      res["ModificationProtectionStatus"] = boost::any(*modificationProtectionStatus);
    }
    if (modificationProtectionReason) {
      res["ModificationProtectionReason"] = boost::any(*modificationProtectionReason);
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
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("MasterZoneId") != m.end() && !m["MasterZoneId"].empty()) {
      masterZoneId = make_shared<string>(boost::any_cast<string>(m["MasterZoneId"]));
    }
    if (m.find("SlaveZoneId") != m.end() && !m["SlaveZoneId"].empty()) {
      slaveZoneId = make_shared<string>(boost::any_cast<string>(m["SlaveZoneId"]));
    }
    if (m.find("LoadBalancerSpec") != m.end() && !m["LoadBalancerSpec"].empty()) {
      loadBalancerSpec = make_shared<string>(boost::any_cast<string>(m["LoadBalancerSpec"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("DeleteProtection") != m.end() && !m["DeleteProtection"].empty()) {
      deleteProtection = make_shared<string>(boost::any_cast<string>(m["DeleteProtection"]));
    }
    if (m.find("ModificationProtectionStatus") != m.end() && !m["ModificationProtectionStatus"].empty()) {
      modificationProtectionStatus = make_shared<string>(boost::any_cast<string>(m["ModificationProtectionStatus"]));
    }
    if (m.find("ModificationProtectionReason") != m.end() && !m["ModificationProtectionReason"].empty()) {
      modificationProtectionReason = make_shared<string>(boost::any_cast<string>(m["ModificationProtectionReason"]));
    }
  }


  virtual ~CreateLoadBalancerRequest() = default;
};
class CreateLoadBalancerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> addressIPVersion{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> address{};
  shared_ptr<string> networkType{};
  shared_ptr<long> orderId{};

  CreateLoadBalancerResponseBody() {}

  explicit CreateLoadBalancerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CreateLoadBalancerResponseBody() = default;
};
class CreateLoadBalancerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateLoadBalancerResponseBody> body{};

  CreateLoadBalancerResponse() {}

  explicit CreateLoadBalancerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLoadBalancerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLoadBalancerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLoadBalancerResponse() = default;
};
class CreateLoadBalancerHTTPListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> bandwidth{};
  shared_ptr<long> listenerPort{};
  shared_ptr<long> backendServerPort{};
  shared_ptr<string> XForwardedFor{};
  shared_ptr<string> scheduler{};
  shared_ptr<string> stickySession{};
  shared_ptr<string> stickySessionType{};
  shared_ptr<long> cookieTimeout{};
  shared_ptr<string> cookie{};
  shared_ptr<string> healthCheck{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<string> healthCheckURI{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckHttpCode{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> XForwardedFor_SLBIP{};
  shared_ptr<string> XForwardedFor_SLBID{};
  shared_ptr<string> XForwardedFor_proto{};
  shared_ptr<string> gzip{};
  shared_ptr<string> aclId{};
  shared_ptr<string> aclType{};
  shared_ptr<string> aclStatus{};
  shared_ptr<string> description{};
  shared_ptr<string> listenerForward{};
  shared_ptr<long> forwardPort{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<long> requestTimeout{};

  CreateLoadBalancerHTTPListenerRequest() {}

  explicit CreateLoadBalancerHTTPListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (backendServerPort) {
      res["BackendServerPort"] = boost::any(*backendServerPort);
    }
    if (XForwardedFor) {
      res["XForwardedFor"] = boost::any(*XForwardedFor);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (stickySession) {
      res["StickySession"] = boost::any(*stickySession);
    }
    if (stickySessionType) {
      res["StickySessionType"] = boost::any(*stickySessionType);
    }
    if (cookieTimeout) {
      res["CookieTimeout"] = boost::any(*cookieTimeout);
    }
    if (cookie) {
      res["Cookie"] = boost::any(*cookie);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (healthCheckURI) {
      res["HealthCheckURI"] = boost::any(*healthCheckURI);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (XForwardedFor_SLBIP) {
      res["XForwardedFor_SLBIP"] = boost::any(*XForwardedFor_SLBIP);
    }
    if (XForwardedFor_SLBID) {
      res["XForwardedFor_SLBID"] = boost::any(*XForwardedFor_SLBID);
    }
    if (XForwardedFor_proto) {
      res["XForwardedFor_proto"] = boost::any(*XForwardedFor_proto);
    }
    if (gzip) {
      res["Gzip"] = boost::any(*gzip);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (listenerForward) {
      res["ListenerForward"] = boost::any(*listenerForward);
    }
    if (forwardPort) {
      res["ForwardPort"] = boost::any(*forwardPort);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (requestTimeout) {
      res["RequestTimeout"] = boost::any(*requestTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("BackendServerPort") != m.end() && !m["BackendServerPort"].empty()) {
      backendServerPort = make_shared<long>(boost::any_cast<long>(m["BackendServerPort"]));
    }
    if (m.find("XForwardedFor") != m.end() && !m["XForwardedFor"].empty()) {
      XForwardedFor = make_shared<string>(boost::any_cast<string>(m["XForwardedFor"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("StickySession") != m.end() && !m["StickySession"].empty()) {
      stickySession = make_shared<string>(boost::any_cast<string>(m["StickySession"]));
    }
    if (m.find("StickySessionType") != m.end() && !m["StickySessionType"].empty()) {
      stickySessionType = make_shared<string>(boost::any_cast<string>(m["StickySessionType"]));
    }
    if (m.find("CookieTimeout") != m.end() && !m["CookieTimeout"].empty()) {
      cookieTimeout = make_shared<long>(boost::any_cast<long>(m["CookieTimeout"]));
    }
    if (m.find("Cookie") != m.end() && !m["Cookie"].empty()) {
      cookie = make_shared<string>(boost::any_cast<string>(m["Cookie"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("HealthCheckURI") != m.end() && !m["HealthCheckURI"].empty()) {
      healthCheckURI = make_shared<string>(boost::any_cast<string>(m["HealthCheckURI"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      healthCheckHttpCode = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpCode"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("XForwardedFor_SLBIP") != m.end() && !m["XForwardedFor_SLBIP"].empty()) {
      XForwardedFor_SLBIP = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBIP"]));
    }
    if (m.find("XForwardedFor_SLBID") != m.end() && !m["XForwardedFor_SLBID"].empty()) {
      XForwardedFor_SLBID = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBID"]));
    }
    if (m.find("XForwardedFor_proto") != m.end() && !m["XForwardedFor_proto"].empty()) {
      XForwardedFor_proto = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_proto"]));
    }
    if (m.find("Gzip") != m.end() && !m["Gzip"].empty()) {
      gzip = make_shared<string>(boost::any_cast<string>(m["Gzip"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ListenerForward") != m.end() && !m["ListenerForward"].empty()) {
      listenerForward = make_shared<string>(boost::any_cast<string>(m["ListenerForward"]));
    }
    if (m.find("ForwardPort") != m.end() && !m["ForwardPort"].empty()) {
      forwardPort = make_shared<long>(boost::any_cast<long>(m["ForwardPort"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("RequestTimeout") != m.end() && !m["RequestTimeout"].empty()) {
      requestTimeout = make_shared<long>(boost::any_cast<long>(m["RequestTimeout"]));
    }
  }


  virtual ~CreateLoadBalancerHTTPListenerRequest() = default;
};
class CreateLoadBalancerHTTPListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateLoadBalancerHTTPListenerResponseBody() {}

  explicit CreateLoadBalancerHTTPListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateLoadBalancerHTTPListenerResponseBody() = default;
};
class CreateLoadBalancerHTTPListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateLoadBalancerHTTPListenerResponseBody> body{};

  CreateLoadBalancerHTTPListenerResponse() {}

  explicit CreateLoadBalancerHTTPListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLoadBalancerHTTPListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLoadBalancerHTTPListenerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLoadBalancerHTTPListenerResponse() = default;
};
class CreateLoadBalancerHTTPSListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> bandwidth{};
  shared_ptr<long> listenerPort{};
  shared_ptr<long> backendServerPort{};
  shared_ptr<string> XForwardedFor{};
  shared_ptr<string> scheduler{};
  shared_ptr<string> stickySession{};
  shared_ptr<string> stickySessionType{};
  shared_ptr<long> cookieTimeout{};
  shared_ptr<string> cookie{};
  shared_ptr<string> healthCheck{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<string> healthCheckURI{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckHttpCode{};
  shared_ptr<string> serverCertificateId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> CACertificateId{};
  shared_ptr<string> XForwardedFor_SLBIP{};
  shared_ptr<string> XForwardedFor_SLBID{};
  shared_ptr<string> XForwardedFor_proto{};
  shared_ptr<string> gzip{};
  shared_ptr<string> aclId{};
  shared_ptr<string> aclType{};
  shared_ptr<string> aclStatus{};
  shared_ptr<string> description{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<long> requestTimeout{};
  shared_ptr<string> enableHttp2{};
  shared_ptr<string> TLSCipherPolicy{};

  CreateLoadBalancerHTTPSListenerRequest() {}

  explicit CreateLoadBalancerHTTPSListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (backendServerPort) {
      res["BackendServerPort"] = boost::any(*backendServerPort);
    }
    if (XForwardedFor) {
      res["XForwardedFor"] = boost::any(*XForwardedFor);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (stickySession) {
      res["StickySession"] = boost::any(*stickySession);
    }
    if (stickySessionType) {
      res["StickySessionType"] = boost::any(*stickySessionType);
    }
    if (cookieTimeout) {
      res["CookieTimeout"] = boost::any(*cookieTimeout);
    }
    if (cookie) {
      res["Cookie"] = boost::any(*cookie);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (healthCheckURI) {
      res["HealthCheckURI"] = boost::any(*healthCheckURI);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (serverCertificateId) {
      res["ServerCertificateId"] = boost::any(*serverCertificateId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (CACertificateId) {
      res["CACertificateId"] = boost::any(*CACertificateId);
    }
    if (XForwardedFor_SLBIP) {
      res["XForwardedFor_SLBIP"] = boost::any(*XForwardedFor_SLBIP);
    }
    if (XForwardedFor_SLBID) {
      res["XForwardedFor_SLBID"] = boost::any(*XForwardedFor_SLBID);
    }
    if (XForwardedFor_proto) {
      res["XForwardedFor_proto"] = boost::any(*XForwardedFor_proto);
    }
    if (gzip) {
      res["Gzip"] = boost::any(*gzip);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (requestTimeout) {
      res["RequestTimeout"] = boost::any(*requestTimeout);
    }
    if (enableHttp2) {
      res["EnableHttp2"] = boost::any(*enableHttp2);
    }
    if (TLSCipherPolicy) {
      res["TLSCipherPolicy"] = boost::any(*TLSCipherPolicy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("BackendServerPort") != m.end() && !m["BackendServerPort"].empty()) {
      backendServerPort = make_shared<long>(boost::any_cast<long>(m["BackendServerPort"]));
    }
    if (m.find("XForwardedFor") != m.end() && !m["XForwardedFor"].empty()) {
      XForwardedFor = make_shared<string>(boost::any_cast<string>(m["XForwardedFor"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("StickySession") != m.end() && !m["StickySession"].empty()) {
      stickySession = make_shared<string>(boost::any_cast<string>(m["StickySession"]));
    }
    if (m.find("StickySessionType") != m.end() && !m["StickySessionType"].empty()) {
      stickySessionType = make_shared<string>(boost::any_cast<string>(m["StickySessionType"]));
    }
    if (m.find("CookieTimeout") != m.end() && !m["CookieTimeout"].empty()) {
      cookieTimeout = make_shared<long>(boost::any_cast<long>(m["CookieTimeout"]));
    }
    if (m.find("Cookie") != m.end() && !m["Cookie"].empty()) {
      cookie = make_shared<string>(boost::any_cast<string>(m["Cookie"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("HealthCheckURI") != m.end() && !m["HealthCheckURI"].empty()) {
      healthCheckURI = make_shared<string>(boost::any_cast<string>(m["HealthCheckURI"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      healthCheckHttpCode = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpCode"]));
    }
    if (m.find("ServerCertificateId") != m.end() && !m["ServerCertificateId"].empty()) {
      serverCertificateId = make_shared<string>(boost::any_cast<string>(m["ServerCertificateId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("CACertificateId") != m.end() && !m["CACertificateId"].empty()) {
      CACertificateId = make_shared<string>(boost::any_cast<string>(m["CACertificateId"]));
    }
    if (m.find("XForwardedFor_SLBIP") != m.end() && !m["XForwardedFor_SLBIP"].empty()) {
      XForwardedFor_SLBIP = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBIP"]));
    }
    if (m.find("XForwardedFor_SLBID") != m.end() && !m["XForwardedFor_SLBID"].empty()) {
      XForwardedFor_SLBID = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBID"]));
    }
    if (m.find("XForwardedFor_proto") != m.end() && !m["XForwardedFor_proto"].empty()) {
      XForwardedFor_proto = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_proto"]));
    }
    if (m.find("Gzip") != m.end() && !m["Gzip"].empty()) {
      gzip = make_shared<string>(boost::any_cast<string>(m["Gzip"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("RequestTimeout") != m.end() && !m["RequestTimeout"].empty()) {
      requestTimeout = make_shared<long>(boost::any_cast<long>(m["RequestTimeout"]));
    }
    if (m.find("EnableHttp2") != m.end() && !m["EnableHttp2"].empty()) {
      enableHttp2 = make_shared<string>(boost::any_cast<string>(m["EnableHttp2"]));
    }
    if (m.find("TLSCipherPolicy") != m.end() && !m["TLSCipherPolicy"].empty()) {
      TLSCipherPolicy = make_shared<string>(boost::any_cast<string>(m["TLSCipherPolicy"]));
    }
  }


  virtual ~CreateLoadBalancerHTTPSListenerRequest() = default;
};
class CreateLoadBalancerHTTPSListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateLoadBalancerHTTPSListenerResponseBody() {}

  explicit CreateLoadBalancerHTTPSListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateLoadBalancerHTTPSListenerResponseBody() = default;
};
class CreateLoadBalancerHTTPSListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateLoadBalancerHTTPSListenerResponseBody> body{};

  CreateLoadBalancerHTTPSListenerResponse() {}

  explicit CreateLoadBalancerHTTPSListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLoadBalancerHTTPSListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLoadBalancerHTTPSListenerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLoadBalancerHTTPSListenerResponse() = default;
};
class CreateLoadBalancerTCPListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<long> backendServerPort{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> scheduler{};
  shared_ptr<long> persistenceTimeout{};
  shared_ptr<long> establishedTimeout{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<long> healthCheckConnectTimeout{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<string> healthCheckURI{};
  shared_ptr<string> healthCheckHttpCode{};
  shared_ptr<string> healthCheckType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> masterSlaveServerGroupId{};
  shared_ptr<string> aclId{};
  shared_ptr<string> aclType{};
  shared_ptr<string> aclStatus{};
  shared_ptr<string> description{};
  shared_ptr<string> connectionDrain{};
  shared_ptr<long> connectionDrainTimeout{};

  CreateLoadBalancerTCPListenerRequest() {}

  explicit CreateLoadBalancerTCPListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (backendServerPort) {
      res["BackendServerPort"] = boost::any(*backendServerPort);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (persistenceTimeout) {
      res["PersistenceTimeout"] = boost::any(*persistenceTimeout);
    }
    if (establishedTimeout) {
      res["EstablishedTimeout"] = boost::any(*establishedTimeout);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (healthCheckConnectTimeout) {
      res["HealthCheckConnectTimeout"] = boost::any(*healthCheckConnectTimeout);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckInterval) {
      res["healthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (healthCheckURI) {
      res["HealthCheckURI"] = boost::any(*healthCheckURI);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (healthCheckType) {
      res["HealthCheckType"] = boost::any(*healthCheckType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (masterSlaveServerGroupId) {
      res["MasterSlaveServerGroupId"] = boost::any(*masterSlaveServerGroupId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (connectionDrain) {
      res["ConnectionDrain"] = boost::any(*connectionDrain);
    }
    if (connectionDrainTimeout) {
      res["ConnectionDrainTimeout"] = boost::any(*connectionDrainTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("BackendServerPort") != m.end() && !m["BackendServerPort"].empty()) {
      backendServerPort = make_shared<long>(boost::any_cast<long>(m["BackendServerPort"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("PersistenceTimeout") != m.end() && !m["PersistenceTimeout"].empty()) {
      persistenceTimeout = make_shared<long>(boost::any_cast<long>(m["PersistenceTimeout"]));
    }
    if (m.find("EstablishedTimeout") != m.end() && !m["EstablishedTimeout"].empty()) {
      establishedTimeout = make_shared<long>(boost::any_cast<long>(m["EstablishedTimeout"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("HealthCheckConnectTimeout") != m.end() && !m["HealthCheckConnectTimeout"].empty()) {
      healthCheckConnectTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectTimeout"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("healthCheckInterval") != m.end() && !m["healthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["healthCheckInterval"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("HealthCheckURI") != m.end() && !m["HealthCheckURI"].empty()) {
      healthCheckURI = make_shared<string>(boost::any_cast<string>(m["HealthCheckURI"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      healthCheckHttpCode = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpCode"]));
    }
    if (m.find("HealthCheckType") != m.end() && !m["HealthCheckType"].empty()) {
      healthCheckType = make_shared<string>(boost::any_cast<string>(m["HealthCheckType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("MasterSlaveServerGroupId") != m.end() && !m["MasterSlaveServerGroupId"].empty()) {
      masterSlaveServerGroupId = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ConnectionDrain") != m.end() && !m["ConnectionDrain"].empty()) {
      connectionDrain = make_shared<string>(boost::any_cast<string>(m["ConnectionDrain"]));
    }
    if (m.find("ConnectionDrainTimeout") != m.end() && !m["ConnectionDrainTimeout"].empty()) {
      connectionDrainTimeout = make_shared<long>(boost::any_cast<long>(m["ConnectionDrainTimeout"]));
    }
  }


  virtual ~CreateLoadBalancerTCPListenerRequest() = default;
};
class CreateLoadBalancerTCPListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateLoadBalancerTCPListenerResponseBody() {}

  explicit CreateLoadBalancerTCPListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateLoadBalancerTCPListenerResponseBody() = default;
};
class CreateLoadBalancerTCPListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateLoadBalancerTCPListenerResponseBody> body{};

  CreateLoadBalancerTCPListenerResponse() {}

  explicit CreateLoadBalancerTCPListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLoadBalancerTCPListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLoadBalancerTCPListenerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLoadBalancerTCPListenerResponse() = default;
};
class CreateLoadBalancerUDPListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<long> backendServerPort{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> scheduler{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<long> healthCheckConnectTimeout{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckReq{};
  shared_ptr<string> healthCheckExp{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> masterSlaveServerGroupId{};
  shared_ptr<string> aclId{};
  shared_ptr<string> aclType{};
  shared_ptr<string> aclStatus{};
  shared_ptr<string> description{};

  CreateLoadBalancerUDPListenerRequest() {}

  explicit CreateLoadBalancerUDPListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (backendServerPort) {
      res["BackendServerPort"] = boost::any(*backendServerPort);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (healthCheckConnectTimeout) {
      res["HealthCheckConnectTimeout"] = boost::any(*healthCheckConnectTimeout);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckInterval) {
      res["healthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckReq) {
      res["healthCheckReq"] = boost::any(*healthCheckReq);
    }
    if (healthCheckExp) {
      res["healthCheckExp"] = boost::any(*healthCheckExp);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (masterSlaveServerGroupId) {
      res["MasterSlaveServerGroupId"] = boost::any(*masterSlaveServerGroupId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("BackendServerPort") != m.end() && !m["BackendServerPort"].empty()) {
      backendServerPort = make_shared<long>(boost::any_cast<long>(m["BackendServerPort"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("HealthCheckConnectTimeout") != m.end() && !m["HealthCheckConnectTimeout"].empty()) {
      healthCheckConnectTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectTimeout"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("healthCheckInterval") != m.end() && !m["healthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["healthCheckInterval"]));
    }
    if (m.find("healthCheckReq") != m.end() && !m["healthCheckReq"].empty()) {
      healthCheckReq = make_shared<string>(boost::any_cast<string>(m["healthCheckReq"]));
    }
    if (m.find("healthCheckExp") != m.end() && !m["healthCheckExp"].empty()) {
      healthCheckExp = make_shared<string>(boost::any_cast<string>(m["healthCheckExp"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("MasterSlaveServerGroupId") != m.end() && !m["MasterSlaveServerGroupId"].empty()) {
      masterSlaveServerGroupId = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~CreateLoadBalancerUDPListenerRequest() = default;
};
class CreateLoadBalancerUDPListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateLoadBalancerUDPListenerResponseBody() {}

  explicit CreateLoadBalancerUDPListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateLoadBalancerUDPListenerResponseBody() = default;
};
class CreateLoadBalancerUDPListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateLoadBalancerUDPListenerResponseBody> body{};

  CreateLoadBalancerUDPListenerResponse() {}

  explicit CreateLoadBalancerUDPListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLoadBalancerUDPListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLoadBalancerUDPListenerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLoadBalancerUDPListenerResponse() = default;
};
class CreateMasterSlaveServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> masterSlaveServerGroupName{};
  shared_ptr<string> masterSlaveBackendServers{};

  CreateMasterSlaveServerGroupRequest() {}

  explicit CreateMasterSlaveServerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (masterSlaveServerGroupName) {
      res["MasterSlaveServerGroupName"] = boost::any(*masterSlaveServerGroupName);
    }
    if (masterSlaveBackendServers) {
      res["MasterSlaveBackendServers"] = boost::any(*masterSlaveBackendServers);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("MasterSlaveServerGroupName") != m.end() && !m["MasterSlaveServerGroupName"].empty()) {
      masterSlaveServerGroupName = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupName"]));
    }
    if (m.find("MasterSlaveBackendServers") != m.end() && !m["MasterSlaveBackendServers"].empty()) {
      masterSlaveBackendServers = make_shared<string>(boost::any_cast<string>(m["MasterSlaveBackendServers"]));
    }
  }


  virtual ~CreateMasterSlaveServerGroupRequest() = default;
};
class CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> weight{};
  shared_ptr<string> description{};
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverType{};

  CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer() {}

  explicit CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
  }


  virtual ~CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer() = default;
};
class CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers : public Darabonba::Model {
public:
  shared_ptr<vector<CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer>> masterSlaveBackendServer{};

  CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers() {}

  explicit CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (masterSlaveBackendServer) {
      vector<boost::any> temp1;
      for(auto item1:*masterSlaveBackendServer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MasterSlaveBackendServer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MasterSlaveBackendServer") != m.end() && !m["MasterSlaveBackendServer"].empty()) {
      if (typeid(vector<boost::any>) == m["MasterSlaveBackendServer"].type()) {
        vector<CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MasterSlaveBackendServer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        masterSlaveBackendServer = make_shared<vector<CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer>>(expect1);
      }
    }
  }


  virtual ~CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers() = default;
};
class CreateMasterSlaveServerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> masterSlaveServerGroupId{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers> masterSlaveBackendServers{};

  CreateMasterSlaveServerGroupResponseBody() {}

  explicit CreateMasterSlaveServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (masterSlaveServerGroupId) {
      res["MasterSlaveServerGroupId"] = boost::any(*masterSlaveServerGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (masterSlaveBackendServers) {
      res["MasterSlaveBackendServers"] = masterSlaveBackendServers ? boost::any(masterSlaveBackendServers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MasterSlaveServerGroupId") != m.end() && !m["MasterSlaveServerGroupId"].empty()) {
      masterSlaveServerGroupId = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("MasterSlaveBackendServers") != m.end() && !m["MasterSlaveBackendServers"].empty()) {
      if (typeid(map<string, boost::any>) == m["MasterSlaveBackendServers"].type()) {
        CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MasterSlaveBackendServers"]));
        masterSlaveBackendServers = make_shared<CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers>(model1);
      }
    }
  }


  virtual ~CreateMasterSlaveServerGroupResponseBody() = default;
};
class CreateMasterSlaveServerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateMasterSlaveServerGroupResponseBody> body{};

  CreateMasterSlaveServerGroupResponse() {}

  explicit CreateMasterSlaveServerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMasterSlaveServerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMasterSlaveServerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMasterSlaveServerGroupResponse() = default;
};
class CreateRulesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> ruleList{};

  CreateRulesRequest() {}

  explicit CreateRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (ruleList) {
      res["RuleList"] = boost::any(*ruleList);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("RuleList") != m.end() && !m["RuleList"].empty()) {
      ruleList = make_shared<string>(boost::any_cast<string>(m["RuleList"]));
    }
  }


  virtual ~CreateRulesRequest() = default;
};
class CreateRulesResponseBodyRulesRule : public Darabonba::Model {
public:
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleId{};

  CreateRulesResponseBodyRulesRule() {}

  explicit CreateRulesResponseBodyRulesRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~CreateRulesResponseBodyRulesRule() = default;
};
class CreateRulesResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<vector<CreateRulesResponseBodyRulesRule>> rule{};

  CreateRulesResponseBodyRules() {}

  explicit CreateRulesResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<CreateRulesResponseBodyRulesRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRulesResponseBodyRulesRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<CreateRulesResponseBodyRulesRule>>(expect1);
      }
    }
  }


  virtual ~CreateRulesResponseBodyRules() = default;
};
class CreateRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateRulesResponseBodyRules> rules{};

  CreateRulesResponseBody() {}

  explicit CreateRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        CreateRulesResponseBodyRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<CreateRulesResponseBodyRules>(model1);
      }
    }
  }


  virtual ~CreateRulesResponseBody() = default;
};
class CreateRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRulesResponseBody> body{};

  CreateRulesResponse() {}

  explicit CreateRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRulesResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRulesResponse() = default;
};
class CreateTLSCipherPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> ciphers{};
  shared_ptr<vector<string>> TLSVersions{};

  CreateTLSCipherPolicyRequest() {}

  explicit CreateTLSCipherPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (accessKeyId) {
      res["access_key_id"] = boost::any(*accessKeyId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ciphers) {
      res["Ciphers"] = boost::any(*ciphers);
    }
    if (TLSVersions) {
      res["TLSVersions"] = boost::any(*TLSVersions);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("access_key_id") != m.end() && !m["access_key_id"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["access_key_id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Ciphers") != m.end() && !m["Ciphers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ciphers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ciphers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ciphers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TLSVersions") != m.end() && !m["TLSVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TLSVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TLSVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      TLSVersions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateTLSCipherPolicyRequest() = default;
};
class CreateTLSCipherPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> TLSCipherPolicyId{};
  shared_ptr<string> requestId{};

  CreateTLSCipherPolicyResponseBody() {}

  explicit CreateTLSCipherPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (TLSCipherPolicyId) {
      res["TLSCipherPolicyId"] = boost::any(*TLSCipherPolicyId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TLSCipherPolicyId") != m.end() && !m["TLSCipherPolicyId"].empty()) {
      TLSCipherPolicyId = make_shared<string>(boost::any_cast<string>(m["TLSCipherPolicyId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateTLSCipherPolicyResponseBody() = default;
};
class CreateTLSCipherPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTLSCipherPolicyResponseBody> body{};

  CreateTLSCipherPolicyResponse() {}

  explicit CreateTLSCipherPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTLSCipherPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTLSCipherPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTLSCipherPolicyResponse() = default;
};
class CreateVServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> VServerGroupName{};
  shared_ptr<string> backendServers{};

  CreateVServerGroupRequest() {}

  explicit CreateVServerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (VServerGroupName) {
      res["VServerGroupName"] = boost::any(*VServerGroupName);
    }
    if (backendServers) {
      res["BackendServers"] = boost::any(*backendServers);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("VServerGroupName") != m.end() && !m["VServerGroupName"].empty()) {
      VServerGroupName = make_shared<string>(boost::any_cast<string>(m["VServerGroupName"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      backendServers = make_shared<string>(boost::any_cast<string>(m["BackendServers"]));
    }
  }


  virtual ~CreateVServerGroupRequest() = default;
};
class CreateVServerGroupResponseBodyBackendServersBackendServer : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> weight{};
  shared_ptr<string> description{};
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};

  CreateVServerGroupResponseBodyBackendServersBackendServer() {}

  explicit CreateVServerGroupResponseBodyBackendServersBackendServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
  }


  virtual ~CreateVServerGroupResponseBodyBackendServersBackendServer() = default;
};
class CreateVServerGroupResponseBodyBackendServers : public Darabonba::Model {
public:
  shared_ptr<vector<CreateVServerGroupResponseBodyBackendServersBackendServer>> backendServer{};

  CreateVServerGroupResponseBodyBackendServers() {}

  explicit CreateVServerGroupResponseBodyBackendServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendServer) {
      vector<boost::any> temp1;
      for(auto item1:*backendServer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackendServer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendServer") != m.end() && !m["BackendServer"].empty()) {
      if (typeid(vector<boost::any>) == m["BackendServer"].type()) {
        vector<CreateVServerGroupResponseBodyBackendServersBackendServer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackendServer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateVServerGroupResponseBodyBackendServersBackendServer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backendServer = make_shared<vector<CreateVServerGroupResponseBodyBackendServersBackendServer>>(expect1);
      }
    }
  }


  virtual ~CreateVServerGroupResponseBodyBackendServers() = default;
};
class CreateVServerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateVServerGroupResponseBodyBackendServers> backendServers{};

  CreateVServerGroupResponseBody() {}

  explicit CreateVServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (backendServers) {
      res["BackendServers"] = backendServers ? boost::any(backendServers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackendServers"].type()) {
        CreateVServerGroupResponseBodyBackendServers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackendServers"]));
        backendServers = make_shared<CreateVServerGroupResponseBodyBackendServers>(model1);
      }
    }
  }


  virtual ~CreateVServerGroupResponseBody() = default;
};
class CreateVServerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateVServerGroupResponseBody> body{};

  CreateVServerGroupResponse() {}

  explicit CreateVServerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVServerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVServerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVServerGroupResponse() = default;
};
class DeleteAccessControlListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> aclId{};

  DeleteAccessControlListRequest() {}

  explicit DeleteAccessControlListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
  }


  virtual ~DeleteAccessControlListRequest() = default;
};
class DeleteAccessControlListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAccessControlListResponseBody() {}

  explicit DeleteAccessControlListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAccessControlListResponseBody() = default;
};
class DeleteAccessControlListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAccessControlListResponseBody> body{};

  DeleteAccessControlListResponse() {}

  explicit DeleteAccessControlListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccessControlListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccessControlListResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccessControlListResponse() = default;
};
class DeleteCACertificateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> CACertificateId{};

  DeleteCACertificateRequest() {}

  explicit DeleteCACertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (CACertificateId) {
      res["CACertificateId"] = boost::any(*CACertificateId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("CACertificateId") != m.end() && !m["CACertificateId"].empty()) {
      CACertificateId = make_shared<string>(boost::any_cast<string>(m["CACertificateId"]));
    }
  }


  virtual ~DeleteCACertificateRequest() = default;
};
class DeleteCACertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCACertificateResponseBody() {}

  explicit DeleteCACertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteCACertificateResponseBody() = default;
};
class DeleteCACertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCACertificateResponseBody> body{};

  DeleteCACertificateResponse() {}

  explicit DeleteCACertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCACertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCACertificateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCACertificateResponse() = default;
};
class DeleteDomainExtensionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> domainExtensionId{};

  DeleteDomainExtensionRequest() {}

  explicit DeleteDomainExtensionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (domainExtensionId) {
      res["DomainExtensionId"] = boost::any(*domainExtensionId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DomainExtensionId") != m.end() && !m["DomainExtensionId"].empty()) {
      domainExtensionId = make_shared<string>(boost::any_cast<string>(m["DomainExtensionId"]));
    }
  }


  virtual ~DeleteDomainExtensionRequest() = default;
};
class DeleteDomainExtensionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDomainExtensionResponseBody() {}

  explicit DeleteDomainExtensionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDomainExtensionResponseBody() = default;
};
class DeleteDomainExtensionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDomainExtensionResponseBody> body{};

  DeleteDomainExtensionResponse() {}

  explicit DeleteDomainExtensionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDomainExtensionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDomainExtensionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDomainExtensionResponse() = default;
};
class DeleteLoadBalancerRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> ownerAccount{};

  DeleteLoadBalancerRequest() {}

  explicit DeleteLoadBalancerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DeleteLoadBalancerRequest() = default;
};
class DeleteLoadBalancerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLoadBalancerResponseBody() {}

  explicit DeleteLoadBalancerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLoadBalancerResponseBody() = default;
};
class DeleteLoadBalancerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteLoadBalancerResponseBody> body{};

  DeleteLoadBalancerResponse() {}

  explicit DeleteLoadBalancerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLoadBalancerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLoadBalancerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLoadBalancerResponse() = default;
};
class DeleteLoadBalancerListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> ownerAccount{};

  DeleteLoadBalancerListenerRequest() {}

  explicit DeleteLoadBalancerListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DeleteLoadBalancerListenerRequest() = default;
};
class DeleteLoadBalancerListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLoadBalancerListenerResponseBody() {}

  explicit DeleteLoadBalancerListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLoadBalancerListenerResponseBody() = default;
};
class DeleteLoadBalancerListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteLoadBalancerListenerResponseBody> body{};

  DeleteLoadBalancerListenerResponse() {}

  explicit DeleteLoadBalancerListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLoadBalancerListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLoadBalancerListenerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLoadBalancerListenerResponse() = default;
};
class DeleteMasterSlaveServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> masterSlaveServerGroupId{};

  DeleteMasterSlaveServerGroupRequest() {}

  explicit DeleteMasterSlaveServerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (masterSlaveServerGroupId) {
      res["MasterSlaveServerGroupId"] = boost::any(*masterSlaveServerGroupId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("MasterSlaveServerGroupId") != m.end() && !m["MasterSlaveServerGroupId"].empty()) {
      masterSlaveServerGroupId = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupId"]));
    }
  }


  virtual ~DeleteMasterSlaveServerGroupRequest() = default;
};
class DeleteMasterSlaveServerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteMasterSlaveServerGroupResponseBody() {}

  explicit DeleteMasterSlaveServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteMasterSlaveServerGroupResponseBody() = default;
};
class DeleteMasterSlaveServerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteMasterSlaveServerGroupResponseBody> body{};

  DeleteMasterSlaveServerGroupResponse() {}

  explicit DeleteMasterSlaveServerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMasterSlaveServerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMasterSlaveServerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMasterSlaveServerGroupResponse() = default;
};
class DeleteRulesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> ruleIds{};

  DeleteRulesRequest() {}

  explicit DeleteRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ruleIds) {
      res["RuleIds"] = boost::any(*ruleIds);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RuleIds") != m.end() && !m["RuleIds"].empty()) {
      ruleIds = make_shared<string>(boost::any_cast<string>(m["RuleIds"]));
    }
  }


  virtual ~DeleteRulesRequest() = default;
};
class DeleteRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRulesResponseBody() {}

  explicit DeleteRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteRulesResponseBody() = default;
};
class DeleteRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRulesResponseBody> body{};

  DeleteRulesResponse() {}

  explicit DeleteRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRulesResponse() = default;
};
class DeleteServerCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serverCertificateId{};
  shared_ptr<string> ownerAccount{};

  DeleteServerCertificateRequest() {}

  explicit DeleteServerCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serverCertificateId) {
      res["ServerCertificateId"] = boost::any(*serverCertificateId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (m.find("ServerCertificateId") != m.end() && !m["ServerCertificateId"].empty()) {
      serverCertificateId = make_shared<string>(boost::any_cast<string>(m["ServerCertificateId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DeleteServerCertificateRequest() = default;
};
class DeleteServerCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServerCertificateResponseBody() {}

  explicit DeleteServerCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteServerCertificateResponseBody() = default;
};
class DeleteServerCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteServerCertificateResponseBody> body{};

  DeleteServerCertificateResponse() {}

  explicit DeleteServerCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteServerCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServerCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServerCertificateResponse() = default;
};
class DeleteTLSCipherPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> TLSCipherPolicyId{};

  DeleteTLSCipherPolicyRequest() {}

  explicit DeleteTLSCipherPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (accessKeyId) {
      res["access_key_id"] = boost::any(*accessKeyId);
    }
    if (TLSCipherPolicyId) {
      res["TLSCipherPolicyId"] = boost::any(*TLSCipherPolicyId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("access_key_id") != m.end() && !m["access_key_id"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["access_key_id"]));
    }
    if (m.find("TLSCipherPolicyId") != m.end() && !m["TLSCipherPolicyId"].empty()) {
      TLSCipherPolicyId = make_shared<string>(boost::any_cast<string>(m["TLSCipherPolicyId"]));
    }
  }


  virtual ~DeleteTLSCipherPolicyRequest() = default;
};
class DeleteTLSCipherPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTLSCipherPolicyResponseBody() {}

  explicit DeleteTLSCipherPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTLSCipherPolicyResponseBody() = default;
};
class DeleteTLSCipherPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteTLSCipherPolicyResponseBody> body{};

  DeleteTLSCipherPolicyResponse() {}

  explicit DeleteTLSCipherPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTLSCipherPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTLSCipherPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTLSCipherPolicyResponse() = default;
};
class DeleteVServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> VServerGroupId{};

  DeleteVServerGroupRequest() {}

  explicit DeleteVServerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
  }


  virtual ~DeleteVServerGroupRequest() = default;
};
class DeleteVServerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVServerGroupResponseBody() {}

  explicit DeleteVServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVServerGroupResponseBody() = default;
};
class DeleteVServerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteVServerGroupResponseBody> body{};

  DeleteVServerGroupResponse() {}

  explicit DeleteVServerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVServerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVServerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVServerGroupResponse() = default;
};
class DescribeAccessControlListAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> aclId{};
  shared_ptr<string> aclEntryComment{};

  DescribeAccessControlListAttributeRequest() {}

  explicit DescribeAccessControlListAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclEntryComment) {
      res["AclEntryComment"] = boost::any(*aclEntryComment);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclEntryComment") != m.end() && !m["AclEntryComment"].empty()) {
      aclEntryComment = make_shared<string>(boost::any_cast<string>(m["AclEntryComment"]));
    }
  }


  virtual ~DescribeAccessControlListAttributeRequest() = default;
};
class DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry : public Darabonba::Model {
public:
  shared_ptr<string> aclEntryComment{};
  shared_ptr<string> aclEntryIP{};

  DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry() {}

  explicit DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclEntryComment) {
      res["AclEntryComment"] = boost::any(*aclEntryComment);
    }
    if (aclEntryIP) {
      res["AclEntryIP"] = boost::any(*aclEntryIP);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclEntryComment") != m.end() && !m["AclEntryComment"].empty()) {
      aclEntryComment = make_shared<string>(boost::any_cast<string>(m["AclEntryComment"]));
    }
    if (m.find("AclEntryIP") != m.end() && !m["AclEntryIP"].empty()) {
      aclEntryIP = make_shared<string>(boost::any_cast<string>(m["AclEntryIP"]));
    }
  }


  virtual ~DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry() = default;
};
class DescribeAccessControlListAttributeResponseBodyAclEntrys : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry>> aclEntry{};

  DescribeAccessControlListAttributeResponseBodyAclEntrys() {}

  explicit DescribeAccessControlListAttributeResponseBodyAclEntrys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclEntry) {
      vector<boost::any> temp1;
      for(auto item1:*aclEntry){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclEntry"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclEntry") != m.end() && !m["AclEntry"].empty()) {
      if (typeid(vector<boost::any>) == m["AclEntry"].type()) {
        vector<DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclEntry"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclEntry = make_shared<vector<DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry>>(expect1);
      }
    }
  }


  virtual ~DescribeAccessControlListAttributeResponseBodyAclEntrys() = default;
};
class DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener : public Darabonba::Model {
public:
  shared_ptr<long> listenerPort{};
  shared_ptr<string> aclType{};
  shared_ptr<string> protocol{};
  shared_ptr<string> loadBalancerId{};

  DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener() {}

  explicit DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
  }


  virtual ~DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener() = default;
};
class DescribeAccessControlListAttributeResponseBodyRelatedListeners : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener>> relatedListener{};

  DescribeAccessControlListAttributeResponseBodyRelatedListeners() {}

  explicit DescribeAccessControlListAttributeResponseBodyRelatedListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (relatedListener) {
      vector<boost::any> temp1;
      for(auto item1:*relatedListener){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedListener"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RelatedListener") != m.end() && !m["RelatedListener"].empty()) {
      if (typeid(vector<boost::any>) == m["RelatedListener"].type()) {
        vector<DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedListener"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedListener = make_shared<vector<DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener>>(expect1);
      }
    }
  }


  virtual ~DescribeAccessControlListAttributeResponseBodyRelatedListeners() = default;
};
class DescribeAccessControlListAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<string> addressIPVersion{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> aclName{};
  shared_ptr<DescribeAccessControlListAttributeResponseBodyAclEntrys> aclEntrys{};
  shared_ptr<DescribeAccessControlListAttributeResponseBodyRelatedListeners> relatedListeners{};

  DescribeAccessControlListAttributeResponseBody() {}

  explicit DescribeAccessControlListAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (aclName) {
      res["AclName"] = boost::any(*aclName);
    }
    if (aclEntrys) {
      res["AclEntrys"] = aclEntrys ? boost::any(aclEntrys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (relatedListeners) {
      res["RelatedListeners"] = relatedListeners ? boost::any(relatedListeners->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("AclName") != m.end() && !m["AclName"].empty()) {
      aclName = make_shared<string>(boost::any_cast<string>(m["AclName"]));
    }
    if (m.find("AclEntrys") != m.end() && !m["AclEntrys"].empty()) {
      if (typeid(map<string, boost::any>) == m["AclEntrys"].type()) {
        DescribeAccessControlListAttributeResponseBodyAclEntrys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AclEntrys"]));
        aclEntrys = make_shared<DescribeAccessControlListAttributeResponseBodyAclEntrys>(model1);
      }
    }
    if (m.find("RelatedListeners") != m.end() && !m["RelatedListeners"].empty()) {
      if (typeid(map<string, boost::any>) == m["RelatedListeners"].type()) {
        DescribeAccessControlListAttributeResponseBodyRelatedListeners model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RelatedListeners"]));
        relatedListeners = make_shared<DescribeAccessControlListAttributeResponseBodyRelatedListeners>(model1);
      }
    }
  }


  virtual ~DescribeAccessControlListAttributeResponseBody() = default;
};
class DescribeAccessControlListAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAccessControlListAttributeResponseBody> body{};

  DescribeAccessControlListAttributeResponse() {}

  explicit DescribeAccessControlListAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccessControlListAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccessControlListAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccessControlListAttributeResponse() = default;
};
class DescribeAccessControlListsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> aclName{};
  shared_ptr<string> addressIPVersion{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> resourceGroupId{};

  DescribeAccessControlListsRequest() {}

  explicit DescribeAccessControlListsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclName) {
      res["AclName"] = boost::any(*aclName);
    }
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclName") != m.end() && !m["AclName"].empty()) {
      aclName = make_shared<string>(boost::any_cast<string>(m["AclName"]));
    }
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeAccessControlListsRequest() = default;
};
class DescribeAccessControlListsResponseBodyAclsAcl : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<string> addressIPVersion{};
  shared_ptr<string> aclName{};
  shared_ptr<string> resourceGroupId{};

  DescribeAccessControlListsResponseBodyAclsAcl() {}

  explicit DescribeAccessControlListsResponseBodyAclsAcl(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    if (aclName) {
      res["AclName"] = boost::any(*aclName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
    if (m.find("AclName") != m.end() && !m["AclName"].empty()) {
      aclName = make_shared<string>(boost::any_cast<string>(m["AclName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeAccessControlListsResponseBodyAclsAcl() = default;
};
class DescribeAccessControlListsResponseBodyAcls : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccessControlListsResponseBodyAclsAcl>> acl{};

  DescribeAccessControlListsResponseBodyAcls() {}

  explicit DescribeAccessControlListsResponseBodyAcls(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acl) {
      vector<boost::any> temp1;
      for(auto item1:*acl){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Acl"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Acl") != m.end() && !m["Acl"].empty()) {
      if (typeid(vector<boost::any>) == m["Acl"].type()) {
        vector<DescribeAccessControlListsResponseBodyAclsAcl> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Acl"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccessControlListsResponseBodyAclsAcl model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        acl = make_shared<vector<DescribeAccessControlListsResponseBodyAclsAcl>>(expect1);
      }
    }
  }


  virtual ~DescribeAccessControlListsResponseBodyAcls() = default;
};
class DescribeAccessControlListsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> count{};
  shared_ptr<DescribeAccessControlListsResponseBodyAcls> acls{};

  DescribeAccessControlListsResponseBody() {}

  explicit DescribeAccessControlListsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (acls) {
      res["Acls"] = acls ? boost::any(acls->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Acls") != m.end() && !m["Acls"].empty()) {
      if (typeid(map<string, boost::any>) == m["Acls"].type()) {
        DescribeAccessControlListsResponseBodyAcls model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Acls"]));
        acls = make_shared<DescribeAccessControlListsResponseBodyAcls>(model1);
      }
    }
  }


  virtual ~DescribeAccessControlListsResponseBody() = default;
};
class DescribeAccessControlListsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAccessControlListsResponseBody> body{};

  DescribeAccessControlListsResponse() {}

  explicit DescribeAccessControlListsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccessControlListsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccessControlListsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccessControlListsResponse() = default;
};
class DescribeAvailableResourceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> addressType{};
  shared_ptr<string> addressIPVersion{};

  DescribeAvailableResourceRequest() {}

  explicit DescribeAvailableResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
  }


  virtual ~DescribeAvailableResourceRequest() = default;
};
class DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource : public Darabonba::Model {
public:
  shared_ptr<string> addressType{};
  shared_ptr<string> addressIPVersion{};

  DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource() {}

  explicit DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource() = default;
};
class DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource>> supportResource{};

  DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources() {}

  explicit DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportResource) {
      vector<boost::any> temp1;
      for(auto item1:*supportResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportResource") != m.end() && !m["SupportResource"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportResource"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportResource = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources() = default;
};
class DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource : public Darabonba::Model {
public:
  shared_ptr<string> slaveZoneId{};
  shared_ptr<string> masterZoneId{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources> supportResources{};

  DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource() {}

  explicit DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slaveZoneId) {
      res["SlaveZoneId"] = boost::any(*slaveZoneId);
    }
    if (masterZoneId) {
      res["MasterZoneId"] = boost::any(*masterZoneId);
    }
    if (supportResources) {
      res["SupportResources"] = supportResources ? boost::any(supportResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SlaveZoneId") != m.end() && !m["SlaveZoneId"].empty()) {
      slaveZoneId = make_shared<string>(boost::any_cast<string>(m["SlaveZoneId"]));
    }
    if (m.find("MasterZoneId") != m.end() && !m["MasterZoneId"].empty()) {
      masterZoneId = make_shared<string>(boost::any_cast<string>(m["MasterZoneId"]));
    }
    if (m.find("SupportResources") != m.end() && !m["SupportResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportResources"].type()) {
        DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportResources"]));
        supportResources = make_shared<DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource() = default;
};
class DescribeAvailableResourceResponseBodyAvailableResources : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource>> availableResource{};

  DescribeAvailableResourceResponseBodyAvailableResources() {}

  explicit DescribeAvailableResourceResponseBodyAvailableResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableResource) {
      vector<boost::any> temp1;
      for(auto item1:*availableResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableResource") != m.end() && !m["AvailableResource"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableResource"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableResource = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableResources() = default;
};
class DescribeAvailableResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableResources> availableResources{};

  DescribeAvailableResourceResponseBody() {}

  explicit DescribeAvailableResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (availableResources) {
      res["AvailableResources"] = availableResources ? boost::any(availableResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AvailableResources") != m.end() && !m["AvailableResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvailableResources"].type()) {
        DescribeAvailableResourceResponseBodyAvailableResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvailableResources"]));
        availableResources = make_shared<DescribeAvailableResourceResponseBodyAvailableResources>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBody() = default;
};
class DescribeAvailableResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAvailableResourceResponseBody> body{};

  DescribeAvailableResourceResponse() {}

  explicit DescribeAvailableResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAvailableResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAvailableResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponse() = default;
};
class DescribeCACertificatesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> CACertificateId{};
  shared_ptr<string> resourceGroupId{};

  DescribeCACertificatesRequest() {}

  explicit DescribeCACertificatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (CACertificateId) {
      res["CACertificateId"] = boost::any(*CACertificateId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("CACertificateId") != m.end() && !m["CACertificateId"].empty()) {
      CACertificateId = make_shared<string>(boost::any_cast<string>(m["CACertificateId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeCACertificatesRequest() = default;
};
class DescribeCACertificatesResponseBodyCACertificatesCACertificate : public Darabonba::Model {
public:
  shared_ptr<long> createTimeStamp{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> createTime{};
  shared_ptr<long> expireTimeStamp{};
  shared_ptr<string> CACertificateId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> fingerprint{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> commonName{};
  shared_ptr<string> CACertificateName{};

  DescribeCACertificatesResponseBodyCACertificatesCACertificate() {}

  explicit DescribeCACertificatesResponseBodyCACertificatesCACertificate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimeStamp) {
      res["CreateTimeStamp"] = boost::any(*createTimeStamp);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTimeStamp) {
      res["ExpireTimeStamp"] = boost::any(*expireTimeStamp);
    }
    if (CACertificateId) {
      res["CACertificateId"] = boost::any(*CACertificateId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (fingerprint) {
      res["Fingerprint"] = boost::any(*fingerprint);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (CACertificateName) {
      res["CACertificateName"] = boost::any(*CACertificateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimeStamp") != m.end() && !m["CreateTimeStamp"].empty()) {
      createTimeStamp = make_shared<long>(boost::any_cast<long>(m["CreateTimeStamp"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTimeStamp") != m.end() && !m["ExpireTimeStamp"].empty()) {
      expireTimeStamp = make_shared<long>(boost::any_cast<long>(m["ExpireTimeStamp"]));
    }
    if (m.find("CACertificateId") != m.end() && !m["CACertificateId"].empty()) {
      CACertificateId = make_shared<string>(boost::any_cast<string>(m["CACertificateId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Fingerprint") != m.end() && !m["Fingerprint"].empty()) {
      fingerprint = make_shared<string>(boost::any_cast<string>(m["Fingerprint"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("CACertificateName") != m.end() && !m["CACertificateName"].empty()) {
      CACertificateName = make_shared<string>(boost::any_cast<string>(m["CACertificateName"]));
    }
  }


  virtual ~DescribeCACertificatesResponseBodyCACertificatesCACertificate() = default;
};
class DescribeCACertificatesResponseBodyCACertificates : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCACertificatesResponseBodyCACertificatesCACertificate>> CACertificate{};

  DescribeCACertificatesResponseBodyCACertificates() {}

  explicit DescribeCACertificatesResponseBodyCACertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CACertificate) {
      vector<boost::any> temp1;
      for(auto item1:*CACertificate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CACertificate"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CACertificate") != m.end() && !m["CACertificate"].empty()) {
      if (typeid(vector<boost::any>) == m["CACertificate"].type()) {
        vector<DescribeCACertificatesResponseBodyCACertificatesCACertificate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CACertificate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCACertificatesResponseBodyCACertificatesCACertificate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        CACertificate = make_shared<vector<DescribeCACertificatesResponseBodyCACertificatesCACertificate>>(expect1);
      }
    }
  }


  virtual ~DescribeCACertificatesResponseBodyCACertificates() = default;
};
class DescribeCACertificatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeCACertificatesResponseBodyCACertificates> CACertificates{};

  DescribeCACertificatesResponseBody() {}

  explicit DescribeCACertificatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (CACertificates) {
      res["CACertificates"] = CACertificates ? boost::any(CACertificates->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CACertificates") != m.end() && !m["CACertificates"].empty()) {
      if (typeid(map<string, boost::any>) == m["CACertificates"].type()) {
        DescribeCACertificatesResponseBodyCACertificates model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CACertificates"]));
        CACertificates = make_shared<DescribeCACertificatesResponseBodyCACertificates>(model1);
      }
    }
  }


  virtual ~DescribeCACertificatesResponseBody() = default;
};
class DescribeCACertificatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCACertificatesResponseBody> body{};

  DescribeCACertificatesResponse() {}

  explicit DescribeCACertificatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCACertificatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCACertificatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCACertificatesResponse() = default;
};
class DescribeDomainExtensionAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> domainExtensionId{};

  DescribeDomainExtensionAttributeRequest() {}

  explicit DescribeDomainExtensionAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (domainExtensionId) {
      res["DomainExtensionId"] = boost::any(*domainExtensionId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DomainExtensionId") != m.end() && !m["DomainExtensionId"].empty()) {
      domainExtensionId = make_shared<string>(boost::any_cast<string>(m["DomainExtensionId"]));
    }
  }


  virtual ~DescribeDomainExtensionAttributeRequest() = default;
};
class DescribeDomainExtensionAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> requestId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> serverCertificateId{};
  shared_ptr<string> domainExtensionId{};

  DescribeDomainExtensionAttributeResponseBody() {}

  explicit DescribeDomainExtensionAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (serverCertificateId) {
      res["ServerCertificateId"] = boost::any(*serverCertificateId);
    }
    if (domainExtensionId) {
      res["DomainExtensionId"] = boost::any(*domainExtensionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ServerCertificateId") != m.end() && !m["ServerCertificateId"].empty()) {
      serverCertificateId = make_shared<string>(boost::any_cast<string>(m["ServerCertificateId"]));
    }
    if (m.find("DomainExtensionId") != m.end() && !m["DomainExtensionId"].empty()) {
      domainExtensionId = make_shared<string>(boost::any_cast<string>(m["DomainExtensionId"]));
    }
  }


  virtual ~DescribeDomainExtensionAttributeResponseBody() = default;
};
class DescribeDomainExtensionAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDomainExtensionAttributeResponseBody> body{};

  DescribeDomainExtensionAttributeResponse() {}

  explicit DescribeDomainExtensionAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainExtensionAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainExtensionAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainExtensionAttributeResponse() = default;
};
class DescribeDomainExtensionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> domainExtensionId{};

  DescribeDomainExtensionsRequest() {}

  explicit DescribeDomainExtensionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (domainExtensionId) {
      res["DomainExtensionId"] = boost::any(*domainExtensionId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("DomainExtensionId") != m.end() && !m["DomainExtensionId"].empty()) {
      domainExtensionId = make_shared<string>(boost::any_cast<string>(m["DomainExtensionId"]));
    }
  }


  virtual ~DescribeDomainExtensionsRequest() = default;
};
class DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension : public Darabonba::Model {
public:
  shared_ptr<string> serverCertificateId{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainExtensionId{};

  DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension() {}

  explicit DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverCertificateId) {
      res["ServerCertificateId"] = boost::any(*serverCertificateId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainExtensionId) {
      res["DomainExtensionId"] = boost::any(*domainExtensionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerCertificateId") != m.end() && !m["ServerCertificateId"].empty()) {
      serverCertificateId = make_shared<string>(boost::any_cast<string>(m["ServerCertificateId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainExtensionId") != m.end() && !m["DomainExtensionId"].empty()) {
      domainExtensionId = make_shared<string>(boost::any_cast<string>(m["DomainExtensionId"]));
    }
  }


  virtual ~DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension() = default;
};
class DescribeDomainExtensionsResponseBodyDomainExtensions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension>> domainExtension{};

  DescribeDomainExtensionsResponseBodyDomainExtensions() {}

  explicit DescribeDomainExtensionsResponseBodyDomainExtensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainExtension) {
      vector<boost::any> temp1;
      for(auto item1:*domainExtension){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainExtension"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainExtension") != m.end() && !m["DomainExtension"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainExtension"].type()) {
        vector<DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainExtension"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainExtension = make_shared<vector<DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainExtensionsResponseBodyDomainExtensions() = default;
};
class DescribeDomainExtensionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDomainExtensionsResponseBodyDomainExtensions> domainExtensions{};

  DescribeDomainExtensionsResponseBody() {}

  explicit DescribeDomainExtensionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainExtensions) {
      res["DomainExtensions"] = domainExtensions ? boost::any(domainExtensions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainExtensions") != m.end() && !m["DomainExtensions"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainExtensions"].type()) {
        DescribeDomainExtensionsResponseBodyDomainExtensions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainExtensions"]));
        domainExtensions = make_shared<DescribeDomainExtensionsResponseBodyDomainExtensions>(model1);
      }
    }
  }


  virtual ~DescribeDomainExtensionsResponseBody() = default;
};
class DescribeDomainExtensionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDomainExtensionsResponseBody> body{};

  DescribeDomainExtensionsResponse() {}

  explicit DescribeDomainExtensionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainExtensionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainExtensionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainExtensionsResponse() = default;
};
class DescribeHealthStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> regionId{};

  DescribeHealthStatusRequest() {}

  explicit DescribeHealthStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeHealthStatusRequest() = default;
};
class DescribeHealthStatusResponseBodyBackendServersBackendServer : public Darabonba::Model {
public:
  shared_ptr<string> protocol{};
  shared_ptr<string> serverHealthStatus{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> serverIp{};
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};

  DescribeHealthStatusResponseBodyBackendServersBackendServer() {}

  explicit DescribeHealthStatusResponseBodyBackendServersBackendServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (serverHealthStatus) {
      res["ServerHealthStatus"] = boost::any(*serverHealthStatus);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("ServerHealthStatus") != m.end() && !m["ServerHealthStatus"].empty()) {
      serverHealthStatus = make_shared<string>(boost::any_cast<string>(m["ServerHealthStatus"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyBackendServersBackendServer() = default;
};
class DescribeHealthStatusResponseBodyBackendServers : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHealthStatusResponseBodyBackendServersBackendServer>> backendServer{};

  DescribeHealthStatusResponseBodyBackendServers() {}

  explicit DescribeHealthStatusResponseBodyBackendServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendServer) {
      vector<boost::any> temp1;
      for(auto item1:*backendServer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackendServer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendServer") != m.end() && !m["BackendServer"].empty()) {
      if (typeid(vector<boost::any>) == m["BackendServer"].type()) {
        vector<DescribeHealthStatusResponseBodyBackendServersBackendServer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackendServer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHealthStatusResponseBodyBackendServersBackendServer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backendServer = make_shared<vector<DescribeHealthStatusResponseBodyBackendServersBackendServer>>(expect1);
      }
    }
  }


  virtual ~DescribeHealthStatusResponseBodyBackendServers() = default;
};
class DescribeHealthStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeHealthStatusResponseBodyBackendServers> backendServers{};

  DescribeHealthStatusResponseBody() {}

  explicit DescribeHealthStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (backendServers) {
      res["BackendServers"] = backendServers ? boost::any(backendServers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackendServers"].type()) {
        DescribeHealthStatusResponseBodyBackendServers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackendServers"]));
        backendServers = make_shared<DescribeHealthStatusResponseBodyBackendServers>(model1);
      }
    }
  }


  virtual ~DescribeHealthStatusResponseBody() = default;
};
class DescribeHealthStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeHealthStatusResponseBody> body{};

  DescribeHealthStatusResponse() {}

  explicit DescribeHealthStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHealthStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHealthStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHealthStatusResponse() = default;
};
class DescribeListenerAccessControlAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> ownerAccount{};

  DescribeListenerAccessControlAttributeRequest() {}

  explicit DescribeListenerAccessControlAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DescribeListenerAccessControlAttributeRequest() = default;
};
class DescribeListenerAccessControlAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> sourceItems{};
  shared_ptr<string> accessControlStatus{};
  shared_ptr<string> requestId{};

  DescribeListenerAccessControlAttributeResponseBody() {}

  explicit DescribeListenerAccessControlAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceItems) {
      res["SourceItems"] = boost::any(*sourceItems);
    }
    if (accessControlStatus) {
      res["AccessControlStatus"] = boost::any(*accessControlStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceItems") != m.end() && !m["SourceItems"].empty()) {
      sourceItems = make_shared<string>(boost::any_cast<string>(m["SourceItems"]));
    }
    if (m.find("AccessControlStatus") != m.end() && !m["AccessControlStatus"].empty()) {
      accessControlStatus = make_shared<string>(boost::any_cast<string>(m["AccessControlStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeListenerAccessControlAttributeResponseBody() = default;
};
class DescribeListenerAccessControlAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeListenerAccessControlAttributeResponseBody> body{};

  DescribeListenerAccessControlAttributeResponse() {}

  explicit DescribeListenerAccessControlAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeListenerAccessControlAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeListenerAccessControlAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeListenerAccessControlAttributeResponse() = default;
};
class DescribeLoadBalancerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> ownerAccount{};

  DescribeLoadBalancerAttributeRequest() {}

  explicit DescribeLoadBalancerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DescribeLoadBalancerAttributeRequest() = default;
};
class DescribeLoadBalancerAttributeResponseBodyListenerPorts : public Darabonba::Model {
public:
  shared_ptr<vector<long>> listenerPort{};

  DescribeLoadBalancerAttributeResponseBodyListenerPorts() {}

  explicit DescribeLoadBalancerAttributeResponseBodyListenerPorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ListenerPort"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ListenerPort"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      listenerPort = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~DescribeLoadBalancerAttributeResponseBodyListenerPorts() = default;
};
class DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal : public Darabonba::Model {
public:
  shared_ptr<string> listenerProtocal{};
  shared_ptr<long> listenerPort{};

  DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal() {}

  explicit DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerProtocal) {
      res["ListenerProtocal"] = boost::any(*listenerProtocal);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerProtocal") != m.end() && !m["ListenerProtocal"].empty()) {
      listenerProtocal = make_shared<string>(boost::any_cast<string>(m["ListenerProtocal"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
  }


  virtual ~DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal() = default;
};
class DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal>> listenerPortAndProtocal{};

  DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal() {}

  explicit DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerPortAndProtocal) {
      vector<boost::any> temp1;
      for(auto item1:*listenerPortAndProtocal){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListenerPortAndProtocal"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerPortAndProtocal") != m.end() && !m["ListenerPortAndProtocal"].empty()) {
      if (typeid(vector<boost::any>) == m["ListenerPortAndProtocal"].type()) {
        vector<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListenerPortAndProtocal"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listenerPortAndProtocal = make_shared<vector<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal>>(expect1);
      }
    }
  }


  virtual ~DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal() = default;
};
class DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol : public Darabonba::Model {
public:
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> listenerForward{};
  shared_ptr<string> description{};
  shared_ptr<long> forwardPort{};

  DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol() {}

  explicit DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (listenerForward) {
      res["ListenerForward"] = boost::any(*listenerForward);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (forwardPort) {
      res["ForwardPort"] = boost::any(*forwardPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("ListenerForward") != m.end() && !m["ListenerForward"].empty()) {
      listenerForward = make_shared<string>(boost::any_cast<string>(m["ListenerForward"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ForwardPort") != m.end() && !m["ForwardPort"].empty()) {
      forwardPort = make_shared<long>(boost::any_cast<long>(m["ForwardPort"]));
    }
  }


  virtual ~DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol() = default;
};
class DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol>> listenerPortAndProtocol{};

  DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol() {}

  explicit DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerPortAndProtocol) {
      vector<boost::any> temp1;
      for(auto item1:*listenerPortAndProtocol){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListenerPortAndProtocol"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerPortAndProtocol") != m.end() && !m["ListenerPortAndProtocol"].empty()) {
      if (typeid(vector<boost::any>) == m["ListenerPortAndProtocol"].type()) {
        vector<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListenerPortAndProtocol"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listenerPortAndProtocol = make_shared<vector<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol>>(expect1);
      }
    }
  }


  virtual ~DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol() = default;
};
class DescribeLoadBalancerAttributeResponseBodyBackendServersBackendServer : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> weight{};
  shared_ptr<string> description{};
  shared_ptr<string> serverId{};

  DescribeLoadBalancerAttributeResponseBodyBackendServersBackendServer() {}

  explicit DescribeLoadBalancerAttributeResponseBodyBackendServersBackendServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
  }


  virtual ~DescribeLoadBalancerAttributeResponseBodyBackendServersBackendServer() = default;
};
class DescribeLoadBalancerAttributeResponseBodyBackendServers : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLoadBalancerAttributeResponseBodyBackendServersBackendServer>> backendServer{};

  DescribeLoadBalancerAttributeResponseBodyBackendServers() {}

  explicit DescribeLoadBalancerAttributeResponseBodyBackendServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendServer) {
      vector<boost::any> temp1;
      for(auto item1:*backendServer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackendServer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendServer") != m.end() && !m["BackendServer"].empty()) {
      if (typeid(vector<boost::any>) == m["BackendServer"].type()) {
        vector<DescribeLoadBalancerAttributeResponseBodyBackendServersBackendServer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackendServer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLoadBalancerAttributeResponseBodyBackendServersBackendServer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backendServer = make_shared<vector<DescribeLoadBalancerAttributeResponseBodyBackendServersBackendServer>>(expect1);
      }
    }
  }


  virtual ~DescribeLoadBalancerAttributeResponseBodyBackendServers() = default;
};
class DescribeLoadBalancerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<long> createTimeStamp{};
  shared_ptr<string> createTime{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> addressType{};
  shared_ptr<string> networkType{};
  shared_ptr<string> addressIPVersion{};
  shared_ptr<string> renewalCycUnit{};
  shared_ptr<string> requestId{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<string> address{};
  shared_ptr<string> slaveZoneId{};
  shared_ptr<long> endTimeStamp{};
  shared_ptr<string> masterZoneId{};
  shared_ptr<string> loadBalancerSpec{};
  shared_ptr<long> autoReleaseTime{};
  shared_ptr<string> modificationProtectionReason{};
  shared_ptr<string> regionId{};
  shared_ptr<string> modificationProtectionStatus{};
  shared_ptr<string> endTime{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> loadBalancerStatus{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<string> deleteProtection{};
  shared_ptr<string> regionIdAlias{};
  shared_ptr<string> renewalStatus{};
  shared_ptr<long> renewalDuration{};
  shared_ptr<DescribeLoadBalancerAttributeResponseBodyListenerPorts> listenerPorts{};
  shared_ptr<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal> listenerPortsAndProtocal{};
  shared_ptr<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol> listenerPortsAndProtocol{};
  shared_ptr<DescribeLoadBalancerAttributeResponseBodyBackendServers> backendServers{};

  DescribeLoadBalancerAttributeResponseBody() {}

  explicit DescribeLoadBalancerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (createTimeStamp) {
      res["CreateTimeStamp"] = boost::any(*createTimeStamp);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    if (renewalCycUnit) {
      res["RenewalCycUnit"] = boost::any(*renewalCycUnit);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (slaveZoneId) {
      res["SlaveZoneId"] = boost::any(*slaveZoneId);
    }
    if (endTimeStamp) {
      res["EndTimeStamp"] = boost::any(*endTimeStamp);
    }
    if (masterZoneId) {
      res["MasterZoneId"] = boost::any(*masterZoneId);
    }
    if (loadBalancerSpec) {
      res["LoadBalancerSpec"] = boost::any(*loadBalancerSpec);
    }
    if (autoReleaseTime) {
      res["AutoReleaseTime"] = boost::any(*autoReleaseTime);
    }
    if (modificationProtectionReason) {
      res["ModificationProtectionReason"] = boost::any(*modificationProtectionReason);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (modificationProtectionStatus) {
      res["ModificationProtectionStatus"] = boost::any(*modificationProtectionStatus);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (loadBalancerStatus) {
      res["LoadBalancerStatus"] = boost::any(*loadBalancerStatus);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (deleteProtection) {
      res["DeleteProtection"] = boost::any(*deleteProtection);
    }
    if (regionIdAlias) {
      res["RegionIdAlias"] = boost::any(*regionIdAlias);
    }
    if (renewalStatus) {
      res["RenewalStatus"] = boost::any(*renewalStatus);
    }
    if (renewalDuration) {
      res["RenewalDuration"] = boost::any(*renewalDuration);
    }
    if (listenerPorts) {
      res["ListenerPorts"] = listenerPorts ? boost::any(listenerPorts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (listenerPortsAndProtocal) {
      res["ListenerPortsAndProtocal"] = listenerPortsAndProtocal ? boost::any(listenerPortsAndProtocal->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (listenerPortsAndProtocol) {
      res["ListenerPortsAndProtocol"] = listenerPortsAndProtocol ? boost::any(listenerPortsAndProtocol->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (backendServers) {
      res["BackendServers"] = backendServers ? boost::any(backendServers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("CreateTimeStamp") != m.end() && !m["CreateTimeStamp"].empty()) {
      createTimeStamp = make_shared<long>(boost::any_cast<long>(m["CreateTimeStamp"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
    if (m.find("RenewalCycUnit") != m.end() && !m["RenewalCycUnit"].empty()) {
      renewalCycUnit = make_shared<string>(boost::any_cast<string>(m["RenewalCycUnit"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("SlaveZoneId") != m.end() && !m["SlaveZoneId"].empty()) {
      slaveZoneId = make_shared<string>(boost::any_cast<string>(m["SlaveZoneId"]));
    }
    if (m.find("EndTimeStamp") != m.end() && !m["EndTimeStamp"].empty()) {
      endTimeStamp = make_shared<long>(boost::any_cast<long>(m["EndTimeStamp"]));
    }
    if (m.find("MasterZoneId") != m.end() && !m["MasterZoneId"].empty()) {
      masterZoneId = make_shared<string>(boost::any_cast<string>(m["MasterZoneId"]));
    }
    if (m.find("LoadBalancerSpec") != m.end() && !m["LoadBalancerSpec"].empty()) {
      loadBalancerSpec = make_shared<string>(boost::any_cast<string>(m["LoadBalancerSpec"]));
    }
    if (m.find("AutoReleaseTime") != m.end() && !m["AutoReleaseTime"].empty()) {
      autoReleaseTime = make_shared<long>(boost::any_cast<long>(m["AutoReleaseTime"]));
    }
    if (m.find("ModificationProtectionReason") != m.end() && !m["ModificationProtectionReason"].empty()) {
      modificationProtectionReason = make_shared<string>(boost::any_cast<string>(m["ModificationProtectionReason"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ModificationProtectionStatus") != m.end() && !m["ModificationProtectionStatus"].empty()) {
      modificationProtectionStatus = make_shared<string>(boost::any_cast<string>(m["ModificationProtectionStatus"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("LoadBalancerStatus") != m.end() && !m["LoadBalancerStatus"].empty()) {
      loadBalancerStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerStatus"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("DeleteProtection") != m.end() && !m["DeleteProtection"].empty()) {
      deleteProtection = make_shared<string>(boost::any_cast<string>(m["DeleteProtection"]));
    }
    if (m.find("RegionIdAlias") != m.end() && !m["RegionIdAlias"].empty()) {
      regionIdAlias = make_shared<string>(boost::any_cast<string>(m["RegionIdAlias"]));
    }
    if (m.find("RenewalStatus") != m.end() && !m["RenewalStatus"].empty()) {
      renewalStatus = make_shared<string>(boost::any_cast<string>(m["RenewalStatus"]));
    }
    if (m.find("RenewalDuration") != m.end() && !m["RenewalDuration"].empty()) {
      renewalDuration = make_shared<long>(boost::any_cast<long>(m["RenewalDuration"]));
    }
    if (m.find("ListenerPorts") != m.end() && !m["ListenerPorts"].empty()) {
      if (typeid(map<string, boost::any>) == m["ListenerPorts"].type()) {
        DescribeLoadBalancerAttributeResponseBodyListenerPorts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ListenerPorts"]));
        listenerPorts = make_shared<DescribeLoadBalancerAttributeResponseBodyListenerPorts>(model1);
      }
    }
    if (m.find("ListenerPortsAndProtocal") != m.end() && !m["ListenerPortsAndProtocal"].empty()) {
      if (typeid(map<string, boost::any>) == m["ListenerPortsAndProtocal"].type()) {
        DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ListenerPortsAndProtocal"]));
        listenerPortsAndProtocal = make_shared<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal>(model1);
      }
    }
    if (m.find("ListenerPortsAndProtocol") != m.end() && !m["ListenerPortsAndProtocol"].empty()) {
      if (typeid(map<string, boost::any>) == m["ListenerPortsAndProtocol"].type()) {
        DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ListenerPortsAndProtocol"]));
        listenerPortsAndProtocol = make_shared<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol>(model1);
      }
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackendServers"].type()) {
        DescribeLoadBalancerAttributeResponseBodyBackendServers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackendServers"]));
        backendServers = make_shared<DescribeLoadBalancerAttributeResponseBodyBackendServers>(model1);
      }
    }
  }


  virtual ~DescribeLoadBalancerAttributeResponseBody() = default;
};
class DescribeLoadBalancerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLoadBalancerAttributeResponseBody> body{};

  DescribeLoadBalancerAttributeResponse() {}

  explicit DescribeLoadBalancerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLoadBalancerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLoadBalancerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLoadBalancerAttributeResponse() = default;
};
class DescribeLoadBalancerHTTPListenerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> ownerAccount{};

  DescribeLoadBalancerHTTPListenerAttributeRequest() {}

  explicit DescribeLoadBalancerHTTPListenerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DescribeLoadBalancerHTTPListenerAttributeRequest() = default;
};
class DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule : public Darabonba::Model {
public:
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> url{};
  shared_ptr<string> domain{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleId{};

  DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule() {}

  explicit DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule() = default;
};
class DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule>> rule{};

  DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules() {}

  explicit DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule>>(expect1);
      }
    }
  }


  virtual ~DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules() = default;
};
class DescribeLoadBalancerHTTPListenerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aclType{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> cookie{};
  shared_ptr<string> gzip{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<string> requestId{};
  shared_ptr<string> description{};
  shared_ptr<long> bandwidth{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<string> aclStatus{};
  shared_ptr<long> backendServerPort{};
  shared_ptr<long> cookieTimeout{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<long> forwardPort{};
  shared_ptr<string> XForwardedFor_SLBID{};
  shared_ptr<string> securityStatus{};
  shared_ptr<string> healthCheckHttpCode{};
  shared_ptr<string> listenerForward{};
  shared_ptr<string> XForwardedFor{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<long> requestTimeout{};
  shared_ptr<long> listenerPort{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckURI{};
  shared_ptr<string> stickySessionType{};
  shared_ptr<string> aclId{};
  shared_ptr<string> scheduler{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> XForwardedFor_proto{};
  shared_ptr<string> XForwardedFor_SLBIP{};
  shared_ptr<string> stickySession{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> healthCheck{};
  shared_ptr<DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules> rules{};

  DescribeLoadBalancerHTTPListenerAttributeResponseBody() {}

  explicit DescribeLoadBalancerHTTPListenerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (cookie) {
      res["Cookie"] = boost::any(*cookie);
    }
    if (gzip) {
      res["Gzip"] = boost::any(*gzip);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (backendServerPort) {
      res["BackendServerPort"] = boost::any(*backendServerPort);
    }
    if (cookieTimeout) {
      res["CookieTimeout"] = boost::any(*cookieTimeout);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (forwardPort) {
      res["ForwardPort"] = boost::any(*forwardPort);
    }
    if (XForwardedFor_SLBID) {
      res["XForwardedFor_SLBID"] = boost::any(*XForwardedFor_SLBID);
    }
    if (securityStatus) {
      res["SecurityStatus"] = boost::any(*securityStatus);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (listenerForward) {
      res["ListenerForward"] = boost::any(*listenerForward);
    }
    if (XForwardedFor) {
      res["XForwardedFor"] = boost::any(*XForwardedFor);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (requestTimeout) {
      res["RequestTimeout"] = boost::any(*requestTimeout);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckURI) {
      res["HealthCheckURI"] = boost::any(*healthCheckURI);
    }
    if (stickySessionType) {
      res["StickySessionType"] = boost::any(*stickySessionType);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (XForwardedFor_proto) {
      res["XForwardedFor_proto"] = boost::any(*XForwardedFor_proto);
    }
    if (XForwardedFor_SLBIP) {
      res["XForwardedFor_SLBIP"] = boost::any(*XForwardedFor_SLBIP);
    }
    if (stickySession) {
      res["StickySession"] = boost::any(*stickySession);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Cookie") != m.end() && !m["Cookie"].empty()) {
      cookie = make_shared<string>(boost::any_cast<string>(m["Cookie"]));
    }
    if (m.find("Gzip") != m.end() && !m["Gzip"].empty()) {
      gzip = make_shared<string>(boost::any_cast<string>(m["Gzip"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("BackendServerPort") != m.end() && !m["BackendServerPort"].empty()) {
      backendServerPort = make_shared<long>(boost::any_cast<long>(m["BackendServerPort"]));
    }
    if (m.find("CookieTimeout") != m.end() && !m["CookieTimeout"].empty()) {
      cookieTimeout = make_shared<long>(boost::any_cast<long>(m["CookieTimeout"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("ForwardPort") != m.end() && !m["ForwardPort"].empty()) {
      forwardPort = make_shared<long>(boost::any_cast<long>(m["ForwardPort"]));
    }
    if (m.find("XForwardedFor_SLBID") != m.end() && !m["XForwardedFor_SLBID"].empty()) {
      XForwardedFor_SLBID = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBID"]));
    }
    if (m.find("SecurityStatus") != m.end() && !m["SecurityStatus"].empty()) {
      securityStatus = make_shared<string>(boost::any_cast<string>(m["SecurityStatus"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      healthCheckHttpCode = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpCode"]));
    }
    if (m.find("ListenerForward") != m.end() && !m["ListenerForward"].empty()) {
      listenerForward = make_shared<string>(boost::any_cast<string>(m["ListenerForward"]));
    }
    if (m.find("XForwardedFor") != m.end() && !m["XForwardedFor"].empty()) {
      XForwardedFor = make_shared<string>(boost::any_cast<string>(m["XForwardedFor"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("RequestTimeout") != m.end() && !m["RequestTimeout"].empty()) {
      requestTimeout = make_shared<long>(boost::any_cast<long>(m["RequestTimeout"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckURI") != m.end() && !m["HealthCheckURI"].empty()) {
      healthCheckURI = make_shared<string>(boost::any_cast<string>(m["HealthCheckURI"]));
    }
    if (m.find("StickySessionType") != m.end() && !m["StickySessionType"].empty()) {
      stickySessionType = make_shared<string>(boost::any_cast<string>(m["StickySessionType"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("XForwardedFor_proto") != m.end() && !m["XForwardedFor_proto"].empty()) {
      XForwardedFor_proto = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_proto"]));
    }
    if (m.find("XForwardedFor_SLBIP") != m.end() && !m["XForwardedFor_SLBIP"].empty()) {
      XForwardedFor_SLBIP = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBIP"]));
    }
    if (m.find("StickySession") != m.end() && !m["StickySession"].empty()) {
      stickySession = make_shared<string>(boost::any_cast<string>(m["StickySession"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules>(model1);
      }
    }
  }


  virtual ~DescribeLoadBalancerHTTPListenerAttributeResponseBody() = default;
};
class DescribeLoadBalancerHTTPListenerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLoadBalancerHTTPListenerAttributeResponseBody> body{};

  DescribeLoadBalancerHTTPListenerAttributeResponse() {}

  explicit DescribeLoadBalancerHTTPListenerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLoadBalancerHTTPListenerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLoadBalancerHTTPListenerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLoadBalancerHTTPListenerAttributeResponse() = default;
};
class DescribeLoadBalancerHTTPSListenerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> ownerAccount{};

  DescribeLoadBalancerHTTPSListenerAttributeRequest() {}

  explicit DescribeLoadBalancerHTTPSListenerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DescribeLoadBalancerHTTPSListenerAttributeRequest() = default;
};
class DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule : public Darabonba::Model {
public:
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> url{};
  shared_ptr<string> domain{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleId{};

  DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule() {}

  explicit DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule() = default;
};
class DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule>> rule{};

  DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRules() {}

  explicit DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule>>(expect1);
      }
    }
  }


  virtual ~DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRules() = default;
};
class DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension : public Darabonba::Model {
public:
  shared_ptr<string> serverCertificateId{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainExtensionId{};

  DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension() {}

  explicit DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverCertificateId) {
      res["ServerCertificateId"] = boost::any(*serverCertificateId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainExtensionId) {
      res["DomainExtensionId"] = boost::any(*domainExtensionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerCertificateId") != m.end() && !m["ServerCertificateId"].empty()) {
      serverCertificateId = make_shared<string>(boost::any_cast<string>(m["ServerCertificateId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainExtensionId") != m.end() && !m["DomainExtensionId"].empty()) {
      domainExtensionId = make_shared<string>(boost::any_cast<string>(m["DomainExtensionId"]));
    }
  }


  virtual ~DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension() = default;
};
class DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension>> domainExtension{};

  DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions() {}

  explicit DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainExtension) {
      vector<boost::any> temp1;
      for(auto item1:*domainExtension){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainExtension"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainExtension") != m.end() && !m["DomainExtension"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainExtension"].type()) {
        vector<DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainExtension"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainExtension = make_shared<vector<DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension>>(expect1);
      }
    }
  }


  virtual ~DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions() = default;
};
class DescribeLoadBalancerHTTPSListenerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aclType{};
  shared_ptr<string> XForwardedFor_ClientCertClientVerify{};
  shared_ptr<string> CACertificateId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> backendServerPort{};
  shared_ptr<long> cookieTimeout{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<string> XForwardedFor{};
  shared_ptr<string> XForwardedFor_ClientCertFingerprint{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> healthCheckURI{};
  shared_ptr<string> XForwardedFor_SLBPORT{};
  shared_ptr<string> stickySessionType{};
  shared_ptr<string> scheduler{};
  shared_ptr<string> XForwardedFor_proto{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> TLSCipherPolicy{};
  shared_ptr<string> status{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> XForwardedFor_ClientSrcPort{};
  shared_ptr<string> cookie{};
  shared_ptr<string> gzip{};
  shared_ptr<string> enableHttp2{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> description{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<string> aclStatus{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<string> XForwardedFor_SLBID{};
  shared_ptr<string> XForwardedFor_ClientCertSubjectDN{};
  shared_ptr<string> securityStatus{};
  shared_ptr<string> healthCheckHttpCode{};
  shared_ptr<long> requestTimeout{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> serverCertificateId{};
  shared_ptr<string> aclId{};
  shared_ptr<string> XForwardedFor_ClientCertIssuerDN{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> XForwardedFor_SLBIP{};
  shared_ptr<string> stickySession{};
  shared_ptr<string> healthCheck{};
  shared_ptr<DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRules> rules{};
  shared_ptr<DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions> domainExtensions{};

  DescribeLoadBalancerHTTPSListenerAttributeResponseBody() {}

  explicit DescribeLoadBalancerHTTPSListenerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (XForwardedFor_ClientCertClientVerify) {
      res["XForwardedFor_ClientCertClientVerify"] = boost::any(*XForwardedFor_ClientCertClientVerify);
    }
    if (CACertificateId) {
      res["CACertificateId"] = boost::any(*CACertificateId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (backendServerPort) {
      res["BackendServerPort"] = boost::any(*backendServerPort);
    }
    if (cookieTimeout) {
      res["CookieTimeout"] = boost::any(*cookieTimeout);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (XForwardedFor) {
      res["XForwardedFor"] = boost::any(*XForwardedFor);
    }
    if (XForwardedFor_ClientCertFingerprint) {
      res["XForwardedFor_ClientCertFingerprint"] = boost::any(*XForwardedFor_ClientCertFingerprint);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (healthCheckURI) {
      res["HealthCheckURI"] = boost::any(*healthCheckURI);
    }
    if (XForwardedFor_SLBPORT) {
      res["XForwardedFor_SLBPORT"] = boost::any(*XForwardedFor_SLBPORT);
    }
    if (stickySessionType) {
      res["StickySessionType"] = boost::any(*stickySessionType);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (XForwardedFor_proto) {
      res["XForwardedFor_proto"] = boost::any(*XForwardedFor_proto);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (TLSCipherPolicy) {
      res["TLSCipherPolicy"] = boost::any(*TLSCipherPolicy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (XForwardedFor_ClientSrcPort) {
      res["XForwardedFor_ClientSrcPort"] = boost::any(*XForwardedFor_ClientSrcPort);
    }
    if (cookie) {
      res["Cookie"] = boost::any(*cookie);
    }
    if (gzip) {
      res["Gzip"] = boost::any(*gzip);
    }
    if (enableHttp2) {
      res["EnableHttp2"] = boost::any(*enableHttp2);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (XForwardedFor_SLBID) {
      res["XForwardedFor_SLBID"] = boost::any(*XForwardedFor_SLBID);
    }
    if (XForwardedFor_ClientCertSubjectDN) {
      res["XForwardedFor_ClientCertSubjectDN"] = boost::any(*XForwardedFor_ClientCertSubjectDN);
    }
    if (securityStatus) {
      res["SecurityStatus"] = boost::any(*securityStatus);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (requestTimeout) {
      res["RequestTimeout"] = boost::any(*requestTimeout);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (serverCertificateId) {
      res["ServerCertificateId"] = boost::any(*serverCertificateId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (XForwardedFor_ClientCertIssuerDN) {
      res["XForwardedFor_ClientCertIssuerDN"] = boost::any(*XForwardedFor_ClientCertIssuerDN);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (XForwardedFor_SLBIP) {
      res["XForwardedFor_SLBIP"] = boost::any(*XForwardedFor_SLBIP);
    }
    if (stickySession) {
      res["StickySession"] = boost::any(*stickySession);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (domainExtensions) {
      res["DomainExtensions"] = domainExtensions ? boost::any(domainExtensions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("XForwardedFor_ClientCertClientVerify") != m.end() && !m["XForwardedFor_ClientCertClientVerify"].empty()) {
      XForwardedFor_ClientCertClientVerify = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_ClientCertClientVerify"]));
    }
    if (m.find("CACertificateId") != m.end() && !m["CACertificateId"].empty()) {
      CACertificateId = make_shared<string>(boost::any_cast<string>(m["CACertificateId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("BackendServerPort") != m.end() && !m["BackendServerPort"].empty()) {
      backendServerPort = make_shared<long>(boost::any_cast<long>(m["BackendServerPort"]));
    }
    if (m.find("CookieTimeout") != m.end() && !m["CookieTimeout"].empty()) {
      cookieTimeout = make_shared<long>(boost::any_cast<long>(m["CookieTimeout"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("XForwardedFor") != m.end() && !m["XForwardedFor"].empty()) {
      XForwardedFor = make_shared<string>(boost::any_cast<string>(m["XForwardedFor"]));
    }
    if (m.find("XForwardedFor_ClientCertFingerprint") != m.end() && !m["XForwardedFor_ClientCertFingerprint"].empty()) {
      XForwardedFor_ClientCertFingerprint = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_ClientCertFingerprint"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("HealthCheckURI") != m.end() && !m["HealthCheckURI"].empty()) {
      healthCheckURI = make_shared<string>(boost::any_cast<string>(m["HealthCheckURI"]));
    }
    if (m.find("XForwardedFor_SLBPORT") != m.end() && !m["XForwardedFor_SLBPORT"].empty()) {
      XForwardedFor_SLBPORT = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBPORT"]));
    }
    if (m.find("StickySessionType") != m.end() && !m["StickySessionType"].empty()) {
      stickySessionType = make_shared<string>(boost::any_cast<string>(m["StickySessionType"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("XForwardedFor_proto") != m.end() && !m["XForwardedFor_proto"].empty()) {
      XForwardedFor_proto = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_proto"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("TLSCipherPolicy") != m.end() && !m["TLSCipherPolicy"].empty()) {
      TLSCipherPolicy = make_shared<string>(boost::any_cast<string>(m["TLSCipherPolicy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("XForwardedFor_ClientSrcPort") != m.end() && !m["XForwardedFor_ClientSrcPort"].empty()) {
      XForwardedFor_ClientSrcPort = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_ClientSrcPort"]));
    }
    if (m.find("Cookie") != m.end() && !m["Cookie"].empty()) {
      cookie = make_shared<string>(boost::any_cast<string>(m["Cookie"]));
    }
    if (m.find("Gzip") != m.end() && !m["Gzip"].empty()) {
      gzip = make_shared<string>(boost::any_cast<string>(m["Gzip"]));
    }
    if (m.find("EnableHttp2") != m.end() && !m["EnableHttp2"].empty()) {
      enableHttp2 = make_shared<string>(boost::any_cast<string>(m["EnableHttp2"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("XForwardedFor_SLBID") != m.end() && !m["XForwardedFor_SLBID"].empty()) {
      XForwardedFor_SLBID = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBID"]));
    }
    if (m.find("XForwardedFor_ClientCertSubjectDN") != m.end() && !m["XForwardedFor_ClientCertSubjectDN"].empty()) {
      XForwardedFor_ClientCertSubjectDN = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_ClientCertSubjectDN"]));
    }
    if (m.find("SecurityStatus") != m.end() && !m["SecurityStatus"].empty()) {
      securityStatus = make_shared<string>(boost::any_cast<string>(m["SecurityStatus"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      healthCheckHttpCode = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpCode"]));
    }
    if (m.find("RequestTimeout") != m.end() && !m["RequestTimeout"].empty()) {
      requestTimeout = make_shared<long>(boost::any_cast<long>(m["RequestTimeout"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("ServerCertificateId") != m.end() && !m["ServerCertificateId"].empty()) {
      serverCertificateId = make_shared<string>(boost::any_cast<string>(m["ServerCertificateId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("XForwardedFor_ClientCertIssuerDN") != m.end() && !m["XForwardedFor_ClientCertIssuerDN"].empty()) {
      XForwardedFor_ClientCertIssuerDN = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_ClientCertIssuerDN"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("XForwardedFor_SLBIP") != m.end() && !m["XForwardedFor_SLBIP"].empty()) {
      XForwardedFor_SLBIP = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBIP"]));
    }
    if (m.find("StickySession") != m.end() && !m["StickySession"].empty()) {
      stickySession = make_shared<string>(boost::any_cast<string>(m["StickySession"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRules>(model1);
      }
    }
    if (m.find("DomainExtensions") != m.end() && !m["DomainExtensions"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainExtensions"].type()) {
        DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainExtensions"]));
        domainExtensions = make_shared<DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions>(model1);
      }
    }
  }


  virtual ~DescribeLoadBalancerHTTPSListenerAttributeResponseBody() = default;
};
class DescribeLoadBalancerHTTPSListenerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLoadBalancerHTTPSListenerAttributeResponseBody> body{};

  DescribeLoadBalancerHTTPSListenerAttributeResponse() {}

  explicit DescribeLoadBalancerHTTPSListenerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLoadBalancerHTTPSListenerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLoadBalancerHTTPSListenerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLoadBalancerHTTPSListenerAttributeResponse() = default;
};
class DescribeLoadBalancerListenersRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<vector<string>> loadBalancerId{};

  DescribeLoadBalancerListenersRequest() {}

  explicit DescribeLoadBalancerListenersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LoadBalancerId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LoadBalancerId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      loadBalancerId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeLoadBalancerListenersRequest() = default;
};
class DescribeLoadBalancerListenersResponseBodyListenersHTTPListenerConfig : public Darabonba::Model {
public:
  shared_ptr<string> healthCheckHttpVersion{};
  shared_ptr<string> XForwardedFor_ClientSrcPort{};
  shared_ptr<string> cookie{};
  shared_ptr<string> gzip{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<string> healthCheckType{};
  shared_ptr<long> cookieTimeout{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<string> XForwardedFor_SLBID{};
  shared_ptr<long> forwardPort{};
  shared_ptr<string> healthCheckHttpCode{};
  shared_ptr<string> listenerForward{};
  shared_ptr<string> XForwardedFor{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<long> requestTimeout{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> XForwardedFor_SLBPORT{};
  shared_ptr<string> healthCheckURI{};
  shared_ptr<string> stickySessionType{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> XForwardedFor_proto{};
  shared_ptr<string> XForwardedFor_SLBIP{};
  shared_ptr<string> stickySession{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> healthCheck{};

  DescribeLoadBalancerListenersResponseBodyListenersHTTPListenerConfig() {}

  explicit DescribeLoadBalancerListenersResponseBodyListenersHTTPListenerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckHttpVersion) {
      res["HealthCheckHttpVersion"] = boost::any(*healthCheckHttpVersion);
    }
    if (XForwardedFor_ClientSrcPort) {
      res["XForwardedFor_ClientSrcPort"] = boost::any(*XForwardedFor_ClientSrcPort);
    }
    if (cookie) {
      res["Cookie"] = boost::any(*cookie);
    }
    if (gzip) {
      res["Gzip"] = boost::any(*gzip);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (healthCheckType) {
      res["HealthCheckType"] = boost::any(*healthCheckType);
    }
    if (cookieTimeout) {
      res["CookieTimeout"] = boost::any(*cookieTimeout);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (XForwardedFor_SLBID) {
      res["XForwardedFor_SLBID"] = boost::any(*XForwardedFor_SLBID);
    }
    if (forwardPort) {
      res["ForwardPort"] = boost::any(*forwardPort);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (listenerForward) {
      res["ListenerForward"] = boost::any(*listenerForward);
    }
    if (XForwardedFor) {
      res["XForwardedFor"] = boost::any(*XForwardedFor);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (requestTimeout) {
      res["RequestTimeout"] = boost::any(*requestTimeout);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (XForwardedFor_SLBPORT) {
      res["XForwardedFor_SLBPORT"] = boost::any(*XForwardedFor_SLBPORT);
    }
    if (healthCheckURI) {
      res["HealthCheckURI"] = boost::any(*healthCheckURI);
    }
    if (stickySessionType) {
      res["StickySessionType"] = boost::any(*stickySessionType);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (XForwardedFor_proto) {
      res["XForwardedFor_proto"] = boost::any(*XForwardedFor_proto);
    }
    if (XForwardedFor_SLBIP) {
      res["XForwardedFor_SLBIP"] = boost::any(*XForwardedFor_SLBIP);
    }
    if (stickySession) {
      res["StickySession"] = boost::any(*stickySession);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckHttpVersion") != m.end() && !m["HealthCheckHttpVersion"].empty()) {
      healthCheckHttpVersion = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpVersion"]));
    }
    if (m.find("XForwardedFor_ClientSrcPort") != m.end() && !m["XForwardedFor_ClientSrcPort"].empty()) {
      XForwardedFor_ClientSrcPort = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_ClientSrcPort"]));
    }
    if (m.find("Cookie") != m.end() && !m["Cookie"].empty()) {
      cookie = make_shared<string>(boost::any_cast<string>(m["Cookie"]));
    }
    if (m.find("Gzip") != m.end() && !m["Gzip"].empty()) {
      gzip = make_shared<string>(boost::any_cast<string>(m["Gzip"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("HealthCheckType") != m.end() && !m["HealthCheckType"].empty()) {
      healthCheckType = make_shared<string>(boost::any_cast<string>(m["HealthCheckType"]));
    }
    if (m.find("CookieTimeout") != m.end() && !m["CookieTimeout"].empty()) {
      cookieTimeout = make_shared<long>(boost::any_cast<long>(m["CookieTimeout"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("XForwardedFor_SLBID") != m.end() && !m["XForwardedFor_SLBID"].empty()) {
      XForwardedFor_SLBID = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBID"]));
    }
    if (m.find("ForwardPort") != m.end() && !m["ForwardPort"].empty()) {
      forwardPort = make_shared<long>(boost::any_cast<long>(m["ForwardPort"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      healthCheckHttpCode = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpCode"]));
    }
    if (m.find("ListenerForward") != m.end() && !m["ListenerForward"].empty()) {
      listenerForward = make_shared<string>(boost::any_cast<string>(m["ListenerForward"]));
    }
    if (m.find("XForwardedFor") != m.end() && !m["XForwardedFor"].empty()) {
      XForwardedFor = make_shared<string>(boost::any_cast<string>(m["XForwardedFor"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("RequestTimeout") != m.end() && !m["RequestTimeout"].empty()) {
      requestTimeout = make_shared<long>(boost::any_cast<long>(m["RequestTimeout"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("XForwardedFor_SLBPORT") != m.end() && !m["XForwardedFor_SLBPORT"].empty()) {
      XForwardedFor_SLBPORT = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBPORT"]));
    }
    if (m.find("HealthCheckURI") != m.end() && !m["HealthCheckURI"].empty()) {
      healthCheckURI = make_shared<string>(boost::any_cast<string>(m["HealthCheckURI"]));
    }
    if (m.find("StickySessionType") != m.end() && !m["StickySessionType"].empty()) {
      stickySessionType = make_shared<string>(boost::any_cast<string>(m["StickySessionType"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("XForwardedFor_proto") != m.end() && !m["XForwardedFor_proto"].empty()) {
      XForwardedFor_proto = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_proto"]));
    }
    if (m.find("XForwardedFor_SLBIP") != m.end() && !m["XForwardedFor_SLBIP"].empty()) {
      XForwardedFor_SLBIP = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBIP"]));
    }
    if (m.find("StickySession") != m.end() && !m["StickySession"].empty()) {
      stickySession = make_shared<string>(boost::any_cast<string>(m["StickySession"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
  }


  virtual ~DescribeLoadBalancerListenersResponseBodyListenersHTTPListenerConfig() = default;
};
class DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig : public Darabonba::Model {
public:
  shared_ptr<string> XForwardedFor_ClientCertClientVerify{};
  shared_ptr<string> healthCheckHttpVersion{};
  shared_ptr<string> XForwardedFor_ClientSrcPort{};
  shared_ptr<string> cookie{};
  shared_ptr<string> gzip{};
  shared_ptr<string> enableHttp2{};
  shared_ptr<string> CACertificateId{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<string> healthCheckType{};
  shared_ptr<long> cookieTimeout{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<string> XForwardedFor_SLBID{};
  shared_ptr<string> XForwardedFor_ClientCertSubjectDN{};
  shared_ptr<string> healthCheckHttpCode{};
  shared_ptr<string> XForwardedFor_ClientCertFingerprint{};
  shared_ptr<string> XForwardedFor{};
  shared_ptr<long> requestTimeout{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<string> serverCertificateId{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> XForwardedFor_SLBPORT{};
  shared_ptr<string> healthCheckURI{};
  shared_ptr<string> stickySessionType{};
  shared_ptr<string> XForwardedFor_ClientCertIssuerDN{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> XForwardedFor_proto{};
  shared_ptr<string> XForwardedFor_SLBIP{};
  shared_ptr<string> stickySession{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> TLSCipherPolicy{};
  shared_ptr<string> healthCheck{};

  DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig() {}

  explicit DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (XForwardedFor_ClientCertClientVerify) {
      res["XForwardedFor_ClientCertClientVerify"] = boost::any(*XForwardedFor_ClientCertClientVerify);
    }
    if (healthCheckHttpVersion) {
      res["HealthCheckHttpVersion"] = boost::any(*healthCheckHttpVersion);
    }
    if (XForwardedFor_ClientSrcPort) {
      res["XForwardedFor_ClientSrcPort"] = boost::any(*XForwardedFor_ClientSrcPort);
    }
    if (cookie) {
      res["Cookie"] = boost::any(*cookie);
    }
    if (gzip) {
      res["Gzip"] = boost::any(*gzip);
    }
    if (enableHttp2) {
      res["EnableHttp2"] = boost::any(*enableHttp2);
    }
    if (CACertificateId) {
      res["CACertificateId"] = boost::any(*CACertificateId);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (healthCheckType) {
      res["HealthCheckType"] = boost::any(*healthCheckType);
    }
    if (cookieTimeout) {
      res["CookieTimeout"] = boost::any(*cookieTimeout);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (XForwardedFor_SLBID) {
      res["XForwardedFor_SLBID"] = boost::any(*XForwardedFor_SLBID);
    }
    if (XForwardedFor_ClientCertSubjectDN) {
      res["XForwardedFor_ClientCertSubjectDN"] = boost::any(*XForwardedFor_ClientCertSubjectDN);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (XForwardedFor_ClientCertFingerprint) {
      res["XForwardedFor_ClientCertFingerprint"] = boost::any(*XForwardedFor_ClientCertFingerprint);
    }
    if (XForwardedFor) {
      res["XForwardedFor"] = boost::any(*XForwardedFor);
    }
    if (requestTimeout) {
      res["RequestTimeout"] = boost::any(*requestTimeout);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (serverCertificateId) {
      res["ServerCertificateId"] = boost::any(*serverCertificateId);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (XForwardedFor_SLBPORT) {
      res["XForwardedFor_SLBPORT"] = boost::any(*XForwardedFor_SLBPORT);
    }
    if (healthCheckURI) {
      res["HealthCheckURI"] = boost::any(*healthCheckURI);
    }
    if (stickySessionType) {
      res["StickySessionType"] = boost::any(*stickySessionType);
    }
    if (XForwardedFor_ClientCertIssuerDN) {
      res["XForwardedFor_ClientCertIssuerDN"] = boost::any(*XForwardedFor_ClientCertIssuerDN);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (XForwardedFor_proto) {
      res["XForwardedFor_proto"] = boost::any(*XForwardedFor_proto);
    }
    if (XForwardedFor_SLBIP) {
      res["XForwardedFor_SLBIP"] = boost::any(*XForwardedFor_SLBIP);
    }
    if (stickySession) {
      res["StickySession"] = boost::any(*stickySession);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (TLSCipherPolicy) {
      res["TLSCipherPolicy"] = boost::any(*TLSCipherPolicy);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("XForwardedFor_ClientCertClientVerify") != m.end() && !m["XForwardedFor_ClientCertClientVerify"].empty()) {
      XForwardedFor_ClientCertClientVerify = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_ClientCertClientVerify"]));
    }
    if (m.find("HealthCheckHttpVersion") != m.end() && !m["HealthCheckHttpVersion"].empty()) {
      healthCheckHttpVersion = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpVersion"]));
    }
    if (m.find("XForwardedFor_ClientSrcPort") != m.end() && !m["XForwardedFor_ClientSrcPort"].empty()) {
      XForwardedFor_ClientSrcPort = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_ClientSrcPort"]));
    }
    if (m.find("Cookie") != m.end() && !m["Cookie"].empty()) {
      cookie = make_shared<string>(boost::any_cast<string>(m["Cookie"]));
    }
    if (m.find("Gzip") != m.end() && !m["Gzip"].empty()) {
      gzip = make_shared<string>(boost::any_cast<string>(m["Gzip"]));
    }
    if (m.find("EnableHttp2") != m.end() && !m["EnableHttp2"].empty()) {
      enableHttp2 = make_shared<string>(boost::any_cast<string>(m["EnableHttp2"]));
    }
    if (m.find("CACertificateId") != m.end() && !m["CACertificateId"].empty()) {
      CACertificateId = make_shared<string>(boost::any_cast<string>(m["CACertificateId"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("HealthCheckType") != m.end() && !m["HealthCheckType"].empty()) {
      healthCheckType = make_shared<string>(boost::any_cast<string>(m["HealthCheckType"]));
    }
    if (m.find("CookieTimeout") != m.end() && !m["CookieTimeout"].empty()) {
      cookieTimeout = make_shared<long>(boost::any_cast<long>(m["CookieTimeout"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("XForwardedFor_SLBID") != m.end() && !m["XForwardedFor_SLBID"].empty()) {
      XForwardedFor_SLBID = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBID"]));
    }
    if (m.find("XForwardedFor_ClientCertSubjectDN") != m.end() && !m["XForwardedFor_ClientCertSubjectDN"].empty()) {
      XForwardedFor_ClientCertSubjectDN = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_ClientCertSubjectDN"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      healthCheckHttpCode = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpCode"]));
    }
    if (m.find("XForwardedFor_ClientCertFingerprint") != m.end() && !m["XForwardedFor_ClientCertFingerprint"].empty()) {
      XForwardedFor_ClientCertFingerprint = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_ClientCertFingerprint"]));
    }
    if (m.find("XForwardedFor") != m.end() && !m["XForwardedFor"].empty()) {
      XForwardedFor = make_shared<string>(boost::any_cast<string>(m["XForwardedFor"]));
    }
    if (m.find("RequestTimeout") != m.end() && !m["RequestTimeout"].empty()) {
      requestTimeout = make_shared<long>(boost::any_cast<long>(m["RequestTimeout"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("ServerCertificateId") != m.end() && !m["ServerCertificateId"].empty()) {
      serverCertificateId = make_shared<string>(boost::any_cast<string>(m["ServerCertificateId"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("XForwardedFor_SLBPORT") != m.end() && !m["XForwardedFor_SLBPORT"].empty()) {
      XForwardedFor_SLBPORT = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBPORT"]));
    }
    if (m.find("HealthCheckURI") != m.end() && !m["HealthCheckURI"].empty()) {
      healthCheckURI = make_shared<string>(boost::any_cast<string>(m["HealthCheckURI"]));
    }
    if (m.find("StickySessionType") != m.end() && !m["StickySessionType"].empty()) {
      stickySessionType = make_shared<string>(boost::any_cast<string>(m["StickySessionType"]));
    }
    if (m.find("XForwardedFor_ClientCertIssuerDN") != m.end() && !m["XForwardedFor_ClientCertIssuerDN"].empty()) {
      XForwardedFor_ClientCertIssuerDN = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_ClientCertIssuerDN"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("XForwardedFor_proto") != m.end() && !m["XForwardedFor_proto"].empty()) {
      XForwardedFor_proto = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_proto"]));
    }
    if (m.find("XForwardedFor_SLBIP") != m.end() && !m["XForwardedFor_SLBIP"].empty()) {
      XForwardedFor_SLBIP = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBIP"]));
    }
    if (m.find("StickySession") != m.end() && !m["StickySession"].empty()) {
      stickySession = make_shared<string>(boost::any_cast<string>(m["StickySession"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("TLSCipherPolicy") != m.end() && !m["TLSCipherPolicy"].empty()) {
      TLSCipherPolicy = make_shared<string>(boost::any_cast<string>(m["TLSCipherPolicy"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
  }


  virtual ~DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig() = default;
};
class DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig : public Darabonba::Model {
public:
  shared_ptr<string> healthCheckHttpCode{};
  shared_ptr<long> connectionDrainTimeout{};
  shared_ptr<long> persistenceTimeout{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckURI{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> establishedTimeout{};
  shared_ptr<string> healthCheckType{};
  shared_ptr<long> healthCheckConnectTimeout{};
  shared_ptr<string> masterSlaveServerGroupId{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<string> connectionDrain{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> healthCheck{};

  DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig() {}

  explicit DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (connectionDrainTimeout) {
      res["ConnectionDrainTimeout"] = boost::any(*connectionDrainTimeout);
    }
    if (persistenceTimeout) {
      res["PersistenceTimeout"] = boost::any(*persistenceTimeout);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckURI) {
      res["HealthCheckURI"] = boost::any(*healthCheckURI);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (establishedTimeout) {
      res["EstablishedTimeout"] = boost::any(*establishedTimeout);
    }
    if (healthCheckType) {
      res["HealthCheckType"] = boost::any(*healthCheckType);
    }
    if (healthCheckConnectTimeout) {
      res["HealthCheckConnectTimeout"] = boost::any(*healthCheckConnectTimeout);
    }
    if (masterSlaveServerGroupId) {
      res["MasterSlaveServerGroupId"] = boost::any(*masterSlaveServerGroupId);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (connectionDrain) {
      res["ConnectionDrain"] = boost::any(*connectionDrain);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      healthCheckHttpCode = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpCode"]));
    }
    if (m.find("ConnectionDrainTimeout") != m.end() && !m["ConnectionDrainTimeout"].empty()) {
      connectionDrainTimeout = make_shared<long>(boost::any_cast<long>(m["ConnectionDrainTimeout"]));
    }
    if (m.find("PersistenceTimeout") != m.end() && !m["PersistenceTimeout"].empty()) {
      persistenceTimeout = make_shared<long>(boost::any_cast<long>(m["PersistenceTimeout"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckURI") != m.end() && !m["HealthCheckURI"].empty()) {
      healthCheckURI = make_shared<string>(boost::any_cast<string>(m["HealthCheckURI"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("EstablishedTimeout") != m.end() && !m["EstablishedTimeout"].empty()) {
      establishedTimeout = make_shared<long>(boost::any_cast<long>(m["EstablishedTimeout"]));
    }
    if (m.find("HealthCheckType") != m.end() && !m["HealthCheckType"].empty()) {
      healthCheckType = make_shared<string>(boost::any_cast<string>(m["HealthCheckType"]));
    }
    if (m.find("HealthCheckConnectTimeout") != m.end() && !m["HealthCheckConnectTimeout"].empty()) {
      healthCheckConnectTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectTimeout"]));
    }
    if (m.find("MasterSlaveServerGroupId") != m.end() && !m["MasterSlaveServerGroupId"].empty()) {
      masterSlaveServerGroupId = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupId"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("ConnectionDrain") != m.end() && !m["ConnectionDrain"].empty()) {
      connectionDrain = make_shared<string>(boost::any_cast<string>(m["ConnectionDrain"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
  }


  virtual ~DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig() = default;
};
class DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig : public Darabonba::Model {
public:
  shared_ptr<long> connectionDrainTimeout{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckExp{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckConnectTimeout{};
  shared_ptr<string> masterSlaveServerGroupId{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<string> connectionDrain{};
  shared_ptr<string> healthCheckReq{};
  shared_ptr<string> healthCheck{};

  DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig() {}

  explicit DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionDrainTimeout) {
      res["ConnectionDrainTimeout"] = boost::any(*connectionDrainTimeout);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckExp) {
      res["HealthCheckExp"] = boost::any(*healthCheckExp);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckConnectTimeout) {
      res["HealthCheckConnectTimeout"] = boost::any(*healthCheckConnectTimeout);
    }
    if (masterSlaveServerGroupId) {
      res["MasterSlaveServerGroupId"] = boost::any(*masterSlaveServerGroupId);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (connectionDrain) {
      res["ConnectionDrain"] = boost::any(*connectionDrain);
    }
    if (healthCheckReq) {
      res["HealthCheckReq"] = boost::any(*healthCheckReq);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionDrainTimeout") != m.end() && !m["ConnectionDrainTimeout"].empty()) {
      connectionDrainTimeout = make_shared<long>(boost::any_cast<long>(m["ConnectionDrainTimeout"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckExp") != m.end() && !m["HealthCheckExp"].empty()) {
      healthCheckExp = make_shared<string>(boost::any_cast<string>(m["HealthCheckExp"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckConnectTimeout") != m.end() && !m["HealthCheckConnectTimeout"].empty()) {
      healthCheckConnectTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectTimeout"]));
    }
    if (m.find("MasterSlaveServerGroupId") != m.end() && !m["MasterSlaveServerGroupId"].empty()) {
      masterSlaveServerGroupId = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupId"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("ConnectionDrain") != m.end() && !m["ConnectionDrain"].empty()) {
      connectionDrain = make_shared<string>(boost::any_cast<string>(m["ConnectionDrain"]));
    }
    if (m.find("HealthCheckReq") != m.end() && !m["HealthCheckReq"].empty()) {
      healthCheckReq = make_shared<string>(boost::any_cast<string>(m["HealthCheckReq"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
  }


  virtual ~DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig() = default;
};
class DescribeLoadBalancerListenersResponseBodyListeners : public Darabonba::Model {
public:
  shared_ptr<string> aclType{};
  shared_ptr<string> status{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> aclId{};
  shared_ptr<string> scheduler{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> description{};
  shared_ptr<string> aclStatus{};
  shared_ptr<long> backendServerPort{};
  shared_ptr<DescribeLoadBalancerListenersResponseBodyListenersHTTPListenerConfig> HTTPListenerConfig{};
  shared_ptr<DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig> HTTPSListenerConfig{};
  shared_ptr<DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig> TCPListenerConfig{};
  shared_ptr<DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig> UDPListenerConfig{};

  DescribeLoadBalancerListenersResponseBodyListeners() {}

  explicit DescribeLoadBalancerListenersResponseBodyListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (backendServerPort) {
      res["BackendServerPort"] = boost::any(*backendServerPort);
    }
    if (HTTPListenerConfig) {
      res["HTTPListenerConfig"] = HTTPListenerConfig ? boost::any(HTTPListenerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (HTTPSListenerConfig) {
      res["HTTPSListenerConfig"] = HTTPSListenerConfig ? boost::any(HTTPSListenerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (TCPListenerConfig) {
      res["TCPListenerConfig"] = TCPListenerConfig ? boost::any(TCPListenerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (UDPListenerConfig) {
      res["UDPListenerConfig"] = UDPListenerConfig ? boost::any(UDPListenerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("BackendServerPort") != m.end() && !m["BackendServerPort"].empty()) {
      backendServerPort = make_shared<long>(boost::any_cast<long>(m["BackendServerPort"]));
    }
    if (m.find("HTTPListenerConfig") != m.end() && !m["HTTPListenerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HTTPListenerConfig"].type()) {
        DescribeLoadBalancerListenersResponseBodyListenersHTTPListenerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HTTPListenerConfig"]));
        HTTPListenerConfig = make_shared<DescribeLoadBalancerListenersResponseBodyListenersHTTPListenerConfig>(model1);
      }
    }
    if (m.find("HTTPSListenerConfig") != m.end() && !m["HTTPSListenerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HTTPSListenerConfig"].type()) {
        DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HTTPSListenerConfig"]));
        HTTPSListenerConfig = make_shared<DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig>(model1);
      }
    }
    if (m.find("TCPListenerConfig") != m.end() && !m["TCPListenerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["TCPListenerConfig"].type()) {
        DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TCPListenerConfig"]));
        TCPListenerConfig = make_shared<DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig>(model1);
      }
    }
    if (m.find("UDPListenerConfig") != m.end() && !m["UDPListenerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["UDPListenerConfig"].type()) {
        DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UDPListenerConfig"]));
        UDPListenerConfig = make_shared<DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig>(model1);
      }
    }
  }


  virtual ~DescribeLoadBalancerListenersResponseBodyListeners() = default;
};
class DescribeLoadBalancerListenersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> maxResults{};
  shared_ptr<vector<DescribeLoadBalancerListenersResponseBodyListeners>> listeners{};

  DescribeLoadBalancerListenersResponseBody() {}

  explicit DescribeLoadBalancerListenersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (listeners) {
      vector<boost::any> temp1;
      for(auto item1:*listeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Listeners"] = boost::any(temp1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      if (typeid(vector<boost::any>) == m["Listeners"].type()) {
        vector<DescribeLoadBalancerListenersResponseBodyListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Listeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLoadBalancerListenersResponseBodyListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listeners = make_shared<vector<DescribeLoadBalancerListenersResponseBodyListeners>>(expect1);
      }
    }
  }


  virtual ~DescribeLoadBalancerListenersResponseBody() = default;
};
class DescribeLoadBalancerListenersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLoadBalancerListenersResponseBody> body{};

  DescribeLoadBalancerListenersResponse() {}

  explicit DescribeLoadBalancerListenersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLoadBalancerListenersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLoadBalancerListenersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLoadBalancerListenersResponse() = default;
};
class DescribeLoadBalancersRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serverId{};
  shared_ptr<string> addressIPVersion{};
  shared_ptr<string> loadBalancerStatus{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<string> serverIntranetAddress{};
  shared_ptr<string> addressType{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> networkType{};
  shared_ptr<string> address{};
  shared_ptr<string> masterZoneId{};
  shared_ptr<string> slaveZoneId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> tags{};
  shared_ptr<string> payType{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeLoadBalancersRequest() {}

  explicit DescribeLoadBalancersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    if (loadBalancerStatus) {
      res["LoadBalancerStatus"] = boost::any(*loadBalancerStatus);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
    }
    if (serverIntranetAddress) {
      res["ServerIntranetAddress"] = boost::any(*serverIntranetAddress);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (masterZoneId) {
      res["MasterZoneId"] = boost::any(*masterZoneId);
    }
    if (slaveZoneId) {
      res["SlaveZoneId"] = boost::any(*slaveZoneId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
    if (m.find("LoadBalancerStatus") != m.end() && !m["LoadBalancerStatus"].empty()) {
      loadBalancerStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerStatus"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
    }
    if (m.find("ServerIntranetAddress") != m.end() && !m["ServerIntranetAddress"].empty()) {
      serverIntranetAddress = make_shared<string>(boost::any_cast<string>(m["ServerIntranetAddress"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("MasterZoneId") != m.end() && !m["MasterZoneId"].empty()) {
      masterZoneId = make_shared<string>(boost::any_cast<string>(m["MasterZoneId"]));
    }
    if (m.find("SlaveZoneId") != m.end() && !m["SlaveZoneId"].empty()) {
      slaveZoneId = make_shared<string>(boost::any_cast<string>(m["SlaveZoneId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeLoadBalancersRequest() = default;
};
class DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<long> createTimeStamp{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> payType{};
  shared_ptr<string> addressType{};
  shared_ptr<string> networkType{};
  shared_ptr<string> addressIPVersion{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> address{};
  shared_ptr<string> slaveZoneId{};
  shared_ptr<string> masterZoneId{};
  shared_ptr<string> internetChargeTypeAlias{};
  shared_ptr<string> loadBalancerSpec{};
  shared_ptr<string> regionId{};
  shared_ptr<string> modificationProtectionReason{};
  shared_ptr<string> modificationProtectionStatus{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> loadBalancerStatus{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<string> deleteProtection{};
  shared_ptr<string> regionIdAlias{};

  DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer() {}

  explicit DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (createTimeStamp) {
      res["CreateTimeStamp"] = boost::any(*createTimeStamp);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (slaveZoneId) {
      res["SlaveZoneId"] = boost::any(*slaveZoneId);
    }
    if (masterZoneId) {
      res["MasterZoneId"] = boost::any(*masterZoneId);
    }
    if (internetChargeTypeAlias) {
      res["InternetChargeTypeAlias"] = boost::any(*internetChargeTypeAlias);
    }
    if (loadBalancerSpec) {
      res["LoadBalancerSpec"] = boost::any(*loadBalancerSpec);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (modificationProtectionReason) {
      res["ModificationProtectionReason"] = boost::any(*modificationProtectionReason);
    }
    if (modificationProtectionStatus) {
      res["ModificationProtectionStatus"] = boost::any(*modificationProtectionStatus);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (loadBalancerStatus) {
      res["LoadBalancerStatus"] = boost::any(*loadBalancerStatus);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (deleteProtection) {
      res["DeleteProtection"] = boost::any(*deleteProtection);
    }
    if (regionIdAlias) {
      res["RegionIdAlias"] = boost::any(*regionIdAlias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("CreateTimeStamp") != m.end() && !m["CreateTimeStamp"].empty()) {
      createTimeStamp = make_shared<long>(boost::any_cast<long>(m["CreateTimeStamp"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("SlaveZoneId") != m.end() && !m["SlaveZoneId"].empty()) {
      slaveZoneId = make_shared<string>(boost::any_cast<string>(m["SlaveZoneId"]));
    }
    if (m.find("MasterZoneId") != m.end() && !m["MasterZoneId"].empty()) {
      masterZoneId = make_shared<string>(boost::any_cast<string>(m["MasterZoneId"]));
    }
    if (m.find("InternetChargeTypeAlias") != m.end() && !m["InternetChargeTypeAlias"].empty()) {
      internetChargeTypeAlias = make_shared<string>(boost::any_cast<string>(m["InternetChargeTypeAlias"]));
    }
    if (m.find("LoadBalancerSpec") != m.end() && !m["LoadBalancerSpec"].empty()) {
      loadBalancerSpec = make_shared<string>(boost::any_cast<string>(m["LoadBalancerSpec"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ModificationProtectionReason") != m.end() && !m["ModificationProtectionReason"].empty()) {
      modificationProtectionReason = make_shared<string>(boost::any_cast<string>(m["ModificationProtectionReason"]));
    }
    if (m.find("ModificationProtectionStatus") != m.end() && !m["ModificationProtectionStatus"].empty()) {
      modificationProtectionStatus = make_shared<string>(boost::any_cast<string>(m["ModificationProtectionStatus"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("LoadBalancerStatus") != m.end() && !m["LoadBalancerStatus"].empty()) {
      loadBalancerStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerStatus"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("DeleteProtection") != m.end() && !m["DeleteProtection"].empty()) {
      deleteProtection = make_shared<string>(boost::any_cast<string>(m["DeleteProtection"]));
    }
    if (m.find("RegionIdAlias") != m.end() && !m["RegionIdAlias"].empty()) {
      regionIdAlias = make_shared<string>(boost::any_cast<string>(m["RegionIdAlias"]));
    }
  }


  virtual ~DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer() = default;
};
class DescribeLoadBalancersResponseBodyLoadBalancers : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer>> loadBalancer{};

  DescribeLoadBalancersResponseBodyLoadBalancers() {}

  explicit DescribeLoadBalancersResponseBodyLoadBalancers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancer) {
      vector<boost::any> temp1;
      for(auto item1:*loadBalancer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LoadBalancer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoadBalancer") != m.end() && !m["LoadBalancer"].empty()) {
      if (typeid(vector<boost::any>) == m["LoadBalancer"].type()) {
        vector<DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LoadBalancer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loadBalancer = make_shared<vector<DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer>>(expect1);
      }
    }
  }


  virtual ~DescribeLoadBalancersResponseBodyLoadBalancers() = default;
};
class DescribeLoadBalancersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeLoadBalancersResponseBodyLoadBalancers> loadBalancers{};

  DescribeLoadBalancersResponseBody() {}

  explicit DescribeLoadBalancersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (loadBalancers) {
      res["LoadBalancers"] = loadBalancers ? boost::any(loadBalancers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("LoadBalancers") != m.end() && !m["LoadBalancers"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadBalancers"].type()) {
        DescribeLoadBalancersResponseBodyLoadBalancers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadBalancers"]));
        loadBalancers = make_shared<DescribeLoadBalancersResponseBodyLoadBalancers>(model1);
      }
    }
  }


  virtual ~DescribeLoadBalancersResponseBody() = default;
};
class DescribeLoadBalancersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLoadBalancersResponseBody> body{};

  DescribeLoadBalancersResponse() {}

  explicit DescribeLoadBalancersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLoadBalancersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLoadBalancersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLoadBalancersResponse() = default;
};
class DescribeLoadBalancerTCPListenerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> ownerAccount{};

  DescribeLoadBalancerTCPListenerAttributeRequest() {}

  explicit DescribeLoadBalancerTCPListenerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DescribeLoadBalancerTCPListenerAttributeRequest() = default;
};
class DescribeLoadBalancerTCPListenerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> aclType{};
  shared_ptr<long> connectionDrainTimeout{};
  shared_ptr<string> requestId{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<string> description{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> healthCheckType{};
  shared_ptr<string> masterSlaveServerGroupId{};
  shared_ptr<long> backendServerPort{};
  shared_ptr<string> aclStatus{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<string> healthCheckHttpCode{};
  shared_ptr<long> persistenceTimeout{};
  shared_ptr<long> listenerPort{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckURI{};
  shared_ptr<string> aclId{};
  shared_ptr<string> synProxy{};
  shared_ptr<string> scheduler{};
  shared_ptr<long> establishedTimeout{};
  shared_ptr<long> healthCheckConnectTimeout{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> connectionDrain{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> healthCheck{};

  DescribeLoadBalancerTCPListenerAttributeResponseBody() {}

  explicit DescribeLoadBalancerTCPListenerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (connectionDrainTimeout) {
      res["ConnectionDrainTimeout"] = boost::any(*connectionDrainTimeout);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (healthCheckType) {
      res["HealthCheckType"] = boost::any(*healthCheckType);
    }
    if (masterSlaveServerGroupId) {
      res["MasterSlaveServerGroupId"] = boost::any(*masterSlaveServerGroupId);
    }
    if (backendServerPort) {
      res["BackendServerPort"] = boost::any(*backendServerPort);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (persistenceTimeout) {
      res["PersistenceTimeout"] = boost::any(*persistenceTimeout);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckURI) {
      res["HealthCheckURI"] = boost::any(*healthCheckURI);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (synProxy) {
      res["SynProxy"] = boost::any(*synProxy);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (establishedTimeout) {
      res["EstablishedTimeout"] = boost::any(*establishedTimeout);
    }
    if (healthCheckConnectTimeout) {
      res["HealthCheckConnectTimeout"] = boost::any(*healthCheckConnectTimeout);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (connectionDrain) {
      res["ConnectionDrain"] = boost::any(*connectionDrain);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("ConnectionDrainTimeout") != m.end() && !m["ConnectionDrainTimeout"].empty()) {
      connectionDrainTimeout = make_shared<long>(boost::any_cast<long>(m["ConnectionDrainTimeout"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("HealthCheckType") != m.end() && !m["HealthCheckType"].empty()) {
      healthCheckType = make_shared<string>(boost::any_cast<string>(m["HealthCheckType"]));
    }
    if (m.find("MasterSlaveServerGroupId") != m.end() && !m["MasterSlaveServerGroupId"].empty()) {
      masterSlaveServerGroupId = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupId"]));
    }
    if (m.find("BackendServerPort") != m.end() && !m["BackendServerPort"].empty()) {
      backendServerPort = make_shared<long>(boost::any_cast<long>(m["BackendServerPort"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      healthCheckHttpCode = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpCode"]));
    }
    if (m.find("PersistenceTimeout") != m.end() && !m["PersistenceTimeout"].empty()) {
      persistenceTimeout = make_shared<long>(boost::any_cast<long>(m["PersistenceTimeout"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckURI") != m.end() && !m["HealthCheckURI"].empty()) {
      healthCheckURI = make_shared<string>(boost::any_cast<string>(m["HealthCheckURI"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("SynProxy") != m.end() && !m["SynProxy"].empty()) {
      synProxy = make_shared<string>(boost::any_cast<string>(m["SynProxy"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("EstablishedTimeout") != m.end() && !m["EstablishedTimeout"].empty()) {
      establishedTimeout = make_shared<long>(boost::any_cast<long>(m["EstablishedTimeout"]));
    }
    if (m.find("HealthCheckConnectTimeout") != m.end() && !m["HealthCheckConnectTimeout"].empty()) {
      healthCheckConnectTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectTimeout"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("ConnectionDrain") != m.end() && !m["ConnectionDrain"].empty()) {
      connectionDrain = make_shared<string>(boost::any_cast<string>(m["ConnectionDrain"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
  }


  virtual ~DescribeLoadBalancerTCPListenerAttributeResponseBody() = default;
};
class DescribeLoadBalancerTCPListenerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLoadBalancerTCPListenerAttributeResponseBody> body{};

  DescribeLoadBalancerTCPListenerAttributeResponse() {}

  explicit DescribeLoadBalancerTCPListenerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLoadBalancerTCPListenerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLoadBalancerTCPListenerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLoadBalancerTCPListenerAttributeResponse() = default;
};
class DescribeLoadBalancerUDPListenerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> ownerAccount{};

  DescribeLoadBalancerUDPListenerAttributeRequest() {}

  explicit DescribeLoadBalancerUDPListenerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DescribeLoadBalancerUDPListenerAttributeRequest() = default;
};
class DescribeLoadBalancerUDPListenerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> aclType{};
  shared_ptr<string> requestId{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<string> description{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> masterSlaveServerGroupId{};
  shared_ptr<long> backendServerPort{};
  shared_ptr<string> aclStatus{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<long> listenerPort{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckExp{};
  shared_ptr<string> aclId{};
  shared_ptr<string> scheduler{};
  shared_ptr<long> healthCheckConnectTimeout{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> healthCheckReq{};
  shared_ptr<string> healthCheck{};

  DescribeLoadBalancerUDPListenerAttributeResponseBody() {}

  explicit DescribeLoadBalancerUDPListenerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (masterSlaveServerGroupId) {
      res["MasterSlaveServerGroupId"] = boost::any(*masterSlaveServerGroupId);
    }
    if (backendServerPort) {
      res["BackendServerPort"] = boost::any(*backendServerPort);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckExp) {
      res["HealthCheckExp"] = boost::any(*healthCheckExp);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (healthCheckConnectTimeout) {
      res["HealthCheckConnectTimeout"] = boost::any(*healthCheckConnectTimeout);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (healthCheckReq) {
      res["HealthCheckReq"] = boost::any(*healthCheckReq);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("MasterSlaveServerGroupId") != m.end() && !m["MasterSlaveServerGroupId"].empty()) {
      masterSlaveServerGroupId = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupId"]));
    }
    if (m.find("BackendServerPort") != m.end() && !m["BackendServerPort"].empty()) {
      backendServerPort = make_shared<long>(boost::any_cast<long>(m["BackendServerPort"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckExp") != m.end() && !m["HealthCheckExp"].empty()) {
      healthCheckExp = make_shared<string>(boost::any_cast<string>(m["HealthCheckExp"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("HealthCheckConnectTimeout") != m.end() && !m["HealthCheckConnectTimeout"].empty()) {
      healthCheckConnectTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectTimeout"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("HealthCheckReq") != m.end() && !m["HealthCheckReq"].empty()) {
      healthCheckReq = make_shared<string>(boost::any_cast<string>(m["HealthCheckReq"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
  }


  virtual ~DescribeLoadBalancerUDPListenerAttributeResponseBody() = default;
};
class DescribeLoadBalancerUDPListenerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLoadBalancerUDPListenerAttributeResponseBody> body{};

  DescribeLoadBalancerUDPListenerAttributeResponse() {}

  explicit DescribeLoadBalancerUDPListenerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLoadBalancerUDPListenerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLoadBalancerUDPListenerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLoadBalancerUDPListenerAttributeResponse() = default;
};
class DescribeMasterSlaveServerGroupAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> masterSlaveServerGroupId{};

  DescribeMasterSlaveServerGroupAttributeRequest() {}

  explicit DescribeMasterSlaveServerGroupAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (masterSlaveServerGroupId) {
      res["MasterSlaveServerGroupId"] = boost::any(*masterSlaveServerGroupId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("MasterSlaveServerGroupId") != m.end() && !m["MasterSlaveServerGroupId"].empty()) {
      masterSlaveServerGroupId = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupId"]));
    }
  }


  virtual ~DescribeMasterSlaveServerGroupAttributeRequest() = default;
};
class DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> weight{};
  shared_ptr<string> description{};
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverType{};

  DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer() {}

  explicit DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
  }


  virtual ~DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer() = default;
};
class DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer>> masterSlaveBackendServer{};

  DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers() {}

  explicit DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (masterSlaveBackendServer) {
      vector<boost::any> temp1;
      for(auto item1:*masterSlaveBackendServer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MasterSlaveBackendServer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MasterSlaveBackendServer") != m.end() && !m["MasterSlaveBackendServer"].empty()) {
      if (typeid(vector<boost::any>) == m["MasterSlaveBackendServer"].type()) {
        vector<DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MasterSlaveBackendServer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        masterSlaveBackendServer = make_shared<vector<DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer>>(expect1);
      }
    }
  }


  virtual ~DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers() = default;
};
class DescribeMasterSlaveServerGroupAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> masterSlaveServerGroupName{};
  shared_ptr<string> masterSlaveServerGroupId{};
  shared_ptr<DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers> masterSlaveBackendServers{};

  DescribeMasterSlaveServerGroupAttributeResponseBody() {}

  explicit DescribeMasterSlaveServerGroupAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (masterSlaveServerGroupName) {
      res["MasterSlaveServerGroupName"] = boost::any(*masterSlaveServerGroupName);
    }
    if (masterSlaveServerGroupId) {
      res["MasterSlaveServerGroupId"] = boost::any(*masterSlaveServerGroupId);
    }
    if (masterSlaveBackendServers) {
      res["MasterSlaveBackendServers"] = masterSlaveBackendServers ? boost::any(masterSlaveBackendServers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("MasterSlaveServerGroupName") != m.end() && !m["MasterSlaveServerGroupName"].empty()) {
      masterSlaveServerGroupName = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupName"]));
    }
    if (m.find("MasterSlaveServerGroupId") != m.end() && !m["MasterSlaveServerGroupId"].empty()) {
      masterSlaveServerGroupId = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupId"]));
    }
    if (m.find("MasterSlaveBackendServers") != m.end() && !m["MasterSlaveBackendServers"].empty()) {
      if (typeid(map<string, boost::any>) == m["MasterSlaveBackendServers"].type()) {
        DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MasterSlaveBackendServers"]));
        masterSlaveBackendServers = make_shared<DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers>(model1);
      }
    }
  }


  virtual ~DescribeMasterSlaveServerGroupAttributeResponseBody() = default;
};
class DescribeMasterSlaveServerGroupAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeMasterSlaveServerGroupAttributeResponseBody> body{};

  DescribeMasterSlaveServerGroupAttributeResponse() {}

  explicit DescribeMasterSlaveServerGroupAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMasterSlaveServerGroupAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMasterSlaveServerGroupAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMasterSlaveServerGroupAttributeResponse() = default;
};
class DescribeMasterSlaveServerGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<bool> includeListener{};

  DescribeMasterSlaveServerGroupsRequest() {}

  explicit DescribeMasterSlaveServerGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (includeListener) {
      res["IncludeListener"] = boost::any(*includeListener);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("IncludeListener") != m.end() && !m["IncludeListener"].empty()) {
      includeListener = make_shared<bool>(boost::any_cast<bool>(m["IncludeListener"]));
    }
  }


  virtual ~DescribeMasterSlaveServerGroupsRequest() = default;
};
class DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener() {}

  explicit DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener() = default;
};
class DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener>> listener{};

  DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners() {}

  explicit DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listener) {
      vector<boost::any> temp1;
      for(auto item1:*listener){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Listener"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Listener") != m.end() && !m["Listener"].empty()) {
      if (typeid(vector<boost::any>) == m["Listener"].type()) {
        vector<DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Listener"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listener = make_shared<vector<DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListenersListener>>(expect1);
      }
    }
  }


  virtual ~DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners() = default;
};
class DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects : public Darabonba::Model {
public:
  shared_ptr<DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners> listeners{};

  DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects() {}

  explicit DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listeners) {
      res["Listeners"] = listeners ? boost::any(listeners->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      if (typeid(map<string, boost::any>) == m["Listeners"].type()) {
        DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Listeners"]));
        listeners = make_shared<DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners>(model1);
      }
    }
  }


  virtual ~DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects() = default;
};
class DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup : public Darabonba::Model {
public:
  shared_ptr<string> masterSlaveServerGroupId{};
  shared_ptr<string> masterSlaveServerGroupName{};
  shared_ptr<DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects> associatedObjects{};

  DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup() {}

  explicit DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (masterSlaveServerGroupId) {
      res["MasterSlaveServerGroupId"] = boost::any(*masterSlaveServerGroupId);
    }
    if (masterSlaveServerGroupName) {
      res["MasterSlaveServerGroupName"] = boost::any(*masterSlaveServerGroupName);
    }
    if (associatedObjects) {
      res["AssociatedObjects"] = associatedObjects ? boost::any(associatedObjects->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MasterSlaveServerGroupId") != m.end() && !m["MasterSlaveServerGroupId"].empty()) {
      masterSlaveServerGroupId = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupId"]));
    }
    if (m.find("MasterSlaveServerGroupName") != m.end() && !m["MasterSlaveServerGroupName"].empty()) {
      masterSlaveServerGroupName = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupName"]));
    }
    if (m.find("AssociatedObjects") != m.end() && !m["AssociatedObjects"].empty()) {
      if (typeid(map<string, boost::any>) == m["AssociatedObjects"].type()) {
        DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AssociatedObjects"]));
        associatedObjects = make_shared<DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects>(model1);
      }
    }
  }


  virtual ~DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup() = default;
};
class DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup>> masterSlaveServerGroup{};

  DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups() {}

  explicit DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (masterSlaveServerGroup) {
      vector<boost::any> temp1;
      for(auto item1:*masterSlaveServerGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MasterSlaveServerGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MasterSlaveServerGroup") != m.end() && !m["MasterSlaveServerGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["MasterSlaveServerGroup"].type()) {
        vector<DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MasterSlaveServerGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        masterSlaveServerGroup = make_shared<vector<DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup>>(expect1);
      }
    }
  }


  virtual ~DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups() = default;
};
class DescribeMasterSlaveServerGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups> masterSlaveServerGroups{};

  DescribeMasterSlaveServerGroupsResponseBody() {}

  explicit DescribeMasterSlaveServerGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (masterSlaveServerGroups) {
      res["MasterSlaveServerGroups"] = masterSlaveServerGroups ? boost::any(masterSlaveServerGroups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("MasterSlaveServerGroups") != m.end() && !m["MasterSlaveServerGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["MasterSlaveServerGroups"].type()) {
        DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MasterSlaveServerGroups"]));
        masterSlaveServerGroups = make_shared<DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups>(model1);
      }
    }
  }


  virtual ~DescribeMasterSlaveServerGroupsResponseBody() = default;
};
class DescribeMasterSlaveServerGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeMasterSlaveServerGroupsResponseBody> body{};

  DescribeMasterSlaveServerGroupsResponse() {}

  explicit DescribeMasterSlaveServerGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMasterSlaveServerGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMasterSlaveServerGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMasterSlaveServerGroupsResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};

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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
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
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
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
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};

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
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
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
class DescribeRuleAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> ruleId{};

  DescribeRuleAttributeRequest() {}

  explicit DescribeRuleAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~DescribeRuleAttributeRequest() = default;
};
class DescribeRuleAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> cookie{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<long> cookieTimeout{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<string> healthCheckHttpCode{};
  shared_ptr<string> domain{};
  shared_ptr<string> listenerPort{};
  shared_ptr<string> url{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckURI{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> stickySessionType{};
  shared_ptr<string> scheduler{};
  shared_ptr<string> listenerSync{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> stickySession{};
  shared_ptr<string> healthCheck{};

  DescribeRuleAttributeResponseBody() {}

  explicit DescribeRuleAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (cookie) {
      res["Cookie"] = boost::any(*cookie);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (cookieTimeout) {
      res["CookieTimeout"] = boost::any(*cookieTimeout);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckURI) {
      res["HealthCheckURI"] = boost::any(*healthCheckURI);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (stickySessionType) {
      res["StickySessionType"] = boost::any(*stickySessionType);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (listenerSync) {
      res["ListenerSync"] = boost::any(*listenerSync);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (stickySession) {
      res["StickySession"] = boost::any(*stickySession);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("Cookie") != m.end() && !m["Cookie"].empty()) {
      cookie = make_shared<string>(boost::any_cast<string>(m["Cookie"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("CookieTimeout") != m.end() && !m["CookieTimeout"].empty()) {
      cookieTimeout = make_shared<long>(boost::any_cast<long>(m["CookieTimeout"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      healthCheckHttpCode = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpCode"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<string>(boost::any_cast<string>(m["ListenerPort"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckURI") != m.end() && !m["HealthCheckURI"].empty()) {
      healthCheckURI = make_shared<string>(boost::any_cast<string>(m["HealthCheckURI"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("StickySessionType") != m.end() && !m["StickySessionType"].empty()) {
      stickySessionType = make_shared<string>(boost::any_cast<string>(m["StickySessionType"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("ListenerSync") != m.end() && !m["ListenerSync"].empty()) {
      listenerSync = make_shared<string>(boost::any_cast<string>(m["ListenerSync"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("StickySession") != m.end() && !m["StickySession"].empty()) {
      stickySession = make_shared<string>(boost::any_cast<string>(m["StickySession"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
  }


  virtual ~DescribeRuleAttributeResponseBody() = default;
};
class DescribeRuleAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRuleAttributeResponseBody> body{};

  DescribeRuleAttributeResponse() {}

  explicit DescribeRuleAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRuleAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRuleAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRuleAttributeResponse() = default;
};
class DescribeRulesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<long> listenerPort{};

  DescribeRulesRequest() {}

  explicit DescribeRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
  }


  virtual ~DescribeRulesRequest() = default;
};
class DescribeRulesResponseBodyRulesRule : public Darabonba::Model {
public:
  shared_ptr<string> healthCheckHttpCode{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> domain{};
  shared_ptr<string> cookie{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> url{};
  shared_ptr<string> healthCheckURI{};
  shared_ptr<string> stickySessionType{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleId{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<string> scheduler{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<string> listenerSync{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> cookieTimeout{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<string> stickySession{};
  shared_ptr<string> healthCheck{};

  DescribeRulesResponseBodyRulesRule() {}

  explicit DescribeRulesResponseBodyRulesRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (cookie) {
      res["Cookie"] = boost::any(*cookie);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (healthCheckURI) {
      res["HealthCheckURI"] = boost::any(*healthCheckURI);
    }
    if (stickySessionType) {
      res["StickySessionType"] = boost::any(*stickySessionType);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (listenerSync) {
      res["ListenerSync"] = boost::any(*listenerSync);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (cookieTimeout) {
      res["CookieTimeout"] = boost::any(*cookieTimeout);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (stickySession) {
      res["StickySession"] = boost::any(*stickySession);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      healthCheckHttpCode = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpCode"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Cookie") != m.end() && !m["Cookie"].empty()) {
      cookie = make_shared<string>(boost::any_cast<string>(m["Cookie"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("HealthCheckURI") != m.end() && !m["HealthCheckURI"].empty()) {
      healthCheckURI = make_shared<string>(boost::any_cast<string>(m["HealthCheckURI"]));
    }
    if (m.find("StickySessionType") != m.end() && !m["StickySessionType"].empty()) {
      stickySessionType = make_shared<string>(boost::any_cast<string>(m["StickySessionType"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("ListenerSync") != m.end() && !m["ListenerSync"].empty()) {
      listenerSync = make_shared<string>(boost::any_cast<string>(m["ListenerSync"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("CookieTimeout") != m.end() && !m["CookieTimeout"].empty()) {
      cookieTimeout = make_shared<long>(boost::any_cast<long>(m["CookieTimeout"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("StickySession") != m.end() && !m["StickySession"].empty()) {
      stickySession = make_shared<string>(boost::any_cast<string>(m["StickySession"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
  }


  virtual ~DescribeRulesResponseBodyRulesRule() = default;
};
class DescribeRulesResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRulesResponseBodyRulesRule>> rule{};

  DescribeRulesResponseBodyRules() {}

  explicit DescribeRulesResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<DescribeRulesResponseBodyRulesRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRulesResponseBodyRulesRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<DescribeRulesResponseBodyRulesRule>>(expect1);
      }
    }
  }


  virtual ~DescribeRulesResponseBodyRules() = default;
};
class DescribeRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRulesResponseBodyRules> rules{};

  DescribeRulesResponseBody() {}

  explicit DescribeRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        DescribeRulesResponseBodyRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<DescribeRulesResponseBodyRules>(model1);
      }
    }
  }


  virtual ~DescribeRulesResponseBody() = default;
};
class DescribeRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRulesResponseBody> body{};

  DescribeRulesResponse() {}

  explicit DescribeRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRulesResponse() = default;
};
class DescribeServerCertificatesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serverCertificateId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> resourceGroupId{};

  DescribeServerCertificatesRequest() {}

  explicit DescribeServerCertificatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serverCertificateId) {
      res["ServerCertificateId"] = boost::any(*serverCertificateId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("ServerCertificateId") != m.end() && !m["ServerCertificateId"].empty()) {
      serverCertificateId = make_shared<string>(boost::any_cast<string>(m["ServerCertificateId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeServerCertificatesRequest() = default;
};
class DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateSubjectAlternativeNames : public Darabonba::Model {
public:
  shared_ptr<vector<string>> subjectAlternativeName{};

  DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateSubjectAlternativeNames() {}

  explicit DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateSubjectAlternativeNames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subjectAlternativeName) {
      res["SubjectAlternativeName"] = boost::any(*subjectAlternativeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubjectAlternativeName") != m.end() && !m["SubjectAlternativeName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubjectAlternativeName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubjectAlternativeName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subjectAlternativeName = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateSubjectAlternativeNames() = default;
};
class DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate : public Darabonba::Model {
public:
  shared_ptr<long> createTimeStamp{};
  shared_ptr<string> aliCloudCertificateName{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> serverCertificateId{};
  shared_ptr<long> expireTimeStamp{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serverCertificateName{};
  shared_ptr<string> fingerprint{};
  shared_ptr<string> commonName{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> isAliCloudCertificate{};
  shared_ptr<string> aliCloudCertificateId{};
  shared_ptr<DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateSubjectAlternativeNames> subjectAlternativeNames{};

  DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate() {}

  explicit DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimeStamp) {
      res["CreateTimeStamp"] = boost::any(*createTimeStamp);
    }
    if (aliCloudCertificateName) {
      res["AliCloudCertificateName"] = boost::any(*aliCloudCertificateName);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (serverCertificateId) {
      res["ServerCertificateId"] = boost::any(*serverCertificateId);
    }
    if (expireTimeStamp) {
      res["ExpireTimeStamp"] = boost::any(*expireTimeStamp);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serverCertificateName) {
      res["ServerCertificateName"] = boost::any(*serverCertificateName);
    }
    if (fingerprint) {
      res["Fingerprint"] = boost::any(*fingerprint);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (isAliCloudCertificate) {
      res["IsAliCloudCertificate"] = boost::any(*isAliCloudCertificate);
    }
    if (aliCloudCertificateId) {
      res["AliCloudCertificateId"] = boost::any(*aliCloudCertificateId);
    }
    if (subjectAlternativeNames) {
      res["SubjectAlternativeNames"] = subjectAlternativeNames ? boost::any(subjectAlternativeNames->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimeStamp") != m.end() && !m["CreateTimeStamp"].empty()) {
      createTimeStamp = make_shared<long>(boost::any_cast<long>(m["CreateTimeStamp"]));
    }
    if (m.find("AliCloudCertificateName") != m.end() && !m["AliCloudCertificateName"].empty()) {
      aliCloudCertificateName = make_shared<string>(boost::any_cast<string>(m["AliCloudCertificateName"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ServerCertificateId") != m.end() && !m["ServerCertificateId"].empty()) {
      serverCertificateId = make_shared<string>(boost::any_cast<string>(m["ServerCertificateId"]));
    }
    if (m.find("ExpireTimeStamp") != m.end() && !m["ExpireTimeStamp"].empty()) {
      expireTimeStamp = make_shared<long>(boost::any_cast<long>(m["ExpireTimeStamp"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServerCertificateName") != m.end() && !m["ServerCertificateName"].empty()) {
      serverCertificateName = make_shared<string>(boost::any_cast<string>(m["ServerCertificateName"]));
    }
    if (m.find("Fingerprint") != m.end() && !m["Fingerprint"].empty()) {
      fingerprint = make_shared<string>(boost::any_cast<string>(m["Fingerprint"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("IsAliCloudCertificate") != m.end() && !m["IsAliCloudCertificate"].empty()) {
      isAliCloudCertificate = make_shared<long>(boost::any_cast<long>(m["IsAliCloudCertificate"]));
    }
    if (m.find("AliCloudCertificateId") != m.end() && !m["AliCloudCertificateId"].empty()) {
      aliCloudCertificateId = make_shared<string>(boost::any_cast<string>(m["AliCloudCertificateId"]));
    }
    if (m.find("SubjectAlternativeNames") != m.end() && !m["SubjectAlternativeNames"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubjectAlternativeNames"].type()) {
        DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateSubjectAlternativeNames model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubjectAlternativeNames"]));
        subjectAlternativeNames = make_shared<DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateSubjectAlternativeNames>(model1);
      }
    }
  }


  virtual ~DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate() = default;
};
class DescribeServerCertificatesResponseBodyServerCertificates : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate>> serverCertificate{};

  DescribeServerCertificatesResponseBodyServerCertificates() {}

  explicit DescribeServerCertificatesResponseBodyServerCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverCertificate) {
      vector<boost::any> temp1;
      for(auto item1:*serverCertificate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerCertificate"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerCertificate") != m.end() && !m["ServerCertificate"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerCertificate"].type()) {
        vector<DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerCertificate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverCertificate = make_shared<vector<DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate>>(expect1);
      }
    }
  }


  virtual ~DescribeServerCertificatesResponseBodyServerCertificates() = default;
};
class DescribeServerCertificatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeServerCertificatesResponseBodyServerCertificates> serverCertificates{};

  DescribeServerCertificatesResponseBody() {}

  explicit DescribeServerCertificatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverCertificates) {
      res["ServerCertificates"] = serverCertificates ? boost::any(serverCertificates->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerCertificates") != m.end() && !m["ServerCertificates"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerCertificates"].type()) {
        DescribeServerCertificatesResponseBodyServerCertificates model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerCertificates"]));
        serverCertificates = make_shared<DescribeServerCertificatesResponseBodyServerCertificates>(model1);
      }
    }
  }


  virtual ~DescribeServerCertificatesResponseBody() = default;
};
class DescribeServerCertificatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeServerCertificatesResponseBody> body{};

  DescribeServerCertificatesResponse() {}

  explicit DescribeServerCertificatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeServerCertificatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServerCertificatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServerCertificatesResponse() = default;
};
class DescribeTagsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> tags{};
  shared_ptr<bool> distinctKey{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeTagsRequest() {}

  explicit DescribeTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (distinctKey) {
      res["DistinctKey"] = boost::any(*distinctKey);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("DistinctKey") != m.end() && !m["DistinctKey"].empty()) {
      distinctKey = make_shared<bool>(boost::any_cast<bool>(m["DistinctKey"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeTagsRequest() = default;
};
class DescribeTagsResponseBodyTagSetsTagSet : public Darabonba::Model {
public:
  shared_ptr<string> tagValue{};
  shared_ptr<long> instanceCount{};
  shared_ptr<string> tagKey{};

  DescribeTagsResponseBodyTagSetsTagSet() {}

  explicit DescribeTagsResponseBodyTagSetsTagSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
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
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~DescribeTagsResponseBodyTagSetsTagSet() = default;
};
class DescribeTagsResponseBodyTagSets : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTagsResponseBodyTagSetsTagSet>> tagSet{};

  DescribeTagsResponseBodyTagSets() {}

  explicit DescribeTagsResponseBodyTagSets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagSet) {
      vector<boost::any> temp1;
      for(auto item1:*tagSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagSet"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagSet") != m.end() && !m["TagSet"].empty()) {
      if (typeid(vector<boost::any>) == m["TagSet"].type()) {
        vector<DescribeTagsResponseBodyTagSetsTagSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTagsResponseBodyTagSetsTagSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagSet = make_shared<vector<DescribeTagsResponseBodyTagSetsTagSet>>(expect1);
      }
    }
  }


  virtual ~DescribeTagsResponseBodyTagSets() = default;
};
class DescribeTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeTagsResponseBodyTagSets> tagSets{};

  DescribeTagsResponseBody() {}

  explicit DescribeTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (tagSets) {
      res["TagSets"] = tagSets ? boost::any(tagSets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TagSets") != m.end() && !m["TagSets"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagSets"].type()) {
        DescribeTagsResponseBodyTagSets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagSets"]));
        tagSets = make_shared<DescribeTagsResponseBodyTagSets>(model1);
      }
    }
  }


  virtual ~DescribeTagsResponseBody() = default;
};
class DescribeTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTagsResponseBody> body{};

  DescribeTagsResponse() {}

  explicit DescribeTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTagsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTagsResponse() = default;
};
class DescribeVServerGroupAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> VServerGroupId{};

  DescribeVServerGroupAttributeRequest() {}

  explicit DescribeVServerGroupAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
  }


  virtual ~DescribeVServerGroupAttributeRequest() = default;
};
class DescribeVServerGroupAttributeResponseBodyBackendServersBackendServer : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> weight{};
  shared_ptr<string> description{};
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};

  DescribeVServerGroupAttributeResponseBodyBackendServersBackendServer() {}

  explicit DescribeVServerGroupAttributeResponseBodyBackendServersBackendServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
  }


  virtual ~DescribeVServerGroupAttributeResponseBodyBackendServersBackendServer() = default;
};
class DescribeVServerGroupAttributeResponseBodyBackendServers : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVServerGroupAttributeResponseBodyBackendServersBackendServer>> backendServer{};

  DescribeVServerGroupAttributeResponseBodyBackendServers() {}

  explicit DescribeVServerGroupAttributeResponseBodyBackendServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendServer) {
      vector<boost::any> temp1;
      for(auto item1:*backendServer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackendServer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendServer") != m.end() && !m["BackendServer"].empty()) {
      if (typeid(vector<boost::any>) == m["BackendServer"].type()) {
        vector<DescribeVServerGroupAttributeResponseBodyBackendServersBackendServer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackendServer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVServerGroupAttributeResponseBodyBackendServersBackendServer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backendServer = make_shared<vector<DescribeVServerGroupAttributeResponseBodyBackendServersBackendServer>>(expect1);
      }
    }
  }


  virtual ~DescribeVServerGroupAttributeResponseBodyBackendServers() = default;
};
class DescribeVServerGroupAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> VServerGroupName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<DescribeVServerGroupAttributeResponseBodyBackendServers> backendServers{};

  DescribeVServerGroupAttributeResponseBody() {}

  explicit DescribeVServerGroupAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (VServerGroupName) {
      res["VServerGroupName"] = boost::any(*VServerGroupName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (backendServers) {
      res["BackendServers"] = backendServers ? boost::any(backendServers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("VServerGroupName") != m.end() && !m["VServerGroupName"].empty()) {
      VServerGroupName = make_shared<string>(boost::any_cast<string>(m["VServerGroupName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackendServers"].type()) {
        DescribeVServerGroupAttributeResponseBodyBackendServers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackendServers"]));
        backendServers = make_shared<DescribeVServerGroupAttributeResponseBodyBackendServers>(model1);
      }
    }
  }


  virtual ~DescribeVServerGroupAttributeResponseBody() = default;
};
class DescribeVServerGroupAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVServerGroupAttributeResponseBody> body{};

  DescribeVServerGroupAttributeResponse() {}

  explicit DescribeVServerGroupAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVServerGroupAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVServerGroupAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVServerGroupAttributeResponse() = default;
};
class DescribeVServerGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<bool> includeRule{};
  shared_ptr<bool> includeListener{};

  DescribeVServerGroupsRequest() {}

  explicit DescribeVServerGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (includeRule) {
      res["IncludeRule"] = boost::any(*includeRule);
    }
    if (includeListener) {
      res["IncludeListener"] = boost::any(*includeListener);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("IncludeRule") != m.end() && !m["IncludeRule"].empty()) {
      includeRule = make_shared<bool>(boost::any_cast<bool>(m["IncludeRule"]));
    }
    if (m.find("IncludeListener") != m.end() && !m["IncludeListener"].empty()) {
      includeListener = make_shared<bool>(boost::any_cast<bool>(m["IncludeListener"]));
    }
  }


  virtual ~DescribeVServerGroupsRequest() = default;
};
class DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener() {}

  explicit DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener() = default;
};
class DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener>> listener{};

  DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners() {}

  explicit DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listener) {
      vector<boost::any> temp1;
      for(auto item1:*listener){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Listener"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Listener") != m.end() && !m["Listener"].empty()) {
      if (typeid(vector<boost::any>) == m["Listener"].type()) {
        vector<DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Listener"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listener = make_shared<vector<DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener>>(expect1);
      }
    }
  }


  virtual ~DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners() = default;
};
class DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> domain{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleId{};

  DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule() {}

  explicit DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule() = default;
};
class DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule>> rule{};

  DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules() {}

  explicit DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule>>(expect1);
      }
    }
  }


  virtual ~DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules() = default;
};
class DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects : public Darabonba::Model {
public:
  shared_ptr<DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners> listeners{};
  shared_ptr<DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules> rules{};

  DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects() {}

  explicit DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listeners) {
      res["Listeners"] = listeners ? boost::any(listeners->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      if (typeid(map<string, boost::any>) == m["Listeners"].type()) {
        DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Listeners"]));
        listeners = make_shared<DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners>(model1);
      }
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules>(model1);
      }
    }
  }


  virtual ~DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects() = default;
};
class DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup : public Darabonba::Model {
public:
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> VServerGroupName{};
  shared_ptr<DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects> associatedObjects{};

  DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup() {}

  explicit DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (VServerGroupName) {
      res["VServerGroupName"] = boost::any(*VServerGroupName);
    }
    if (associatedObjects) {
      res["AssociatedObjects"] = associatedObjects ? boost::any(associatedObjects->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("VServerGroupName") != m.end() && !m["VServerGroupName"].empty()) {
      VServerGroupName = make_shared<string>(boost::any_cast<string>(m["VServerGroupName"]));
    }
    if (m.find("AssociatedObjects") != m.end() && !m["AssociatedObjects"].empty()) {
      if (typeid(map<string, boost::any>) == m["AssociatedObjects"].type()) {
        DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AssociatedObjects"]));
        associatedObjects = make_shared<DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects>(model1);
      }
    }
  }


  virtual ~DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup() = default;
};
class DescribeVServerGroupsResponseBodyVServerGroups : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup>> VServerGroup{};

  DescribeVServerGroupsResponseBodyVServerGroups() {}

  explicit DescribeVServerGroupsResponseBodyVServerGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroup) {
      vector<boost::any> temp1;
      for(auto item1:*VServerGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VServerGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroup") != m.end() && !m["VServerGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["VServerGroup"].type()) {
        vector<DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VServerGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        VServerGroup = make_shared<vector<DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup>>(expect1);
      }
    }
  }


  virtual ~DescribeVServerGroupsResponseBodyVServerGroups() = default;
};
class DescribeVServerGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeVServerGroupsResponseBodyVServerGroups> VServerGroups{};

  DescribeVServerGroupsResponseBody() {}

  explicit DescribeVServerGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (VServerGroups) {
      res["VServerGroups"] = VServerGroups ? boost::any(VServerGroups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VServerGroups") != m.end() && !m["VServerGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["VServerGroups"].type()) {
        DescribeVServerGroupsResponseBodyVServerGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VServerGroups"]));
        VServerGroups = make_shared<DescribeVServerGroupsResponseBodyVServerGroups>(model1);
      }
    }
  }


  virtual ~DescribeVServerGroupsResponseBody() = default;
};
class DescribeVServerGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVServerGroupsResponseBody> body{};

  DescribeVServerGroupsResponse() {}

  explicit DescribeVServerGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVServerGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVServerGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVServerGroupsResponse() = default;
};
class DescribeZonesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};

  DescribeZonesRequest() {}

  explicit DescribeZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeZonesRequest() = default;
};
class DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone : public Darabonba::Model {
public:
  shared_ptr<string> zoneId{};
  shared_ptr<string> localName{};

  DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone() {}

  explicit DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
  }


  virtual ~DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone() = default;
};
class DescribeZonesResponseBodyZonesZoneSlaveZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone>> slaveZone{};

  DescribeZonesResponseBodyZonesZoneSlaveZones() {}

  explicit DescribeZonesResponseBodyZonesZoneSlaveZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slaveZone) {
      vector<boost::any> temp1;
      for(auto item1:*slaveZone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlaveZone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SlaveZone") != m.end() && !m["SlaveZone"].empty()) {
      if (typeid(vector<boost::any>) == m["SlaveZone"].type()) {
        vector<DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlaveZone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slaveZone = make_shared<vector<DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone>>(expect1);
      }
    }
  }


  virtual ~DescribeZonesResponseBodyZonesZoneSlaveZones() = default;
};
class DescribeZonesResponseBodyZonesZone : public Darabonba::Model {
public:
  shared_ptr<string> zoneId{};
  shared_ptr<string> localName{};
  shared_ptr<DescribeZonesResponseBodyZonesZoneSlaveZones> slaveZones{};

  DescribeZonesResponseBodyZonesZone() {}

  explicit DescribeZonesResponseBodyZonesZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (slaveZones) {
      res["SlaveZones"] = slaveZones ? boost::any(slaveZones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("SlaveZones") != m.end() && !m["SlaveZones"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlaveZones"].type()) {
        DescribeZonesResponseBodyZonesZoneSlaveZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlaveZones"]));
        slaveZones = make_shared<DescribeZonesResponseBodyZonesZoneSlaveZones>(model1);
      }
    }
  }


  virtual ~DescribeZonesResponseBodyZonesZone() = default;
};
class DescribeZonesResponseBodyZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeZonesResponseBodyZonesZone>> zone{};

  DescribeZonesResponseBodyZones() {}

  explicit DescribeZonesResponseBodyZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zone) {
      vector<boost::any> temp1;
      for(auto item1:*zone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      if (typeid(vector<boost::any>) == m["Zone"].type()) {
        vector<DescribeZonesResponseBodyZonesZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZonesResponseBodyZonesZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zone = make_shared<vector<DescribeZonesResponseBodyZonesZone>>(expect1);
      }
    }
  }


  virtual ~DescribeZonesResponseBodyZones() = default;
};
class DescribeZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeZonesResponseBodyZones> zones{};

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
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Zones"].type()) {
        DescribeZonesResponseBodyZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Zones"]));
        zones = make_shared<DescribeZonesResponseBodyZones>(model1);
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
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
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
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
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> tagValue{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tagKey{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagResourcesResponseBodyTagResourcesTagResource() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagResourcesResponseBodyTagResourcesTagResource>> tagResource{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagResource) {
      vector<boost::any> temp1;
      for(auto item1:*tagResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagResource") != m.end() && !m["TagResource"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResource"].type()) {
        vector<ListTagResourcesResponseBodyTagResourcesTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResourcesTagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResource = make_shared<vector<ListTagResourcesResponseBodyTagResourcesTagResource>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources{};

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
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
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
      if (typeid(map<string, boost::any>) == m["TagResources"].type()) {
        ListTagResourcesResponseBodyTagResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagResources"]));
        tagResources = make_shared<ListTagResourcesResponseBodyTagResources>(model1);
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
class ListTLSCipherPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> TLSCipherPolicyId{};
  shared_ptr<string> name{};
  shared_ptr<bool> includeListener{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxItems{};

  ListTLSCipherPoliciesRequest() {}

  explicit ListTLSCipherPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (accessKeyId) {
      res["access_key_id"] = boost::any(*accessKeyId);
    }
    if (TLSCipherPolicyId) {
      res["TLSCipherPolicyId"] = boost::any(*TLSCipherPolicyId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (includeListener) {
      res["IncludeListener"] = boost::any(*includeListener);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxItems) {
      res["MaxItems"] = boost::any(*maxItems);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("access_key_id") != m.end() && !m["access_key_id"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["access_key_id"]));
    }
    if (m.find("TLSCipherPolicyId") != m.end() && !m["TLSCipherPolicyId"].empty()) {
      TLSCipherPolicyId = make_shared<string>(boost::any_cast<string>(m["TLSCipherPolicyId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("IncludeListener") != m.end() && !m["IncludeListener"].empty()) {
      includeListener = make_shared<bool>(boost::any_cast<bool>(m["IncludeListener"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
  }


  virtual ~ListTLSCipherPoliciesRequest() = default;
};
class ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> loadBalancerId{};

  ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners() {}

  explicit ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
  }


  virtual ~ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners() = default;
};
class ListTLSCipherPoliciesResponseBodyTLSCipherPolicies : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<long> createTime{};
  shared_ptr<vector<ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners>> relateListeners{};
  shared_ptr<vector<string>> TLSVersions{};
  shared_ptr<vector<string>> ciphers{};

  ListTLSCipherPoliciesResponseBodyTLSCipherPolicies() {}

  explicit ListTLSCipherPoliciesResponseBodyTLSCipherPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (relateListeners) {
      vector<boost::any> temp1;
      for(auto item1:*relateListeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelateListeners"] = boost::any(temp1);
    }
    if (TLSVersions) {
      res["TLSVersions"] = boost::any(*TLSVersions);
    }
    if (ciphers) {
      res["Ciphers"] = boost::any(*ciphers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("RelateListeners") != m.end() && !m["RelateListeners"].empty()) {
      if (typeid(vector<boost::any>) == m["RelateListeners"].type()) {
        vector<ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelateListeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relateListeners = make_shared<vector<ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners>>(expect1);
      }
    }
    if (m.find("TLSVersions") != m.end() && !m["TLSVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TLSVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TLSVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      TLSVersions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Ciphers") != m.end() && !m["Ciphers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ciphers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ciphers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ciphers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTLSCipherPoliciesResponseBodyTLSCipherPolicies() = default;
};
class ListTLSCipherPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<vector<ListTLSCipherPoliciesResponseBodyTLSCipherPolicies>> TLSCipherPolicies{};

  ListTLSCipherPoliciesResponseBody() {}

  explicit ListTLSCipherPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (TLSCipherPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*TLSCipherPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TLSCipherPolicies"] = boost::any(temp1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("TLSCipherPolicies") != m.end() && !m["TLSCipherPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["TLSCipherPolicies"].type()) {
        vector<ListTLSCipherPoliciesResponseBodyTLSCipherPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TLSCipherPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTLSCipherPoliciesResponseBodyTLSCipherPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        TLSCipherPolicies = make_shared<vector<ListTLSCipherPoliciesResponseBodyTLSCipherPolicies>>(expect1);
      }
    }
  }


  virtual ~ListTLSCipherPoliciesResponseBody() = default;
};
class ListTLSCipherPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTLSCipherPoliciesResponseBody> body{};

  ListTLSCipherPoliciesResponse() {}

  explicit ListTLSCipherPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTLSCipherPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTLSCipherPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTLSCipherPoliciesResponse() = default;
};
class ModifyLoadBalancerInstanceSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> loadBalancerSpec{};
  shared_ptr<bool> autoPay{};

  ModifyLoadBalancerInstanceSpecRequest() {}

  explicit ModifyLoadBalancerInstanceSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (loadBalancerSpec) {
      res["LoadBalancerSpec"] = boost::any(*loadBalancerSpec);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("LoadBalancerSpec") != m.end() && !m["LoadBalancerSpec"].empty()) {
      loadBalancerSpec = make_shared<string>(boost::any_cast<string>(m["LoadBalancerSpec"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
  }


  virtual ~ModifyLoadBalancerInstanceSpecRequest() = default;
};
class ModifyLoadBalancerInstanceSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  ModifyLoadBalancerInstanceSpecResponseBody() {}

  explicit ModifyLoadBalancerInstanceSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyLoadBalancerInstanceSpecResponseBody() = default;
};
class ModifyLoadBalancerInstanceSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyLoadBalancerInstanceSpecResponseBody> body{};

  ModifyLoadBalancerInstanceSpecResponse() {}

  explicit ModifyLoadBalancerInstanceSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyLoadBalancerInstanceSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyLoadBalancerInstanceSpecResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyLoadBalancerInstanceSpecResponse() = default;
};
class ModifyLoadBalancerInternetSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<bool> autoPay{};

  ModifyLoadBalancerInternetSpecRequest() {}

  explicit ModifyLoadBalancerInternetSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
  }


  virtual ~ModifyLoadBalancerInternetSpecRequest() = default;
};
class ModifyLoadBalancerInternetSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  ModifyLoadBalancerInternetSpecResponseBody() {}

  explicit ModifyLoadBalancerInternetSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyLoadBalancerInternetSpecResponseBody() = default;
};
class ModifyLoadBalancerInternetSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyLoadBalancerInternetSpecResponseBody> body{};

  ModifyLoadBalancerInternetSpecResponse() {}

  explicit ModifyLoadBalancerInternetSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyLoadBalancerInternetSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyLoadBalancerInternetSpecResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyLoadBalancerInternetSpecResponse() = default;
};
class ModifyLoadBalancerPayTypeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<long> duration{};
  shared_ptr<bool> autoPay{};

  ModifyLoadBalancerPayTypeRequest() {}

  explicit ModifyLoadBalancerPayTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
  }


  virtual ~ModifyLoadBalancerPayTypeRequest() = default;
};
class ModifyLoadBalancerPayTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  ModifyLoadBalancerPayTypeResponseBody() {}

  explicit ModifyLoadBalancerPayTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyLoadBalancerPayTypeResponseBody() = default;
};
class ModifyLoadBalancerPayTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyLoadBalancerPayTypeResponseBody> body{};

  ModifyLoadBalancerPayTypeResponse() {}

  explicit ModifyLoadBalancerPayTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyLoadBalancerPayTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyLoadBalancerPayTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyLoadBalancerPayTypeResponse() = default;
};
class ModifyVServerGroupBackendServersRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> oldBackendServers{};
  shared_ptr<string> newBackendServers{};

  ModifyVServerGroupBackendServersRequest() {}

  explicit ModifyVServerGroupBackendServersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (oldBackendServers) {
      res["OldBackendServers"] = boost::any(*oldBackendServers);
    }
    if (newBackendServers) {
      res["NewBackendServers"] = boost::any(*newBackendServers);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("OldBackendServers") != m.end() && !m["OldBackendServers"].empty()) {
      oldBackendServers = make_shared<string>(boost::any_cast<string>(m["OldBackendServers"]));
    }
    if (m.find("NewBackendServers") != m.end() && !m["NewBackendServers"].empty()) {
      newBackendServers = make_shared<string>(boost::any_cast<string>(m["NewBackendServers"]));
    }
  }


  virtual ~ModifyVServerGroupBackendServersRequest() = default;
};
class ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> weight{};
  shared_ptr<string> description{};
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};

  ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer() {}

  explicit ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
  }


  virtual ~ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer() = default;
};
class ModifyVServerGroupBackendServersResponseBodyBackendServers : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer>> backendServer{};

  ModifyVServerGroupBackendServersResponseBodyBackendServers() {}

  explicit ModifyVServerGroupBackendServersResponseBodyBackendServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendServer) {
      vector<boost::any> temp1;
      for(auto item1:*backendServer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackendServer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendServer") != m.end() && !m["BackendServer"].empty()) {
      if (typeid(vector<boost::any>) == m["BackendServer"].type()) {
        vector<ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackendServer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backendServer = make_shared<vector<ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer>>(expect1);
      }
    }
  }


  virtual ~ModifyVServerGroupBackendServersResponseBodyBackendServers() = default;
};
class ModifyVServerGroupBackendServersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> requestId{};
  shared_ptr<ModifyVServerGroupBackendServersResponseBodyBackendServers> backendServers{};

  ModifyVServerGroupBackendServersResponseBody() {}

  explicit ModifyVServerGroupBackendServersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (backendServers) {
      res["BackendServers"] = backendServers ? boost::any(backendServers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackendServers"].type()) {
        ModifyVServerGroupBackendServersResponseBodyBackendServers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackendServers"]));
        backendServers = make_shared<ModifyVServerGroupBackendServersResponseBodyBackendServers>(model1);
      }
    }
  }


  virtual ~ModifyVServerGroupBackendServersResponseBody() = default;
};
class ModifyVServerGroupBackendServersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyVServerGroupBackendServersResponseBody> body{};

  ModifyVServerGroupBackendServersResponse() {}

  explicit ModifyVServerGroupBackendServersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyVServerGroupBackendServersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyVServerGroupBackendServersResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyVServerGroupBackendServersResponse() = default;
};
class RemoveAccessControlListEntryRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> aclId{};
  shared_ptr<string> aclEntrys{};

  RemoveAccessControlListEntryRequest() {}

  explicit RemoveAccessControlListEntryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclEntrys) {
      res["AclEntrys"] = boost::any(*aclEntrys);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclEntrys") != m.end() && !m["AclEntrys"].empty()) {
      aclEntrys = make_shared<string>(boost::any_cast<string>(m["AclEntrys"]));
    }
  }


  virtual ~RemoveAccessControlListEntryRequest() = default;
};
class RemoveAccessControlListEntryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveAccessControlListEntryResponseBody() {}

  explicit RemoveAccessControlListEntryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveAccessControlListEntryResponseBody() = default;
};
class RemoveAccessControlListEntryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveAccessControlListEntryResponseBody> body{};

  RemoveAccessControlListEntryResponse() {}

  explicit RemoveAccessControlListEntryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveAccessControlListEntryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveAccessControlListEntryResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveAccessControlListEntryResponse() = default;
};
class RemoveBackendServersRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> backendServers{};
  shared_ptr<string> ownerAccount{};

  RemoveBackendServersRequest() {}

  explicit RemoveBackendServersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (backendServers) {
      res["BackendServers"] = boost::any(*backendServers);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      backendServers = make_shared<string>(boost::any_cast<string>(m["BackendServers"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~RemoveBackendServersRequest() = default;
};
class RemoveBackendServersResponseBodyBackendServersBackendServer : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> weight{};
  shared_ptr<string> description{};
  shared_ptr<string> serverId{};

  RemoveBackendServersResponseBodyBackendServersBackendServer() {}

  explicit RemoveBackendServersResponseBodyBackendServersBackendServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
  }


  virtual ~RemoveBackendServersResponseBodyBackendServersBackendServer() = default;
};
class RemoveBackendServersResponseBodyBackendServers : public Darabonba::Model {
public:
  shared_ptr<vector<RemoveBackendServersResponseBodyBackendServersBackendServer>> backendServer{};

  RemoveBackendServersResponseBodyBackendServers() {}

  explicit RemoveBackendServersResponseBodyBackendServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendServer) {
      vector<boost::any> temp1;
      for(auto item1:*backendServer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackendServer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendServer") != m.end() && !m["BackendServer"].empty()) {
      if (typeid(vector<boost::any>) == m["BackendServer"].type()) {
        vector<RemoveBackendServersResponseBodyBackendServersBackendServer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackendServer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RemoveBackendServersResponseBodyBackendServersBackendServer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backendServer = make_shared<vector<RemoveBackendServersResponseBodyBackendServersBackendServer>>(expect1);
      }
    }
  }


  virtual ~RemoveBackendServersResponseBodyBackendServers() = default;
};
class RemoveBackendServersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> requestId{};
  shared_ptr<RemoveBackendServersResponseBodyBackendServers> backendServers{};

  RemoveBackendServersResponseBody() {}

  explicit RemoveBackendServersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (backendServers) {
      res["BackendServers"] = backendServers ? boost::any(backendServers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackendServers"].type()) {
        RemoveBackendServersResponseBodyBackendServers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackendServers"]));
        backendServers = make_shared<RemoveBackendServersResponseBodyBackendServers>(model1);
      }
    }
  }


  virtual ~RemoveBackendServersResponseBody() = default;
};
class RemoveBackendServersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveBackendServersResponseBody> body{};

  RemoveBackendServersResponse() {}

  explicit RemoveBackendServersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveBackendServersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveBackendServersResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveBackendServersResponse() = default;
};
class RemoveListenerWhiteListItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> sourceItems{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> listenerProtocol{};

  RemoveListenerWhiteListItemRequest() {}

  explicit RemoveListenerWhiteListItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (sourceItems) {
      res["SourceItems"] = boost::any(*sourceItems);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("SourceItems") != m.end() && !m["SourceItems"].empty()) {
      sourceItems = make_shared<string>(boost::any_cast<string>(m["SourceItems"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
  }


  virtual ~RemoveListenerWhiteListItemRequest() = default;
};
class RemoveListenerWhiteListItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveListenerWhiteListItemResponseBody() {}

  explicit RemoveListenerWhiteListItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveListenerWhiteListItemResponseBody() = default;
};
class RemoveListenerWhiteListItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveListenerWhiteListItemResponseBody> body{};

  RemoveListenerWhiteListItemResponse() {}

  explicit RemoveListenerWhiteListItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveListenerWhiteListItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveListenerWhiteListItemResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveListenerWhiteListItemResponse() = default;
};
class RemoveTagsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> tags{};

  RemoveTagsRequest() {}

  explicit RemoveTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~RemoveTagsRequest() = default;
};
class RemoveTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveTagsResponseBody() {}

  explicit RemoveTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveTagsResponseBody() = default;
};
class RemoveTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveTagsResponseBody> body{};

  RemoveTagsResponse() {}

  explicit RemoveTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveTagsResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveTagsResponse() = default;
};
class RemoveVServerGroupBackendServersRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> backendServers{};

  RemoveVServerGroupBackendServersRequest() {}

  explicit RemoveVServerGroupBackendServersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (backendServers) {
      res["BackendServers"] = boost::any(*backendServers);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      backendServers = make_shared<string>(boost::any_cast<string>(m["BackendServers"]));
    }
  }


  virtual ~RemoveVServerGroupBackendServersRequest() = default;
};
class RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> weight{};
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};

  RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer() {}

  explicit RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
  }


  virtual ~RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer() = default;
};
class RemoveVServerGroupBackendServersResponseBodyBackendServers : public Darabonba::Model {
public:
  shared_ptr<vector<RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer>> backendServer{};

  RemoveVServerGroupBackendServersResponseBodyBackendServers() {}

  explicit RemoveVServerGroupBackendServersResponseBodyBackendServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendServer) {
      vector<boost::any> temp1;
      for(auto item1:*backendServer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackendServer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendServer") != m.end() && !m["BackendServer"].empty()) {
      if (typeid(vector<boost::any>) == m["BackendServer"].type()) {
        vector<RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackendServer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backendServer = make_shared<vector<RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer>>(expect1);
      }
    }
  }


  virtual ~RemoveVServerGroupBackendServersResponseBodyBackendServers() = default;
};
class RemoveVServerGroupBackendServersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> requestId{};
  shared_ptr<RemoveVServerGroupBackendServersResponseBodyBackendServers> backendServers{};

  RemoveVServerGroupBackendServersResponseBody() {}

  explicit RemoveVServerGroupBackendServersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (backendServers) {
      res["BackendServers"] = backendServers ? boost::any(backendServers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackendServers"].type()) {
        RemoveVServerGroupBackendServersResponseBodyBackendServers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackendServers"]));
        backendServers = make_shared<RemoveVServerGroupBackendServersResponseBodyBackendServers>(model1);
      }
    }
  }


  virtual ~RemoveVServerGroupBackendServersResponseBody() = default;
};
class RemoveVServerGroupBackendServersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveVServerGroupBackendServersResponseBody> body{};

  RemoveVServerGroupBackendServersResponse() {}

  explicit RemoveVServerGroupBackendServersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveVServerGroupBackendServersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveVServerGroupBackendServersResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveVServerGroupBackendServersResponse() = default;
};
class SetAccessControlListAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> aclId{};
  shared_ptr<string> aclName{};

  SetAccessControlListAttributeRequest() {}

  explicit SetAccessControlListAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclName) {
      res["AclName"] = boost::any(*aclName);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclName") != m.end() && !m["AclName"].empty()) {
      aclName = make_shared<string>(boost::any_cast<string>(m["AclName"]));
    }
  }


  virtual ~SetAccessControlListAttributeRequest() = default;
};
class SetAccessControlListAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<string> requestId{};

  SetAccessControlListAttributeResponseBody() {}

  explicit SetAccessControlListAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetAccessControlListAttributeResponseBody() = default;
};
class SetAccessControlListAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetAccessControlListAttributeResponseBody> body{};

  SetAccessControlListAttributeResponse() {}

  explicit SetAccessControlListAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetAccessControlListAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetAccessControlListAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~SetAccessControlListAttributeResponse() = default;
};
class SetBackendServersRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> backendServers{};
  shared_ptr<string> ownerAccount{};

  SetBackendServersRequest() {}

  explicit SetBackendServersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (backendServers) {
      res["BackendServers"] = boost::any(*backendServers);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      backendServers = make_shared<string>(boost::any_cast<string>(m["BackendServers"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~SetBackendServersRequest() = default;
};
class SetBackendServersResponseBodyBackendServersBackendServer : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> weight{};
  shared_ptr<string> description{};
  shared_ptr<string> serverId{};

  SetBackendServersResponseBodyBackendServersBackendServer() {}

  explicit SetBackendServersResponseBodyBackendServersBackendServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<string>(boost::any_cast<string>(m["Weight"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
  }


  virtual ~SetBackendServersResponseBodyBackendServersBackendServer() = default;
};
class SetBackendServersResponseBodyBackendServers : public Darabonba::Model {
public:
  shared_ptr<vector<SetBackendServersResponseBodyBackendServersBackendServer>> backendServer{};

  SetBackendServersResponseBodyBackendServers() {}

  explicit SetBackendServersResponseBodyBackendServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendServer) {
      vector<boost::any> temp1;
      for(auto item1:*backendServer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackendServer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendServer") != m.end() && !m["BackendServer"].empty()) {
      if (typeid(vector<boost::any>) == m["BackendServer"].type()) {
        vector<SetBackendServersResponseBodyBackendServersBackendServer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackendServer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetBackendServersResponseBodyBackendServersBackendServer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backendServer = make_shared<vector<SetBackendServersResponseBodyBackendServersBackendServer>>(expect1);
      }
    }
  }


  virtual ~SetBackendServersResponseBodyBackendServers() = default;
};
class SetBackendServersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> requestId{};
  shared_ptr<SetBackendServersResponseBodyBackendServers> backendServers{};

  SetBackendServersResponseBody() {}

  explicit SetBackendServersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (backendServers) {
      res["BackendServers"] = backendServers ? boost::any(backendServers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackendServers"].type()) {
        SetBackendServersResponseBodyBackendServers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackendServers"]));
        backendServers = make_shared<SetBackendServersResponseBodyBackendServers>(model1);
      }
    }
  }


  virtual ~SetBackendServersResponseBody() = default;
};
class SetBackendServersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetBackendServersResponseBody> body{};

  SetBackendServersResponse() {}

  explicit SetBackendServersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetBackendServersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetBackendServersResponseBody>(model1);
      }
    }
  }


  virtual ~SetBackendServersResponse() = default;
};
class SetCACertificateNameRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> CACertificateId{};
  shared_ptr<string> CACertificateName{};

  SetCACertificateNameRequest() {}

  explicit SetCACertificateNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (CACertificateId) {
      res["CACertificateId"] = boost::any(*CACertificateId);
    }
    if (CACertificateName) {
      res["CACertificateName"] = boost::any(*CACertificateName);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("CACertificateId") != m.end() && !m["CACertificateId"].empty()) {
      CACertificateId = make_shared<string>(boost::any_cast<string>(m["CACertificateId"]));
    }
    if (m.find("CACertificateName") != m.end() && !m["CACertificateName"].empty()) {
      CACertificateName = make_shared<string>(boost::any_cast<string>(m["CACertificateName"]));
    }
  }


  virtual ~SetCACertificateNameRequest() = default;
};
class SetCACertificateNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetCACertificateNameResponseBody() {}

  explicit SetCACertificateNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetCACertificateNameResponseBody() = default;
};
class SetCACertificateNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetCACertificateNameResponseBody> body{};

  SetCACertificateNameResponse() {}

  explicit SetCACertificateNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetCACertificateNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetCACertificateNameResponseBody>(model1);
      }
    }
  }


  virtual ~SetCACertificateNameResponse() = default;
};
class SetDomainExtensionAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> domainExtensionId{};
  shared_ptr<string> serverCertificateId{};

  SetDomainExtensionAttributeRequest() {}

  explicit SetDomainExtensionAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (domainExtensionId) {
      res["DomainExtensionId"] = boost::any(*domainExtensionId);
    }
    if (serverCertificateId) {
      res["ServerCertificateId"] = boost::any(*serverCertificateId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DomainExtensionId") != m.end() && !m["DomainExtensionId"].empty()) {
      domainExtensionId = make_shared<string>(boost::any_cast<string>(m["DomainExtensionId"]));
    }
    if (m.find("ServerCertificateId") != m.end() && !m["ServerCertificateId"].empty()) {
      serverCertificateId = make_shared<string>(boost::any_cast<string>(m["ServerCertificateId"]));
    }
  }


  virtual ~SetDomainExtensionAttributeRequest() = default;
};
class SetDomainExtensionAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetDomainExtensionAttributeResponseBody() {}

  explicit SetDomainExtensionAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetDomainExtensionAttributeResponseBody() = default;
};
class SetDomainExtensionAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetDomainExtensionAttributeResponseBody> body{};

  SetDomainExtensionAttributeResponse() {}

  explicit SetDomainExtensionAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDomainExtensionAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDomainExtensionAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~SetDomainExtensionAttributeResponse() = default;
};
class SetListenerAccessControlStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> accessControlStatus{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> listenerProtocol{};

  SetListenerAccessControlStatusRequest() {}

  explicit SetListenerAccessControlStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (accessControlStatus) {
      res["AccessControlStatus"] = boost::any(*accessControlStatus);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("AccessControlStatus") != m.end() && !m["AccessControlStatus"].empty()) {
      accessControlStatus = make_shared<string>(boost::any_cast<string>(m["AccessControlStatus"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
  }


  virtual ~SetListenerAccessControlStatusRequest() = default;
};
class SetListenerAccessControlStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetListenerAccessControlStatusResponseBody() {}

  explicit SetListenerAccessControlStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetListenerAccessControlStatusResponseBody() = default;
};
class SetListenerAccessControlStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetListenerAccessControlStatusResponseBody> body{};

  SetListenerAccessControlStatusResponse() {}

  explicit SetListenerAccessControlStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetListenerAccessControlStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetListenerAccessControlStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetListenerAccessControlStatusResponse() = default;
};
class SetLoadBalancerDeleteProtectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> deleteProtection{};
  shared_ptr<string> ownerAccount{};

  SetLoadBalancerDeleteProtectionRequest() {}

  explicit SetLoadBalancerDeleteProtectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (deleteProtection) {
      res["DeleteProtection"] = boost::any(*deleteProtection);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("DeleteProtection") != m.end() && !m["DeleteProtection"].empty()) {
      deleteProtection = make_shared<string>(boost::any_cast<string>(m["DeleteProtection"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~SetLoadBalancerDeleteProtectionRequest() = default;
};
class SetLoadBalancerDeleteProtectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetLoadBalancerDeleteProtectionResponseBody() {}

  explicit SetLoadBalancerDeleteProtectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetLoadBalancerDeleteProtectionResponseBody() = default;
};
class SetLoadBalancerDeleteProtectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetLoadBalancerDeleteProtectionResponseBody> body{};

  SetLoadBalancerDeleteProtectionResponse() {}

  explicit SetLoadBalancerDeleteProtectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetLoadBalancerDeleteProtectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetLoadBalancerDeleteProtectionResponseBody>(model1);
      }
    }
  }


  virtual ~SetLoadBalancerDeleteProtectionResponse() = default;
};
class SetLoadBalancerHTTPListenerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> XForwardedFor{};
  shared_ptr<string> scheduler{};
  shared_ptr<string> stickySession{};
  shared_ptr<string> stickySessionType{};
  shared_ptr<long> cookieTimeout{};
  shared_ptr<string> cookie{};
  shared_ptr<string> healthCheck{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<string> healthCheckURI{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<string> healthCheckHttpCode{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> VServerGroup{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> XForwardedFor_SLBIP{};
  shared_ptr<string> XForwardedFor_SLBID{};
  shared_ptr<string> XForwardedFor_proto{};
  shared_ptr<string> gzip{};
  shared_ptr<string> aclId{};
  shared_ptr<string> aclType{};
  shared_ptr<string> aclStatus{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<long> requestTimeout{};
  shared_ptr<string> description{};

  SetLoadBalancerHTTPListenerAttributeRequest() {}

  explicit SetLoadBalancerHTTPListenerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (XForwardedFor) {
      res["XForwardedFor"] = boost::any(*XForwardedFor);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (stickySession) {
      res["StickySession"] = boost::any(*stickySession);
    }
    if (stickySessionType) {
      res["StickySessionType"] = boost::any(*stickySessionType);
    }
    if (cookieTimeout) {
      res["CookieTimeout"] = boost::any(*cookieTimeout);
    }
    if (cookie) {
      res["Cookie"] = boost::any(*cookie);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (healthCheckURI) {
      res["HealthCheckURI"] = boost::any(*healthCheckURI);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (VServerGroup) {
      res["VServerGroup"] = boost::any(*VServerGroup);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (XForwardedFor_SLBIP) {
      res["XForwardedFor_SLBIP"] = boost::any(*XForwardedFor_SLBIP);
    }
    if (XForwardedFor_SLBID) {
      res["XForwardedFor_SLBID"] = boost::any(*XForwardedFor_SLBID);
    }
    if (XForwardedFor_proto) {
      res["XForwardedFor_proto"] = boost::any(*XForwardedFor_proto);
    }
    if (gzip) {
      res["Gzip"] = boost::any(*gzip);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (requestTimeout) {
      res["RequestTimeout"] = boost::any(*requestTimeout);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("XForwardedFor") != m.end() && !m["XForwardedFor"].empty()) {
      XForwardedFor = make_shared<string>(boost::any_cast<string>(m["XForwardedFor"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("StickySession") != m.end() && !m["StickySession"].empty()) {
      stickySession = make_shared<string>(boost::any_cast<string>(m["StickySession"]));
    }
    if (m.find("StickySessionType") != m.end() && !m["StickySessionType"].empty()) {
      stickySessionType = make_shared<string>(boost::any_cast<string>(m["StickySessionType"]));
    }
    if (m.find("CookieTimeout") != m.end() && !m["CookieTimeout"].empty()) {
      cookieTimeout = make_shared<long>(boost::any_cast<long>(m["CookieTimeout"]));
    }
    if (m.find("Cookie") != m.end() && !m["Cookie"].empty()) {
      cookie = make_shared<string>(boost::any_cast<string>(m["Cookie"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("HealthCheckURI") != m.end() && !m["HealthCheckURI"].empty()) {
      healthCheckURI = make_shared<string>(boost::any_cast<string>(m["HealthCheckURI"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      healthCheckHttpCode = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpCode"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("VServerGroup") != m.end() && !m["VServerGroup"].empty()) {
      VServerGroup = make_shared<string>(boost::any_cast<string>(m["VServerGroup"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("XForwardedFor_SLBIP") != m.end() && !m["XForwardedFor_SLBIP"].empty()) {
      XForwardedFor_SLBIP = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBIP"]));
    }
    if (m.find("XForwardedFor_SLBID") != m.end() && !m["XForwardedFor_SLBID"].empty()) {
      XForwardedFor_SLBID = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBID"]));
    }
    if (m.find("XForwardedFor_proto") != m.end() && !m["XForwardedFor_proto"].empty()) {
      XForwardedFor_proto = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_proto"]));
    }
    if (m.find("Gzip") != m.end() && !m["Gzip"].empty()) {
      gzip = make_shared<string>(boost::any_cast<string>(m["Gzip"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("RequestTimeout") != m.end() && !m["RequestTimeout"].empty()) {
      requestTimeout = make_shared<long>(boost::any_cast<long>(m["RequestTimeout"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~SetLoadBalancerHTTPListenerAttributeRequest() = default;
};
class SetLoadBalancerHTTPListenerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetLoadBalancerHTTPListenerAttributeResponseBody() {}

  explicit SetLoadBalancerHTTPListenerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetLoadBalancerHTTPListenerAttributeResponseBody() = default;
};
class SetLoadBalancerHTTPListenerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetLoadBalancerHTTPListenerAttributeResponseBody> body{};

  SetLoadBalancerHTTPListenerAttributeResponse() {}

  explicit SetLoadBalancerHTTPListenerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetLoadBalancerHTTPListenerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetLoadBalancerHTTPListenerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~SetLoadBalancerHTTPListenerAttributeResponse() = default;
};
class SetLoadBalancerHTTPSListenerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> XForwardedFor{};
  shared_ptr<string> scheduler{};
  shared_ptr<string> stickySession{};
  shared_ptr<string> stickySessionType{};
  shared_ptr<long> cookieTimeout{};
  shared_ptr<string> cookie{};
  shared_ptr<string> healthCheck{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<string> healthCheckURI{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<string> healthCheckHttpCode{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> serverCertificateId{};
  shared_ptr<string> CACertificateId{};
  shared_ptr<string> VServerGroup{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> XForwardedFor_SLBIP{};
  shared_ptr<string> XForwardedFor_SLBID{};
  shared_ptr<string> XForwardedFor_proto{};
  shared_ptr<string> gzip{};
  shared_ptr<string> aclId{};
  shared_ptr<string> aclType{};
  shared_ptr<string> aclStatus{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<long> requestTimeout{};
  shared_ptr<string> enableHttp2{};
  shared_ptr<string> TLSCipherPolicy{};
  shared_ptr<string> description{};

  SetLoadBalancerHTTPSListenerAttributeRequest() {}

  explicit SetLoadBalancerHTTPSListenerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (XForwardedFor) {
      res["XForwardedFor"] = boost::any(*XForwardedFor);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (stickySession) {
      res["StickySession"] = boost::any(*stickySession);
    }
    if (stickySessionType) {
      res["StickySessionType"] = boost::any(*stickySessionType);
    }
    if (cookieTimeout) {
      res["CookieTimeout"] = boost::any(*cookieTimeout);
    }
    if (cookie) {
      res["Cookie"] = boost::any(*cookie);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (healthCheckURI) {
      res["HealthCheckURI"] = boost::any(*healthCheckURI);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (serverCertificateId) {
      res["ServerCertificateId"] = boost::any(*serverCertificateId);
    }
    if (CACertificateId) {
      res["CACertificateId"] = boost::any(*CACertificateId);
    }
    if (VServerGroup) {
      res["VServerGroup"] = boost::any(*VServerGroup);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (XForwardedFor_SLBIP) {
      res["XForwardedFor_SLBIP"] = boost::any(*XForwardedFor_SLBIP);
    }
    if (XForwardedFor_SLBID) {
      res["XForwardedFor_SLBID"] = boost::any(*XForwardedFor_SLBID);
    }
    if (XForwardedFor_proto) {
      res["XForwardedFor_proto"] = boost::any(*XForwardedFor_proto);
    }
    if (gzip) {
      res["Gzip"] = boost::any(*gzip);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (requestTimeout) {
      res["RequestTimeout"] = boost::any(*requestTimeout);
    }
    if (enableHttp2) {
      res["EnableHttp2"] = boost::any(*enableHttp2);
    }
    if (TLSCipherPolicy) {
      res["TLSCipherPolicy"] = boost::any(*TLSCipherPolicy);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("XForwardedFor") != m.end() && !m["XForwardedFor"].empty()) {
      XForwardedFor = make_shared<string>(boost::any_cast<string>(m["XForwardedFor"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("StickySession") != m.end() && !m["StickySession"].empty()) {
      stickySession = make_shared<string>(boost::any_cast<string>(m["StickySession"]));
    }
    if (m.find("StickySessionType") != m.end() && !m["StickySessionType"].empty()) {
      stickySessionType = make_shared<string>(boost::any_cast<string>(m["StickySessionType"]));
    }
    if (m.find("CookieTimeout") != m.end() && !m["CookieTimeout"].empty()) {
      cookieTimeout = make_shared<long>(boost::any_cast<long>(m["CookieTimeout"]));
    }
    if (m.find("Cookie") != m.end() && !m["Cookie"].empty()) {
      cookie = make_shared<string>(boost::any_cast<string>(m["Cookie"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("HealthCheckURI") != m.end() && !m["HealthCheckURI"].empty()) {
      healthCheckURI = make_shared<string>(boost::any_cast<string>(m["HealthCheckURI"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      healthCheckHttpCode = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpCode"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ServerCertificateId") != m.end() && !m["ServerCertificateId"].empty()) {
      serverCertificateId = make_shared<string>(boost::any_cast<string>(m["ServerCertificateId"]));
    }
    if (m.find("CACertificateId") != m.end() && !m["CACertificateId"].empty()) {
      CACertificateId = make_shared<string>(boost::any_cast<string>(m["CACertificateId"]));
    }
    if (m.find("VServerGroup") != m.end() && !m["VServerGroup"].empty()) {
      VServerGroup = make_shared<string>(boost::any_cast<string>(m["VServerGroup"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("XForwardedFor_SLBIP") != m.end() && !m["XForwardedFor_SLBIP"].empty()) {
      XForwardedFor_SLBIP = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBIP"]));
    }
    if (m.find("XForwardedFor_SLBID") != m.end() && !m["XForwardedFor_SLBID"].empty()) {
      XForwardedFor_SLBID = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_SLBID"]));
    }
    if (m.find("XForwardedFor_proto") != m.end() && !m["XForwardedFor_proto"].empty()) {
      XForwardedFor_proto = make_shared<string>(boost::any_cast<string>(m["XForwardedFor_proto"]));
    }
    if (m.find("Gzip") != m.end() && !m["Gzip"].empty()) {
      gzip = make_shared<string>(boost::any_cast<string>(m["Gzip"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("RequestTimeout") != m.end() && !m["RequestTimeout"].empty()) {
      requestTimeout = make_shared<long>(boost::any_cast<long>(m["RequestTimeout"]));
    }
    if (m.find("EnableHttp2") != m.end() && !m["EnableHttp2"].empty()) {
      enableHttp2 = make_shared<string>(boost::any_cast<string>(m["EnableHttp2"]));
    }
    if (m.find("TLSCipherPolicy") != m.end() && !m["TLSCipherPolicy"].empty()) {
      TLSCipherPolicy = make_shared<string>(boost::any_cast<string>(m["TLSCipherPolicy"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~SetLoadBalancerHTTPSListenerAttributeRequest() = default;
};
class SetLoadBalancerHTTPSListenerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetLoadBalancerHTTPSListenerAttributeResponseBody() {}

  explicit SetLoadBalancerHTTPSListenerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetLoadBalancerHTTPSListenerAttributeResponseBody() = default;
};
class SetLoadBalancerHTTPSListenerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetLoadBalancerHTTPSListenerAttributeResponseBody> body{};

  SetLoadBalancerHTTPSListenerAttributeResponse() {}

  explicit SetLoadBalancerHTTPSListenerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetLoadBalancerHTTPSListenerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetLoadBalancerHTTPSListenerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~SetLoadBalancerHTTPSListenerAttributeResponse() = default;
};
class SetLoadBalancerModificationProtectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> modificationProtectionStatus{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> modificationProtectionReason{};

  SetLoadBalancerModificationProtectionRequest() {}

  explicit SetLoadBalancerModificationProtectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (modificationProtectionStatus) {
      res["ModificationProtectionStatus"] = boost::any(*modificationProtectionStatus);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (modificationProtectionReason) {
      res["ModificationProtectionReason"] = boost::any(*modificationProtectionReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ModificationProtectionStatus") != m.end() && !m["ModificationProtectionStatus"].empty()) {
      modificationProtectionStatus = make_shared<string>(boost::any_cast<string>(m["ModificationProtectionStatus"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ModificationProtectionReason") != m.end() && !m["ModificationProtectionReason"].empty()) {
      modificationProtectionReason = make_shared<string>(boost::any_cast<string>(m["ModificationProtectionReason"]));
    }
  }


  virtual ~SetLoadBalancerModificationProtectionRequest() = default;
};
class SetLoadBalancerModificationProtectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetLoadBalancerModificationProtectionResponseBody() {}

  explicit SetLoadBalancerModificationProtectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetLoadBalancerModificationProtectionResponseBody() = default;
};
class SetLoadBalancerModificationProtectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetLoadBalancerModificationProtectionResponseBody> body{};

  SetLoadBalancerModificationProtectionResponse() {}

  explicit SetLoadBalancerModificationProtectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetLoadBalancerModificationProtectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetLoadBalancerModificationProtectionResponseBody>(model1);
      }
    }
  }


  virtual ~SetLoadBalancerModificationProtectionResponse() = default;
};
class SetLoadBalancerNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<string> ownerAccount{};

  SetLoadBalancerNameRequest() {}

  explicit SetLoadBalancerNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~SetLoadBalancerNameRequest() = default;
};
class SetLoadBalancerNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetLoadBalancerNameResponseBody() {}

  explicit SetLoadBalancerNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetLoadBalancerNameResponseBody() = default;
};
class SetLoadBalancerNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetLoadBalancerNameResponseBody> body{};

  SetLoadBalancerNameResponse() {}

  explicit SetLoadBalancerNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetLoadBalancerNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetLoadBalancerNameResponseBody>(model1);
      }
    }
  }


  virtual ~SetLoadBalancerNameResponse() = default;
};
class SetLoadBalancerStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> loadBalancerStatus{};
  shared_ptr<string> ownerAccount{};

  SetLoadBalancerStatusRequest() {}

  explicit SetLoadBalancerStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (loadBalancerStatus) {
      res["LoadBalancerStatus"] = boost::any(*loadBalancerStatus);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("LoadBalancerStatus") != m.end() && !m["LoadBalancerStatus"].empty()) {
      loadBalancerStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerStatus"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~SetLoadBalancerStatusRequest() = default;
};
class SetLoadBalancerStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetLoadBalancerStatusResponseBody() {}

  explicit SetLoadBalancerStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetLoadBalancerStatusResponseBody() = default;
};
class SetLoadBalancerStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetLoadBalancerStatusResponseBody> body{};

  SetLoadBalancerStatusResponse() {}

  explicit SetLoadBalancerStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetLoadBalancerStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetLoadBalancerStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetLoadBalancerStatusResponse() = default;
};
class SetLoadBalancerTCPListenerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> scheduler{};
  shared_ptr<long> persistenceTimeout{};
  shared_ptr<long> establishedTimeout{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<long> healthCheckConnectTimeout{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<string> healthCheckURI{};
  shared_ptr<string> healthCheckHttpCode{};
  shared_ptr<string> healthCheckType{};
  shared_ptr<string> synProxy{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> VServerGroup{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> masterSlaveServerGroupId{};
  shared_ptr<string> masterSlaveServerGroup{};
  shared_ptr<string> aclId{};
  shared_ptr<string> aclType{};
  shared_ptr<string> aclStatus{};
  shared_ptr<string> description{};
  shared_ptr<string> connectionDrain{};
  shared_ptr<long> connectionDrainTimeout{};

  SetLoadBalancerTCPListenerAttributeRequest() {}

  explicit SetLoadBalancerTCPListenerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (persistenceTimeout) {
      res["PersistenceTimeout"] = boost::any(*persistenceTimeout);
    }
    if (establishedTimeout) {
      res["EstablishedTimeout"] = boost::any(*establishedTimeout);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (healthCheckConnectTimeout) {
      res["HealthCheckConnectTimeout"] = boost::any(*healthCheckConnectTimeout);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (healthCheckURI) {
      res["HealthCheckURI"] = boost::any(*healthCheckURI);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (healthCheckType) {
      res["HealthCheckType"] = boost::any(*healthCheckType);
    }
    if (synProxy) {
      res["SynProxy"] = boost::any(*synProxy);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (VServerGroup) {
      res["VServerGroup"] = boost::any(*VServerGroup);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (masterSlaveServerGroupId) {
      res["MasterSlaveServerGroupId"] = boost::any(*masterSlaveServerGroupId);
    }
    if (masterSlaveServerGroup) {
      res["MasterSlaveServerGroup"] = boost::any(*masterSlaveServerGroup);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (connectionDrain) {
      res["ConnectionDrain"] = boost::any(*connectionDrain);
    }
    if (connectionDrainTimeout) {
      res["ConnectionDrainTimeout"] = boost::any(*connectionDrainTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("PersistenceTimeout") != m.end() && !m["PersistenceTimeout"].empty()) {
      persistenceTimeout = make_shared<long>(boost::any_cast<long>(m["PersistenceTimeout"]));
    }
    if (m.find("EstablishedTimeout") != m.end() && !m["EstablishedTimeout"].empty()) {
      establishedTimeout = make_shared<long>(boost::any_cast<long>(m["EstablishedTimeout"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("HealthCheckConnectTimeout") != m.end() && !m["HealthCheckConnectTimeout"].empty()) {
      healthCheckConnectTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectTimeout"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("HealthCheckURI") != m.end() && !m["HealthCheckURI"].empty()) {
      healthCheckURI = make_shared<string>(boost::any_cast<string>(m["HealthCheckURI"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      healthCheckHttpCode = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpCode"]));
    }
    if (m.find("HealthCheckType") != m.end() && !m["HealthCheckType"].empty()) {
      healthCheckType = make_shared<string>(boost::any_cast<string>(m["HealthCheckType"]));
    }
    if (m.find("SynProxy") != m.end() && !m["SynProxy"].empty()) {
      synProxy = make_shared<string>(boost::any_cast<string>(m["SynProxy"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("VServerGroup") != m.end() && !m["VServerGroup"].empty()) {
      VServerGroup = make_shared<string>(boost::any_cast<string>(m["VServerGroup"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("MasterSlaveServerGroupId") != m.end() && !m["MasterSlaveServerGroupId"].empty()) {
      masterSlaveServerGroupId = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupId"]));
    }
    if (m.find("MasterSlaveServerGroup") != m.end() && !m["MasterSlaveServerGroup"].empty()) {
      masterSlaveServerGroup = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroup"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ConnectionDrain") != m.end() && !m["ConnectionDrain"].empty()) {
      connectionDrain = make_shared<string>(boost::any_cast<string>(m["ConnectionDrain"]));
    }
    if (m.find("ConnectionDrainTimeout") != m.end() && !m["ConnectionDrainTimeout"].empty()) {
      connectionDrainTimeout = make_shared<long>(boost::any_cast<long>(m["ConnectionDrainTimeout"]));
    }
  }


  virtual ~SetLoadBalancerTCPListenerAttributeRequest() = default;
};
class SetLoadBalancerTCPListenerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetLoadBalancerTCPListenerAttributeResponseBody() {}

  explicit SetLoadBalancerTCPListenerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetLoadBalancerTCPListenerAttributeResponseBody() = default;
};
class SetLoadBalancerTCPListenerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetLoadBalancerTCPListenerAttributeResponseBody> body{};

  SetLoadBalancerTCPListenerAttributeResponse() {}

  explicit SetLoadBalancerTCPListenerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetLoadBalancerTCPListenerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetLoadBalancerTCPListenerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~SetLoadBalancerTCPListenerAttributeResponse() = default;
};
class SetLoadBalancerUDPListenerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> scheduler{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<long> healthCheckConnectTimeout{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckReq{};
  shared_ptr<string> healthCheckExp{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> VServerGroup{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> masterSlaveServerGroupId{};
  shared_ptr<string> masterSlaveServerGroup{};
  shared_ptr<string> aclId{};
  shared_ptr<string> aclType{};
  shared_ptr<string> aclStatus{};
  shared_ptr<string> description{};

  SetLoadBalancerUDPListenerAttributeRequest() {}

  explicit SetLoadBalancerUDPListenerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (healthCheckConnectTimeout) {
      res["HealthCheckConnectTimeout"] = boost::any(*healthCheckConnectTimeout);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckReq) {
      res["healthCheckReq"] = boost::any(*healthCheckReq);
    }
    if (healthCheckExp) {
      res["healthCheckExp"] = boost::any(*healthCheckExp);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (VServerGroup) {
      res["VServerGroup"] = boost::any(*VServerGroup);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (masterSlaveServerGroupId) {
      res["MasterSlaveServerGroupId"] = boost::any(*masterSlaveServerGroupId);
    }
    if (masterSlaveServerGroup) {
      res["MasterSlaveServerGroup"] = boost::any(*masterSlaveServerGroup);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("HealthCheckConnectTimeout") != m.end() && !m["HealthCheckConnectTimeout"].empty()) {
      healthCheckConnectTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectTimeout"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("healthCheckReq") != m.end() && !m["healthCheckReq"].empty()) {
      healthCheckReq = make_shared<string>(boost::any_cast<string>(m["healthCheckReq"]));
    }
    if (m.find("healthCheckExp") != m.end() && !m["healthCheckExp"].empty()) {
      healthCheckExp = make_shared<string>(boost::any_cast<string>(m["healthCheckExp"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("VServerGroup") != m.end() && !m["VServerGroup"].empty()) {
      VServerGroup = make_shared<string>(boost::any_cast<string>(m["VServerGroup"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("MasterSlaveServerGroupId") != m.end() && !m["MasterSlaveServerGroupId"].empty()) {
      masterSlaveServerGroupId = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroupId"]));
    }
    if (m.find("MasterSlaveServerGroup") != m.end() && !m["MasterSlaveServerGroup"].empty()) {
      masterSlaveServerGroup = make_shared<string>(boost::any_cast<string>(m["MasterSlaveServerGroup"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~SetLoadBalancerUDPListenerAttributeRequest() = default;
};
class SetLoadBalancerUDPListenerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetLoadBalancerUDPListenerAttributeResponseBody() {}

  explicit SetLoadBalancerUDPListenerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetLoadBalancerUDPListenerAttributeResponseBody() = default;
};
class SetLoadBalancerUDPListenerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetLoadBalancerUDPListenerAttributeResponseBody> body{};

  SetLoadBalancerUDPListenerAttributeResponse() {}

  explicit SetLoadBalancerUDPListenerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetLoadBalancerUDPListenerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetLoadBalancerUDPListenerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~SetLoadBalancerUDPListenerAttributeResponse() = default;
};
class SetRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> listenerSync{};
  shared_ptr<string> scheduler{};
  shared_ptr<string> stickySession{};
  shared_ptr<string> stickySessionType{};
  shared_ptr<long> cookieTimeout{};
  shared_ptr<string> cookie{};
  shared_ptr<string> healthCheck{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<string> healthCheckURI{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<string> healthCheckHttpCode{};

  SetRuleRequest() {}

  explicit SetRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (listenerSync) {
      res["ListenerSync"] = boost::any(*listenerSync);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (stickySession) {
      res["StickySession"] = boost::any(*stickySession);
    }
    if (stickySessionType) {
      res["StickySessionType"] = boost::any(*stickySessionType);
    }
    if (cookieTimeout) {
      res["CookieTimeout"] = boost::any(*cookieTimeout);
    }
    if (cookie) {
      res["Cookie"] = boost::any(*cookie);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (healthCheckURI) {
      res["HealthCheckURI"] = boost::any(*healthCheckURI);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("ListenerSync") != m.end() && !m["ListenerSync"].empty()) {
      listenerSync = make_shared<string>(boost::any_cast<string>(m["ListenerSync"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("StickySession") != m.end() && !m["StickySession"].empty()) {
      stickySession = make_shared<string>(boost::any_cast<string>(m["StickySession"]));
    }
    if (m.find("StickySessionType") != m.end() && !m["StickySessionType"].empty()) {
      stickySessionType = make_shared<string>(boost::any_cast<string>(m["StickySessionType"]));
    }
    if (m.find("CookieTimeout") != m.end() && !m["CookieTimeout"].empty()) {
      cookieTimeout = make_shared<long>(boost::any_cast<long>(m["CookieTimeout"]));
    }
    if (m.find("Cookie") != m.end() && !m["Cookie"].empty()) {
      cookie = make_shared<string>(boost::any_cast<string>(m["Cookie"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("HealthCheckURI") != m.end() && !m["HealthCheckURI"].empty()) {
      healthCheckURI = make_shared<string>(boost::any_cast<string>(m["HealthCheckURI"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      healthCheckHttpCode = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpCode"]));
    }
  }


  virtual ~SetRuleRequest() = default;
};
class SetRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetRuleResponseBody() {}

  explicit SetRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetRuleResponseBody() = default;
};
class SetRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetRuleResponseBody> body{};

  SetRuleResponse() {}

  explicit SetRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetRuleResponseBody>(model1);
      }
    }
  }


  virtual ~SetRuleResponse() = default;
};
class SetServerCertificateNameRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serverCertificateId{};
  shared_ptr<string> serverCertificateName{};
  shared_ptr<string> ownerAccount{};

  SetServerCertificateNameRequest() {}

  explicit SetServerCertificateNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serverCertificateId) {
      res["ServerCertificateId"] = boost::any(*serverCertificateId);
    }
    if (serverCertificateName) {
      res["ServerCertificateName"] = boost::any(*serverCertificateName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (m.find("ServerCertificateId") != m.end() && !m["ServerCertificateId"].empty()) {
      serverCertificateId = make_shared<string>(boost::any_cast<string>(m["ServerCertificateId"]));
    }
    if (m.find("ServerCertificateName") != m.end() && !m["ServerCertificateName"].empty()) {
      serverCertificateName = make_shared<string>(boost::any_cast<string>(m["ServerCertificateName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~SetServerCertificateNameRequest() = default;
};
class SetServerCertificateNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetServerCertificateNameResponseBody() {}

  explicit SetServerCertificateNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetServerCertificateNameResponseBody() = default;
};
class SetServerCertificateNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetServerCertificateNameResponseBody> body{};

  SetServerCertificateNameResponse() {}

  explicit SetServerCertificateNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetServerCertificateNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetServerCertificateNameResponseBody>(model1);
      }
    }
  }


  virtual ~SetServerCertificateNameResponse() = default;
};
class SetTLSCipherPolicyAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> TLSCipherPolicyId{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> TLSVersions{};
  shared_ptr<vector<string>> ciphers{};

  SetTLSCipherPolicyAttributeRequest() {}

  explicit SetTLSCipherPolicyAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (accessKeyId) {
      res["access_key_id"] = boost::any(*accessKeyId);
    }
    if (TLSCipherPolicyId) {
      res["TLSCipherPolicyId"] = boost::any(*TLSCipherPolicyId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (TLSVersions) {
      res["TLSVersions"] = boost::any(*TLSVersions);
    }
    if (ciphers) {
      res["Ciphers"] = boost::any(*ciphers);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("access_key_id") != m.end() && !m["access_key_id"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["access_key_id"]));
    }
    if (m.find("TLSCipherPolicyId") != m.end() && !m["TLSCipherPolicyId"].empty()) {
      TLSCipherPolicyId = make_shared<string>(boost::any_cast<string>(m["TLSCipherPolicyId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TLSVersions") != m.end() && !m["TLSVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TLSVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TLSVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      TLSVersions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Ciphers") != m.end() && !m["Ciphers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ciphers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ciphers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ciphers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SetTLSCipherPolicyAttributeRequest() = default;
};
class SetTLSCipherPolicyAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> requestId{};

  SetTLSCipherPolicyAttributeResponseBody() {}

  explicit SetTLSCipherPolicyAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetTLSCipherPolicyAttributeResponseBody() = default;
};
class SetTLSCipherPolicyAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetTLSCipherPolicyAttributeResponseBody> body{};

  SetTLSCipherPolicyAttributeResponse() {}

  explicit SetTLSCipherPolicyAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetTLSCipherPolicyAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetTLSCipherPolicyAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~SetTLSCipherPolicyAttributeResponse() = default;
};
class SetVServerGroupAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> VServerGroupName{};
  shared_ptr<string> backendServers{};

  SetVServerGroupAttributeRequest() {}

  explicit SetVServerGroupAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (VServerGroupName) {
      res["VServerGroupName"] = boost::any(*VServerGroupName);
    }
    if (backendServers) {
      res["BackendServers"] = boost::any(*backendServers);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("VServerGroupName") != m.end() && !m["VServerGroupName"].empty()) {
      VServerGroupName = make_shared<string>(boost::any_cast<string>(m["VServerGroupName"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      backendServers = make_shared<string>(boost::any_cast<string>(m["BackendServers"]));
    }
  }


  virtual ~SetVServerGroupAttributeRequest() = default;
};
class SetVServerGroupAttributeResponseBodyBackendServersBackendServer : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> weight{};
  shared_ptr<string> description{};
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};

  SetVServerGroupAttributeResponseBodyBackendServersBackendServer() {}

  explicit SetVServerGroupAttributeResponseBodyBackendServersBackendServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
  }


  virtual ~SetVServerGroupAttributeResponseBodyBackendServersBackendServer() = default;
};
class SetVServerGroupAttributeResponseBodyBackendServers : public Darabonba::Model {
public:
  shared_ptr<vector<SetVServerGroupAttributeResponseBodyBackendServersBackendServer>> backendServer{};

  SetVServerGroupAttributeResponseBodyBackendServers() {}

  explicit SetVServerGroupAttributeResponseBodyBackendServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendServer) {
      vector<boost::any> temp1;
      for(auto item1:*backendServer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackendServer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendServer") != m.end() && !m["BackendServer"].empty()) {
      if (typeid(vector<boost::any>) == m["BackendServer"].type()) {
        vector<SetVServerGroupAttributeResponseBodyBackendServersBackendServer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackendServer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetVServerGroupAttributeResponseBodyBackendServersBackendServer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backendServer = make_shared<vector<SetVServerGroupAttributeResponseBodyBackendServersBackendServer>>(expect1);
      }
    }
  }


  virtual ~SetVServerGroupAttributeResponseBodyBackendServers() = default;
};
class SetVServerGroupAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> VServerGroupId{};
  shared_ptr<string> VServerGroupName{};
  shared_ptr<string> requestId{};
  shared_ptr<SetVServerGroupAttributeResponseBodyBackendServers> backendServers{};

  SetVServerGroupAttributeResponseBody() {}

  explicit SetVServerGroupAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (VServerGroupName) {
      res["VServerGroupName"] = boost::any(*VServerGroupName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (backendServers) {
      res["BackendServers"] = backendServers ? boost::any(backendServers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("VServerGroupName") != m.end() && !m["VServerGroupName"].empty()) {
      VServerGroupName = make_shared<string>(boost::any_cast<string>(m["VServerGroupName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackendServers"].type()) {
        SetVServerGroupAttributeResponseBodyBackendServers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackendServers"]));
        backendServers = make_shared<SetVServerGroupAttributeResponseBodyBackendServers>(model1);
      }
    }
  }


  virtual ~SetVServerGroupAttributeResponseBody() = default;
};
class SetVServerGroupAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetVServerGroupAttributeResponseBody> body{};

  SetVServerGroupAttributeResponse() {}

  explicit SetVServerGroupAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetVServerGroupAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetVServerGroupAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~SetVServerGroupAttributeResponse() = default;
};
class StartLoadBalancerListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> listenerProtocol{};

  StartLoadBalancerListenerRequest() {}

  explicit StartLoadBalancerListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
  }


  virtual ~StartLoadBalancerListenerRequest() = default;
};
class StartLoadBalancerListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartLoadBalancerListenerResponseBody() {}

  explicit StartLoadBalancerListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartLoadBalancerListenerResponseBody() = default;
};
class StartLoadBalancerListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartLoadBalancerListenerResponseBody> body{};

  StartLoadBalancerListenerResponse() {}

  explicit StartLoadBalancerListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartLoadBalancerListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartLoadBalancerListenerResponseBody>(model1);
      }
    }
  }


  virtual ~StartLoadBalancerListenerResponse() = default;
};
class StopLoadBalancerListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> listenerProtocol{};

  StopLoadBalancerListenerRequest() {}

  explicit StopLoadBalancerListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
  }


  virtual ~StopLoadBalancerListenerRequest() = default;
};
class StopLoadBalancerListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopLoadBalancerListenerResponseBody() {}

  explicit StopLoadBalancerListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopLoadBalancerListenerResponseBody() = default;
};
class StopLoadBalancerListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopLoadBalancerListenerResponseBody> body{};

  StopLoadBalancerListenerResponse() {}

  explicit StopLoadBalancerListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopLoadBalancerListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopLoadBalancerListenerResponseBody>(model1);
      }
    }
  }


  virtual ~StopLoadBalancerListenerResponse() = default;
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
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
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
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
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
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
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
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
class UploadCACertificateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> CACertificate{};
  shared_ptr<string> CACertificateName{};
  shared_ptr<string> resourceGroupId{};

  UploadCACertificateRequest() {}

  explicit UploadCACertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (CACertificate) {
      res["CACertificate"] = boost::any(*CACertificate);
    }
    if (CACertificateName) {
      res["CACertificateName"] = boost::any(*CACertificateName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("CACertificate") != m.end() && !m["CACertificate"].empty()) {
      CACertificate = make_shared<string>(boost::any_cast<string>(m["CACertificate"]));
    }
    if (m.find("CACertificateName") != m.end() && !m["CACertificateName"].empty()) {
      CACertificateName = make_shared<string>(boost::any_cast<string>(m["CACertificateName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~UploadCACertificateRequest() = default;
};
class UploadCACertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> createTimeStamp{};
  shared_ptr<string> requestId{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> fingerprint{};
  shared_ptr<string> createTime{};
  shared_ptr<string> commonName{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> CACertificateName{};
  shared_ptr<long> expireTimeStamp{};
  shared_ptr<string> CACertificateId{};

  UploadCACertificateResponseBody() {}

  explicit UploadCACertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimeStamp) {
      res["CreateTimeStamp"] = boost::any(*createTimeStamp);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (fingerprint) {
      res["Fingerprint"] = boost::any(*fingerprint);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (CACertificateName) {
      res["CACertificateName"] = boost::any(*CACertificateName);
    }
    if (expireTimeStamp) {
      res["ExpireTimeStamp"] = boost::any(*expireTimeStamp);
    }
    if (CACertificateId) {
      res["CACertificateId"] = boost::any(*CACertificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimeStamp") != m.end() && !m["CreateTimeStamp"].empty()) {
      createTimeStamp = make_shared<long>(boost::any_cast<long>(m["CreateTimeStamp"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Fingerprint") != m.end() && !m["Fingerprint"].empty()) {
      fingerprint = make_shared<string>(boost::any_cast<string>(m["Fingerprint"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("CACertificateName") != m.end() && !m["CACertificateName"].empty()) {
      CACertificateName = make_shared<string>(boost::any_cast<string>(m["CACertificateName"]));
    }
    if (m.find("ExpireTimeStamp") != m.end() && !m["ExpireTimeStamp"].empty()) {
      expireTimeStamp = make_shared<long>(boost::any_cast<long>(m["ExpireTimeStamp"]));
    }
    if (m.find("CACertificateId") != m.end() && !m["CACertificateId"].empty()) {
      CACertificateId = make_shared<string>(boost::any_cast<string>(m["CACertificateId"]));
    }
  }


  virtual ~UploadCACertificateResponseBody() = default;
};
class UploadCACertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UploadCACertificateResponseBody> body{};

  UploadCACertificateResponse() {}

  explicit UploadCACertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadCACertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadCACertificateResponseBody>(model1);
      }
    }
  }


  virtual ~UploadCACertificateResponse() = default;
};
class UploadServerCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> aliCloudCertificateId{};
  shared_ptr<string> aliCloudCertificateName{};
  shared_ptr<string> aliCloudCertificateRegionId{};
  shared_ptr<string> serverCertificate{};
  shared_ptr<string> privateKey{};
  shared_ptr<string> serverCertificateName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> resourceGroupId{};

  UploadServerCertificateRequest() {}

  explicit UploadServerCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (aliCloudCertificateId) {
      res["AliCloudCertificateId"] = boost::any(*aliCloudCertificateId);
    }
    if (aliCloudCertificateName) {
      res["AliCloudCertificateName"] = boost::any(*aliCloudCertificateName);
    }
    if (aliCloudCertificateRegionId) {
      res["AliCloudCertificateRegionId"] = boost::any(*aliCloudCertificateRegionId);
    }
    if (serverCertificate) {
      res["ServerCertificate"] = boost::any(*serverCertificate);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    if (serverCertificateName) {
      res["ServerCertificateName"] = boost::any(*serverCertificateName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("AliCloudCertificateId") != m.end() && !m["AliCloudCertificateId"].empty()) {
      aliCloudCertificateId = make_shared<string>(boost::any_cast<string>(m["AliCloudCertificateId"]));
    }
    if (m.find("AliCloudCertificateName") != m.end() && !m["AliCloudCertificateName"].empty()) {
      aliCloudCertificateName = make_shared<string>(boost::any_cast<string>(m["AliCloudCertificateName"]));
    }
    if (m.find("AliCloudCertificateRegionId") != m.end() && !m["AliCloudCertificateRegionId"].empty()) {
      aliCloudCertificateRegionId = make_shared<string>(boost::any_cast<string>(m["AliCloudCertificateRegionId"]));
    }
    if (m.find("ServerCertificate") != m.end() && !m["ServerCertificate"].empty()) {
      serverCertificate = make_shared<string>(boost::any_cast<string>(m["ServerCertificate"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
    if (m.find("ServerCertificateName") != m.end() && !m["ServerCertificateName"].empty()) {
      serverCertificateName = make_shared<string>(boost::any_cast<string>(m["ServerCertificateName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~UploadServerCertificateRequest() = default;
};
class UploadServerCertificateResponseBodySubjectAlternativeNames : public Darabonba::Model {
public:
  shared_ptr<vector<string>> subjectAlternativeName{};

  UploadServerCertificateResponseBodySubjectAlternativeNames() {}

  explicit UploadServerCertificateResponseBodySubjectAlternativeNames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subjectAlternativeName) {
      res["SubjectAlternativeName"] = boost::any(*subjectAlternativeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubjectAlternativeName") != m.end() && !m["SubjectAlternativeName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubjectAlternativeName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubjectAlternativeName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subjectAlternativeName = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UploadServerCertificateResponseBodySubjectAlternativeNames() = default;
};
class UploadServerCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aliCloudCertificateName{};
  shared_ptr<long> createTimeStamp{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> serverCertificateId{};
  shared_ptr<long> expireTimeStamp{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> fingerprint{};
  shared_ptr<string> serverCertificateName{};
  shared_ptr<string> commonName{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> aliCloudCertificateId{};
  shared_ptr<long> isAliCloudCertificate{};
  shared_ptr<UploadServerCertificateResponseBodySubjectAlternativeNames> subjectAlternativeNames{};

  UploadServerCertificateResponseBody() {}

  explicit UploadServerCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliCloudCertificateName) {
      res["AliCloudCertificateName"] = boost::any(*aliCloudCertificateName);
    }
    if (createTimeStamp) {
      res["CreateTimeStamp"] = boost::any(*createTimeStamp);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (serverCertificateId) {
      res["ServerCertificateId"] = boost::any(*serverCertificateId);
    }
    if (expireTimeStamp) {
      res["ExpireTimeStamp"] = boost::any(*expireTimeStamp);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (fingerprint) {
      res["Fingerprint"] = boost::any(*fingerprint);
    }
    if (serverCertificateName) {
      res["ServerCertificateName"] = boost::any(*serverCertificateName);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (aliCloudCertificateId) {
      res["AliCloudCertificateId"] = boost::any(*aliCloudCertificateId);
    }
    if (isAliCloudCertificate) {
      res["IsAliCloudCertificate"] = boost::any(*isAliCloudCertificate);
    }
    if (subjectAlternativeNames) {
      res["SubjectAlternativeNames"] = subjectAlternativeNames ? boost::any(subjectAlternativeNames->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliCloudCertificateName") != m.end() && !m["AliCloudCertificateName"].empty()) {
      aliCloudCertificateName = make_shared<string>(boost::any_cast<string>(m["AliCloudCertificateName"]));
    }
    if (m.find("CreateTimeStamp") != m.end() && !m["CreateTimeStamp"].empty()) {
      createTimeStamp = make_shared<long>(boost::any_cast<long>(m["CreateTimeStamp"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ServerCertificateId") != m.end() && !m["ServerCertificateId"].empty()) {
      serverCertificateId = make_shared<string>(boost::any_cast<string>(m["ServerCertificateId"]));
    }
    if (m.find("ExpireTimeStamp") != m.end() && !m["ExpireTimeStamp"].empty()) {
      expireTimeStamp = make_shared<long>(boost::any_cast<long>(m["ExpireTimeStamp"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Fingerprint") != m.end() && !m["Fingerprint"].empty()) {
      fingerprint = make_shared<string>(boost::any_cast<string>(m["Fingerprint"]));
    }
    if (m.find("ServerCertificateName") != m.end() && !m["ServerCertificateName"].empty()) {
      serverCertificateName = make_shared<string>(boost::any_cast<string>(m["ServerCertificateName"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("AliCloudCertificateId") != m.end() && !m["AliCloudCertificateId"].empty()) {
      aliCloudCertificateId = make_shared<string>(boost::any_cast<string>(m["AliCloudCertificateId"]));
    }
    if (m.find("IsAliCloudCertificate") != m.end() && !m["IsAliCloudCertificate"].empty()) {
      isAliCloudCertificate = make_shared<long>(boost::any_cast<long>(m["IsAliCloudCertificate"]));
    }
    if (m.find("SubjectAlternativeNames") != m.end() && !m["SubjectAlternativeNames"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubjectAlternativeNames"].type()) {
        UploadServerCertificateResponseBodySubjectAlternativeNames model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubjectAlternativeNames"]));
        subjectAlternativeNames = make_shared<UploadServerCertificateResponseBodySubjectAlternativeNames>(model1);
      }
    }
  }


  virtual ~UploadServerCertificateResponseBody() = default;
};
class UploadServerCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UploadServerCertificateResponseBody> body{};

  UploadServerCertificateResponse() {}

  explicit UploadServerCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadServerCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadServerCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~UploadServerCertificateResponse() = default;
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
  AddAccessControlListEntryResponse addAccessControlListEntryWithOptions(shared_ptr<AddAccessControlListEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddAccessControlListEntryResponse addAccessControlListEntry(shared_ptr<AddAccessControlListEntryRequest> request);
  AddBackendServersResponse addBackendServersWithOptions(shared_ptr<AddBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddBackendServersResponse addBackendServers(shared_ptr<AddBackendServersRequest> request);
  AddListenerWhiteListItemResponse addListenerWhiteListItemWithOptions(shared_ptr<AddListenerWhiteListItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddListenerWhiteListItemResponse addListenerWhiteListItem(shared_ptr<AddListenerWhiteListItemRequest> request);
  AddTagsResponse addTagsWithOptions(shared_ptr<AddTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddTagsResponse addTags(shared_ptr<AddTagsRequest> request);
  AddVServerGroupBackendServersResponse addVServerGroupBackendServersWithOptions(shared_ptr<AddVServerGroupBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddVServerGroupBackendServersResponse addVServerGroupBackendServers(shared_ptr<AddVServerGroupBackendServersRequest> request);
  CreateAccessControlListResponse createAccessControlListWithOptions(shared_ptr<CreateAccessControlListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessControlListResponse createAccessControlList(shared_ptr<CreateAccessControlListRequest> request);
  CreateDomainExtensionResponse createDomainExtensionWithOptions(shared_ptr<CreateDomainExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDomainExtensionResponse createDomainExtension(shared_ptr<CreateDomainExtensionRequest> request);
  CreateLoadBalancerResponse createLoadBalancerWithOptions(shared_ptr<CreateLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLoadBalancerResponse createLoadBalancer(shared_ptr<CreateLoadBalancerRequest> request);
  CreateLoadBalancerHTTPListenerResponse createLoadBalancerHTTPListenerWithOptions(shared_ptr<CreateLoadBalancerHTTPListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLoadBalancerHTTPListenerResponse createLoadBalancerHTTPListener(shared_ptr<CreateLoadBalancerHTTPListenerRequest> request);
  CreateLoadBalancerHTTPSListenerResponse createLoadBalancerHTTPSListenerWithOptions(shared_ptr<CreateLoadBalancerHTTPSListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLoadBalancerHTTPSListenerResponse createLoadBalancerHTTPSListener(shared_ptr<CreateLoadBalancerHTTPSListenerRequest> request);
  CreateLoadBalancerTCPListenerResponse createLoadBalancerTCPListenerWithOptions(shared_ptr<CreateLoadBalancerTCPListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLoadBalancerTCPListenerResponse createLoadBalancerTCPListener(shared_ptr<CreateLoadBalancerTCPListenerRequest> request);
  CreateLoadBalancerUDPListenerResponse createLoadBalancerUDPListenerWithOptions(shared_ptr<CreateLoadBalancerUDPListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLoadBalancerUDPListenerResponse createLoadBalancerUDPListener(shared_ptr<CreateLoadBalancerUDPListenerRequest> request);
  CreateMasterSlaveServerGroupResponse createMasterSlaveServerGroupWithOptions(shared_ptr<CreateMasterSlaveServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMasterSlaveServerGroupResponse createMasterSlaveServerGroup(shared_ptr<CreateMasterSlaveServerGroupRequest> request);
  CreateRulesResponse createRulesWithOptions(shared_ptr<CreateRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRulesResponse createRules(shared_ptr<CreateRulesRequest> request);
  CreateTLSCipherPolicyResponse createTLSCipherPolicyWithOptions(shared_ptr<CreateTLSCipherPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTLSCipherPolicyResponse createTLSCipherPolicy(shared_ptr<CreateTLSCipherPolicyRequest> request);
  CreateVServerGroupResponse createVServerGroupWithOptions(shared_ptr<CreateVServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVServerGroupResponse createVServerGroup(shared_ptr<CreateVServerGroupRequest> request);
  DeleteAccessControlListResponse deleteAccessControlListWithOptions(shared_ptr<DeleteAccessControlListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessControlListResponse deleteAccessControlList(shared_ptr<DeleteAccessControlListRequest> request);
  DeleteCACertificateResponse deleteCACertificateWithOptions(shared_ptr<DeleteCACertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCACertificateResponse deleteCACertificate(shared_ptr<DeleteCACertificateRequest> request);
  DeleteDomainExtensionResponse deleteDomainExtensionWithOptions(shared_ptr<DeleteDomainExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainExtensionResponse deleteDomainExtension(shared_ptr<DeleteDomainExtensionRequest> request);
  DeleteLoadBalancerResponse deleteLoadBalancerWithOptions(shared_ptr<DeleteLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLoadBalancerResponse deleteLoadBalancer(shared_ptr<DeleteLoadBalancerRequest> request);
  DeleteLoadBalancerListenerResponse deleteLoadBalancerListenerWithOptions(shared_ptr<DeleteLoadBalancerListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLoadBalancerListenerResponse deleteLoadBalancerListener(shared_ptr<DeleteLoadBalancerListenerRequest> request);
  DeleteMasterSlaveServerGroupResponse deleteMasterSlaveServerGroupWithOptions(shared_ptr<DeleteMasterSlaveServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMasterSlaveServerGroupResponse deleteMasterSlaveServerGroup(shared_ptr<DeleteMasterSlaveServerGroupRequest> request);
  DeleteRulesResponse deleteRulesWithOptions(shared_ptr<DeleteRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRulesResponse deleteRules(shared_ptr<DeleteRulesRequest> request);
  DeleteServerCertificateResponse deleteServerCertificateWithOptions(shared_ptr<DeleteServerCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServerCertificateResponse deleteServerCertificate(shared_ptr<DeleteServerCertificateRequest> request);
  DeleteTLSCipherPolicyResponse deleteTLSCipherPolicyWithOptions(shared_ptr<DeleteTLSCipherPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTLSCipherPolicyResponse deleteTLSCipherPolicy(shared_ptr<DeleteTLSCipherPolicyRequest> request);
  DeleteVServerGroupResponse deleteVServerGroupWithOptions(shared_ptr<DeleteVServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVServerGroupResponse deleteVServerGroup(shared_ptr<DeleteVServerGroupRequest> request);
  DescribeAccessControlListAttributeResponse describeAccessControlListAttributeWithOptions(shared_ptr<DescribeAccessControlListAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccessControlListAttributeResponse describeAccessControlListAttribute(shared_ptr<DescribeAccessControlListAttributeRequest> request);
  DescribeAccessControlListsResponse describeAccessControlListsWithOptions(shared_ptr<DescribeAccessControlListsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccessControlListsResponse describeAccessControlLists(shared_ptr<DescribeAccessControlListsRequest> request);
  DescribeAvailableResourceResponse describeAvailableResourceWithOptions(shared_ptr<DescribeAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAvailableResourceResponse describeAvailableResource(shared_ptr<DescribeAvailableResourceRequest> request);
  DescribeCACertificatesResponse describeCACertificatesWithOptions(shared_ptr<DescribeCACertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCACertificatesResponse describeCACertificates(shared_ptr<DescribeCACertificatesRequest> request);
  DescribeDomainExtensionAttributeResponse describeDomainExtensionAttributeWithOptions(shared_ptr<DescribeDomainExtensionAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainExtensionAttributeResponse describeDomainExtensionAttribute(shared_ptr<DescribeDomainExtensionAttributeRequest> request);
  DescribeDomainExtensionsResponse describeDomainExtensionsWithOptions(shared_ptr<DescribeDomainExtensionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainExtensionsResponse describeDomainExtensions(shared_ptr<DescribeDomainExtensionsRequest> request);
  DescribeHealthStatusResponse describeHealthStatusWithOptions(shared_ptr<DescribeHealthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHealthStatusResponse describeHealthStatus(shared_ptr<DescribeHealthStatusRequest> request);
  DescribeListenerAccessControlAttributeResponse describeListenerAccessControlAttributeWithOptions(shared_ptr<DescribeListenerAccessControlAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeListenerAccessControlAttributeResponse describeListenerAccessControlAttribute(shared_ptr<DescribeListenerAccessControlAttributeRequest> request);
  DescribeLoadBalancerAttributeResponse describeLoadBalancerAttributeWithOptions(shared_ptr<DescribeLoadBalancerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLoadBalancerAttributeResponse describeLoadBalancerAttribute(shared_ptr<DescribeLoadBalancerAttributeRequest> request);
  DescribeLoadBalancerHTTPListenerAttributeResponse describeLoadBalancerHTTPListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerHTTPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLoadBalancerHTTPListenerAttributeResponse describeLoadBalancerHTTPListenerAttribute(shared_ptr<DescribeLoadBalancerHTTPListenerAttributeRequest> request);
  DescribeLoadBalancerHTTPSListenerAttributeResponse describeLoadBalancerHTTPSListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerHTTPSListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLoadBalancerHTTPSListenerAttributeResponse describeLoadBalancerHTTPSListenerAttribute(shared_ptr<DescribeLoadBalancerHTTPSListenerAttributeRequest> request);
  DescribeLoadBalancerListenersResponse describeLoadBalancerListenersWithOptions(shared_ptr<DescribeLoadBalancerListenersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLoadBalancerListenersResponse describeLoadBalancerListeners(shared_ptr<DescribeLoadBalancerListenersRequest> request);
  DescribeLoadBalancersResponse describeLoadBalancersWithOptions(shared_ptr<DescribeLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLoadBalancersResponse describeLoadBalancers(shared_ptr<DescribeLoadBalancersRequest> request);
  DescribeLoadBalancerTCPListenerAttributeResponse describeLoadBalancerTCPListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerTCPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLoadBalancerTCPListenerAttributeResponse describeLoadBalancerTCPListenerAttribute(shared_ptr<DescribeLoadBalancerTCPListenerAttributeRequest> request);
  DescribeLoadBalancerUDPListenerAttributeResponse describeLoadBalancerUDPListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerUDPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLoadBalancerUDPListenerAttributeResponse describeLoadBalancerUDPListenerAttribute(shared_ptr<DescribeLoadBalancerUDPListenerAttributeRequest> request);
  DescribeMasterSlaveServerGroupAttributeResponse describeMasterSlaveServerGroupAttributeWithOptions(shared_ptr<DescribeMasterSlaveServerGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMasterSlaveServerGroupAttributeResponse describeMasterSlaveServerGroupAttribute(shared_ptr<DescribeMasterSlaveServerGroupAttributeRequest> request);
  DescribeMasterSlaveServerGroupsResponse describeMasterSlaveServerGroupsWithOptions(shared_ptr<DescribeMasterSlaveServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMasterSlaveServerGroupsResponse describeMasterSlaveServerGroups(shared_ptr<DescribeMasterSlaveServerGroupsRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeRuleAttributeResponse describeRuleAttributeWithOptions(shared_ptr<DescribeRuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRuleAttributeResponse describeRuleAttribute(shared_ptr<DescribeRuleAttributeRequest> request);
  DescribeRulesResponse describeRulesWithOptions(shared_ptr<DescribeRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRulesResponse describeRules(shared_ptr<DescribeRulesRequest> request);
  DescribeServerCertificatesResponse describeServerCertificatesWithOptions(shared_ptr<DescribeServerCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServerCertificatesResponse describeServerCertificates(shared_ptr<DescribeServerCertificatesRequest> request);
  DescribeTagsResponse describeTagsWithOptions(shared_ptr<DescribeTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTagsResponse describeTags(shared_ptr<DescribeTagsRequest> request);
  DescribeVServerGroupAttributeResponse describeVServerGroupAttributeWithOptions(shared_ptr<DescribeVServerGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVServerGroupAttributeResponse describeVServerGroupAttribute(shared_ptr<DescribeVServerGroupAttributeRequest> request);
  DescribeVServerGroupsResponse describeVServerGroupsWithOptions(shared_ptr<DescribeVServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVServerGroupsResponse describeVServerGroups(shared_ptr<DescribeVServerGroupsRequest> request);
  DescribeZonesResponse describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZonesResponse describeZones(shared_ptr<DescribeZonesRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTLSCipherPoliciesResponse listTLSCipherPoliciesWithOptions(shared_ptr<ListTLSCipherPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTLSCipherPoliciesResponse listTLSCipherPolicies(shared_ptr<ListTLSCipherPoliciesRequest> request);
  ModifyLoadBalancerInstanceSpecResponse modifyLoadBalancerInstanceSpecWithOptions(shared_ptr<ModifyLoadBalancerInstanceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyLoadBalancerInstanceSpecResponse modifyLoadBalancerInstanceSpec(shared_ptr<ModifyLoadBalancerInstanceSpecRequest> request);
  ModifyLoadBalancerInternetSpecResponse modifyLoadBalancerInternetSpecWithOptions(shared_ptr<ModifyLoadBalancerInternetSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyLoadBalancerInternetSpecResponse modifyLoadBalancerInternetSpec(shared_ptr<ModifyLoadBalancerInternetSpecRequest> request);
  ModifyLoadBalancerPayTypeResponse modifyLoadBalancerPayTypeWithOptions(shared_ptr<ModifyLoadBalancerPayTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyLoadBalancerPayTypeResponse modifyLoadBalancerPayType(shared_ptr<ModifyLoadBalancerPayTypeRequest> request);
  ModifyVServerGroupBackendServersResponse modifyVServerGroupBackendServersWithOptions(shared_ptr<ModifyVServerGroupBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyVServerGroupBackendServersResponse modifyVServerGroupBackendServers(shared_ptr<ModifyVServerGroupBackendServersRequest> request);
  RemoveAccessControlListEntryResponse removeAccessControlListEntryWithOptions(shared_ptr<RemoveAccessControlListEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveAccessControlListEntryResponse removeAccessControlListEntry(shared_ptr<RemoveAccessControlListEntryRequest> request);
  RemoveBackendServersResponse removeBackendServersWithOptions(shared_ptr<RemoveBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveBackendServersResponse removeBackendServers(shared_ptr<RemoveBackendServersRequest> request);
  RemoveListenerWhiteListItemResponse removeListenerWhiteListItemWithOptions(shared_ptr<RemoveListenerWhiteListItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveListenerWhiteListItemResponse removeListenerWhiteListItem(shared_ptr<RemoveListenerWhiteListItemRequest> request);
  RemoveTagsResponse removeTagsWithOptions(shared_ptr<RemoveTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveTagsResponse removeTags(shared_ptr<RemoveTagsRequest> request);
  RemoveVServerGroupBackendServersResponse removeVServerGroupBackendServersWithOptions(shared_ptr<RemoveVServerGroupBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveVServerGroupBackendServersResponse removeVServerGroupBackendServers(shared_ptr<RemoveVServerGroupBackendServersRequest> request);
  SetAccessControlListAttributeResponse setAccessControlListAttributeWithOptions(shared_ptr<SetAccessControlListAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetAccessControlListAttributeResponse setAccessControlListAttribute(shared_ptr<SetAccessControlListAttributeRequest> request);
  SetBackendServersResponse setBackendServersWithOptions(shared_ptr<SetBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetBackendServersResponse setBackendServers(shared_ptr<SetBackendServersRequest> request);
  SetCACertificateNameResponse setCACertificateNameWithOptions(shared_ptr<SetCACertificateNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetCACertificateNameResponse setCACertificateName(shared_ptr<SetCACertificateNameRequest> request);
  SetDomainExtensionAttributeResponse setDomainExtensionAttributeWithOptions(shared_ptr<SetDomainExtensionAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDomainExtensionAttributeResponse setDomainExtensionAttribute(shared_ptr<SetDomainExtensionAttributeRequest> request);
  SetListenerAccessControlStatusResponse setListenerAccessControlStatusWithOptions(shared_ptr<SetListenerAccessControlStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetListenerAccessControlStatusResponse setListenerAccessControlStatus(shared_ptr<SetListenerAccessControlStatusRequest> request);
  SetLoadBalancerDeleteProtectionResponse setLoadBalancerDeleteProtectionWithOptions(shared_ptr<SetLoadBalancerDeleteProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetLoadBalancerDeleteProtectionResponse setLoadBalancerDeleteProtection(shared_ptr<SetLoadBalancerDeleteProtectionRequest> request);
  SetLoadBalancerHTTPListenerAttributeResponse setLoadBalancerHTTPListenerAttributeWithOptions(shared_ptr<SetLoadBalancerHTTPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetLoadBalancerHTTPListenerAttributeResponse setLoadBalancerHTTPListenerAttribute(shared_ptr<SetLoadBalancerHTTPListenerAttributeRequest> request);
  SetLoadBalancerHTTPSListenerAttributeResponse setLoadBalancerHTTPSListenerAttributeWithOptions(shared_ptr<SetLoadBalancerHTTPSListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetLoadBalancerHTTPSListenerAttributeResponse setLoadBalancerHTTPSListenerAttribute(shared_ptr<SetLoadBalancerHTTPSListenerAttributeRequest> request);
  SetLoadBalancerModificationProtectionResponse setLoadBalancerModificationProtectionWithOptions(shared_ptr<SetLoadBalancerModificationProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetLoadBalancerModificationProtectionResponse setLoadBalancerModificationProtection(shared_ptr<SetLoadBalancerModificationProtectionRequest> request);
  SetLoadBalancerNameResponse setLoadBalancerNameWithOptions(shared_ptr<SetLoadBalancerNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetLoadBalancerNameResponse setLoadBalancerName(shared_ptr<SetLoadBalancerNameRequest> request);
  SetLoadBalancerStatusResponse setLoadBalancerStatusWithOptions(shared_ptr<SetLoadBalancerStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetLoadBalancerStatusResponse setLoadBalancerStatus(shared_ptr<SetLoadBalancerStatusRequest> request);
  SetLoadBalancerTCPListenerAttributeResponse setLoadBalancerTCPListenerAttributeWithOptions(shared_ptr<SetLoadBalancerTCPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetLoadBalancerTCPListenerAttributeResponse setLoadBalancerTCPListenerAttribute(shared_ptr<SetLoadBalancerTCPListenerAttributeRequest> request);
  SetLoadBalancerUDPListenerAttributeResponse setLoadBalancerUDPListenerAttributeWithOptions(shared_ptr<SetLoadBalancerUDPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetLoadBalancerUDPListenerAttributeResponse setLoadBalancerUDPListenerAttribute(shared_ptr<SetLoadBalancerUDPListenerAttributeRequest> request);
  SetRuleResponse setRuleWithOptions(shared_ptr<SetRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetRuleResponse setRule(shared_ptr<SetRuleRequest> request);
  SetServerCertificateNameResponse setServerCertificateNameWithOptions(shared_ptr<SetServerCertificateNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetServerCertificateNameResponse setServerCertificateName(shared_ptr<SetServerCertificateNameRequest> request);
  SetTLSCipherPolicyAttributeResponse setTLSCipherPolicyAttributeWithOptions(shared_ptr<SetTLSCipherPolicyAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetTLSCipherPolicyAttributeResponse setTLSCipherPolicyAttribute(shared_ptr<SetTLSCipherPolicyAttributeRequest> request);
  SetVServerGroupAttributeResponse setVServerGroupAttributeWithOptions(shared_ptr<SetVServerGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetVServerGroupAttributeResponse setVServerGroupAttribute(shared_ptr<SetVServerGroupAttributeRequest> request);
  StartLoadBalancerListenerResponse startLoadBalancerListenerWithOptions(shared_ptr<StartLoadBalancerListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartLoadBalancerListenerResponse startLoadBalancerListener(shared_ptr<StartLoadBalancerListenerRequest> request);
  StopLoadBalancerListenerResponse stopLoadBalancerListenerWithOptions(shared_ptr<StopLoadBalancerListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopLoadBalancerListenerResponse stopLoadBalancerListener(shared_ptr<StopLoadBalancerListenerRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UploadCACertificateResponse uploadCACertificateWithOptions(shared_ptr<UploadCACertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadCACertificateResponse uploadCACertificate(shared_ptr<UploadCACertificateRequest> request);
  UploadServerCertificateResponse uploadServerCertificateWithOptions(shared_ptr<UploadServerCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadServerCertificateResponse uploadServerCertificate(shared_ptr<UploadServerCertificateRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Slb20140515

#endif
