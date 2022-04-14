// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_HBASE20190101_H_
#define ALIBABACLOUD_HBASE20190101_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_HBase20190101 {
class AddUserHdfsInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> extInfo{};

  AddUserHdfsInfoRequest() {}

  explicit AddUserHdfsInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
  }


  virtual ~AddUserHdfsInfoRequest() = default;
};
class AddUserHdfsInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddUserHdfsInfoResponseBody() {}

  explicit AddUserHdfsInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddUserHdfsInfoResponseBody() = default;
};
class AddUserHdfsInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddUserHdfsInfoResponseBody> body{};

  AddUserHdfsInfoResponse() {}

  explicit AddUserHdfsInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddUserHdfsInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserHdfsInfoResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserHdfsInfoResponse() = default;
};
class AllocatePublicNetworkAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterId{};

  AllocatePublicNetworkAddressRequest() {}

  explicit AllocatePublicNetworkAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~AllocatePublicNetworkAddressRequest() = default;
};
class AllocatePublicNetworkAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AllocatePublicNetworkAddressResponseBody() {}

  explicit AllocatePublicNetworkAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AllocatePublicNetworkAddressResponseBody() = default;
};
class AllocatePublicNetworkAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AllocatePublicNetworkAddressResponseBody> body{};

  AllocatePublicNetworkAddressResponse() {}

  explicit AllocatePublicNetworkAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AllocatePublicNetworkAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocatePublicNetworkAddressResponseBody>(model1);
      }
    }
  }


  virtual ~AllocatePublicNetworkAddressResponse() = default;
};
class CancelActiveOperationTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  CancelActiveOperationTasksRequest() {}

  explicit CancelActiveOperationTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CancelActiveOperationTasksRequest() = default;
};
class CancelActiveOperationTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<string> requestId{};

  CancelActiveOperationTasksResponseBody() {}

  explicit CancelActiveOperationTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelActiveOperationTasksResponseBody() = default;
};
class CancelActiveOperationTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelActiveOperationTasksResponseBody> body{};

  CancelActiveOperationTasksResponse() {}

  explicit CancelActiveOperationTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelActiveOperationTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelActiveOperationTasksResponseBody>(model1);
      }
    }
  }


  virtual ~CancelActiveOperationTasksResponse() = default;
};
class CheckComponentsVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> components{};

  CheckComponentsVersionRequest() {}

  explicit CheckComponentsVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (components) {
      res["Components"] = boost::any(*components);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      components = make_shared<string>(boost::any_cast<string>(m["Components"]));
    }
  }


  virtual ~CheckComponentsVersionRequest() = default;
};
class CheckComponentsVersionResponseBodyComponentsComponent : public Darabonba::Model {
public:
  shared_ptr<string> component{};
  shared_ptr<string> isLatestVersion{};

  CheckComponentsVersionResponseBodyComponentsComponent() {}

  explicit CheckComponentsVersionResponseBodyComponentsComponent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (component) {
      res["Component"] = boost::any(*component);
    }
    if (isLatestVersion) {
      res["IsLatestVersion"] = boost::any(*isLatestVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Component") != m.end() && !m["Component"].empty()) {
      component = make_shared<string>(boost::any_cast<string>(m["Component"]));
    }
    if (m.find("IsLatestVersion") != m.end() && !m["IsLatestVersion"].empty()) {
      isLatestVersion = make_shared<string>(boost::any_cast<string>(m["IsLatestVersion"]));
    }
  }


  virtual ~CheckComponentsVersionResponseBodyComponentsComponent() = default;
};
class CheckComponentsVersionResponseBodyComponents : public Darabonba::Model {
public:
  shared_ptr<vector<CheckComponentsVersionResponseBodyComponentsComponent>> component{};

  CheckComponentsVersionResponseBodyComponents() {}

  explicit CheckComponentsVersionResponseBodyComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (component) {
      vector<boost::any> temp1;
      for(auto item1:*component){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Component"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Component") != m.end() && !m["Component"].empty()) {
      if (typeid(vector<boost::any>) == m["Component"].type()) {
        vector<CheckComponentsVersionResponseBodyComponentsComponent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Component"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckComponentsVersionResponseBodyComponentsComponent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        component = make_shared<vector<CheckComponentsVersionResponseBodyComponentsComponent>>(expect1);
      }
    }
  }


  virtual ~CheckComponentsVersionResponseBodyComponents() = default;
};
class CheckComponentsVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<CheckComponentsVersionResponseBodyComponents> components{};
  shared_ptr<string> requestId{};

  CheckComponentsVersionResponseBody() {}

  explicit CheckComponentsVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (components) {
      res["Components"] = components ? boost::any(components->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(map<string, boost::any>) == m["Components"].type()) {
        CheckComponentsVersionResponseBodyComponents model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Components"]));
        components = make_shared<CheckComponentsVersionResponseBodyComponents>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckComponentsVersionResponseBody() = default;
};
class CheckComponentsVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckComponentsVersionResponseBody> body{};

  CheckComponentsVersionResponse() {}

  explicit CheckComponentsVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckComponentsVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckComponentsVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CheckComponentsVersionResponse() = default;
};
class CloseBackupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  CloseBackupRequest() {}

  explicit CloseBackupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~CloseBackupRequest() = default;
};
class CloseBackupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CloseBackupResponseBody() {}

  explicit CloseBackupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CloseBackupResponseBody() = default;
};
class CloseBackupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CloseBackupResponseBody> body{};

  CloseBackupResponse() {}

  explicit CloseBackupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CloseBackupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseBackupResponseBody>(model1);
      }
    }
  }


  virtual ~CloseBackupResponse() = default;
};
class ConvertInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> duration{};
  shared_ptr<string> payType{};
  shared_ptr<string> pricingCycle{};

  ConvertInstanceRequest() {}

  explicit ConvertInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
  }


  virtual ~ConvertInstanceRequest() = default;
};
class ConvertInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  ConvertInstanceResponseBody() {}

  explicit ConvertInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConvertInstanceResponseBody() = default;
};
class ConvertInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ConvertInstanceResponseBody> body{};

  ConvertInstanceResponse() {}

  explicit ConvertInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ConvertInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConvertInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ConvertInstanceResponse() = default;
};
class CreateBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  CreateBackupPlanRequest() {}

  explicit CreateBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~CreateBackupPlanRequest() = default;
};
class CreateBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateBackupPlanResponseBody() {}

  explicit CreateBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateBackupPlanResponseBody() = default;
};
class CreateBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateBackupPlanResponseBody> body{};

  CreateBackupPlanResponse() {}

  explicit CreateBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBackupPlanResponse() = default;
};
class CreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterName{};
  shared_ptr<long> coldStorageSize{};
  shared_ptr<string> coreInstanceType{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> masterInstanceType{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> payType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateClusterRequest() {}

  explicit CreateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenewPeriod) {
      res["AutoRenewPeriod"] = boost::any(*autoRenewPeriod);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (coldStorageSize) {
      res["ColdStorageSize"] = boost::any(*coldStorageSize);
    }
    if (coreInstanceType) {
      res["CoreInstanceType"] = boost::any(*coreInstanceType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (masterInstanceType) {
      res["MasterInstanceType"] = boost::any(*masterInstanceType);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
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
    if (m.find("AutoRenewPeriod") != m.end() && !m["AutoRenewPeriod"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["AutoRenewPeriod"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ColdStorageSize") != m.end() && !m["ColdStorageSize"].empty()) {
      coldStorageSize = make_shared<long>(boost::any_cast<long>(m["ColdStorageSize"]));
    }
    if (m.find("CoreInstanceType") != m.end() && !m["CoreInstanceType"].empty()) {
      coreInstanceType = make_shared<string>(boost::any_cast<string>(m["CoreInstanceType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("MasterInstanceType") != m.end() && !m["MasterInstanceType"].empty()) {
      masterInstanceType = make_shared<string>(boost::any_cast<string>(m["MasterInstanceType"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
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


  virtual ~CreateClusterRequest() = default;
};
class CreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateClusterResponseBody() {}

  explicit CreateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateClusterResponseBody() = default;
};
class CreateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateClusterResponseBody> body{};

  CreateClusterResponse() {}

  explicit CreateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClusterResponse() = default;
};
class CreateGlobalResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};

  CreateGlobalResourceRequest() {}

  explicit CreateGlobalResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~CreateGlobalResourceRequest() = default;
};
class CreateGlobalResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateGlobalResourceResponseBody() {}

  explicit CreateGlobalResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateGlobalResourceResponseBody() = default;
};
class CreateGlobalResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateGlobalResourceResponseBody> body{};

  CreateGlobalResourceResponse() {}

  explicit CreateGlobalResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGlobalResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGlobalResourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGlobalResourceResponse() = default;
};
class CreateHBaseSlbServerRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> slbServer{};

  CreateHBaseSlbServerRequest() {}

  explicit CreateHBaseSlbServerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (slbServer) {
      res["SlbServer"] = boost::any(*slbServer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("SlbServer") != m.end() && !m["SlbServer"].empty()) {
      slbServer = make_shared<string>(boost::any_cast<string>(m["SlbServer"]));
    }
  }


  virtual ~CreateHBaseSlbServerRequest() = default;
};
class CreateHBaseSlbServerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateHBaseSlbServerResponseBody() {}

  explicit CreateHBaseSlbServerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateHBaseSlbServerResponseBody() = default;
};
class CreateHBaseSlbServerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateHBaseSlbServerResponseBody> body{};

  CreateHBaseSlbServerResponse() {}

  explicit CreateHBaseSlbServerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateHBaseSlbServerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHBaseSlbServerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHBaseSlbServerResponse() = default;
};
class CreateHbaseHaSlbRequest : public Darabonba::Model {
public:
  shared_ptr<string> bdsId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> haId{};
  shared_ptr<string> haTypes{};
  shared_ptr<string> hbaseType{};

  CreateHbaseHaSlbRequest() {}

  explicit CreateHbaseHaSlbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bdsId) {
      res["BdsId"] = boost::any(*bdsId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (haId) {
      res["HaId"] = boost::any(*haId);
    }
    if (haTypes) {
      res["HaTypes"] = boost::any(*haTypes);
    }
    if (hbaseType) {
      res["HbaseType"] = boost::any(*hbaseType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BdsId") != m.end() && !m["BdsId"].empty()) {
      bdsId = make_shared<string>(boost::any_cast<string>(m["BdsId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("HaId") != m.end() && !m["HaId"].empty()) {
      haId = make_shared<string>(boost::any_cast<string>(m["HaId"]));
    }
    if (m.find("HaTypes") != m.end() && !m["HaTypes"].empty()) {
      haTypes = make_shared<string>(boost::any_cast<string>(m["HaTypes"]));
    }
    if (m.find("HbaseType") != m.end() && !m["HbaseType"].empty()) {
      hbaseType = make_shared<string>(boost::any_cast<string>(m["HbaseType"]));
    }
  }


  virtual ~CreateHbaseHaSlbRequest() = default;
};
class CreateHbaseHaSlbResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateHbaseHaSlbResponseBody() {}

  explicit CreateHbaseHaSlbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateHbaseHaSlbResponseBody() = default;
};
class CreateHbaseHaSlbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateHbaseHaSlbResponseBody> body{};

  CreateHbaseHaSlbResponse() {}

  explicit CreateHbaseHaSlbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateHbaseHaSlbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHbaseHaSlbResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHbaseHaSlbResponse() = default;
};
class CreateMultiZoneClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> arbiterVSwitchId{};
  shared_ptr<string> arbiterZoneId{};
  shared_ptr<string> archVersion{};
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterName{};
  shared_ptr<long> coreDiskSize{};
  shared_ptr<string> coreDiskType{};
  shared_ptr<string> coreInstanceType{};
  shared_ptr<long> coreNodeCount{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<long> logDiskSize{};
  shared_ptr<string> logDiskType{};
  shared_ptr<string> logInstanceType{};
  shared_ptr<long> logNodeCount{};
  shared_ptr<string> masterInstanceType{};
  shared_ptr<string> multiZoneCombination{};
  shared_ptr<string> payType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> primaryVSwitchId{};
  shared_ptr<string> primaryZoneId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> standbyVSwitchId{};
  shared_ptr<string> standbyZoneId{};
  shared_ptr<string> vpcId{};

  CreateMultiZoneClusterRequest() {}

  explicit CreateMultiZoneClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arbiterVSwitchId) {
      res["ArbiterVSwitchId"] = boost::any(*arbiterVSwitchId);
    }
    if (arbiterZoneId) {
      res["ArbiterZoneId"] = boost::any(*arbiterZoneId);
    }
    if (archVersion) {
      res["ArchVersion"] = boost::any(*archVersion);
    }
    if (autoRenewPeriod) {
      res["AutoRenewPeriod"] = boost::any(*autoRenewPeriod);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (coreDiskSize) {
      res["CoreDiskSize"] = boost::any(*coreDiskSize);
    }
    if (coreDiskType) {
      res["CoreDiskType"] = boost::any(*coreDiskType);
    }
    if (coreInstanceType) {
      res["CoreInstanceType"] = boost::any(*coreInstanceType);
    }
    if (coreNodeCount) {
      res["CoreNodeCount"] = boost::any(*coreNodeCount);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (logDiskSize) {
      res["LogDiskSize"] = boost::any(*logDiskSize);
    }
    if (logDiskType) {
      res["LogDiskType"] = boost::any(*logDiskType);
    }
    if (logInstanceType) {
      res["LogInstanceType"] = boost::any(*logInstanceType);
    }
    if (logNodeCount) {
      res["LogNodeCount"] = boost::any(*logNodeCount);
    }
    if (masterInstanceType) {
      res["MasterInstanceType"] = boost::any(*masterInstanceType);
    }
    if (multiZoneCombination) {
      res["MultiZoneCombination"] = boost::any(*multiZoneCombination);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (primaryVSwitchId) {
      res["PrimaryVSwitchId"] = boost::any(*primaryVSwitchId);
    }
    if (primaryZoneId) {
      res["PrimaryZoneId"] = boost::any(*primaryZoneId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (standbyVSwitchId) {
      res["StandbyVSwitchId"] = boost::any(*standbyVSwitchId);
    }
    if (standbyZoneId) {
      res["StandbyZoneId"] = boost::any(*standbyZoneId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArbiterVSwitchId") != m.end() && !m["ArbiterVSwitchId"].empty()) {
      arbiterVSwitchId = make_shared<string>(boost::any_cast<string>(m["ArbiterVSwitchId"]));
    }
    if (m.find("ArbiterZoneId") != m.end() && !m["ArbiterZoneId"].empty()) {
      arbiterZoneId = make_shared<string>(boost::any_cast<string>(m["ArbiterZoneId"]));
    }
    if (m.find("ArchVersion") != m.end() && !m["ArchVersion"].empty()) {
      archVersion = make_shared<string>(boost::any_cast<string>(m["ArchVersion"]));
    }
    if (m.find("AutoRenewPeriod") != m.end() && !m["AutoRenewPeriod"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["AutoRenewPeriod"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("CoreDiskSize") != m.end() && !m["CoreDiskSize"].empty()) {
      coreDiskSize = make_shared<long>(boost::any_cast<long>(m["CoreDiskSize"]));
    }
    if (m.find("CoreDiskType") != m.end() && !m["CoreDiskType"].empty()) {
      coreDiskType = make_shared<string>(boost::any_cast<string>(m["CoreDiskType"]));
    }
    if (m.find("CoreInstanceType") != m.end() && !m["CoreInstanceType"].empty()) {
      coreInstanceType = make_shared<string>(boost::any_cast<string>(m["CoreInstanceType"]));
    }
    if (m.find("CoreNodeCount") != m.end() && !m["CoreNodeCount"].empty()) {
      coreNodeCount = make_shared<long>(boost::any_cast<long>(m["CoreNodeCount"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("LogDiskSize") != m.end() && !m["LogDiskSize"].empty()) {
      logDiskSize = make_shared<long>(boost::any_cast<long>(m["LogDiskSize"]));
    }
    if (m.find("LogDiskType") != m.end() && !m["LogDiskType"].empty()) {
      logDiskType = make_shared<string>(boost::any_cast<string>(m["LogDiskType"]));
    }
    if (m.find("LogInstanceType") != m.end() && !m["LogInstanceType"].empty()) {
      logInstanceType = make_shared<string>(boost::any_cast<string>(m["LogInstanceType"]));
    }
    if (m.find("LogNodeCount") != m.end() && !m["LogNodeCount"].empty()) {
      logNodeCount = make_shared<long>(boost::any_cast<long>(m["LogNodeCount"]));
    }
    if (m.find("MasterInstanceType") != m.end() && !m["MasterInstanceType"].empty()) {
      masterInstanceType = make_shared<string>(boost::any_cast<string>(m["MasterInstanceType"]));
    }
    if (m.find("MultiZoneCombination") != m.end() && !m["MultiZoneCombination"].empty()) {
      multiZoneCombination = make_shared<string>(boost::any_cast<string>(m["MultiZoneCombination"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PrimaryVSwitchId") != m.end() && !m["PrimaryVSwitchId"].empty()) {
      primaryVSwitchId = make_shared<string>(boost::any_cast<string>(m["PrimaryVSwitchId"]));
    }
    if (m.find("PrimaryZoneId") != m.end() && !m["PrimaryZoneId"].empty()) {
      primaryZoneId = make_shared<string>(boost::any_cast<string>(m["PrimaryZoneId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("StandbyVSwitchId") != m.end() && !m["StandbyVSwitchId"].empty()) {
      standbyVSwitchId = make_shared<string>(boost::any_cast<string>(m["StandbyVSwitchId"]));
    }
    if (m.find("StandbyZoneId") != m.end() && !m["StandbyZoneId"].empty()) {
      standbyZoneId = make_shared<string>(boost::any_cast<string>(m["StandbyZoneId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateMultiZoneClusterRequest() = default;
};
class CreateMultiZoneClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateMultiZoneClusterResponseBody() {}

  explicit CreateMultiZoneClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateMultiZoneClusterResponseBody() = default;
};
class CreateMultiZoneClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateMultiZoneClusterResponseBody> body{};

  CreateMultiZoneClusterResponse() {}

  explicit CreateMultiZoneClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateMultiZoneClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMultiZoneClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMultiZoneClusterResponse() = default;
};
class CreateRestorePlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> restoreAllTable{};
  shared_ptr<bool> restoreByCopy{};
  shared_ptr<string> restoreToDate{};
  shared_ptr<string> tables{};
  shared_ptr<string> targetClusterId{};

  CreateRestorePlanRequest() {}

  explicit CreateRestorePlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (restoreAllTable) {
      res["RestoreAllTable"] = boost::any(*restoreAllTable);
    }
    if (restoreByCopy) {
      res["RestoreByCopy"] = boost::any(*restoreByCopy);
    }
    if (restoreToDate) {
      res["RestoreToDate"] = boost::any(*restoreToDate);
    }
    if (tables) {
      res["Tables"] = boost::any(*tables);
    }
    if (targetClusterId) {
      res["TargetClusterId"] = boost::any(*targetClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RestoreAllTable") != m.end() && !m["RestoreAllTable"].empty()) {
      restoreAllTable = make_shared<bool>(boost::any_cast<bool>(m["RestoreAllTable"]));
    }
    if (m.find("RestoreByCopy") != m.end() && !m["RestoreByCopy"].empty()) {
      restoreByCopy = make_shared<bool>(boost::any_cast<bool>(m["RestoreByCopy"]));
    }
    if (m.find("RestoreToDate") != m.end() && !m["RestoreToDate"].empty()) {
      restoreToDate = make_shared<string>(boost::any_cast<string>(m["RestoreToDate"]));
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      tables = make_shared<string>(boost::any_cast<string>(m["Tables"]));
    }
    if (m.find("TargetClusterId") != m.end() && !m["TargetClusterId"].empty()) {
      targetClusterId = make_shared<string>(boost::any_cast<string>(m["TargetClusterId"]));
    }
  }


  virtual ~CreateRestorePlanRequest() = default;
};
class CreateRestorePlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateRestorePlanResponseBody() {}

  explicit CreateRestorePlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateRestorePlanResponseBody() = default;
};
class CreateRestorePlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRestorePlanResponseBody> body{};

  CreateRestorePlanResponse() {}

  explicit CreateRestorePlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRestorePlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRestorePlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRestorePlanResponse() = default;
};
class CreateServerlessClusterRequest : public Darabonba::Model {
public:
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clientType{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> diskType{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> payType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> serverlessCapability{};
  shared_ptr<string> serverlessSpec{};
  shared_ptr<long> serverlessStorage{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateServerlessClusterRequest() {}

  explicit CreateServerlessClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenewPeriod) {
      res["AutoRenewPeriod"] = boost::any(*autoRenewPeriod);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serverlessCapability) {
      res["ServerlessCapability"] = boost::any(*serverlessCapability);
    }
    if (serverlessSpec) {
      res["ServerlessSpec"] = boost::any(*serverlessSpec);
    }
    if (serverlessStorage) {
      res["ServerlessStorage"] = boost::any(*serverlessStorage);
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
    if (m.find("AutoRenewPeriod") != m.end() && !m["AutoRenewPeriod"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["AutoRenewPeriod"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServerlessCapability") != m.end() && !m["ServerlessCapability"].empty()) {
      serverlessCapability = make_shared<long>(boost::any_cast<long>(m["ServerlessCapability"]));
    }
    if (m.find("ServerlessSpec") != m.end() && !m["ServerlessSpec"].empty()) {
      serverlessSpec = make_shared<string>(boost::any_cast<string>(m["ServerlessSpec"]));
    }
    if (m.find("ServerlessStorage") != m.end() && !m["ServerlessStorage"].empty()) {
      serverlessStorage = make_shared<long>(boost::any_cast<long>(m["ServerlessStorage"]));
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


  virtual ~CreateServerlessClusterRequest() = default;
};
class CreateServerlessClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> passWord{};
  shared_ptr<string> requestId{};

  CreateServerlessClusterResponseBody() {}

  explicit CreateServerlessClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (passWord) {
      res["PassWord"] = boost::any(*passWord);
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
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PassWord") != m.end() && !m["PassWord"].empty()) {
      passWord = make_shared<string>(boost::any_cast<string>(m["PassWord"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateServerlessClusterResponseBody() = default;
};
class CreateServerlessClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateServerlessClusterResponseBody> body{};

  CreateServerlessClusterResponse() {}

  explicit CreateServerlessClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServerlessClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServerlessClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServerlessClusterResponse() = default;
};
class DeleteGlobalResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};

  DeleteGlobalResourceRequest() {}

  explicit DeleteGlobalResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~DeleteGlobalResourceRequest() = default;
};
class DeleteGlobalResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGlobalResourceResponseBody() {}

  explicit DeleteGlobalResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteGlobalResourceResponseBody() = default;
};
class DeleteGlobalResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteGlobalResourceResponseBody> body{};

  DeleteGlobalResourceResponse() {}

  explicit DeleteGlobalResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGlobalResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGlobalResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGlobalResourceResponse() = default;
};
class DeleteHBaseHaDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> bdsId{};
  shared_ptr<string> haId{};

  DeleteHBaseHaDBRequest() {}

  explicit DeleteHBaseHaDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bdsId) {
      res["BdsId"] = boost::any(*bdsId);
    }
    if (haId) {
      res["HaId"] = boost::any(*haId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BdsId") != m.end() && !m["BdsId"].empty()) {
      bdsId = make_shared<string>(boost::any_cast<string>(m["BdsId"]));
    }
    if (m.find("HaId") != m.end() && !m["HaId"].empty()) {
      haId = make_shared<string>(boost::any_cast<string>(m["HaId"]));
    }
  }


  virtual ~DeleteHBaseHaDBRequest() = default;
};
class DeleteHBaseHaDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteHBaseHaDBResponseBody() {}

  explicit DeleteHBaseHaDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteHBaseHaDBResponseBody() = default;
};
class DeleteHBaseHaDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteHBaseHaDBResponseBody> body{};

  DeleteHBaseHaDBResponse() {}

  explicit DeleteHBaseHaDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteHBaseHaDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHBaseHaDBResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHBaseHaDBResponse() = default;
};
class DeleteHBaseSlbServerRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> slbServer{};

  DeleteHBaseSlbServerRequest() {}

  explicit DeleteHBaseSlbServerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (slbServer) {
      res["SlbServer"] = boost::any(*slbServer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("SlbServer") != m.end() && !m["SlbServer"].empty()) {
      slbServer = make_shared<string>(boost::any_cast<string>(m["SlbServer"]));
    }
  }


  virtual ~DeleteHBaseSlbServerRequest() = default;
};
class DeleteHBaseSlbServerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteHBaseSlbServerResponseBody() {}

  explicit DeleteHBaseSlbServerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteHBaseSlbServerResponseBody() = default;
};
class DeleteHBaseSlbServerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteHBaseSlbServerResponseBody> body{};

  DeleteHBaseSlbServerResponse() {}

  explicit DeleteHBaseSlbServerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteHBaseSlbServerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHBaseSlbServerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHBaseSlbServerResponse() = default;
};
class DeleteHbaseHaSlbRequest : public Darabonba::Model {
public:
  shared_ptr<string> bdsId{};
  shared_ptr<string> haId{};
  shared_ptr<string> haTypes{};

  DeleteHbaseHaSlbRequest() {}

  explicit DeleteHbaseHaSlbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bdsId) {
      res["BdsId"] = boost::any(*bdsId);
    }
    if (haId) {
      res["HaId"] = boost::any(*haId);
    }
    if (haTypes) {
      res["HaTypes"] = boost::any(*haTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BdsId") != m.end() && !m["BdsId"].empty()) {
      bdsId = make_shared<string>(boost::any_cast<string>(m["BdsId"]));
    }
    if (m.find("HaId") != m.end() && !m["HaId"].empty()) {
      haId = make_shared<string>(boost::any_cast<string>(m["HaId"]));
    }
    if (m.find("HaTypes") != m.end() && !m["HaTypes"].empty()) {
      haTypes = make_shared<string>(boost::any_cast<string>(m["HaTypes"]));
    }
  }


  virtual ~DeleteHbaseHaSlbRequest() = default;
};
class DeleteHbaseHaSlbResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteHbaseHaSlbResponseBody() {}

  explicit DeleteHbaseHaSlbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteHbaseHaSlbResponseBody() = default;
};
class DeleteHbaseHaSlbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteHbaseHaSlbResponseBody> body{};

  DeleteHbaseHaSlbResponse() {}

  explicit DeleteHbaseHaSlbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteHbaseHaSlbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHbaseHaSlbResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHbaseHaSlbResponse() = default;
};
class DeleteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> immediateDeleteFlag{};

  DeleteInstanceRequest() {}

  explicit DeleteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (immediateDeleteFlag) {
      res["ImmediateDeleteFlag"] = boost::any(*immediateDeleteFlag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ImmediateDeleteFlag") != m.end() && !m["ImmediateDeleteFlag"].empty()) {
      immediateDeleteFlag = make_shared<bool>(boost::any_cast<bool>(m["ImmediateDeleteFlag"]));
    }
  }


  virtual ~DeleteInstanceRequest() = default;
};
class DeleteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteInstanceResponseBody() = default;
};
class DeleteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteInstanceResponseBody> body{};

  DeleteInstanceResponse() {}

  explicit DeleteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DeleteMultiZoneClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> immediateDeleteFlag{};

  DeleteMultiZoneClusterRequest() {}

  explicit DeleteMultiZoneClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (immediateDeleteFlag) {
      res["ImmediateDeleteFlag"] = boost::any(*immediateDeleteFlag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ImmediateDeleteFlag") != m.end() && !m["ImmediateDeleteFlag"].empty()) {
      immediateDeleteFlag = make_shared<bool>(boost::any_cast<bool>(m["ImmediateDeleteFlag"]));
    }
  }


  virtual ~DeleteMultiZoneClusterRequest() = default;
};
class DeleteMultiZoneClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteMultiZoneClusterResponseBody() {}

  explicit DeleteMultiZoneClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteMultiZoneClusterResponseBody() = default;
};
class DeleteMultiZoneClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteMultiZoneClusterResponseBody> body{};

  DeleteMultiZoneClusterResponse() {}

  explicit DeleteMultiZoneClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteMultiZoneClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMultiZoneClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMultiZoneClusterResponse() = default;
};
class DeleteServerlessClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DeleteServerlessClusterRequest() {}

  explicit DeleteServerlessClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DeleteServerlessClusterRequest() = default;
};
class DeleteServerlessClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServerlessClusterResponseBody() {}

  explicit DeleteServerlessClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteServerlessClusterResponseBody() = default;
};
class DeleteServerlessClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteServerlessClusterResponseBody> body{};

  DeleteServerlessClusterResponse() {}

  explicit DeleteServerlessClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServerlessClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServerlessClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServerlessClusterResponse() = default;
};
class DeleteUserHdfsInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> nameService{};

  DeleteUserHdfsInfoRequest() {}

  explicit DeleteUserHdfsInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (nameService) {
      res["NameService"] = boost::any(*nameService);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("NameService") != m.end() && !m["NameService"].empty()) {
      nameService = make_shared<string>(boost::any_cast<string>(m["NameService"]));
    }
  }


  virtual ~DeleteUserHdfsInfoRequest() = default;
};
class DeleteUserHdfsInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserHdfsInfoResponseBody() {}

  explicit DeleteUserHdfsInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserHdfsInfoResponseBody() = default;
};
class DeleteUserHdfsInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteUserHdfsInfoResponseBody> body{};

  DeleteUserHdfsInfoResponse() {}

  explicit DeleteUserHdfsInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteUserHdfsInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserHdfsInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserHdfsInfoResponse() = default;
};
class DescribeActiveOperationTaskTypeRequest : public Darabonba::Model {
public:
  shared_ptr<long> isHistory{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeActiveOperationTaskTypeRequest() {}

  explicit DescribeActiveOperationTaskTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isHistory) {
      res["IsHistory"] = boost::any(*isHistory);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsHistory") != m.end() && !m["IsHistory"].empty()) {
      isHistory = make_shared<long>(boost::any_cast<long>(m["IsHistory"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeActiveOperationTaskTypeRequest() = default;
};
class DescribeActiveOperationTaskTypeResponseBodyTypeList : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeInfoEn{};
  shared_ptr<string> taskTypeInfoZh{};

  DescribeActiveOperationTaskTypeResponseBodyTypeList() {}

  explicit DescribeActiveOperationTaskTypeResponseBodyTypeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeInfoEn) {
      res["TaskTypeInfoEn"] = boost::any(*taskTypeInfoEn);
    }
    if (taskTypeInfoZh) {
      res["TaskTypeInfoZh"] = boost::any(*taskTypeInfoZh);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeInfoEn") != m.end() && !m["TaskTypeInfoEn"].empty()) {
      taskTypeInfoEn = make_shared<string>(boost::any_cast<string>(m["TaskTypeInfoEn"]));
    }
    if (m.find("TaskTypeInfoZh") != m.end() && !m["TaskTypeInfoZh"].empty()) {
      taskTypeInfoZh = make_shared<string>(boost::any_cast<string>(m["TaskTypeInfoZh"]));
    }
  }


  virtual ~DescribeActiveOperationTaskTypeResponseBodyTypeList() = default;
};
class DescribeActiveOperationTaskTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeActiveOperationTaskTypeResponseBodyTypeList>> typeList{};

  DescribeActiveOperationTaskTypeResponseBody() {}

  explicit DescribeActiveOperationTaskTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (typeList) {
      vector<boost::any> temp1;
      for(auto item1:*typeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TypeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TypeList") != m.end() && !m["TypeList"].empty()) {
      if (typeid(vector<boost::any>) == m["TypeList"].type()) {
        vector<DescribeActiveOperationTaskTypeResponseBodyTypeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TypeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeActiveOperationTaskTypeResponseBodyTypeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        typeList = make_shared<vector<DescribeActiveOperationTaskTypeResponseBodyTypeList>>(expect1);
      }
    }
  }


  virtual ~DescribeActiveOperationTaskTypeResponseBody() = default;
};
class DescribeActiveOperationTaskTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeActiveOperationTaskTypeResponseBody> body{};

  DescribeActiveOperationTaskTypeResponse() {}

  explicit DescribeActiveOperationTaskTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeActiveOperationTaskTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeActiveOperationTaskTypeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeActiveOperationTaskTypeResponse() = default;
};
class DescribeActiveOperationTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> allowCancel{};
  shared_ptr<long> allowChange{};
  shared_ptr<string> changeLevel{};
  shared_ptr<string> dbType{};
  shared_ptr<string> insName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productId{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> status{};
  shared_ptr<string> taskType{};

  DescribeActiveOperationTasksRequest() {}

  explicit DescribeActiveOperationTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowCancel) {
      res["AllowCancel"] = boost::any(*allowCancel);
    }
    if (allowChange) {
      res["AllowChange"] = boost::any(*allowChange);
    }
    if (changeLevel) {
      res["ChangeLevel"] = boost::any(*changeLevel);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (insName) {
      res["InsName"] = boost::any(*insName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowCancel") != m.end() && !m["AllowCancel"].empty()) {
      allowCancel = make_shared<long>(boost::any_cast<long>(m["AllowCancel"]));
    }
    if (m.find("AllowChange") != m.end() && !m["AllowChange"].empty()) {
      allowChange = make_shared<long>(boost::any_cast<long>(m["AllowChange"]));
    }
    if (m.find("ChangeLevel") != m.end() && !m["ChangeLevel"].empty()) {
      changeLevel = make_shared<string>(boost::any_cast<string>(m["ChangeLevel"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("InsName") != m.end() && !m["InsName"].empty()) {
      insName = make_shared<string>(boost::any_cast<string>(m["InsName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribeActiveOperationTasksRequest() = default;
};
class DescribeActiveOperationTasksResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> allowCancel{};
  shared_ptr<string> allowChange{};
  shared_ptr<string> changeLevel{};
  shared_ptr<string> changeLevelEn{};
  shared_ptr<string> changeLevelZh{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> currentAVZ{};
  shared_ptr<string> dbType{};
  shared_ptr<string> dbVersion{};
  shared_ptr<string> deadline{};
  shared_ptr<long> id{};
  shared_ptr<string> impactEn{};
  shared_ptr<string> impactZh{};
  shared_ptr<string> insComment{};
  shared_ptr<string> insName{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> prepareInterval{};
  shared_ptr<string> region{};
  shared_ptr<string> resultInfo{};
  shared_ptr<string> startTime{};
  shared_ptr<long> status{};
  shared_ptr<vector<string>> subInsNames{};
  shared_ptr<string> switchTime{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeEn{};
  shared_ptr<string> taskTypeZh{};

  DescribeActiveOperationTasksResponseBodyItems() {}

  explicit DescribeActiveOperationTasksResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowCancel) {
      res["AllowCancel"] = boost::any(*allowCancel);
    }
    if (allowChange) {
      res["AllowChange"] = boost::any(*allowChange);
    }
    if (changeLevel) {
      res["ChangeLevel"] = boost::any(*changeLevel);
    }
    if (changeLevelEn) {
      res["ChangeLevelEn"] = boost::any(*changeLevelEn);
    }
    if (changeLevelZh) {
      res["ChangeLevelZh"] = boost::any(*changeLevelZh);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (currentAVZ) {
      res["CurrentAVZ"] = boost::any(*currentAVZ);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (dbVersion) {
      res["DbVersion"] = boost::any(*dbVersion);
    }
    if (deadline) {
      res["Deadline"] = boost::any(*deadline);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (impactEn) {
      res["ImpactEn"] = boost::any(*impactEn);
    }
    if (impactZh) {
      res["ImpactZh"] = boost::any(*impactZh);
    }
    if (insComment) {
      res["InsComment"] = boost::any(*insComment);
    }
    if (insName) {
      res["InsName"] = boost::any(*insName);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (prepareInterval) {
      res["PrepareInterval"] = boost::any(*prepareInterval);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resultInfo) {
      res["ResultInfo"] = boost::any(*resultInfo);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subInsNames) {
      res["SubInsNames"] = boost::any(*subInsNames);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeEn) {
      res["TaskTypeEn"] = boost::any(*taskTypeEn);
    }
    if (taskTypeZh) {
      res["TaskTypeZh"] = boost::any(*taskTypeZh);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowCancel") != m.end() && !m["AllowCancel"].empty()) {
      allowCancel = make_shared<string>(boost::any_cast<string>(m["AllowCancel"]));
    }
    if (m.find("AllowChange") != m.end() && !m["AllowChange"].empty()) {
      allowChange = make_shared<string>(boost::any_cast<string>(m["AllowChange"]));
    }
    if (m.find("ChangeLevel") != m.end() && !m["ChangeLevel"].empty()) {
      changeLevel = make_shared<string>(boost::any_cast<string>(m["ChangeLevel"]));
    }
    if (m.find("ChangeLevelEn") != m.end() && !m["ChangeLevelEn"].empty()) {
      changeLevelEn = make_shared<string>(boost::any_cast<string>(m["ChangeLevelEn"]));
    }
    if (m.find("ChangeLevelZh") != m.end() && !m["ChangeLevelZh"].empty()) {
      changeLevelZh = make_shared<string>(boost::any_cast<string>(m["ChangeLevelZh"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("CurrentAVZ") != m.end() && !m["CurrentAVZ"].empty()) {
      currentAVZ = make_shared<string>(boost::any_cast<string>(m["CurrentAVZ"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("DbVersion") != m.end() && !m["DbVersion"].empty()) {
      dbVersion = make_shared<string>(boost::any_cast<string>(m["DbVersion"]));
    }
    if (m.find("Deadline") != m.end() && !m["Deadline"].empty()) {
      deadline = make_shared<string>(boost::any_cast<string>(m["Deadline"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ImpactEn") != m.end() && !m["ImpactEn"].empty()) {
      impactEn = make_shared<string>(boost::any_cast<string>(m["ImpactEn"]));
    }
    if (m.find("ImpactZh") != m.end() && !m["ImpactZh"].empty()) {
      impactZh = make_shared<string>(boost::any_cast<string>(m["ImpactZh"]));
    }
    if (m.find("InsComment") != m.end() && !m["InsComment"].empty()) {
      insComment = make_shared<string>(boost::any_cast<string>(m["InsComment"]));
    }
    if (m.find("InsName") != m.end() && !m["InsName"].empty()) {
      insName = make_shared<string>(boost::any_cast<string>(m["InsName"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PrepareInterval") != m.end() && !m["PrepareInterval"].empty()) {
      prepareInterval = make_shared<string>(boost::any_cast<string>(m["PrepareInterval"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResultInfo") != m.end() && !m["ResultInfo"].empty()) {
      resultInfo = make_shared<string>(boost::any_cast<string>(m["ResultInfo"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SubInsNames") != m.end() && !m["SubInsNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubInsNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubInsNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subInsNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeEn") != m.end() && !m["TaskTypeEn"].empty()) {
      taskTypeEn = make_shared<string>(boost::any_cast<string>(m["TaskTypeEn"]));
    }
    if (m.find("TaskTypeZh") != m.end() && !m["TaskTypeZh"].empty()) {
      taskTypeZh = make_shared<string>(boost::any_cast<string>(m["TaskTypeZh"]));
    }
  }


  virtual ~DescribeActiveOperationTasksResponseBodyItems() = default;
};
class DescribeActiveOperationTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeActiveOperationTasksResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeActiveOperationTasksResponseBody() {}

  explicit DescribeActiveOperationTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeActiveOperationTasksResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeActiveOperationTasksResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeActiveOperationTasksResponseBodyItems>>(expect1);
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
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeActiveOperationTasksResponseBody() = default;
};
class DescribeActiveOperationTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeActiveOperationTasksResponseBody> body{};

  DescribeActiveOperationTasksResponse() {}

  explicit DescribeActiveOperationTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeActiveOperationTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeActiveOperationTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeActiveOperationTasksResponse() = default;
};
class DescribeAvailableResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> coreInstanceType{};
  shared_ptr<string> diskType{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DescribeAvailableResourceRequest() {}

  explicit DescribeAvailableResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (coreInstanceType) {
      res["CoreInstanceType"] = boost::any(*coreInstanceType);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CoreInstanceType") != m.end() && !m["CoreInstanceType"].empty()) {
      coreInstanceType = make_shared<string>(boost::any_cast<string>(m["CoreInstanceType"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeAvailableResourceRequest() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResourceInstanceTypeDetail : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> mem{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResourceInstanceTypeDetail() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResourceInstanceTypeDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (mem) {
      res["Mem"] = boost::any(*mem);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Mem") != m.end() && !m["Mem"].empty()) {
      mem = make_shared<long>(boost::any_cast<long>(m["Mem"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResourceInstanceTypeDetail() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResourceInstanceTypeDetail> instanceTypeDetail{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instanceTypeDetail) {
      res["InstanceTypeDetail"] = instanceTypeDetail ? boost::any(instanceTypeDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstanceTypeDetail") != m.end() && !m["InstanceTypeDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceTypeDetail"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResourceInstanceTypeDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceTypeDetail"]));
        instanceTypeDetail = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResourceInstanceTypeDetail>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResources : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource>> masterResource{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResources() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (masterResource) {
      vector<boost::any> temp1;
      for(auto item1:*masterResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MasterResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MasterResource") != m.end() && !m["MasterResource"].empty()) {
      if (typeid(vector<boost::any>) == m["MasterResource"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MasterResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        masterResource = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResources() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceDBInstanceStorageRange : public Darabonba::Model {
public:
  shared_ptr<long> maxSize{};
  shared_ptr<long> minSize{};
  shared_ptr<long> stepSize{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceDBInstanceStorageRange() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceDBInstanceStorageRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxSize) {
      res["MaxSize"] = boost::any(*maxSize);
    }
    if (minSize) {
      res["MinSize"] = boost::any(*minSize);
    }
    if (stepSize) {
      res["StepSize"] = boost::any(*stepSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxSize") != m.end() && !m["MaxSize"].empty()) {
      maxSize = make_shared<long>(boost::any_cast<long>(m["MaxSize"]));
    }
    if (m.find("MinSize") != m.end() && !m["MinSize"].empty()) {
      minSize = make_shared<long>(boost::any_cast<long>(m["MinSize"]));
    }
    if (m.find("StepSize") != m.end() && !m["StepSize"].empty()) {
      stepSize = make_shared<long>(boost::any_cast<long>(m["StepSize"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceDBInstanceStorageRange() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceInstanceTypeDetail : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> mem{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceInstanceTypeDetail() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceInstanceTypeDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (mem) {
      res["Mem"] = boost::any(*mem);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Mem") != m.end() && !m["Mem"].empty()) {
      mem = make_shared<long>(boost::any_cast<long>(m["Mem"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceInstanceTypeDetail() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceDBInstanceStorageRange> DBInstanceStorageRange{};
  shared_ptr<string> instanceType{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceInstanceTypeDetail> instanceTypeDetail{};
  shared_ptr<long> maxCoreCount{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceStorageRange) {
      res["DBInstanceStorageRange"] = DBInstanceStorageRange ? boost::any(DBInstanceStorageRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instanceTypeDetail) {
      res["InstanceTypeDetail"] = instanceTypeDetail ? boost::any(instanceTypeDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxCoreCount) {
      res["MaxCoreCount"] = boost::any(*maxCoreCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceStorageRange") != m.end() && !m["DBInstanceStorageRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBInstanceStorageRange"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceDBInstanceStorageRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBInstanceStorageRange"]));
        DBInstanceStorageRange = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceDBInstanceStorageRange>(model1);
      }
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstanceTypeDetail") != m.end() && !m["InstanceTypeDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceTypeDetail"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceInstanceTypeDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceTypeDetail"]));
        instanceTypeDetail = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceInstanceTypeDetail>(model1);
      }
    }
    if (m.find("MaxCoreCount") != m.end() && !m["MaxCoreCount"].empty()) {
      maxCoreCount = make_shared<long>(boost::any_cast<long>(m["MaxCoreCount"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResources : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource>> coreResource{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResources() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coreResource) {
      vector<boost::any> temp1;
      for(auto item1:*coreResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CoreResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoreResource") != m.end() && !m["CoreResource"].empty()) {
      if (typeid(vector<boost::any>) == m["CoreResource"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CoreResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        coreResource = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResources() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResources> coreResources{};
  shared_ptr<string> storageType{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coreResources) {
      res["CoreResources"] = coreResources ? boost::any(coreResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoreResources") != m.end() && !m["CoreResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["CoreResources"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CoreResources"]));
        coreResources = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResources>(model1);
      }
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType>> supportedStorageType{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypes() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedStorageType) {
      vector<boost::any> temp1;
      for(auto item1:*supportedStorageType){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedStorageType"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedStorageType") != m.end() && !m["SupportedStorageType"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedStorageType"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedStorageType"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedStorageType = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypes() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypes> supportedStorageTypes{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (supportedStorageTypes) {
      res["SupportedStorageTypes"] = supportedStorageTypes ? boost::any(supportedStorageTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("SupportedStorageTypes") != m.end() && !m["SupportedStorageTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedStorageTypes"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedStorageTypes"]));
        supportedStorageTypes = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypes>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategories : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories>> supportedCategories{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategories() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedCategories) {
      vector<boost::any> temp1;
      for(auto item1:*supportedCategories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedCategories"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedCategories") != m.end() && !m["SupportedCategories"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedCategories"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedCategories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedCategories = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategories() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategories> supportedCategories{};
  shared_ptr<string> version{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedCategories) {
      res["SupportedCategories"] = supportedCategories ? boost::any(supportedCategories->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedCategories") != m.end() && !m["SupportedCategories"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedCategories"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategories model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedCategories"]));
        supportedCategories = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategories>(model1);
      }
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion>> supportedEngineVersion{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersions() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedEngineVersion) {
      vector<boost::any> temp1;
      for(auto item1:*supportedEngineVersion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedEngineVersion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedEngineVersion") != m.end() && !m["SupportedEngineVersion"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedEngineVersion"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedEngineVersion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedEngineVersion = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersions() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine : public Darabonba::Model {
public:
  shared_ptr<string> engine{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersions> supportedEngineVersions{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (supportedEngineVersions) {
      res["SupportedEngineVersions"] = supportedEngineVersions ? boost::any(supportedEngineVersions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("SupportedEngineVersions") != m.end() && !m["SupportedEngineVersions"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedEngineVersions"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedEngineVersions"]));
        supportedEngineVersions = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersions>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine>> supportedEngine{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedEngine) {
      vector<boost::any> temp1;
      for(auto item1:*supportedEngine){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedEngine"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedEngine") != m.end() && !m["SupportedEngine"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedEngine"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedEngine"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedEngine = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResources> masterResources{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines> supportedEngines{};
  shared_ptr<string> zoneId{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (masterResources) {
      res["MasterResources"] = masterResources ? boost::any(masterResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (supportedEngines) {
      res["SupportedEngines"] = supportedEngines ? boost::any(supportedEngines->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MasterResources") != m.end() && !m["MasterResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["MasterResources"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MasterResources"]));
        masterResources = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResources>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SupportedEngines") != m.end() && !m["SupportedEngines"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedEngines"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedEngines"]));
        supportedEngines = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines>(model1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone>> availableZone{};

  DescribeAvailableResourceResponseBodyAvailableZones() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableZone) {
      vector<boost::any> temp1;
      for(auto item1:*availableZone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableZone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableZone") != m.end() && !m["AvailableZone"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableZone"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableZone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableZone = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZones() = default;
};
class DescribeAvailableResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZones> availableZones{};
  shared_ptr<string> requestId{};

  DescribeAvailableResourceResponseBody() {}

  explicit DescribeAvailableResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableZones) {
      res["AvailableZones"] = availableZones ? boost::any(availableZones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableZones") != m.end() && !m["AvailableZones"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvailableZones"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvailableZones"]));
        availableZones = make_shared<DescribeAvailableResourceResponseBodyAvailableZones>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class DescribeBackupPlanConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeBackupPlanConfigRequest() {}

  explicit DescribeBackupPlanConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeBackupPlanConfigRequest() = default;
};
class DescribeBackupPlanConfigResponseBodyTables : public Darabonba::Model {
public:
  shared_ptr<vector<string>> table{};

  DescribeBackupPlanConfigResponseBodyTables() {}

  explicit DescribeBackupPlanConfigResponseBodyTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Table"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Table"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      table = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBackupPlanConfigResponseBodyTables() = default;
};
class DescribeBackupPlanConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> fullBackupCycle{};
  shared_ptr<long> minHFileBackupCount{};
  shared_ptr<string> nextFullBackupDate{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeBackupPlanConfigResponseBodyTables> tables{};

  DescribeBackupPlanConfigResponseBody() {}

  explicit DescribeBackupPlanConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fullBackupCycle) {
      res["FullBackupCycle"] = boost::any(*fullBackupCycle);
    }
    if (minHFileBackupCount) {
      res["MinHFileBackupCount"] = boost::any(*minHFileBackupCount);
    }
    if (nextFullBackupDate) {
      res["NextFullBackupDate"] = boost::any(*nextFullBackupDate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tables) {
      res["Tables"] = tables ? boost::any(tables->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FullBackupCycle") != m.end() && !m["FullBackupCycle"].empty()) {
      fullBackupCycle = make_shared<long>(boost::any_cast<long>(m["FullBackupCycle"]));
    }
    if (m.find("MinHFileBackupCount") != m.end() && !m["MinHFileBackupCount"].empty()) {
      minHFileBackupCount = make_shared<long>(boost::any_cast<long>(m["MinHFileBackupCount"]));
    }
    if (m.find("NextFullBackupDate") != m.end() && !m["NextFullBackupDate"].empty()) {
      nextFullBackupDate = make_shared<string>(boost::any_cast<string>(m["NextFullBackupDate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tables"].type()) {
        DescribeBackupPlanConfigResponseBodyTables model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tables"]));
        tables = make_shared<DescribeBackupPlanConfigResponseBodyTables>(model1);
      }
    }
  }


  virtual ~DescribeBackupPlanConfigResponseBody() = default;
};
class DescribeBackupPlanConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupPlanConfigResponseBody> body{};

  DescribeBackupPlanConfigResponse() {}

  explicit DescribeBackupPlanConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupPlanConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupPlanConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupPlanConfigResponse() = default;
};
class DescribeBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeBackupPolicyRequest() {}

  explicit DescribeBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeBackupPolicyRequest() = default;
};
class DescribeBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupRetentionPeriod{};
  shared_ptr<string> preferredBackupEndTimeUTC{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredBackupStartTimeUTC{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> requestId{};

  DescribeBackupPolicyResponseBody() {}

  explicit DescribeBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (preferredBackupEndTimeUTC) {
      res["PreferredBackupEndTimeUTC"] = boost::any(*preferredBackupEndTimeUTC);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredBackupStartTimeUTC) {
      res["PreferredBackupStartTimeUTC"] = boost::any(*preferredBackupStartTimeUTC);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<string>(boost::any_cast<string>(m["BackupRetentionPeriod"]));
    }
    if (m.find("PreferredBackupEndTimeUTC") != m.end() && !m["PreferredBackupEndTimeUTC"].empty()) {
      preferredBackupEndTimeUTC = make_shared<string>(boost::any_cast<string>(m["PreferredBackupEndTimeUTC"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredBackupStartTimeUTC") != m.end() && !m["PreferredBackupStartTimeUTC"].empty()) {
      preferredBackupStartTimeUTC = make_shared<string>(boost::any_cast<string>(m["PreferredBackupStartTimeUTC"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeBackupPolicyResponseBody() = default;
};
class DescribeBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupPolicyResponseBody> body{};

  DescribeBackupPolicyResponse() {}

  explicit DescribeBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupPolicyResponse() = default;
};
class DescribeBackupStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeBackupStatusRequest() {}

  explicit DescribeBackupStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeBackupStatusRequest() = default;
};
class DescribeBackupStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupStatus{};
  shared_ptr<string> bdsClusterId{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};

  DescribeBackupStatusResponseBody() {}

  explicit DescribeBackupStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (bdsClusterId) {
      res["BdsClusterId"] = boost::any(*bdsClusterId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("BdsClusterId") != m.end() && !m["BdsClusterId"].empty()) {
      bdsClusterId = make_shared<string>(boost::any_cast<string>(m["BdsClusterId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeBackupStatusResponseBody() = default;
};
class DescribeBackupStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupStatusResponseBody> body{};

  DescribeBackupStatusResponse() {}

  explicit DescribeBackupStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupStatusResponse() = default;
};
class DescribeBackupSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeBackupSummaryRequest() {}

  explicit DescribeBackupSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeBackupSummaryRequest() = default;
};
class DescribeBackupSummaryResponseBodyFullRecordsRecord : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> dataSize{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> process{};
  shared_ptr<string> recordId{};
  shared_ptr<string> speed{};
  shared_ptr<string> status{};

  DescribeBackupSummaryResponseBodyFullRecordsRecord() {}

  explicit DescribeBackupSummaryResponseBodyFullRecordsRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (process) {
      res["Process"] = boost::any(*process);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
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
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<string>(boost::any_cast<string>(m["DataSize"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      process = make_shared<string>(boost::any_cast<string>(m["Process"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<string>(boost::any_cast<string>(m["Speed"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeBackupSummaryResponseBodyFullRecordsRecord() = default;
};
class DescribeBackupSummaryResponseBodyFullRecords : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupSummaryResponseBodyFullRecordsRecord>> record{};

  DescribeBackupSummaryResponseBodyFullRecords() {}

  explicit DescribeBackupSummaryResponseBodyFullRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (record) {
      vector<boost::any> temp1;
      for(auto item1:*record){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Record"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Record") != m.end() && !m["Record"].empty()) {
      if (typeid(vector<boost::any>) == m["Record"].type()) {
        vector<DescribeBackupSummaryResponseBodyFullRecordsRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Record"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupSummaryResponseBodyFullRecordsRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        record = make_shared<vector<DescribeBackupSummaryResponseBodyFullRecordsRecord>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupSummaryResponseBodyFullRecords() = default;
};
class DescribeBackupSummaryResponseBodyFull : public Darabonba::Model {
public:
  shared_ptr<string> hasMore{};
  shared_ptr<string> nextFullBackupDate{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<DescribeBackupSummaryResponseBodyFullRecords> records{};
  shared_ptr<long> total{};

  DescribeBackupSummaryResponseBodyFull() {}

  explicit DescribeBackupSummaryResponseBodyFull(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (nextFullBackupDate) {
      res["NextFullBackupDate"] = boost::any(*nextFullBackupDate);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (records) {
      res["Records"] = records ? boost::any(records->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<string>(boost::any_cast<string>(m["HasMore"]));
    }
    if (m.find("NextFullBackupDate") != m.end() && !m["NextFullBackupDate"].empty()) {
      nextFullBackupDate = make_shared<string>(boost::any_cast<string>(m["NextFullBackupDate"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(map<string, boost::any>) == m["Records"].type()) {
        DescribeBackupSummaryResponseBodyFullRecords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Records"]));
        records = make_shared<DescribeBackupSummaryResponseBodyFullRecords>(model1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeBackupSummaryResponseBodyFull() = default;
};
class DescribeBackupSummaryResponseBodyIncr : public Darabonba::Model {
public:
  shared_ptr<string> backupLogSize{};
  shared_ptr<string> pos{};
  shared_ptr<string> queueLogNum{};
  shared_ptr<string> runningLogNum{};
  shared_ptr<string> speed{};
  shared_ptr<string> status{};

  DescribeBackupSummaryResponseBodyIncr() {}

  explicit DescribeBackupSummaryResponseBodyIncr(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupLogSize) {
      res["BackupLogSize"] = boost::any(*backupLogSize);
    }
    if (pos) {
      res["Pos"] = boost::any(*pos);
    }
    if (queueLogNum) {
      res["QueueLogNum"] = boost::any(*queueLogNum);
    }
    if (runningLogNum) {
      res["RunningLogNum"] = boost::any(*runningLogNum);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupLogSize") != m.end() && !m["BackupLogSize"].empty()) {
      backupLogSize = make_shared<string>(boost::any_cast<string>(m["BackupLogSize"]));
    }
    if (m.find("Pos") != m.end() && !m["Pos"].empty()) {
      pos = make_shared<string>(boost::any_cast<string>(m["Pos"]));
    }
    if (m.find("QueueLogNum") != m.end() && !m["QueueLogNum"].empty()) {
      queueLogNum = make_shared<string>(boost::any_cast<string>(m["QueueLogNum"]));
    }
    if (m.find("RunningLogNum") != m.end() && !m["RunningLogNum"].empty()) {
      runningLogNum = make_shared<string>(boost::any_cast<string>(m["RunningLogNum"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<string>(boost::any_cast<string>(m["Speed"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeBackupSummaryResponseBodyIncr() = default;
};
class DescribeBackupSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeBackupSummaryResponseBodyFull> full{};
  shared_ptr<DescribeBackupSummaryResponseBodyIncr> incr{};
  shared_ptr<string> requestId{};

  DescribeBackupSummaryResponseBody() {}

  explicit DescribeBackupSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (full) {
      res["Full"] = full ? boost::any(full->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (incr) {
      res["Incr"] = incr ? boost::any(incr->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Full") != m.end() && !m["Full"].empty()) {
      if (typeid(map<string, boost::any>) == m["Full"].type()) {
        DescribeBackupSummaryResponseBodyFull model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Full"]));
        full = make_shared<DescribeBackupSummaryResponseBodyFull>(model1);
      }
    }
    if (m.find("Incr") != m.end() && !m["Incr"].empty()) {
      if (typeid(map<string, boost::any>) == m["Incr"].type()) {
        DescribeBackupSummaryResponseBodyIncr model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Incr"]));
        incr = make_shared<DescribeBackupSummaryResponseBodyIncr>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeBackupSummaryResponseBody() = default;
};
class DescribeBackupSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupSummaryResponseBody> body{};

  DescribeBackupSummaryResponse() {}

  explicit DescribeBackupSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupSummaryResponse() = default;
};
class DescribeBackupTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupRecordId{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeBackupTablesRequest() {}

  explicit DescribeBackupTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupRecordId) {
      res["BackupRecordId"] = boost::any(*backupRecordId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("BackupRecordId") != m.end() && !m["BackupRecordId"].empty()) {
      backupRecordId = make_shared<string>(boost::any_cast<string>(m["BackupRecordId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeBackupTablesRequest() = default;
};
class DescribeBackupTablesResponseBodyBackupRecordsBackupRecord : public Darabonba::Model {
public:
  shared_ptr<string> dataSize{};
  shared_ptr<string> endTime{};
  shared_ptr<string> message{};
  shared_ptr<string> process{};
  shared_ptr<string> speed{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};
  shared_ptr<string> table{};

  DescribeBackupTablesResponseBodyBackupRecordsBackupRecord() {}

  explicit DescribeBackupTablesResponseBodyBackupRecordsBackupRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (process) {
      res["Process"] = boost::any(*process);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<string>(boost::any_cast<string>(m["DataSize"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      process = make_shared<string>(boost::any_cast<string>(m["Process"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<string>(boost::any_cast<string>(m["Speed"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
  }


  virtual ~DescribeBackupTablesResponseBodyBackupRecordsBackupRecord() = default;
};
class DescribeBackupTablesResponseBodyBackupRecords : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupTablesResponseBodyBackupRecordsBackupRecord>> backupRecord{};

  DescribeBackupTablesResponseBodyBackupRecords() {}

  explicit DescribeBackupTablesResponseBodyBackupRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupRecord) {
      vector<boost::any> temp1;
      for(auto item1:*backupRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackupRecord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupRecord") != m.end() && !m["BackupRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["BackupRecord"].type()) {
        vector<DescribeBackupTablesResponseBodyBackupRecordsBackupRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackupRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupTablesResponseBodyBackupRecordsBackupRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backupRecord = make_shared<vector<DescribeBackupTablesResponseBodyBackupRecordsBackupRecord>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupTablesResponseBodyBackupRecords() = default;
};
class DescribeBackupTablesResponseBodyTables : public Darabonba::Model {
public:
  shared_ptr<vector<string>> table{};

  DescribeBackupTablesResponseBodyTables() {}

  explicit DescribeBackupTablesResponseBodyTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Table"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Table"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      table = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBackupTablesResponseBodyTables() = default;
};
class DescribeBackupTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeBackupTablesResponseBodyBackupRecords> backupRecords{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeBackupTablesResponseBodyTables> tables{};
  shared_ptr<long> total{};

  DescribeBackupTablesResponseBody() {}

  explicit DescribeBackupTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupRecords) {
      res["BackupRecords"] = backupRecords ? boost::any(backupRecords->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (tables) {
      res["Tables"] = tables ? boost::any(tables->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupRecords") != m.end() && !m["BackupRecords"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackupRecords"].type()) {
        DescribeBackupTablesResponseBodyBackupRecords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackupRecords"]));
        backupRecords = make_shared<DescribeBackupTablesResponseBodyBackupRecords>(model1);
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
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tables"].type()) {
        DescribeBackupTablesResponseBodyTables model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tables"]));
        tables = make_shared<DescribeBackupTablesResponseBodyTables>(model1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeBackupTablesResponseBody() = default;
};
class DescribeBackupTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupTablesResponseBody> body{};

  DescribeBackupTablesResponse() {}

  explicit DescribeBackupTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupTablesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupTablesResponse() = default;
};
class DescribeBackupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> endTimeUTC{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<string> startTimeUTC{};

  DescribeBackupsRequest() {}

  explicit DescribeBackupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (endTimeUTC) {
      res["EndTimeUTC"] = boost::any(*endTimeUTC);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (startTimeUTC) {
      res["StartTimeUTC"] = boost::any(*startTimeUTC);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EndTimeUTC") != m.end() && !m["EndTimeUTC"].empty()) {
      endTimeUTC = make_shared<string>(boost::any_cast<string>(m["EndTimeUTC"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("StartTimeUTC") != m.end() && !m["StartTimeUTC"].empty()) {
      startTimeUTC = make_shared<string>(boost::any_cast<string>(m["StartTimeUTC"]));
    }
  }


  virtual ~DescribeBackupsRequest() = default;
};
class DescribeBackupsResponseBodyBackupsBackup : public Darabonba::Model {
public:
  shared_ptr<string> backupDBNames{};
  shared_ptr<string> backupDownloadURL{};
  shared_ptr<string> backupEndTime{};
  shared_ptr<string> backupEndTimeUTC{};
  shared_ptr<long> backupId{};
  shared_ptr<string> backupMethod{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupSize{};
  shared_ptr<string> backupStartTime{};
  shared_ptr<string> backupStartTimeUTC{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> backupType{};

  DescribeBackupsResponseBodyBackupsBackup() {}

  explicit DescribeBackupsResponseBodyBackupsBackup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupDBNames) {
      res["BackupDBNames"] = boost::any(*backupDBNames);
    }
    if (backupDownloadURL) {
      res["BackupDownloadURL"] = boost::any(*backupDownloadURL);
    }
    if (backupEndTime) {
      res["BackupEndTime"] = boost::any(*backupEndTime);
    }
    if (backupEndTimeUTC) {
      res["BackupEndTimeUTC"] = boost::any(*backupEndTimeUTC);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupSize) {
      res["BackupSize"] = boost::any(*backupSize);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupStartTimeUTC) {
      res["BackupStartTimeUTC"] = boost::any(*backupStartTimeUTC);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupDBNames") != m.end() && !m["BackupDBNames"].empty()) {
      backupDBNames = make_shared<string>(boost::any_cast<string>(m["BackupDBNames"]));
    }
    if (m.find("BackupDownloadURL") != m.end() && !m["BackupDownloadURL"].empty()) {
      backupDownloadURL = make_shared<string>(boost::any_cast<string>(m["BackupDownloadURL"]));
    }
    if (m.find("BackupEndTime") != m.end() && !m["BackupEndTime"].empty()) {
      backupEndTime = make_shared<string>(boost::any_cast<string>(m["BackupEndTime"]));
    }
    if (m.find("BackupEndTimeUTC") != m.end() && !m["BackupEndTimeUTC"].empty()) {
      backupEndTimeUTC = make_shared<string>(boost::any_cast<string>(m["BackupEndTimeUTC"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<long>(boost::any_cast<long>(m["BackupId"]));
    }
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupSize") != m.end() && !m["BackupSize"].empty()) {
      backupSize = make_shared<string>(boost::any_cast<string>(m["BackupSize"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<string>(boost::any_cast<string>(m["BackupStartTime"]));
    }
    if (m.find("BackupStartTimeUTC") != m.end() && !m["BackupStartTimeUTC"].empty()) {
      backupStartTimeUTC = make_shared<string>(boost::any_cast<string>(m["BackupStartTimeUTC"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
  }


  virtual ~DescribeBackupsResponseBodyBackupsBackup() = default;
};
class DescribeBackupsResponseBodyBackups : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupsResponseBodyBackupsBackup>> backup{};

  DescribeBackupsResponseBodyBackups() {}

  explicit DescribeBackupsResponseBodyBackups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backup) {
      vector<boost::any> temp1;
      for(auto item1:*backup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backup") != m.end() && !m["Backup"].empty()) {
      if (typeid(vector<boost::any>) == m["Backup"].type()) {
        vector<DescribeBackupsResponseBodyBackupsBackup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupsResponseBodyBackupsBackup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backup = make_shared<vector<DescribeBackupsResponseBodyBackupsBackup>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupsResponseBodyBackups() = default;
};
class DescribeBackupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeBackupsResponseBodyBackups> backups{};
  shared_ptr<string> enableStatus{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeBackupsResponseBody() {}

  explicit DescribeBackupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backups) {
      res["Backups"] = backups ? boost::any(backups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (enableStatus) {
      res["EnableStatus"] = boost::any(*enableStatus);
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
    if (m.find("Backups") != m.end() && !m["Backups"].empty()) {
      if (typeid(map<string, boost::any>) == m["Backups"].type()) {
        DescribeBackupsResponseBodyBackups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Backups"]));
        backups = make_shared<DescribeBackupsResponseBodyBackups>(model1);
      }
    }
    if (m.find("EnableStatus") != m.end() && !m["EnableStatus"].empty()) {
      enableStatus = make_shared<string>(boost::any_cast<string>(m["EnableStatus"]));
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


  virtual ~DescribeBackupsResponseBody() = default;
};
class DescribeBackupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupsResponseBody> body{};

  DescribeBackupsResponse() {}

  explicit DescribeBackupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupsResponse() = default;
};
class DescribeClusterConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> regionId{};

  DescribeClusterConnectionRequest() {}

  explicit DescribeClusterConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeClusterConnectionRequest() = default;
};
class DescribeClusterConnectionResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo : public Darabonba::Model {
public:
  shared_ptr<string> connAddr{};
  shared_ptr<string> connAddrPort{};
  shared_ptr<string> netType{};

  DescribeClusterConnectionResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo() {}

  explicit DescribeClusterConnectionResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddr) {
      res["ConnAddr"] = boost::any(*connAddr);
    }
    if (connAddrPort) {
      res["ConnAddrPort"] = boost::any(*connAddrPort);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddr") != m.end() && !m["ConnAddr"].empty()) {
      connAddr = make_shared<string>(boost::any_cast<string>(m["ConnAddr"]));
    }
    if (m.find("ConnAddrPort") != m.end() && !m["ConnAddrPort"].empty()) {
      connAddrPort = make_shared<string>(boost::any_cast<string>(m["ConnAddrPort"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
  }


  virtual ~DescribeClusterConnectionResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo() = default;
};
class DescribeClusterConnectionResponseBodyServiceConnAddrsServiceConnAddr : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterConnectionResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo> connAddrInfo{};
  shared_ptr<string> connType{};

  DescribeClusterConnectionResponseBodyServiceConnAddrsServiceConnAddr() {}

  explicit DescribeClusterConnectionResponseBodyServiceConnAddrsServiceConnAddr(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddrInfo) {
      res["ConnAddrInfo"] = connAddrInfo ? boost::any(connAddrInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (connType) {
      res["ConnType"] = boost::any(*connType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddrInfo") != m.end() && !m["ConnAddrInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConnAddrInfo"].type()) {
        DescribeClusterConnectionResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConnAddrInfo"]));
        connAddrInfo = make_shared<DescribeClusterConnectionResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo>(model1);
      }
    }
    if (m.find("ConnType") != m.end() && !m["ConnType"].empty()) {
      connType = make_shared<string>(boost::any_cast<string>(m["ConnType"]));
    }
  }


  virtual ~DescribeClusterConnectionResponseBodyServiceConnAddrsServiceConnAddr() = default;
};
class DescribeClusterConnectionResponseBodyServiceConnAddrs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterConnectionResponseBodyServiceConnAddrsServiceConnAddr>> serviceConnAddr{};

  DescribeClusterConnectionResponseBodyServiceConnAddrs() {}

  explicit DescribeClusterConnectionResponseBodyServiceConnAddrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceConnAddr) {
      vector<boost::any> temp1;
      for(auto item1:*serviceConnAddr){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceConnAddr"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceConnAddr") != m.end() && !m["ServiceConnAddr"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceConnAddr"].type()) {
        vector<DescribeClusterConnectionResponseBodyServiceConnAddrsServiceConnAddr> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceConnAddr"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterConnectionResponseBodyServiceConnAddrsServiceConnAddr model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceConnAddr = make_shared<vector<DescribeClusterConnectionResponseBodyServiceConnAddrsServiceConnAddr>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterConnectionResponseBodyServiceConnAddrs() = default;
};
class DescribeClusterConnectionResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo : public Darabonba::Model {
public:
  shared_ptr<string> connAddr{};
  shared_ptr<string> connAddrPort{};
  shared_ptr<string> netType{};

  DescribeClusterConnectionResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo() {}

  explicit DescribeClusterConnectionResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddr) {
      res["ConnAddr"] = boost::any(*connAddr);
    }
    if (connAddrPort) {
      res["ConnAddrPort"] = boost::any(*connAddrPort);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddr") != m.end() && !m["ConnAddr"].empty()) {
      connAddr = make_shared<string>(boost::any_cast<string>(m["ConnAddr"]));
    }
    if (m.find("ConnAddrPort") != m.end() && !m["ConnAddrPort"].empty()) {
      connAddrPort = make_shared<string>(boost::any_cast<string>(m["ConnAddrPort"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
  }


  virtual ~DescribeClusterConnectionResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo() = default;
};
class DescribeClusterConnectionResponseBodySlbConnAddrsSlbConnAddr : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterConnectionResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo> connAddrInfo{};
  shared_ptr<string> slbType{};

  DescribeClusterConnectionResponseBodySlbConnAddrsSlbConnAddr() {}

  explicit DescribeClusterConnectionResponseBodySlbConnAddrsSlbConnAddr(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddrInfo) {
      res["ConnAddrInfo"] = connAddrInfo ? boost::any(connAddrInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (slbType) {
      res["SlbType"] = boost::any(*slbType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddrInfo") != m.end() && !m["ConnAddrInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConnAddrInfo"].type()) {
        DescribeClusterConnectionResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConnAddrInfo"]));
        connAddrInfo = make_shared<DescribeClusterConnectionResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo>(model1);
      }
    }
    if (m.find("SlbType") != m.end() && !m["SlbType"].empty()) {
      slbType = make_shared<string>(boost::any_cast<string>(m["SlbType"]));
    }
  }


  virtual ~DescribeClusterConnectionResponseBodySlbConnAddrsSlbConnAddr() = default;
};
class DescribeClusterConnectionResponseBodySlbConnAddrs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterConnectionResponseBodySlbConnAddrsSlbConnAddr>> slbConnAddr{};

  DescribeClusterConnectionResponseBodySlbConnAddrs() {}

  explicit DescribeClusterConnectionResponseBodySlbConnAddrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slbConnAddr) {
      vector<boost::any> temp1;
      for(auto item1:*slbConnAddr){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlbConnAddr"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SlbConnAddr") != m.end() && !m["SlbConnAddr"].empty()) {
      if (typeid(vector<boost::any>) == m["SlbConnAddr"].type()) {
        vector<DescribeClusterConnectionResponseBodySlbConnAddrsSlbConnAddr> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlbConnAddr"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterConnectionResponseBodySlbConnAddrsSlbConnAddr model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slbConnAddr = make_shared<vector<DescribeClusterConnectionResponseBodySlbConnAddrsSlbConnAddr>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterConnectionResponseBodySlbConnAddrs() = default;
};
class DescribeClusterConnectionResponseBodyThriftConn : public Darabonba::Model {
public:
  shared_ptr<string> connAddr{};
  shared_ptr<string> connAddrPort{};
  shared_ptr<string> netType{};

  DescribeClusterConnectionResponseBodyThriftConn() {}

  explicit DescribeClusterConnectionResponseBodyThriftConn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddr) {
      res["ConnAddr"] = boost::any(*connAddr);
    }
    if (connAddrPort) {
      res["ConnAddrPort"] = boost::any(*connAddrPort);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddr") != m.end() && !m["ConnAddr"].empty()) {
      connAddr = make_shared<string>(boost::any_cast<string>(m["ConnAddr"]));
    }
    if (m.find("ConnAddrPort") != m.end() && !m["ConnAddrPort"].empty()) {
      connAddrPort = make_shared<string>(boost::any_cast<string>(m["ConnAddrPort"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
  }


  virtual ~DescribeClusterConnectionResponseBodyThriftConn() = default;
};
class DescribeClusterConnectionResponseBodyUiProxyConnAddrInfo : public Darabonba::Model {
public:
  shared_ptr<string> connAddr{};
  shared_ptr<string> connAddrPort{};
  shared_ptr<string> netType{};

  DescribeClusterConnectionResponseBodyUiProxyConnAddrInfo() {}

  explicit DescribeClusterConnectionResponseBodyUiProxyConnAddrInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddr) {
      res["ConnAddr"] = boost::any(*connAddr);
    }
    if (connAddrPort) {
      res["ConnAddrPort"] = boost::any(*connAddrPort);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddr") != m.end() && !m["ConnAddr"].empty()) {
      connAddr = make_shared<string>(boost::any_cast<string>(m["ConnAddr"]));
    }
    if (m.find("ConnAddrPort") != m.end() && !m["ConnAddrPort"].empty()) {
      connAddrPort = make_shared<string>(boost::any_cast<string>(m["ConnAddrPort"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
  }


  virtual ~DescribeClusterConnectionResponseBodyUiProxyConnAddrInfo() = default;
};
class DescribeClusterConnectionResponseBodyZkConnAddrsZkConnAddr : public Darabonba::Model {
public:
  shared_ptr<string> connAddr{};
  shared_ptr<string> connAddrPort{};
  shared_ptr<string> netType{};

  DescribeClusterConnectionResponseBodyZkConnAddrsZkConnAddr() {}

  explicit DescribeClusterConnectionResponseBodyZkConnAddrsZkConnAddr(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddr) {
      res["ConnAddr"] = boost::any(*connAddr);
    }
    if (connAddrPort) {
      res["ConnAddrPort"] = boost::any(*connAddrPort);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddr") != m.end() && !m["ConnAddr"].empty()) {
      connAddr = make_shared<string>(boost::any_cast<string>(m["ConnAddr"]));
    }
    if (m.find("ConnAddrPort") != m.end() && !m["ConnAddrPort"].empty()) {
      connAddrPort = make_shared<string>(boost::any_cast<string>(m["ConnAddrPort"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
  }


  virtual ~DescribeClusterConnectionResponseBodyZkConnAddrsZkConnAddr() = default;
};
class DescribeClusterConnectionResponseBodyZkConnAddrs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterConnectionResponseBodyZkConnAddrsZkConnAddr>> zkConnAddr{};

  DescribeClusterConnectionResponseBodyZkConnAddrs() {}

  explicit DescribeClusterConnectionResponseBodyZkConnAddrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zkConnAddr) {
      vector<boost::any> temp1;
      for(auto item1:*zkConnAddr){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZkConnAddr"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZkConnAddr") != m.end() && !m["ZkConnAddr"].empty()) {
      if (typeid(vector<boost::any>) == m["ZkConnAddr"].type()) {
        vector<DescribeClusterConnectionResponseBodyZkConnAddrsZkConnAddr> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZkConnAddr"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterConnectionResponseBodyZkConnAddrsZkConnAddr model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zkConnAddr = make_shared<vector<DescribeClusterConnectionResponseBodyZkConnAddrsZkConnAddr>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterConnectionResponseBodyZkConnAddrs() = default;
};
class DescribeClusterConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dbType{};
  shared_ptr<string> isMultimod{};
  shared_ptr<string> netType{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeClusterConnectionResponseBodyServiceConnAddrs> serviceConnAddrs{};
  shared_ptr<DescribeClusterConnectionResponseBodySlbConnAddrs> slbConnAddrs{};
  shared_ptr<DescribeClusterConnectionResponseBodyThriftConn> thriftConn{};
  shared_ptr<DescribeClusterConnectionResponseBodyUiProxyConnAddrInfo> uiProxyConnAddrInfo{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<DescribeClusterConnectionResponseBodyZkConnAddrs> zkConnAddrs{};

  DescribeClusterConnectionResponseBody() {}

  explicit DescribeClusterConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (isMultimod) {
      res["IsMultimod"] = boost::any(*isMultimod);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceConnAddrs) {
      res["ServiceConnAddrs"] = serviceConnAddrs ? boost::any(serviceConnAddrs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (slbConnAddrs) {
      res["SlbConnAddrs"] = slbConnAddrs ? boost::any(slbConnAddrs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (thriftConn) {
      res["ThriftConn"] = thriftConn ? boost::any(thriftConn->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (uiProxyConnAddrInfo) {
      res["UiProxyConnAddrInfo"] = uiProxyConnAddrInfo ? boost::any(uiProxyConnAddrInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zkConnAddrs) {
      res["ZkConnAddrs"] = zkConnAddrs ? boost::any(zkConnAddrs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("IsMultimod") != m.end() && !m["IsMultimod"].empty()) {
      isMultimod = make_shared<string>(boost::any_cast<string>(m["IsMultimod"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceConnAddrs") != m.end() && !m["ServiceConnAddrs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceConnAddrs"].type()) {
        DescribeClusterConnectionResponseBodyServiceConnAddrs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceConnAddrs"]));
        serviceConnAddrs = make_shared<DescribeClusterConnectionResponseBodyServiceConnAddrs>(model1);
      }
    }
    if (m.find("SlbConnAddrs") != m.end() && !m["SlbConnAddrs"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlbConnAddrs"].type()) {
        DescribeClusterConnectionResponseBodySlbConnAddrs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlbConnAddrs"]));
        slbConnAddrs = make_shared<DescribeClusterConnectionResponseBodySlbConnAddrs>(model1);
      }
    }
    if (m.find("ThriftConn") != m.end() && !m["ThriftConn"].empty()) {
      if (typeid(map<string, boost::any>) == m["ThriftConn"].type()) {
        DescribeClusterConnectionResponseBodyThriftConn model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ThriftConn"]));
        thriftConn = make_shared<DescribeClusterConnectionResponseBodyThriftConn>(model1);
      }
    }
    if (m.find("UiProxyConnAddrInfo") != m.end() && !m["UiProxyConnAddrInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UiProxyConnAddrInfo"].type()) {
        DescribeClusterConnectionResponseBodyUiProxyConnAddrInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UiProxyConnAddrInfo"]));
        uiProxyConnAddrInfo = make_shared<DescribeClusterConnectionResponseBodyUiProxyConnAddrInfo>(model1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZkConnAddrs") != m.end() && !m["ZkConnAddrs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ZkConnAddrs"].type()) {
        DescribeClusterConnectionResponseBodyZkConnAddrs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ZkConnAddrs"]));
        zkConnAddrs = make_shared<DescribeClusterConnectionResponseBodyZkConnAddrs>(model1);
      }
    }
  }


  virtual ~DescribeClusterConnectionResponseBody() = default;
};
class DescribeClusterConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClusterConnectionResponseBody> body{};

  DescribeClusterConnectionResponse() {}

  explicit DescribeClusterConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeClusterConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterConnectionResponse() = default;
};
class DescribeColdStorageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeColdStorageRequest() {}

  explicit DescribeColdStorageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeColdStorageRequest() = default;
};
class DescribeColdStorageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> coldStorageSize{};
  shared_ptr<string> coldStorageType{};
  shared_ptr<string> coldStorageUseAmount{};
  shared_ptr<string> coldStorageUsePercent{};
  shared_ptr<string> openStatus{};
  shared_ptr<string> payType{};
  shared_ptr<string> requestId{};

  DescribeColdStorageResponseBody() {}

  explicit DescribeColdStorageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (coldStorageSize) {
      res["ColdStorageSize"] = boost::any(*coldStorageSize);
    }
    if (coldStorageType) {
      res["ColdStorageType"] = boost::any(*coldStorageType);
    }
    if (coldStorageUseAmount) {
      res["ColdStorageUseAmount"] = boost::any(*coldStorageUseAmount);
    }
    if (coldStorageUsePercent) {
      res["ColdStorageUsePercent"] = boost::any(*coldStorageUsePercent);
    }
    if (openStatus) {
      res["OpenStatus"] = boost::any(*openStatus);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
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
    if (m.find("ColdStorageSize") != m.end() && !m["ColdStorageSize"].empty()) {
      coldStorageSize = make_shared<string>(boost::any_cast<string>(m["ColdStorageSize"]));
    }
    if (m.find("ColdStorageType") != m.end() && !m["ColdStorageType"].empty()) {
      coldStorageType = make_shared<string>(boost::any_cast<string>(m["ColdStorageType"]));
    }
    if (m.find("ColdStorageUseAmount") != m.end() && !m["ColdStorageUseAmount"].empty()) {
      coldStorageUseAmount = make_shared<string>(boost::any_cast<string>(m["ColdStorageUseAmount"]));
    }
    if (m.find("ColdStorageUsePercent") != m.end() && !m["ColdStorageUsePercent"].empty()) {
      coldStorageUsePercent = make_shared<string>(boost::any_cast<string>(m["ColdStorageUsePercent"]));
    }
    if (m.find("OpenStatus") != m.end() && !m["OpenStatus"].empty()) {
      openStatus = make_shared<string>(boost::any_cast<string>(m["OpenStatus"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeColdStorageResponseBody() = default;
};
class DescribeColdStorageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeColdStorageResponseBody> body{};

  DescribeColdStorageResponse() {}

  explicit DescribeColdStorageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeColdStorageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeColdStorageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeColdStorageResponse() = default;
};
class DescribeDBInstanceUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeDBInstanceUsageRequest() {}

  explicit DescribeDBInstanceUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeDBInstanceUsageRequest() = default;
};
class DescribeDBInstanceUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  DescribeDBInstanceUsageResponseBody() {}

  explicit DescribeDBInstanceUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~DescribeDBInstanceUsageResponseBody() = default;
};
class DescribeDBInstanceUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstanceUsageResponseBody> body{};

  DescribeDBInstanceUsageResponse() {}

  explicit DescribeDBInstanceUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstanceUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceUsageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceUsageResponse() = default;
};
class DescribeDeletedInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  DescribeDeletedInstancesRequest() {}

  explicit DescribeDeletedInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDeletedInstancesRequest() = default;
};
class DescribeDeletedInstancesResponseBodyInstancesInstance : public Darabonba::Model {
public:
  shared_ptr<string> clusterType{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> deleteTime{};
  shared_ptr<string> engine{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> majorVersion{};
  shared_ptr<string> moduleStackVersion{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> zoneId{};

  DescribeDeletedInstancesResponseBodyInstancesInstance() {}

  explicit DescribeDeletedInstancesResponseBodyInstancesInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (deleteTime) {
      res["DeleteTime"] = boost::any(*deleteTime);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (majorVersion) {
      res["MajorVersion"] = boost::any(*majorVersion);
    }
    if (moduleStackVersion) {
      res["ModuleStackVersion"] = boost::any(*moduleStackVersion);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DeleteTime") != m.end() && !m["DeleteTime"].empty()) {
      deleteTime = make_shared<string>(boost::any_cast<string>(m["DeleteTime"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("MajorVersion") != m.end() && !m["MajorVersion"].empty()) {
      majorVersion = make_shared<string>(boost::any_cast<string>(m["MajorVersion"]));
    }
    if (m.find("ModuleStackVersion") != m.end() && !m["ModuleStackVersion"].empty()) {
      moduleStackVersion = make_shared<string>(boost::any_cast<string>(m["ModuleStackVersion"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDeletedInstancesResponseBodyInstancesInstance() = default;
};
class DescribeDeletedInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDeletedInstancesResponseBodyInstancesInstance>> instance{};

  DescribeDeletedInstancesResponseBodyInstances() {}

  explicit DescribeDeletedInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<DescribeDeletedInstancesResponseBodyInstancesInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeletedInstancesResponseBodyInstancesInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<DescribeDeletedInstancesResponseBodyInstancesInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeDeletedInstancesResponseBodyInstances() = default;
};
class DescribeDeletedInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDeletedInstancesResponseBodyInstances> instances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDeletedInstancesResponseBody() {}

  explicit DescribeDeletedInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      res["Instances"] = instances ? boost::any(instances->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instances"].type()) {
        DescribeDeletedInstancesResponseBodyInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instances"]));
        instances = make_shared<DescribeDeletedInstancesResponseBodyInstances>(model1);
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


  virtual ~DescribeDeletedInstancesResponseBody() = default;
};
class DescribeDeletedInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDeletedInstancesResponseBody> body{};

  DescribeDeletedInstancesResponse() {}

  explicit DescribeDeletedInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDeletedInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDeletedInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDeletedInstancesResponse() = default;
};
class DescribeDiskWarningLineRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeDiskWarningLineRequest() {}

  explicit DescribeDiskWarningLineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeDiskWarningLineRequest() = default;
};
class DescribeDiskWarningLineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> warningLine{};

  DescribeDiskWarningLineResponseBody() {}

  explicit DescribeDiskWarningLineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (warningLine) {
      res["WarningLine"] = boost::any(*warningLine);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WarningLine") != m.end() && !m["WarningLine"].empty()) {
      warningLine = make_shared<string>(boost::any_cast<string>(m["WarningLine"]));
    }
  }


  virtual ~DescribeDiskWarningLineResponseBody() = default;
};
class DescribeDiskWarningLineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDiskWarningLineResponseBody> body{};

  DescribeDiskWarningLineResponse() {}

  explicit DescribeDiskWarningLineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDiskWarningLineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiskWarningLineResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiskWarningLineResponse() = default;
};
class DescribeEndpointsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeEndpointsRequest() {}

  explicit DescribeEndpointsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeEndpointsRequest() = default;
};
class DescribeEndpointsResponseBodyConnAddrsConnAddrInfo : public Darabonba::Model {
public:
  shared_ptr<string> connAddr{};
  shared_ptr<string> connAddrPort{};
  shared_ptr<string> connType{};
  shared_ptr<string> netType{};

  DescribeEndpointsResponseBodyConnAddrsConnAddrInfo() {}

  explicit DescribeEndpointsResponseBodyConnAddrsConnAddrInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddr) {
      res["ConnAddr"] = boost::any(*connAddr);
    }
    if (connAddrPort) {
      res["ConnAddrPort"] = boost::any(*connAddrPort);
    }
    if (connType) {
      res["ConnType"] = boost::any(*connType);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddr") != m.end() && !m["ConnAddr"].empty()) {
      connAddr = make_shared<string>(boost::any_cast<string>(m["ConnAddr"]));
    }
    if (m.find("ConnAddrPort") != m.end() && !m["ConnAddrPort"].empty()) {
      connAddrPort = make_shared<string>(boost::any_cast<string>(m["ConnAddrPort"]));
    }
    if (m.find("ConnType") != m.end() && !m["ConnType"].empty()) {
      connType = make_shared<string>(boost::any_cast<string>(m["ConnType"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
  }


  virtual ~DescribeEndpointsResponseBodyConnAddrsConnAddrInfo() = default;
};
class DescribeEndpointsResponseBodyConnAddrs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEndpointsResponseBodyConnAddrsConnAddrInfo>> connAddrInfo{};

  DescribeEndpointsResponseBodyConnAddrs() {}

  explicit DescribeEndpointsResponseBodyConnAddrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddrInfo) {
      vector<boost::any> temp1;
      for(auto item1:*connAddrInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnAddrInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddrInfo") != m.end() && !m["ConnAddrInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnAddrInfo"].type()) {
        vector<DescribeEndpointsResponseBodyConnAddrsConnAddrInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnAddrInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndpointsResponseBodyConnAddrsConnAddrInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connAddrInfo = make_shared<vector<DescribeEndpointsResponseBodyConnAddrsConnAddrInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeEndpointsResponseBodyConnAddrs() = default;
};
class DescribeEndpointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeEndpointsResponseBodyConnAddrs> connAddrs{};
  shared_ptr<string> engine{};
  shared_ptr<string> netType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  DescribeEndpointsResponseBody() {}

  explicit DescribeEndpointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddrs) {
      res["ConnAddrs"] = connAddrs ? boost::any(connAddrs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("ConnAddrs") != m.end() && !m["ConnAddrs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConnAddrs"].type()) {
        DescribeEndpointsResponseBodyConnAddrs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConnAddrs"]));
        connAddrs = make_shared<DescribeEndpointsResponseBodyConnAddrs>(model1);
      }
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeEndpointsResponseBody() = default;
};
class DescribeEndpointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeEndpointsResponseBody> body{};

  DescribeEndpointsResponse() {}

  explicit DescribeEndpointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeEndpointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEndpointsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEndpointsResponse() = default;
};
class DescribeInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeInstanceRequest() {}

  explicit DescribeInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeInstanceRequest() = default;
};
class DescribeInstanceResponseBodyNeedUpgradeComps : public Darabonba::Model {
public:
  shared_ptr<vector<string>> comps{};

  DescribeInstanceResponseBodyNeedUpgradeComps() {}

  explicit DescribeInstanceResponseBodyNeedUpgradeComps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comps) {
      res["Comps"] = boost::any(*comps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comps") != m.end() && !m["Comps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Comps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Comps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      comps = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeInstanceResponseBodyNeedUpgradeComps() = default;
};
class DescribeInstanceResponseBodyTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeInstanceResponseBodyTagsTag() {}

  explicit DescribeInstanceResponseBodyTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstanceResponseBodyTagsTag() = default;
};
class DescribeInstanceResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceResponseBodyTagsTag>> tag{};

  DescribeInstanceResponseBodyTags() {}

  explicit DescribeInstanceResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeInstanceResponseBodyTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceResponseBodyTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeInstanceResponseBodyTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceResponseBodyTags() = default;
};
class DescribeInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenewal{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterType{};
  shared_ptr<long> coldStorageSize{};
  shared_ptr<string> coldStorageStatus{};
  shared_ptr<string> confirmMaintainTime{};
  shared_ptr<string> coreDiskCount{};
  shared_ptr<long> coreDiskSize{};
  shared_ptr<string> coreDiskType{};
  shared_ptr<string> coreInstanceType{};
  shared_ptr<long> coreNodeCount{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> createdTimeUTC{};
  shared_ptr<long> duration{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> encryptionType{};
  shared_ptr<string> engine{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> expireTimeUTC{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<bool> isDeletionProtection{};
  shared_ptr<bool> isHa{};
  shared_ptr<bool> isLatestVersion{};
  shared_ptr<bool> isMultiModel{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> majorVersion{};
  shared_ptr<long> masterDiskSize{};
  shared_ptr<string> masterDiskType{};
  shared_ptr<string> masterInstanceType{};
  shared_ptr<long> masterNodeCount{};
  shared_ptr<string> minorVersion{};
  shared_ptr<long> moduleId{};
  shared_ptr<string> moduleStackVersion{};
  shared_ptr<bool> needUpgrade{};
  shared_ptr<DescribeInstanceResponseBodyNeedUpgradeComps> needUpgradeComps{};
  shared_ptr<string> networkType{};
  shared_ptr<string> parentId{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<DescribeInstanceResponseBodyTags> tags{};
  shared_ptr<string> taskProgress{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  DescribeInstanceResponseBody() {}

  explicit DescribeInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenewal) {
      res["AutoRenewal"] = boost::any(*autoRenewal);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (coldStorageSize) {
      res["ColdStorageSize"] = boost::any(*coldStorageSize);
    }
    if (coldStorageStatus) {
      res["ColdStorageStatus"] = boost::any(*coldStorageStatus);
    }
    if (confirmMaintainTime) {
      res["ConfirmMaintainTime"] = boost::any(*confirmMaintainTime);
    }
    if (coreDiskCount) {
      res["CoreDiskCount"] = boost::any(*coreDiskCount);
    }
    if (coreDiskSize) {
      res["CoreDiskSize"] = boost::any(*coreDiskSize);
    }
    if (coreDiskType) {
      res["CoreDiskType"] = boost::any(*coreDiskType);
    }
    if (coreInstanceType) {
      res["CoreInstanceType"] = boost::any(*coreInstanceType);
    }
    if (coreNodeCount) {
      res["CoreNodeCount"] = boost::any(*coreNodeCount);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (createdTimeUTC) {
      res["CreatedTimeUTC"] = boost::any(*createdTimeUTC);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (encryptionType) {
      res["EncryptionType"] = boost::any(*encryptionType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (expireTimeUTC) {
      res["ExpireTimeUTC"] = boost::any(*expireTimeUTC);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (isDeletionProtection) {
      res["IsDeletionProtection"] = boost::any(*isDeletionProtection);
    }
    if (isHa) {
      res["IsHa"] = boost::any(*isHa);
    }
    if (isLatestVersion) {
      res["IsLatestVersion"] = boost::any(*isLatestVersion);
    }
    if (isMultiModel) {
      res["IsMultiModel"] = boost::any(*isMultiModel);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (majorVersion) {
      res["MajorVersion"] = boost::any(*majorVersion);
    }
    if (masterDiskSize) {
      res["MasterDiskSize"] = boost::any(*masterDiskSize);
    }
    if (masterDiskType) {
      res["MasterDiskType"] = boost::any(*masterDiskType);
    }
    if (masterInstanceType) {
      res["MasterInstanceType"] = boost::any(*masterInstanceType);
    }
    if (masterNodeCount) {
      res["MasterNodeCount"] = boost::any(*masterNodeCount);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleStackVersion) {
      res["ModuleStackVersion"] = boost::any(*moduleStackVersion);
    }
    if (needUpgrade) {
      res["NeedUpgrade"] = boost::any(*needUpgrade);
    }
    if (needUpgradeComps) {
      res["NeedUpgradeComps"] = needUpgradeComps ? boost::any(needUpgradeComps->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskProgress) {
      res["TaskProgress"] = boost::any(*taskProgress);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenewal") != m.end() && !m["AutoRenewal"].empty()) {
      autoRenewal = make_shared<bool>(boost::any_cast<bool>(m["AutoRenewal"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("ColdStorageSize") != m.end() && !m["ColdStorageSize"].empty()) {
      coldStorageSize = make_shared<long>(boost::any_cast<long>(m["ColdStorageSize"]));
    }
    if (m.find("ColdStorageStatus") != m.end() && !m["ColdStorageStatus"].empty()) {
      coldStorageStatus = make_shared<string>(boost::any_cast<string>(m["ColdStorageStatus"]));
    }
    if (m.find("ConfirmMaintainTime") != m.end() && !m["ConfirmMaintainTime"].empty()) {
      confirmMaintainTime = make_shared<string>(boost::any_cast<string>(m["ConfirmMaintainTime"]));
    }
    if (m.find("CoreDiskCount") != m.end() && !m["CoreDiskCount"].empty()) {
      coreDiskCount = make_shared<string>(boost::any_cast<string>(m["CoreDiskCount"]));
    }
    if (m.find("CoreDiskSize") != m.end() && !m["CoreDiskSize"].empty()) {
      coreDiskSize = make_shared<long>(boost::any_cast<long>(m["CoreDiskSize"]));
    }
    if (m.find("CoreDiskType") != m.end() && !m["CoreDiskType"].empty()) {
      coreDiskType = make_shared<string>(boost::any_cast<string>(m["CoreDiskType"]));
    }
    if (m.find("CoreInstanceType") != m.end() && !m["CoreInstanceType"].empty()) {
      coreInstanceType = make_shared<string>(boost::any_cast<string>(m["CoreInstanceType"]));
    }
    if (m.find("CoreNodeCount") != m.end() && !m["CoreNodeCount"].empty()) {
      coreNodeCount = make_shared<long>(boost::any_cast<long>(m["CoreNodeCount"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("CreatedTimeUTC") != m.end() && !m["CreatedTimeUTC"].empty()) {
      createdTimeUTC = make_shared<string>(boost::any_cast<string>(m["CreatedTimeUTC"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("EncryptionType") != m.end() && !m["EncryptionType"].empty()) {
      encryptionType = make_shared<string>(boost::any_cast<string>(m["EncryptionType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ExpireTimeUTC") != m.end() && !m["ExpireTimeUTC"].empty()) {
      expireTimeUTC = make_shared<string>(boost::any_cast<string>(m["ExpireTimeUTC"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("IsDeletionProtection") != m.end() && !m["IsDeletionProtection"].empty()) {
      isDeletionProtection = make_shared<bool>(boost::any_cast<bool>(m["IsDeletionProtection"]));
    }
    if (m.find("IsHa") != m.end() && !m["IsHa"].empty()) {
      isHa = make_shared<bool>(boost::any_cast<bool>(m["IsHa"]));
    }
    if (m.find("IsLatestVersion") != m.end() && !m["IsLatestVersion"].empty()) {
      isLatestVersion = make_shared<bool>(boost::any_cast<bool>(m["IsLatestVersion"]));
    }
    if (m.find("IsMultiModel") != m.end() && !m["IsMultiModel"].empty()) {
      isMultiModel = make_shared<bool>(boost::any_cast<bool>(m["IsMultiModel"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("MajorVersion") != m.end() && !m["MajorVersion"].empty()) {
      majorVersion = make_shared<string>(boost::any_cast<string>(m["MajorVersion"]));
    }
    if (m.find("MasterDiskSize") != m.end() && !m["MasterDiskSize"].empty()) {
      masterDiskSize = make_shared<long>(boost::any_cast<long>(m["MasterDiskSize"]));
    }
    if (m.find("MasterDiskType") != m.end() && !m["MasterDiskType"].empty()) {
      masterDiskType = make_shared<string>(boost::any_cast<string>(m["MasterDiskType"]));
    }
    if (m.find("MasterInstanceType") != m.end() && !m["MasterInstanceType"].empty()) {
      masterInstanceType = make_shared<string>(boost::any_cast<string>(m["MasterInstanceType"]));
    }
    if (m.find("MasterNodeCount") != m.end() && !m["MasterNodeCount"].empty()) {
      masterNodeCount = make_shared<long>(boost::any_cast<long>(m["MasterNodeCount"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<long>(boost::any_cast<long>(m["ModuleId"]));
    }
    if (m.find("ModuleStackVersion") != m.end() && !m["ModuleStackVersion"].empty()) {
      moduleStackVersion = make_shared<string>(boost::any_cast<string>(m["ModuleStackVersion"]));
    }
    if (m.find("NeedUpgrade") != m.end() && !m["NeedUpgrade"].empty()) {
      needUpgrade = make_shared<bool>(boost::any_cast<bool>(m["NeedUpgrade"]));
    }
    if (m.find("NeedUpgradeComps") != m.end() && !m["NeedUpgradeComps"].empty()) {
      if (typeid(map<string, boost::any>) == m["NeedUpgradeComps"].type()) {
        DescribeInstanceResponseBodyNeedUpgradeComps model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NeedUpgradeComps"]));
        needUpgradeComps = make_shared<DescribeInstanceResponseBodyNeedUpgradeComps>(model1);
      }
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeInstanceResponseBodyTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeInstanceResponseBodyTags>(model1);
      }
    }
    if (m.find("TaskProgress") != m.end() && !m["TaskProgress"].empty()) {
      taskProgress = make_shared<string>(boost::any_cast<string>(m["TaskProgress"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeInstanceResponseBody() = default;
};
class DescribeInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceResponseBody> body{};

  DescribeInstanceResponse() {}

  explicit DescribeInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceResponse() = default;
};
class DescribeInstanceTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};

  DescribeInstanceTypeRequest() {}

  explicit DescribeInstanceTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeInstanceTypeRequest() = default;
};
class DescribeInstanceTypeResponseBodyInstanceTypeSpecListInstanceTypeSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpuSize{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> memSize{};

  DescribeInstanceTypeResponseBodyInstanceTypeSpecListInstanceTypeSpec() {}

  explicit DescribeInstanceTypeResponseBodyInstanceTypeSpecListInstanceTypeSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuSize) {
      res["CpuSize"] = boost::any(*cpuSize);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (memSize) {
      res["MemSize"] = boost::any(*memSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuSize") != m.end() && !m["CpuSize"].empty()) {
      cpuSize = make_shared<long>(boost::any_cast<long>(m["CpuSize"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("MemSize") != m.end() && !m["MemSize"].empty()) {
      memSize = make_shared<long>(boost::any_cast<long>(m["MemSize"]));
    }
  }


  virtual ~DescribeInstanceTypeResponseBodyInstanceTypeSpecListInstanceTypeSpec() = default;
};
class DescribeInstanceTypeResponseBodyInstanceTypeSpecList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceTypeResponseBodyInstanceTypeSpecListInstanceTypeSpec>> instanceTypeSpec{};

  DescribeInstanceTypeResponseBodyInstanceTypeSpecList() {}

  explicit DescribeInstanceTypeResponseBodyInstanceTypeSpecList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypeSpec) {
      vector<boost::any> temp1;
      for(auto item1:*instanceTypeSpec){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceTypeSpec"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypeSpec") != m.end() && !m["InstanceTypeSpec"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceTypeSpec"].type()) {
        vector<DescribeInstanceTypeResponseBodyInstanceTypeSpecListInstanceTypeSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceTypeSpec"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceTypeResponseBodyInstanceTypeSpecListInstanceTypeSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceTypeSpec = make_shared<vector<DescribeInstanceTypeResponseBodyInstanceTypeSpecListInstanceTypeSpec>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceTypeResponseBodyInstanceTypeSpecList() = default;
};
class DescribeInstanceTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeInstanceTypeResponseBodyInstanceTypeSpecList> instanceTypeSpecList{};
  shared_ptr<string> requestId{};

  DescribeInstanceTypeResponseBody() {}

  explicit DescribeInstanceTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypeSpecList) {
      res["InstanceTypeSpecList"] = instanceTypeSpecList ? boost::any(instanceTypeSpecList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypeSpecList") != m.end() && !m["InstanceTypeSpecList"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceTypeSpecList"].type()) {
        DescribeInstanceTypeResponseBodyInstanceTypeSpecList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceTypeSpecList"]));
        instanceTypeSpecList = make_shared<DescribeInstanceTypeResponseBodyInstanceTypeSpecList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInstanceTypeResponseBody() = default;
};
class DescribeInstanceTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceTypeResponseBody> body{};

  DescribeInstanceTypeResponse() {}

  explicit DescribeInstanceTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInstanceTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceTypeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceTypeResponse() = default;
};
class DescribeInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeInstancesRequestTag() {}

  explicit DescribeInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstancesRequestTag() = default;
};
class DescribeInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> dbType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<DescribeInstancesRequestTag>> tag{};

  DescribeInstancesRequest() {}

  explicit DescribeInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeInstancesRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeInstancesRequest() = default;
};
class DescribeInstancesResponseBodyInstancesInstanceTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeInstancesResponseBodyInstancesInstanceTagsTag() {}

  explicit DescribeInstancesResponseBodyInstancesInstanceTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstancesResponseBodyInstancesInstanceTagsTag() = default;
};
class DescribeInstancesResponseBodyInstancesInstanceTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstancesResponseBodyInstancesInstanceTagsTag>> tag{};

  DescribeInstancesResponseBodyInstancesInstanceTags() {}

  explicit DescribeInstancesResponseBodyInstancesInstanceTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeInstancesResponseBodyInstancesInstanceTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstancesInstanceTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeInstancesResponseBodyInstancesInstanceTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesInstanceTags() = default;
};
class DescribeInstancesResponseBodyInstancesInstance : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenewal{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> coldStorageStatus{};
  shared_ptr<string> coreDiskCount{};
  shared_ptr<long> coreDiskSize{};
  shared_ptr<string> coreDiskType{};
  shared_ptr<string> coreInstanceType{};
  shared_ptr<long> coreNodeCount{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> createdTimeUTC{};
  shared_ptr<long> duration{};
  shared_ptr<string> engine{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> expireTimeUTC{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<bool> isDeletionProtection{};
  shared_ptr<bool> isHa{};
  shared_ptr<string> majorVersion{};
  shared_ptr<long> masterDiskSize{};
  shared_ptr<string> masterDiskType{};
  shared_ptr<string> masterInstanceType{};
  shared_ptr<long> masterNodeCount{};
  shared_ptr<long> moduleId{};
  shared_ptr<string> moduleStackVersion{};
  shared_ptr<string> networkType{};
  shared_ptr<string> parentId{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<DescribeInstancesResponseBodyInstancesInstanceTags> tags{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  DescribeInstancesResponseBodyInstancesInstance() {}

  explicit DescribeInstancesResponseBodyInstancesInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenewal) {
      res["AutoRenewal"] = boost::any(*autoRenewal);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (coldStorageStatus) {
      res["ColdStorageStatus"] = boost::any(*coldStorageStatus);
    }
    if (coreDiskCount) {
      res["CoreDiskCount"] = boost::any(*coreDiskCount);
    }
    if (coreDiskSize) {
      res["CoreDiskSize"] = boost::any(*coreDiskSize);
    }
    if (coreDiskType) {
      res["CoreDiskType"] = boost::any(*coreDiskType);
    }
    if (coreInstanceType) {
      res["CoreInstanceType"] = boost::any(*coreInstanceType);
    }
    if (coreNodeCount) {
      res["CoreNodeCount"] = boost::any(*coreNodeCount);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (createdTimeUTC) {
      res["CreatedTimeUTC"] = boost::any(*createdTimeUTC);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (expireTimeUTC) {
      res["ExpireTimeUTC"] = boost::any(*expireTimeUTC);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (isDeletionProtection) {
      res["IsDeletionProtection"] = boost::any(*isDeletionProtection);
    }
    if (isHa) {
      res["IsHa"] = boost::any(*isHa);
    }
    if (majorVersion) {
      res["MajorVersion"] = boost::any(*majorVersion);
    }
    if (masterDiskSize) {
      res["MasterDiskSize"] = boost::any(*masterDiskSize);
    }
    if (masterDiskType) {
      res["MasterDiskType"] = boost::any(*masterDiskType);
    }
    if (masterInstanceType) {
      res["MasterInstanceType"] = boost::any(*masterInstanceType);
    }
    if (masterNodeCount) {
      res["MasterNodeCount"] = boost::any(*masterNodeCount);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleStackVersion) {
      res["ModuleStackVersion"] = boost::any(*moduleStackVersion);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenewal") != m.end() && !m["AutoRenewal"].empty()) {
      autoRenewal = make_shared<bool>(boost::any_cast<bool>(m["AutoRenewal"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("ColdStorageStatus") != m.end() && !m["ColdStorageStatus"].empty()) {
      coldStorageStatus = make_shared<string>(boost::any_cast<string>(m["ColdStorageStatus"]));
    }
    if (m.find("CoreDiskCount") != m.end() && !m["CoreDiskCount"].empty()) {
      coreDiskCount = make_shared<string>(boost::any_cast<string>(m["CoreDiskCount"]));
    }
    if (m.find("CoreDiskSize") != m.end() && !m["CoreDiskSize"].empty()) {
      coreDiskSize = make_shared<long>(boost::any_cast<long>(m["CoreDiskSize"]));
    }
    if (m.find("CoreDiskType") != m.end() && !m["CoreDiskType"].empty()) {
      coreDiskType = make_shared<string>(boost::any_cast<string>(m["CoreDiskType"]));
    }
    if (m.find("CoreInstanceType") != m.end() && !m["CoreInstanceType"].empty()) {
      coreInstanceType = make_shared<string>(boost::any_cast<string>(m["CoreInstanceType"]));
    }
    if (m.find("CoreNodeCount") != m.end() && !m["CoreNodeCount"].empty()) {
      coreNodeCount = make_shared<long>(boost::any_cast<long>(m["CoreNodeCount"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("CreatedTimeUTC") != m.end() && !m["CreatedTimeUTC"].empty()) {
      createdTimeUTC = make_shared<string>(boost::any_cast<string>(m["CreatedTimeUTC"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ExpireTimeUTC") != m.end() && !m["ExpireTimeUTC"].empty()) {
      expireTimeUTC = make_shared<string>(boost::any_cast<string>(m["ExpireTimeUTC"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("IsDeletionProtection") != m.end() && !m["IsDeletionProtection"].empty()) {
      isDeletionProtection = make_shared<bool>(boost::any_cast<bool>(m["IsDeletionProtection"]));
    }
    if (m.find("IsHa") != m.end() && !m["IsHa"].empty()) {
      isHa = make_shared<bool>(boost::any_cast<bool>(m["IsHa"]));
    }
    if (m.find("MajorVersion") != m.end() && !m["MajorVersion"].empty()) {
      majorVersion = make_shared<string>(boost::any_cast<string>(m["MajorVersion"]));
    }
    if (m.find("MasterDiskSize") != m.end() && !m["MasterDiskSize"].empty()) {
      masterDiskSize = make_shared<long>(boost::any_cast<long>(m["MasterDiskSize"]));
    }
    if (m.find("MasterDiskType") != m.end() && !m["MasterDiskType"].empty()) {
      masterDiskType = make_shared<string>(boost::any_cast<string>(m["MasterDiskType"]));
    }
    if (m.find("MasterInstanceType") != m.end() && !m["MasterInstanceType"].empty()) {
      masterInstanceType = make_shared<string>(boost::any_cast<string>(m["MasterInstanceType"]));
    }
    if (m.find("MasterNodeCount") != m.end() && !m["MasterNodeCount"].empty()) {
      masterNodeCount = make_shared<long>(boost::any_cast<long>(m["MasterNodeCount"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<long>(boost::any_cast<long>(m["ModuleId"]));
    }
    if (m.find("ModuleStackVersion") != m.end() && !m["ModuleStackVersion"].empty()) {
      moduleStackVersion = make_shared<string>(boost::any_cast<string>(m["ModuleStackVersion"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeInstancesResponseBodyInstancesInstanceTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeInstancesResponseBodyInstancesInstanceTags>(model1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesInstance() = default;
};
class DescribeInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstancesResponseBodyInstancesInstance>> instance{};

  DescribeInstancesResponseBodyInstances() {}

  explicit DescribeInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<DescribeInstancesResponseBodyInstancesInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstancesInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<DescribeInstancesResponseBodyInstancesInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeInstancesResponseBodyInstances() = default;
};
class DescribeInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeInstancesResponseBodyInstances> instances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeInstancesResponseBody() {}

  explicit DescribeInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      res["Instances"] = instances ? boost::any(instances->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instances"].type()) {
        DescribeInstancesResponseBodyInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instances"]));
        instances = make_shared<DescribeInstancesResponseBodyInstances>(model1);
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


  virtual ~DescribeInstancesResponseBody() = default;
};
class DescribeInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstancesResponseBody> body{};

  DescribeInstancesResponse() {}

  explicit DescribeInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstancesResponse() = default;
};
class DescribeIpWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeIpWhitelistRequest() {}

  explicit DescribeIpWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeIpWhitelistRequest() = default;
};
class DescribeIpWhitelistResponseBodyGroupsGroupIpList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ip{};

  DescribeIpWhitelistResponseBodyGroupsGroupIpList() {}

  explicit DescribeIpWhitelistResponseBodyGroupsGroupIpList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ip"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ip"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ip = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeIpWhitelistResponseBodyGroupsGroupIpList() = default;
};
class DescribeIpWhitelistResponseBodyGroupsGroup : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<DescribeIpWhitelistResponseBodyGroupsGroupIpList> ipList{};
  shared_ptr<long> ipVersion{};

  DescribeIpWhitelistResponseBodyGroupsGroup() {}

  explicit DescribeIpWhitelistResponseBodyGroupsGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (ipList) {
      res["IpList"] = ipList ? boost::any(ipList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("IpList") != m.end() && !m["IpList"].empty()) {
      if (typeid(map<string, boost::any>) == m["IpList"].type()) {
        DescribeIpWhitelistResponseBodyGroupsGroupIpList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IpList"]));
        ipList = make_shared<DescribeIpWhitelistResponseBodyGroupsGroupIpList>(model1);
      }
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<long>(boost::any_cast<long>(m["IpVersion"]));
    }
  }


  virtual ~DescribeIpWhitelistResponseBodyGroupsGroup() = default;
};
class DescribeIpWhitelistResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeIpWhitelistResponseBodyGroupsGroup>> group{};

  DescribeIpWhitelistResponseBodyGroups() {}

  explicit DescribeIpWhitelistResponseBodyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      vector<boost::any> temp1;
      for(auto item1:*group){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Group"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      if (typeid(vector<boost::any>) == m["Group"].type()) {
        vector<DescribeIpWhitelistResponseBodyGroupsGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Group"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeIpWhitelistResponseBodyGroupsGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        group = make_shared<vector<DescribeIpWhitelistResponseBodyGroupsGroup>>(expect1);
      }
    }
  }


  virtual ~DescribeIpWhitelistResponseBodyGroups() = default;
};
class DescribeIpWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeIpWhitelistResponseBodyGroups> groups{};
  shared_ptr<string> requestId{};

  DescribeIpWhitelistResponseBody() {}

  explicit DescribeIpWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groups) {
      res["Groups"] = groups ? boost::any(groups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(map<string, boost::any>) == m["Groups"].type()) {
        DescribeIpWhitelistResponseBodyGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Groups"]));
        groups = make_shared<DescribeIpWhitelistResponseBodyGroups>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeIpWhitelistResponseBody() = default;
};
class DescribeIpWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeIpWhitelistResponseBody> body{};

  DescribeIpWhitelistResponse() {}

  explicit DescribeIpWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeIpWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIpWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIpWhitelistResponse() = default;
};
class DescribeMultiZoneAvailableRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  DescribeMultiZoneAvailableRegionsRequest() {}

  explicit DescribeMultiZoneAvailableRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeMultiZoneAvailableRegionsRequest() = default;
};
class DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombinesAvailableCombineZones : public Darabonba::Model {
public:
  shared_ptr<vector<string>> zone{};

  DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombinesAvailableCombineZones() {}

  explicit DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombinesAvailableCombineZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zone) {
      res["Zone"] = boost::any(*zone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Zone"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Zone"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zone = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombinesAvailableCombineZones() = default;
};
class DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombinesAvailableCombine : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombinesAvailableCombineZones> zones{};

  DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombinesAvailableCombine() {}

  explicit DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombinesAvailableCombine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (zones) {
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Zones"].type()) {
        DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombinesAvailableCombineZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Zones"]));
        zones = make_shared<DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombinesAvailableCombineZones>(model1);
      }
    }
  }


  virtual ~DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombinesAvailableCombine() = default;
};
class DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombines : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombinesAvailableCombine>> availableCombine{};

  DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombines() {}

  explicit DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableCombine) {
      vector<boost::any> temp1;
      for(auto item1:*availableCombine){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableCombine"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableCombine") != m.end() && !m["AvailableCombine"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableCombine"].type()) {
        vector<DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombinesAvailableCombine> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableCombine"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombinesAvailableCombine model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableCombine = make_shared<vector<DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombinesAvailableCombine>>(expect1);
      }
    }
  }


  virtual ~DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombines() = default;
};
class DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombines> availableCombines{};
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegion() {}

  explicit DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableCombines) {
      res["AvailableCombines"] = availableCombines ? boost::any(availableCombines->toMap()) : boost::any(map<string,boost::any>({}));
    }
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
    if (m.find("AvailableCombines") != m.end() && !m["AvailableCombines"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvailableCombines"].type()) {
        DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombines model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvailableCombines"]));
        availableCombines = make_shared<DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegionAvailableCombines>(model1);
      }
    }
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


  virtual ~DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegion() = default;
};
class DescribeMultiZoneAvailableRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegion>> region{};

  DescribeMultiZoneAvailableRegionsResponseBodyRegions() {}

  explicit DescribeMultiZoneAvailableRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<DescribeMultiZoneAvailableRegionsResponseBodyRegionsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeMultiZoneAvailableRegionsResponseBodyRegions() = default;
};
class DescribeMultiZoneAvailableRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeMultiZoneAvailableRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  DescribeMultiZoneAvailableRegionsResponseBody() {}

  explicit DescribeMultiZoneAvailableRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMultiZoneAvailableRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeMultiZoneAvailableRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMultiZoneAvailableRegionsResponseBody() = default;
};
class DescribeMultiZoneAvailableRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeMultiZoneAvailableRegionsResponseBody> body{};

  DescribeMultiZoneAvailableRegionsResponse() {}

  explicit DescribeMultiZoneAvailableRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeMultiZoneAvailableRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMultiZoneAvailableRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMultiZoneAvailableRegionsResponse() = default;
};
class DescribeMultiZoneAvailableResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneCombination{};

  DescribeMultiZoneAvailableResourceRequest() {}

  explicit DescribeMultiZoneAvailableResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneCombination) {
      res["ZoneCombination"] = boost::any(*zoneCombination);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneCombination") != m.end() && !m["ZoneCombination"].empty()) {
      zoneCombination = make_shared<string>(boost::any_cast<string>(m["ZoneCombination"]));
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceRequest() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResourceInstanceTypeDetail : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> mem{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResourceInstanceTypeDetail() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResourceInstanceTypeDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (mem) {
      res["Mem"] = boost::any(*mem);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Mem") != m.end() && !m["Mem"].empty()) {
      mem = make_shared<long>(boost::any_cast<long>(m["Mem"]));
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResourceInstanceTypeDetail() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResourceInstanceTypeDetail> instanceTypeDetail{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instanceTypeDetail) {
      res["InstanceTypeDetail"] = instanceTypeDetail ? boost::any(instanceTypeDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstanceTypeDetail") != m.end() && !m["InstanceTypeDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceTypeDetail"].type()) {
        DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResourceInstanceTypeDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceTypeDetail"]));
        instanceTypeDetail = make_shared<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResourceInstanceTypeDetail>(model1);
      }
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResources : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource>> masterResource{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResources() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (masterResource) {
      vector<boost::any> temp1;
      for(auto item1:*masterResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MasterResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MasterResource") != m.end() && !m["MasterResource"].empty()) {
      if (typeid(vector<boost::any>) == m["MasterResource"].type()) {
        vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MasterResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        masterResource = make_shared<vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResourcesMasterResource>>(expect1);
      }
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResources() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceDBInstanceStorageRange : public Darabonba::Model {
public:
  shared_ptr<long> maxSize{};
  shared_ptr<long> minSize{};
  shared_ptr<long> stepSize{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceDBInstanceStorageRange() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceDBInstanceStorageRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxSize) {
      res["MaxSize"] = boost::any(*maxSize);
    }
    if (minSize) {
      res["MinSize"] = boost::any(*minSize);
    }
    if (stepSize) {
      res["StepSize"] = boost::any(*stepSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxSize") != m.end() && !m["MaxSize"].empty()) {
      maxSize = make_shared<long>(boost::any_cast<long>(m["MaxSize"]));
    }
    if (m.find("MinSize") != m.end() && !m["MinSize"].empty()) {
      minSize = make_shared<long>(boost::any_cast<long>(m["MinSize"]));
    }
    if (m.find("StepSize") != m.end() && !m["StepSize"].empty()) {
      stepSize = make_shared<long>(boost::any_cast<long>(m["StepSize"]));
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceDBInstanceStorageRange() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceInstanceTypeDetail : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> mem{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceInstanceTypeDetail() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceInstanceTypeDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (mem) {
      res["Mem"] = boost::any(*mem);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Mem") != m.end() && !m["Mem"].empty()) {
      mem = make_shared<long>(boost::any_cast<long>(m["Mem"]));
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceInstanceTypeDetail() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource : public Darabonba::Model {
public:
  shared_ptr<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceDBInstanceStorageRange> DBInstanceStorageRange{};
  shared_ptr<string> instanceType{};
  shared_ptr<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceInstanceTypeDetail> instanceTypeDetail{};
  shared_ptr<long> maxCoreCount{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceStorageRange) {
      res["DBInstanceStorageRange"] = DBInstanceStorageRange ? boost::any(DBInstanceStorageRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instanceTypeDetail) {
      res["InstanceTypeDetail"] = instanceTypeDetail ? boost::any(instanceTypeDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxCoreCount) {
      res["MaxCoreCount"] = boost::any(*maxCoreCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceStorageRange") != m.end() && !m["DBInstanceStorageRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBInstanceStorageRange"].type()) {
        DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceDBInstanceStorageRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBInstanceStorageRange"]));
        DBInstanceStorageRange = make_shared<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceDBInstanceStorageRange>(model1);
      }
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstanceTypeDetail") != m.end() && !m["InstanceTypeDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceTypeDetail"].type()) {
        DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceInstanceTypeDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceTypeDetail"]));
        instanceTypeDetail = make_shared<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResourceInstanceTypeDetail>(model1);
      }
    }
    if (m.find("MaxCoreCount") != m.end() && !m["MaxCoreCount"].empty()) {
      maxCoreCount = make_shared<long>(boost::any_cast<long>(m["MaxCoreCount"]));
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResources : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource>> coreResource{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResources() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coreResource) {
      vector<boost::any> temp1;
      for(auto item1:*coreResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CoreResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoreResource") != m.end() && !m["CoreResource"].empty()) {
      if (typeid(vector<boost::any>) == m["CoreResource"].type()) {
        vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CoreResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        coreResource = make_shared<vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource>>(expect1);
      }
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResources() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType : public Darabonba::Model {
public:
  shared_ptr<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResources> coreResources{};
  shared_ptr<string> storageType{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coreResources) {
      res["CoreResources"] = coreResources ? boost::any(coreResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoreResources") != m.end() && !m["CoreResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["CoreResources"].type()) {
        DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CoreResources"]));
        coreResources = make_shared<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageTypeCoreResources>(model1);
      }
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType>> supportedStorageType{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypes() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedStorageType) {
      vector<boost::any> temp1;
      for(auto item1:*supportedStorageType){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedStorageType"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedStorageType") != m.end() && !m["SupportedStorageType"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedStorageType"].type()) {
        vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedStorageType"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedStorageType = make_shared<vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypesSupportedStorageType>>(expect1);
      }
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypes() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypes> supportedStorageTypes{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (supportedStorageTypes) {
      res["SupportedStorageTypes"] = supportedStorageTypes ? boost::any(supportedStorageTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("SupportedStorageTypes") != m.end() && !m["SupportedStorageTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedStorageTypes"].type()) {
        DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedStorageTypes"]));
        supportedStorageTypes = make_shared<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesSupportedStorageTypes>(model1);
      }
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategories : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories>> supportedCategories{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategories() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedCategories) {
      vector<boost::any> temp1;
      for(auto item1:*supportedCategories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedCategories"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedCategories") != m.end() && !m["SupportedCategories"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedCategories"].type()) {
        vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedCategories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedCategories = make_shared<vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategories>>(expect1);
      }
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategories() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion : public Darabonba::Model {
public:
  shared_ptr<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategories> supportedCategories{};
  shared_ptr<string> version{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedCategories) {
      res["SupportedCategories"] = supportedCategories ? boost::any(supportedCategories->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedCategories") != m.end() && !m["SupportedCategories"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedCategories"].type()) {
        DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategories model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedCategories"]));
        supportedCategories = make_shared<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategories>(model1);
      }
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion>> supportedEngineVersion{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersions() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedEngineVersion) {
      vector<boost::any> temp1;
      for(auto item1:*supportedEngineVersion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedEngineVersion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedEngineVersion") != m.end() && !m["SupportedEngineVersion"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedEngineVersion"].type()) {
        vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedEngineVersion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedEngineVersion = make_shared<vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion>>(expect1);
      }
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersions() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine : public Darabonba::Model {
public:
  shared_ptr<string> engine{};
  shared_ptr<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersions> supportedEngineVersions{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (supportedEngineVersions) {
      res["SupportedEngineVersions"] = supportedEngineVersions ? boost::any(supportedEngineVersions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("SupportedEngineVersions") != m.end() && !m["SupportedEngineVersions"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedEngineVersions"].type()) {
        DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedEngineVersions"]));
        supportedEngineVersions = make_shared<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersions>(model1);
      }
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine>> supportedEngine{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedEngine) {
      vector<boost::any> temp1;
      for(auto item1:*supportedEngine){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedEngine"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedEngine") != m.end() && !m["SupportedEngine"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedEngine"].type()) {
        vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedEngine"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedEngine = make_shared<vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine>>(expect1);
      }
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZone : public Darabonba::Model {
public:
  shared_ptr<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResources> masterResources{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines> supportedEngines{};
  shared_ptr<string> zoneCombination{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZone() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (masterResources) {
      res["MasterResources"] = masterResources ? boost::any(masterResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (supportedEngines) {
      res["SupportedEngines"] = supportedEngines ? boost::any(supportedEngines->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneCombination) {
      res["ZoneCombination"] = boost::any(*zoneCombination);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MasterResources") != m.end() && !m["MasterResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["MasterResources"].type()) {
        DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MasterResources"]));
        masterResources = make_shared<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneMasterResources>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SupportedEngines") != m.end() && !m["SupportedEngines"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedEngines"].type()) {
        DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedEngines"]));
        supportedEngines = make_shared<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines>(model1);
      }
    }
    if (m.find("ZoneCombination") != m.end() && !m["ZoneCombination"].empty()) {
      zoneCombination = make_shared<string>(boost::any_cast<string>(m["ZoneCombination"]));
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZone() = default;
};
class DescribeMultiZoneAvailableResourceResponseBodyAvailableZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZone>> availableZone{};

  DescribeMultiZoneAvailableResourceResponseBodyAvailableZones() {}

  explicit DescribeMultiZoneAvailableResourceResponseBodyAvailableZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableZone) {
      vector<boost::any> temp1;
      for(auto item1:*availableZone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableZone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableZone") != m.end() && !m["AvailableZone"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableZone"].type()) {
        vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableZone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableZone = make_shared<vector<DescribeMultiZoneAvailableResourceResponseBodyAvailableZonesAvailableZone>>(expect1);
      }
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBodyAvailableZones() = default;
};
class DescribeMultiZoneAvailableResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeMultiZoneAvailableResourceResponseBodyAvailableZones> availableZones{};
  shared_ptr<string> requestId{};

  DescribeMultiZoneAvailableResourceResponseBody() {}

  explicit DescribeMultiZoneAvailableResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableZones) {
      res["AvailableZones"] = availableZones ? boost::any(availableZones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableZones") != m.end() && !m["AvailableZones"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvailableZones"].type()) {
        DescribeMultiZoneAvailableResourceResponseBodyAvailableZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvailableZones"]));
        availableZones = make_shared<DescribeMultiZoneAvailableResourceResponseBodyAvailableZones>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponseBody() = default;
};
class DescribeMultiZoneAvailableResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeMultiZoneAvailableResourceResponseBody> body{};

  DescribeMultiZoneAvailableResourceResponse() {}

  explicit DescribeMultiZoneAvailableResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeMultiZoneAvailableResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMultiZoneAvailableResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMultiZoneAvailableResourceResponse() = default;
};
class DescribeMultiZoneClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeMultiZoneClusterRequest() {}

  explicit DescribeMultiZoneClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeMultiZoneClusterRequest() = default;
};
class DescribeMultiZoneClusterResponseBodyMultiZoneInstanceModelsMultiZoneInstanceModel : public Darabonba::Model {
public:
  shared_ptr<string> insName{};
  shared_ptr<bool> isLatestVersion{};
  shared_ptr<string> minorVersion{};
  shared_ptr<string> role{};
  shared_ptr<string> status{};

  DescribeMultiZoneClusterResponseBodyMultiZoneInstanceModelsMultiZoneInstanceModel() {}

  explicit DescribeMultiZoneClusterResponseBodyMultiZoneInstanceModelsMultiZoneInstanceModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (insName) {
      res["InsName"] = boost::any(*insName);
    }
    if (isLatestVersion) {
      res["IsLatestVersion"] = boost::any(*isLatestVersion);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InsName") != m.end() && !m["InsName"].empty()) {
      insName = make_shared<string>(boost::any_cast<string>(m["InsName"]));
    }
    if (m.find("IsLatestVersion") != m.end() && !m["IsLatestVersion"].empty()) {
      isLatestVersion = make_shared<bool>(boost::any_cast<bool>(m["IsLatestVersion"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeMultiZoneClusterResponseBodyMultiZoneInstanceModelsMultiZoneInstanceModel() = default;
};
class DescribeMultiZoneClusterResponseBodyMultiZoneInstanceModels : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMultiZoneClusterResponseBodyMultiZoneInstanceModelsMultiZoneInstanceModel>> multiZoneInstanceModel{};

  DescribeMultiZoneClusterResponseBodyMultiZoneInstanceModels() {}

  explicit DescribeMultiZoneClusterResponseBodyMultiZoneInstanceModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (multiZoneInstanceModel) {
      vector<boost::any> temp1;
      for(auto item1:*multiZoneInstanceModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MultiZoneInstanceModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MultiZoneInstanceModel") != m.end() && !m["MultiZoneInstanceModel"].empty()) {
      if (typeid(vector<boost::any>) == m["MultiZoneInstanceModel"].type()) {
        vector<DescribeMultiZoneClusterResponseBodyMultiZoneInstanceModelsMultiZoneInstanceModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MultiZoneInstanceModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiZoneClusterResponseBodyMultiZoneInstanceModelsMultiZoneInstanceModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        multiZoneInstanceModel = make_shared<vector<DescribeMultiZoneClusterResponseBodyMultiZoneInstanceModelsMultiZoneInstanceModel>>(expect1);
      }
    }
  }


  virtual ~DescribeMultiZoneClusterResponseBodyMultiZoneInstanceModels() = default;
};
class DescribeMultiZoneClusterResponseBodyTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeMultiZoneClusterResponseBodyTagsTag() {}

  explicit DescribeMultiZoneClusterResponseBodyTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeMultiZoneClusterResponseBodyTagsTag() = default;
};
class DescribeMultiZoneClusterResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMultiZoneClusterResponseBodyTagsTag>> tag{};

  DescribeMultiZoneClusterResponseBodyTags() {}

  explicit DescribeMultiZoneClusterResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeMultiZoneClusterResponseBodyTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiZoneClusterResponseBodyTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeMultiZoneClusterResponseBodyTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeMultiZoneClusterResponseBodyTags() = default;
};
class DescribeMultiZoneClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> arbiterVSwitchIds{};
  shared_ptr<string> arbiterZoneId{};
  shared_ptr<bool> autoRenewal{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> coreDiskCount{};
  shared_ptr<long> coreDiskSize{};
  shared_ptr<string> coreDiskType{};
  shared_ptr<string> coreInstanceType{};
  shared_ptr<long> coreNodeCount{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> createdTimeUTC{};
  shared_ptr<long> duration{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> encryptionType{};
  shared_ptr<string> engine{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> expireTimeUTC{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<bool> isDeletionProtection{};
  shared_ptr<string> logDiskCount{};
  shared_ptr<long> logDiskSize{};
  shared_ptr<string> logDiskType{};
  shared_ptr<string> logInstanceType{};
  shared_ptr<long> logNodeCount{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> majorVersion{};
  shared_ptr<long> masterDiskSize{};
  shared_ptr<string> masterDiskType{};
  shared_ptr<string> masterInstanceType{};
  shared_ptr<long> masterNodeCount{};
  shared_ptr<long> moduleId{};
  shared_ptr<string> moduleStackVersion{};
  shared_ptr<string> multiZoneCombination{};
  shared_ptr<DescribeMultiZoneClusterResponseBodyMultiZoneInstanceModels> multiZoneInstanceModels{};
  shared_ptr<string> networkType{};
  shared_ptr<string> parentId{};
  shared_ptr<string> payType{};
  shared_ptr<string> primaryVSwitchIds{};
  shared_ptr<string> primaryZoneId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> standbyVSwitchIds{};
  shared_ptr<string> standbyZoneId{};
  shared_ptr<string> status{};
  shared_ptr<DescribeMultiZoneClusterResponseBodyTags> tags{};
  shared_ptr<string> vpcId{};

  DescribeMultiZoneClusterResponseBody() {}

  explicit DescribeMultiZoneClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arbiterVSwitchIds) {
      res["ArbiterVSwitchIds"] = boost::any(*arbiterVSwitchIds);
    }
    if (arbiterZoneId) {
      res["ArbiterZoneId"] = boost::any(*arbiterZoneId);
    }
    if (autoRenewal) {
      res["AutoRenewal"] = boost::any(*autoRenewal);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (coreDiskCount) {
      res["CoreDiskCount"] = boost::any(*coreDiskCount);
    }
    if (coreDiskSize) {
      res["CoreDiskSize"] = boost::any(*coreDiskSize);
    }
    if (coreDiskType) {
      res["CoreDiskType"] = boost::any(*coreDiskType);
    }
    if (coreInstanceType) {
      res["CoreInstanceType"] = boost::any(*coreInstanceType);
    }
    if (coreNodeCount) {
      res["CoreNodeCount"] = boost::any(*coreNodeCount);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (createdTimeUTC) {
      res["CreatedTimeUTC"] = boost::any(*createdTimeUTC);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (encryptionType) {
      res["EncryptionType"] = boost::any(*encryptionType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (expireTimeUTC) {
      res["ExpireTimeUTC"] = boost::any(*expireTimeUTC);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (isDeletionProtection) {
      res["IsDeletionProtection"] = boost::any(*isDeletionProtection);
    }
    if (logDiskCount) {
      res["LogDiskCount"] = boost::any(*logDiskCount);
    }
    if (logDiskSize) {
      res["LogDiskSize"] = boost::any(*logDiskSize);
    }
    if (logDiskType) {
      res["LogDiskType"] = boost::any(*logDiskType);
    }
    if (logInstanceType) {
      res["LogInstanceType"] = boost::any(*logInstanceType);
    }
    if (logNodeCount) {
      res["LogNodeCount"] = boost::any(*logNodeCount);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (majorVersion) {
      res["MajorVersion"] = boost::any(*majorVersion);
    }
    if (masterDiskSize) {
      res["MasterDiskSize"] = boost::any(*masterDiskSize);
    }
    if (masterDiskType) {
      res["MasterDiskType"] = boost::any(*masterDiskType);
    }
    if (masterInstanceType) {
      res["MasterInstanceType"] = boost::any(*masterInstanceType);
    }
    if (masterNodeCount) {
      res["MasterNodeCount"] = boost::any(*masterNodeCount);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleStackVersion) {
      res["ModuleStackVersion"] = boost::any(*moduleStackVersion);
    }
    if (multiZoneCombination) {
      res["MultiZoneCombination"] = boost::any(*multiZoneCombination);
    }
    if (multiZoneInstanceModels) {
      res["MultiZoneInstanceModels"] = multiZoneInstanceModels ? boost::any(multiZoneInstanceModels->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (primaryVSwitchIds) {
      res["PrimaryVSwitchIds"] = boost::any(*primaryVSwitchIds);
    }
    if (primaryZoneId) {
      res["PrimaryZoneId"] = boost::any(*primaryZoneId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (standbyVSwitchIds) {
      res["StandbyVSwitchIds"] = boost::any(*standbyVSwitchIds);
    }
    if (standbyZoneId) {
      res["StandbyZoneId"] = boost::any(*standbyZoneId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArbiterVSwitchIds") != m.end() && !m["ArbiterVSwitchIds"].empty()) {
      arbiterVSwitchIds = make_shared<string>(boost::any_cast<string>(m["ArbiterVSwitchIds"]));
    }
    if (m.find("ArbiterZoneId") != m.end() && !m["ArbiterZoneId"].empty()) {
      arbiterZoneId = make_shared<string>(boost::any_cast<string>(m["ArbiterZoneId"]));
    }
    if (m.find("AutoRenewal") != m.end() && !m["AutoRenewal"].empty()) {
      autoRenewal = make_shared<bool>(boost::any_cast<bool>(m["AutoRenewal"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("CoreDiskCount") != m.end() && !m["CoreDiskCount"].empty()) {
      coreDiskCount = make_shared<string>(boost::any_cast<string>(m["CoreDiskCount"]));
    }
    if (m.find("CoreDiskSize") != m.end() && !m["CoreDiskSize"].empty()) {
      coreDiskSize = make_shared<long>(boost::any_cast<long>(m["CoreDiskSize"]));
    }
    if (m.find("CoreDiskType") != m.end() && !m["CoreDiskType"].empty()) {
      coreDiskType = make_shared<string>(boost::any_cast<string>(m["CoreDiskType"]));
    }
    if (m.find("CoreInstanceType") != m.end() && !m["CoreInstanceType"].empty()) {
      coreInstanceType = make_shared<string>(boost::any_cast<string>(m["CoreInstanceType"]));
    }
    if (m.find("CoreNodeCount") != m.end() && !m["CoreNodeCount"].empty()) {
      coreNodeCount = make_shared<long>(boost::any_cast<long>(m["CoreNodeCount"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("CreatedTimeUTC") != m.end() && !m["CreatedTimeUTC"].empty()) {
      createdTimeUTC = make_shared<string>(boost::any_cast<string>(m["CreatedTimeUTC"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("EncryptionType") != m.end() && !m["EncryptionType"].empty()) {
      encryptionType = make_shared<string>(boost::any_cast<string>(m["EncryptionType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ExpireTimeUTC") != m.end() && !m["ExpireTimeUTC"].empty()) {
      expireTimeUTC = make_shared<string>(boost::any_cast<string>(m["ExpireTimeUTC"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("IsDeletionProtection") != m.end() && !m["IsDeletionProtection"].empty()) {
      isDeletionProtection = make_shared<bool>(boost::any_cast<bool>(m["IsDeletionProtection"]));
    }
    if (m.find("LogDiskCount") != m.end() && !m["LogDiskCount"].empty()) {
      logDiskCount = make_shared<string>(boost::any_cast<string>(m["LogDiskCount"]));
    }
    if (m.find("LogDiskSize") != m.end() && !m["LogDiskSize"].empty()) {
      logDiskSize = make_shared<long>(boost::any_cast<long>(m["LogDiskSize"]));
    }
    if (m.find("LogDiskType") != m.end() && !m["LogDiskType"].empty()) {
      logDiskType = make_shared<string>(boost::any_cast<string>(m["LogDiskType"]));
    }
    if (m.find("LogInstanceType") != m.end() && !m["LogInstanceType"].empty()) {
      logInstanceType = make_shared<string>(boost::any_cast<string>(m["LogInstanceType"]));
    }
    if (m.find("LogNodeCount") != m.end() && !m["LogNodeCount"].empty()) {
      logNodeCount = make_shared<long>(boost::any_cast<long>(m["LogNodeCount"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("MajorVersion") != m.end() && !m["MajorVersion"].empty()) {
      majorVersion = make_shared<string>(boost::any_cast<string>(m["MajorVersion"]));
    }
    if (m.find("MasterDiskSize") != m.end() && !m["MasterDiskSize"].empty()) {
      masterDiskSize = make_shared<long>(boost::any_cast<long>(m["MasterDiskSize"]));
    }
    if (m.find("MasterDiskType") != m.end() && !m["MasterDiskType"].empty()) {
      masterDiskType = make_shared<string>(boost::any_cast<string>(m["MasterDiskType"]));
    }
    if (m.find("MasterInstanceType") != m.end() && !m["MasterInstanceType"].empty()) {
      masterInstanceType = make_shared<string>(boost::any_cast<string>(m["MasterInstanceType"]));
    }
    if (m.find("MasterNodeCount") != m.end() && !m["MasterNodeCount"].empty()) {
      masterNodeCount = make_shared<long>(boost::any_cast<long>(m["MasterNodeCount"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<long>(boost::any_cast<long>(m["ModuleId"]));
    }
    if (m.find("ModuleStackVersion") != m.end() && !m["ModuleStackVersion"].empty()) {
      moduleStackVersion = make_shared<string>(boost::any_cast<string>(m["ModuleStackVersion"]));
    }
    if (m.find("MultiZoneCombination") != m.end() && !m["MultiZoneCombination"].empty()) {
      multiZoneCombination = make_shared<string>(boost::any_cast<string>(m["MultiZoneCombination"]));
    }
    if (m.find("MultiZoneInstanceModels") != m.end() && !m["MultiZoneInstanceModels"].empty()) {
      if (typeid(map<string, boost::any>) == m["MultiZoneInstanceModels"].type()) {
        DescribeMultiZoneClusterResponseBodyMultiZoneInstanceModels model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MultiZoneInstanceModels"]));
        multiZoneInstanceModels = make_shared<DescribeMultiZoneClusterResponseBodyMultiZoneInstanceModels>(model1);
      }
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PrimaryVSwitchIds") != m.end() && !m["PrimaryVSwitchIds"].empty()) {
      primaryVSwitchIds = make_shared<string>(boost::any_cast<string>(m["PrimaryVSwitchIds"]));
    }
    if (m.find("PrimaryZoneId") != m.end() && !m["PrimaryZoneId"].empty()) {
      primaryZoneId = make_shared<string>(boost::any_cast<string>(m["PrimaryZoneId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StandbyVSwitchIds") != m.end() && !m["StandbyVSwitchIds"].empty()) {
      standbyVSwitchIds = make_shared<string>(boost::any_cast<string>(m["StandbyVSwitchIds"]));
    }
    if (m.find("StandbyZoneId") != m.end() && !m["StandbyZoneId"].empty()) {
      standbyZoneId = make_shared<string>(boost::any_cast<string>(m["StandbyZoneId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeMultiZoneClusterResponseBodyTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeMultiZoneClusterResponseBodyTags>(model1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeMultiZoneClusterResponseBody() = default;
};
class DescribeMultiZoneClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeMultiZoneClusterResponseBody> body{};

  DescribeMultiZoneClusterResponse() {}

  explicit DescribeMultiZoneClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeMultiZoneClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMultiZoneClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMultiZoneClusterResponse() = default;
};
class DescribeRecoverableTimeRangeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeRecoverableTimeRangeRequest() {}

  explicit DescribeRecoverableTimeRangeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeRecoverableTimeRangeRequest() = default;
};
class DescribeRecoverableTimeRangeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> timeBegin{};
  shared_ptr<string> timeEnd{};

  DescribeRecoverableTimeRangeResponseBody() {}

  explicit DescribeRecoverableTimeRangeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timeBegin) {
      res["TimeBegin"] = boost::any(*timeBegin);
    }
    if (timeEnd) {
      res["TimeEnd"] = boost::any(*timeEnd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TimeBegin") != m.end() && !m["TimeBegin"].empty()) {
      timeBegin = make_shared<string>(boost::any_cast<string>(m["TimeBegin"]));
    }
    if (m.find("TimeEnd") != m.end() && !m["TimeEnd"].empty()) {
      timeEnd = make_shared<string>(boost::any_cast<string>(m["TimeEnd"]));
    }
  }


  virtual ~DescribeRecoverableTimeRangeResponseBody() = default;
};
class DescribeRecoverableTimeRangeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRecoverableTimeRangeResponseBody> body{};

  DescribeRecoverableTimeRangeResponse() {}

  explicit DescribeRecoverableTimeRangeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRecoverableTimeRangeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRecoverableTimeRangeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRecoverableTimeRangeResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> engine{};

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
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegionZonesZone : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DescribeRegionsResponseBodyRegionsRegionZonesZone() {}

  explicit DescribeRegionsResponseBodyRegionsRegionZonesZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegionZonesZone() = default;
};
class DescribeRegionsResponseBodyRegionsRegionZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegionZonesZone>> zone{};

  DescribeRegionsResponseBodyRegionsRegionZones() {}

  explicit DescribeRegionsResponseBodyRegionsRegionZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeRegionsResponseBodyRegionsRegionZonesZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegionZonesZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zone = make_shared<vector<DescribeRegionsResponseBodyRegionsRegionZonesZone>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegionZones() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeRegionsResponseBodyRegionsRegionZones> zones{};

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
    if (zones) {
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Zones"].type()) {
        DescribeRegionsResponseBodyRegionsRegionZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Zones"]));
        zones = make_shared<DescribeRegionsResponseBodyRegionsRegionZones>(model1);
      }
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
class DescribeRestoreFullDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> restoreRecordId{};

  DescribeRestoreFullDetailsRequest() {}

  explicit DescribeRestoreFullDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (restoreRecordId) {
      res["RestoreRecordId"] = boost::any(*restoreRecordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RestoreRecordId") != m.end() && !m["RestoreRecordId"].empty()) {
      restoreRecordId = make_shared<string>(boost::any_cast<string>(m["RestoreRecordId"]));
    }
  }


  virtual ~DescribeRestoreFullDetailsRequest() = default;
};
class DescribeRestoreFullDetailsResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail : public Darabonba::Model {
public:
  shared_ptr<string> dataSize{};
  shared_ptr<string> endTime{};
  shared_ptr<string> message{};
  shared_ptr<string> process{};
  shared_ptr<string> speed{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};
  shared_ptr<string> table{};

  DescribeRestoreFullDetailsResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail() {}

  explicit DescribeRestoreFullDetailsResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (process) {
      res["Process"] = boost::any(*process);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<string>(boost::any_cast<string>(m["DataSize"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      process = make_shared<string>(boost::any_cast<string>(m["Process"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<string>(boost::any_cast<string>(m["Speed"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
  }


  virtual ~DescribeRestoreFullDetailsResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail() = default;
};
class DescribeRestoreFullDetailsResponseBodyRestoreFullRestoreFullDetails : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRestoreFullDetailsResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail>> restoreFullDetail{};

  DescribeRestoreFullDetailsResponseBodyRestoreFullRestoreFullDetails() {}

  explicit DescribeRestoreFullDetailsResponseBodyRestoreFullRestoreFullDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (restoreFullDetail) {
      vector<boost::any> temp1;
      for(auto item1:*restoreFullDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RestoreFullDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RestoreFullDetail") != m.end() && !m["RestoreFullDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["RestoreFullDetail"].type()) {
        vector<DescribeRestoreFullDetailsResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RestoreFullDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRestoreFullDetailsResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        restoreFullDetail = make_shared<vector<DescribeRestoreFullDetailsResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeRestoreFullDetailsResponseBodyRestoreFullRestoreFullDetails() = default;
};
class DescribeRestoreFullDetailsResponseBodyRestoreFull : public Darabonba::Model {
public:
  shared_ptr<string> dataSize{};
  shared_ptr<long> fail{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<DescribeRestoreFullDetailsResponseBodyRestoreFullRestoreFullDetails> restoreFullDetails{};
  shared_ptr<string> speed{};
  shared_ptr<long> succeed{};
  shared_ptr<long> total{};

  DescribeRestoreFullDetailsResponseBodyRestoreFull() {}

  explicit DescribeRestoreFullDetailsResponseBodyRestoreFull(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (fail) {
      res["Fail"] = boost::any(*fail);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (restoreFullDetails) {
      res["RestoreFullDetails"] = restoreFullDetails ? boost::any(restoreFullDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (succeed) {
      res["Succeed"] = boost::any(*succeed);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<string>(boost::any_cast<string>(m["DataSize"]));
    }
    if (m.find("Fail") != m.end() && !m["Fail"].empty()) {
      fail = make_shared<long>(boost::any_cast<long>(m["Fail"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RestoreFullDetails") != m.end() && !m["RestoreFullDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["RestoreFullDetails"].type()) {
        DescribeRestoreFullDetailsResponseBodyRestoreFullRestoreFullDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RestoreFullDetails"]));
        restoreFullDetails = make_shared<DescribeRestoreFullDetailsResponseBodyRestoreFullRestoreFullDetails>(model1);
      }
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<string>(boost::any_cast<string>(m["Speed"]));
    }
    if (m.find("Succeed") != m.end() && !m["Succeed"].empty()) {
      succeed = make_shared<long>(boost::any_cast<long>(m["Succeed"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeRestoreFullDetailsResponseBodyRestoreFull() = default;
};
class DescribeRestoreFullDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRestoreFullDetailsResponseBodyRestoreFull> restoreFull{};

  DescribeRestoreFullDetailsResponseBody() {}

  explicit DescribeRestoreFullDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (restoreFull) {
      res["RestoreFull"] = restoreFull ? boost::any(restoreFull->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RestoreFull") != m.end() && !m["RestoreFull"].empty()) {
      if (typeid(map<string, boost::any>) == m["RestoreFull"].type()) {
        DescribeRestoreFullDetailsResponseBodyRestoreFull model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RestoreFull"]));
        restoreFull = make_shared<DescribeRestoreFullDetailsResponseBodyRestoreFull>(model1);
      }
    }
  }


  virtual ~DescribeRestoreFullDetailsResponseBody() = default;
};
class DescribeRestoreFullDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRestoreFullDetailsResponseBody> body{};

  DescribeRestoreFullDetailsResponse() {}

  explicit DescribeRestoreFullDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRestoreFullDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRestoreFullDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRestoreFullDetailsResponse() = default;
};
class DescribeRestoreIncrDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> restoreRecordId{};

  DescribeRestoreIncrDetailRequest() {}

  explicit DescribeRestoreIncrDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (restoreRecordId) {
      res["RestoreRecordId"] = boost::any(*restoreRecordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RestoreRecordId") != m.end() && !m["RestoreRecordId"].empty()) {
      restoreRecordId = make_shared<string>(boost::any_cast<string>(m["RestoreRecordId"]));
    }
  }


  virtual ~DescribeRestoreIncrDetailRequest() = default;
};
class DescribeRestoreIncrDetailResponseBodyRestoreIncrDetail : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> process{};
  shared_ptr<string> restoreDelay{};
  shared_ptr<string> restoreStartTs{};
  shared_ptr<string> restoredTs{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};

  DescribeRestoreIncrDetailResponseBodyRestoreIncrDetail() {}

  explicit DescribeRestoreIncrDetailResponseBodyRestoreIncrDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (process) {
      res["Process"] = boost::any(*process);
    }
    if (restoreDelay) {
      res["RestoreDelay"] = boost::any(*restoreDelay);
    }
    if (restoreStartTs) {
      res["RestoreStartTs"] = boost::any(*restoreStartTs);
    }
    if (restoredTs) {
      res["RestoredTs"] = boost::any(*restoredTs);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      process = make_shared<string>(boost::any_cast<string>(m["Process"]));
    }
    if (m.find("RestoreDelay") != m.end() && !m["RestoreDelay"].empty()) {
      restoreDelay = make_shared<string>(boost::any_cast<string>(m["RestoreDelay"]));
    }
    if (m.find("RestoreStartTs") != m.end() && !m["RestoreStartTs"].empty()) {
      restoreStartTs = make_shared<string>(boost::any_cast<string>(m["RestoreStartTs"]));
    }
    if (m.find("RestoredTs") != m.end() && !m["RestoredTs"].empty()) {
      restoredTs = make_shared<string>(boost::any_cast<string>(m["RestoredTs"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~DescribeRestoreIncrDetailResponseBodyRestoreIncrDetail() = default;
};
class DescribeRestoreIncrDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRestoreIncrDetailResponseBodyRestoreIncrDetail> restoreIncrDetail{};

  DescribeRestoreIncrDetailResponseBody() {}

  explicit DescribeRestoreIncrDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (restoreIncrDetail) {
      res["RestoreIncrDetail"] = restoreIncrDetail ? boost::any(restoreIncrDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RestoreIncrDetail") != m.end() && !m["RestoreIncrDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["RestoreIncrDetail"].type()) {
        DescribeRestoreIncrDetailResponseBodyRestoreIncrDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RestoreIncrDetail"]));
        restoreIncrDetail = make_shared<DescribeRestoreIncrDetailResponseBodyRestoreIncrDetail>(model1);
      }
    }
  }


  virtual ~DescribeRestoreIncrDetailResponseBody() = default;
};
class DescribeRestoreIncrDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRestoreIncrDetailResponseBody> body{};

  DescribeRestoreIncrDetailResponse() {}

  explicit DescribeRestoreIncrDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRestoreIncrDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRestoreIncrDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRestoreIncrDetailResponse() = default;
};
class DescribeRestoreSchemaDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> restoreRecordId{};

  DescribeRestoreSchemaDetailsRequest() {}

  explicit DescribeRestoreSchemaDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (restoreRecordId) {
      res["RestoreRecordId"] = boost::any(*restoreRecordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RestoreRecordId") != m.end() && !m["RestoreRecordId"].empty()) {
      restoreRecordId = make_shared<string>(boost::any_cast<string>(m["RestoreRecordId"]));
    }
  }


  virtual ~DescribeRestoreSchemaDetailsRequest() = default;
};
class DescribeRestoreSchemaDetailsResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> message{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};
  shared_ptr<string> table{};

  DescribeRestoreSchemaDetailsResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail() {}

  explicit DescribeRestoreSchemaDetailsResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
  }


  virtual ~DescribeRestoreSchemaDetailsResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail() = default;
};
class DescribeRestoreSchemaDetailsResponseBodyRestoreSchemaRestoreSchemaDetails : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRestoreSchemaDetailsResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail>> restoreSchemaDetail{};

  DescribeRestoreSchemaDetailsResponseBodyRestoreSchemaRestoreSchemaDetails() {}

  explicit DescribeRestoreSchemaDetailsResponseBodyRestoreSchemaRestoreSchemaDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (restoreSchemaDetail) {
      vector<boost::any> temp1;
      for(auto item1:*restoreSchemaDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RestoreSchemaDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RestoreSchemaDetail") != m.end() && !m["RestoreSchemaDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["RestoreSchemaDetail"].type()) {
        vector<DescribeRestoreSchemaDetailsResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RestoreSchemaDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRestoreSchemaDetailsResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        restoreSchemaDetail = make_shared<vector<DescribeRestoreSchemaDetailsResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeRestoreSchemaDetailsResponseBodyRestoreSchemaRestoreSchemaDetails() = default;
};
class DescribeRestoreSchemaDetailsResponseBodyRestoreSchema : public Darabonba::Model {
public:
  shared_ptr<long> fail{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<DescribeRestoreSchemaDetailsResponseBodyRestoreSchemaRestoreSchemaDetails> restoreSchemaDetails{};
  shared_ptr<long> succeed{};
  shared_ptr<long> total{};

  DescribeRestoreSchemaDetailsResponseBodyRestoreSchema() {}

  explicit DescribeRestoreSchemaDetailsResponseBodyRestoreSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fail) {
      res["Fail"] = boost::any(*fail);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (restoreSchemaDetails) {
      res["RestoreSchemaDetails"] = restoreSchemaDetails ? boost::any(restoreSchemaDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (succeed) {
      res["Succeed"] = boost::any(*succeed);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fail") != m.end() && !m["Fail"].empty()) {
      fail = make_shared<long>(boost::any_cast<long>(m["Fail"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RestoreSchemaDetails") != m.end() && !m["RestoreSchemaDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["RestoreSchemaDetails"].type()) {
        DescribeRestoreSchemaDetailsResponseBodyRestoreSchemaRestoreSchemaDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RestoreSchemaDetails"]));
        restoreSchemaDetails = make_shared<DescribeRestoreSchemaDetailsResponseBodyRestoreSchemaRestoreSchemaDetails>(model1);
      }
    }
    if (m.find("Succeed") != m.end() && !m["Succeed"].empty()) {
      succeed = make_shared<long>(boost::any_cast<long>(m["Succeed"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeRestoreSchemaDetailsResponseBodyRestoreSchema() = default;
};
class DescribeRestoreSchemaDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRestoreSchemaDetailsResponseBodyRestoreSchema> restoreSchema{};

  DescribeRestoreSchemaDetailsResponseBody() {}

  explicit DescribeRestoreSchemaDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (restoreSchema) {
      res["RestoreSchema"] = restoreSchema ? boost::any(restoreSchema->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RestoreSchema") != m.end() && !m["RestoreSchema"].empty()) {
      if (typeid(map<string, boost::any>) == m["RestoreSchema"].type()) {
        DescribeRestoreSchemaDetailsResponseBodyRestoreSchema model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RestoreSchema"]));
        restoreSchema = make_shared<DescribeRestoreSchemaDetailsResponseBodyRestoreSchema>(model1);
      }
    }
  }


  virtual ~DescribeRestoreSchemaDetailsResponseBody() = default;
};
class DescribeRestoreSchemaDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRestoreSchemaDetailsResponseBody> body{};

  DescribeRestoreSchemaDetailsResponse() {}

  explicit DescribeRestoreSchemaDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRestoreSchemaDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRestoreSchemaDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRestoreSchemaDetailsResponse() = default;
};
class DescribeRestoreSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeRestoreSummaryRequest() {}

  explicit DescribeRestoreSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeRestoreSummaryRequest() = default;
};
class DescribeRestoreSummaryResponseBodyRescordsRescord : public Darabonba::Model {
public:
  shared_ptr<string> bulkLoadProcess{};
  shared_ptr<string> createTime{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> hfileRestoreProcess{};
  shared_ptr<string> logProcess{};
  shared_ptr<string> recordId{};
  shared_ptr<string> schemaProcess{};
  shared_ptr<string> status{};

  DescribeRestoreSummaryResponseBodyRescordsRescord() {}

  explicit DescribeRestoreSummaryResponseBodyRescordsRescord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bulkLoadProcess) {
      res["BulkLoadProcess"] = boost::any(*bulkLoadProcess);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (hfileRestoreProcess) {
      res["HfileRestoreProcess"] = boost::any(*hfileRestoreProcess);
    }
    if (logProcess) {
      res["LogProcess"] = boost::any(*logProcess);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (schemaProcess) {
      res["SchemaProcess"] = boost::any(*schemaProcess);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BulkLoadProcess") != m.end() && !m["BulkLoadProcess"].empty()) {
      bulkLoadProcess = make_shared<string>(boost::any_cast<string>(m["BulkLoadProcess"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("HfileRestoreProcess") != m.end() && !m["HfileRestoreProcess"].empty()) {
      hfileRestoreProcess = make_shared<string>(boost::any_cast<string>(m["HfileRestoreProcess"]));
    }
    if (m.find("LogProcess") != m.end() && !m["LogProcess"].empty()) {
      logProcess = make_shared<string>(boost::any_cast<string>(m["LogProcess"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
    if (m.find("SchemaProcess") != m.end() && !m["SchemaProcess"].empty()) {
      schemaProcess = make_shared<string>(boost::any_cast<string>(m["SchemaProcess"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeRestoreSummaryResponseBodyRescordsRescord() = default;
};
class DescribeRestoreSummaryResponseBodyRescords : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRestoreSummaryResponseBodyRescordsRescord>> rescord{};

  DescribeRestoreSummaryResponseBodyRescords() {}

  explicit DescribeRestoreSummaryResponseBodyRescords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rescord) {
      vector<boost::any> temp1;
      for(auto item1:*rescord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rescord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rescord") != m.end() && !m["Rescord"].empty()) {
      if (typeid(vector<boost::any>) == m["Rescord"].type()) {
        vector<DescribeRestoreSummaryResponseBodyRescordsRescord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rescord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRestoreSummaryResponseBodyRescordsRescord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rescord = make_shared<vector<DescribeRestoreSummaryResponseBodyRescordsRescord>>(expect1);
      }
    }
  }


  virtual ~DescribeRestoreSummaryResponseBodyRescords() = default;
};
class DescribeRestoreSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> hasMoreRestoreRecord{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRestoreSummaryResponseBodyRescords> rescords{};
  shared_ptr<long> total{};

  DescribeRestoreSummaryResponseBody() {}

  explicit DescribeRestoreSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasMoreRestoreRecord) {
      res["HasMoreRestoreRecord"] = boost::any(*hasMoreRestoreRecord);
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
    if (rescords) {
      res["Rescords"] = rescords ? boost::any(rescords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasMoreRestoreRecord") != m.end() && !m["HasMoreRestoreRecord"].empty()) {
      hasMoreRestoreRecord = make_shared<long>(boost::any_cast<long>(m["HasMoreRestoreRecord"]));
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
    if (m.find("Rescords") != m.end() && !m["Rescords"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rescords"].type()) {
        DescribeRestoreSummaryResponseBodyRescords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rescords"]));
        rescords = make_shared<DescribeRestoreSummaryResponseBodyRescords>(model1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeRestoreSummaryResponseBody() = default;
};
class DescribeRestoreSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRestoreSummaryResponseBody> body{};

  DescribeRestoreSummaryResponse() {}

  explicit DescribeRestoreSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRestoreSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRestoreSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRestoreSummaryResponse() = default;
};
class DescribeRestoreTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> restoreRecordId{};

  DescribeRestoreTablesRequest() {}

  explicit DescribeRestoreTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (restoreRecordId) {
      res["RestoreRecordId"] = boost::any(*restoreRecordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RestoreRecordId") != m.end() && !m["RestoreRecordId"].empty()) {
      restoreRecordId = make_shared<string>(boost::any_cast<string>(m["RestoreRecordId"]));
    }
  }


  virtual ~DescribeRestoreTablesRequest() = default;
};
class DescribeRestoreTablesResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail : public Darabonba::Model {
public:
  shared_ptr<string> dataSize{};
  shared_ptr<string> endTime{};
  shared_ptr<string> message{};
  shared_ptr<string> process{};
  shared_ptr<string> speed{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};
  shared_ptr<string> table{};

  DescribeRestoreTablesResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail() {}

  explicit DescribeRestoreTablesResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (process) {
      res["Process"] = boost::any(*process);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<string>(boost::any_cast<string>(m["DataSize"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      process = make_shared<string>(boost::any_cast<string>(m["Process"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<string>(boost::any_cast<string>(m["Speed"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
  }


  virtual ~DescribeRestoreTablesResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail() = default;
};
class DescribeRestoreTablesResponseBodyRestoreFullRestoreFullDetails : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRestoreTablesResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail>> restoreFullDetail{};

  DescribeRestoreTablesResponseBodyRestoreFullRestoreFullDetails() {}

  explicit DescribeRestoreTablesResponseBodyRestoreFullRestoreFullDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (restoreFullDetail) {
      vector<boost::any> temp1;
      for(auto item1:*restoreFullDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RestoreFullDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RestoreFullDetail") != m.end() && !m["RestoreFullDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["RestoreFullDetail"].type()) {
        vector<DescribeRestoreTablesResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RestoreFullDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRestoreTablesResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        restoreFullDetail = make_shared<vector<DescribeRestoreTablesResponseBodyRestoreFullRestoreFullDetailsRestoreFullDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeRestoreTablesResponseBodyRestoreFullRestoreFullDetails() = default;
};
class DescribeRestoreTablesResponseBodyRestoreFull : public Darabonba::Model {
public:
  shared_ptr<string> dataSize{};
  shared_ptr<long> fail{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<DescribeRestoreTablesResponseBodyRestoreFullRestoreFullDetails> restoreFullDetails{};
  shared_ptr<string> speed{};
  shared_ptr<long> succeed{};
  shared_ptr<long> total{};

  DescribeRestoreTablesResponseBodyRestoreFull() {}

  explicit DescribeRestoreTablesResponseBodyRestoreFull(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (fail) {
      res["Fail"] = boost::any(*fail);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (restoreFullDetails) {
      res["RestoreFullDetails"] = restoreFullDetails ? boost::any(restoreFullDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (succeed) {
      res["Succeed"] = boost::any(*succeed);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<string>(boost::any_cast<string>(m["DataSize"]));
    }
    if (m.find("Fail") != m.end() && !m["Fail"].empty()) {
      fail = make_shared<long>(boost::any_cast<long>(m["Fail"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RestoreFullDetails") != m.end() && !m["RestoreFullDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["RestoreFullDetails"].type()) {
        DescribeRestoreTablesResponseBodyRestoreFullRestoreFullDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RestoreFullDetails"]));
        restoreFullDetails = make_shared<DescribeRestoreTablesResponseBodyRestoreFullRestoreFullDetails>(model1);
      }
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<string>(boost::any_cast<string>(m["Speed"]));
    }
    if (m.find("Succeed") != m.end() && !m["Succeed"].empty()) {
      succeed = make_shared<long>(boost::any_cast<long>(m["Succeed"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeRestoreTablesResponseBodyRestoreFull() = default;
};
class DescribeRestoreTablesResponseBodyRestoreIncrDetail : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> process{};
  shared_ptr<string> restoreDelay{};
  shared_ptr<string> restoreStartTs{};
  shared_ptr<string> restoredTs{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};

  DescribeRestoreTablesResponseBodyRestoreIncrDetail() {}

  explicit DescribeRestoreTablesResponseBodyRestoreIncrDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (process) {
      res["Process"] = boost::any(*process);
    }
    if (restoreDelay) {
      res["RestoreDelay"] = boost::any(*restoreDelay);
    }
    if (restoreStartTs) {
      res["RestoreStartTs"] = boost::any(*restoreStartTs);
    }
    if (restoredTs) {
      res["RestoredTs"] = boost::any(*restoredTs);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      process = make_shared<string>(boost::any_cast<string>(m["Process"]));
    }
    if (m.find("RestoreDelay") != m.end() && !m["RestoreDelay"].empty()) {
      restoreDelay = make_shared<string>(boost::any_cast<string>(m["RestoreDelay"]));
    }
    if (m.find("RestoreStartTs") != m.end() && !m["RestoreStartTs"].empty()) {
      restoreStartTs = make_shared<string>(boost::any_cast<string>(m["RestoreStartTs"]));
    }
    if (m.find("RestoredTs") != m.end() && !m["RestoredTs"].empty()) {
      restoredTs = make_shared<string>(boost::any_cast<string>(m["RestoredTs"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~DescribeRestoreTablesResponseBodyRestoreIncrDetail() = default;
};
class DescribeRestoreTablesResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> message{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};
  shared_ptr<string> table{};

  DescribeRestoreTablesResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail() {}

  explicit DescribeRestoreTablesResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
  }


  virtual ~DescribeRestoreTablesResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail() = default;
};
class DescribeRestoreTablesResponseBodyRestoreSchemaRestoreSchemaDetails : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRestoreTablesResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail>> restoreSchemaDetail{};

  DescribeRestoreTablesResponseBodyRestoreSchemaRestoreSchemaDetails() {}

  explicit DescribeRestoreTablesResponseBodyRestoreSchemaRestoreSchemaDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (restoreSchemaDetail) {
      vector<boost::any> temp1;
      for(auto item1:*restoreSchemaDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RestoreSchemaDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RestoreSchemaDetail") != m.end() && !m["RestoreSchemaDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["RestoreSchemaDetail"].type()) {
        vector<DescribeRestoreTablesResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RestoreSchemaDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRestoreTablesResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        restoreSchemaDetail = make_shared<vector<DescribeRestoreTablesResponseBodyRestoreSchemaRestoreSchemaDetailsRestoreSchemaDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeRestoreTablesResponseBodyRestoreSchemaRestoreSchemaDetails() = default;
};
class DescribeRestoreTablesResponseBodyRestoreSchema : public Darabonba::Model {
public:
  shared_ptr<long> fail{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<DescribeRestoreTablesResponseBodyRestoreSchemaRestoreSchemaDetails> restoreSchemaDetails{};
  shared_ptr<long> succeed{};
  shared_ptr<long> total{};

  DescribeRestoreTablesResponseBodyRestoreSchema() {}

  explicit DescribeRestoreTablesResponseBodyRestoreSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fail) {
      res["Fail"] = boost::any(*fail);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (restoreSchemaDetails) {
      res["RestoreSchemaDetails"] = restoreSchemaDetails ? boost::any(restoreSchemaDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (succeed) {
      res["Succeed"] = boost::any(*succeed);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fail") != m.end() && !m["Fail"].empty()) {
      fail = make_shared<long>(boost::any_cast<long>(m["Fail"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RestoreSchemaDetails") != m.end() && !m["RestoreSchemaDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["RestoreSchemaDetails"].type()) {
        DescribeRestoreTablesResponseBodyRestoreSchemaRestoreSchemaDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RestoreSchemaDetails"]));
        restoreSchemaDetails = make_shared<DescribeRestoreTablesResponseBodyRestoreSchemaRestoreSchemaDetails>(model1);
      }
    }
    if (m.find("Succeed") != m.end() && !m["Succeed"].empty()) {
      succeed = make_shared<long>(boost::any_cast<long>(m["Succeed"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeRestoreTablesResponseBodyRestoreSchema() = default;
};
class DescribeRestoreTablesResponseBodyRestoreSummary : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> recordId{};
  shared_ptr<string> restoreToDate{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};
  shared_ptr<string> targetCluster{};

  DescribeRestoreTablesResponseBodyRestoreSummary() {}

  explicit DescribeRestoreTablesResponseBodyRestoreSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (restoreToDate) {
      res["RestoreToDate"] = boost::any(*restoreToDate);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (targetCluster) {
      res["TargetCluster"] = boost::any(*targetCluster);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
    if (m.find("RestoreToDate") != m.end() && !m["RestoreToDate"].empty()) {
      restoreToDate = make_shared<string>(boost::any_cast<string>(m["RestoreToDate"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("TargetCluster") != m.end() && !m["TargetCluster"].empty()) {
      targetCluster = make_shared<string>(boost::any_cast<string>(m["TargetCluster"]));
    }
  }


  virtual ~DescribeRestoreTablesResponseBodyRestoreSummary() = default;
};
class DescribeRestoreTablesResponseBodyTables : public Darabonba::Model {
public:
  shared_ptr<vector<string>> table{};

  DescribeRestoreTablesResponseBodyTables() {}

  explicit DescribeRestoreTablesResponseBodyTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Table"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Table"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      table = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRestoreTablesResponseBodyTables() = default;
};
class DescribeRestoreTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRestoreTablesResponseBodyRestoreFull> restoreFull{};
  shared_ptr<DescribeRestoreTablesResponseBodyRestoreIncrDetail> restoreIncrDetail{};
  shared_ptr<DescribeRestoreTablesResponseBodyRestoreSchema> restoreSchema{};
  shared_ptr<DescribeRestoreTablesResponseBodyRestoreSummary> restoreSummary{};
  shared_ptr<DescribeRestoreTablesResponseBodyTables> tables{};

  DescribeRestoreTablesResponseBody() {}

  explicit DescribeRestoreTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (restoreFull) {
      res["RestoreFull"] = restoreFull ? boost::any(restoreFull->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (restoreIncrDetail) {
      res["RestoreIncrDetail"] = restoreIncrDetail ? boost::any(restoreIncrDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (restoreSchema) {
      res["RestoreSchema"] = restoreSchema ? boost::any(restoreSchema->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (restoreSummary) {
      res["RestoreSummary"] = restoreSummary ? boost::any(restoreSummary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tables) {
      res["Tables"] = tables ? boost::any(tables->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RestoreFull") != m.end() && !m["RestoreFull"].empty()) {
      if (typeid(map<string, boost::any>) == m["RestoreFull"].type()) {
        DescribeRestoreTablesResponseBodyRestoreFull model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RestoreFull"]));
        restoreFull = make_shared<DescribeRestoreTablesResponseBodyRestoreFull>(model1);
      }
    }
    if (m.find("RestoreIncrDetail") != m.end() && !m["RestoreIncrDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["RestoreIncrDetail"].type()) {
        DescribeRestoreTablesResponseBodyRestoreIncrDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RestoreIncrDetail"]));
        restoreIncrDetail = make_shared<DescribeRestoreTablesResponseBodyRestoreIncrDetail>(model1);
      }
    }
    if (m.find("RestoreSchema") != m.end() && !m["RestoreSchema"].empty()) {
      if (typeid(map<string, boost::any>) == m["RestoreSchema"].type()) {
        DescribeRestoreTablesResponseBodyRestoreSchema model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RestoreSchema"]));
        restoreSchema = make_shared<DescribeRestoreTablesResponseBodyRestoreSchema>(model1);
      }
    }
    if (m.find("RestoreSummary") != m.end() && !m["RestoreSummary"].empty()) {
      if (typeid(map<string, boost::any>) == m["RestoreSummary"].type()) {
        DescribeRestoreTablesResponseBodyRestoreSummary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RestoreSummary"]));
        restoreSummary = make_shared<DescribeRestoreTablesResponseBodyRestoreSummary>(model1);
      }
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tables"].type()) {
        DescribeRestoreTablesResponseBodyTables model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tables"]));
        tables = make_shared<DescribeRestoreTablesResponseBodyTables>(model1);
      }
    }
  }


  virtual ~DescribeRestoreTablesResponseBody() = default;
};
class DescribeRestoreTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRestoreTablesResponseBody> body{};

  DescribeRestoreTablesResponse() {}

  explicit DescribeRestoreTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRestoreTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRestoreTablesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRestoreTablesResponse() = default;
};
class DescribeSecurityGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeSecurityGroupsRequest() {}

  explicit DescribeSecurityGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeSecurityGroupsRequest() = default;
};
class DescribeSecurityGroupsResponseBodySecurityGroupIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> securityGroupId{};

  DescribeSecurityGroupsResponseBodySecurityGroupIds() {}

  explicit DescribeSecurityGroupsResponseBodySecurityGroupIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeSecurityGroupsResponseBodySecurityGroupIds() = default;
};
class DescribeSecurityGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSecurityGroupsResponseBodySecurityGroupIds> securityGroupIds{};

  DescribeSecurityGroupsResponseBody() {}

  explicit DescribeSecurityGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = securityGroupIds ? boost::any(securityGroupIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityGroupIds"].type()) {
        DescribeSecurityGroupsResponseBodySecurityGroupIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityGroupIds"]));
        securityGroupIds = make_shared<DescribeSecurityGroupsResponseBodySecurityGroupIds>(model1);
      }
    }
  }


  virtual ~DescribeSecurityGroupsResponseBody() = default;
};
class DescribeSecurityGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSecurityGroupsResponseBody> body{};

  DescribeSecurityGroupsResponse() {}

  explicit DescribeSecurityGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSecurityGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSecurityGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSecurityGroupsResponse() = default;
};
class DescribeServerlessClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> zoneId{};

  DescribeServerlessClusterRequest() {}

  explicit DescribeServerlessClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeServerlessClusterRequest() = default;
};
class DescribeServerlessClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> autoRenew{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> cuSize{};
  shared_ptr<string> diskSize{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> haType{};
  shared_ptr<string> hasUser{};
  shared_ptr<string> innerEndpoint{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> isDeletionProtection{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> mainVersion{};
  shared_ptr<string> outerEndpoint{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> reserverMaxQpsNum{};
  shared_ptr<string> reserverMinQpsNum{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> updateStatus{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeServerlessClusterResponseBody() {}

  explicit DescribeServerlessClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (cuSize) {
      res["CuSize"] = boost::any(*cuSize);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (haType) {
      res["HaType"] = boost::any(*haType);
    }
    if (hasUser) {
      res["HasUser"] = boost::any(*hasUser);
    }
    if (innerEndpoint) {
      res["InnerEndpoint"] = boost::any(*innerEndpoint);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (isDeletionProtection) {
      res["IsDeletionProtection"] = boost::any(*isDeletionProtection);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (mainVersion) {
      res["MainVersion"] = boost::any(*mainVersion);
    }
    if (outerEndpoint) {
      res["OuterEndpoint"] = boost::any(*outerEndpoint);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (reserverMaxQpsNum) {
      res["ReserverMaxQpsNum"] = boost::any(*reserverMaxQpsNum);
    }
    if (reserverMinQpsNum) {
      res["ReserverMinQpsNum"] = boost::any(*reserverMinQpsNum);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateStatus) {
      res["UpdateStatus"] = boost::any(*updateStatus);
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
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CuSize") != m.end() && !m["CuSize"].empty()) {
      cuSize = make_shared<string>(boost::any_cast<string>(m["CuSize"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<string>(boost::any_cast<string>(m["DiskSize"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("HaType") != m.end() && !m["HaType"].empty()) {
      haType = make_shared<string>(boost::any_cast<string>(m["HaType"]));
    }
    if (m.find("HasUser") != m.end() && !m["HasUser"].empty()) {
      hasUser = make_shared<string>(boost::any_cast<string>(m["HasUser"]));
    }
    if (m.find("InnerEndpoint") != m.end() && !m["InnerEndpoint"].empty()) {
      innerEndpoint = make_shared<string>(boost::any_cast<string>(m["InnerEndpoint"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("IsDeletionProtection") != m.end() && !m["IsDeletionProtection"].empty()) {
      isDeletionProtection = make_shared<string>(boost::any_cast<string>(m["IsDeletionProtection"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("MainVersion") != m.end() && !m["MainVersion"].empty()) {
      mainVersion = make_shared<string>(boost::any_cast<string>(m["MainVersion"]));
    }
    if (m.find("OuterEndpoint") != m.end() && !m["OuterEndpoint"].empty()) {
      outerEndpoint = make_shared<string>(boost::any_cast<string>(m["OuterEndpoint"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ReserverMaxQpsNum") != m.end() && !m["ReserverMaxQpsNum"].empty()) {
      reserverMaxQpsNum = make_shared<string>(boost::any_cast<string>(m["ReserverMaxQpsNum"]));
    }
    if (m.find("ReserverMinQpsNum") != m.end() && !m["ReserverMinQpsNum"].empty()) {
      reserverMinQpsNum = make_shared<string>(boost::any_cast<string>(m["ReserverMinQpsNum"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateStatus") != m.end() && !m["UpdateStatus"].empty()) {
      updateStatus = make_shared<string>(boost::any_cast<string>(m["UpdateStatus"]));
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


  virtual ~DescribeServerlessClusterResponseBody() = default;
};
class DescribeServerlessClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeServerlessClusterResponseBody> body{};

  DescribeServerlessClusterResponse() {}

  explicit DescribeServerlessClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServerlessClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServerlessClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServerlessClusterResponse() = default;
};
class DescribeSubDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DescribeSubDomainRequest() {}

  explicit DescribeSubDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeSubDomainRequest() = default;
};
class DescribeSubDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> subDomain{};

  DescribeSubDomainResponseBody() {}

  explicit DescribeSubDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subDomain) {
      res["SubDomain"] = boost::any(*subDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubDomain") != m.end() && !m["SubDomain"].empty()) {
      subDomain = make_shared<string>(boost::any_cast<string>(m["SubDomain"]));
    }
  }


  virtual ~DescribeSubDomainResponseBody() = default;
};
class DescribeSubDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSubDomainResponseBody> body{};

  DescribeSubDomainResponse() {}

  explicit DescribeSubDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSubDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSubDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSubDomainResponse() = default;
};
class EnableHBaseueBackupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<long> coldStorageSize{};
  shared_ptr<string> hbaseueClusterId{};
  shared_ptr<long> nodeCount{};

  EnableHBaseueBackupRequest() {}

  explicit EnableHBaseueBackupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (coldStorageSize) {
      res["ColdStorageSize"] = boost::any(*coldStorageSize);
    }
    if (hbaseueClusterId) {
      res["HbaseueClusterId"] = boost::any(*hbaseueClusterId);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ColdStorageSize") != m.end() && !m["ColdStorageSize"].empty()) {
      coldStorageSize = make_shared<long>(boost::any_cast<long>(m["ColdStorageSize"]));
    }
    if (m.find("HbaseueClusterId") != m.end() && !m["HbaseueClusterId"].empty()) {
      hbaseueClusterId = make_shared<string>(boost::any_cast<string>(m["HbaseueClusterId"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
  }


  virtual ~EnableHBaseueBackupRequest() = default;
};
class EnableHBaseueBackupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  EnableHBaseueBackupResponseBody() {}

  explicit EnableHBaseueBackupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnableHBaseueBackupResponseBody() = default;
};
class EnableHBaseueBackupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableHBaseueBackupResponseBody> body{};

  EnableHBaseueBackupResponse() {}

  explicit EnableHBaseueBackupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableHBaseueBackupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableHBaseueBackupResponseBody>(model1);
      }
    }
  }


  virtual ~EnableHBaseueBackupResponse() = default;
};
class EnableHBaseueModuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<string> bdsId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> coreInstanceType{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};
  shared_ptr<string> hbaseueClusterId{};
  shared_ptr<string> masterInstanceType{};
  shared_ptr<string> moduleClusterName{};
  shared_ptr<string> moduleTypeName{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> payType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  EnableHBaseueModuleRequest() {}

  explicit EnableHBaseueModuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenewPeriod) {
      res["AutoRenewPeriod"] = boost::any(*autoRenewPeriod);
    }
    if (bdsId) {
      res["BdsId"] = boost::any(*bdsId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (coreInstanceType) {
      res["CoreInstanceType"] = boost::any(*coreInstanceType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (hbaseueClusterId) {
      res["HbaseueClusterId"] = boost::any(*hbaseueClusterId);
    }
    if (masterInstanceType) {
      res["MasterInstanceType"] = boost::any(*masterInstanceType);
    }
    if (moduleClusterName) {
      res["ModuleClusterName"] = boost::any(*moduleClusterName);
    }
    if (moduleTypeName) {
      res["ModuleTypeName"] = boost::any(*moduleTypeName);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenewPeriod") != m.end() && !m["AutoRenewPeriod"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["AutoRenewPeriod"]));
    }
    if (m.find("BdsId") != m.end() && !m["BdsId"].empty()) {
      bdsId = make_shared<string>(boost::any_cast<string>(m["BdsId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CoreInstanceType") != m.end() && !m["CoreInstanceType"].empty()) {
      coreInstanceType = make_shared<string>(boost::any_cast<string>(m["CoreInstanceType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("HbaseueClusterId") != m.end() && !m["HbaseueClusterId"].empty()) {
      hbaseueClusterId = make_shared<string>(boost::any_cast<string>(m["HbaseueClusterId"]));
    }
    if (m.find("MasterInstanceType") != m.end() && !m["MasterInstanceType"].empty()) {
      masterInstanceType = make_shared<string>(boost::any_cast<string>(m["MasterInstanceType"]));
    }
    if (m.find("ModuleClusterName") != m.end() && !m["ModuleClusterName"].empty()) {
      moduleClusterName = make_shared<string>(boost::any_cast<string>(m["ModuleClusterName"]));
    }
    if (m.find("ModuleTypeName") != m.end() && !m["ModuleTypeName"].empty()) {
      moduleTypeName = make_shared<string>(boost::any_cast<string>(m["ModuleTypeName"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~EnableHBaseueModuleRequest() = default;
};
class EnableHBaseueModuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  EnableHBaseueModuleResponseBody() {}

  explicit EnableHBaseueModuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnableHBaseueModuleResponseBody() = default;
};
class EnableHBaseueModuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableHBaseueModuleResponseBody> body{};

  EnableHBaseueModuleResponse() {}

  explicit EnableHBaseueModuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableHBaseueModuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableHBaseueModuleResponseBody>(model1);
      }
    }
  }


  virtual ~EnableHBaseueModuleResponse() = default;
};
class EvaluateMultiZoneResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> arbiterVSwitchId{};
  shared_ptr<string> arbiterZoneId{};
  shared_ptr<string> archVersion{};
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterName{};
  shared_ptr<long> coreDiskSize{};
  shared_ptr<string> coreDiskType{};
  shared_ptr<string> coreInstanceType{};
  shared_ptr<long> coreNodeCount{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<long> logDiskSize{};
  shared_ptr<string> logDiskType{};
  shared_ptr<string> logInstanceType{};
  shared_ptr<long> logNodeCount{};
  shared_ptr<string> masterInstanceType{};
  shared_ptr<string> multiZoneCombination{};
  shared_ptr<string> payType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> primaryVSwitchId{};
  shared_ptr<string> primaryZoneId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> standbyVSwitchId{};
  shared_ptr<string> standbyZoneId{};
  shared_ptr<string> vpcId{};

  EvaluateMultiZoneResourceRequest() {}

  explicit EvaluateMultiZoneResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arbiterVSwitchId) {
      res["ArbiterVSwitchId"] = boost::any(*arbiterVSwitchId);
    }
    if (arbiterZoneId) {
      res["ArbiterZoneId"] = boost::any(*arbiterZoneId);
    }
    if (archVersion) {
      res["ArchVersion"] = boost::any(*archVersion);
    }
    if (autoRenewPeriod) {
      res["AutoRenewPeriod"] = boost::any(*autoRenewPeriod);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (coreDiskSize) {
      res["CoreDiskSize"] = boost::any(*coreDiskSize);
    }
    if (coreDiskType) {
      res["CoreDiskType"] = boost::any(*coreDiskType);
    }
    if (coreInstanceType) {
      res["CoreInstanceType"] = boost::any(*coreInstanceType);
    }
    if (coreNodeCount) {
      res["CoreNodeCount"] = boost::any(*coreNodeCount);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (logDiskSize) {
      res["LogDiskSize"] = boost::any(*logDiskSize);
    }
    if (logDiskType) {
      res["LogDiskType"] = boost::any(*logDiskType);
    }
    if (logInstanceType) {
      res["LogInstanceType"] = boost::any(*logInstanceType);
    }
    if (logNodeCount) {
      res["LogNodeCount"] = boost::any(*logNodeCount);
    }
    if (masterInstanceType) {
      res["MasterInstanceType"] = boost::any(*masterInstanceType);
    }
    if (multiZoneCombination) {
      res["MultiZoneCombination"] = boost::any(*multiZoneCombination);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (primaryVSwitchId) {
      res["PrimaryVSwitchId"] = boost::any(*primaryVSwitchId);
    }
    if (primaryZoneId) {
      res["PrimaryZoneId"] = boost::any(*primaryZoneId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (standbyVSwitchId) {
      res["StandbyVSwitchId"] = boost::any(*standbyVSwitchId);
    }
    if (standbyZoneId) {
      res["StandbyZoneId"] = boost::any(*standbyZoneId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArbiterVSwitchId") != m.end() && !m["ArbiterVSwitchId"].empty()) {
      arbiterVSwitchId = make_shared<string>(boost::any_cast<string>(m["ArbiterVSwitchId"]));
    }
    if (m.find("ArbiterZoneId") != m.end() && !m["ArbiterZoneId"].empty()) {
      arbiterZoneId = make_shared<string>(boost::any_cast<string>(m["ArbiterZoneId"]));
    }
    if (m.find("ArchVersion") != m.end() && !m["ArchVersion"].empty()) {
      archVersion = make_shared<string>(boost::any_cast<string>(m["ArchVersion"]));
    }
    if (m.find("AutoRenewPeriod") != m.end() && !m["AutoRenewPeriod"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["AutoRenewPeriod"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("CoreDiskSize") != m.end() && !m["CoreDiskSize"].empty()) {
      coreDiskSize = make_shared<long>(boost::any_cast<long>(m["CoreDiskSize"]));
    }
    if (m.find("CoreDiskType") != m.end() && !m["CoreDiskType"].empty()) {
      coreDiskType = make_shared<string>(boost::any_cast<string>(m["CoreDiskType"]));
    }
    if (m.find("CoreInstanceType") != m.end() && !m["CoreInstanceType"].empty()) {
      coreInstanceType = make_shared<string>(boost::any_cast<string>(m["CoreInstanceType"]));
    }
    if (m.find("CoreNodeCount") != m.end() && !m["CoreNodeCount"].empty()) {
      coreNodeCount = make_shared<long>(boost::any_cast<long>(m["CoreNodeCount"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("LogDiskSize") != m.end() && !m["LogDiskSize"].empty()) {
      logDiskSize = make_shared<long>(boost::any_cast<long>(m["LogDiskSize"]));
    }
    if (m.find("LogDiskType") != m.end() && !m["LogDiskType"].empty()) {
      logDiskType = make_shared<string>(boost::any_cast<string>(m["LogDiskType"]));
    }
    if (m.find("LogInstanceType") != m.end() && !m["LogInstanceType"].empty()) {
      logInstanceType = make_shared<string>(boost::any_cast<string>(m["LogInstanceType"]));
    }
    if (m.find("LogNodeCount") != m.end() && !m["LogNodeCount"].empty()) {
      logNodeCount = make_shared<long>(boost::any_cast<long>(m["LogNodeCount"]));
    }
    if (m.find("MasterInstanceType") != m.end() && !m["MasterInstanceType"].empty()) {
      masterInstanceType = make_shared<string>(boost::any_cast<string>(m["MasterInstanceType"]));
    }
    if (m.find("MultiZoneCombination") != m.end() && !m["MultiZoneCombination"].empty()) {
      multiZoneCombination = make_shared<string>(boost::any_cast<string>(m["MultiZoneCombination"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PrimaryVSwitchId") != m.end() && !m["PrimaryVSwitchId"].empty()) {
      primaryVSwitchId = make_shared<string>(boost::any_cast<string>(m["PrimaryVSwitchId"]));
    }
    if (m.find("PrimaryZoneId") != m.end() && !m["PrimaryZoneId"].empty()) {
      primaryZoneId = make_shared<string>(boost::any_cast<string>(m["PrimaryZoneId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("StandbyVSwitchId") != m.end() && !m["StandbyVSwitchId"].empty()) {
      standbyVSwitchId = make_shared<string>(boost::any_cast<string>(m["StandbyVSwitchId"]));
    }
    if (m.find("StandbyZoneId") != m.end() && !m["StandbyZoneId"].empty()) {
      standbyZoneId = make_shared<string>(boost::any_cast<string>(m["StandbyZoneId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~EvaluateMultiZoneResourceRequest() = default;
};
class EvaluateMultiZoneResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EvaluateMultiZoneResourceResponseBody() {}

  explicit EvaluateMultiZoneResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EvaluateMultiZoneResourceResponseBody() = default;
};
class EvaluateMultiZoneResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EvaluateMultiZoneResourceResponseBody> body{};

  EvaluateMultiZoneResourceResponse() {}

  explicit EvaluateMultiZoneResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EvaluateMultiZoneResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EvaluateMultiZoneResourceResponseBody>(model1);
      }
    }
  }


  virtual ~EvaluateMultiZoneResourceResponse() = default;
};
class GetMultimodeCmsUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> regionId{};

  GetMultimodeCmsUrlRequest() {}

  explicit GetMultimodeCmsUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetMultimodeCmsUrlRequest() = default;
};
class GetMultimodeCmsUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> multimodCmsUrl{};
  shared_ptr<string> requestId{};

  GetMultimodeCmsUrlResponseBody() {}

  explicit GetMultimodeCmsUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (multimodCmsUrl) {
      res["MultimodCmsUrl"] = boost::any(*multimodCmsUrl);
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
    if (m.find("MultimodCmsUrl") != m.end() && !m["MultimodCmsUrl"].empty()) {
      multimodCmsUrl = make_shared<string>(boost::any_cast<string>(m["MultimodCmsUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMultimodeCmsUrlResponseBody() = default;
};
class GetMultimodeCmsUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMultimodeCmsUrlResponseBody> body{};

  GetMultimodeCmsUrlResponse() {}

  explicit GetMultimodeCmsUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMultimodeCmsUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMultimodeCmsUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetMultimodeCmsUrlResponse() = default;
};
class ListHBaseInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};

  ListHBaseInstancesRequest() {}

  explicit ListHBaseInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListHBaseInstancesRequest() = default;
};
class ListHBaseInstancesResponseBodyInstancesInstance : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<bool> isDefault{};

  ListHBaseInstancesResponseBodyInstancesInstance() {}

  explicit ListHBaseInstancesResponseBodyInstancesInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
  }


  virtual ~ListHBaseInstancesResponseBodyInstancesInstance() = default;
};
class ListHBaseInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<vector<ListHBaseInstancesResponseBodyInstancesInstance>> instance{};

  ListHBaseInstancesResponseBodyInstances() {}

  explicit ListHBaseInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<ListHBaseInstancesResponseBodyInstancesInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHBaseInstancesResponseBodyInstancesInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<ListHBaseInstancesResponseBodyInstancesInstance>>(expect1);
      }
    }
  }


  virtual ~ListHBaseInstancesResponseBodyInstances() = default;
};
class ListHBaseInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListHBaseInstancesResponseBodyInstances> instances{};
  shared_ptr<string> requestId{};

  ListHBaseInstancesResponseBody() {}

  explicit ListHBaseInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      res["Instances"] = instances ? boost::any(instances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instances"].type()) {
        ListHBaseInstancesResponseBodyInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instances"]));
        instances = make_shared<ListHBaseInstancesResponseBodyInstances>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListHBaseInstancesResponseBody() = default;
};
class ListHBaseInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHBaseInstancesResponseBody> body{};

  ListHBaseInstancesResponse() {}

  explicit ListHBaseInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHBaseInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHBaseInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListHBaseInstancesResponse() = default;
};
class ListInstanceServiceConfigHistoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListInstanceServiceConfigHistoriesRequest() {}

  explicit ListInstanceServiceConfigHistoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListInstanceServiceConfigHistoriesRequest() = default;
};
class ListInstanceServiceConfigHistoriesResponseBodyConfigureHistoryListConfig : public Darabonba::Model {
public:
  shared_ptr<string> configureName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> effective{};
  shared_ptr<string> newValue{};
  shared_ptr<string> oldValue{};

  ListInstanceServiceConfigHistoriesResponseBodyConfigureHistoryListConfig() {}

  explicit ListInstanceServiceConfigHistoriesResponseBodyConfigureHistoryListConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configureName) {
      res["ConfigureName"] = boost::any(*configureName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (effective) {
      res["Effective"] = boost::any(*effective);
    }
    if (newValue) {
      res["NewValue"] = boost::any(*newValue);
    }
    if (oldValue) {
      res["OldValue"] = boost::any(*oldValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigureName") != m.end() && !m["ConfigureName"].empty()) {
      configureName = make_shared<string>(boost::any_cast<string>(m["ConfigureName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Effective") != m.end() && !m["Effective"].empty()) {
      effective = make_shared<string>(boost::any_cast<string>(m["Effective"]));
    }
    if (m.find("NewValue") != m.end() && !m["NewValue"].empty()) {
      newValue = make_shared<string>(boost::any_cast<string>(m["NewValue"]));
    }
    if (m.find("OldValue") != m.end() && !m["OldValue"].empty()) {
      oldValue = make_shared<string>(boost::any_cast<string>(m["OldValue"]));
    }
  }


  virtual ~ListInstanceServiceConfigHistoriesResponseBodyConfigureHistoryListConfig() = default;
};
class ListInstanceServiceConfigHistoriesResponseBodyConfigureHistoryList : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstanceServiceConfigHistoriesResponseBodyConfigureHistoryListConfig>> config{};

  ListInstanceServiceConfigHistoriesResponseBodyConfigureHistoryList() {}

  explicit ListInstanceServiceConfigHistoriesResponseBodyConfigureHistoryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      vector<boost::any> temp1;
      for(auto item1:*config){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Config"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      if (typeid(vector<boost::any>) == m["Config"].type()) {
        vector<ListInstanceServiceConfigHistoriesResponseBodyConfigureHistoryListConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Config"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceServiceConfigHistoriesResponseBodyConfigureHistoryListConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        config = make_shared<vector<ListInstanceServiceConfigHistoriesResponseBodyConfigureHistoryListConfig>>(expect1);
      }
    }
  }


  virtual ~ListInstanceServiceConfigHistoriesResponseBodyConfigureHistoryList() = default;
};
class ListInstanceServiceConfigHistoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListInstanceServiceConfigHistoriesResponseBodyConfigureHistoryList> configureHistoryList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  ListInstanceServiceConfigHistoriesResponseBody() {}

  explicit ListInstanceServiceConfigHistoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configureHistoryList) {
      res["ConfigureHistoryList"] = configureHistoryList ? boost::any(configureHistoryList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigureHistoryList") != m.end() && !m["ConfigureHistoryList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigureHistoryList"].type()) {
        ListInstanceServiceConfigHistoriesResponseBodyConfigureHistoryList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigureHistoryList"]));
        configureHistoryList = make_shared<ListInstanceServiceConfigHistoriesResponseBodyConfigureHistoryList>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~ListInstanceServiceConfigHistoriesResponseBody() = default;
};
class ListInstanceServiceConfigHistoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListInstanceServiceConfigHistoriesResponseBody> body{};

  ListInstanceServiceConfigHistoriesResponse() {}

  explicit ListInstanceServiceConfigHistoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListInstanceServiceConfigHistoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceServiceConfigHistoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceServiceConfigHistoriesResponse() = default;
};
class ListInstanceServiceConfigurationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListInstanceServiceConfigurationsRequest() {}

  explicit ListInstanceServiceConfigurationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListInstanceServiceConfigurationsRequest() = default;
};
class ListInstanceServiceConfigurationsResponseBodyConfigureListConfig : public Darabonba::Model {
public:
  shared_ptr<string> configureName{};
  shared_ptr<string> configureUnit{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> description{};
  shared_ptr<string> needRestart{};
  shared_ptr<string> runningValue{};
  shared_ptr<string> valueRange{};

  ListInstanceServiceConfigurationsResponseBodyConfigureListConfig() {}

  explicit ListInstanceServiceConfigurationsResponseBodyConfigureListConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configureName) {
      res["ConfigureName"] = boost::any(*configureName);
    }
    if (configureUnit) {
      res["ConfigureUnit"] = boost::any(*configureUnit);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (needRestart) {
      res["NeedRestart"] = boost::any(*needRestart);
    }
    if (runningValue) {
      res["RunningValue"] = boost::any(*runningValue);
    }
    if (valueRange) {
      res["ValueRange"] = boost::any(*valueRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigureName") != m.end() && !m["ConfigureName"].empty()) {
      configureName = make_shared<string>(boost::any_cast<string>(m["ConfigureName"]));
    }
    if (m.find("ConfigureUnit") != m.end() && !m["ConfigureUnit"].empty()) {
      configureUnit = make_shared<string>(boost::any_cast<string>(m["ConfigureUnit"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NeedRestart") != m.end() && !m["NeedRestart"].empty()) {
      needRestart = make_shared<string>(boost::any_cast<string>(m["NeedRestart"]));
    }
    if (m.find("RunningValue") != m.end() && !m["RunningValue"].empty()) {
      runningValue = make_shared<string>(boost::any_cast<string>(m["RunningValue"]));
    }
    if (m.find("ValueRange") != m.end() && !m["ValueRange"].empty()) {
      valueRange = make_shared<string>(boost::any_cast<string>(m["ValueRange"]));
    }
  }


  virtual ~ListInstanceServiceConfigurationsResponseBodyConfigureListConfig() = default;
};
class ListInstanceServiceConfigurationsResponseBodyConfigureList : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstanceServiceConfigurationsResponseBodyConfigureListConfig>> config{};

  ListInstanceServiceConfigurationsResponseBodyConfigureList() {}

  explicit ListInstanceServiceConfigurationsResponseBodyConfigureList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      vector<boost::any> temp1;
      for(auto item1:*config){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Config"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      if (typeid(vector<boost::any>) == m["Config"].type()) {
        vector<ListInstanceServiceConfigurationsResponseBodyConfigureListConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Config"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceServiceConfigurationsResponseBodyConfigureListConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        config = make_shared<vector<ListInstanceServiceConfigurationsResponseBodyConfigureListConfig>>(expect1);
      }
    }
  }


  virtual ~ListInstanceServiceConfigurationsResponseBodyConfigureList() = default;
};
class ListInstanceServiceConfigurationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListInstanceServiceConfigurationsResponseBodyConfigureList> configureList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  ListInstanceServiceConfigurationsResponseBody() {}

  explicit ListInstanceServiceConfigurationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configureList) {
      res["ConfigureList"] = configureList ? boost::any(configureList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigureList") != m.end() && !m["ConfigureList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigureList"].type()) {
        ListInstanceServiceConfigurationsResponseBodyConfigureList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigureList"]));
        configureList = make_shared<ListInstanceServiceConfigurationsResponseBodyConfigureList>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~ListInstanceServiceConfigurationsResponseBody() = default;
};
class ListInstanceServiceConfigurationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListInstanceServiceConfigurationsResponseBody> body{};

  ListInstanceServiceConfigurationsResponse() {}

  explicit ListInstanceServiceConfigurationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListInstanceServiceConfigurationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceServiceConfigurationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceServiceConfigurationsResponse() = default;
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
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class ListTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListTagsRequest() {}

  explicit ListTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagsRequest() = default;
};
class ListTagsResponseBodyTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagsResponseBodyTagsTag() {}

  explicit ListTagsResponseBodyTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagsResponseBodyTagsTag() = default;
};
class ListTagsResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagsResponseBodyTagsTag>> tag{};

  ListTagsResponseBodyTags() {}

  explicit ListTagsResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListTagsResponseBodyTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagsResponseBodyTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagsResponseBodyTagsTag>>(expect1);
      }
    }
  }


  virtual ~ListTagsResponseBodyTags() = default;
};
class ListTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListTagsResponseBodyTags> tags{};

  ListTagsResponseBody() {}

  explicit ListTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        ListTagsResponseBodyTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<ListTagsResponseBodyTags>(model1);
      }
    }
  }


  virtual ~ListTagsResponseBody() = default;
};
class ListTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagsResponseBody> body{};

  ListTagsResponse() {}

  explicit ListTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagsResponse() = default;
};
class ModifyActiveOperationTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<long> immediateStart{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> switchTime{};

  ModifyActiveOperationTasksRequest() {}

  explicit ModifyActiveOperationTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (immediateStart) {
      res["ImmediateStart"] = boost::any(*immediateStart);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("ImmediateStart") != m.end() && !m["ImmediateStart"].empty()) {
      immediateStart = make_shared<long>(boost::any_cast<long>(m["ImmediateStart"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
  }


  virtual ~ModifyActiveOperationTasksRequest() = default;
};
class ModifyActiveOperationTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<string> requestId{};

  ModifyActiveOperationTasksResponseBody() {}

  explicit ModifyActiveOperationTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyActiveOperationTasksResponseBody() = default;
};
class ModifyActiveOperationTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyActiveOperationTasksResponseBody> body{};

  ModifyActiveOperationTasksResponse() {}

  explicit ModifyActiveOperationTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyActiveOperationTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyActiveOperationTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyActiveOperationTasksResponse() = default;
};
class ModifyBackupPlanConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> fullBackupCycle{};
  shared_ptr<string> minHFileBackupCount{};
  shared_ptr<string> nextFullBackupDate{};
  shared_ptr<string> tables{};

  ModifyBackupPlanConfigRequest() {}

  explicit ModifyBackupPlanConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (fullBackupCycle) {
      res["FullBackupCycle"] = boost::any(*fullBackupCycle);
    }
    if (minHFileBackupCount) {
      res["MinHFileBackupCount"] = boost::any(*minHFileBackupCount);
    }
    if (nextFullBackupDate) {
      res["NextFullBackupDate"] = boost::any(*nextFullBackupDate);
    }
    if (tables) {
      res["Tables"] = boost::any(*tables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("FullBackupCycle") != m.end() && !m["FullBackupCycle"].empty()) {
      fullBackupCycle = make_shared<string>(boost::any_cast<string>(m["FullBackupCycle"]));
    }
    if (m.find("MinHFileBackupCount") != m.end() && !m["MinHFileBackupCount"].empty()) {
      minHFileBackupCount = make_shared<string>(boost::any_cast<string>(m["MinHFileBackupCount"]));
    }
    if (m.find("NextFullBackupDate") != m.end() && !m["NextFullBackupDate"].empty()) {
      nextFullBackupDate = make_shared<string>(boost::any_cast<string>(m["NextFullBackupDate"]));
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      tables = make_shared<string>(boost::any_cast<string>(m["Tables"]));
    }
  }


  virtual ~ModifyBackupPlanConfigRequest() = default;
};
class ModifyBackupPlanConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyBackupPlanConfigResponseBody() {}

  explicit ModifyBackupPlanConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyBackupPlanConfigResponseBody() = default;
};
class ModifyBackupPlanConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyBackupPlanConfigResponseBody> body{};

  ModifyBackupPlanConfigResponse() {}

  explicit ModifyBackupPlanConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyBackupPlanConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBackupPlanConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBackupPlanConfigResponse() = default;
};
class ModifyBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> preferredBackupEndTimeUTC{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredBackupStartTimeUTC{};
  shared_ptr<string> preferredBackupTime{};

  ModifyBackupPolicyRequest() {}

  explicit ModifyBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (preferredBackupEndTimeUTC) {
      res["PreferredBackupEndTimeUTC"] = boost::any(*preferredBackupEndTimeUTC);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredBackupStartTimeUTC) {
      res["PreferredBackupStartTimeUTC"] = boost::any(*preferredBackupStartTimeUTC);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PreferredBackupEndTimeUTC") != m.end() && !m["PreferredBackupEndTimeUTC"].empty()) {
      preferredBackupEndTimeUTC = make_shared<string>(boost::any_cast<string>(m["PreferredBackupEndTimeUTC"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredBackupStartTimeUTC") != m.end() && !m["PreferredBackupStartTimeUTC"].empty()) {
      preferredBackupStartTimeUTC = make_shared<string>(boost::any_cast<string>(m["PreferredBackupStartTimeUTC"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
  }


  virtual ~ModifyBackupPolicyRequest() = default;
};
class ModifyBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyBackupPolicyResponseBody() {}

  explicit ModifyBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyBackupPolicyResponseBody() = default;
};
class ModifyBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyBackupPolicyResponseBody> body{};

  ModifyBackupPolicyResponse() {}

  explicit ModifyBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBackupPolicyResponse() = default;
};
class ModifyClusterDeletionProtectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> protection{};

  ModifyClusterDeletionProtectionRequest() {}

  explicit ModifyClusterDeletionProtectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (protection) {
      res["Protection"] = boost::any(*protection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Protection") != m.end() && !m["Protection"].empty()) {
      protection = make_shared<bool>(boost::any_cast<bool>(m["Protection"]));
    }
  }


  virtual ~ModifyClusterDeletionProtectionRequest() = default;
};
class ModifyClusterDeletionProtectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyClusterDeletionProtectionResponseBody() {}

  explicit ModifyClusterDeletionProtectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyClusterDeletionProtectionResponseBody() = default;
};
class ModifyClusterDeletionProtectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyClusterDeletionProtectionResponseBody> body{};

  ModifyClusterDeletionProtectionResponse() {}

  explicit ModifyClusterDeletionProtectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyClusterDeletionProtectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterDeletionProtectionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterDeletionProtectionResponse() = default;
};
class ModifyDiskWarningLineRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> warningLine{};

  ModifyDiskWarningLineRequest() {}

  explicit ModifyDiskWarningLineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (warningLine) {
      res["WarningLine"] = boost::any(*warningLine);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("WarningLine") != m.end() && !m["WarningLine"].empty()) {
      warningLine = make_shared<long>(boost::any_cast<long>(m["WarningLine"]));
    }
  }


  virtual ~ModifyDiskWarningLineRequest() = default;
};
class ModifyDiskWarningLineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDiskWarningLineResponseBody() {}

  explicit ModifyDiskWarningLineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDiskWarningLineResponseBody() = default;
};
class ModifyDiskWarningLineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDiskWarningLineResponseBody> body{};

  ModifyDiskWarningLineResponse() {}

  explicit ModifyDiskWarningLineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDiskWarningLineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDiskWarningLineResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDiskWarningLineResponse() = default;
};
class ModifyInstanceMaintainTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};

  ModifyInstanceMaintainTimeRequest() {}

  explicit ModifyInstanceMaintainTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
  }


  virtual ~ModifyInstanceMaintainTimeRequest() = default;
};
class ModifyInstanceMaintainTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceMaintainTimeResponseBody() {}

  explicit ModifyInstanceMaintainTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceMaintainTimeResponseBody() = default;
};
class ModifyInstanceMaintainTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceMaintainTimeResponseBody> body{};

  ModifyInstanceMaintainTimeResponse() {}

  explicit ModifyInstanceMaintainTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyInstanceMaintainTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceMaintainTimeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceMaintainTimeResponse() = default;
};
class ModifyInstanceNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  ModifyInstanceNameRequest() {}

  explicit ModifyInstanceNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ModifyInstanceNameRequest() = default;
};
class ModifyInstanceNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceNameResponseBody() {}

  explicit ModifyInstanceNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceNameResponseBody() = default;
};
class ModifyInstanceNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceNameResponseBody> body{};

  ModifyInstanceNameResponse() {}

  explicit ModifyInstanceNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyInstanceNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceNameResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceNameResponse() = default;
};
class ModifyInstanceServiceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> configureName{};
  shared_ptr<string> configureValue{};
  shared_ptr<string> parameters{};
  shared_ptr<bool> restart{};

  ModifyInstanceServiceConfigRequest() {}

  explicit ModifyInstanceServiceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (configureName) {
      res["ConfigureName"] = boost::any(*configureName);
    }
    if (configureValue) {
      res["ConfigureValue"] = boost::any(*configureValue);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (restart) {
      res["Restart"] = boost::any(*restart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ConfigureName") != m.end() && !m["ConfigureName"].empty()) {
      configureName = make_shared<string>(boost::any_cast<string>(m["ConfigureName"]));
    }
    if (m.find("ConfigureValue") != m.end() && !m["ConfigureValue"].empty()) {
      configureValue = make_shared<string>(boost::any_cast<string>(m["ConfigureValue"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Restart") != m.end() && !m["Restart"].empty()) {
      restart = make_shared<bool>(boost::any_cast<bool>(m["Restart"]));
    }
  }


  virtual ~ModifyInstanceServiceConfigRequest() = default;
};
class ModifyInstanceServiceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceServiceConfigResponseBody() {}

  explicit ModifyInstanceServiceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceServiceConfigResponseBody() = default;
};
class ModifyInstanceServiceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceServiceConfigResponseBody> body{};

  ModifyInstanceServiceConfigResponse() {}

  explicit ModifyInstanceServiceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyInstanceServiceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceServiceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceServiceConfigResponse() = default;
};
class ModifyInstanceTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> coreInstanceType{};
  shared_ptr<string> masterInstanceType{};

  ModifyInstanceTypeRequest() {}

  explicit ModifyInstanceTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (coreInstanceType) {
      res["CoreInstanceType"] = boost::any(*coreInstanceType);
    }
    if (masterInstanceType) {
      res["MasterInstanceType"] = boost::any(*masterInstanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CoreInstanceType") != m.end() && !m["CoreInstanceType"].empty()) {
      coreInstanceType = make_shared<string>(boost::any_cast<string>(m["CoreInstanceType"]));
    }
    if (m.find("MasterInstanceType") != m.end() && !m["MasterInstanceType"].empty()) {
      masterInstanceType = make_shared<string>(boost::any_cast<string>(m["MasterInstanceType"]));
    }
  }


  virtual ~ModifyInstanceTypeRequest() = default;
};
class ModifyInstanceTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ModifyInstanceTypeResponseBody() {}

  explicit ModifyInstanceTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceTypeResponseBody() = default;
};
class ModifyInstanceTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceTypeResponseBody> body{};

  ModifyInstanceTypeResponse() {}

  explicit ModifyInstanceTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyInstanceTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceTypeResponse() = default;
};
class ModifyIpWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> ipList{};
  shared_ptr<string> ipVersion{};

  ModifyIpWhitelistRequest() {}

  explicit ModifyIpWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (ipList) {
      res["IpList"] = boost::any(*ipList);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("IpList") != m.end() && !m["IpList"].empty()) {
      ipList = make_shared<string>(boost::any_cast<string>(m["IpList"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
  }


  virtual ~ModifyIpWhitelistRequest() = default;
};
class ModifyIpWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyIpWhitelistResponseBody() {}

  explicit ModifyIpWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyIpWhitelistResponseBody() = default;
};
class ModifyIpWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyIpWhitelistResponseBody> body{};

  ModifyIpWhitelistResponse() {}

  explicit ModifyIpWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyIpWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyIpWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyIpWhitelistResponse() = default;
};
class ModifyMultiZoneClusterNodeTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> coreInstanceType{};
  shared_ptr<string> logInstanceType{};
  shared_ptr<string> masterInstanceType{};

  ModifyMultiZoneClusterNodeTypeRequest() {}

  explicit ModifyMultiZoneClusterNodeTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (coreInstanceType) {
      res["CoreInstanceType"] = boost::any(*coreInstanceType);
    }
    if (logInstanceType) {
      res["LogInstanceType"] = boost::any(*logInstanceType);
    }
    if (masterInstanceType) {
      res["MasterInstanceType"] = boost::any(*masterInstanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CoreInstanceType") != m.end() && !m["CoreInstanceType"].empty()) {
      coreInstanceType = make_shared<string>(boost::any_cast<string>(m["CoreInstanceType"]));
    }
    if (m.find("LogInstanceType") != m.end() && !m["LogInstanceType"].empty()) {
      logInstanceType = make_shared<string>(boost::any_cast<string>(m["LogInstanceType"]));
    }
    if (m.find("MasterInstanceType") != m.end() && !m["MasterInstanceType"].empty()) {
      masterInstanceType = make_shared<string>(boost::any_cast<string>(m["MasterInstanceType"]));
    }
  }


  virtual ~ModifyMultiZoneClusterNodeTypeRequest() = default;
};
class ModifyMultiZoneClusterNodeTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ModifyMultiZoneClusterNodeTypeResponseBody() {}

  explicit ModifyMultiZoneClusterNodeTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyMultiZoneClusterNodeTypeResponseBody() = default;
};
class ModifyMultiZoneClusterNodeTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyMultiZoneClusterNodeTypeResponseBody> body{};

  ModifyMultiZoneClusterNodeTypeResponse() {}

  explicit ModifyMultiZoneClusterNodeTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyMultiZoneClusterNodeTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyMultiZoneClusterNodeTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyMultiZoneClusterNodeTypeResponse() = default;
};
class ModifySecurityGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> securityGroupIds{};

  ModifySecurityGroupsRequest() {}

  explicit ModifySecurityGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      securityGroupIds = make_shared<string>(boost::any_cast<string>(m["SecurityGroupIds"]));
    }
  }


  virtual ~ModifySecurityGroupsRequest() = default;
};
class ModifySecurityGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifySecurityGroupsResponseBody() {}

  explicit ModifySecurityGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifySecurityGroupsResponseBody() = default;
};
class ModifySecurityGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifySecurityGroupsResponseBody> body{};

  ModifySecurityGroupsResponse() {}

  explicit ModifySecurityGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifySecurityGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySecurityGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySecurityGroupsResponse() = default;
};
class ModifyUIAccountPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> clusterId{};

  ModifyUIAccountPasswordRequest() {}

  explicit ModifyUIAccountPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~ModifyUIAccountPasswordRequest() = default;
};
class ModifyUIAccountPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyUIAccountPasswordResponseBody() {}

  explicit ModifyUIAccountPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyUIAccountPasswordResponseBody() = default;
};
class ModifyUIAccountPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyUIAccountPasswordResponseBody> body{};

  ModifyUIAccountPasswordResponse() {}

  explicit ModifyUIAccountPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyUIAccountPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyUIAccountPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyUIAccountPasswordResponse() = default;
};
class MoveResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> newResourceGroupId{};

  MoveResourceGroupRequest() {}

  explicit MoveResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
  }


  virtual ~MoveResourceGroupRequest() = default;
};
class MoveResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MoveResourceGroupResponseBody() {}

  explicit MoveResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MoveResourceGroupResponseBody() = default;
};
class MoveResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MoveResourceGroupResponseBody> body{};

  MoveResourceGroupResponse() {}

  explicit MoveResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MoveResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~MoveResourceGroupResponse() = default;
};
class OpenBackupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  OpenBackupRequest() {}

  explicit OpenBackupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~OpenBackupRequest() = default;
};
class OpenBackupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OpenBackupResponseBody() {}

  explicit OpenBackupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenBackupResponseBody() = default;
};
class OpenBackupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OpenBackupResponseBody> body{};

  OpenBackupResponse() {}

  explicit OpenBackupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OpenBackupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenBackupResponseBody>(model1);
      }
    }
  }


  virtual ~OpenBackupResponse() = default;
};
class PurgeInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  PurgeInstanceRequest() {}

  explicit PurgeInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~PurgeInstanceRequest() = default;
};
class PurgeInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PurgeInstanceResponseBody() {}

  explicit PurgeInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PurgeInstanceResponseBody() = default;
};
class PurgeInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PurgeInstanceResponseBody> body{};

  PurgeInstanceResponse() {}

  explicit PurgeInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PurgeInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PurgeInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~PurgeInstanceResponse() = default;
};
class QueryHBaseHaDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> bdsId{};

  QueryHBaseHaDBRequest() {}

  explicit QueryHBaseHaDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bdsId) {
      res["BdsId"] = boost::any(*bdsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BdsId") != m.end() && !m["BdsId"].empty()) {
      bdsId = make_shared<string>(boost::any_cast<string>(m["BdsId"]));
    }
  }


  virtual ~QueryHBaseHaDBRequest() = default;
};
class QueryHBaseHaDBResponseBodyClusterListClusterHaSlbConnListHaSlbConn : public Darabonba::Model {
public:
  shared_ptr<string> hbaseType{};
  shared_ptr<string> slbConnAddr{};
  shared_ptr<string> slbType{};

  QueryHBaseHaDBResponseBodyClusterListClusterHaSlbConnListHaSlbConn() {}

  explicit QueryHBaseHaDBResponseBodyClusterListClusterHaSlbConnListHaSlbConn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hbaseType) {
      res["HbaseType"] = boost::any(*hbaseType);
    }
    if (slbConnAddr) {
      res["SlbConnAddr"] = boost::any(*slbConnAddr);
    }
    if (slbType) {
      res["SlbType"] = boost::any(*slbType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HbaseType") != m.end() && !m["HbaseType"].empty()) {
      hbaseType = make_shared<string>(boost::any_cast<string>(m["HbaseType"]));
    }
    if (m.find("SlbConnAddr") != m.end() && !m["SlbConnAddr"].empty()) {
      slbConnAddr = make_shared<string>(boost::any_cast<string>(m["SlbConnAddr"]));
    }
    if (m.find("SlbType") != m.end() && !m["SlbType"].empty()) {
      slbType = make_shared<string>(boost::any_cast<string>(m["SlbType"]));
    }
  }


  virtual ~QueryHBaseHaDBResponseBodyClusterListClusterHaSlbConnListHaSlbConn() = default;
};
class QueryHBaseHaDBResponseBodyClusterListClusterHaSlbConnList : public Darabonba::Model {
public:
  shared_ptr<vector<QueryHBaseHaDBResponseBodyClusterListClusterHaSlbConnListHaSlbConn>> haSlbConn{};

  QueryHBaseHaDBResponseBodyClusterListClusterHaSlbConnList() {}

  explicit QueryHBaseHaDBResponseBodyClusterListClusterHaSlbConnList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (haSlbConn) {
      vector<boost::any> temp1;
      for(auto item1:*haSlbConn){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HaSlbConn"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HaSlbConn") != m.end() && !m["HaSlbConn"].empty()) {
      if (typeid(vector<boost::any>) == m["HaSlbConn"].type()) {
        vector<QueryHBaseHaDBResponseBodyClusterListClusterHaSlbConnListHaSlbConn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HaSlbConn"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryHBaseHaDBResponseBodyClusterListClusterHaSlbConnListHaSlbConn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        haSlbConn = make_shared<vector<QueryHBaseHaDBResponseBodyClusterListClusterHaSlbConnListHaSlbConn>>(expect1);
      }
    }
  }


  virtual ~QueryHBaseHaDBResponseBodyClusterListClusterHaSlbConnList() = default;
};
class QueryHBaseHaDBResponseBodyClusterListCluster : public Darabonba::Model {
public:
  shared_ptr<string> activeName{};
  shared_ptr<string> bdsName{};
  shared_ptr<string> haName{};
  shared_ptr<QueryHBaseHaDBResponseBodyClusterListClusterHaSlbConnList> haSlbConnList{};
  shared_ptr<string> standbyName{};

  QueryHBaseHaDBResponseBodyClusterListCluster() {}

  explicit QueryHBaseHaDBResponseBodyClusterListCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeName) {
      res["ActiveName"] = boost::any(*activeName);
    }
    if (bdsName) {
      res["BdsName"] = boost::any(*bdsName);
    }
    if (haName) {
      res["HaName"] = boost::any(*haName);
    }
    if (haSlbConnList) {
      res["HaSlbConnList"] = haSlbConnList ? boost::any(haSlbConnList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (standbyName) {
      res["StandbyName"] = boost::any(*standbyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveName") != m.end() && !m["ActiveName"].empty()) {
      activeName = make_shared<string>(boost::any_cast<string>(m["ActiveName"]));
    }
    if (m.find("BdsName") != m.end() && !m["BdsName"].empty()) {
      bdsName = make_shared<string>(boost::any_cast<string>(m["BdsName"]));
    }
    if (m.find("HaName") != m.end() && !m["HaName"].empty()) {
      haName = make_shared<string>(boost::any_cast<string>(m["HaName"]));
    }
    if (m.find("HaSlbConnList") != m.end() && !m["HaSlbConnList"].empty()) {
      if (typeid(map<string, boost::any>) == m["HaSlbConnList"].type()) {
        QueryHBaseHaDBResponseBodyClusterListClusterHaSlbConnList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HaSlbConnList"]));
        haSlbConnList = make_shared<QueryHBaseHaDBResponseBodyClusterListClusterHaSlbConnList>(model1);
      }
    }
    if (m.find("StandbyName") != m.end() && !m["StandbyName"].empty()) {
      standbyName = make_shared<string>(boost::any_cast<string>(m["StandbyName"]));
    }
  }


  virtual ~QueryHBaseHaDBResponseBodyClusterListCluster() = default;
};
class QueryHBaseHaDBResponseBodyClusterList : public Darabonba::Model {
public:
  shared_ptr<vector<QueryHBaseHaDBResponseBodyClusterListCluster>> cluster{};

  QueryHBaseHaDBResponseBodyClusterList() {}

  explicit QueryHBaseHaDBResponseBodyClusterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      vector<boost::any> temp1;
      for(auto item1:*cluster){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cluster"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cluster") != m.end() && !m["Cluster"].empty()) {
      if (typeid(vector<boost::any>) == m["Cluster"].type()) {
        vector<QueryHBaseHaDBResponseBodyClusterListCluster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cluster"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryHBaseHaDBResponseBodyClusterListCluster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cluster = make_shared<vector<QueryHBaseHaDBResponseBodyClusterListCluster>>(expect1);
      }
    }
  }


  virtual ~QueryHBaseHaDBResponseBodyClusterList() = default;
};
class QueryHBaseHaDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryHBaseHaDBResponseBodyClusterList> clusterList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryHBaseHaDBResponseBody() {}

  explicit QueryHBaseHaDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterList) {
      res["ClusterList"] = clusterList ? boost::any(clusterList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ClusterList") != m.end() && !m["ClusterList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterList"].type()) {
        QueryHBaseHaDBResponseBodyClusterList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterList"]));
        clusterList = make_shared<QueryHBaseHaDBResponseBodyClusterList>(model1);
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


  virtual ~QueryHBaseHaDBResponseBody() = default;
};
class QueryHBaseHaDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryHBaseHaDBResponseBody> body{};

  QueryHBaseHaDBResponse() {}

  explicit QueryHBaseHaDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryHBaseHaDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryHBaseHaDBResponseBody>(model1);
      }
    }
  }


  virtual ~QueryHBaseHaDBResponse() = default;
};
class QueryXpackRelateDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> hasSingleNode{};
  shared_ptr<string> relateDbType{};

  QueryXpackRelateDBRequest() {}

  explicit QueryXpackRelateDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hasSingleNode) {
      res["HasSingleNode"] = boost::any(*hasSingleNode);
    }
    if (relateDbType) {
      res["RelateDbType"] = boost::any(*relateDbType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HasSingleNode") != m.end() && !m["HasSingleNode"].empty()) {
      hasSingleNode = make_shared<bool>(boost::any_cast<bool>(m["HasSingleNode"]));
    }
    if (m.find("RelateDbType") != m.end() && !m["RelateDbType"].empty()) {
      relateDbType = make_shared<string>(boost::any_cast<string>(m["RelateDbType"]));
    }
  }


  virtual ~QueryXpackRelateDBRequest() = default;
};
class QueryXpackRelateDBResponseBodyClusterListCluster : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<bool> isRelated{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> status{};

  QueryXpackRelateDBResponseBodyClusterListCluster() {}

  explicit QueryXpackRelateDBResponseBodyClusterListCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (isRelated) {
      res["IsRelated"] = boost::any(*isRelated);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
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
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("IsRelated") != m.end() && !m["IsRelated"].empty()) {
      isRelated = make_shared<bool>(boost::any_cast<bool>(m["IsRelated"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryXpackRelateDBResponseBodyClusterListCluster() = default;
};
class QueryXpackRelateDBResponseBodyClusterList : public Darabonba::Model {
public:
  shared_ptr<vector<QueryXpackRelateDBResponseBodyClusterListCluster>> cluster{};

  QueryXpackRelateDBResponseBodyClusterList() {}

  explicit QueryXpackRelateDBResponseBodyClusterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      vector<boost::any> temp1;
      for(auto item1:*cluster){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cluster"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cluster") != m.end() && !m["Cluster"].empty()) {
      if (typeid(vector<boost::any>) == m["Cluster"].type()) {
        vector<QueryXpackRelateDBResponseBodyClusterListCluster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cluster"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryXpackRelateDBResponseBodyClusterListCluster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cluster = make_shared<vector<QueryXpackRelateDBResponseBodyClusterListCluster>>(expect1);
      }
    }
  }


  virtual ~QueryXpackRelateDBResponseBodyClusterList() = default;
};
class QueryXpackRelateDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryXpackRelateDBResponseBodyClusterList> clusterList{};
  shared_ptr<string> requestId{};

  QueryXpackRelateDBResponseBody() {}

  explicit QueryXpackRelateDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterList) {
      res["ClusterList"] = clusterList ? boost::any(clusterList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterList") != m.end() && !m["ClusterList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterList"].type()) {
        QueryXpackRelateDBResponseBodyClusterList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterList"]));
        clusterList = make_shared<QueryXpackRelateDBResponseBodyClusterList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryXpackRelateDBResponseBody() = default;
};
class QueryXpackRelateDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryXpackRelateDBResponseBody> body{};

  QueryXpackRelateDBResponse() {}

  explicit QueryXpackRelateDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryXpackRelateDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryXpackRelateDBResponseBody>(model1);
      }
    }
  }


  virtual ~QueryXpackRelateDBResponse() = default;
};
class RelateDbForHBaseHaRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> haActive{};
  shared_ptr<string> haActiveClusterKey{};
  shared_ptr<string> haActiveDBType{};
  shared_ptr<string> haActiveHbaseFsDir{};
  shared_ptr<string> haActiveHdfsUri{};
  shared_ptr<string> haActivePassword{};
  shared_ptr<string> haActiveUser{};
  shared_ptr<string> haActiveVersion{};
  shared_ptr<string> haMigrateType{};
  shared_ptr<string> haStandby{};
  shared_ptr<string> haStandbyClusterKey{};
  shared_ptr<string> haStandbyDBType{};
  shared_ptr<string> haStandbyHbaseFsDir{};
  shared_ptr<string> haStandbyHdfsUri{};
  shared_ptr<string> haStandbyPassword{};
  shared_ptr<string> haStandbyUser{};
  shared_ptr<string> haStandbyVersion{};
  shared_ptr<string> haTables{};
  shared_ptr<bool> isActiveStandard{};
  shared_ptr<bool> isStandbyStandard{};

  RelateDbForHBaseHaRequest() {}

  explicit RelateDbForHBaseHaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (haActive) {
      res["HaActive"] = boost::any(*haActive);
    }
    if (haActiveClusterKey) {
      res["HaActiveClusterKey"] = boost::any(*haActiveClusterKey);
    }
    if (haActiveDBType) {
      res["HaActiveDBType"] = boost::any(*haActiveDBType);
    }
    if (haActiveHbaseFsDir) {
      res["HaActiveHbaseFsDir"] = boost::any(*haActiveHbaseFsDir);
    }
    if (haActiveHdfsUri) {
      res["HaActiveHdfsUri"] = boost::any(*haActiveHdfsUri);
    }
    if (haActivePassword) {
      res["HaActivePassword"] = boost::any(*haActivePassword);
    }
    if (haActiveUser) {
      res["HaActiveUser"] = boost::any(*haActiveUser);
    }
    if (haActiveVersion) {
      res["HaActiveVersion"] = boost::any(*haActiveVersion);
    }
    if (haMigrateType) {
      res["HaMigrateType"] = boost::any(*haMigrateType);
    }
    if (haStandby) {
      res["HaStandby"] = boost::any(*haStandby);
    }
    if (haStandbyClusterKey) {
      res["HaStandbyClusterKey"] = boost::any(*haStandbyClusterKey);
    }
    if (haStandbyDBType) {
      res["HaStandbyDBType"] = boost::any(*haStandbyDBType);
    }
    if (haStandbyHbaseFsDir) {
      res["HaStandbyHbaseFsDir"] = boost::any(*haStandbyHbaseFsDir);
    }
    if (haStandbyHdfsUri) {
      res["HaStandbyHdfsUri"] = boost::any(*haStandbyHdfsUri);
    }
    if (haStandbyPassword) {
      res["HaStandbyPassword"] = boost::any(*haStandbyPassword);
    }
    if (haStandbyUser) {
      res["HaStandbyUser"] = boost::any(*haStandbyUser);
    }
    if (haStandbyVersion) {
      res["HaStandbyVersion"] = boost::any(*haStandbyVersion);
    }
    if (haTables) {
      res["HaTables"] = boost::any(*haTables);
    }
    if (isActiveStandard) {
      res["IsActiveStandard"] = boost::any(*isActiveStandard);
    }
    if (isStandbyStandard) {
      res["IsStandbyStandard"] = boost::any(*isStandbyStandard);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HaActive") != m.end() && !m["HaActive"].empty()) {
      haActive = make_shared<string>(boost::any_cast<string>(m["HaActive"]));
    }
    if (m.find("HaActiveClusterKey") != m.end() && !m["HaActiveClusterKey"].empty()) {
      haActiveClusterKey = make_shared<string>(boost::any_cast<string>(m["HaActiveClusterKey"]));
    }
    if (m.find("HaActiveDBType") != m.end() && !m["HaActiveDBType"].empty()) {
      haActiveDBType = make_shared<string>(boost::any_cast<string>(m["HaActiveDBType"]));
    }
    if (m.find("HaActiveHbaseFsDir") != m.end() && !m["HaActiveHbaseFsDir"].empty()) {
      haActiveHbaseFsDir = make_shared<string>(boost::any_cast<string>(m["HaActiveHbaseFsDir"]));
    }
    if (m.find("HaActiveHdfsUri") != m.end() && !m["HaActiveHdfsUri"].empty()) {
      haActiveHdfsUri = make_shared<string>(boost::any_cast<string>(m["HaActiveHdfsUri"]));
    }
    if (m.find("HaActivePassword") != m.end() && !m["HaActivePassword"].empty()) {
      haActivePassword = make_shared<string>(boost::any_cast<string>(m["HaActivePassword"]));
    }
    if (m.find("HaActiveUser") != m.end() && !m["HaActiveUser"].empty()) {
      haActiveUser = make_shared<string>(boost::any_cast<string>(m["HaActiveUser"]));
    }
    if (m.find("HaActiveVersion") != m.end() && !m["HaActiveVersion"].empty()) {
      haActiveVersion = make_shared<string>(boost::any_cast<string>(m["HaActiveVersion"]));
    }
    if (m.find("HaMigrateType") != m.end() && !m["HaMigrateType"].empty()) {
      haMigrateType = make_shared<string>(boost::any_cast<string>(m["HaMigrateType"]));
    }
    if (m.find("HaStandby") != m.end() && !m["HaStandby"].empty()) {
      haStandby = make_shared<string>(boost::any_cast<string>(m["HaStandby"]));
    }
    if (m.find("HaStandbyClusterKey") != m.end() && !m["HaStandbyClusterKey"].empty()) {
      haStandbyClusterKey = make_shared<string>(boost::any_cast<string>(m["HaStandbyClusterKey"]));
    }
    if (m.find("HaStandbyDBType") != m.end() && !m["HaStandbyDBType"].empty()) {
      haStandbyDBType = make_shared<string>(boost::any_cast<string>(m["HaStandbyDBType"]));
    }
    if (m.find("HaStandbyHbaseFsDir") != m.end() && !m["HaStandbyHbaseFsDir"].empty()) {
      haStandbyHbaseFsDir = make_shared<string>(boost::any_cast<string>(m["HaStandbyHbaseFsDir"]));
    }
    if (m.find("HaStandbyHdfsUri") != m.end() && !m["HaStandbyHdfsUri"].empty()) {
      haStandbyHdfsUri = make_shared<string>(boost::any_cast<string>(m["HaStandbyHdfsUri"]));
    }
    if (m.find("HaStandbyPassword") != m.end() && !m["HaStandbyPassword"].empty()) {
      haStandbyPassword = make_shared<string>(boost::any_cast<string>(m["HaStandbyPassword"]));
    }
    if (m.find("HaStandbyUser") != m.end() && !m["HaStandbyUser"].empty()) {
      haStandbyUser = make_shared<string>(boost::any_cast<string>(m["HaStandbyUser"]));
    }
    if (m.find("HaStandbyVersion") != m.end() && !m["HaStandbyVersion"].empty()) {
      haStandbyVersion = make_shared<string>(boost::any_cast<string>(m["HaStandbyVersion"]));
    }
    if (m.find("HaTables") != m.end() && !m["HaTables"].empty()) {
      haTables = make_shared<string>(boost::any_cast<string>(m["HaTables"]));
    }
    if (m.find("IsActiveStandard") != m.end() && !m["IsActiveStandard"].empty()) {
      isActiveStandard = make_shared<bool>(boost::any_cast<bool>(m["IsActiveStandard"]));
    }
    if (m.find("IsStandbyStandard") != m.end() && !m["IsStandbyStandard"].empty()) {
      isStandbyStandard = make_shared<bool>(boost::any_cast<bool>(m["IsStandbyStandard"]));
    }
  }


  virtual ~RelateDbForHBaseHaRequest() = default;
};
class RelateDbForHBaseHaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RelateDbForHBaseHaResponseBody() {}

  explicit RelateDbForHBaseHaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RelateDbForHBaseHaResponseBody() = default;
};
class RelateDbForHBaseHaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RelateDbForHBaseHaResponseBody> body{};

  RelateDbForHBaseHaResponse() {}

  explicit RelateDbForHBaseHaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RelateDbForHBaseHaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RelateDbForHBaseHaResponseBody>(model1);
      }
    }
  }


  virtual ~RelateDbForHBaseHaResponse() = default;
};
class ReleasePublicNetworkAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  ReleasePublicNetworkAddressRequest() {}

  explicit ReleasePublicNetworkAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~ReleasePublicNetworkAddressRequest() = default;
};
class ReleasePublicNetworkAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleasePublicNetworkAddressResponseBody() {}

  explicit ReleasePublicNetworkAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleasePublicNetworkAddressResponseBody() = default;
};
class ReleasePublicNetworkAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReleasePublicNetworkAddressResponseBody> body{};

  ReleasePublicNetworkAddressResponse() {}

  explicit ReleasePublicNetworkAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReleasePublicNetworkAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleasePublicNetworkAddressResponseBody>(model1);
      }
    }
  }


  virtual ~ReleasePublicNetworkAddressResponse() = default;
};
class RenewInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> duration{};
  shared_ptr<string> pricingCycle{};

  RenewInstanceRequest() {}

  explicit RenewInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
  }


  virtual ~RenewInstanceRequest() = default;
};
class RenewInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  RenewInstanceResponseBody() {}

  explicit RenewInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RenewInstanceResponseBody() = default;
};
class RenewInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RenewInstanceResponseBody> body{};

  RenewInstanceResponse() {}

  explicit RenewInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RenewInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RenewInstanceResponse() = default;
};
class ResizeColdStorageSizeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> coldStorageSize{};

  ResizeColdStorageSizeRequest() {}

  explicit ResizeColdStorageSizeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (coldStorageSize) {
      res["ColdStorageSize"] = boost::any(*coldStorageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ColdStorageSize") != m.end() && !m["ColdStorageSize"].empty()) {
      coldStorageSize = make_shared<long>(boost::any_cast<long>(m["ColdStorageSize"]));
    }
  }


  virtual ~ResizeColdStorageSizeRequest() = default;
};
class ResizeColdStorageSizeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ResizeColdStorageSizeResponseBody() {}

  explicit ResizeColdStorageSizeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResizeColdStorageSizeResponseBody() = default;
};
class ResizeColdStorageSizeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResizeColdStorageSizeResponseBody> body{};

  ResizeColdStorageSizeResponse() {}

  explicit ResizeColdStorageSizeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResizeColdStorageSizeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResizeColdStorageSizeResponseBody>(model1);
      }
    }
  }


  virtual ~ResizeColdStorageSizeResponse() = default;
};
class ResizeDiskSizeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> nodeDiskSize{};

  ResizeDiskSizeRequest() {}

  explicit ResizeDiskSizeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (nodeDiskSize) {
      res["NodeDiskSize"] = boost::any(*nodeDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("NodeDiskSize") != m.end() && !m["NodeDiskSize"].empty()) {
      nodeDiskSize = make_shared<long>(boost::any_cast<long>(m["NodeDiskSize"]));
    }
  }


  virtual ~ResizeDiskSizeRequest() = default;
};
class ResizeDiskSizeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ResizeDiskSizeResponseBody() {}

  explicit ResizeDiskSizeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResizeDiskSizeResponseBody() = default;
};
class ResizeDiskSizeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResizeDiskSizeResponseBody> body{};

  ResizeDiskSizeResponse() {}

  explicit ResizeDiskSizeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResizeDiskSizeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResizeDiskSizeResponseBody>(model1);
      }
    }
  }


  virtual ~ResizeDiskSizeResponse() = default;
};
class ResizeMultiZoneClusterDiskSizeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> coreDiskSize{};
  shared_ptr<long> logDiskSize{};

  ResizeMultiZoneClusterDiskSizeRequest() {}

  explicit ResizeMultiZoneClusterDiskSizeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (coreDiskSize) {
      res["CoreDiskSize"] = boost::any(*coreDiskSize);
    }
    if (logDiskSize) {
      res["LogDiskSize"] = boost::any(*logDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CoreDiskSize") != m.end() && !m["CoreDiskSize"].empty()) {
      coreDiskSize = make_shared<long>(boost::any_cast<long>(m["CoreDiskSize"]));
    }
    if (m.find("LogDiskSize") != m.end() && !m["LogDiskSize"].empty()) {
      logDiskSize = make_shared<long>(boost::any_cast<long>(m["LogDiskSize"]));
    }
  }


  virtual ~ResizeMultiZoneClusterDiskSizeRequest() = default;
};
class ResizeMultiZoneClusterDiskSizeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ResizeMultiZoneClusterDiskSizeResponseBody() {}

  explicit ResizeMultiZoneClusterDiskSizeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResizeMultiZoneClusterDiskSizeResponseBody() = default;
};
class ResizeMultiZoneClusterDiskSizeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResizeMultiZoneClusterDiskSizeResponseBody> body{};

  ResizeMultiZoneClusterDiskSizeResponse() {}

  explicit ResizeMultiZoneClusterDiskSizeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResizeMultiZoneClusterDiskSizeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResizeMultiZoneClusterDiskSizeResponseBody>(model1);
      }
    }
  }


  virtual ~ResizeMultiZoneClusterDiskSizeResponse() = default;
};
class ResizeMultiZoneClusterNodeCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> arbiterVSwitchId{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> coreNodeCount{};
  shared_ptr<long> logNodeCount{};
  shared_ptr<long> primaryCoreNodeCount{};
  shared_ptr<string> primaryVSwitchId{};
  shared_ptr<long> standbyCoreNodeCount{};
  shared_ptr<string> standbyVSwitchId{};

  ResizeMultiZoneClusterNodeCountRequest() {}

  explicit ResizeMultiZoneClusterNodeCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arbiterVSwitchId) {
      res["ArbiterVSwitchId"] = boost::any(*arbiterVSwitchId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (coreNodeCount) {
      res["CoreNodeCount"] = boost::any(*coreNodeCount);
    }
    if (logNodeCount) {
      res["LogNodeCount"] = boost::any(*logNodeCount);
    }
    if (primaryCoreNodeCount) {
      res["PrimaryCoreNodeCount"] = boost::any(*primaryCoreNodeCount);
    }
    if (primaryVSwitchId) {
      res["PrimaryVSwitchId"] = boost::any(*primaryVSwitchId);
    }
    if (standbyCoreNodeCount) {
      res["StandbyCoreNodeCount"] = boost::any(*standbyCoreNodeCount);
    }
    if (standbyVSwitchId) {
      res["StandbyVSwitchId"] = boost::any(*standbyVSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArbiterVSwitchId") != m.end() && !m["ArbiterVSwitchId"].empty()) {
      arbiterVSwitchId = make_shared<string>(boost::any_cast<string>(m["ArbiterVSwitchId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CoreNodeCount") != m.end() && !m["CoreNodeCount"].empty()) {
      coreNodeCount = make_shared<long>(boost::any_cast<long>(m["CoreNodeCount"]));
    }
    if (m.find("LogNodeCount") != m.end() && !m["LogNodeCount"].empty()) {
      logNodeCount = make_shared<long>(boost::any_cast<long>(m["LogNodeCount"]));
    }
    if (m.find("PrimaryCoreNodeCount") != m.end() && !m["PrimaryCoreNodeCount"].empty()) {
      primaryCoreNodeCount = make_shared<long>(boost::any_cast<long>(m["PrimaryCoreNodeCount"]));
    }
    if (m.find("PrimaryVSwitchId") != m.end() && !m["PrimaryVSwitchId"].empty()) {
      primaryVSwitchId = make_shared<string>(boost::any_cast<string>(m["PrimaryVSwitchId"]));
    }
    if (m.find("StandbyCoreNodeCount") != m.end() && !m["StandbyCoreNodeCount"].empty()) {
      standbyCoreNodeCount = make_shared<long>(boost::any_cast<long>(m["StandbyCoreNodeCount"]));
    }
    if (m.find("StandbyVSwitchId") != m.end() && !m["StandbyVSwitchId"].empty()) {
      standbyVSwitchId = make_shared<string>(boost::any_cast<string>(m["StandbyVSwitchId"]));
    }
  }


  virtual ~ResizeMultiZoneClusterNodeCountRequest() = default;
};
class ResizeMultiZoneClusterNodeCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ResizeMultiZoneClusterNodeCountResponseBody() {}

  explicit ResizeMultiZoneClusterNodeCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResizeMultiZoneClusterNodeCountResponseBody() = default;
};
class ResizeMultiZoneClusterNodeCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResizeMultiZoneClusterNodeCountResponseBody> body{};

  ResizeMultiZoneClusterNodeCountResponse() {}

  explicit ResizeMultiZoneClusterNodeCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResizeMultiZoneClusterNodeCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResizeMultiZoneClusterNodeCountResponseBody>(model1);
      }
    }
  }


  virtual ~ResizeMultiZoneClusterNodeCountResponse() = default;
};
class ResizeNodeCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  ResizeNodeCountRequest() {}

  explicit ResizeNodeCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ResizeNodeCountRequest() = default;
};
class ResizeNodeCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ResizeNodeCountResponseBody() {}

  explicit ResizeNodeCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResizeNodeCountResponseBody() = default;
};
class ResizeNodeCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResizeNodeCountResponseBody> body{};

  ResizeNodeCountResponse() {}

  explicit ResizeNodeCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResizeNodeCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResizeNodeCountResponseBody>(model1);
      }
    }
  }


  virtual ~ResizeNodeCountResponse() = default;
};
class RestartInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> components{};

  RestartInstanceRequest() {}

  explicit RestartInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (components) {
      res["Components"] = boost::any(*components);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      components = make_shared<string>(boost::any_cast<string>(m["Components"]));
    }
  }


  virtual ~RestartInstanceRequest() = default;
};
class RestartInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RestartInstanceResponseBody() {}

  explicit RestartInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RestartInstanceResponseBody() = default;
};
class RestartInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RestartInstanceResponseBody> body{};

  RestartInstanceResponse() {}

  explicit RestartInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RestartInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RestartInstanceResponse() = default;
};
class SwitchHbaseHaSlbRequest : public Darabonba::Model {
public:
  shared_ptr<string> bdsId{};
  shared_ptr<string> haId{};
  shared_ptr<string> haTypes{};
  shared_ptr<string> hbaseType{};

  SwitchHbaseHaSlbRequest() {}

  explicit SwitchHbaseHaSlbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bdsId) {
      res["BdsId"] = boost::any(*bdsId);
    }
    if (haId) {
      res["HaId"] = boost::any(*haId);
    }
    if (haTypes) {
      res["HaTypes"] = boost::any(*haTypes);
    }
    if (hbaseType) {
      res["HbaseType"] = boost::any(*hbaseType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BdsId") != m.end() && !m["BdsId"].empty()) {
      bdsId = make_shared<string>(boost::any_cast<string>(m["BdsId"]));
    }
    if (m.find("HaId") != m.end() && !m["HaId"].empty()) {
      haId = make_shared<string>(boost::any_cast<string>(m["HaId"]));
    }
    if (m.find("HaTypes") != m.end() && !m["HaTypes"].empty()) {
      haTypes = make_shared<string>(boost::any_cast<string>(m["HaTypes"]));
    }
    if (m.find("HbaseType") != m.end() && !m["HbaseType"].empty()) {
      hbaseType = make_shared<string>(boost::any_cast<string>(m["HbaseType"]));
    }
  }


  virtual ~SwitchHbaseHaSlbRequest() = default;
};
class SwitchHbaseHaSlbResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SwitchHbaseHaSlbResponseBody() {}

  explicit SwitchHbaseHaSlbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SwitchHbaseHaSlbResponseBody() = default;
};
class SwitchHbaseHaSlbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SwitchHbaseHaSlbResponseBody> body{};

  SwitchHbaseHaSlbResponse() {}

  explicit SwitchHbaseHaSlbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SwitchHbaseHaSlbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchHbaseHaSlbResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchHbaseHaSlbResponse() = default;
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
class UnTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<string>> tagKey{};

  UnTagResourcesRequest() {}

  explicit UnTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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


  virtual ~UnTagResourcesRequest() = default;
};
class UnTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnTagResourcesResponseBody() {}

  explicit UnTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnTagResourcesResponseBody() = default;
};
class UnTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnTagResourcesResponseBody> body{};

  UnTagResourcesResponse() {}

  explicit UnTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UnTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UnTagResourcesResponse() = default;
};
class UpgradeMinorVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> components{};

  UpgradeMinorVersionRequest() {}

  explicit UpgradeMinorVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (components) {
      res["Components"] = boost::any(*components);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      components = make_shared<string>(boost::any_cast<string>(m["Components"]));
    }
  }


  virtual ~UpgradeMinorVersionRequest() = default;
};
class UpgradeMinorVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> upgradingComponents{};

  UpgradeMinorVersionResponseBody() {}

  explicit UpgradeMinorVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (upgradingComponents) {
      res["UpgradingComponents"] = boost::any(*upgradingComponents);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UpgradingComponents") != m.end() && !m["UpgradingComponents"].empty()) {
      upgradingComponents = make_shared<string>(boost::any_cast<string>(m["UpgradingComponents"]));
    }
  }


  virtual ~UpgradeMinorVersionResponseBody() = default;
};
class UpgradeMinorVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeMinorVersionResponseBody> body{};

  UpgradeMinorVersionResponse() {}

  explicit UpgradeMinorVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpgradeMinorVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeMinorVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeMinorVersionResponse() = default;
};
class UpgradeMultiZoneClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> components{};
  shared_ptr<string> restartComponents{};
  shared_ptr<string> runMode{};
  shared_ptr<string> upgradeInsName{};
  shared_ptr<string> versions{};

  UpgradeMultiZoneClusterRequest() {}

  explicit UpgradeMultiZoneClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (components) {
      res["Components"] = boost::any(*components);
    }
    if (restartComponents) {
      res["RestartComponents"] = boost::any(*restartComponents);
    }
    if (runMode) {
      res["RunMode"] = boost::any(*runMode);
    }
    if (upgradeInsName) {
      res["UpgradeInsName"] = boost::any(*upgradeInsName);
    }
    if (versions) {
      res["Versions"] = boost::any(*versions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      components = make_shared<string>(boost::any_cast<string>(m["Components"]));
    }
    if (m.find("RestartComponents") != m.end() && !m["RestartComponents"].empty()) {
      restartComponents = make_shared<string>(boost::any_cast<string>(m["RestartComponents"]));
    }
    if (m.find("RunMode") != m.end() && !m["RunMode"].empty()) {
      runMode = make_shared<string>(boost::any_cast<string>(m["RunMode"]));
    }
    if (m.find("UpgradeInsName") != m.end() && !m["UpgradeInsName"].empty()) {
      upgradeInsName = make_shared<string>(boost::any_cast<string>(m["UpgradeInsName"]));
    }
    if (m.find("Versions") != m.end() && !m["Versions"].empty()) {
      versions = make_shared<string>(boost::any_cast<string>(m["Versions"]));
    }
  }


  virtual ~UpgradeMultiZoneClusterRequest() = default;
};
class UpgradeMultiZoneClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> upgradingComponents{};

  UpgradeMultiZoneClusterResponseBody() {}

  explicit UpgradeMultiZoneClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (upgradingComponents) {
      res["UpgradingComponents"] = boost::any(*upgradingComponents);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UpgradingComponents") != m.end() && !m["UpgradingComponents"].empty()) {
      upgradingComponents = make_shared<string>(boost::any_cast<string>(m["UpgradingComponents"]));
    }
  }


  virtual ~UpgradeMultiZoneClusterResponseBody() = default;
};
class UpgradeMultiZoneClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeMultiZoneClusterResponseBody> body{};

  UpgradeMultiZoneClusterResponse() {}

  explicit UpgradeMultiZoneClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpgradeMultiZoneClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeMultiZoneClusterResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeMultiZoneClusterResponse() = default;
};
class XpackRelateDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> dbClusterIds{};
  shared_ptr<string> relateDbType{};

  XpackRelateDBRequest() {}

  explicit XpackRelateDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dbClusterIds) {
      res["DbClusterIds"] = boost::any(*dbClusterIds);
    }
    if (relateDbType) {
      res["RelateDbType"] = boost::any(*relateDbType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DbClusterIds") != m.end() && !m["DbClusterIds"].empty()) {
      dbClusterIds = make_shared<string>(boost::any_cast<string>(m["DbClusterIds"]));
    }
    if (m.find("RelateDbType") != m.end() && !m["RelateDbType"].empty()) {
      relateDbType = make_shared<string>(boost::any_cast<string>(m["RelateDbType"]));
    }
  }


  virtual ~XpackRelateDBRequest() = default;
};
class XpackRelateDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  XpackRelateDBResponseBody() {}

  explicit XpackRelateDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~XpackRelateDBResponseBody() = default;
};
class XpackRelateDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<XpackRelateDBResponseBody> body{};

  XpackRelateDBResponse() {}

  explicit XpackRelateDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        XpackRelateDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<XpackRelateDBResponseBody>(model1);
      }
    }
  }


  virtual ~XpackRelateDBResponse() = default;
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
  AddUserHdfsInfoResponse addUserHdfsInfoWithOptions(shared_ptr<AddUserHdfsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserHdfsInfoResponse addUserHdfsInfo(shared_ptr<AddUserHdfsInfoRequest> request);
  AllocatePublicNetworkAddressResponse allocatePublicNetworkAddressWithOptions(shared_ptr<AllocatePublicNetworkAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocatePublicNetworkAddressResponse allocatePublicNetworkAddress(shared_ptr<AllocatePublicNetworkAddressRequest> request);
  CancelActiveOperationTasksResponse cancelActiveOperationTasksWithOptions(shared_ptr<CancelActiveOperationTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelActiveOperationTasksResponse cancelActiveOperationTasks(shared_ptr<CancelActiveOperationTasksRequest> request);
  CheckComponentsVersionResponse checkComponentsVersionWithOptions(shared_ptr<CheckComponentsVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckComponentsVersionResponse checkComponentsVersion(shared_ptr<CheckComponentsVersionRequest> request);
  CloseBackupResponse closeBackupWithOptions(shared_ptr<CloseBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseBackupResponse closeBackup(shared_ptr<CloseBackupRequest> request);
  ConvertInstanceResponse convertInstanceWithOptions(shared_ptr<ConvertInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertInstanceResponse convertInstance(shared_ptr<ConvertInstanceRequest> request);
  CreateBackupPlanResponse createBackupPlanWithOptions(shared_ptr<CreateBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBackupPlanResponse createBackupPlan(shared_ptr<CreateBackupPlanRequest> request);
  CreateClusterResponse createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<CreateClusterRequest> request);
  CreateGlobalResourceResponse createGlobalResourceWithOptions(shared_ptr<CreateGlobalResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGlobalResourceResponse createGlobalResource(shared_ptr<CreateGlobalResourceRequest> request);
  CreateHBaseSlbServerResponse createHBaseSlbServerWithOptions(shared_ptr<CreateHBaseSlbServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHBaseSlbServerResponse createHBaseSlbServer(shared_ptr<CreateHBaseSlbServerRequest> request);
  CreateHbaseHaSlbResponse createHbaseHaSlbWithOptions(shared_ptr<CreateHbaseHaSlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHbaseHaSlbResponse createHbaseHaSlb(shared_ptr<CreateHbaseHaSlbRequest> request);
  CreateMultiZoneClusterResponse createMultiZoneClusterWithOptions(shared_ptr<CreateMultiZoneClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMultiZoneClusterResponse createMultiZoneCluster(shared_ptr<CreateMultiZoneClusterRequest> request);
  CreateRestorePlanResponse createRestorePlanWithOptions(shared_ptr<CreateRestorePlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRestorePlanResponse createRestorePlan(shared_ptr<CreateRestorePlanRequest> request);
  CreateServerlessClusterResponse createServerlessClusterWithOptions(shared_ptr<CreateServerlessClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServerlessClusterResponse createServerlessCluster(shared_ptr<CreateServerlessClusterRequest> request);
  DeleteGlobalResourceResponse deleteGlobalResourceWithOptions(shared_ptr<DeleteGlobalResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGlobalResourceResponse deleteGlobalResource(shared_ptr<DeleteGlobalResourceRequest> request);
  DeleteHBaseHaDBResponse deleteHBaseHaDBWithOptions(shared_ptr<DeleteHBaseHaDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHBaseHaDBResponse deleteHBaseHaDB(shared_ptr<DeleteHBaseHaDBRequest> request);
  DeleteHBaseSlbServerResponse deleteHBaseSlbServerWithOptions(shared_ptr<DeleteHBaseSlbServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHBaseSlbServerResponse deleteHBaseSlbServer(shared_ptr<DeleteHBaseSlbServerRequest> request);
  DeleteHbaseHaSlbResponse deleteHbaseHaSlbWithOptions(shared_ptr<DeleteHbaseHaSlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHbaseHaSlbResponse deleteHbaseHaSlb(shared_ptr<DeleteHbaseHaSlbRequest> request);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<DeleteInstanceRequest> request);
  DeleteMultiZoneClusterResponse deleteMultiZoneClusterWithOptions(shared_ptr<DeleteMultiZoneClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMultiZoneClusterResponse deleteMultiZoneCluster(shared_ptr<DeleteMultiZoneClusterRequest> request);
  DeleteServerlessClusterResponse deleteServerlessClusterWithOptions(shared_ptr<DeleteServerlessClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServerlessClusterResponse deleteServerlessCluster(shared_ptr<DeleteServerlessClusterRequest> request);
  DeleteUserHdfsInfoResponse deleteUserHdfsInfoWithOptions(shared_ptr<DeleteUserHdfsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserHdfsInfoResponse deleteUserHdfsInfo(shared_ptr<DeleteUserHdfsInfoRequest> request);
  DescribeActiveOperationTaskTypeResponse describeActiveOperationTaskTypeWithOptions(shared_ptr<DescribeActiveOperationTaskTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeActiveOperationTaskTypeResponse describeActiveOperationTaskType(shared_ptr<DescribeActiveOperationTaskTypeRequest> request);
  DescribeActiveOperationTasksResponse describeActiveOperationTasksWithOptions(shared_ptr<DescribeActiveOperationTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeActiveOperationTasksResponse describeActiveOperationTasks(shared_ptr<DescribeActiveOperationTasksRequest> request);
  DescribeAvailableResourceResponse describeAvailableResourceWithOptions(shared_ptr<DescribeAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAvailableResourceResponse describeAvailableResource(shared_ptr<DescribeAvailableResourceRequest> request);
  DescribeBackupPlanConfigResponse describeBackupPlanConfigWithOptions(shared_ptr<DescribeBackupPlanConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPlanConfigResponse describeBackupPlanConfig(shared_ptr<DescribeBackupPlanConfigRequest> request);
  DescribeBackupPolicyResponse describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPolicyResponse describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request);
  DescribeBackupStatusResponse describeBackupStatusWithOptions(shared_ptr<DescribeBackupStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupStatusResponse describeBackupStatus(shared_ptr<DescribeBackupStatusRequest> request);
  DescribeBackupSummaryResponse describeBackupSummaryWithOptions(shared_ptr<DescribeBackupSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupSummaryResponse describeBackupSummary(shared_ptr<DescribeBackupSummaryRequest> request);
  DescribeBackupTablesResponse describeBackupTablesWithOptions(shared_ptr<DescribeBackupTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupTablesResponse describeBackupTables(shared_ptr<DescribeBackupTablesRequest> request);
  DescribeBackupsResponse describeBackupsWithOptions(shared_ptr<DescribeBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupsResponse describeBackups(shared_ptr<DescribeBackupsRequest> request);
  DescribeClusterConnectionResponse describeClusterConnectionWithOptions(shared_ptr<DescribeClusterConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterConnectionResponse describeClusterConnection(shared_ptr<DescribeClusterConnectionRequest> request);
  DescribeColdStorageResponse describeColdStorageWithOptions(shared_ptr<DescribeColdStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeColdStorageResponse describeColdStorage(shared_ptr<DescribeColdStorageRequest> request);
  DescribeDBInstanceUsageResponse describeDBInstanceUsageWithOptions(shared_ptr<DescribeDBInstanceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceUsageResponse describeDBInstanceUsage(shared_ptr<DescribeDBInstanceUsageRequest> request);
  DescribeDeletedInstancesResponse describeDeletedInstancesWithOptions(shared_ptr<DescribeDeletedInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeletedInstancesResponse describeDeletedInstances(shared_ptr<DescribeDeletedInstancesRequest> request);
  DescribeDiskWarningLineResponse describeDiskWarningLineWithOptions(shared_ptr<DescribeDiskWarningLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiskWarningLineResponse describeDiskWarningLine(shared_ptr<DescribeDiskWarningLineRequest> request);
  DescribeEndpointsResponse describeEndpointsWithOptions(shared_ptr<DescribeEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEndpointsResponse describeEndpoints(shared_ptr<DescribeEndpointsRequest> request);
  DescribeInstanceResponse describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceResponse describeInstance(shared_ptr<DescribeInstanceRequest> request);
  DescribeInstanceTypeResponse describeInstanceTypeWithOptions(shared_ptr<DescribeInstanceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceTypeResponse describeInstanceType(shared_ptr<DescribeInstanceTypeRequest> request);
  DescribeInstancesResponse describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstancesResponse describeInstances(shared_ptr<DescribeInstancesRequest> request);
  DescribeIpWhitelistResponse describeIpWhitelistWithOptions(shared_ptr<DescribeIpWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIpWhitelistResponse describeIpWhitelist(shared_ptr<DescribeIpWhitelistRequest> request);
  DescribeMultiZoneAvailableRegionsResponse describeMultiZoneAvailableRegionsWithOptions(shared_ptr<DescribeMultiZoneAvailableRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMultiZoneAvailableRegionsResponse describeMultiZoneAvailableRegions(shared_ptr<DescribeMultiZoneAvailableRegionsRequest> request);
  DescribeMultiZoneAvailableResourceResponse describeMultiZoneAvailableResourceWithOptions(shared_ptr<DescribeMultiZoneAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMultiZoneAvailableResourceResponse describeMultiZoneAvailableResource(shared_ptr<DescribeMultiZoneAvailableResourceRequest> request);
  DescribeMultiZoneClusterResponse describeMultiZoneClusterWithOptions(shared_ptr<DescribeMultiZoneClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMultiZoneClusterResponse describeMultiZoneCluster(shared_ptr<DescribeMultiZoneClusterRequest> request);
  DescribeRecoverableTimeRangeResponse describeRecoverableTimeRangeWithOptions(shared_ptr<DescribeRecoverableTimeRangeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRecoverableTimeRangeResponse describeRecoverableTimeRange(shared_ptr<DescribeRecoverableTimeRangeRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeRestoreFullDetailsResponse describeRestoreFullDetailsWithOptions(shared_ptr<DescribeRestoreFullDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRestoreFullDetailsResponse describeRestoreFullDetails(shared_ptr<DescribeRestoreFullDetailsRequest> request);
  DescribeRestoreIncrDetailResponse describeRestoreIncrDetailWithOptions(shared_ptr<DescribeRestoreIncrDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRestoreIncrDetailResponse describeRestoreIncrDetail(shared_ptr<DescribeRestoreIncrDetailRequest> request);
  DescribeRestoreSchemaDetailsResponse describeRestoreSchemaDetailsWithOptions(shared_ptr<DescribeRestoreSchemaDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRestoreSchemaDetailsResponse describeRestoreSchemaDetails(shared_ptr<DescribeRestoreSchemaDetailsRequest> request);
  DescribeRestoreSummaryResponse describeRestoreSummaryWithOptions(shared_ptr<DescribeRestoreSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRestoreSummaryResponse describeRestoreSummary(shared_ptr<DescribeRestoreSummaryRequest> request);
  DescribeRestoreTablesResponse describeRestoreTablesWithOptions(shared_ptr<DescribeRestoreTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRestoreTablesResponse describeRestoreTables(shared_ptr<DescribeRestoreTablesRequest> request);
  DescribeSecurityGroupsResponse describeSecurityGroupsWithOptions(shared_ptr<DescribeSecurityGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSecurityGroupsResponse describeSecurityGroups(shared_ptr<DescribeSecurityGroupsRequest> request);
  DescribeServerlessClusterResponse describeServerlessClusterWithOptions(shared_ptr<DescribeServerlessClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServerlessClusterResponse describeServerlessCluster(shared_ptr<DescribeServerlessClusterRequest> request);
  DescribeSubDomainResponse describeSubDomainWithOptions(shared_ptr<DescribeSubDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSubDomainResponse describeSubDomain(shared_ptr<DescribeSubDomainRequest> request);
  EnableHBaseueBackupResponse enableHBaseueBackupWithOptions(shared_ptr<EnableHBaseueBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableHBaseueBackupResponse enableHBaseueBackup(shared_ptr<EnableHBaseueBackupRequest> request);
  EnableHBaseueModuleResponse enableHBaseueModuleWithOptions(shared_ptr<EnableHBaseueModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableHBaseueModuleResponse enableHBaseueModule(shared_ptr<EnableHBaseueModuleRequest> request);
  EvaluateMultiZoneResourceResponse evaluateMultiZoneResourceWithOptions(shared_ptr<EvaluateMultiZoneResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EvaluateMultiZoneResourceResponse evaluateMultiZoneResource(shared_ptr<EvaluateMultiZoneResourceRequest> request);
  GetMultimodeCmsUrlResponse getMultimodeCmsUrlWithOptions(shared_ptr<GetMultimodeCmsUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMultimodeCmsUrlResponse getMultimodeCmsUrl(shared_ptr<GetMultimodeCmsUrlRequest> request);
  ListHBaseInstancesResponse listHBaseInstancesWithOptions(shared_ptr<ListHBaseInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHBaseInstancesResponse listHBaseInstances(shared_ptr<ListHBaseInstancesRequest> request);
  ListInstanceServiceConfigHistoriesResponse listInstanceServiceConfigHistoriesWithOptions(shared_ptr<ListInstanceServiceConfigHistoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceServiceConfigHistoriesResponse listInstanceServiceConfigHistories(shared_ptr<ListInstanceServiceConfigHistoriesRequest> request);
  ListInstanceServiceConfigurationsResponse listInstanceServiceConfigurationsWithOptions(shared_ptr<ListInstanceServiceConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceServiceConfigurationsResponse listInstanceServiceConfigurations(shared_ptr<ListInstanceServiceConfigurationsRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTagsResponse listTagsWithOptions(shared_ptr<ListTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagsResponse listTags(shared_ptr<ListTagsRequest> request);
  ModifyActiveOperationTasksResponse modifyActiveOperationTasksWithOptions(shared_ptr<ModifyActiveOperationTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyActiveOperationTasksResponse modifyActiveOperationTasks(shared_ptr<ModifyActiveOperationTasksRequest> request);
  ModifyBackupPlanConfigResponse modifyBackupPlanConfigWithOptions(shared_ptr<ModifyBackupPlanConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBackupPlanConfigResponse modifyBackupPlanConfig(shared_ptr<ModifyBackupPlanConfigRequest> request);
  ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBackupPolicyResponse modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request);
  ModifyClusterDeletionProtectionResponse modifyClusterDeletionProtectionWithOptions(shared_ptr<ModifyClusterDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterDeletionProtectionResponse modifyClusterDeletionProtection(shared_ptr<ModifyClusterDeletionProtectionRequest> request);
  ModifyDiskWarningLineResponse modifyDiskWarningLineWithOptions(shared_ptr<ModifyDiskWarningLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDiskWarningLineResponse modifyDiskWarningLine(shared_ptr<ModifyDiskWarningLineRequest> request);
  ModifyInstanceMaintainTimeResponse modifyInstanceMaintainTimeWithOptions(shared_ptr<ModifyInstanceMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceMaintainTimeResponse modifyInstanceMaintainTime(shared_ptr<ModifyInstanceMaintainTimeRequest> request);
  ModifyInstanceNameResponse modifyInstanceNameWithOptions(shared_ptr<ModifyInstanceNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceNameResponse modifyInstanceName(shared_ptr<ModifyInstanceNameRequest> request);
  ModifyInstanceServiceConfigResponse modifyInstanceServiceConfigWithOptions(shared_ptr<ModifyInstanceServiceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceServiceConfigResponse modifyInstanceServiceConfig(shared_ptr<ModifyInstanceServiceConfigRequest> request);
  ModifyInstanceTypeResponse modifyInstanceTypeWithOptions(shared_ptr<ModifyInstanceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceTypeResponse modifyInstanceType(shared_ptr<ModifyInstanceTypeRequest> request);
  ModifyIpWhitelistResponse modifyIpWhitelistWithOptions(shared_ptr<ModifyIpWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyIpWhitelistResponse modifyIpWhitelist(shared_ptr<ModifyIpWhitelistRequest> request);
  ModifyMultiZoneClusterNodeTypeResponse modifyMultiZoneClusterNodeTypeWithOptions(shared_ptr<ModifyMultiZoneClusterNodeTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMultiZoneClusterNodeTypeResponse modifyMultiZoneClusterNodeType(shared_ptr<ModifyMultiZoneClusterNodeTypeRequest> request);
  ModifySecurityGroupsResponse modifySecurityGroupsWithOptions(shared_ptr<ModifySecurityGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySecurityGroupsResponse modifySecurityGroups(shared_ptr<ModifySecurityGroupsRequest> request);
  ModifyUIAccountPasswordResponse modifyUIAccountPasswordWithOptions(shared_ptr<ModifyUIAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyUIAccountPasswordResponse modifyUIAccountPassword(shared_ptr<ModifyUIAccountPasswordRequest> request);
  MoveResourceGroupResponse moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourceGroupResponse moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request);
  OpenBackupResponse openBackupWithOptions(shared_ptr<OpenBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenBackupResponse openBackup(shared_ptr<OpenBackupRequest> request);
  PurgeInstanceResponse purgeInstanceWithOptions(shared_ptr<PurgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PurgeInstanceResponse purgeInstance(shared_ptr<PurgeInstanceRequest> request);
  QueryHBaseHaDBResponse queryHBaseHaDBWithOptions(shared_ptr<QueryHBaseHaDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryHBaseHaDBResponse queryHBaseHaDB(shared_ptr<QueryHBaseHaDBRequest> request);
  QueryXpackRelateDBResponse queryXpackRelateDBWithOptions(shared_ptr<QueryXpackRelateDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryXpackRelateDBResponse queryXpackRelateDB(shared_ptr<QueryXpackRelateDBRequest> request);
  RelateDbForHBaseHaResponse relateDbForHBaseHaWithOptions(shared_ptr<RelateDbForHBaseHaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RelateDbForHBaseHaResponse relateDbForHBaseHa(shared_ptr<RelateDbForHBaseHaRequest> request);
  ReleasePublicNetworkAddressResponse releasePublicNetworkAddressWithOptions(shared_ptr<ReleasePublicNetworkAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleasePublicNetworkAddressResponse releasePublicNetworkAddress(shared_ptr<ReleasePublicNetworkAddressRequest> request);
  RenewInstanceResponse renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewInstanceResponse renewInstance(shared_ptr<RenewInstanceRequest> request);
  ResizeColdStorageSizeResponse resizeColdStorageSizeWithOptions(shared_ptr<ResizeColdStorageSizeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResizeColdStorageSizeResponse resizeColdStorageSize(shared_ptr<ResizeColdStorageSizeRequest> request);
  ResizeDiskSizeResponse resizeDiskSizeWithOptions(shared_ptr<ResizeDiskSizeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResizeDiskSizeResponse resizeDiskSize(shared_ptr<ResizeDiskSizeRequest> request);
  ResizeMultiZoneClusterDiskSizeResponse resizeMultiZoneClusterDiskSizeWithOptions(shared_ptr<ResizeMultiZoneClusterDiskSizeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResizeMultiZoneClusterDiskSizeResponse resizeMultiZoneClusterDiskSize(shared_ptr<ResizeMultiZoneClusterDiskSizeRequest> request);
  ResizeMultiZoneClusterNodeCountResponse resizeMultiZoneClusterNodeCountWithOptions(shared_ptr<ResizeMultiZoneClusterNodeCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResizeMultiZoneClusterNodeCountResponse resizeMultiZoneClusterNodeCount(shared_ptr<ResizeMultiZoneClusterNodeCountRequest> request);
  ResizeNodeCountResponse resizeNodeCountWithOptions(shared_ptr<ResizeNodeCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResizeNodeCountResponse resizeNodeCount(shared_ptr<ResizeNodeCountRequest> request);
  RestartInstanceResponse restartInstanceWithOptions(shared_ptr<RestartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartInstanceResponse restartInstance(shared_ptr<RestartInstanceRequest> request);
  SwitchHbaseHaSlbResponse switchHbaseHaSlbWithOptions(shared_ptr<SwitchHbaseHaSlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchHbaseHaSlbResponse switchHbaseHaSlb(shared_ptr<SwitchHbaseHaSlbRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UnTagResourcesResponse unTagResourcesWithOptions(shared_ptr<UnTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnTagResourcesResponse unTagResources(shared_ptr<UnTagResourcesRequest> request);
  UpgradeMinorVersionResponse upgradeMinorVersionWithOptions(shared_ptr<UpgradeMinorVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeMinorVersionResponse upgradeMinorVersion(shared_ptr<UpgradeMinorVersionRequest> request);
  UpgradeMultiZoneClusterResponse upgradeMultiZoneClusterWithOptions(shared_ptr<UpgradeMultiZoneClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeMultiZoneClusterResponse upgradeMultiZoneCluster(shared_ptr<UpgradeMultiZoneClusterRequest> request);
  XpackRelateDBResponse xpackRelateDBWithOptions(shared_ptr<XpackRelateDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  XpackRelateDBResponse xpackRelateDB(shared_ptr<XpackRelateDBRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_HBase20190101

#endif
